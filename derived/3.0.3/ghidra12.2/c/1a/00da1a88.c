
undefined8 * FUN_00da1a88(void)

{
  int iVar1;
  
  if (((DAT_04f102e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f102e8), iVar1 != 0)) {
    DAT_04f102e0 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04f102e8);
  }
  return &DAT_04f102e0;
}

