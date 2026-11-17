
undefined8 * FUN_02ea1dc0(void)

{
  int iVar1;
  
  if (((DAT_056a34f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a34f0), iVar1 != 0)) {
    DAT_056a34e8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056a34f0);
  }
  return &DAT_056a34e8;
}

