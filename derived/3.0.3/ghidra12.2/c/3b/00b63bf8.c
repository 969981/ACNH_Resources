
undefined * FUN_00b63bf8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb6d08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6d08), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6d00 = PTR_DAT_04bb3600 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6d08);
  }
  return PTR_DAT_04bb6d00;
}

