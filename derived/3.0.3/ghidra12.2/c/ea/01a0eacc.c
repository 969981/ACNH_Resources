
undefined8 * FUN_01a0eacc(void)

{
  int iVar1;
  
  if (((DAT_052d1d38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052d1d38), iVar1 != 0)) {
    DAT_052d1d30 = &PTR_LAB_049f9fa0;
    __cxa_guard_release(&DAT_052d1d38);
  }
  return &DAT_052d1d30;
}

