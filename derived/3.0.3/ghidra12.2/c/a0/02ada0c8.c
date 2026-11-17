
undefined8 * FUN_02ada0c8(void)

{
  int iVar1;
  
  if (((DAT_05613f28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05613f28), iVar1 != 0)) {
    DAT_05613f20 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_05613f28);
  }
  return &DAT_05613f20;
}

