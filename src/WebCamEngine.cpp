/*
Copyright (c) 2015 Sergey Svistunov
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#include "stdafx.h"
#include "webcamengine.h"
#include <dshow.h> // Заголовочный файл DirectShow
#include <Qedit.h>
#include <iostream>
#include <objbase.h>
#include <streams.h>
#include <strmif.h>

// Необходимые билиотеки!
//#pragma comment(lib,"strmiids.lib")

// Здесь можно задать размеры окна с изображением
#define DEFAULT_VIDEO_WIDTH     320
#define DEFAULT_VIDEO_HEIGHT    240
//
// CallBack класс для SampleGrabbera
//
// this object is a SEMI-COM object, and can only be created statically.


void SaveFrame(BITMAPINFO bi, BYTE *data, unsigned long size)
{
		DWORD bufsize = size;
		//m_bSaveToFile = false;
		BITMAPFILEHEADER bfh;
		memset( &bfh, 0, sizeof( bfh ) );
		bfh.bfType = 'MB';
		bfh.bfSize = sizeof( bfh ) + bufsize + sizeof( BITMAPINFOHEADER );
		bfh.bfOffBits = sizeof( BITMAPINFOHEADER ) + sizeof( BITMAPFILEHEADER );

		DWORD Written = 0;

		// Write the bitmap format			
		BITMAPINFOHEADER bih;
		memset( &bih, 0, sizeof( bih ) );
		bih.biSize = sizeof( bih );
		bih.biWidth = bi.bmiHeader.biWidth;
		bih.biHeight = bi.bmiHeader.biHeight;
		bih.biPlanes = 1;
		bih.biBitCount = 24;

		char FileName[256];
		sprintf(FileName, "capture_%d.bmp", (int)GetTickCount());
		FILE * out = fopen(FileName,"wb");
		if(out)
		{
			fwrite(&bfh, sizeof(bfh),1, out);
			fwrite(&bih, sizeof(bih),1, out);
			fwrite(data, bufsize,1, out);
			fclose(out);
		}

}
class CSampleGrabberCB : public ISampleGrabberCB 
{
	public:
	
		// Эти параметры устанавливаются главным потоком
		DWORD lastTime;
		long Width;
		long Height;
		
		HANDLE BufferEvent;
		LONGLONG prev, step; // не используется

		// Fake out any COM ref counting
		STDMETHODIMP_(ULONG) AddRef() { return 2; }
		STDMETHODIMP_(ULONG) Release() { return 1; }

CSampleGrabberCB()
{
	lastTime =0;
}
		// Fake out any COM QI'ing
		STDMETHODIMP QueryInterface(REFIID riid, void ** ppv)
		{
			CheckPointer(ppv,E_POINTER);
	        
			if( riid == IID_ISampleGrabberCB || riid == IID_IUnknown ) 
			{
				*ppv = (void *) static_cast<ISampleGrabberCB*> ( this );
				return NOERROR;
			}    

			return E_NOINTERFACE;
		}

		// Не используется
		//
		STDMETHODIMP SampleCB( double SampleTime, IMediaSample * pSample )
		{
			return 0;
		}


    // Callback ф-ия вызываемая SampleGrabber-ом, в другом потоке
    //
		STDMETHODIMP BufferCB( double SampleTime, BYTE * pBuffer, long BufferSize )
		{

			BITMAPFILEHEADER bfh;
			memset( &bfh, 0, sizeof( bfh ) );
			bfh.bfType = 'MB';
			bfh.bfSize = sizeof( bfh ) + BufferSize + sizeof( BITMAPINFOHEADER );
			bfh.bfOffBits = sizeof( BITMAPINFOHEADER ) + sizeof( BITMAPFILEHEADER );

			DWORD Written = 0;

			// Write the bitmap format

			BITMAPINFOHEADER bih;
			memset( &bih, 0, sizeof( bih ) );
			bih.biSize = sizeof( bih );
			bih.biWidth = Width;
			bih.biHeight = Height;
			bih.biPlanes = 1;
			bih.biBitCount = 24;

			BITMAPINFO bi;
			
			bi.bmiHeader=bih;

			DWORD newTime = GetTickCount();
			if(newTime-lastTime>1000)
			{
				lastTime = newTime;
				SaveFrame(bi, pBuffer, BufferSize);
			}

			return 0;
		}
};



enum PLAYSTATE {Stopped, Paused, Running, Init};
PLAYSTATE psCurrent = Stopped;							// Переменная состояния видео потока

// Интерфейсы DirectShow
IMediaControl *pMediaControl = NULL;					// Управление графом
IMediaEvent *pMediaEvent = NULL;	
IGraphBuilder *pGraphBuilder = NULL;					// Наш граф вцелом
ICaptureGraphBuilder2 *pCaptureGraphBuilder2 = NULL;	// Граф захвата видео
IVideoWindow *pVideoWindow = NULL;						// Окно, в которое выводится видео поток
IMoniker *pMonikerVideo = NULL;							// Устройство видеозахвата
IBaseFilter *pVideoCaptureFilter = NULL;				// Фильтр видеозахвата
IBaseFilter *pGrabberF = NULL;
ISampleGrabber *pSampleGrabber = NULL;

void SetupVideoWindow(void)	// Настройка окна для вывода видео на экран
{
	pVideoWindow->put_Left(0); 
	pVideoWindow->put_Width(DEFAULT_VIDEO_WIDTH); 
	pVideoWindow->put_Top(0); 
	pVideoWindow->put_Height(DEFAULT_VIDEO_HEIGHT); 
	pVideoWindow->put_Caption(L"Video Window");
}

HRESULT GetInterfaces(void)		// Инициализация интерфесов DirectShow
{
    HRESULT hr;

    // Создание графа фильтров
    hr = CoCreateInstance (CLSID_FilterGraph, NULL, CLSCTX_INPROC,
        IID_IGraphBuilder, (void **) &pGraphBuilder);
    if (FAILED(hr))
        return hr;

    // Создание графа захвата видео
    hr = CoCreateInstance (CLSID_CaptureGraphBuilder2 , NULL, CLSCTX_INPROC,
        IID_ICaptureGraphBuilder2, (void **) &pCaptureGraphBuilder2);
    if (FAILED(hr))
        return hr;

	// Получим интерфейсы для управления графом и окном
    hr = pGraphBuilder->QueryInterface(IID_IMediaControl,(LPVOID *) &pMediaControl);
    if (FAILED(hr))
        return hr;


    hr = pGraphBuilder->QueryInterface(IID_IVideoWindow, (LPVOID *) &pVideoWindow);
    if (FAILED(hr))
        return hr;

	 hr = pGraphBuilder->QueryInterface(IID_IMediaEvent,(LPVOID *) &pMediaEvent);
    if (FAILED(hr))
        return hr;
	 

	 // ------------------------
	// Create the Sample Grabber.
	
	hr = CoCreateInstance(CLSID_SampleGrabber, NULL, CLSCTX_INPROC_SERVER,
		 IID_IBaseFilter, (void**)&pGrabberF);
	if (FAILED(hr))
	{
		return hr;
		 // Return an error.
	}

	  hr = pGrabberF->QueryInterface(IID_ISampleGrabber, (void**)&pSampleGrabber);
	  if(FAILED(hr)) std::cout<<"\nERROR: QueryInterface";
	
	//----------------------
  
	return hr;
}

void CloseInterfaces(void)		// Закрытие интерфейсов DirectShow
{
    // Остановить видео
	if (pMediaControl)
		pMediaControl->StopWhenReady();
    psCurrent = Stopped;

    // Закрытие окна
    if(pVideoWindow) pVideoWindow->put_Visible(OAFALSE);
   
	// Закрытие остальных интерфейсов
    pMediaControl->Release();
	pGraphBuilder->Release();
	pVideoWindow->Release();
	pCaptureGraphBuilder2->Release();
}

HRESULT InitMonikers()		// Инициализация устройства видеозахвата
{
	HRESULT hr;
	ULONG cFetched;

	ICreateDevEnum *pCreateDevEnum;		// Интерфейс для обнаружения и перечисления всех доступных устройств
    hr = CoCreateInstance(CLSID_SystemDeviceEnum, NULL, CLSCTX_INPROC_SERVER, IID_ICreateDevEnum, (void**)&pCreateDevEnum);
	if (FAILED(hr))
    {
		printf("Failed to enumerate all video and audio capture devices!  hr=0x%x\n", hr);
		return hr;
    }

	IEnumMoniker *pEnumMoniker;			// Интерфейс, который будет содержать список всех доступных устройств

	//	Обнаружение подключенный устройств видеозахвата
	hr = pCreateDevEnum->CreateClassEnumerator(CLSID_VideoInputDeviceCategory,&pEnumMoniker, 0);
	if (FAILED(hr) || !pEnumMoniker)
    {
		printf("Failed to create ClassEnumerator!  hr=0x%x\n", hr);
        return -1;
    }

	


	// Выбор активного устройства в фильтр pMonikerVideo. Мы берем первое из списка для простоты
	hr = pEnumMoniker->Next(1, &pMonikerVideo, &cFetched);
	if (S_OK == hr)
    {
		// Соединяем устройство с нашим фильтром захвата видео
        hr = pMonikerVideo->BindToObject(0,0,IID_IBaseFilter, (void**)&pVideoCaptureFilter);
		if (FAILED(hr))
		{
			printf("Couldn't bind moniker to filter object!  hr=0x%x\n", hr);
			return hr;
		}
    }
	pEnumMoniker->Release();
}


HRESULT GetUnconnectedPin(
    IBaseFilter *pFilter,   // Pointer to the filter.
    PIN_DIRECTION PinDir,   // Direction of the pin to find.
    IPin **ppPin)           // Receives a pointer to the pin.
{
    *ppPin = 0;
    IEnumPins *pEnum = 0;
    IPin *pPin = 0;
    HRESULT hr = pFilter->EnumPins(&pEnum);
    if (FAILED(hr))
    {
        return hr;
    }
    while (pEnum->Next(1, &pPin, NULL) == S_OK)
    {
        PIN_DIRECTION ThisPinDir;
        pPin->QueryDirection(&ThisPinDir);
        if (ThisPinDir == PinDir)
        {
            IPin *pTmp = 0;
            hr = pPin->ConnectedTo(&pTmp);
            if (SUCCEEDED(hr))  // Already connected, not the pin we want.
            {
                pTmp->Release();
            }
            else  // Unconnected, this is the pin we want.
            {
                pEnum->Release();
                *ppPin = pPin;
                return S_OK;
            }
        }
        pPin->Release();
    }
    pEnum->Release();
    // Did not find a matching pin.
    return E_FAIL;
}
HRESULT ConnectFilters(
    IGraphBuilder *pGraph, // Filter Graph Manager.
    IPin *pOut,            // Output pin on the upstream filter.
    IBaseFilter *pDest)    // Downstream filter.
{
    if ((pGraph == NULL) || (pOut == NULL) || (pDest == NULL))
    {
        return E_POINTER;
    }
#ifdef debug
        PIN_DIRECTION PinDir;
        pOut->QueryDirection(&PinDir);
        _ASSERTE(PinDir == PINDIR_OUTPUT);
#endif

    // Find an input pin on the downstream filter.
    IPin *pIn = 0;
    HRESULT hr = GetUnconnectedPin(pDest, PINDIR_INPUT, &pIn);
    if (FAILED(hr))
    {
        return hr;
    }
    // Try to connect them.
    hr = pGraph->Connect(pOut, pIn);
    pIn->Release();
    return hr;
}
HRESULT ConnectFilters(
    IGraphBuilder *pGraph, 
    IBaseFilter *pSrc, 
    IBaseFilter *pDest)
{
    if ((pGraph == NULL) || (pSrc == NULL) || (pDest == NULL))
    {
        return E_POINTER;
    }

    // Find an output pin on the first filter.
    IPin *pOut = 0;
    HRESULT hr = GetUnconnectedPin(pSrc, PINDIR_OUTPUT, &pOut);
    if (FAILED(hr)) 
    {
        return hr;
    }
    hr = ConnectFilters(pGraph, pOut, pDest);
    pOut->Release();
    return hr;
}

char *pBuffer=NULL;


HRESULT CaptureVideo()		// Захват видео
{
	HRESULT hr = CoInitialize(NULL);	// Инициализация DirectShow
	
	// Инициализация необходимых интерфейсов
	hr = GetInterfaces();
	if (FAILED(hr))
    {
		printf("Failed to get video interfaces!  hr=0x%x\n", hr);
        return hr;
    }
	
	// Присоединим граф захвата видео к основному графу фильтров
	hr = pCaptureGraphBuilder2->SetFiltergraph(pGraphBuilder);
	if (FAILED(hr))
    {
		printf("Failed to attach the filter graph to the capture graph!  hr=0x%x\n", hr);
        return hr;
    }
	
	// Подключение к устройству захвата
	
	hr = InitMonikers();
	if(FAILED(hr))
	{
	MessageBox(GetActiveWindow(),_T("Видеоустройство не найдено"), 0 ,  0);
	return hr;}
	
	// Поместить фильтр захвата видео на граф фильтров
	hr = pGraphBuilder->AddFilter(pVideoCaptureFilter, L"Video Capture");
    if (FAILED(hr))
    {
        printf("Couldn't add video capture filter to graph!  hr=0x%x\n", hr);
        pVideoCaptureFilter->Release();
        return hr;
    }

	 AM_MEDIA_TYPE mt;
	ZeroMemory(&mt, sizeof(AM_MEDIA_TYPE));
	mt.majortype = MEDIATYPE_Video;
	mt.subtype = MEDIASUBTYPE_RGB24;
	hr = pSampleGrabber->SetMediaType(&mt);
	 hr = pSampleGrabber->SetBufferSamples(TRUE);

	 hr = pGraphBuilder->AddFilter(pGrabberF, L"Sample Grabber");
	if (FAILED(hr))
	{
		 printf("Couldn't add sample grabber to graph!  hr=0x%x\n", hr);
		 // Return an error.
	}
	
	// Подключаем этот фильтр к устройству
	hr = pCaptureGraphBuilder2->RenderStream(&PIN_CATEGORY_PREVIEW, &MEDIATYPE_Video, pVideoCaptureFilter, pGrabberF, 0 );
	if (FAILED(hr))
    {
        printf("Couldn't render video capture stream. The device may already be in use.  hr=0x%x\n", hr);
        pVideoCaptureFilter->Release();
        return hr;
    }


	hr = pSampleGrabber->GetConnectedMediaType( &mt );
	if(FAILED( hr ))
	{
		//GrabInfo(  TEXT("Unable to determine what we connected.") );
		return -1; 
	}
	VIDEOINFOHEADER * vih = (VIDEOINFOHEADER*) mt.pbFormat;


	CSampleGrabberCB *CB  = new CSampleGrabberCB() ;
	if(!FAILED( hr ))
	{
		CB->Width  = vih->bmiHeader.biWidth;
		CB->Height = vih->bmiHeader.biHeight;
		//FreeMediaType( mt );
	}
	hr = pSampleGrabber->SetCallback( CB, 1 );


	// Этот фильтр захвата видео больше не понадобится
	pVideoCaptureFilter->Release();

	// Инициализация окна для вывода изображения
    SetupVideoWindow();
    	
	// Начинаем захват видео
	hr = pMediaControl->Run();
	if (FAILED(hr))
    {
        printf("Couldn't run the graph!  hr=0x%x\n", hr);
        return hr;
    }
	else psCurrent = Running;
	return hr;
}

void StopPreview()	// Остановить видео
{
	pMediaControl->Stop();
	// Закрываем все интерфейсы DirectShow
    CloseInterfaces();
	CoUninitialize();
	psCurrent = Stopped;
}

int main()
{
	HRESULT hr;														// Результат операций. Будет содержать код ошибки
	char cmd;														// Код команды, вводимой пользователем

	printf("p - Play Video\ns - Stop Video\nq - Quit\n\n");

	while (true)
	{
		std::cin >> cmd;
		switch(cmd)
		{
		case 'p': {													// Запуск видео
					printf("	Play Video!\n");
					hr = CaptureVideo();
					if (FAILED(hr))	printf("Error!");
				}break;
		case 's': {													// Выключение видео
					printf("	Stop Video!\n");
                	if (psCurrent == Running) StopPreview();
					else printf ("Video already stopped.\n");
				}break;
		case 'q': return 0;											// Выход из программы
			break;
		default: printf("Unknown command!\n");
			break;
		}
	}
}