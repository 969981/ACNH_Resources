
undefined * FUN_01f99be4(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb6a18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6a18), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6a10 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6a18);
  }
  return PTR_DAT_04bb6a10;
}

