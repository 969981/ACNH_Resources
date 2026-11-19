
undefined8 * FUN_038da618(void)

{
  int iVar1;
  
  if (((DAT_05ae76d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae76d8), iVar1 != 0)) {
    DAT_05ae76d0 = PTR_DAT_04bb4490 + 0x10;
    __cxa_guard_release(&DAT_05ae76d8);
  }
  return &DAT_05ae76d0;
}

