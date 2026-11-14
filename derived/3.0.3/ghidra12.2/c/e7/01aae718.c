
undefined8 * FUN_01aae718(void)

{
  int iVar1;
  
  if (((DAT_05323d50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05323d50), iVar1 != 0)) {
    DAT_05323d48 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05323d50);
  }
  return &DAT_05323d48;
}

