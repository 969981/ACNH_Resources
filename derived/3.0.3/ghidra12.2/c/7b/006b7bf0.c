
bool FUN_006b7bf0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  uint local_24;
  
  plVar1 = (long *)FUN_006b8260();
  local_24 = (**(code **)(*plVar1 + 0x50))(plVar1,param_1,param_2);
  if ((local_24 != 0) && (((local_24 & 0x1ff) != 0xb3 || (199 < (local_24 >> 9 & 0x1ff8) - 0x4b0))))
  {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_24);
  }
  return local_24 == 0;
}

