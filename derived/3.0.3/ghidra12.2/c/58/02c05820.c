
undefined8 * FUN_02c05820(void)

{
  int iVar1;
  
  if (((DAT_05649ca0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05649ca0), iVar1 != 0)) {
    DAT_05649c98 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(&DAT_05649ca0);
  }
  return &DAT_05649c98;
}

