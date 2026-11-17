
undefined8 * FUN_02edaeb0(void)

{
  int iVar1;
  
  if (((DAT_056b1ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b1ef8), iVar1 != 0)) {
    DAT_056b1ef0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056b1ef8);
  }
  return &DAT_056b1ef0;
}

