
undefined * FUN_03b0d760(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bd1d88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd1d88), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bd1d80 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd1d88);
  }
  return PTR_DAT_04bd1d80;
}

