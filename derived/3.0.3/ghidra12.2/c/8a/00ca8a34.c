
undefined8 * FUN_00ca8a34(void)

{
  int iVar1;
  
  if (((DAT_04ea02f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ea02f8), iVar1 != 0)) {
    DAT_04ea02f0 = PTR_DAT_04bb6530 + 0x10;
    __cxa_guard_release(&DAT_04ea02f8);
  }
  return &DAT_04ea02f0;
}

