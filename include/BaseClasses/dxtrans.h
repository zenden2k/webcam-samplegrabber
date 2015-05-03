//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft end-user
// license agreement (EULA) under which you licensed this SOFTWARE PRODUCT.
// If you did not accept the terms of the EULA, you are not authorized to use
// this source code. For a copy of the EULA, please see the LICENSE.RTF on your
// install media.
//

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Tue Mar 08 17:14:58 2005
 */
/* Compiler settings for .\dxtrans.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __dxtrans_h__
#define __dxtrans_h__

/* Forward Declarations */ 

#ifndef __IDXBaseObject_FWD_DEFINED__
#define __IDXBaseObject_FWD_DEFINED__
typedef interface IDXBaseObject IDXBaseObject;
#endif 	/* __IDXBaseObject_FWD_DEFINED__ */


#ifndef __IDXTransformFactory_FWD_DEFINED__
#define __IDXTransformFactory_FWD_DEFINED__
typedef interface IDXTransformFactory IDXTransformFactory;
#endif 	/* __IDXTransformFactory_FWD_DEFINED__ */


#ifndef __IDXTransform_FWD_DEFINED__
#define __IDXTransform_FWD_DEFINED__
typedef interface IDXTransform IDXTransform;
#endif 	/* __IDXTransform_FWD_DEFINED__ */


#ifndef __IDXSurfacePick_FWD_DEFINED__
#define __IDXSurfacePick_FWD_DEFINED__
typedef interface IDXSurfacePick IDXSurfacePick;
#endif 	/* __IDXSurfacePick_FWD_DEFINED__ */


#ifndef __IDXTBindHost_FWD_DEFINED__
#define __IDXTBindHost_FWD_DEFINED__
typedef interface IDXTBindHost IDXTBindHost;
#endif 	/* __IDXTBindHost_FWD_DEFINED__ */


#ifndef __IDXSurfaceFactory_FWD_DEFINED__
#define __IDXSurfaceFactory_FWD_DEFINED__
typedef interface IDXSurfaceFactory IDXSurfaceFactory;
#endif 	/* __IDXSurfaceFactory_FWD_DEFINED__ */


#ifndef __IDXSurfaceModifier_FWD_DEFINED__
#define __IDXSurfaceModifier_FWD_DEFINED__
typedef interface IDXSurfaceModifier IDXSurfaceModifier;
#endif 	/* __IDXSurfaceModifier_FWD_DEFINED__ */


#ifndef __IDXSurface_FWD_DEFINED__
#define __IDXSurface_FWD_DEFINED__
typedef interface IDXSurface IDXSurface;
#endif 	/* __IDXSurface_FWD_DEFINED__ */


#ifndef __IDXSurfaceInit_FWD_DEFINED__
#define __IDXSurfaceInit_FWD_DEFINED__
typedef interface IDXSurfaceInit IDXSurfaceInit;
#endif 	/* __IDXSurfaceInit_FWD_DEFINED__ */


#ifndef __IDXARGBSurfaceInit_FWD_DEFINED__
#define __IDXARGBSurfaceInit_FWD_DEFINED__
typedef interface IDXARGBSurfaceInit IDXARGBSurfaceInit;
#endif 	/* __IDXARGBSurfaceInit_FWD_DEFINED__ */


#ifndef __IDXARGBReadPtr_FWD_DEFINED__
#define __IDXARGBReadPtr_FWD_DEFINED__
typedef interface IDXARGBReadPtr IDXARGBReadPtr;
#endif 	/* __IDXARGBReadPtr_FWD_DEFINED__ */


#ifndef __IDXARGBReadWritePtr_FWD_DEFINED__
#define __IDXARGBReadWritePtr_FWD_DEFINED__
typedef interface IDXARGBReadWritePtr IDXARGBReadWritePtr;
#endif 	/* __IDXARGBReadWritePtr_FWD_DEFINED__ */


#ifndef __IDXDCLock_FWD_DEFINED__
#define __IDXDCLock_FWD_DEFINED__
typedef interface IDXDCLock IDXDCLock;
#endif 	/* __IDXDCLock_FWD_DEFINED__ */


#ifndef __IDXTScaleOutput_FWD_DEFINED__
#define __IDXTScaleOutput_FWD_DEFINED__
typedef interface IDXTScaleOutput IDXTScaleOutput;
#endif 	/* __IDXTScaleOutput_FWD_DEFINED__ */


#ifndef __IDXTScale_FWD_DEFINED__
#define __IDXTScale_FWD_DEFINED__
typedef interface IDXTScale IDXTScale;
#endif 	/* __IDXTScale_FWD_DEFINED__ */


#ifndef __IDXEffect_FWD_DEFINED__
#define __IDXEffect_FWD_DEFINED__
typedef interface IDXEffect IDXEffect;
#endif 	/* __IDXEffect_FWD_DEFINED__ */


#ifndef __IDXLookupTable_FWD_DEFINED__
#define __IDXLookupTable_FWD_DEFINED__
typedef interface IDXLookupTable IDXLookupTable;
#endif 	/* __IDXLookupTable_FWD_DEFINED__ */


#ifndef __IDXRawSurface_FWD_DEFINED__
#define __IDXRawSurface_FWD_DEFINED__
typedef interface IDXRawSurface IDXRawSurface;
#endif 	/* __IDXRawSurface_FWD_DEFINED__ */


#ifndef __IHTMLDXTransform_FWD_DEFINED__
#define __IHTMLDXTransform_FWD_DEFINED__
typedef interface IHTMLDXTransform IHTMLDXTransform;
#endif 	/* __IHTMLDXTransform_FWD_DEFINED__ */


#ifndef __ICSSFilterDispatch_FWD_DEFINED__
#define __ICSSFilterDispatch_FWD_DEFINED__
typedef interface ICSSFilterDispatch ICSSFilterDispatch;
#endif 	/* __ICSSFilterDispatch_FWD_DEFINED__ */


#ifndef __DXTransformFactory_FWD_DEFINED__
#define __DXTransformFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTransformFactory DXTransformFactory;
#else
typedef struct DXTransformFactory DXTransformFactory;
#endif /* __cplusplus */

#endif 	/* __DXTransformFactory_FWD_DEFINED__ */


#ifndef __DXTScale_FWD_DEFINED__
#define __DXTScale_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTScale DXTScale;
#else
typedef struct DXTScale DXTScale;
#endif /* __cplusplus */

#endif 	/* __DXTScale_FWD_DEFINED__ */


#ifndef __DXSurface_FWD_DEFINED__
#define __DXSurface_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXSurface DXSurface;
#else
typedef struct DXSurface DXSurface;
#endif /* __cplusplus */

#endif 	/* __DXSurface_FWD_DEFINED__ */


#ifndef __DXSurfaceModifier_FWD_DEFINED__
#define __DXSurfaceModifier_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXSurfaceModifier DXSurfaceModifier;
#else
typedef struct DXSurfaceModifier DXSurfaceModifier;
#endif /* __cplusplus */

#endif 	/* __DXSurfaceModifier_FWD_DEFINED__ */


#ifndef __DXTFilter_FWD_DEFINED__
#define __DXTFilter_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTFilter DXTFilter;
#else
typedef struct DXTFilter DXTFilter;
#endif /* __cplusplus */

#endif 	/* __DXTFilter_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "servprov.h"
#include "comcat.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_dxtrans_0000 */
/* [local] */ 

//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft end-user
// license agreement (EULA) under which you licensed this SOFTWARE PRODUCT.
// If you did not accept the terms of the EULA, you are not authorized to use
// this source code. For a copy of the EULA, please see the LICENSE.RTF on your
// install media.
//
#include <servprov.h>
#include <ddraw.h>
#include <urlmon.h>
#if 0
// Bogus definition used to make MIDL compiler happy
typedef void DDSURFACEDESC;

typedef void D3DRMBOX;

typedef void D3DVECTOR;

typedef void D3DRMMATRIX4D;

typedef void __RPC_FAR *LPSECURITY_ATTRIBUTES;

#endif
#ifdef _DXTRANSIMPL
    #define _DXTRANS_IMPL_EXT _declspec(dllexport)
#else
    #define _DXTRANS_IMPL_EXT _declspec(dllimport)
#endif














//
//   All GUIDs for DXTransform are declared in DXTGUID.C in the SDK include directory
//
EXTERN_C const GUID DDPF_RGB1;
EXTERN_C const GUID DDPF_RGB2;
EXTERN_C const GUID DDPF_RGB4;
EXTERN_C const GUID DDPF_RGB8;
EXTERN_C const GUID DDPF_RGB332;
EXTERN_C const GUID DDPF_ARGB4444;
EXTERN_C const GUID DDPF_RGB565;
EXTERN_C const GUID DDPF_BGR565;
EXTERN_C const GUID DDPF_RGB555;
EXTERN_C const GUID DDPF_ARGB1555;
EXTERN_C const GUID DDPF_RGB24;
EXTERN_C const GUID DDPF_BGR24;
EXTERN_C const GUID DDPF_RGB32;
EXTERN_C const GUID DDPF_BGR32;
EXTERN_C const GUID DDPF_ABGR32;
EXTERN_C const GUID DDPF_ARGB32;
EXTERN_C const GUID DDPF_PMARGB32;
EXTERN_C const GUID DDPF_A1;
EXTERN_C const GUID DDPF_A2;
EXTERN_C const GUID DDPF_A4;
EXTERN_C const GUID DDPF_A8;
EXTERN_C const GUID DDPF_Z8;
EXTERN_C const GUID DDPF_Z16;
EXTERN_C const GUID DDPF_Z24;
EXTERN_C const GUID DDPF_Z32;
//
//   Component categories
//
EXTERN_C const GUID CATID_DXImageTransform;
EXTERN_C const GUID CATID_DX3DTransform;
EXTERN_C const GUID CATID_DXAuthoringTransform;
EXTERN_C const GUID CATID_DXSurface;
//
//   Service IDs
//
EXTERN_C const GUID SID_SDirectDraw;
EXTERN_C const GUID SID_SDirect3DRM;
#define SID_SDXTaskManager CLSID_DXTaskManager
#define SID_SDXSurfaceFactory IID_IDXSurfaceFactory
#define SID_SDXTransformFactory IID_IDXTransformFactory
//
//   DXTransforms Core Type Library Version Info
//
#define DXTRANS_TLB_MAJOR_VER 1
#define DXTRANS_TLB_MINOR_VER 1


extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0000_v0_0_s_ifspec;

#ifndef __IDXBaseObject_INTERFACE_DEFINED__
#define __IDXBaseObject_INTERFACE_DEFINED__

