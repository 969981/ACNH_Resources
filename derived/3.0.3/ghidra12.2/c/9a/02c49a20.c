
undefined8 * FUN_02c49a20(void)

{
  int iVar1;
  
  if (((DAT_0565bfd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565bfd8), iVar1 != 0)) {
    DAT_0565bfd0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_0565bfd8);
  }
  return &DAT_0565bfd0;
}

