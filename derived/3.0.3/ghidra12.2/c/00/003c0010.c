
undefined * FUN_003c0010(void)

{
  int iVar1;
  
  if (((DAT_04c63a10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c63a10), iVar1 != 0)) {
    FUN_003c0078(&DAT_04c63a18);
    __cxa_guard_release(&DAT_04c63a10);
    return &DAT_04c63a18;
  }
  return &DAT_04c63a18;
}

