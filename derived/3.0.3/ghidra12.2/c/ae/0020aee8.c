
void FUN_0020aee8(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_04bccc38 + 0x10);
  if (param_1[0xf] != 0) {
    param_1[0xf] = 0;
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_0018a58c(param_1 + 4,&DAT_0407ebb1);
  FUN_0018a58c(param_1 + 9,&DAT_0407ebb1);
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_1[9] = (long)puVar1;
  FUN_0018b1a0(param_1 + 9);
  param_1[4] = (long)puVar1;
  FUN_0018b1a0(param_1 + 4);
  *param_1 = (long)&PTR_LAB_04838fe8;
  return;
}

