
undefined4 FUN_006b79b4(undefined8 *param_1)

{
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = (**(code **)(*(long *)*param_1 + 0x40))((long *)*param_1,&local_14);
  if (local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_18);
  }
  return local_14;
}

