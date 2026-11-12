
undefined8 * FUN_00707bec(void)

{
  int iVar1;
  
  if (((DAT_04c8c1c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c1c0), iVar1 != 0)) {
    DAT_04c8c1b8 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(&DAT_04c8c1c0);
  }
  return &DAT_04c8c1b8;
}

