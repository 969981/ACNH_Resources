
undefined8 * FUN_00726dcc(void)

{
  int iVar1;
  
  if (((DAT_04c92ee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92ee0), iVar1 != 0)) {
    DAT_04c92ed8 = PTR_DAT_04bb3028 + 0x10;
    __cxa_guard_release(&DAT_04c92ee0);
  }
  return &DAT_04c92ed8;
}

