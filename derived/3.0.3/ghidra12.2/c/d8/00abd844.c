
undefined8 * FUN_00abd844(void)

{
  int iVar1;
  
  if (((DAT_04da84b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da84b8), iVar1 != 0)) {
    DAT_04da84b0 = &PTR_LAB_04932df0;
    __cxa_guard_release(&DAT_04da84b8);
  }
  return &DAT_04da84b0;
}

