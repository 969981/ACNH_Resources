
undefined8 * FUN_00e79bbc(void)

{
  int iVar1;
  
  if (((DAT_04f6bd30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f6bd30), iVar1 != 0)) {
    DAT_04f6bd28 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04f6bd30);
  }
  return &DAT_04f6bd28;
}

