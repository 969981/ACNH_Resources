
undefined * FUN_03ed37d0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bd47e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd47e0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bd47d8 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd47e0);
  }
  return PTR_DAT_04bd47d8;
}

