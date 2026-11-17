
undefined8 * FUN_02c80ab0(void)

{
  int iVar1;
  
  if (((DAT_05660cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05660cc8), iVar1 != 0)) {
    DAT_05660cc0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_05660cc8);
  }
  return &DAT_05660cc0;
}

