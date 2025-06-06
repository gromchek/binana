#ifndef GX_TYPES_H
#define GX_TYPES_H

#include "system/types.h"

#include "storm/array.h"


DECLARE_ENUM(EGxApi);
DECLARE_ENUM(EGxBlend);
DECLARE_ENUM(EGxBuffer);
DECLARE_ENUM(EGxColorFormat);
DECLARE_ENUM(EGxFontHJusts);
DECLARE_ENUM(EGxFontVJusts);
DECLARE_ENUM(EGxMasterEnables);
DECLARE_ENUM(EGxOverride);
DECLARE_ENUM(EGxPrim);
DECLARE_ENUM(EGxPrimMask);
DECLARE_ENUM(EGxRenderState);
DECLARE_ENUM(EGxShPS);
DECLARE_ENUM(EGxShTarget);
DECLARE_ENUM(EGxShVS);
DECLARE_ENUM(EGxQueryType);
DECLARE_ENUM(EGxTexCommand);
DECLARE_ENUM(EGxTexFilter);
DECLARE_ENUM(EGxTexFormat);
DECLARE_ENUM(EGxTexTarget);
DECLARE_ENUM(EGxTexWrapMode);
DECLARE_ENUM(EGxXform);
DECLARE_ENUM(EGxuDrawListCategory);
DECLARE_ENUM(EGxWM);
DECLARE_ENUM(COLOR_FILE_FORMAT);
DECLARE_ENUM(PIXEL_FORMAT);

DECLARE_STRUCT(C4Pixel);
DECLARE_STRUCT(C4LargePixel);
DECLARE_STRUCT(MipBits);
DECLARE_STRUCT(CGxGammaRamp);

enum EGxApi {
  GxApi_OpenGl = 0,
  GxApi_D3d9 = 1,
  GxApi_D3d9Ex = 2,
  GxApi_D3d10 = 3,
  GxApi_D3d11 = 4,
  GxApi_GLL = 5,
  GxApis_Last = 6
};

enum EGxBlend {
  GxBlend_Opaque = 0,
  GxBlend_AlphaKey = 1,
  GxBlend_Alpha = 2,
  GxBlend_Add = 3,
  GxBlend_Mod = 4,
  GxBlend_Mod2x = 5,
  GxBlend_ModAdd = 6,
  GxBlend_InvSrcAlphaAdd = 7,
  GxBlend_InvSrcAlphaOpaque = 8,
  GxBlend_SrcAlphaOpaque = 9,
  GxBlend_NoAlphaAdd = 10,
  GxBlend_ConstantAlpha = 11,
  GxBlends_Last = 12
};

enum EGxBuffer {
  GxBuffers_Color = 0,
  GxBuffers_Depth = 1,
  GxBuffers_Last = 2
};

enum EGxColorFormat {
  GxCF_argb = 0,
  GxCF_rgba = 1,
  GxColorFormats_Last = 2,
};

enum EGxFontHJusts {
  GxHJ_Left = 0,
  GxHJ_Center = 1,
  GxHJ_Right = 2,
  GxHJ_Last = 3
};

enum EGxFontVJusts {
  GxVJ_Top = 0,
  GxVJ_Middle = 1,
  GxVJ_Bottom = 2,
  GxVJ_Last = 3
};

enum EGxMasterEnables {
  GxMasterEnable_Lighting = 0,
  GxMasterEnable_Fog = 1,
  GxMasterEnable_DepthTest = 2,
  GxMasterEnable_DepthWrite = 3,
  GxMasterEnable_ColorWrite = 4,
  GxMasterEnable_Culling = 5,
  GxMasterEnable_DoubleBuffering = 6,
  GxMasterEnable_NormalProjection = 7,
  GxMasterEnable_PolygonFill = 8,
  GxMasterEnables_Last = 9
};

enum EGxOverride {
  GxOverride_PixelShader = 0,
  GxOverride_Unk1 = 1,
  GxOverride_Unk2 = 2,
  GxOverride_Unk3 = 3,
  GxOverride_Unk4 = 4,
  GxOverride_Unk5 = 5,
  GxOverride_Unk6 = 6,
  GxOverride_Unk7 = 7,
  GxOverride_Unk8 = 8,
  GxOverrides_Last = 9
};

enum EGxPrim {
  GxPrim_Points = 0,
  GxPrim_Lines = 1,
  GxPrim_LineStrip = 2,
  GxPrim_Triangles = 3,
  GxPrim_TriangleStrip = 4,
  GxPrim_TriangleFan = 5,
  GxPrims_Last = 6
};

