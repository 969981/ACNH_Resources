
undefined8 * FUN_00aa4b34(void)

{
  int iVar1;
  
  if (((DAT_04da7f20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7f20), iVar1 != 0)) {
    DAT_04da7f18 = &PTR_LAB_04932050;
    __cxa_guard_release(&DAT_04da7f20);
  }
  return &DAT_04da7f18;
}

