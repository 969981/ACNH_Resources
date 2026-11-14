
undefined * FUN_019f924c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5f88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5f88), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb5f80 = PTR_DAT_04bb5f90 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5f88);
  }
  return PTR_DAT_04bb5f80;
}

