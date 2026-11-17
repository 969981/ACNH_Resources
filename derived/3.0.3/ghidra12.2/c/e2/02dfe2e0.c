
undefined8 * FUN_02dfe2e0(void)

{
  int iVar1;
  
  if (((DAT_05690d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05690d48), iVar1 != 0)) {
    DAT_05690d40 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_05690d48);
  }
  return &DAT_05690d40;
}