/* interface IDXBaseObject */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXBaseObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17B59B2B-9CC8-11d1-9053-00C04FD9189D")
    IDXBaseObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetGenerationId( 
            /* [out] */ ULONG __RPC_FAR *pID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IncrementGenerationId( 
            /* [in] */ BOOL bRefresh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectSize( 
            /* [out] */ ULONG __RPC_FAR *pcbSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXBaseObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXBaseObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXBaseObject __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXBaseObject __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetGenerationId )( 
            IDXBaseObject __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pID);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IncrementGenerationId )( 
            IDXBaseObject __RPC_FAR * This,
            /* [in] */ BOOL bRefresh);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetObjectSize )( 
            IDXBaseObject __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pcbSize);
        
        END_INTERFACE
    } IDXBaseObjectVtbl;

    interface IDXBaseObject
    {
        CONST_VTBL struct IDXBaseObjectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXBaseObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXBaseObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXBaseObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXBaseObject_GetGenerationId(This,pID)	\
    (This)->lpVtbl -> GetGenerationId(This,pID)

#define IDXBaseObject_IncrementGenerationId(This,bRefresh)	\
    (This)->lpVtbl -> IncrementGenerationId(This,bRefresh)

#define IDXBaseObject_GetObjectSize(This,pcbSize)	\
    (This)->lpVtbl -> GetObjectSize(This,pcbSize)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXBaseObject_GetGenerationId_Proxy( 
    IDXBaseObject __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pID);


void __RPC_STUB IDXBaseObject_GetGenerationId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXBaseObject_IncrementGenerationId_Proxy( 
    IDXBaseObject __RPC_FAR * This,
    /* [in] */ BOOL bRefresh);


void __RPC_STUB IDXBaseObject_IncrementGenerationId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXBaseObject_GetObjectSize_Proxy( 
    IDXBaseObject __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pcbSize);


void __RPC_STUB IDXBaseObject_GetObjectSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXBaseObject_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtrans_0155 */
/* [local] */ 

typedef 
enum DXBNDID
    {	DXB_X	= 0,
	DXB_Y	= 1,
	DXB_Z	= 2,
	DXB_T	= 3
    }	DXBNDID;

typedef 
enum DXBNDTYPE
    {	DXBT_DISCRETE	= 0,
	DXBT_DISCRETE64	= DXBT_DISCRETE + 1,
	DXBT_CONTINUOUS	= DXBT_DISCRETE64 + 1,
	DXBT_CONTINUOUS64	= DXBT_CONTINUOUS + 1
    }	DXBNDTYPE;

typedef struct DXDBND
    {
    long Min;
    long Max;
    }	DXDBND;

typedef DXDBND __RPC_FAR DXDBNDS[ 4 ];

typedef struct DXDBND64
    {
    LONGLONG Min;
    LONGLONG Max;
    }	DXDBND64;

typedef DXDBND64 __RPC_FAR DXDBNDS64[ 4 ];

typedef struct DXCBND
    {
    float Min;
    float Max;
    }	DXCBND;

typedef DXCBND __RPC_FAR DXCBNDS[ 4 ];

typedef struct DXCBND64
    {
    double Min;
    double Max;
    }	DXCBND64;

typedef DXCBND64 __RPC_FAR DXCBNDS64[ 4 ];

typedef struct DXBNDS
    {
    DXBNDTYPE eType;
    /* [switch_is] */ /* [switch_type] */ union __MIDL___MIDL_itf_dxtrans_0155_0001
        {
        /* [case()] */ DXDBND D[ 4 ];
        /* [case()] */ DXDBND64 LD[ 4 ];
        /* [case()] */ DXCBND C[ 4 ];
        /* [case()] */ DXCBND64 LC[ 4 ];
        }	u;
    }	DXBNDS;

typedef long __RPC_FAR DXDVEC[ 4 ];

typedef LONGLONG __RPC_FAR DXDVEC64[ 4 ];

typedef float __RPC_FAR DXCVEC[ 4 ];

typedef double __RPC_FAR DXCVEC64[ 4 ];

typedef struct DXVEC
    {
    DXBNDTYPE eType;
    /* [switch_is] */ /* [switch_type] */ union __MIDL___MIDL_itf_dxtrans_0155_0002
        {
        /* [case()] */ long D[ 4 ];
        /* [case()] */ LONGLONG LD[ 4 ];
        /* [case()] */ float C[ 4 ];
        /* [case()] */ double LC[ 4 ];
        }	u;
    }	DXVEC;



extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0155_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0155_v0_0_s_ifspec;

#ifndef __IDXTransformFactory_INTERFACE_DEFINED__
#define __IDXTransformFactory_INTERFACE_DEFINED__

/* interface IDXTransformFactory */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTransformFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6A950B2B-A971-11d1-81C8-0000F87557DB")
    IDXTransformFactory : public IServiceProvider
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetService( 
            /* [in] */ REFGUID guidService,
            /* [in] */ IUnknown __RPC_FAR *pUnkService,
            /* [in] */ BOOL bWeakReference) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTransform( 
            /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkInputs,
            /* [in] */ ULONG ulNumInputs,
            /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkOutputs,
            /* [in] */ ULONG ulNumOutputs,
            /* [in] */ IPropertyBag __RPC_FAR *pInitProps,
            /* [in] */ IErrorLog __RPC_FAR *pErrLog,
            /* [in] */ REFCLSID TransCLSID,
            /* [in] */ REFIID TransIID,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppTransform) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeTransform( 
            /* [in] */ IDXTransform __RPC_FAR *pTransform,
            /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkInputs,
            /* [in] */ ULONG ulNumInputs,
            /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkOutputs,
            /* [in] */ ULONG ulNumOutputs,
            /* [in] */ IPropertyBag __RPC_FAR *pInitProps,
            /* [in] */ IErrorLog __RPC_FAR *pErrLog) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTransformFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTransformFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTransformFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTransformFactory __RPC_FAR * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryService )( 
            IDXTransformFactory __RPC_FAR * This,
            /* [in] */ REFGUID guidService,
            /* [in] */ REFIID riid,
            /* [out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetService )( 
            IDXTransformFactory __RPC_FAR * This,
            /* [in] */ REFGUID guidService,
            /* [in] */ IUnknown __RPC_FAR *pUnkService,
            /* [in] */ BOOL bWeakReference);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateTransform )( 
            IDXTransformFactory __RPC_FAR * This,
            /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkInputs,
            /* [in] */ ULONG ulNumInputs,
            /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkOutputs,
            /* [in] */ ULONG ulNumOutputs,
            /* [in] */ IPropertyBag __RPC_FAR *pInitProps,
            /* [in] */ IErrorLog __RPC_FAR *pErrLog,
            /* [in] */ REFCLSID TransCLSID,
            /* [in] */ REFIID TransIID,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppTransform);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InitializeTransform )( 
            IDXTransformFactory __RPC_FAR * This,
            /* [in] */ IDXTransform __RPC_FAR *pTransform,
            /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkInputs,
            /* [in] */ ULONG ulNumInputs,
            /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkOutputs,
            /* [in] */ ULONG ulNumOutputs,
            /* [in] */ IPropertyBag __RPC_FAR *pInitProps,
            /* [in] */ IErrorLog __RPC_FAR *pErrLog);
        
        END_INTERFACE
    } IDXTransformFactoryVtbl;

    interface IDXTransformFactory
    {
        CONST_VTBL struct IDXTransformFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTransformFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTransformFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTransformFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTransformFactory_QueryService(This,guidService,riid,ppvObject)	\
    (This)->lpVtbl -> QueryService(This,guidService,riid,ppvObject)


#define IDXTransformFactory_SetService(This,guidService,pUnkService,bWeakReference)	\
    (This)->lpVtbl -> SetService(This,guidService,pUnkService,bWeakReference)

#define IDXTransformFactory_CreateTransform(This,punkInputs,ulNumInputs,punkOutputs,ulNumOutputs,pInitProps,pErrLog,TransCLSID,TransIID,ppTransform)	\
    (This)->lpVtbl -> CreateTransform(This,punkInputs,ulNumInputs,punkOutputs,ulNumOutputs,pInitProps,pErrLog,TransCLSID,TransIID,ppTransform)

#define IDXTransformFactory_InitializeTransform(This,pTransform,punkInputs,ulNumInputs,punkOutputs,ulNumOutputs,pInitProps,pErrLog)	\
    (This)->lpVtbl -> InitializeTransform(This,pTransform,punkInputs,ulNumInputs,punkOutputs,ulNumOutputs,pInitProps,pErrLog)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTransformFactory_SetService_Proxy( 
    IDXTransformFactory __RPC_FAR * This,
    /* [in] */ REFGUID guidService,
    /* [in] */ IUnknown __RPC_FAR *pUnkService,
    /* [in] */ BOOL bWeakReference);


void __RPC_STUB IDXTransformFactory_SetService_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransformFactory_CreateTransform_Proxy( 
    IDXTransformFactory __RPC_FAR * This,
    /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkInputs,
    /* [in] */ ULONG ulNumInputs,
    /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkOutputs,
    /* [in] */ ULONG ulNumOutputs,
    /* [in] */ IPropertyBag __RPC_FAR *pInitProps,
    /* [in] */ IErrorLog __RPC_FAR *pErrLog,
    /* [in] */ REFCLSID TransCLSID,
    /* [in] */ REFIID TransIID,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppTransform);


void __RPC_STUB IDXTransformFactory_CreateTransform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransformFactory_InitializeTransform_Proxy( 
    IDXTransformFactory __RPC_FAR * This,
    /* [in] */ IDXTransform __RPC_FAR *pTransform,
    /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkInputs,
    /* [in] */ ULONG ulNumInputs,
    /* [size_is][in] */ IUnknown __RPC_FAR *__RPC_FAR *punkOutputs,
    /* [in] */ ULONG ulNumOutputs,
    /* [in] */ IPropertyBag __RPC_FAR *pInitProps,
    /* [in] */ IErrorLog __RPC_FAR *pErrLog);


void __RPC_STUB IDXTransformFactory_InitializeTransform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTransformFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtrans_0156 */
/* [local] */ 

typedef 
enum DXTMISCFLAGS
    {	DXTMF_BLEND_WITH_OUTPUT	= 1L << 0,
	DXTMF_DITHER_OUTPUT	= 1L << 1,
	DXTMF_OPTION_MASK	= 0xffff,
	DXTMF_VALID_OPTIONS	= DXTMF_BLEND_WITH_OUTPUT | DXTMF_DITHER_OUTPUT,
	DXTMF_BLEND_SUPPORTED	= 1L << 16,
	DXTMF_DITHER_SUPPORTED	= 1L << 17,
	DXTMF_INPLACE_OPERATION	= 1L << 24,
	DXTMF_BOUNDS_SUPPORTED	= 1L << 25,
	DXTMF_PLACEMENT_SUPPORTED	= 1L << 26,
	DXTMF_QUALITY_SUPPORTED	= 1L << 27,
	DXTMF_OPAQUE_RESULT	= 1L << 28
    }	DXTMISCFLAGS;

typedef 
enum DXINOUTINFOFLAGS
    {	DXINOUTF_OPTIONAL	= 1L << 0
    }	DXINOUTINFOFLAGS;



extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0156_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0156_v0_0_s_ifspec;

#ifndef __IDXTransform_INTERFACE_DEFINED__
#define __IDXTransform_INTERFACE_DEFINED__

/* interface IDXTransform */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30A5FB78-E11F-11d1-9064-00C04FD9189D")
    IDXTransform : public IDXBaseObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Setup( 
            /* [size_is][in] */ IUnknown __RPC_FAR *const __RPC_FAR *punkInputs,
            /* [in] */ ULONG ulNumInputs,
            /* [size_is][in] */ IUnknown __RPC_FAR *const __RPC_FAR *punkOutputs,
            /* [in] */ ULONG ulNumOutputs,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ const GUID __RPC_FAR *pRequestID,
            /* [in] */ const DXBNDS __RPC_FAR *pClipBnds,
            /* [in] */ const DXVEC __RPC_FAR *pPlacement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapBoundsIn2Out( 
            /* [in] */ const DXBNDS __RPC_FAR *pInBounds,
            /* [in] */ ULONG ulNumInBnds,
            /* [in] */ ULONG ulOutIndex,
            /* [out] */ DXBNDS __RPC_FAR *pOutBounds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapBoundsOut2In( 
            /* [in] */ ULONG ulOutIndex,
            /* [in] */ const DXBNDS __RPC_FAR *pOutBounds,
            /* [in] */ ULONG ulInIndex,
            /* [out] */ DXBNDS __RPC_FAR *pInBounds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMiscFlags( 
            /* [in] */ DWORD dwMiscFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMiscFlags( 
            /* [out] */ DWORD __RPC_FAR *pdwMiscFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInOutInfo( 
            /* [in] */ BOOL bIsOutput,
            /* [in] */ ULONG ulIndex,
            /* [out] */ DWORD __RPC_FAR *pdwFlags,
            /* [size_is][out] */ GUID __RPC_FAR *pIDs,
            /* [out][in] */ ULONG __RPC_FAR *pcIDs,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnkCurrentObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetQuality( 
            /* [in] */ float fQuality) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetQuality( 
            /* [out] */ float __RPC_FAR *fQuality) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTransformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTransform __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTransform __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTransform __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetGenerationId )( 
            IDXTransform __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pID);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IncrementGenerationId )( 
            IDXTransform __RPC_FAR * This,
            /* [in] */ BOOL bRefresh);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetObjectSize )( 
            IDXTransform __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pcbSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Setup )( 
            IDXTransform __RPC_FAR * This,
            /* [size_is][in] */ IUnknown __RPC_FAR *const __RPC_FAR *punkInputs,
            /* [in] */ ULONG ulNumInputs,
            /* [size_is][in] */ IUnknown __RPC_FAR *const __RPC_FAR *punkOutputs,
            /* [in] */ ULONG ulNumOutputs,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Execute )( 
            IDXTransform __RPC_FAR * This,
            /* [in] */ const GUID __RPC_FAR *pRequestID,
            /* [in] */ const DXBNDS __RPC_FAR *pClipBnds,
            /* [in] */ const DXVEC __RPC_FAR *pPlacement);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MapBoundsIn2Out )( 
            IDXTransform __RPC_FAR * This,
            /* [in] */ const DXBNDS __RPC_FAR *pInBounds,
            /* [in] */ ULONG ulNumInBnds,
            /* [in] */ ULONG ulOutIndex,
            /* [out] */ DXBNDS __RPC_FAR *pOutBounds);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MapBoundsOut2In )( 
            IDXTransform __RPC_FAR * This,
            /* [in] */ ULONG ulOutIndex,
            /* [in] */ const DXBNDS __RPC_FAR *pOutBounds,
            /* [in] */ ULONG ulInIndex,
            /* [out] */ DXBNDS __RPC_FAR *pInBounds);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetMiscFlags )( 
            IDXTransform __RPC_FAR * This,
            /* [in] */ DWORD dwMiscFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetMiscFlags )( 
            IDXTransform __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwMiscFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetInOutInfo )( 
            IDXTransform __RPC_FAR * This,
            /* [in] */ BOOL bIsOutput,
            /* [in] */ ULONG ulIndex,
            /* [out] */ DWORD __RPC_FAR *pdwFlags,
            /* [size_is][out] */ GUID __RPC_FAR *pIDs,
            /* [out][in] */ ULONG __RPC_FAR *pcIDs,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnkCurrentObject);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetQuality )( 
            IDXTransform __RPC_FAR * This,
            /* [in] */ float fQuality);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetQuality )( 
            IDXTransform __RPC_FAR * This,
            /* [out] */ float __RPC_FAR *fQuality);
        
        END_INTERFACE
    } IDXTransformVtbl;

    interface IDXTransform
    {
        CONST_VTBL struct IDXTransformVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTransform_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTransform_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTransform_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTransform_GetGenerationId(This,pID)	\
    (This)->lpVtbl -> GetGenerationId(This,pID)

#define IDXTransform_IncrementGenerationId(This,bRefresh)	\
    (This)->lpVtbl -> IncrementGenerationId(This,bRefresh)

#define IDXTransform_GetObjectSize(This,pcbSize)	\
    (This)->lpVtbl -> GetObjectSize(This,pcbSize)


#define IDXTransform_Setup(This,punkInputs,ulNumInputs,punkOutputs,ulNumOutputs,dwFlags)	\
    (This)->lpVtbl -> Setup(This,punkInputs,ulNumInputs,punkOutputs,ulNumOutputs,dwFlags)

#define IDXTransform_Execute(This,pRequestID,pClipBnds,pPlacement)	\
    (This)->lpVtbl -> Execute(This,pRequestID,pClipBnds,pPlacement)

#define IDXTransform_MapBoundsIn2Out(This,pInBounds,ulNumInBnds,ulOutIndex,pOutBounds)	\
    (This)->lpVtbl -> MapBoundsIn2Out(This,pInBounds,ulNumInBnds,ulOutIndex,pOutBounds)

#define IDXTransform_MapBoundsOut2In(This,ulOutIndex,pOutBounds,ulInIndex,pInBounds)	\
    (This)->lpVtbl -> MapBoundsOut2In(This,ulOutIndex,pOutBounds,ulInIndex,pInBounds)

#define IDXTransform_SetMiscFlags(This,dwMiscFlags)	\
    (This)->lpVtbl -> SetMiscFlags(This,dwMiscFlags)

#define IDXTransform_GetMiscFlags(This,pdwMiscFlags)	\
    (This)->lpVtbl -> GetMiscFlags(This,pdwMiscFlags)

#define IDXTransform_GetInOutInfo(This,bIsOutput,ulIndex,pdwFlags,pIDs,pcIDs,ppUnkCurrentObject)	\
    (This)->lpVtbl -> GetInOutInfo(This,bIsOutput,ulIndex,pdwFlags,pIDs,pcIDs,ppUnkCurrentObject)

#define IDXTransform_SetQuality(This,fQuality)	\
    (This)->lpVtbl -> SetQuality(This,fQuality)

#define IDXTransform_GetQuality(This,fQuality)	\
    (This)->lpVtbl -> GetQuality(This,fQuality)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTransform_Setup_Proxy( 
    IDXTransform __RPC_FAR * This,
    /* [size_is][in] */ IUnknown __RPC_FAR *const __RPC_FAR *punkInputs,
    /* [in] */ ULONG ulNumInputs,
    /* [size_is][in] */ IUnknown __RPC_FAR *const __RPC_FAR *punkOutputs,
    /* [in] */ ULONG ulNumOutputs,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDXTransform_Setup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransform_Execute_Proxy( 
    IDXTransform __RPC_FAR * This,
    /* [in] */ const GUID __RPC_FAR *pRequestID,
    /* [in] */ const DXBNDS __RPC_FAR *pClipBnds,
    /* [in] */ const DXVEC __RPC_FAR *pPlacement);


void __RPC_STUB IDXTransform_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransform_MapBoundsIn2Out_Proxy( 
    IDXTransform __RPC_FAR * This,
    /* [in] */ const DXBNDS __RPC_FAR *pInBounds,
    /* [in] */ ULONG ulNumInBnds,
    /* [in] */ ULONG ulOutIndex,
    /* [out] */ DXBNDS __RPC_FAR *pOutBounds);


void __RPC_STUB IDXTransform_MapBoundsIn2Out_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransform_MapBoundsOut2In_Proxy( 
    IDXTransform __RPC_FAR * This,
    /* [in] */ ULONG ulOutIndex,
    /* [in] */ const DXBNDS __RPC_FAR *pOutBounds,
    /* [in] */ ULONG ulInIndex,
    /* [out] */ DXBNDS __RPC_FAR *pInBounds);


void __RPC_STUB IDXTransform_MapBoundsOut2In_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransform_SetMiscFlags_Proxy( 
    IDXTransform __RPC_FAR * This,
    /* [in] */ DWORD dwMiscFlags);


void __RPC_STUB IDXTransform_SetMiscFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransform_GetMiscFlags_Proxy( 
    IDXTransform __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwMiscFlags);


void __RPC_STUB IDXTransform_GetMiscFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransform_GetInOutInfo_Proxy( 
    IDXTransform __RPC_FAR * This,
    /* [in] */ BOOL bIsOutput,
    /* [in] */ ULONG ulIndex,
    /* [out] */ DWORD __RPC_FAR *pdwFlags,
    /* [size_is][out] */ GUID __RPC_FAR *pIDs,
    /* [out][in] */ ULONG __RPC_FAR *pcIDs,
    /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnkCurrentObject);


void __RPC_STUB IDXTransform_GetInOutInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransform_SetQuality_Proxy( 
    IDXTransform __RPC_FAR * This,
    /* [in] */ float fQuality);


void __RPC_STUB IDXTransform_SetQuality_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTransform_GetQuality_Proxy( 
    IDXTransform __RPC_FAR * This,
    /* [out] */ float __RPC_FAR *fQuality);


void __RPC_STUB IDXTransform_GetQuality_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTransform_INTERFACE_DEFINED__ */


#ifndef __IDXSurfacePick_INTERFACE_DEFINED__
#define __IDXSurfacePick_INTERFACE_DEFINED__

/* interface IDXSurfacePick */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXSurfacePick;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30A5FB79-E11F-11d1-9064-00C04FD9189D")
    IDXSurfacePick : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PointPick( 
            /* [in] */ const DXVEC __RPC_FAR *pPoint,
            /* [out] */ ULONG __RPC_FAR *pulInputSurfaceIndex,
            /* [out] */ DXVEC __RPC_FAR *pInputPoint) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXSurfacePickVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXSurfacePick __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXSurfacePick __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXSurfacePick __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PointPick )( 
            IDXSurfacePick __RPC_FAR * This,
            /* [in] */ const DXVEC __RPC_FAR *pPoint,
            /* [out] */ ULONG __RPC_FAR *pulInputSurfaceIndex,
            /* [out] */ DXVEC __RPC_FAR *pInputPoint);
        
        END_INTERFACE
    } IDXSurfacePickVtbl;

    interface IDXSurfacePick
    {
        CONST_VTBL struct IDXSurfacePickVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXSurfacePick_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXSurfacePick_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXSurfacePick_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXSurfacePick_PointPick(This,pPoint,pulInputSurfaceIndex,pInputPoint)	\
    (This)->lpVtbl -> PointPick(This,pPoint,pulInputSurfaceIndex,pInputPoint)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXSurfacePick_PointPick_Proxy( 
    IDXSurfacePick __RPC_FAR * This,
    /* [in] */ const DXVEC __RPC_FAR *pPoint,
    /* [out] */ ULONG __RPC_FAR *pulInputSurfaceIndex,
    /* [out] */ DXVEC __RPC_FAR *pInputPoint);


void __RPC_STUB IDXSurfacePick_PointPick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXSurfacePick_INTERFACE_DEFINED__ */


#ifndef __IDXTBindHost_INTERFACE_DEFINED__
#define __IDXTBindHost_INTERFACE_DEFINED__

/* interface IDXTBindHost */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTBindHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D26BCE55-E9DC-11d1-9066-00C04FD9189D")
    IDXTBindHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBindHost( 
            /* [in] */ IBindHost __RPC_FAR *pBindHost) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTBindHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTBindHost __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTBindHost __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTBindHost __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetBindHost )( 
            IDXTBindHost __RPC_FAR * This,
            /* [in] */ IBindHost __RPC_FAR *pBindHost);
        
        END_INTERFACE
    } IDXTBindHostVtbl;

    interface IDXTBindHost
    {
        CONST_VTBL struct IDXTBindHostVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTBindHost_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTBindHost_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTBindHost_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTBindHost_SetBindHost(This,pBindHost)	\
    (This)->lpVtbl -> SetBindHost(This,pBindHost)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTBindHost_SetBindHost_Proxy( 
    IDXTBindHost __RPC_FAR * This,
    /* [in] */ IBindHost __RPC_FAR *pBindHost);


void __RPC_STUB IDXTBindHost_SetBindHost_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTBindHost_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtrans_0159 */
/* [local] */ 

typedef void __stdcall __stdcall DXTASKPROC( 
    void __RPC_FAR *pTaskData,
    BOOL __RPC_FAR *pbContinueProcessing);

typedef DXTASKPROC __RPC_FAR *PFNDXTASKPROC;

typedef void __stdcall __stdcall DXAPCPROC( 
    DWORD dwData);

typedef DXAPCPROC __RPC_FAR *PFNDXAPCPROC;

#ifdef __cplusplus
typedef struct DXTMTASKINFO
{
    PFNDXTASKPROC pfnTaskProc;       // Pointer to function to execute
    PVOID         pTaskData;         // Pointer to argument data
    PFNDXAPCPROC  pfnCompletionAPC;  // Pointer to completion APC proc
    DWORD         dwCompletionData;  // Pointer to APC proc data
    const GUID*   pRequestID;        // Used to identify groups of tasks
} DXTMTASKINFO;
#else
typedef struct DXTMTASKINFO
    {
    PVOID pfnTaskProc;
    PVOID pTaskData;
    PVOID pfnCompletionAPC;
    DWORD dwCompletionData;
    const GUID __RPC_FAR *pRequestID;
    }	DXTMTASKINFO;

#endif
#ifdef __cplusplus
/////////////////////////////////////////////////////

class DXBASESAMPLE;
class DXSAMPLE;
class DXPMSAMPLE;

/////////////////////////////////////////////////////

class DXBASESAMPLE
{
public:
    BYTE Blue;
    BYTE Green;
    BYTE Red;
    BYTE Alpha;
    DXBASESAMPLE() {}
    DXBASESAMPLE(const BYTE alpha, const BYTE red, const BYTE green, const BYTE blue) :
        Alpha(alpha),
        Red(red),
        Green(green),
        Blue(blue) {}
    DXBASESAMPLE(const DWORD val) { *this = (*(DXBASESAMPLE *)&val); }
    operator DWORD () const {return *((DWORD *)this); }
    DWORD operator=(const DWORD val) { return *this = *((DXBASESAMPLE *)&val); }
}; // DXBASESAMPLE

/////////////////////////////////////////////////////

class DXSAMPLE : public DXBASESAMPLE
{
public:
    DXSAMPLE() {}
    DXSAMPLE(const BYTE alpha, const BYTE red, const BYTE green, const BYTE blue) :
         DXBASESAMPLE(alpha, red, green, blue) {}
    DXSAMPLE(const DWORD val) { *this = (*(DXSAMPLE *)&val); }
    operator DWORD () const {return *((DWORD *)this); }
    DWORD operator=(const DWORD val) { return *this = *((DXSAMPLE *)&val); }
    operator DXPMSAMPLE() const;
}; // DXSAMPLE

/////////////////////////////////////////////////////

class DXPMSAMPLE : public DXBASESAMPLE
{
public:
    DXPMSAMPLE() {}
    DXPMSAMPLE(const BYTE alpha, const BYTE red, const BYTE green, const BYTE blue) :
         DXBASESAMPLE(alpha, red, green, blue) {}
    DXPMSAMPLE(const DWORD val) { *this = (*(DXPMSAMPLE *)&val); }
    operator DWORD () const {return *((DWORD *)this); }
    DWORD operator=(const DWORD val) { return *this = *((DXPMSAMPLE *)&val); }
    operator DXSAMPLE() const;
}; // DXPMSAMPLE

//
// The following cast operators are to prevent a direct assignment of a DXSAMPLE to a DXPMSAMPLE
//
inline DXSAMPLE::operator DXPMSAMPLE() const { return *((DXPMSAMPLE *)this); }
inline DXPMSAMPLE::operator DXSAMPLE() const { return *((DXSAMPLE *)this); }
#else // !__cplusplus
typedef struct DXBASESAMPLE
    {
    BYTE Blue;
    BYTE Green;
    BYTE Red;
    BYTE Alpha;
    }	DXBASESAMPLE;

typedef struct DXSAMPLE
    {
    BYTE Blue;
    BYTE Green;
    BYTE Red;
    BYTE Alpha;
    }	DXSAMPLE;

typedef struct DXPMSAMPLE
    {
    BYTE Blue;
    BYTE Green;
    BYTE Red;
    BYTE Alpha;
    }	DXPMSAMPLE;

#endif // !__cplusplus
typedef 
enum DXRUNTYPE
    {	DXRUNTYPE_CLEAR	= 0,
	DXRUNTYPE_OPAQUE	= 1,
	DXRUNTYPE_TRANS	= 2,
	DXRUNTYPE_UNKNOWN	= 3
    }	DXRUNTYPE;

#define	DX_MAX_RUN_INFO_COUNT	( 128 )

// Ignore the definition used by MIDL for TLB generation
#if 0
typedef struct DXRUNINFO
    {
    ULONG Bitfields;
    }	DXRUNINFO;

#endif // 0
typedef struct DXRUNINFO
{
    ULONG   Type  : 2;   // Type
    ULONG   Count : 30;  // Number of samples in run
} DXRUNINFO;
typedef 
enum DXSFCREATE
    {	DXSF_FORMAT_IS_CLSID	= 1L << 0,
	DXSF_NO_LAZY_DDRAW_LOCK	= 1L << 1
    }	DXSFCREATE;

typedef 
enum DXBLTOPTIONS
    {	DXBOF_DO_OVER	= 1L << 0,
	DXBOF_DITHER	= 1L << 1
    }	DXBLTOPTIONS;



extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0159_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0159_v0_0_s_ifspec;

#ifndef __IDXSurfaceFactory_INTERFACE_DEFINED__
#define __IDXSurfaceFactory_INTERFACE_DEFINED__

/* interface IDXSurfaceFactory */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXSurfaceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("144946F5-C4D4-11d1-81D1-0000F87557DB")
    IDXSurfaceFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateSurface( 
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ const DXBNDS __RPC_FAR *pBounds,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IUnknown __RPC_FAR *punkOuter,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFromDDSurface( 
            /* [in] */ IUnknown __RPC_FAR *pDDrawSurface,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IUnknown __RPC_FAR *punkOuter,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadImage( 
            /* [in] */ const LPWSTR pszFileName,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadImageFromStream( 
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopySurfaceToNewFormat( 
            /* [in] */ IDXSurface __RPC_FAR *pSrc,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pDestFormatID,
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppNewSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateD3DRMTexture( 
            /* [in] */ IDXSurface __RPC_FAR *pSrc,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ IUnknown __RPC_FAR *pD3DRM3,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppTexture3) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BitBlt( 
            /* [in] */ IDXSurface __RPC_FAR *pDest,
            /* [in] */ const DXVEC __RPC_FAR *pPlacement,
            /* [in] */ IDXSurface __RPC_FAR *pSrc,
            /* [in] */ const DXBNDS __RPC_FAR *pClipBounds,
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXSurfaceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXSurfaceFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXSurfaceFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXSurfaceFactory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateSurface )( 
            IDXSurfaceFactory __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ const DXBNDS __RPC_FAR *pBounds,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IUnknown __RPC_FAR *punkOuter,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateFromDDSurface )( 
            IDXSurfaceFactory __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pDDrawSurface,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IUnknown __RPC_FAR *punkOuter,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadImage )( 
            IDXSurfaceFactory __RPC_FAR * This,
            /* [in] */ const LPWSTR pszFileName,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadImageFromStream )( 
            IDXSurfaceFactory __RPC_FAR * This,
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CopySurfaceToNewFormat )( 
            IDXSurfaceFactory __RPC_FAR * This,
            /* [in] */ IDXSurface __RPC_FAR *pSrc,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pDestFormatID,
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppNewSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateD3DRMTexture )( 
            IDXSurfaceFactory __RPC_FAR * This,
            /* [in] */ IDXSurface __RPC_FAR *pSrc,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ IUnknown __RPC_FAR *pD3DRM3,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppTexture3);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BitBlt )( 
            IDXSurfaceFactory __RPC_FAR * This,
            /* [in] */ IDXSurface __RPC_FAR *pDest,
            /* [in] */ const DXVEC __RPC_FAR *pPlacement,
            /* [in] */ IDXSurface __RPC_FAR *pSrc,
            /* [in] */ const DXBNDS __RPC_FAR *pClipBounds,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IDXSurfaceFactoryVtbl;

    interface IDXSurfaceFactory
    {
        CONST_VTBL struct IDXSurfaceFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXSurfaceFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXSurfaceFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXSurfaceFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXSurfaceFactory_CreateSurface(This,pDirectDraw,pDDSurfaceDesc,pFormatID,pBounds,dwFlags,punkOuter,riid,ppDXSurface)	\
    (This)->lpVtbl -> CreateSurface(This,pDirectDraw,pDDSurfaceDesc,pFormatID,pBounds,dwFlags,punkOuter,riid,ppDXSurface)

#define IDXSurfaceFactory_CreateFromDDSurface(This,pDDrawSurface,pFormatID,dwFlags,punkOuter,riid,ppDXSurface)	\
    (This)->lpVtbl -> CreateFromDDSurface(This,pDDrawSurface,pFormatID,dwFlags,punkOuter,riid,ppDXSurface)

#define IDXSurfaceFactory_LoadImage(This,pszFileName,pDirectDraw,pDDSurfaceDesc,pFormatID,riid,ppDXSurface)	\
    (This)->lpVtbl -> LoadImage(This,pszFileName,pDirectDraw,pDDSurfaceDesc,pFormatID,riid,ppDXSurface)

#define IDXSurfaceFactory_LoadImageFromStream(This,pStream,pDirectDraw,pDDSurfaceDesc,pFormatID,riid,ppDXSurface)	\
    (This)->lpVtbl -> LoadImageFromStream(This,pStream,pDirectDraw,pDDSurfaceDesc,pFormatID,riid,ppDXSurface)

#define IDXSurfaceFactory_CopySurfaceToNewFormat(This,pSrc,pDirectDraw,pDDSurfaceDesc,pDestFormatID,ppNewSurface)	\
    (This)->lpVtbl -> CopySurfaceToNewFormat(This,pSrc,pDirectDraw,pDDSurfaceDesc,pDestFormatID,ppNewSurface)

#define IDXSurfaceFactory_CreateD3DRMTexture(This,pSrc,pDirectDraw,pD3DRM3,riid,ppTexture3)	\
    (This)->lpVtbl -> CreateD3DRMTexture(This,pSrc,pDirectDraw,pD3DRM3,riid,ppTexture3)

#define IDXSurfaceFactory_BitBlt(This,pDest,pPlacement,pSrc,pClipBounds,dwFlags)	\
    (This)->lpVtbl -> BitBlt(This,pDest,pPlacement,pSrc,pClipBounds,dwFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXSurfaceFactory_CreateSurface_Proxy( 
    IDXSurfaceFactory __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
    /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
    /* [in] */ const GUID __RPC_FAR *pFormatID,
    /* [in] */ const DXBNDS __RPC_FAR *pBounds,
    /* [in] */ DWORD dwFlags,
    /* [in] */ IUnknown __RPC_FAR *punkOuter,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface);


void __RPC_STUB IDXSurfaceFactory_CreateSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceFactory_CreateFromDDSurface_Proxy( 
    IDXSurfaceFactory __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pDDrawSurface,
    /* [in] */ const GUID __RPC_FAR *pFormatID,
    /* [in] */ DWORD dwFlags,
    /* [in] */ IUnknown __RPC_FAR *punkOuter,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface);


void __RPC_STUB IDXSurfaceFactory_CreateFromDDSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceFactory_LoadImage_Proxy( 
    IDXSurfaceFactory __RPC_FAR * This,
    /* [in] */ const LPWSTR pszFileName,
    /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
    /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
    /* [in] */ const GUID __RPC_FAR *pFormatID,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface);


void __RPC_STUB IDXSurfaceFactory_LoadImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceFactory_LoadImageFromStream_Proxy( 
    IDXSurfaceFactory __RPC_FAR * This,
    /* [in] */ IStream __RPC_FAR *pStream,
    /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
    /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
    /* [in] */ const GUID __RPC_FAR *pFormatID,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppDXSurface);


void __RPC_STUB IDXSurfaceFactory_LoadImageFromStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceFactory_CopySurfaceToNewFormat_Proxy( 
    IDXSurfaceFactory __RPC_FAR * This,
    /* [in] */ IDXSurface __RPC_FAR *pSrc,
    /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
    /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
    /* [in] */ const GUID __RPC_FAR *pDestFormatID,
    /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppNewSurface);


void __RPC_STUB IDXSurfaceFactory_CopySurfaceToNewFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceFactory_CreateD3DRMTexture_Proxy( 
    IDXSurfaceFactory __RPC_FAR * This,
    /* [in] */ IDXSurface __RPC_FAR *pSrc,
    /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
    /* [in] */ IUnknown __RPC_FAR *pD3DRM3,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppTexture3);


void __RPC_STUB IDXSurfaceFactory_CreateD3DRMTexture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceFactory_BitBlt_Proxy( 
    IDXSurfaceFactory __RPC_FAR * This,
    /* [in] */ IDXSurface __RPC_FAR *pDest,
    /* [in] */ const DXVEC __RPC_FAR *pPlacement,
    /* [in] */ IDXSurface __RPC_FAR *pSrc,
    /* [in] */ const DXBNDS __RPC_FAR *pClipBounds,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDXSurfaceFactory_BitBlt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXSurfaceFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtrans_0160 */
/* [local] */ 

typedef 
enum DXSURFMODCOMPOP
    {	DXSURFMOD_COMP_OVER	= 0,
	DXSURFMOD_COMP_ALPHA_MASK	= 1,
	DXSURFMOD_COMP_MAX_VALID	= 1
    }	DXSURFMODCOMPOP;



extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0160_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0160_v0_0_s_ifspec;

#ifndef __IDXSurfaceModifier_INTERFACE_DEFINED__
#define __IDXSurfaceModifier_INTERFACE_DEFINED__

/* interface IDXSurfaceModifier */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXSurfaceModifier;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9EA3B637-C37D-11d1-905E-00C04FD9189D")
    IDXSurfaceModifier : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFillColor( 
            /* [in] */ DXSAMPLE Color) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFillColor( 
            /* [out] */ DXSAMPLE __RPC_FAR *pColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBounds( 
            /* [in] */ const DXBNDS __RPC_FAR *pBounds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBackground( 
            /* [in] */ IDXSurface __RPC_FAR *pSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBackground( 
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositeOperation( 
            /* [in] */ DXSURFMODCOMPOP CompOp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositeOperation( 
            /* [out] */ DXSURFMODCOMPOP __RPC_FAR *pCompOp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetForeground( 
            /* [in] */ IDXSurface __RPC_FAR *pSurface,
            /* [in] */ BOOL bTile,
            /* [in] */ const POINT __RPC_FAR *pOrigin) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetForeground( 
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppSurface,
            /* [out] */ BOOL __RPC_FAR *pbTile,
            /* [out] */ POINT __RPC_FAR *pOrigin) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOpacity( 
            /* [in] */ float Opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOpacity( 
            /* [out] */ float __RPC_FAR *pOpacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLookup( 
            /* [in] */ IDXLookupTable __RPC_FAR *pLookupTable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLookup( 
            /* [out] */ IDXLookupTable __RPC_FAR *__RPC_FAR *ppLookupTable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXSurfaceModifierVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXSurfaceModifier __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXSurfaceModifier __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFillColor )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [in] */ DXSAMPLE Color);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFillColor )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [out] */ DXSAMPLE __RPC_FAR *pColor);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetBounds )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [in] */ const DXBNDS __RPC_FAR *pBounds);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetBackground )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [in] */ IDXSurface __RPC_FAR *pSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBackground )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetCompositeOperation )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [in] */ DXSURFMODCOMPOP CompOp);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCompositeOperation )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [out] */ DXSURFMODCOMPOP __RPC_FAR *pCompOp);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetForeground )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [in] */ IDXSurface __RPC_FAR *pSurface,
            /* [in] */ BOOL bTile,
            /* [in] */ const POINT __RPC_FAR *pOrigin);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetForeground )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppSurface,
            /* [out] */ BOOL __RPC_FAR *pbTile,
            /* [out] */ POINT __RPC_FAR *pOrigin);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetOpacity )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [in] */ float Opacity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOpacity )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [out] */ float __RPC_FAR *pOpacity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetLookup )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [in] */ IDXLookupTable __RPC_FAR *pLookupTable);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetLookup )( 
            IDXSurfaceModifier __RPC_FAR * This,
            /* [out] */ IDXLookupTable __RPC_FAR *__RPC_FAR *ppLookupTable);
        
        END_INTERFACE
    } IDXSurfaceModifierVtbl;

    interface IDXSurfaceModifier
    {
        CONST_VTBL struct IDXSurfaceModifierVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXSurfaceModifier_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXSurfaceModifier_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXSurfaceModifier_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXSurfaceModifier_SetFillColor(This,Color)	\
    (This)->lpVtbl -> SetFillColor(This,Color)

#define IDXSurfaceModifier_GetFillColor(This,pColor)	\
    (This)->lpVtbl -> GetFillColor(This,pColor)

#define IDXSurfaceModifier_SetBounds(This,pBounds)	\
    (This)->lpVtbl -> SetBounds(This,pBounds)

#define IDXSurfaceModifier_SetBackground(This,pSurface)	\
    (This)->lpVtbl -> SetBackground(This,pSurface)

#define IDXSurfaceModifier_GetBackground(This,ppSurface)	\
    (This)->lpVtbl -> GetBackground(This,ppSurface)

#define IDXSurfaceModifier_SetCompositeOperation(This,CompOp)	\
    (This)->lpVtbl -> SetCompositeOperation(This,CompOp)

#define IDXSurfaceModifier_GetCompositeOperation(This,pCompOp)	\
    (This)->lpVtbl -> GetCompositeOperation(This,pCompOp)

#define IDXSurfaceModifier_SetForeground(This,pSurface,bTile,pOrigin)	\
    (This)->lpVtbl -> SetForeground(This,pSurface,bTile,pOrigin)

#define IDXSurfaceModifier_GetForeground(This,ppSurface,pbTile,pOrigin)	\
    (This)->lpVtbl -> GetForeground(This,ppSurface,pbTile,pOrigin)

#define IDXSurfaceModifier_SetOpacity(This,Opacity)	\
    (This)->lpVtbl -> SetOpacity(This,Opacity)

#define IDXSurfaceModifier_GetOpacity(This,pOpacity)	\
    (This)->lpVtbl -> GetOpacity(This,pOpacity)

#define IDXSurfaceModifier_SetLookup(This,pLookupTable)	\
    (This)->lpVtbl -> SetLookup(This,pLookupTable)

#define IDXSurfaceModifier_GetLookup(This,ppLookupTable)	\
    (This)->lpVtbl -> GetLookup(This,ppLookupTable)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_SetFillColor_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [in] */ DXSAMPLE Color);


