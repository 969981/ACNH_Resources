
undefined8 * FUN_00974e04(void)

{
  int iVar1;
  
  if (((DAT_04cf9370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf9370), iVar1 != 0)) {
    DAT_04cf9368 = PTR_DAT_04bb5cb8 + 0x10;
    __cxa_guard_release(&DAT_04cf9370);
  }
  return &DAT_04cf9368;
}

