
undefined8 * FUN_030e2280(void)

{
  int iVar1;
  
  if (((DAT_056ee5b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056ee5b0), iVar1 != 0)) {
    DAT_056ee5a8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056ee5b0);
  }
  return &DAT_056ee5a8;
}

