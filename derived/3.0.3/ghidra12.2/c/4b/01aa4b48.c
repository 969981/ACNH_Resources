
undefined8 * FUN_01aa4b48(void)

{
  int iVar1;
  
  if (((DAT_05323a68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05323a68), iVar1 != 0)) {
    DAT_05323a60 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05323a68);
  }
  return &DAT_05323a60;
}

