
undefined8 FUN_01650878(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05230ff8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05230ff8);
    if (iVar1 != 0) {
      DAT_05230ff0 = &PTR_LAB_049b8658;
      __cxa_guard_release(&DAT_05230ff8);
    }
  }
  if ((undefined ***)param_2 != &DAT_05230ff0) {
    if ((DAT_05230fe8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05230fe8);
      if (iVar1 != 0) {
        DAT_05230fe0 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(&DAT_05230fe8);
      }
    }
    if ((undefined **)param_2 != &DAT_05230fe0) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

