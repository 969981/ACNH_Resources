
undefined8 * FUN_019be6e0(void)

{
  int iVar1;
  
  if (((DAT_052cc2f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cc2f8), iVar1 != 0)) {
    DAT_052cc2f0 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(&DAT_052cc2f8);
  }
  return &DAT_052cc2f0;
}

