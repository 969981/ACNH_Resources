
undefined8 * FUN_00e5421c(void)

{
  int iVar1;
  
  if (((DAT_04f59888 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f59888), iVar1 != 0)) {
    DAT_04f59880 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04f59888);
  }
  return &DAT_04f59880;
}

