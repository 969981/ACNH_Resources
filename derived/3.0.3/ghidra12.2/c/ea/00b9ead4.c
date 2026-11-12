
undefined8 * FUN_00b9ead4(void)

{
  int iVar1;
  
  if (((DAT_04e07a80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04e07a80), iVar1 != 0)) {
    DAT_04e07a78 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04e07a80);
  }
  return &DAT_04e07a78;
}

