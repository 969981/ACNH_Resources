
undefined8 * FUN_02c0467c(void)

{
  int iVar1;
  
  if (((DAT_05649c80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05649c80), iVar1 != 0)) {
    DAT_05649c78 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(&DAT_05649c80);
  }
  return &DAT_05649c78;
}

