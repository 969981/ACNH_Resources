
undefined8 * FUN_008ed590(void)

{
  int iVar1;
  
  if (((DAT_04ced7d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ced7d8), iVar1 != 0)) {
    DAT_04ced7d0 = &PTR_LAB_049243b8;
    __cxa_guard_release(&DAT_04ced7d8);
  }
  return &DAT_04ced7d0;
}

