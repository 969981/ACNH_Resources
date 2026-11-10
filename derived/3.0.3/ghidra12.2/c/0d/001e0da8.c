
void FUN_001e0da8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcbef0;
  *param_1 = (long)(PTR_DAT_04bcbec0 + 0x10);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_001f18d0(param_1 + 2);
  param_1[0x49] = (long)(param_1 + 0x47);
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x4a] = 0x10;
  param_1[0x46] = (long)(puVar1 + 0x10);
  FUN_0018b070(param_1 + 0x46,&DAT_0407ebb1,0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = (long)(puVar1 + 0x10);
  param_1[0x4f] = (long)(param_1 + 0x4d);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x50] = 0x10;
  return;
}

