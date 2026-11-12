
undefined8 * FUN_00bbe664(void)

{
  int iVar1;
  
  if (((DAT_04e152f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04e152f8), iVar1 != 0)) {
    DAT_04e152f0 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04e152f8);
  }
  return &DAT_04e152f0;
}

