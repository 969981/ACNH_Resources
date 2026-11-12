
undefined1 FUN_006b7b00(undefined8 param_1)

{
  long *plVar1;
  int local_8;
  undefined1 local_4 [4];
  
  local_4[0] = 0;
  plVar1 = (long *)FUN_006b8260();
  local_8 = (**(code **)(*plVar1 + 0x30))(plVar1,local_4,param_1);
  if (local_8 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_8);
  }
  return local_4[0];
}

