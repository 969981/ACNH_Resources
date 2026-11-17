
undefined8 * FUN_030d8ff4(void)

{
  int iVar1;
  
  if (((DAT_056ec660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056ec660), iVar1 != 0)) {
    DAT_056ec658 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(&DAT_056ec660);
  }
  return &DAT_056ec658;
}

