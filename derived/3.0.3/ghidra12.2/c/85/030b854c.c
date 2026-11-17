
undefined8 * FUN_030b854c(void)

{
  int iVar1;
  
  if (((DAT_056ead78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056ead78), iVar1 != 0)) {
    DAT_056ead70 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056ead78);
  }
  return &DAT_056ead70;
}

