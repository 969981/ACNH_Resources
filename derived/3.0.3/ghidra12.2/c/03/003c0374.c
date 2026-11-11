
undefined4 FUN_003c0374(long *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((3 < param_2) && ((int)(param_2 - 4U) < (int)((long *)*param_1)[1])) {
    uVar1 = *(undefined4 *)(*(long *)*param_1 + (ulong)(param_2 - 4U) * 4);
  }
  return uVar1;
}

