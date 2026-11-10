
undefined8 FUN_0033e680(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 < *(int *)(param_1 + 0x1c0)) {
    uVar1 = FUN_00346e50(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x10,param_3,param_4);
    return uVar1;
  }
  return 0;
}

