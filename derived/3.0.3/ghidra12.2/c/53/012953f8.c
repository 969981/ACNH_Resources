
undefined8 * FUN_012953f8(void)

{
  int iVar1;
  
  if (((DAT_05161d98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05161d98), iVar1 != 0)) {
    DAT_05161d90 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05161d98);
  }
  return &DAT_05161d90;
}

