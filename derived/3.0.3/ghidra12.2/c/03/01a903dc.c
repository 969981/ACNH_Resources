
undefined8 * FUN_01a903dc(void)

{
  int iVar1;
  
  if (((DAT_053227f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053227f8), iVar1 != 0)) {
    DAT_053227f0 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_053227f8);
  }
  return &DAT_053227f0;
}

