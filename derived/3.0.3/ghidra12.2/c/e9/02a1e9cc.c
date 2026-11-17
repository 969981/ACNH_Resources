
undefined8 FUN_02a1e9cc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_055f5108 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_055f5108);
    if (iVar1 != 0) {
      DAT_055f5100 = &PTR_LAB_04a99848;
      __cxa_guard_release(&DAT_055f5108);
    }
  }
  if ((undefined ***)param_2 == &DAT_055f5100) {
    return 1;
  }
  uVar2 = FUN_02a1eabc(param_2);
  return uVar2;
}

