
undefined8 * FUN_020bcb3c(void)

{
  int iVar1;
  
  if (((DAT_053dfea8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053dfea8), iVar1 != 0)) {
    DAT_053dfea0 = PTR_DAT_04bb3600 + 0x10;
    __cxa_guard_release(&DAT_053dfea8);
  }
  return &DAT_053dfea0;
}

