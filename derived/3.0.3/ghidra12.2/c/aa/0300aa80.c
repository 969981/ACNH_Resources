
undefined8 * FUN_0300aa80(void)

{
  int iVar1;
  
  if (((DAT_056d6ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6ca8), iVar1 != 0)) {
    DAT_056d6ca0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056d6ca8);
  }
  return &DAT_056d6ca0;
}

