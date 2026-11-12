
undefined8 * FUN_00746bc4(void)

{
  int iVar1;
  
  if (((DAT_04c93e98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c93e98), iVar1 != 0)) {
    DAT_04c93e90 = PTR_DAT_04bb2fd0 + 0x10;
    __cxa_guard_release(&DAT_04c93e98);
  }
  return &DAT_04c93e90;
}

