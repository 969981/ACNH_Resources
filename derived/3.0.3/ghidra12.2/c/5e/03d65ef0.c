
void FUN_03d65ef0(long *param_1,uint param_2)

{
  ulong uVar1;
  
  if ((long *)param_1[0x36] != (long *)0x0) {
    uVar1 = (**(code **)(*(long *)param_1[0x36] + 0x50))();
    (**(code **)(*(long *)param_1[0x36] + 0x20))((long *)param_1[0x36],param_2 & 1);
    if (((uVar1 & 1) != 0) && ((param_2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d65f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa8))(param_1);
      return;
    }
  }
  return;
}

