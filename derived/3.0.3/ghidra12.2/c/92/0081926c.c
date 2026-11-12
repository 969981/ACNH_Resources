
undefined8 * FUN_0081926c(void)

{
  int iVar1;
  
  if (((DAT_04cce800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cce800), iVar1 != 0)) {
    DAT_04cce7f8 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(&DAT_04cce800);
  }
  return &DAT_04cce7f8;
}

