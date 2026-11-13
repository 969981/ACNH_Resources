
undefined8 * FUN_00cb917c(void)

{
  int iVar1;
  
  if (((DAT_04ea8640 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ea8640), iVar1 != 0)) {
    DAT_04ea8638 = PTR_DAT_04bb6530 + 0x10;
    __cxa_guard_release(&DAT_04ea8640);
  }
  return &DAT_04ea8638;
}

