
undefined4 FUN_006b79f8(undefined8 *param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  undefined8 local_28;
  long lStack_20;
  int local_18;
  undefined4 local_14;
  
  lStack_20 = (long)param_4;
  local_14 = 0;
  local_28 = param_3;
  local_18 = (**(code **)(*(long *)*param_1 + 0x48))((long *)*param_1,&local_14,&local_28,param_2);
  if (local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_18);
  }
  return local_14;
}

