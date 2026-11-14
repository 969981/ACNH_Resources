
undefined8 * FUN_019b0c44(void)

{
  int iVar1;
  
  if (((DAT_052cc1b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cc1b8), iVar1 != 0)) {
    DAT_052cc1b0 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(&DAT_052cc1b8);
  }
  return &DAT_052cc1b0;
}

