
undefined8 * FUN_03eda110(void)

{
  int iVar1;
  
  if (((DAT_05b052c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05b052c0), iVar1 != 0)) {
    DAT_05b052b8 = PTR_DAT_04bd47d0 + 0x10;
    __cxa_guard_release(&DAT_05b052c0);
  }
  return &DAT_05b052b8;
}

