
undefined8 * FUN_025a01d8(void)

{
  int iVar1;
  
  if (((DAT_05515ce0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05515ce0), iVar1 != 0)) {
    DAT_05515cd8 = PTR_DAT_04bc3208 + 0x10;
    __cxa_guard_release(&DAT_05515ce0);
  }
  return &DAT_05515cd8;
}