enum EGxPrimMask {
  GxPrim_Position = 0x1,
  GxPrim_BlendWeight = 0x2,
  GxPrim_BlendIndices = 0x4,
  GxPrim_Normal = 0x8,
  GxPrim_Color0 = 0x10,
  GxPrim_Color1 = 0x20,
  GxPrim_TexCoord0 = 0x40,
  GxPrim_TexCoord1 = 0x80
};

enum EGxRenderState {
  GxRs_PolygonOffset = 0,
  GxRs_MatDiffuse = 1,
  GxRs_MatEmissive = 2,
  GxRs_MatSpecular = 3,
  GxRs_MatSpecularExp = 4,
  GxRs_NormalizeNormals = 5,
  GxRs_BlendingMode = 6,
  GxRs_AlphaRef = 7,
  GxRs_FogStart = 8,
  GxRs_FogEnd = 9,
  GxRs_FogColor = 10,
  GxRs_Lighting = 11,
  GxRs_Fog = 12,
  GxRs_DepthTest = 13,
  GxRs_DepthFunc = 14,
  GxRs_DepthWrite = 15,
  GxRs_ColorWrite = 16,
  GxRs_Culling = 17,
  GxRs_ClipPlaneMask = 18,
  GxRs_Multisample = 19,
  GxRs_ScissorTest = 20,
  GxRs_Texture0 = 21,
  GxRs_Texture1 = 22,
  GxRs_Texture2 = 23,
  GxRs_Texture3 = 24,
  GxRs_Texture4 = 25,
  GxRs_Texture5 = 26,
  GxRs_Texture6 = 27,
  GxRs_Texture7 = 28,
  GxRs_Texture8 = 29,
  GxRs_Texture9 = 30,
  GxRs_Texture10 = 31,
  GxRs_Texture11 = 32,
  GxRs_Texture12 = 33,
  GxRs_Texture13 = 34,
  GxRs_Texture14 = 35,
  GxRs_Texture15 = 36,
  GxRs_ColorOp0 = 37,
  GxRs_ColorOp1 = 38,
  GxRs_ColorOp2 = 39,
  GxRs_ColorOp3 = 40,
  GxRs_ColorOp4 = 41,
  GxRs_ColorOp5 = 42,
  GxRs_ColorOp6 = 43,
  GxRs_ColorOp7 = 44,
  GxRs_AlphaOp0 = 45,
  GxRs_AlphaOp1 = 46,
  GxRs_AlphaOp2 = 47,
  GxRs_AlphaOp3 = 48,
  GxRs_AlphaOp4 = 49,
  GxRs_AlphaOp5 = 50,
  GxRs_AlphaOp6 = 51,
  GxRs_AlphaOp7 = 52,
  GxRs_TexGen0 = 53,
  GxRs_TexGen1 = 54,
  GxRs_TexGen2 = 55,
  GxRs_TexGen3 = 56,
  GxRs_TexGen4 = 57,
  GxRs_TexGen5 = 58,
  GxRs_TexGen6 = 59,
  GxRs_TexGen7 = 60,
  GxRs_TextureShader0 = 61,
  GxRs_TextureShader1 = 62,
  GxRs_TextureShader2 = 63,
  GxRs_TextureShader3 = 64,
  GxRs_TextureShader4 = 65,
  GxRs_TextureShader5 = 66,
  GxRs_TextureShader6 = 67,
  GxRs_TextureShader7 = 68,
  GxRs_TextureCoord0 = 69,
  GxRs_TextureCoord1 = 70,
  GxRs_TextureCoord2 = 71,
  GxRs_TextureCoord3 = 72,
  GxRs_TextureCoord4 = 73,
  GxRs_TextureCoord5 = 74,
  GxRs_TextureCoord6 = 75,
  GxRs_TextureCoord7 = 76,
  GxRs_VertexShader = 77,
  GxRs_PixelShader = 78,
  GxRs_PointScale = 79,
  GxRs_PointScaleAttenuation = 80,
  GxRs_PointScaleMin = 81,
  GxRs_PointScaleMax = 82,
  GxRs_PointSprite = 83,
  GxRs_LineWidth = 84, // LineWidth?
  GxRs_ColorMaterial = 85,
  GxRenderStates_Last = 86
};
STORM_TS_GROWABLE_ARRAY(EGxRenderState);

enum EGxShPS {
  GxShPS_none = 0,
  GxShPS_ps_1_1 = 1,
  GxShPS_ps_1_4 = 2,
  GxShPS_ps_2_0 = 3,
  GxShPS_ps_3_0 = 4,
  GxShPS_ps_4_0 = 5,
  GxShPS_ps_5_0 = 6,
  GxShPS_nvrc = 7,
  GxShPS_nvts = 8,
  GxShPS_nvts2 = 9,
  GxShPS_nvts3 = 10,
  GxShPS_nvfp2 = 11,
  GxShPS_arbfp1 = 12,
  GxShPS_glsl = 13,
};