void __RPC_STUB IDXSurfaceModifier_SetFillColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_GetFillColor_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [out] */ DXSAMPLE __RPC_FAR *pColor);


void __RPC_STUB IDXSurfaceModifier_GetFillColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_SetBounds_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [in] */ const DXBNDS __RPC_FAR *pBounds);


void __RPC_STUB IDXSurfaceModifier_SetBounds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_SetBackground_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [in] */ IDXSurface __RPC_FAR *pSurface);


void __RPC_STUB IDXSurfaceModifier_SetBackground_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_GetBackground_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppSurface);


void __RPC_STUB IDXSurfaceModifier_GetBackground_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_SetCompositeOperation_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [in] */ DXSURFMODCOMPOP CompOp);


void __RPC_STUB IDXSurfaceModifier_SetCompositeOperation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_GetCompositeOperation_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [out] */ DXSURFMODCOMPOP __RPC_FAR *pCompOp);


void __RPC_STUB IDXSurfaceModifier_GetCompositeOperation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_SetForeground_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [in] */ IDXSurface __RPC_FAR *pSurface,
    /* [in] */ BOOL bTile,
    /* [in] */ const POINT __RPC_FAR *pOrigin);


void __RPC_STUB IDXSurfaceModifier_SetForeground_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_GetForeground_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [out] */ IDXSurface __RPC_FAR *__RPC_FAR *ppSurface,
    /* [out] */ BOOL __RPC_FAR *pbTile,
    /* [out] */ POINT __RPC_FAR *pOrigin);


