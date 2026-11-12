
void FUN_006a22c8(long *param_1)

{
  undefined *puVar1;
  
  FUN_0069c2bc();
  puVar1 = PTR_DAT_04bdf508;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((long)param_1 + 0x27b) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

