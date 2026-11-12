
undefined8 * FUN_007b2690(void)

{
  int iVar1;
  
  if (((DAT_04ca7b10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ca7b10), iVar1 != 0)) {
    DAT_04ca7b08 = PTR_DAT_04bb43c8 + 0x10;
    __cxa_guard_release(&DAT_04ca7b10);
  }
  return &DAT_04ca7b08;
}

