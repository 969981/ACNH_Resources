
undefined8 * FUN_02ede074(void)

{
  int iVar1;
  
  if (((DAT_056b2a28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b2a28), iVar1 != 0)) {
    DAT_056b2a20 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056b2a28);
  }
  return &DAT_056b2a20;
}

