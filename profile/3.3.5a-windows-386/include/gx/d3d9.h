#ifndef GX_D3D9_H
#define GX_D3D9_H

#include "gx/device.h"

#include "external/d3d9/d3d9.h"

#include "storm/array.h"

DECLARE_STRUCT(CGxDeviceD3d);
DECLARE_STRUCT(CGxDeviceD3d__GxVertexDecl);

DECLARE_ENUM(CGxDeviceD3d__EDeviceState);

enum CGxDeviceD3d__EDeviceState {
  Ds_SrcBlend,
  Ds_DstBlend,
  Ds_TssMagFilter0,
  Ds_TssMagFilter1,
  Ds_TssMagFilter2,
  Ds_TssMagFilter3,
  Ds_TssMagFilter4,
  Ds_TssMagFilter5,
  Ds_TssMagFilter6,
  Ds_TssMagFilter7,
  Ds_TssMagFilter8,
  Ds_TssMagFilter9,
  Ds_TssMagFilter10,
  Ds_TssMagFilter11,
  Ds_TssMagFilter12,
  Ds_TssMagFilter13,
  Ds_TssMagFilter14,
  Ds_TssMagFilter15,
  Ds_TssMinFilter0,
  Ds_TssMinFilter1,
  Ds_TssMinFilter2,
  Ds_TssMinFilter3,
  Ds_TssMinFilter4,
  Ds_TssMinFilter5,
  Ds_TssMinFilter6,
  Ds_TssMinFilter7,
  Ds_TssMinFilter8,
  Ds_TssMinFilter9,
  Ds_TssMinFilter10,
  Ds_TssMinFilter11,
  Ds_TssMinFilter12,
  Ds_TssMinFilter13,
  Ds_TssMinFilter14,
  Ds_TssMinFilter15,
  Ds_TssMipFilter0,
  Ds_TssMipFilter1,
  Ds_TssMipFilter2,
  Ds_TssMipFilter3,
  Ds_TssMipFilter4,
  Ds_TssMipFilter5,
  Ds_TssMipFilter6,
  Ds_TssMipFilter7,
  Ds_TssMipFilter8,
  Ds_TssMipFilter9,
  Ds_TssMipFilter10,
  Ds_TssMipFilter11,
  Ds_TssMipFilter12,
  Ds_TssMipFilter13,
  Ds_TssMipFilter14,
  Ds_TssMipFilter15,
  Ds_TssWrapU0,
  Ds_TssWrapU1,
  Ds_TssWrapU2,
  Ds_TssWrapU3,
  Ds_TssWrapU4,
  Ds_TssWrapU5,
  Ds_TssWrapU6,
  Ds_TssWrapU7,
  Ds_TssWrapU8,
  Ds_TssWrapU9,
  Ds_TssWrapU10,
  Ds_TssWrapU11,
  Ds_TssWrapU12,
  Ds_TssWrapU13,
  Ds_TssWrapU14,
  Ds_TssWrapU15,
  Ds_TssWrapV0,
  Ds_TssWrapV1,
  Ds_TssWrapV2,
  Ds_TssWrapV3,
  Ds_TssWrapV4,
  Ds_TssWrapV5,
  Ds_TssWrapV6,
  Ds_TssWrapV7,
  Ds_TssWrapV8,
  Ds_TssWrapV9,
  Ds_TssWrapV10,
  Ds_TssWrapV11,
  Ds_TssWrapV12,
  Ds_TssWrapV13,
  Ds_TssWrapV14,
  Ds_TssWrapV15,
  Ds_TssTTF0,
  Ds_TssTTF1,
  Ds_TssTTF2,
  Ds_TssTTF3,
  Ds_TssTTF4,
  Ds_TssTTF5,
  Ds_TssTTF6,
  Ds_TssTTF7,
  Ds_TssMaxAnisotropy0,
  Ds_TssMaxAnisotropy1,
  Ds_TssMaxAnisotropy2,
  Ds_TssMaxAnisotropy3,
  Ds_TssMaxAnisotropy4,
  Ds_TssMaxAnisotropy5,
  Ds_TssMaxAnisotropy6,
  Ds_TssMaxAnisotropy7,
  Ds_TssMaxAnisotropy8,
  Ds_TssMaxAnisotropy9,
  Ds_TssMaxAnisotropy10,
  Ds_TssMaxAnisotropy11,
  Ds_TssMaxAnisotropy12,
  Ds_TssMaxAnisotropy13,
  Ds_TssMaxAnisotropy14,
  Ds_TssMaxAnisotropy15,
  Ds_TssTexCoordIndex0,
  Ds_TssTexCoordIndex1,
  Ds_TssTexCoordIndex2,
  Ds_TssTexCoordIndex3,
  Ds_TssTexCoordIndex4,
  Ds_TssTexCoordIndex5,
  Ds_TssTexCoordIndex6,
  Ds_TssTexCoordIndex7,
  Ds_TssColorOp0,
  Ds_TssColorOp1,
  Ds_TssColorOp2,
  Ds_TssColorOp3,
  Ds_TssColorOp4,
  Ds_TssColorOp5,
  Ds_TssColorOp6,
  Ds_TssColorOp7,
  Ds_TssAlphaOp0,
  Ds_TssAlphaOp1,
  Ds_TssAlphaOp2,
  Ds_TssAlphaOp3,
  Ds_TssAlphaOp4,
  Ds_TssAlphaOp5,
  Ds_TssAlphaOp6,
  Ds_TssAlphaOp7,
  Ds_TssColorArg10,
  Ds_TssColorArg11,
  Ds_TssColorArg12,
  Ds_TssColorArg13,
  Ds_TssColorArg14,
  Ds_TssColorArg15,
  Ds_TssColorArg16,
  Ds_TssColorArg17,
  Ds_TssColorArg20,
  Ds_TssColorArg21,
  Ds_TssColorArg22,
  Ds_TssColorArg23,
  Ds_TssColorArg24,
  Ds_TssColorArg25,
  Ds_TssColorArg26,
  Ds_TssColorArg27,
  Ds_TssAlphaArg10,
  Ds_TssAlphaArg11,
  Ds_TssAlphaArg12,
  Ds_TssAlphaArg13,
  Ds_TssAlphaArg14,
  Ds_TssAlphaArg15,
  Ds_TssAlphaArg16,
  Ds_TssAlphaArg17,
  Ds_TssAlphaArg20,
  Ds_TssAlphaArg21,
  Ds_TssAlphaArg22,
  Ds_TssAlphaArg23,
  Ds_TssAlphaArg24,
  Ds_TssAlphaArg25,
  Ds_TssAlphaArg26,
  Ds_TssAlphaArg27,
  Ds_AmbientMaterialSource,
  Ds_DiffuseMaterialSource,
  Ds_SpecularMaterialSource,
  Ds_EmissiveMaterialSource,
  Ds_Ambient,
  Ds_AlphaBlendEnable,
  Ds_AlphaTestEnable,
  Ds_AlphaRef,
  Ds_FogEnable,
  Ds_ZWriteEnable,
  Ds_ColorWriteEnable,
  Ds_Lighting,
  Ds_SpecularEnable,
  Ds_CullMode,
  Ds_ClipPlaneEnable,
  Ds_ZFunc,
  Ds_PointScaleA,
  Ds_PointScaleB,
  Ds_PointScaleC,
  Ds_PointScaleEnable,
  DeviceStates_Last
};

