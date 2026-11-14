
undefined8 * FUN_0199dc00(void)

{
  int iVar1;
  
  if (((DAT_052cbff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cbff8), iVar1 != 0)) {
    DAT_052cbff0 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(&DAT_052cbff8);
  }
  return &DAT_052cbff0;
}

