
undefined8 * FUN_019a0744(void)

{
  int iVar1;
  
  if (((DAT_052cc038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cc038), iVar1 != 0)) {
    DAT_052cc030 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(&DAT_052cc038);
  }
  return &DAT_052cc030;
}

