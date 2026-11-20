
undefined8 FUN_03f2cd44(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05b05678 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05b05678);
    if (iVar1 != 0) {
      DAT_05b05670 = PTR_DAT_04bb4478 + 0x10;
      __cxa_guard_release(&DAT_05b05678);
    }
  }
  if ((undefined **)param_2 == &DAT_05b05670) {
    return 1;
  }
  uVar2 = FUN_007b5e24(param_2);
  return uVar2;
}

