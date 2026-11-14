
undefined * FUN_018fa808(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbf4e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf4e8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbf4e0 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbf4e8);
  }
  return PTR_DAT_04bbf4e0;
}

