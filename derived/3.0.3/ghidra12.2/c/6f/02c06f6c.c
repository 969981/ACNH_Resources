
undefined8 FUN_02c06f6c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_0564a210 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0564a210);
    if (iVar1 != 0) {
      DAT_0564a208 = &PTR_LAB_04aacc80;
      __cxa_guard_release(&DAT_0564a210);
    }
  }
  if ((undefined ***)param_2 == &DAT_0564a208) {
    return 1;
  }
  uVar2 = FUN_02c0b8f8(param_2);
  return uVar2;
}

