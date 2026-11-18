
bool FUN_03280270(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_0572b478 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0572b478);
    if (iVar1 != 0) {
      DAT_0572b470 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(&DAT_0572b478);
    }
  }
  return (undefined **)param_2 == &DAT_0572b470;
}

