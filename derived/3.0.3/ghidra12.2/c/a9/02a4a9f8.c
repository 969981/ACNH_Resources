
undefined8 * FUN_02a4a9f8(void)

{
  int iVar1;
  
  if (((DAT_055f66d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055f66d8), iVar1 != 0)) {
    DAT_055f66d0 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_055f66d8);
  }
  return &DAT_055f66d0;
}

