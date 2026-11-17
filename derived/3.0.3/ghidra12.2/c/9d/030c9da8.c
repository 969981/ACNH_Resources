
undefined8 * FUN_030c9da8(void)

{
  int iVar1;
  
  if (((DAT_056eb3e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056eb3e8), iVar1 != 0)) {
    DAT_056eb3e0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056eb3e8);
  }
  return &DAT_056eb3e0;
}

