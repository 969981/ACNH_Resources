
undefined8 * FUN_00ffc3c0(void)

{
  int iVar1;
  
  if (((DAT_05042200 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05042200), iVar1 != 0)) {
    DAT_050421f8 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(&DAT_05042200);
  }
  return &DAT_050421f8;
}

