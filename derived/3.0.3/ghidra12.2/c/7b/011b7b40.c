
undefined8 * FUN_011b7b40(void)

{
  int iVar1;
  
  if (((DAT_050d4050 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050d4050), iVar1 != 0)) {
    DAT_050d4048 = PTR_DAT_04bbba98 + 0x10;
    __cxa_guard_release(&DAT_050d4050);
  }
  return &DAT_050d4048;
}

