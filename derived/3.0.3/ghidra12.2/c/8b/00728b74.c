
undefined8 FUN_00728b74(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04c92d18 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c92d18);
    if (iVar1 != 0) {
      DAT_04c92d10 = &PTR_LAB_04901070;
      __cxa_guard_release(&DAT_04c92d18);
    }
  }
  if ((undefined ***)param_2 == &DAT_04c92d10) {
    return 1;
  }
  uVar2 = FUN_0072a3a0(param_2);
  return uVar2;
}

