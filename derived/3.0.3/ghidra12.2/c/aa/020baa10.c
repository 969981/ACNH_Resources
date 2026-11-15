
undefined8 * FUN_020baa10(void)

{
  int iVar1;
  
  if (((DAT_053dfe38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053dfe38), iVar1 != 0)) {
    DAT_053dfe30 = PTR_DAT_04bb3600 + 0x10;
    __cxa_guard_release(&DAT_053dfe38);
  }
  return &DAT_053dfe30;
}

