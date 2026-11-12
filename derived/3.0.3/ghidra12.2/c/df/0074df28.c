
undefined8 FUN_0074df28(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04c93f68 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c93f68);
    if (iVar1 != 0) {
      DAT_04c93f60 = &PTR_LAB_04904db0;
      __cxa_guard_release(&DAT_04c93f68);
    }
  }
  if ((undefined ***)param_2 == &DAT_04c93f60) {
    return 1;
  }
  uVar2 = FUN_00746908(param_2);
  return uVar2;
}

