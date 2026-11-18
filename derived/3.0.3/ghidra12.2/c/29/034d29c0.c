
undefined8 * FUN_034d29c0(void)

{
  int iVar1;
  
  if (((DAT_05762cd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762cd0), iVar1 != 0)) {
    DAT_05762cc8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_05762cd0);
  }
  return &DAT_05762cc8;
}

