
undefined8 FUN_008e94a8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04ced6b0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04ced6b0);
    if (iVar1 != 0) {
      DAT_04ced6a8 = &PTR_LAB_04921b30;
      __cxa_guard_release(&DAT_04ced6b0);
    }
  }
  if ((undefined ***)param_2 == &DAT_04ced6a8) {
    return 1;
  }
  uVar2 = FUN_008eae24(param_2);
  return uVar2;
}

