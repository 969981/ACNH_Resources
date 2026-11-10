
void FUN_00216750(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_21;
  
  FUN_0019a2a8(param_1,2,&uStack_21);
  *param_1 = (long)(PTR_DAT_04bcce58 + 0x10);
  FUN_001fb850(param_1 + 0x14,0);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  puVar1 = PTR_DAT_04bcce28 + 0x10;
  puVar2 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = (long)puVar1;
  param_1[0x32] = 0;
  param_1[0x33] = (long)puVar2;
  puVar1 = PTR_DAT_04bcce80 + 0x10;
  param_1[0x36] = (long)(param_1 + 0x34);
  param_1[0x37] = 0x10;
  *param_1 = (long)puVar1;
  FUN_0019ae34(param_1 + 0x38);
  param_1[0x3e] = (long)puVar2;
  param_1[0x41] = (long)(param_1 + 0x3f);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x42] = 0x10;
  FUN_002170dc(param_1 + 0x44);
  param_1[0x46] = 0;
  return;
}

