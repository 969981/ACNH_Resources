
void FUN_006b7b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  int local_14;
  
  plVar1 = (long *)FUN_006b8260();
  local_40 = param_2;
  uStack_38 = param_3;
  local_14 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,&local_40);
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_14);
  }
  return;
}

