
undefined8 * FUN_01653cac(void)

{
  int iVar1;
  
  if (((DAT_05231100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05231100), iVar1 != 0)) {
    DAT_052310f8 = PTR_DAT_04bb61b8 + 0x10;
    __cxa_guard_release(&DAT_05231100);
  }
  return &DAT_052310f8;
}

