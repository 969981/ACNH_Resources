
undefined8 * FUN_03704a78(void)

{
  int iVar1;
  
  if (((DAT_05ab9888 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab9888), iVar1 != 0)) {
    DAT_05ab9880 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05ab9888);
  }
  return &DAT_05ab9880;
}

