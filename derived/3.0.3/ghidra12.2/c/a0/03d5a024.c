
undefined8 * FUN_03d5a024(void)

{
  int iVar1;
  
  if (((DAT_05af7e90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af7e90), iVar1 != 0)) {
    DAT_05af7e80 = PTR_DAT_04bb2020 + 0x10;
    DAT_05af7e88 = "RootPage";
    __cxa_guard_release(&DAT_05af7e90);
  }
  return &DAT_05af7e80;
}

