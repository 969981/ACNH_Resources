
bool FUN_00707b74(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_04c8c1c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c8c1c0);
    if (iVar1 != 0) {
      DAT_04c8c1b8 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(&DAT_04c8c1c0);
    }
  }
  return (undefined **)param_2 == &DAT_04c8c1b8;
}

