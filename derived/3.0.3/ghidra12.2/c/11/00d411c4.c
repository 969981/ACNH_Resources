
undefined8 * FUN_00d411c4(void)

{
  int iVar1;
  
  if (((DAT_04eec6c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04eec6c0), iVar1 != 0)) {
    DAT_04eec6b8 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04eec6c0);
  }
  return &DAT_04eec6b8;
}

