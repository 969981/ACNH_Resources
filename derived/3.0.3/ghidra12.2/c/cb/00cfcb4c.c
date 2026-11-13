
undefined8 * FUN_00cfcb4c(void)

{
  int iVar1;
  
  if (((DAT_04ec8538 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ec8538), iVar1 != 0)) {
    DAT_04ec8530 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04ec8538);
  }
  return &DAT_04ec8530;
}

