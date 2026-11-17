
undefined8 * FUN_02b30b3c(void)

{
  int iVar1;
  
  if (((DAT_0562bf30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0562bf30), iVar1 != 0)) {
    DAT_0562bf28 = PTR_DAT_04bb3600 + 0x10;
    __cxa_guard_release(&DAT_0562bf30);
  }
  return &DAT_0562bf28;
}

