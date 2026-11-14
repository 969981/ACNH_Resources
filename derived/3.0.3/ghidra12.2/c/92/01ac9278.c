
undefined8 * FUN_01ac9278(void)

{
  int iVar1;
  
  if (((DAT_05325c30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05325c30), iVar1 != 0)) {
    DAT_05325c28 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05325c30);
  }
  return &DAT_05325c28;
}

