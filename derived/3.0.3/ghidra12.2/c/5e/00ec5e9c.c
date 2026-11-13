
undefined8 * FUN_00ec5e9c(void)

{
  int iVar1;
  
  if (((DAT_04f98ce8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f98ce8), iVar1 != 0)) {
    DAT_04f98ce0 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(&DAT_04f98ce8);
  }
  return &DAT_04f98ce0;
}

