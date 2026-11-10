
void FUN_00373cbc(long *param_1)

{
  undefined *puVar1;
  
  FUN_00361168();
  puVar1 = PTR_DAT_04bd0710;
  param_1[9] = (long)(param_1 + 9);
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

