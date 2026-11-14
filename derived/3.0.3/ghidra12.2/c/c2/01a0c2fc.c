
undefined8 * FUN_01a0c2fc(void)

{
  int iVar1;
  
  if (((DAT_052d1d18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052d1d18), iVar1 != 0)) {
    DAT_052d1d10 = &PTR_LAB_049f9ce8;
    __cxa_guard_release(&DAT_052d1d18);
  }
  return &DAT_052d1d10;
}

