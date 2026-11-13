
undefined8 * FUN_0102b018(void)

{
  int iVar1;
  
  if (((DAT_05057d20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05057d20), iVar1 != 0)) {
    DAT_05057d18 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(&DAT_05057d20);
  }
  return &DAT_05057d18;
}

