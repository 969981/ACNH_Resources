
undefined8 * FUN_0080fb90(void)

{
  int iVar1;
  
  if (((DAT_04ccaf10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ccaf10), iVar1 != 0)) {
    DAT_04ccaf08 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(&DAT_04ccaf10);
  }
  return &DAT_04ccaf08;
}

