#ifndef D3D9_CUBETEXTURE_H
#define D3D9_CUBETEXTURE_H

DECLARE_STRUCT(IDirect3DCubeTexture9__v_table);
DECLARE_STRUCT(IDirect3DCubeTexture9);

struct IDirect3DCubeTexture9__v_table {
  /*** IUnknown methods ***/
  void* v_fn_0_QueryInterface;
  void* v_fn_1_AddRef;
  void* v_fn_2_Release;
  /*** IDirect3DResource9 methods ***/
  void* v_fn_3_GetDevice;
  void* v_fn_4_SetPrivateData;
  void* v_fn_5_GetPrivateData;
  void* v_fn_6_FreePrivateData;
  void* v_fn_7_SetPriority;
  void* v_fn_8_GetPriority;
  void* v_fn_9_PreLoad;
  void* v_fn_10_GetType;
  /*** IDirect3DBaseTexture9 methods ***/
  void* v_fn_11_SetLOD;
  void* v_fn_12_GetLOD;
  void* v_fn_13_GetLevelCount;
  void* v_fn_14_SetAutoGenFilterType;
  void* v_fn_15_GetAutoGenFilterType;
  void* v_fn_16_GenerateMipSubLevels;
  /*** IDirect3DCubeTexture9 methods ***/
  void* v_fn_17_GetLevelDesc;
  void* v_fn_18_GetCubeMapSurface;
  void* v_fn_19_LockRect;
  void* v_fn_20_UnlockRect;
  void* v_fn_21_AddDirtyRect;
};

struct IDirect3DCubeTexture9 {
  IDirect3DCubeTexture9__v_table* v_table;
};

typedef IDirect3DCubeTexture9* LPDIRECT3DCUBETEXTURE9;

#endif