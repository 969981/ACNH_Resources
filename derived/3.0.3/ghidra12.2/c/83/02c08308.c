
undefined8 FUN_02c08308(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_0564a1f0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0564a1f0);
    if (iVar1 != 0) {
      DAT_0564a1e8 = &PTR_LAB_04aacc68;
      __cxa_guard_release(&DAT_0564a1f0);
    }
  }
  if ((undefined ***)param_2 == &DAT_0564a1e8) {
    return 1;
  }
  uVar2 = FUN_02c09640(param_2);
  return uVar2;
}

