
undefined * FUN_019f3768(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5f18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5f18), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb5f10 = PTR_DAT_04bb5f20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5f18);
  }
  return PTR_DAT_04bb5f10;
}

