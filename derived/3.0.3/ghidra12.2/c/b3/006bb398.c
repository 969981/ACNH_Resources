
void FUN_006bb398(undefined8 *param_1)

{
  int local_8;
  undefined1 local_4 [4];
  
  local_4[0] = 0;
  local_8 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,local_4);
  if (local_8 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_8);
  }
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}

