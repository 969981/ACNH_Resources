
undefined8 * FUN_00dcc0c4(void)

{
  int iVar1;
  
  if (((DAT_04f23a50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f23a50), iVar1 != 0)) {
    DAT_04f23a48 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04f23a50);
  }
  return &DAT_04f23a48;
}

