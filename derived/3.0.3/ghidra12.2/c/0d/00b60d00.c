
undefined8 * FUN_00b60d00(void)

{
  int iVar1;
  
  if (((DAT_04ded110 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ded110), iVar1 != 0)) {
    DAT_04ded108 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04ded110);
  }
  return &DAT_04ded108;
}

