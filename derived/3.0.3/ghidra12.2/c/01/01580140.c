
undefined8 * FUN_01580140(void)

{
  int iVar1;
  
  if (((DAT_0521e4c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0521e4c8), iVar1 != 0)) {
    DAT_0521e4c0 = PTR_DAT_04bbd4d0 + 0x10;
    __cxa_guard_release(&DAT_0521e4c8);
  }
  return &DAT_0521e4c0;
}

