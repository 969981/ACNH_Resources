
undefined8 * FUN_003e40d0(void)

{
  int iVar1;
  
  if (((DAT_04c69c30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c69c30), iVar1 != 0)) {
    DAT_04c69c28 = FUN_003cfdc4();
    __cxa_guard_release(&DAT_04c69c30);
    return &DAT_04c69c28;
  }
  return &DAT_04c69c28;
}

