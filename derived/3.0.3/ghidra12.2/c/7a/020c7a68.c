
undefined8 * FUN_020c7a68(void)

{
  int iVar1;
  
  if (((DAT_053e0168 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053e0168), iVar1 != 0)) {
    DAT_053e0160 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_053e0168);
  }
  return &DAT_053e0160;
}

