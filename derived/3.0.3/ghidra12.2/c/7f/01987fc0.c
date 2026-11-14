
undefined8 * FUN_01987fc0(void)

{
  int iVar1;
  
  if (((DAT_052cbdf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cbdf8), iVar1 != 0)) {
    DAT_052cbdf0 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(&DAT_052cbdf8);
  }
  return &DAT_052cbdf0;
}

