
undefined8 * FUN_00b882dc(void)

{
  int iVar1;
  
  if (((DAT_04dfdfe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04dfdfe0), iVar1 != 0)) {
    DAT_04dfdfd8 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04dfdfe0);
  }
  return &DAT_04dfdfd8;
}

