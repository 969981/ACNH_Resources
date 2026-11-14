
undefined8 * FUN_01990290(void)

{
  int iVar1;
  
  if (((DAT_052cbeb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cbeb8), iVar1 != 0)) {
    DAT_052cbeb0 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(&DAT_052cbeb8);
  }
  return &DAT_052cbeb0;
}

