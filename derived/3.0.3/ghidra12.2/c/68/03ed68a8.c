
undefined8 * FUN_03ed68a8(void)

{
  int iVar1;
  
  if (((DAT_05b05240 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05b05240), iVar1 != 0)) {
    DAT_05b05238 = PTR_DAT_04bd47d0 + 0x10;
    __cxa_guard_release(&DAT_05b05240);
  }
  return &DAT_05b05238;
}

