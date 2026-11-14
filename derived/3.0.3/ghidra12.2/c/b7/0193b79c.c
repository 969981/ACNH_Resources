
undefined8 FUN_0193b79c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c78c8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c78c8);
    if (iVar1 != 0) {
      DAT_052c78c0 = &PTR_LAB_049dfa90;
      __cxa_guard_release(&DAT_052c78c8);
    }
  }
  if ((undefined ***)param_2 == &DAT_052c78c0) {
    return 1;
  }
  uVar2 = FUN_0193a900(param_2);
  return uVar2;
}

