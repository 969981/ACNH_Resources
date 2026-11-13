
undefined8 * FUN_00c32fbc(void)

{
  int iVar1;
  
  if (((DAT_04e500b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04e500b0), iVar1 != 0)) {
    DAT_04e500a8 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04e500b0);
  }
  return &DAT_04e500a8;
}

