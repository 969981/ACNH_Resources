
undefined8 * FUN_009c3f1c(void)

{
  int iVar1;
  
  if (((DAT_04d07da0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04d07da0), iVar1 != 0)) {
    DAT_04d07d98 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_04d07da0);
  }
  return &DAT_04d07d98;
}

