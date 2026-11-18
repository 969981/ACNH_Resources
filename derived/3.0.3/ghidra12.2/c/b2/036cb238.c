
undefined8 * FUN_036cb238(void)

{
  int iVar1;
  
  if (((DAT_05ab3ea8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab3ea8), iVar1 != 0)) {
    DAT_05ab3ea0 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05ab3ea8);
  }
  return &DAT_05ab3ea0;
}

