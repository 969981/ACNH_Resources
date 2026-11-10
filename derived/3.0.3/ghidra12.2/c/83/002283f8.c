
undefined8 * FUN_002283f8(void)

{
  int iVar1;
  
  if (((DAT_04c60318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c60318), iVar1 != 0)) {
    FUN_00228380();
    DAT_04c60310 = DAT_04c60300 * 1000;
    __cxa_guard_release(&DAT_04c60318);
    return &DAT_04c60310;
  }
  return &DAT_04c60310;
}