void __RPC_STUB IDXSurfaceModifier_GetForeground_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_SetOpacity_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [in] */ float Opacity);


void __RPC_STUB IDXSurfaceModifier_SetOpacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_GetOpacity_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [out] */ float __RPC_FAR *pOpacity);


void __RPC_STUB IDXSurfaceModifier_GetOpacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_SetLookup_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [in] */ IDXLookupTable __RPC_FAR *pLookupTable);


void __RPC_STUB IDXSurfaceModifier_SetLookup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurfaceModifier_GetLookup_Proxy( 
    IDXSurfaceModifier __RPC_FAR * This,
    /* [out] */ IDXLookupTable __RPC_FAR *__RPC_FAR *ppLookupTable);


void __RPC_STUB IDXSurfaceModifier_GetLookup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXSurfaceModifier_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtrans_0161 */
/* [local] */ 

typedef 
enum DXSAMPLEFORMATENUM
    {	DXPF_FLAGSMASK	= 0xffff0000,
	DXPF_NONPREMULT	= 0x10000,
	DXPF_TRANSPARENCY	= 0x20000,
	DXPF_TRANSLUCENCY	= 0x40000,
	DXPF_2BITERROR	= 0x200000,
	DXPF_3BITERROR	= 0x300000,
	DXPF_4BITERROR	= 0x400000,
	DXPF_5BITERROR	= 0x500000,
	DXPF_ERRORMASK	= 0x700000,
	DXPF_NONSTANDARD	= 0,
	DXPF_PMARGB32	= 1 | DXPF_TRANSPARENCY | DXPF_TRANSLUCENCY,
	DXPF_ARGB32	= 2 | DXPF_NONPREMULT | DXPF_TRANSPARENCY | DXPF_TRANSLUCENCY,
	DXPF_ARGB4444	= 3 | DXPF_NONPREMULT | DXPF_TRANSPARENCY | DXPF_TRANSLUCENCY | DXPF_4BITERROR,
	DXPF_A8	= 4 | DXPF_TRANSPARENCY | DXPF_TRANSLUCENCY,
	DXPF_RGB32	= 5,
	DXPF_RGB24	= 6,
	DXPF_RGB565	= 7 | DXPF_3BITERROR,
	DXPF_RGB555	= 8 | DXPF_3BITERROR,
	DXPF_RGB8	= 9 | DXPF_5BITERROR,
	DXPF_ARGB1555	= 10 | DXPF_TRANSPARENCY | DXPF_3BITERROR,
	DXPF_RGB32_CK	= DXPF_RGB32 | DXPF_TRANSPARENCY,
	DXPF_RGB24_CK	= DXPF_RGB24 | DXPF_TRANSPARENCY,
	DXPF_RGB555_CK	= DXPF_RGB555 | DXPF_TRANSPARENCY,
	DXPF_RGB565_CK	= DXPF_RGB565 | DXPF_TRANSPARENCY,
	DXPF_RGB8_CK	= DXPF_RGB8 | DXPF_TRANSPARENCY
    }	DXSAMPLEFORMATENUM;

