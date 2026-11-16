
undefined8 * FUN_02587f00(void)

{
  int iVar1;
  
  if (((DAT_05504ed8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05504ed8), iVar1 != 0)) {
    DAT_05504ed0 = PTR_DAT_04bc31d8 + 0x10;
    __cxa_guard_release(&DAT_05504ed8);
  }
  return &DAT_05504ed0;
}

