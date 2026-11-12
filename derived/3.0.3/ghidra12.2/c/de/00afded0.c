
undefined8 * FUN_00afded0(void)

{
  int iVar1;
  
  if (((DAT_04dbf650 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04dbf650), iVar1 != 0)) {
    DAT_04dbf648 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04dbf650);
  }
  return &DAT_04dbf648;
}

