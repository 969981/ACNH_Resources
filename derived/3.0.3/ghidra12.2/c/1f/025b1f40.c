
undefined8 * FUN_025b1f40(void)

{
  int iVar1;
  
  if (((DAT_0551e010 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0551e010), iVar1 != 0)) {
    DAT_0551e008 = PTR_DAT_04bc3208 + 0x10;
    __cxa_guard_release(&DAT_0551e010);
  }
  return &DAT_0551e008;
}

