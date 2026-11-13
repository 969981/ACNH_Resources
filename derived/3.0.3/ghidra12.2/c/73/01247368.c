
undefined8 * FUN_01247368(void)

{
  int iVar1;
  
  if (((DAT_05150d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05150d48), iVar1 != 0)) {
    DAT_05150d40 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05150d48);
  }
  return &DAT_05150d40;
}

