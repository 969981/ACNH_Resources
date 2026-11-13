
undefined8 * FUN_00fd0fa0(void)

{
  int iVar1;
  
  if (((DAT_0502ad20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0502ad20), iVar1 != 0)) {
    DAT_0502ad18 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(&DAT_0502ad20);
  }
  return &DAT_0502ad18;
}

