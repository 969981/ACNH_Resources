
undefined8 * FUN_00e54cec(void)

{
  int iVar1;
  
  if (((DAT_04f5a460 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f5a460), iVar1 != 0)) {
    DAT_04f5a458 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04f5a460);
  }
  return &DAT_04f5a458;
}

