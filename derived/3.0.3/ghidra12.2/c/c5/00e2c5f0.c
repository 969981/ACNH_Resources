
undefined8 * FUN_00e2c5f0(void)

{
  int iVar1;
  
  if (((DAT_04f4d5c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f4d5c0), iVar1 != 0)) {
    DAT_04f4d5b8 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04f4d5c0);
  }
  return &DAT_04f4d5b8;
}

