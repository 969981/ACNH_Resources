
undefined8 * FUN_02ca91fc(void)

{
  int iVar1;
  
  if (((DAT_05664b80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05664b80), iVar1 != 0)) {
    DAT_05664b78 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_05664b80);
  }
  return &DAT_05664b78;
}