struct CGxDeviceD3d__GxVertexDecl {
  uint32_t count;
  D3DVERTEXELEMENT9 elements[15];
  IDirect3DVertexDeclaration9* d3dDecl;
};
STORM_TS_GROWABLE_ARRAY(CGxDeviceD3d__GxVertexDecl);

struct CGxDeviceD3d {
  CGxDevice b_base;
  void* m_hwnd;
  uint16_t m_hwndClass;
  uint16_t unk396E;
  int32_t m_ownhwnd;
  void* m_d3dLib;
  LPDIRECT3D9 m_d3d;
  LPDIRECT3DDEVICE9 m_d3dDevice;
  D3DCAPS9 m_d3dCaps;
  int32_t m_d3dIsHwDevice;
  int32_t m_d3dNVAPI; // UC
  uint32_t m_d3dStereoEnabled; // UC
  uint32_t m_d3dStereoRestore; // UC m_d3dStereoRestore
  uint32_t m_d3dStereoHandle; // UC
  float m_d3dStereoConvergence; // UC
  float m_d3dStereoSeparation; // UC
  int32_t m_d3dStereoDirty; // 3ACC, UC
  TSGrowableArray_CGxDeviceD3d__GxVertexDecl m_gxVertexDecl;
  LPDIRECT3DVERTEXDECLARATION9 m_d3dVertexDecl[14];
  D3DDISPLAYMODE m_desktopDisplayMode;
  int32_t m_inScene;
  // set to zero by  CGxDeviceD3d::IStateSetD3DDefaults
  // checked in IStateSyncLights
  int32_t int3B2C;
  D3DFORMAT m_devDepthFormat;
  D3DFORMAT m_devAdapterFormat;
  // used by CGxDeviceD3d::DeviceSetRenderTarget
  // IDirect3DSurface9* surface3B38;
  LPDIRECT3DSURFACE9 m_defDepthStencilSurface;
  LPDIRECT3DSURFACE9 m_defColorSurface;
  LPDIRECT3DSURFACE9 m_defDepthSurface;
  // used in DeviceReadPixels
  LPDIRECT3DSURFACE9 surface3B44; // m_backBufferSurface?
  LPDIRECT3DQUERY9 m_eventQuery; // UC m_queryEvent? m_eventQuery?
  int32_t m_hwCursorDirty;
  LPDIRECT3DTEXTURE9 m_hwCursorTexture;
  LPDIRECT3DSURFACE9 m_hwCursorBitmap;
  // Used by CGxDeviceD3d::ITexForceRecreation
  //   8x8 green square
  //   used as a placeholder when a texture is released
  CGxTex* texture3B58; // m_placeholderTexture?
  LPDIRECT3DVERTEXDECLARATION9 m_d3dCurrentVertexDecl;
  LPDIRECT3DINDEXBUFFER9 m_d3dCurrentIndexBuf;
  LPDIRECT3DVERTEXBUFFER9 m_d3dVertexStreamBuf[8];
  uint32_t m_d3dVertexStreamOfs[8];
  uint32_t m_d3dVertexStreamStride[8];
  uint32_t m_deviceStates[182];
  bool m_texEnabled[8];
};

#endif
