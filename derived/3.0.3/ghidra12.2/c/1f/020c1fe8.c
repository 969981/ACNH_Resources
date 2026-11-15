
undefined8 * FUN_020c1fe8(void)

{
  int iVar1;
  
  if (((DAT_053dfed8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053dfed8), iVar1 != 0)) {
    DAT_053dfed0 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_053dfed8);
  }
  return &DAT_053dfed0;
}

