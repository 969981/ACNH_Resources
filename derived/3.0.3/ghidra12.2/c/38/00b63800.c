
undefined8 * FUN_00b63800(void)

{
  int iVar1;
  
  if (((DAT_04dedcb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04dedcb0), iVar1 != 0)) {
    DAT_04dedca8 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04dedcb0);
  }
  return &DAT_04dedca8;
}

