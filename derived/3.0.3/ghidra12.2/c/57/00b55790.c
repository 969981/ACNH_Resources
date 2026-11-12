
undefined8 * FUN_00b55790(void)

{
  int iVar1;
  
  if (((DAT_04de6858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04de6858), iVar1 != 0)) {
    DAT_04de6850 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04de6858);
  }
  return &DAT_04de6850;
}

