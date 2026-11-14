
undefined8 FUN_0192176c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c5a30 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c5a30);
    if (iVar1 != 0) {
      DAT_052c5a28 = &PTR_LAB_049db9c0;
      __cxa_guard_release(&DAT_052c5a30);
    }
  }
  if ((undefined ***)param_2 == &DAT_052c5a28) {
    return 1;
  }
  uVar2 = FUN_01920870(param_2);
  return uVar2;
}

