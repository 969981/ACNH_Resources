
undefined8 * FUN_00c4a550(void)

{
  int iVar1;
  
  if (((DAT_04e5cf48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04e5cf48), iVar1 != 0)) {
    DAT_04e5cf40 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04e5cf48);
  }
  return &DAT_04e5cf40;
}

