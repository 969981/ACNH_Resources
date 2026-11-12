
undefined8 * FUN_00a9128c(void)

{
  int iVar1;
  
  if (((DAT_04da6fe8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da6fe8), iVar1 != 0)) {
    DAT_04da6fe0 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_04da6fe8);
  }
  return &DAT_04da6fe0;
}

