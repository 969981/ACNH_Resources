
undefined8 * FUN_010ef3b4(void)

{
  int iVar1;
  
  if (((DAT_050b1998 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050b1998), iVar1 != 0)) {
    DAT_050b1990 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(&DAT_050b1998);
  }
  return &DAT_050b1990;
}

