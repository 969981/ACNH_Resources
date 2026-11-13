
undefined8 * FUN_00c13004(void)

{
  int iVar1;
  
  if (((DAT_04e42030 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04e42030), iVar1 != 0)) {
    DAT_04e42028 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04e42030);
  }
  return &DAT_04e42028;
}

