
undefined8 FUN_00a92430(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04da7018 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04da7018);
    if (iVar1 != 0) {
      DAT_04da7010 = PTR_DAT_04bb3600 + 0x10;
      __cxa_guard_release(&DAT_04da7018);
    }
  }
  if ((undefined **)param_2 == &DAT_04da7010) {
    return 1;
  }
  uVar2 = FUN_007521f0(param_2);
  return uVar2;
}

