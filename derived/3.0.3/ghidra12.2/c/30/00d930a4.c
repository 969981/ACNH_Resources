
undefined8 * FUN_00d930a4(void)

{
  int iVar1;
  
  if (((DAT_04f08ce8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f08ce8), iVar1 != 0)) {
    DAT_04f08ce0 = PTR_DAT_04bb6530 + 0x10;
    __cxa_guard_release(&DAT_04f08ce8);
  }
  return &DAT_04f08ce0;
}

