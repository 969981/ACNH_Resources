
void FUN_006bb32c(undefined8 *param_1,long param_2)

{
  int local_24;
  undefined8 local_8;
  
  local_8 = 0;
  local_24 = (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,&local_8);
  if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_24);
  }
  if (*(char *)(param_2 + 0x28) != '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  nn::os::AttachReadableHandleToSystemEvent(param_2,local_8 & 0xffffffff,local_8._4_1_,0);
  return;
}

