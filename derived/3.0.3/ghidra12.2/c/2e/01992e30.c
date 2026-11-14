
undefined8 * FUN_01992e30(void)

{
  int iVar1;
  
  if (((DAT_052cbef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cbef8), iVar1 != 0)) {
    DAT_052cbef0 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(&DAT_052cbef8);
  }
  return &DAT_052cbef0;
}