typedef 
enum DXLOCKSURF
    {	DXLOCKF_READ	= 0,
	DXLOCKF_READWRITE	= 1 << 0,
	DXLOCKF_EXISTINGINFOONLY	= 1 << 1,
	DXLOCKF_WANTRUNINFO	= 1 << 2,
	DXLOCKF_NONPREMULT	= 1 << 16,
	DXLOCKF_VALIDFLAGS	= DXLOCKF_READWRITE | DXLOCKF_EXISTINGINFOONLY | DXLOCKF_WANTRUNINFO | DXLOCKF_NONPREMULT
    }	DXLOCKSURF;

typedef 
enum DXSURFSTATUS
    {	DXSURF_TRANSIENT	= 1 << 0,
	DXSURF_READONLY	= 1 << 1,
	DXSURF_VALIDFLAGS	= DXSURF_TRANSIENT | DXSURF_READONLY
    }	DXSURFSTATUS;



extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0161_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0161_v0_0_s_ifspec;

#ifndef __IDXSurface_INTERFACE_DEFINED__
#define __IDXSurface_INTERFACE_DEFINED__

/* interface IDXSurface */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXSurface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B39FD73F-E139-11d1-9065-00C04FD9189D")
    IDXSurface : public IDXBaseObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPixelFormat( 
            /* [out] */ GUID __RPC_FAR *pFormatID,
            /* [out] */ DXSAMPLEFORMATENUM __RPC_FAR *pSampleFormatEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBounds( 
            /* [out] */ DXBNDS __RPC_FAR *pBounds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatusFlags( 
            /* [out] */ DWORD __RPC_FAR *pdwStatusFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatusFlags( 
            /* [in] */ DWORD dwStatusFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LockSurface( 
            /* [in] */ const DXBNDS __RPC_FAR *pBounds,
            /* [in] */ ULONG ulTimeOut,
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppPointer,
            /* [out] */ ULONG __RPC_FAR *pulGenerationId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDirectDrawSurface( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColorKey( 
            DXSAMPLE __RPC_FAR *pColorKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColorKey( 
            DXSAMPLE ColorKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LockSurfaceDC( 
            /* [in] */ const DXBNDS __RPC_FAR *pBounds,
            /* [in] */ ULONG ulTimeOut,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IDXDCLock __RPC_FAR *__RPC_FAR *ppDCLock) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAppData( 
            DWORD_PTR dwAppData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAppData( 
            DWORD_PTR __RPC_FAR *pdwAppData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXSurfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXSurface __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXSurface __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXSurface __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetGenerationId )( 
            IDXSurface __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pID);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IncrementGenerationId )( 
            IDXSurface __RPC_FAR * This,
            /* [in] */ BOOL bRefresh);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetObjectSize )( 
            IDXSurface __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pcbSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPixelFormat )( 
            IDXSurface __RPC_FAR * This,
            /* [out] */ GUID __RPC_FAR *pFormatID,
            /* [out] */ DXSAMPLEFORMATENUM __RPC_FAR *pSampleFormatEnum);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBounds )( 
            IDXSurface __RPC_FAR * This,
            /* [out] */ DXBNDS __RPC_FAR *pBounds);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetStatusFlags )( 
            IDXSurface __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwStatusFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetStatusFlags )( 
            IDXSurface __RPC_FAR * This,
            /* [in] */ DWORD dwStatusFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LockSurface )( 
            IDXSurface __RPC_FAR * This,
            /* [in] */ const DXBNDS __RPC_FAR *pBounds,
            /* [in] */ ULONG ulTimeOut,
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppPointer,
            /* [out] */ ULONG __RPC_FAR *pulGenerationId);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDirectDrawSurface )( 
            IDXSurface __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetColorKey )( 
            IDXSurface __RPC_FAR * This,
            DXSAMPLE __RPC_FAR *pColorKey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetColorKey )( 
            IDXSurface __RPC_FAR * This,
            DXSAMPLE ColorKey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LockSurfaceDC )( 
            IDXSurface __RPC_FAR * This,
            /* [in] */ const DXBNDS __RPC_FAR *pBounds,
            /* [in] */ ULONG ulTimeOut,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IDXDCLock __RPC_FAR *__RPC_FAR *ppDCLock);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetAppData )( 
            IDXSurface __RPC_FAR * This,
            DWORD_PTR dwAppData);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAppData )( 
            IDXSurface __RPC_FAR * This,
            DWORD_PTR __RPC_FAR *pdwAppData);
        
        END_INTERFACE
    } IDXSurfaceVtbl;

    interface IDXSurface
    {
        CONST_VTBL struct IDXSurfaceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXSurface_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXSurface_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXSurface_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXSurface_GetGenerationId(This,pID)	\
    (This)->lpVtbl -> GetGenerationId(This,pID)

#define IDXSurface_IncrementGenerationId(This,bRefresh)	\
    (This)->lpVtbl -> IncrementGenerationId(This,bRefresh)

#define IDXSurface_GetObjectSize(This,pcbSize)	\
    (This)->lpVtbl -> GetObjectSize(This,pcbSize)


#define IDXSurface_GetPixelFormat(This,pFormatID,pSampleFormatEnum)	\
    (This)->lpVtbl -> GetPixelFormat(This,pFormatID,pSampleFormatEnum)

#define IDXSurface_GetBounds(This,pBounds)	\
    (This)->lpVtbl -> GetBounds(This,pBounds)

#define IDXSurface_GetStatusFlags(This,pdwStatusFlags)	\
    (This)->lpVtbl -> GetStatusFlags(This,pdwStatusFlags)

#define IDXSurface_SetStatusFlags(This,dwStatusFlags)	\
    (This)->lpVtbl -> SetStatusFlags(This,dwStatusFlags)

#define IDXSurface_LockSurface(This,pBounds,ulTimeOut,dwFlags,riid,ppPointer,pulGenerationId)	\
    (This)->lpVtbl -> LockSurface(This,pBounds,ulTimeOut,dwFlags,riid,ppPointer,pulGenerationId)

#define IDXSurface_GetDirectDrawSurface(This,riid,ppSurface)	\
    (This)->lpVtbl -> GetDirectDrawSurface(This,riid,ppSurface)

#define IDXSurface_GetColorKey(This,pColorKey)	\
    (This)->lpVtbl -> GetColorKey(This,pColorKey)

#define IDXSurface_SetColorKey(This,ColorKey)	\
    (This)->lpVtbl -> SetColorKey(This,ColorKey)

#define IDXSurface_LockSurfaceDC(This,pBounds,ulTimeOut,dwFlags,ppDCLock)	\
    (This)->lpVtbl -> LockSurfaceDC(This,pBounds,ulTimeOut,dwFlags,ppDCLock)

#define IDXSurface_SetAppData(This,dwAppData)	\
    (This)->lpVtbl -> SetAppData(This,dwAppData)

#define IDXSurface_GetAppData(This,pdwAppData)	\
    (This)->lpVtbl -> GetAppData(This,pdwAppData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXSurface_GetPixelFormat_Proxy( 
    IDXSurface __RPC_FAR * This,
    /* [out] */ GUID __RPC_FAR *pFormatID,
    /* [out] */ DXSAMPLEFORMATENUM __RPC_FAR *pSampleFormatEnum);


void __RPC_STUB IDXSurface_GetPixelFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_GetBounds_Proxy( 
    IDXSurface __RPC_FAR * This,
    /* [out] */ DXBNDS __RPC_FAR *pBounds);


void __RPC_STUB IDXSurface_GetBounds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_GetStatusFlags_Proxy( 
    IDXSurface __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwStatusFlags);


void __RPC_STUB IDXSurface_GetStatusFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_SetStatusFlags_Proxy( 
    IDXSurface __RPC_FAR * This,
    /* [in] */ DWORD dwStatusFlags);


void __RPC_STUB IDXSurface_SetStatusFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_LockSurface_Proxy( 
    IDXSurface __RPC_FAR * This,
    /* [in] */ const DXBNDS __RPC_FAR *pBounds,
    /* [in] */ ULONG ulTimeOut,
    /* [in] */ DWORD dwFlags,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppPointer,
    /* [out] */ ULONG __RPC_FAR *pulGenerationId);


void __RPC_STUB IDXSurface_LockSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_GetDirectDrawSurface_Proxy( 
    IDXSurface __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppSurface);


void __RPC_STUB IDXSurface_GetDirectDrawSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_GetColorKey_Proxy( 
    IDXSurface __RPC_FAR * This,
    DXSAMPLE __RPC_FAR *pColorKey);


void __RPC_STUB IDXSurface_GetColorKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_SetColorKey_Proxy( 
    IDXSurface __RPC_FAR * This,
    DXSAMPLE ColorKey);


void __RPC_STUB IDXSurface_SetColorKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_LockSurfaceDC_Proxy( 
    IDXSurface __RPC_FAR * This,
    /* [in] */ const DXBNDS __RPC_FAR *pBounds,
    /* [in] */ ULONG ulTimeOut,
    /* [in] */ DWORD dwFlags,
    /* [out] */ IDXDCLock __RPC_FAR *__RPC_FAR *ppDCLock);


void __RPC_STUB IDXSurface_LockSurfaceDC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_SetAppData_Proxy( 
    IDXSurface __RPC_FAR * This,
    DWORD_PTR dwAppData);


void __RPC_STUB IDXSurface_SetAppData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXSurface_GetAppData_Proxy( 
    IDXSurface __RPC_FAR * This,
    DWORD_PTR __RPC_FAR *pdwAppData);


void __RPC_STUB IDXSurface_GetAppData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXSurface_INTERFACE_DEFINED__ */


#ifndef __IDXSurfaceInit_INTERFACE_DEFINED__
#define __IDXSurfaceInit_INTERFACE_DEFINED__

/* interface IDXSurfaceInit */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXSurfaceInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9EA3B639-C37D-11d1-905E-00C04FD9189D")
    IDXSurfaceInit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitSurface( 
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ const DXBNDS __RPC_FAR *pBounds,
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXSurfaceInitVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXSurfaceInit __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXSurfaceInit __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXSurfaceInit __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InitSurface )( 
            IDXSurfaceInit __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ const DXBNDS __RPC_FAR *pBounds,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IDXSurfaceInitVtbl;

    interface IDXSurfaceInit
    {
        CONST_VTBL struct IDXSurfaceInitVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXSurfaceInit_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXSurfaceInit_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXSurfaceInit_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXSurfaceInit_InitSurface(This,pDirectDraw,pDDSurfaceDesc,pFormatID,pBounds,dwFlags)	\
    (This)->lpVtbl -> InitSurface(This,pDirectDraw,pDDSurfaceDesc,pFormatID,pBounds,dwFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXSurfaceInit_InitSurface_Proxy( 
    IDXSurfaceInit __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
    /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
    /* [in] */ const GUID __RPC_FAR *pFormatID,
    /* [in] */ const DXBNDS __RPC_FAR *pBounds,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDXSurfaceInit_InitSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXSurfaceInit_INTERFACE_DEFINED__ */


#ifndef __IDXARGBSurfaceInit_INTERFACE_DEFINED__
#define __IDXARGBSurfaceInit_INTERFACE_DEFINED__

/* interface IDXARGBSurfaceInit */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXARGBSurfaceInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9EA3B63A-C37D-11d1-905E-00C04FD9189D")
    IDXARGBSurfaceInit : public IDXSurfaceInit
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitFromDDSurface( 
            /* [in] */ IUnknown __RPC_FAR *pDDrawSurface,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitFromRawSurface( 
            /* [in] */ IDXRawSurface __RPC_FAR *pRawSurface) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXARGBSurfaceInitVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXARGBSurfaceInit __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXARGBSurfaceInit __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXARGBSurfaceInit __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InitSurface )( 
            IDXARGBSurfaceInit __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pDirectDraw,
            /* [in] */ const DDSURFACEDESC __RPC_FAR *pDDSurfaceDesc,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ const DXBNDS __RPC_FAR *pBounds,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InitFromDDSurface )( 
            IDXARGBSurfaceInit __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pDDrawSurface,
            /* [in] */ const GUID __RPC_FAR *pFormatID,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InitFromRawSurface )( 
            IDXARGBSurfaceInit __RPC_FAR * This,
            /* [in] */ IDXRawSurface __RPC_FAR *pRawSurface);
        
        END_INTERFACE
    } IDXARGBSurfaceInitVtbl;

    interface IDXARGBSurfaceInit
    {
        CONST_VTBL struct IDXARGBSurfaceInitVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXARGBSurfaceInit_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXARGBSurfaceInit_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXARGBSurfaceInit_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXARGBSurfaceInit_InitSurface(This,pDirectDraw,pDDSurfaceDesc,pFormatID,pBounds,dwFlags)	\
    (This)->lpVtbl -> InitSurface(This,pDirectDraw,pDDSurfaceDesc,pFormatID,pBounds,dwFlags)


#define IDXARGBSurfaceInit_InitFromDDSurface(This,pDDrawSurface,pFormatID,dwFlags)	\
    (This)->lpVtbl -> InitFromDDSurface(This,pDDrawSurface,pFormatID,dwFlags)

#define IDXARGBSurfaceInit_InitFromRawSurface(This,pRawSurface)	\
    (This)->lpVtbl -> InitFromRawSurface(This,pRawSurface)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXARGBSurfaceInit_InitFromDDSurface_Proxy( 
    IDXARGBSurfaceInit __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pDDrawSurface,
    /* [in] */ const GUID __RPC_FAR *pFormatID,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IDXARGBSurfaceInit_InitFromDDSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXARGBSurfaceInit_InitFromRawSurface_Proxy( 
    IDXARGBSurfaceInit __RPC_FAR * This,
    /* [in] */ IDXRawSurface __RPC_FAR *pRawSurface);


void __RPC_STUB IDXARGBSurfaceInit_InitFromRawSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXARGBSurfaceInit_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtrans_0164 */
/* [local] */ 

typedef struct tagDXNATIVETYPEINFO
    {
    BYTE __RPC_FAR *pCurrentData;
    BYTE __RPC_FAR *pFirstByte;
    long lPitch;
    DWORD dwColorKey;
    }	DXNATIVETYPEINFO;

typedef struct tagDXPACKEDRECTDESC
    {
    DXBASESAMPLE __RPC_FAR *pSamples;
    BOOL bPremult;
    RECT rect;
    long lRowPadding;
    }	DXPACKEDRECTDESC;

typedef struct tagDXOVERSAMPLEDESC
    {
    POINT p;
    DXPMSAMPLE Color;
    }	DXOVERSAMPLEDESC;



extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0164_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0164_v0_0_s_ifspec;

#ifndef __IDXARGBReadPtr_INTERFACE_DEFINED__
#define __IDXARGBReadPtr_INTERFACE_DEFINED__

/* interface IDXARGBReadPtr */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXARGBReadPtr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EAAAC2D6-C290-11d1-905D-00C04FD9189D")
    IDXARGBReadPtr : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSurface( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppSurface) = 0;
        
        virtual DXSAMPLEFORMATENUM STDMETHODCALLTYPE GetNativeType( 
            /* [out] */ DXNATIVETYPEINFO __RPC_FAR *pInfo) = 0;
        
        virtual void STDMETHODCALLTYPE Move( 
            /* [in] */ long cSamples) = 0;
        
        virtual void STDMETHODCALLTYPE MoveToRow( 
            /* [in] */ ULONG y) = 0;
        
        virtual void STDMETHODCALLTYPE MoveToXY( 
            /* [in] */ ULONG x,
            /* [in] */ ULONG y) = 0;
        
        virtual ULONG STDMETHODCALLTYPE MoveAndGetRunInfo( 
            /* [in] */ ULONG Row,
            /* [out] */ const DXRUNINFO __RPC_FAR *__RPC_FAR *ppInfo) = 0;
        
        virtual DXSAMPLE __RPC_FAR *STDMETHODCALLTYPE Unpack( 
            /* [in] */ DXSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bMove) = 0;
        
        virtual DXPMSAMPLE __RPC_FAR *STDMETHODCALLTYPE UnpackPremult( 
            /* [in] */ DXPMSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bMove) = 0;
        
        virtual void STDMETHODCALLTYPE UnpackRect( 
            /* [in] */ const DXPACKEDRECTDESC __RPC_FAR *pRectDesc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXARGBReadPtrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXARGBReadPtr __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXARGBReadPtr __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSurface )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppSurface);
        
        DXSAMPLEFORMATENUM ( STDMETHODCALLTYPE __RPC_FAR *GetNativeType )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [out] */ DXNATIVETYPEINFO __RPC_FAR *pInfo);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *Move )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [in] */ long cSamples);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *MoveToRow )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [in] */ ULONG y);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *MoveToXY )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [in] */ ULONG x,
            /* [in] */ ULONG y);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *MoveAndGetRunInfo )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [in] */ ULONG Row,
            /* [out] */ const DXRUNINFO __RPC_FAR *__RPC_FAR *ppInfo);
        
        DXSAMPLE __RPC_FAR *( STDMETHODCALLTYPE __RPC_FAR *Unpack )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [in] */ DXSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bMove);
        
        DXPMSAMPLE __RPC_FAR *( STDMETHODCALLTYPE __RPC_FAR *UnpackPremult )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [in] */ DXPMSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bMove);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *UnpackRect )( 
            IDXARGBReadPtr __RPC_FAR * This,
            /* [in] */ const DXPACKEDRECTDESC __RPC_FAR *pRectDesc);
        
        END_INTERFACE
    } IDXARGBReadPtrVtbl;

    interface IDXARGBReadPtr
    {
        CONST_VTBL struct IDXARGBReadPtrVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXARGBReadPtr_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXARGBReadPtr_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXARGBReadPtr_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXARGBReadPtr_GetSurface(This,riid,ppSurface)	\
    (This)->lpVtbl -> GetSurface(This,riid,ppSurface)

#define IDXARGBReadPtr_GetNativeType(This,pInfo)	\
    (This)->lpVtbl -> GetNativeType(This,pInfo)

#define IDXARGBReadPtr_Move(This,cSamples)	\
    (This)->lpVtbl -> Move(This,cSamples)

#define IDXARGBReadPtr_MoveToRow(This,y)	\
    (This)->lpVtbl -> MoveToRow(This,y)

#define IDXARGBReadPtr_MoveToXY(This,x,y)	\
    (This)->lpVtbl -> MoveToXY(This,x,y)

#define IDXARGBReadPtr_MoveAndGetRunInfo(This,Row,ppInfo)	\
    (This)->lpVtbl -> MoveAndGetRunInfo(This,Row,ppInfo)

#define IDXARGBReadPtr_Unpack(This,pSamples,cSamples,bMove)	\
    (This)->lpVtbl -> Unpack(This,pSamples,cSamples,bMove)

#define IDXARGBReadPtr_UnpackPremult(This,pSamples,cSamples,bMove)	\
    (This)->lpVtbl -> UnpackPremult(This,pSamples,cSamples,bMove)

#define IDXARGBReadPtr_UnpackRect(This,pRectDesc)	\
    (This)->lpVtbl -> UnpackRect(This,pRectDesc)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXARGBReadPtr_GetSurface_Proxy( 
    IDXARGBReadPtr __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppSurface);


void __RPC_STUB IDXARGBReadPtr_GetSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


DXSAMPLEFORMATENUM STDMETHODCALLTYPE IDXARGBReadPtr_GetNativeType_Proxy( 
    IDXARGBReadPtr __RPC_FAR * This,
    /* [out] */ DXNATIVETYPEINFO __RPC_FAR *pInfo);


void __RPC_STUB IDXARGBReadPtr_GetNativeType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadPtr_Move_Proxy( 
    IDXARGBReadPtr __RPC_FAR * This,
    /* [in] */ long cSamples);


void __RPC_STUB IDXARGBReadPtr_Move_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadPtr_MoveToRow_Proxy( 
    IDXARGBReadPtr __RPC_FAR * This,
    /* [in] */ ULONG y);


void __RPC_STUB IDXARGBReadPtr_MoveToRow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadPtr_MoveToXY_Proxy( 
    IDXARGBReadPtr __RPC_FAR * This,
    /* [in] */ ULONG x,
    /* [in] */ ULONG y);


void __RPC_STUB IDXARGBReadPtr_MoveToXY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


ULONG STDMETHODCALLTYPE IDXARGBReadPtr_MoveAndGetRunInfo_Proxy( 
    IDXARGBReadPtr __RPC_FAR * This,
    /* [in] */ ULONG Row,
    /* [out] */ const DXRUNINFO __RPC_FAR *__RPC_FAR *ppInfo);


void __RPC_STUB IDXARGBReadPtr_MoveAndGetRunInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


DXSAMPLE __RPC_FAR *STDMETHODCALLTYPE IDXARGBReadPtr_Unpack_Proxy( 
    IDXARGBReadPtr __RPC_FAR * This,
    /* [in] */ DXSAMPLE __RPC_FAR *pSamples,
    /* [in] */ ULONG cSamples,
    /* [in] */ BOOL bMove);


void __RPC_STUB IDXARGBReadPtr_Unpack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


DXPMSAMPLE __RPC_FAR *STDMETHODCALLTYPE IDXARGBReadPtr_UnpackPremult_Proxy( 
    IDXARGBReadPtr __RPC_FAR * This,
    /* [in] */ DXPMSAMPLE __RPC_FAR *pSamples,
    /* [in] */ ULONG cSamples,
    /* [in] */ BOOL bMove);


void __RPC_STUB IDXARGBReadPtr_UnpackPremult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadPtr_UnpackRect_Proxy( 
    IDXARGBReadPtr __RPC_FAR * This,
    /* [in] */ const DXPACKEDRECTDESC __RPC_FAR *pRectDesc);


void __RPC_STUB IDXARGBReadPtr_UnpackRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXARGBReadPtr_INTERFACE_DEFINED__ */


#ifndef __IDXARGBReadWritePtr_INTERFACE_DEFINED__
#define __IDXARGBReadWritePtr_INTERFACE_DEFINED__

/* interface IDXARGBReadWritePtr */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXARGBReadWritePtr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EAAAC2D7-C290-11d1-905D-00C04FD9189D")
    IDXARGBReadWritePtr : public IDXARGBReadPtr
    {
    public:
        virtual void STDMETHODCALLTYPE PackAndMove( 
            /* [in] */ const DXSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples) = 0;
        
        virtual void STDMETHODCALLTYPE PackPremultAndMove( 
            /* [in] */ const DXPMSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples) = 0;
        
        virtual void STDMETHODCALLTYPE PackRect( 
            /* [in] */ const DXPACKEDRECTDESC __RPC_FAR *pRectDesc) = 0;
        
        virtual void STDMETHODCALLTYPE CopyAndMoveBoth( 
            /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
            /* [in] */ IDXARGBReadPtr __RPC_FAR *pSrc,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bIsOpaque) = 0;
        
        virtual void STDMETHODCALLTYPE CopyRect( 
            /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
            /* [in] */ const RECT __RPC_FAR *pDestRect,
            /* [in] */ IDXARGBReadPtr __RPC_FAR *pSrc,
            /* [in] */ const POINT __RPC_FAR *pSrcOrigin,
            /* [in] */ BOOL bIsOpaque) = 0;
        
        virtual void STDMETHODCALLTYPE FillAndMove( 
            /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
            /* [in] */ DXPMSAMPLE SampVal,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bDoOver) = 0;
        
        virtual void STDMETHODCALLTYPE FillRect( 
            /* [in] */ const RECT __RPC_FAR *pRect,
            /* [in] */ DXPMSAMPLE SampVal,
            /* [in] */ BOOL bDoOver) = 0;
        
        virtual void STDMETHODCALLTYPE OverSample( 
            /* [in] */ const DXOVERSAMPLEDESC __RPC_FAR *pOverDesc) = 0;
        
        virtual void STDMETHODCALLTYPE OverArrayAndMove( 
            /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
            /* [in] */ const DXPMSAMPLE __RPC_FAR *pSrc,
            /* [in] */ ULONG cSamples) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXARGBReadWritePtrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXARGBReadWritePtr __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXARGBReadWritePtr __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSurface )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppSurface);
        
        DXSAMPLEFORMATENUM ( STDMETHODCALLTYPE __RPC_FAR *GetNativeType )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [out] */ DXNATIVETYPEINFO __RPC_FAR *pInfo);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *Move )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ long cSamples);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *MoveToRow )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ ULONG y);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *MoveToXY )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ ULONG x,
            /* [in] */ ULONG y);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *MoveAndGetRunInfo )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ ULONG Row,
            /* [out] */ const DXRUNINFO __RPC_FAR *__RPC_FAR *ppInfo);
        
        DXSAMPLE __RPC_FAR *( STDMETHODCALLTYPE __RPC_FAR *Unpack )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ DXSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bMove);
        
        DXPMSAMPLE __RPC_FAR *( STDMETHODCALLTYPE __RPC_FAR *UnpackPremult )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ DXPMSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bMove);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *UnpackRect )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ const DXPACKEDRECTDESC __RPC_FAR *pRectDesc);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *PackAndMove )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ const DXSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *PackPremultAndMove )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ const DXPMSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *PackRect )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ const DXPACKEDRECTDESC __RPC_FAR *pRectDesc);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *CopyAndMoveBoth )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
            /* [in] */ IDXARGBReadPtr __RPC_FAR *pSrc,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bIsOpaque);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *CopyRect )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
            /* [in] */ const RECT __RPC_FAR *pDestRect,
            /* [in] */ IDXARGBReadPtr __RPC_FAR *pSrc,
            /* [in] */ const POINT __RPC_FAR *pSrcOrigin,
            /* [in] */ BOOL bIsOpaque);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *FillAndMove )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
            /* [in] */ DXPMSAMPLE SampVal,
            /* [in] */ ULONG cSamples,
            /* [in] */ BOOL bDoOver);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *FillRect )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ const RECT __RPC_FAR *pRect,
            /* [in] */ DXPMSAMPLE SampVal,
            /* [in] */ BOOL bDoOver);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *OverSample )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ const DXOVERSAMPLEDESC __RPC_FAR *pOverDesc);
        
        void ( STDMETHODCALLTYPE __RPC_FAR *OverArrayAndMove )( 
            IDXARGBReadWritePtr __RPC_FAR * This,
            /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
            /* [in] */ const DXPMSAMPLE __RPC_FAR *pSrc,
            /* [in] */ ULONG cSamples);
        
        END_INTERFACE
    } IDXARGBReadWritePtrVtbl;

    interface IDXARGBReadWritePtr
    {
        CONST_VTBL struct IDXARGBReadWritePtrVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXARGBReadWritePtr_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXARGBReadWritePtr_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXARGBReadWritePtr_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXARGBReadWritePtr_GetSurface(This,riid,ppSurface)	\
    (This)->lpVtbl -> GetSurface(This,riid,ppSurface)

#define IDXARGBReadWritePtr_GetNativeType(This,pInfo)	\
    (This)->lpVtbl -> GetNativeType(This,pInfo)

#define IDXARGBReadWritePtr_Move(This,cSamples)	\
    (This)->lpVtbl -> Move(This,cSamples)

#define IDXARGBReadWritePtr_MoveToRow(This,y)	\
    (This)->lpVtbl -> MoveToRow(This,y)

#define IDXARGBReadWritePtr_MoveToXY(This,x,y)	\
    (This)->lpVtbl -> MoveToXY(This,x,y)

#define IDXARGBReadWritePtr_MoveAndGetRunInfo(This,Row,ppInfo)	\
    (This)->lpVtbl -> MoveAndGetRunInfo(This,Row,ppInfo)

#define IDXARGBReadWritePtr_Unpack(This,pSamples,cSamples,bMove)	\
    (This)->lpVtbl -> Unpack(This,pSamples,cSamples,bMove)

#define IDXARGBReadWritePtr_UnpackPremult(This,pSamples,cSamples,bMove)	\
    (This)->lpVtbl -> UnpackPremult(This,pSamples,cSamples,bMove)

#define IDXARGBReadWritePtr_UnpackRect(This,pRectDesc)	\
    (This)->lpVtbl -> UnpackRect(This,pRectDesc)


#define IDXARGBReadWritePtr_PackAndMove(This,pSamples,cSamples)	\
    (This)->lpVtbl -> PackAndMove(This,pSamples,cSamples)

#define IDXARGBReadWritePtr_PackPremultAndMove(This,pSamples,cSamples)	\
    (This)->lpVtbl -> PackPremultAndMove(This,pSamples,cSamples)

#define IDXARGBReadWritePtr_PackRect(This,pRectDesc)	\
    (This)->lpVtbl -> PackRect(This,pRectDesc)

#define IDXARGBReadWritePtr_CopyAndMoveBoth(This,pScratchBuffer,pSrc,cSamples,bIsOpaque)	\
    (This)->lpVtbl -> CopyAndMoveBoth(This,pScratchBuffer,pSrc,cSamples,bIsOpaque)

#define IDXARGBReadWritePtr_CopyRect(This,pScratchBuffer,pDestRect,pSrc,pSrcOrigin,bIsOpaque)	\
    (This)->lpVtbl -> CopyRect(This,pScratchBuffer,pDestRect,pSrc,pSrcOrigin,bIsOpaque)

#define IDXARGBReadWritePtr_FillAndMove(This,pScratchBuffer,SampVal,cSamples,bDoOver)	\
    (This)->lpVtbl -> FillAndMove(This,pScratchBuffer,SampVal,cSamples,bDoOver)

#define IDXARGBReadWritePtr_FillRect(This,pRect,SampVal,bDoOver)	\
    (This)->lpVtbl -> FillRect(This,pRect,SampVal,bDoOver)

#define IDXARGBReadWritePtr_OverSample(This,pOverDesc)	\
    (This)->lpVtbl -> OverSample(This,pOverDesc)

#define IDXARGBReadWritePtr_OverArrayAndMove(This,pScratchBuffer,pSrc,cSamples)	\
    (This)->lpVtbl -> OverArrayAndMove(This,pScratchBuffer,pSrc,cSamples)

#endif /* COBJMACROS */


#endif 	/* C style interface */



void STDMETHODCALLTYPE IDXARGBReadWritePtr_PackAndMove_Proxy( 
    IDXARGBReadWritePtr __RPC_FAR * This,
    /* [in] */ const DXSAMPLE __RPC_FAR *pSamples,
    /* [in] */ ULONG cSamples);


void __RPC_STUB IDXARGBReadWritePtr_PackAndMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadWritePtr_PackPremultAndMove_Proxy( 
    IDXARGBReadWritePtr __RPC_FAR * This,
    /* [in] */ const DXPMSAMPLE __RPC_FAR *pSamples,
    /* [in] */ ULONG cSamples);


void __RPC_STUB IDXARGBReadWritePtr_PackPremultAndMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadWritePtr_PackRect_Proxy( 
    IDXARGBReadWritePtr __RPC_FAR * This,
    /* [in] */ const DXPACKEDRECTDESC __RPC_FAR *pRectDesc);


void __RPC_STUB IDXARGBReadWritePtr_PackRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadWritePtr_CopyAndMoveBoth_Proxy( 
    IDXARGBReadWritePtr __RPC_FAR * This,
    /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
    /* [in] */ IDXARGBReadPtr __RPC_FAR *pSrc,
    /* [in] */ ULONG cSamples,
    /* [in] */ BOOL bIsOpaque);


void __RPC_STUB IDXARGBReadWritePtr_CopyAndMoveBoth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadWritePtr_CopyRect_Proxy( 
    IDXARGBReadWritePtr __RPC_FAR * This,
    /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
    /* [in] */ const RECT __RPC_FAR *pDestRect,
    /* [in] */ IDXARGBReadPtr __RPC_FAR *pSrc,
    /* [in] */ const POINT __RPC_FAR *pSrcOrigin,
    /* [in] */ BOOL bIsOpaque);


void __RPC_STUB IDXARGBReadWritePtr_CopyRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadWritePtr_FillAndMove_Proxy( 
    IDXARGBReadWritePtr __RPC_FAR * This,
    /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
    /* [in] */ DXPMSAMPLE SampVal,
    /* [in] */ ULONG cSamples,
    /* [in] */ BOOL bDoOver);


void __RPC_STUB IDXARGBReadWritePtr_FillAndMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadWritePtr_FillRect_Proxy( 
    IDXARGBReadWritePtr __RPC_FAR * This,
    /* [in] */ const RECT __RPC_FAR *pRect,
    /* [in] */ DXPMSAMPLE SampVal,
    /* [in] */ BOOL bDoOver);


void __RPC_STUB IDXARGBReadWritePtr_FillRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadWritePtr_OverSample_Proxy( 
    IDXARGBReadWritePtr __RPC_FAR * This,
    /* [in] */ const DXOVERSAMPLEDESC __RPC_FAR *pOverDesc);


void __RPC_STUB IDXARGBReadWritePtr_OverSample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


void STDMETHODCALLTYPE IDXARGBReadWritePtr_OverArrayAndMove_Proxy( 
    IDXARGBReadWritePtr __RPC_FAR * This,
    /* [in] */ DXBASESAMPLE __RPC_FAR *pScratchBuffer,
    /* [in] */ const DXPMSAMPLE __RPC_FAR *pSrc,
    /* [in] */ ULONG cSamples);


void __RPC_STUB IDXARGBReadWritePtr_OverArrayAndMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXARGBReadWritePtr_INTERFACE_DEFINED__ */


#ifndef __IDXDCLock_INTERFACE_DEFINED__
#define __IDXDCLock_INTERFACE_DEFINED__

/* interface IDXDCLock */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXDCLock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F619456-CF39-11d1-905E-00C04FD9189D")
    IDXDCLock : public IUnknown
    {
    public:
        virtual HDC STDMETHODCALLTYPE GetDC( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXDCLockVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXDCLock __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXDCLock __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXDCLock __RPC_FAR * This);
        
        HDC ( STDMETHODCALLTYPE __RPC_FAR *GetDC )( 
            IDXDCLock __RPC_FAR * This);
        
        END_INTERFACE
    } IDXDCLockVtbl;

    interface IDXDCLock
    {
        CONST_VTBL struct IDXDCLockVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXDCLock_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXDCLock_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXDCLock_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXDCLock_GetDC(This)	\
    (This)->lpVtbl -> GetDC(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HDC STDMETHODCALLTYPE IDXDCLock_GetDC_Proxy( 
    IDXDCLock __RPC_FAR * This);


void __RPC_STUB IDXDCLock_GetDC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXDCLock_INTERFACE_DEFINED__ */


#ifndef __IDXTScaleOutput_INTERFACE_DEFINED__
#define __IDXTScaleOutput_INTERFACE_DEFINED__

/* interface IDXTScaleOutput */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTScaleOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B2024B50-EE77-11d1-9066-00C04FD9189D")
    IDXTScaleOutput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetOutputSize( 
            /* [in] */ const SIZE OutSize,
            /* [in] */ BOOL bMaintainAspect) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTScaleOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTScaleOutput __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTScaleOutput __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTScaleOutput __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetOutputSize )( 
            IDXTScaleOutput __RPC_FAR * This,
            /* [in] */ const SIZE OutSize,
            /* [in] */ BOOL bMaintainAspect);
        
        END_INTERFACE
    } IDXTScaleOutputVtbl;

    interface IDXTScaleOutput
    {
        CONST_VTBL struct IDXTScaleOutputVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTScaleOutput_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTScaleOutput_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTScaleOutput_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTScaleOutput_SetOutputSize(This,OutSize,bMaintainAspect)	\
    (This)->lpVtbl -> SetOutputSize(This,OutSize,bMaintainAspect)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTScaleOutput_SetOutputSize_Proxy( 
    IDXTScaleOutput __RPC_FAR * This,
    /* [in] */ const SIZE OutSize,
    /* [in] */ BOOL bMaintainAspect);


void __RPC_STUB IDXTScaleOutput_SetOutputSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTScaleOutput_INTERFACE_DEFINED__ */


#ifndef __IDXTScale_INTERFACE_DEFINED__
#define __IDXTScale_INTERFACE_DEFINED__

/* interface IDXTScale */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXTScale;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B39FD742-E139-11d1-9065-00C04FD9189D")
    IDXTScale : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetScales( 
            /* [in] */ float __RPC_FAR Scales[ 2 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetScales( 
            /* [out] */ float __RPC_FAR Scales[ 2 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScaleFitToSize( 
            /* [out][in] */ DXBNDS __RPC_FAR *pClipBounds,
            /* [in] */ SIZE FitToSize,
            /* [in] */ BOOL bMaintainAspect) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTScaleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTScale __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTScale __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTScale __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetScales )( 
            IDXTScale __RPC_FAR * This,
            /* [in] */ float __RPC_FAR Scales[ 2 ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetScales )( 
            IDXTScale __RPC_FAR * This,
            /* [out] */ float __RPC_FAR Scales[ 2 ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ScaleFitToSize )( 
            IDXTScale __RPC_FAR * This,
            /* [out][in] */ DXBNDS __RPC_FAR *pClipBounds,
            /* [in] */ SIZE FitToSize,
            /* [in] */ BOOL bMaintainAspect);
        
        END_INTERFACE
    } IDXTScaleVtbl;

    interface IDXTScale
    {
        CONST_VTBL struct IDXTScaleVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTScale_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTScale_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTScale_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTScale_SetScales(This,Scales)	\
    (This)->lpVtbl -> SetScales(This,Scales)

#define IDXTScale_GetScales(This,Scales)	\
    (This)->lpVtbl -> GetScales(This,Scales)

#define IDXTScale_ScaleFitToSize(This,pClipBounds,FitToSize,bMaintainAspect)	\
    (This)->lpVtbl -> ScaleFitToSize(This,pClipBounds,FitToSize,bMaintainAspect)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTScale_SetScales_Proxy( 
    IDXTScale __RPC_FAR * This,
    /* [in] */ float __RPC_FAR Scales[ 2 ]);


void __RPC_STUB IDXTScale_SetScales_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTScale_GetScales_Proxy( 
    IDXTScale __RPC_FAR * This,
    /* [out] */ float __RPC_FAR Scales[ 2 ]);


void __RPC_STUB IDXTScale_GetScales_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTScale_ScaleFitToSize_Proxy( 
    IDXTScale __RPC_FAR * This,
    /* [out][in] */ DXBNDS __RPC_FAR *pClipBounds,
    /* [in] */ SIZE FitToSize,
    /* [in] */ BOOL bMaintainAspect);


void __RPC_STUB IDXTScale_ScaleFitToSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTScale_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtrans_0169 */
/* [local] */ 

typedef 
enum DISPIDDXEFFECT
    {	DISPID_DXECAPABILITIES	= 10000,
	DISPID_DXEPROGRESS	= DISPID_DXECAPABILITIES + 1,
	DISPID_DXESTEP	= DISPID_DXEPROGRESS + 1,
	DISPID_DXEDURATION	= DISPID_DXESTEP + 1,
	DISPID_DXE_NEXT_ID	= DISPID_DXEDURATION + 1
    }	DISPIDDXBOUNDEDEFFECT;

typedef 
enum DXEFFECTTYPE
    {	DXTET_PERIODIC	= 1 << 0,
	DXTET_MORPH	= 1 << 1
    }	DXEFFECTTYPE;



extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0169_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0169_v0_0_s_ifspec;

#ifndef __IDXEffect_INTERFACE_DEFINED__
#define __IDXEffect_INTERFACE_DEFINED__

/* interface IDXEffect */
/* [dual][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXEffect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E31FB81B-1335-11d1-8189-0000F87557DB")
    IDXEffect : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Capabilities( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Progress( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Progress( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StepResolution( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Duration( 
            /* [in] */ float newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXEffectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXEffect __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXEffect __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXEffect __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXEffect __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXEffect __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXEffect __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXEffect __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXEffect __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXEffect __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXEffect __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXEffect __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXEffect __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXEffect __RPC_FAR * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } IDXEffectVtbl;

    interface IDXEffect
    {
        CONST_VTBL struct IDXEffectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXEffect_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXEffect_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXEffect_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXEffect_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXEffect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXEffect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXEffect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXEffect_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXEffect_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXEffect_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXEffect_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXEffect_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXEffect_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXEffect_get_Capabilities_Proxy( 
    IDXEffect __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXEffect_get_Capabilities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXEffect_get_Progress_Proxy( 
    IDXEffect __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXEffect_get_Progress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXEffect_put_Progress_Proxy( 
    IDXEffect __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXEffect_put_Progress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXEffect_get_StepResolution_Proxy( 
    IDXEffect __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXEffect_get_StepResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXEffect_get_Duration_Proxy( 
    IDXEffect __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXEffect_get_Duration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXEffect_put_Duration_Proxy( 
    IDXEffect __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXEffect_put_Duration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXEffect_INTERFACE_DEFINED__ */


#ifndef __IDXLookupTable_INTERFACE_DEFINED__
#define __IDXLookupTable_INTERFACE_DEFINED__

/* interface IDXLookupTable */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXLookupTable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01BAFC7F-9E63-11d1-9053-00C04FD9189D")
    IDXLookupTable : public IDXBaseObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTables( 
            /* [out] */ BYTE __RPC_FAR RedLUT[ 256 ],
            /* [out] */ BYTE __RPC_FAR GreenLUT[ 256 ],
            /* [out] */ BYTE __RPC_FAR BlueLUT[ 256 ],
            /* [out] */ BYTE __RPC_FAR AlphaLUT[ 256 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsChannelIdentity( 
            /* [out] */ DXBASESAMPLE __RPC_FAR *pSampleBools) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIndexValues( 
            /* [in] */ ULONG Index,
            /* [out] */ DXBASESAMPLE __RPC_FAR *pSample) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplyTables( 
            /* [out][in] */ DXSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXLookupTableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXLookupTable __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXLookupTable __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXLookupTable __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetGenerationId )( 
            IDXLookupTable __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pID);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IncrementGenerationId )( 
            IDXLookupTable __RPC_FAR * This,
            /* [in] */ BOOL bRefresh);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetObjectSize )( 
            IDXLookupTable __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pcbSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTables )( 
            IDXLookupTable __RPC_FAR * This,
            /* [out] */ BYTE __RPC_FAR RedLUT[ 256 ],
            /* [out] */ BYTE __RPC_FAR GreenLUT[ 256 ],
            /* [out] */ BYTE __RPC_FAR BlueLUT[ 256 ],
            /* [out] */ BYTE __RPC_FAR AlphaLUT[ 256 ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsChannelIdentity )( 
            IDXLookupTable __RPC_FAR * This,
            /* [out] */ DXBASESAMPLE __RPC_FAR *pSampleBools);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIndexValues )( 
            IDXLookupTable __RPC_FAR * This,
            /* [in] */ ULONG Index,
            /* [out] */ DXBASESAMPLE __RPC_FAR *pSample);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ApplyTables )( 
            IDXLookupTable __RPC_FAR * This,
            /* [out][in] */ DXSAMPLE __RPC_FAR *pSamples,
            /* [in] */ ULONG cSamples);
        
        END_INTERFACE
    } IDXLookupTableVtbl;

    interface IDXLookupTable
    {
        CONST_VTBL struct IDXLookupTableVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXLookupTable_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXLookupTable_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXLookupTable_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXLookupTable_GetGenerationId(This,pID)	\
    (This)->lpVtbl -> GetGenerationId(This,pID)

#define IDXLookupTable_IncrementGenerationId(This,bRefresh)	\
    (This)->lpVtbl -> IncrementGenerationId(This,bRefresh)

#define IDXLookupTable_GetObjectSize(This,pcbSize)	\
    (This)->lpVtbl -> GetObjectSize(This,pcbSize)


#define IDXLookupTable_GetTables(This,RedLUT,GreenLUT,BlueLUT,AlphaLUT)	\
    (This)->lpVtbl -> GetTables(This,RedLUT,GreenLUT,BlueLUT,AlphaLUT)

#define IDXLookupTable_IsChannelIdentity(This,pSampleBools)	\
    (This)->lpVtbl -> IsChannelIdentity(This,pSampleBools)

#define IDXLookupTable_GetIndexValues(This,Index,pSample)	\
    (This)->lpVtbl -> GetIndexValues(This,Index,pSample)

#define IDXLookupTable_ApplyTables(This,pSamples,cSamples)	\
    (This)->lpVtbl -> ApplyTables(This,pSamples,cSamples)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXLookupTable_GetTables_Proxy( 
    IDXLookupTable __RPC_FAR * This,
    /* [out] */ BYTE __RPC_FAR RedLUT[ 256 ],
    /* [out] */ BYTE __RPC_FAR GreenLUT[ 256 ],
    /* [out] */ BYTE __RPC_FAR BlueLUT[ 256 ],
    /* [out] */ BYTE __RPC_FAR AlphaLUT[ 256 ]);


void __RPC_STUB IDXLookupTable_GetTables_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLookupTable_IsChannelIdentity_Proxy( 
    IDXLookupTable __RPC_FAR * This,
    /* [out] */ DXBASESAMPLE __RPC_FAR *pSampleBools);


void __RPC_STUB IDXLookupTable_IsChannelIdentity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLookupTable_GetIndexValues_Proxy( 
    IDXLookupTable __RPC_FAR * This,
    /* [in] */ ULONG Index,
    /* [out] */ DXBASESAMPLE __RPC_FAR *pSample);


void __RPC_STUB IDXLookupTable_GetIndexValues_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLookupTable_ApplyTables_Proxy( 
    IDXLookupTable __RPC_FAR * This,
    /* [out][in] */ DXSAMPLE __RPC_FAR *pSamples,
    /* [in] */ ULONG cSamples);


void __RPC_STUB IDXLookupTable_ApplyTables_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXLookupTable_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtrans_0171 */
/* [local] */ 

typedef struct DXRAWSURFACEINFO
    {
    BYTE __RPC_FAR *pFirstByte;
    long lPitch;
    ULONG Width;
    ULONG Height;
    const GUID __RPC_FAR *pPixelFormat;
    HDC hdc;
    DWORD dwColorKey;
    DXBASESAMPLE __RPC_FAR *pPalette;
    }	DXRAWSURFACEINFO;



extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0171_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0171_v0_0_s_ifspec;

#ifndef __IDXRawSurface_INTERFACE_DEFINED__
#define __IDXRawSurface_INTERFACE_DEFINED__

/* interface IDXRawSurface */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDXRawSurface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09756C8A-D96A-11d1-9062-00C04FD9189D")
    IDXRawSurface : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSurfaceInfo( 
            DXRAWSURFACEINFO __RPC_FAR *pSurfaceInfo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXRawSurfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXRawSurface __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXRawSurface __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXRawSurface __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSurfaceInfo )( 
            IDXRawSurface __RPC_FAR * This,
            DXRAWSURFACEINFO __RPC_FAR *pSurfaceInfo);
        
        END_INTERFACE
    } IDXRawSurfaceVtbl;

    interface IDXRawSurface
    {
        CONST_VTBL struct IDXRawSurfaceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXRawSurface_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXRawSurface_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXRawSurface_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXRawSurface_GetSurfaceInfo(This,pSurfaceInfo)	\
    (This)->lpVtbl -> GetSurfaceInfo(This,pSurfaceInfo)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXRawSurface_GetSurfaceInfo_Proxy( 
    IDXRawSurface __RPC_FAR * This,
    DXRAWSURFACEINFO __RPC_FAR *pSurfaceInfo);


void __RPC_STUB IDXRawSurface_GetSurfaceInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXRawSurface_INTERFACE_DEFINED__ */


#ifndef __IHTMLDXTransform_INTERFACE_DEFINED__
#define __IHTMLDXTransform_INTERFACE_DEFINED__

/* interface IHTMLDXTransform */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IHTMLDXTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30E2AB7D-4FDD-4159-B7EA-DC722BF4ADE5")
    IHTMLDXTransform : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetHostUrl( 
            BSTR bstrHostUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHTMLDXTransformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHTMLDXTransform __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHTMLDXTransform __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHTMLDXTransform __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetHostUrl )( 
            IHTMLDXTransform __RPC_FAR * This,
            BSTR bstrHostUrl);
        
        END_INTERFACE
    } IHTMLDXTransformVtbl;

    interface IHTMLDXTransform
    {
        CONST_VTBL struct IHTMLDXTransformVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHTMLDXTransform_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHTMLDXTransform_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHTMLDXTransform_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHTMLDXTransform_SetHostUrl(This,bstrHostUrl)	\
    (This)->lpVtbl -> SetHostUrl(This,bstrHostUrl)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IHTMLDXTransform_SetHostUrl_Proxy( 
    IHTMLDXTransform __RPC_FAR * This,
    BSTR bstrHostUrl);


void __RPC_STUB IHTMLDXTransform_SetHostUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTMLDXTransform_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtrans_0173 */
/* [local] */ 

typedef 
enum DXTFILTER_STATUS
    {	DXTFILTER_STATUS_Stopped	= 0,
	DXTFILTER_STATUS_Applied	= DXTFILTER_STATUS_Stopped + 1,
	DXTFILTER_STATUS_Playing	= DXTFILTER_STATUS_Applied + 1,
	DXTFILTER_STATUS_MAX	= DXTFILTER_STATUS_Playing + 1
    }	DXTFILTER_STATUS;

typedef 
enum DXTFILTER_DISPID
    {	DISPID_DXTFilter_Percent	= 1,
	DISPID_DXTFilter_Duration	= DISPID_DXTFilter_Percent + 1,
	DISPID_DXTFilter_Enabled	= DISPID_DXTFilter_Duration + 1,
	DISPID_DXTFilter_Status	= DISPID_DXTFilter_Enabled + 1,
	DISPID_DXTFilter_Apply	= DISPID_DXTFilter_Status + 1,
	DISPID_DXTFilter_Play	= DISPID_DXTFilter_Apply + 1,
	DISPID_DXTFilter_Stop	= DISPID_DXTFilter_Play + 1,
	DISPID_DXTFilter_MAX	= DISPID_DXTFilter_Stop + 1
    }	DXTFILTER_DISPID;



extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0173_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtrans_0173_v0_0_s_ifspec;

#ifndef __ICSSFilterDispatch_INTERFACE_DEFINED__
#define __ICSSFilterDispatch_INTERFACE_DEFINED__

/* interface ICSSFilterDispatch */
/* [dual][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ICSSFilterDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9519152B-9484-4A6C-B6A7-4F25E92D6C6B")
    ICSSFilterDispatch : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Percent( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Percent( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Duration( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL fVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ DXTFILTER_STATUS __RPC_FAR *peVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Apply( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Play( 
            /* [optional][in] */ VARIANT varDuration) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICSSFilterDispatchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICSSFilterDispatch __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICSSFilterDispatch __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Percent )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Percent )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Enabled )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Enabled )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL fVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Status )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [retval][out] */ DXTFILTER_STATUS __RPC_FAR *peVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Apply )( 
            ICSSFilterDispatch __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Play )( 
            ICSSFilterDispatch __RPC_FAR * This,
            /* [optional][in] */ VARIANT varDuration);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Stop )( 
            ICSSFilterDispatch __RPC_FAR * This);
        
        END_INTERFACE
    } ICSSFilterDispatchVtbl;

    interface ICSSFilterDispatch
    {
        CONST_VTBL struct ICSSFilterDispatchVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICSSFilterDispatch_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICSSFilterDispatch_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICSSFilterDispatch_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICSSFilterDispatch_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICSSFilterDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICSSFilterDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICSSFilterDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICSSFilterDispatch_get_Percent(This,pVal)	\
    (This)->lpVtbl -> get_Percent(This,pVal)

#define ICSSFilterDispatch_put_Percent(This,newVal)	\
    (This)->lpVtbl -> put_Percent(This,newVal)

#define ICSSFilterDispatch_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICSSFilterDispatch_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)

#define ICSSFilterDispatch_get_Enabled(This,pfVal)	\
    (This)->lpVtbl -> get_Enabled(This,pfVal)

#define ICSSFilterDispatch_put_Enabled(This,fVal)	\
    (This)->lpVtbl -> put_Enabled(This,fVal)

#define ICSSFilterDispatch_get_Status(This,peVal)	\
    (This)->lpVtbl -> get_Status(This,peVal)

#define ICSSFilterDispatch_Apply(This)	\
    (This)->lpVtbl -> Apply(This)

#define ICSSFilterDispatch_Play(This,varDuration)	\
    (This)->lpVtbl -> Play(This,varDuration)

#define ICSSFilterDispatch_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_get_Percent_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ICSSFilterDispatch_get_Percent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_put_Percent_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ICSSFilterDispatch_put_Percent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_get_Duration_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ICSSFilterDispatch_get_Duration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_put_Duration_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ICSSFilterDispatch_put_Duration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_get_Enabled_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfVal);


void __RPC_STUB ICSSFilterDispatch_get_Enabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_put_Enabled_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL fVal);


void __RPC_STUB ICSSFilterDispatch_put_Enabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_get_Status_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This,
    /* [retval][out] */ DXTFILTER_STATUS __RPC_FAR *peVal);


void __RPC_STUB ICSSFilterDispatch_get_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_Apply_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This);


void __RPC_STUB ICSSFilterDispatch_Apply_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_Play_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This,
    /* [optional][in] */ VARIANT varDuration);


