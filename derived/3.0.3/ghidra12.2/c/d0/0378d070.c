
undefined8 * FUN_0378d070(void)

{
  int iVar1;
  
  if (((DAT_05ac1a60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ac1a60), iVar1 != 0)) {
    DAT_05ac1a58 = PTR_DAT_04bb3a40 + 0x10;
    __cxa_guard_release(&DAT_05ac1a60);
  }
  return &DAT_05ac1a58;
}

