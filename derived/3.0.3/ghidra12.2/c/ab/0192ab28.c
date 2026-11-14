
undefined8 FUN_0192ab28(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c5df0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c5df0);
    if (iVar1 != 0) {
      DAT_052c5de8 = &PTR_LAB_049dd9c0;
      __cxa_guard_release(&DAT_052c5df0);
    }
  }
  if ((undefined ***)param_2 == &DAT_052c5de8) {
    return 1;
  }
  uVar2 = FUN_0192be04(param_2);
  return uVar2;
}

