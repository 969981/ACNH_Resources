
undefined8 * FUN_02591414(void)

{
  int iVar1;
  
  if (((DAT_0550b0c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0550b0c0), iVar1 != 0)) {
    DAT_0550b0b8 = PTR_DAT_04bc3208 + 0x10;
    __cxa_guard_release(&DAT_0550b0c0);
  }
  return &DAT_0550b0b8;
}