void __RPC_STUB ICSSFilterDispatch_Play_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ICSSFilterDispatch_Stop_Proxy( 
    ICSSFilterDispatch __RPC_FAR * This);


void __RPC_STUB ICSSFilterDispatch_Stop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICSSFilterDispatch_INTERFACE_DEFINED__ */



#ifndef __DXTRANSLib_LIBRARY_DEFINED__
#define __DXTRANSLib_LIBRARY_DEFINED__

/* library DXTRANSLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_DXTRANSLib;

EXTERN_C const CLSID CLSID_DXTransformFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("D1FE6762-FC48-11D0-883A-3C8B00C10000")
DXTransformFactory;
#endif

EXTERN_C const CLSID CLSID_DXTScale;

#ifdef __cplusplus

class DECLSPEC_UUID("555278E2-05DB-11D1-883A-3C8B00C10000")
DXTScale;
#endif

EXTERN_C const CLSID CLSID_DXSurface;

#ifdef __cplusplus

class DECLSPEC_UUID("0E890F83-5F79-11D1-9043-00C04FD9189D")
DXSurface;
#endif

EXTERN_C const CLSID CLSID_DXSurfaceModifier;

#ifdef __cplusplus

class DECLSPEC_UUID("3E669F1D-9C23-11d1-9053-00C04FD9189D")
DXSurfaceModifier;
#endif

EXTERN_C const CLSID CLSID_DXTFilter;

#ifdef __cplusplus

class DECLSPEC_UUID("385A91BC-1E8A-4e4a-A7A6-F4FC1E6CA1BD")
DXTFilter;
#endif
#endif /* __DXTRANSLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


