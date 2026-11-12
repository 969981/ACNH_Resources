
undefined8 * FUN_00b293d4(void)

{
  int iVar1;
  
  if (((DAT_04dd84a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04dd84a8), iVar1 != 0)) {
    DAT_04dd84a0 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04dd84a8);
  }
  return &DAT_04dd84a0;
}

