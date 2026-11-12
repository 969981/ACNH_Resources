
undefined8 * FUN_00aa7224(void)

{
  int iVar1;
  
  if (((DAT_04da7f60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7f60), iVar1 != 0)) {
    DAT_04da7f58 = &PTR_LAB_04932168;
    __cxa_guard_release(&DAT_04da7f60);
  }
  return &DAT_04da7f58;
}

