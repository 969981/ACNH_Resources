
undefined8 * FUN_036cce88(void)

{
  int iVar1;
  
  if (((DAT_05ab40d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab40d0), iVar1 != 0)) {
    DAT_05ab40c8 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05ab40d0);
  }
  return &DAT_05ab40c8;
}

