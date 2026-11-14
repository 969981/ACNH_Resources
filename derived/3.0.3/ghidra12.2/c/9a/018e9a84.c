
undefined8 FUN_018e9a84(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c2e70 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c2e70);
    if (iVar1 != 0) {
      DAT_052c2e68 = &PTR_LAB_049d2c08;
      __cxa_guard_release(&DAT_052c2e70);
    }
  }
  if ((undefined ***)param_2 == &DAT_052c2e68) {
    return 1;
  }
  uVar2 = FUN_018e3e70(param_2);
  return uVar2;
}

