
undefined8 * FUN_00a924bc(void)

{
  int iVar1;
  
  if (((DAT_04da7018 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7018), iVar1 != 0)) {
    DAT_04da7010 = PTR_DAT_04bb3600 + 0x10;
    __cxa_guard_release(&DAT_04da7018);
  }
  return &DAT_04da7010;
}

