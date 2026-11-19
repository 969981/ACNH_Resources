
undefined8 * FUN_03c56d3c(void)

{
  int iVar1;
  
  if (((DAT_05aedb08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aedb08), iVar1 != 0)) {
    DAT_05aedb00 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(&DAT_05aedb08);
  }
  return &DAT_05aedb00;
}

