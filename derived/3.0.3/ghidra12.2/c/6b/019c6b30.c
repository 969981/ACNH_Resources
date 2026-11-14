
undefined8 * FUN_019c6b30(void)

{
  int iVar1;
  
  if (((DAT_052cc3d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cc3d8), iVar1 != 0)) {
    DAT_052cc3d0 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(&DAT_052cc3d8);
  }
  return &DAT_052cc3d0;
}

