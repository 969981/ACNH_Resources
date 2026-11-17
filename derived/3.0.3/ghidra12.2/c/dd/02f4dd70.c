
undefined8 * FUN_02f4dd70(void)

{
  int iVar1;
  
  if (((DAT_056c4a00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c4a00), iVar1 != 0)) {
    DAT_056c49f8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056c4a00);
  }
  return &DAT_056c49f8;
}

