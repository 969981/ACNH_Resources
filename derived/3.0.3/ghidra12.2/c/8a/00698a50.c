
undefined * FUN_00698a50(void)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_00698b20();
  if (((*PTR_DAT_04bdf420 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_04bdf420), iVar1 == 0))
  {
    return PTR_DAT_04bdf428;
  }
  PTR_DAT_04bdf428[0x28] = 0;
  local_14 = FUN_006ae960();
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_14);
  }
  local_18 = FUN_006aea40();
  if (local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_18);
  }
  local_1c = FUN_006aeaa0(PTR_DAT_04bdf428);
  if (local_1c != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_1c);
  }
  FUN_001001d0(FUN_00698e70,PTR_DAT_04bdf428,&__DT_FINI_ARRAY);
  __cxa_guard_release(PTR_DAT_04bdf420);
  return PTR_DAT_04bdf428;
}

