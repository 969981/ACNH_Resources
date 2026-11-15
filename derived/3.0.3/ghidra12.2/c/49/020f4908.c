
undefined8 * FUN_020f4908(void)

{
  int iVar1;
  
  if (((DAT_053e6e40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053e6e40), iVar1 != 0)) {
    DAT_053e6e38 = &PTR_LAB_04a74560;
    __cxa_guard_release(&DAT_053e6e40);
  }
  return &DAT_053e6e38;
}

