
undefined * FUN_03f2ee00(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb4f08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4f08), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb4f00 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f08);
  }
  return PTR_DAT_04bb4f00;
}

