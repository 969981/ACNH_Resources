
undefined8 * FUN_00dd5f24(void)

{
  int iVar1;
  
  if (((DAT_04f292b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f292b8), iVar1 != 0)) {
    DAT_04f292b0 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04f292b8);
  }
  return &DAT_04f292b0;
}

