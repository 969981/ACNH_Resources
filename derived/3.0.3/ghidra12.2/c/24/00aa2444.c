
undefined8 * FUN_00aa2444(void)

{
  int iVar1;
  
  if (((DAT_04da7ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7ed0), iVar1 != 0)) {
    DAT_04da7ec8 = &PTR_LAB_04931f38;
    __cxa_guard_release(&DAT_04da7ed0);
  }
  return &DAT_04da7ec8;
}

