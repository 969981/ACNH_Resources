
undefined8 * FUN_020c0608(void)

{
  int iVar1;
  
  if (((DAT_053dfec8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053dfec8), iVar1 != 0)) {
    DAT_053dfec0 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_053dfec8);
  }
  return &DAT_053dfec0;
}

