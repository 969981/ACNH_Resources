
undefined8 * FUN_00b52d74(void)

{
  int iVar1;
  
  if (((DAT_04de5ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04de5ac0), iVar1 != 0)) {
    DAT_04de5ab8 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04de5ac0);
  }
  return &DAT_04de5ab8;
}

