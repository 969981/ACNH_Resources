
undefined8 * FUN_02a440d8(void)

{
  int iVar1;
  
  if (((DAT_055f64c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055f64c8), iVar1 != 0)) {
    DAT_055f64c0 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_055f64c8);
  }
  return &DAT_055f64c0;
}

