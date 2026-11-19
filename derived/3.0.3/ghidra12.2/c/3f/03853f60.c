
undefined * FUN_03853f60(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb4a90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4a90), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb4a88 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4a90);
  }
  return PTR_DAT_04bb4a88;
}

