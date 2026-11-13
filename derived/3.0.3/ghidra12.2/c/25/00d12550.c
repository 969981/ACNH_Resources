
undefined8 * FUN_00d12550(void)

{
  int iVar1;
  
  if (((DAT_04ed17e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ed17e8), iVar1 != 0)) {
    DAT_04ed17e0 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04ed17e8);
  }
  return &DAT_04ed17e0;
}

