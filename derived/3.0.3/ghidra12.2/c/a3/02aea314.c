
undefined8 FUN_02aea314(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_056180a0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_056180a0);
    if (iVar1 != 0) {
      DAT_05618098 = &PTR_LAB_04aa0340;
      __cxa_guard_release(&DAT_056180a0);
    }
  }
  if ((undefined ***)param_2 == &DAT_05618098) {
    return 1;
  }
  uVar2 = FUN_012609a0(param_2);
  return uVar2;
}

