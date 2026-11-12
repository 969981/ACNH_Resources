
undefined8 FUN_008e726c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04ced650 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04ced650);
    if (iVar1 != 0) {
      DAT_04ced648 = &PTR_LAB_04921248;
      __cxa_guard_release(&DAT_04ced650);
    }
  }
  if ((undefined ***)param_2 == &DAT_04ced648) {
    return 1;
  }
  uVar2 = FUN_008e84ac(param_2);
  return uVar2;
}