enum EGxShTarget {
  GxSh_Vertex = 0,
  GxSh_Hull = 1,
  GxSh_Domain = 2,
  GxSh_Geometry = 3,
  GxSh_Pixel = 4,
  GxSh_Compute = 5,
  GxShTargets_Last = 6
};

enum EGxShVS {
  GxShVS_none = 0,
  GxShVS_vs_1_1 = 1,
  GxShVS_vs_2_0 = 2,
  GxShVS_vs_3_0 = 3,
  GxShVS_vs_4_0 = 4,
  GxShVS_vs_5_0 = 5,
  GxShVS_arbvp1 = 6,
  GxShVS_arbvp1_cg12 = 7,
  GxShVS_nvvp = 8,
  GxShVS_nvvp2 = 9,
  GxShVS_nvvp3 = 10,
  GxShVS_glsl = 11
};

enum EGxTexCommand {
  GxTex_Lock = 0,
  GxTex_Latch = 1,
  GxTex_Unlock = 2,
  GxTex_3 = 3,
  GxTexCommands_Last = 4
};

enum EGxTexFilter {
  GxTex_Nearest = 0x0,
  GxTex_Linear = 0x1,
  GxTex_NearestMipNearest = 0x2,
  GxTex_LinearMipNearest = 0x3,
  GxTex_LinearMipLinear = 0x4,
  GxTex_Anisotropic = 0x5,
  GxTexFilters_Last = 0x6,
};

enum EGxTexFormat {
  GxTex_Unknown = 0x0,
  GxTex_Abgr8888 = 0x1,
  GxTex_Argb8888 = 0x2,
  GxTex_Argb4444 = 0x3,
  GxTex_Argb1555 = 0x4,
  GxTex_Rgb565 = 0x5,
  GxTex_Dxt1 = 0x6,
  GxTex_Dxt3 = 0x7,
  GxTex_Dxt5 = 0x8,
  GxTex_Uv88 = 0x9,
  GxTex_Gr1616F = 0xA,
  GxTex_R32F = 0xB,
  GxTex_D24X8 = 0xC,
  GxTexFormats_Last = 0xD,
};

enum EGxTexTarget {
  GxTex_2d = 0x0,
  GxTex_CubeMap = 0x1,
  GxTex_Rectangle = 0x2,
  GxTex_NonPow2 = 0x3,
  GxTexTargets_Last = 0x4
};

enum EGxTexWrapMode {
  GxTex_Clamp = 0,
  GxTex_Wrap = 1
};

enum EGxQueryType {
  GxQueryType_Occlusion = 0,
  // TODO
};

enum EGxXform {
  GxXform_Tex0 = 0,
  GxXform_Tex1 = 1,
  GxXform_Tex2 = 2,
  GxXform_Tex3 = 3,
  GxXform_Tex4 = 4,
  GxXform_Tex5 = 5,
  GxXform_Tex6 = 6,
  GxXform_Tex7 = 7,
  GxXform_World = 8,
  GxXform_Projection = 9,
  GxXform_View = 10,
  GxXforms_Last = 11
};

enum EGxuDrawListCategory {
  GxuCat_0 = 0,
  GxuCat_1 = 1,
  GxuCat_2 = 2
};

enum EGxWM {
  GxWM_Size = 0,
  GxWM_DisplayChange = 1,
  GxWM_Destroy = 2,
  GxWM_SetFocus = 3,
  GxWM_KillFocus = 4,
};

enum COLOR_FILE_FORMAT {
  COLOR_JPEG = 0,
  COLOR_PAL = 1,
  COLOR_DXT = 2,
  COLOR_3 = 3
};

enum PIXEL_FORMAT {
  PIXEL_DXT1 = 0x0,
  PIXEL_DXT3 = 0x1,
  PIXEL_ARGB8888 = 0x2,
  PIXEL_ARGB1555 = 0x3,
  PIXEL_ARGB4444 = 0x4,
  PIXEL_RGB565 = 0x5,
  PIXEL_A8 = 0x6,
  PIXEL_DXT5 = 0x7,
  PIXEL_UNSPECIFIED = 0x8,
  PIXEL_ARGB2565 = 0x9,
  NUM_PIXEL_FORMATS = 0xA
};

struct C4Pixel {
  uint8_t b;
  uint8_t g;
  uint8_t r;
  uint8_t a;
};

struct C4LargePixel {
  uint64_t b;
  uint64_t g;
  uint64_t r;
  uint64_t a;
};

struct MipBits {
  C4Pixel* mip[1];
};

struct CGxGammaRamp {
  uint16_t red[256];
  uint16_t green[256];
  uint16_t blue[256];
};

#endif
