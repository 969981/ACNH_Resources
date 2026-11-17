
undefined8 * FUN_02b1b7b0(void)

{
  int iVar1;
  
  if (((DAT_05626cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05626cc8), iVar1 != 0)) {
    DAT_05626cc0 = PTR_DAT_04bc4928 + 0x10;
    __cxa_guard_release(&DAT_05626cc8);
  }
  return &DAT_05626cc0;
}

