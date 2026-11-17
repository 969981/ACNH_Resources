
undefined8 * FUN_02b14b80(void)

{
  int iVar1;
  
  if (((DAT_05623b48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05623b48), iVar1 != 0)) {
    DAT_05623b40 = PTR_DAT_04bc4928 + 0x10;
    __cxa_guard_release(&DAT_05623b48);
  }
  return &DAT_05623b40;
}

