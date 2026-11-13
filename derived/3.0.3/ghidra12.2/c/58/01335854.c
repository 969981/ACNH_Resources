
undefined8 * FUN_01335854(void)

{
  int iVar1;
  
  if (((DAT_05193ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05193ff0), iVar1 != 0)) {
    DAT_05193fe8 = PTR_DAT_04bb3600 + 0x10;
    __cxa_guard_release(&DAT_05193ff0);
  }
  return &DAT_05193fe8;
}

