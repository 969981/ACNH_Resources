
undefined8 * FUN_00b21330(void)

{
  int iVar1;
  
  if (((DAT_04dd2990 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04dd2990), iVar1 != 0)) {
    DAT_04dd2988 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04dd2990);
  }
  return &DAT_04dd2988;
}

