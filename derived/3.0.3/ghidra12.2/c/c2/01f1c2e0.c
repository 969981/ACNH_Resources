
undefined * FUN_01f1c2e0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb6a80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6a80), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6a78 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6a80);
  }
  return PTR_DAT_04bb6a78;
}

