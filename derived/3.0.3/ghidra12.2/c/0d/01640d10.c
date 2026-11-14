
undefined8 * FUN_01640d10(void)

{
  int iVar1;
  
  if (((DAT_052310c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052310c0), iVar1 != 0)) {
    DAT_052310b8 = PTR_DAT_04bbd4d0 + 0x10;
    __cxa_guard_release(&DAT_052310c0);
  }
  return &DAT_052310b8;
}

