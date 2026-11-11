
undefined8 * FUN_003dfe40(void)

{
  int iVar1;
  
  if (((DAT_04c69c10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c69c10), iVar1 != 0)) {
    DAT_04c69c08 = FUN_003cfdc4();
    __cxa_guard_release(&DAT_04c69c10);
    return &DAT_04c69c08;
  }
  return &DAT_04c69c08;
}

