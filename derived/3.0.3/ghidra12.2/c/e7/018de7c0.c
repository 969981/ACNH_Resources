
undefined8 FUN_018de7c0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c2ec0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c2ec0);
    if (iVar1 != 0) {
      DAT_052c2eb8 = &PTR_LAB_049d2c80;
      __cxa_guard_release(&DAT_052c2ec0);
    }
  }
  if ((undefined ***)param_2 != &DAT_052c2eb8) {
    if ((DAT_052c2e20 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052c2e20);
      if (iVar1 != 0) {
        DAT_052c2e18 = &PTR_LAB_049d26d8;
        __cxa_guard_release(&DAT_052c2e20);
      }
    }
    if ((undefined ***)param_2 != &DAT_052c2e18) {
      uVar2 = FUN_018e4628(param_2);
      return uVar2;
    }
  }
  return 1;
}

