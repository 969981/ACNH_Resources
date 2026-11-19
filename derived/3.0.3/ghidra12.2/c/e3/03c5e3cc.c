
undefined8 * FUN_03c5e3cc(void)

{
  int iVar1;
  
  if (((DAT_05aee0c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aee0c0), iVar1 != 0)) {
    DAT_05aee0b0 = PTR_DAT_04bb2020 + 0x10;
    DAT_05aee0b8 = "Control";
    __cxa_guard_release(&DAT_05aee0c0);
  }
  return &DAT_05aee0b0;
}

