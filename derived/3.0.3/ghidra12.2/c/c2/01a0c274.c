
undefined8 FUN_01a0c274(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052d1d18 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052d1d18);
    if (iVar1 != 0) {
      DAT_052d1d10 = &PTR_LAB_049f9ce8;
      __cxa_guard_release(&DAT_052d1d18);
    }
  }
  if ((undefined ***)param_2 == &DAT_052d1d10) {
    return 1;
  }
  uVar2 = FUN_01a0d810(param_2);
  return uVar2;
}

