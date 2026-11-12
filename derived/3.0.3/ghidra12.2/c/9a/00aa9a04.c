
undefined8 * FUN_00aa9a04(void)

{
  int iVar1;
  
  if (((DAT_04da7fa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7fa8), iVar1 != 0)) {
    DAT_04da7fa0 = &PTR_LAB_04932280;
    __cxa_guard_release(&DAT_04da7fa8);
  }
  return &DAT_04da7fa0;
}

