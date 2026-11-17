
undefined8 * FUN_02bae9b8(void)

{
  int iVar1;
  
  if (((DAT_05642fb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05642fb0), iVar1 != 0)) {
    DAT_05642fa8 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05642fb0);
  }
  return &DAT_05642fa8;
}

