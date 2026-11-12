
undefined8 * FUN_00be67c0(void)

{
  int iVar1;
  
  if (((DAT_04e2af80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04e2af80), iVar1 != 0)) {
    DAT_04e2af78 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04e2af80);
  }
  return &DAT_04e2af78;
}

