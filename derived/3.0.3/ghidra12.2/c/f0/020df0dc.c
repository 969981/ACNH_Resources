
undefined8 * FUN_020df0dc(void)

{
  int iVar1;
  
  if (((DAT_053e3de8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053e3de8), iVar1 != 0)) {
    DAT_053e3de0 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_053e3de8);
  }
  return &DAT_053e3de0;
}

