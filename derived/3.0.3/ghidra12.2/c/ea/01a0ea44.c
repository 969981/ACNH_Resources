
undefined8 FUN_01a0ea44(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052d1d38 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052d1d38);
    if (iVar1 != 0) {
      DAT_052d1d30 = &PTR_LAB_049f9fa0;
      __cxa_guard_release(&DAT_052d1d38);
    }
  }
  if ((undefined ***)param_2 == &DAT_052d1d30) {
    return 1;
  }
  uVar2 = FUN_01a0ec68(param_2);
  return uVar2;
}

