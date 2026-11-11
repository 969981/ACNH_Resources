
undefined8 * FUN_003e16b4(void)

{
  int iVar1;
  
  if (((DAT_04c69c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c69c20), iVar1 != 0)) {
    DAT_04c69c18 = FUN_003cfdc4();
    __cxa_guard_release(&DAT_04c69c20);
    return &DAT_04c69c18;
  }
  return &DAT_04c69c18;
}

