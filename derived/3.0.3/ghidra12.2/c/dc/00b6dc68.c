
undefined8 * FUN_00b6dc68(void)

{
  int iVar1;
  
  if (((DAT_04df0c50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04df0c50), iVar1 != 0)) {
    DAT_04df0c48 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04df0c50);
  }
  return &DAT_04df0c48;
}

