
undefined8 * FUN_00728bfc(void)

{
  int iVar1;
  
  if (((DAT_04c92d18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92d18), iVar1 != 0)) {
    DAT_04c92d10 = &PTR_LAB_04901070;
    __cxa_guard_release(&DAT_04c92d18);
  }
  return &DAT_04c92d10;
}

