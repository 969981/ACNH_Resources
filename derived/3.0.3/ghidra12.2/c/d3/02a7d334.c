
bool FUN_02a7d334(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_05603970 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05603970);
    if (iVar1 != 0) {
      DAT_05603968 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(&DAT_05603970);
    }
  }
  return (undefined **)param_2 == &DAT_05603968;
}

