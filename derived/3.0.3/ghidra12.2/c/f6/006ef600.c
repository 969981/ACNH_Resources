
undefined8 * FUN_006ef600(void)

{
  int iVar1;
  
  if (((DAT_04c89168 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c89168), iVar1 != 0)) {
    DAT_04c89160 = PTR_DAT_04bb2c80 + 0x10;
    __cxa_guard_release(&DAT_04c89168);
  }
  return &DAT_04c89160;
}

