
void FUN_00353aec(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd0658;
  *param_1 = (long)(PTR_DAT_04bd0698 + 0x10);
  param_1[0x3d4] = (long)(puVar1 + 0x10);
  FUN_00352d04(param_1 + 0x3d4,0,0xc,0,0,0,1);
  *(undefined1 *)(param_1 + 0x3d7) = 0;
  param_1[0x3d8] = -1;
  FUN_003490c0(param_1 + 0x3ae);
  FUN_0034f82c(param_1 + 0x3a5);
  FUN_0034f6d0(param_1 + 0x38a);
  return;
}

