
undefined8 * FUN_030abdc4(void)

{
  int iVar1;
  
  if (((DAT_056e7f20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e7f20), iVar1 != 0)) {
    DAT_056e7f18 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056e7f20);
  }
  return &DAT_056e7f18;
}

