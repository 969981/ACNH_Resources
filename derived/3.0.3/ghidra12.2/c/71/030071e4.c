
undefined8 * FUN_030071e4(void)

{
  int iVar1;
  
  if (((DAT_056d69b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d69b0), iVar1 != 0)) {
    DAT_056d69a8 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(&DAT_056d69b0);
  }
  return &DAT_056d69a8;
}

