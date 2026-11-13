
undefined8 * FUN_013ff3b0(void)

{
  int iVar1;
  
  if (((DAT_051b6990 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b6990), iVar1 != 0)) {
    DAT_051b6988 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_051b6990);
  }
  return &DAT_051b6988;
}

