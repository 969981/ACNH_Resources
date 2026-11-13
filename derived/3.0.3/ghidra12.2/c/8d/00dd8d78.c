
undefined8 * FUN_00dd8d78(void)

{
  int iVar1;
  
  if (((DAT_04f2a0a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f2a0a8), iVar1 != 0)) {
    DAT_04f2a0a0 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04f2a0a8);
  }
  return &DAT_04f2a0a0;
}

