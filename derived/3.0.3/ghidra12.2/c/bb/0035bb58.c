
void FUN_0035bb58(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd0658 + 0x10;
  *param_1 = (long)(PTR_DAT_04bd0650 + 0x10);
  param_1[5] = (long)puVar1;
  FUN_00352d04(param_1 + 5,0,0xc,0,0,0,1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = -1;
  FUN_00352d44(param_1);
  return;
}

