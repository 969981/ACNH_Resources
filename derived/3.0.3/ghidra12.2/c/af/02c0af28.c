
undefined8 FUN_02c0af28(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_0564a1c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0564a1c0);
    if (iVar1 != 0) {
      DAT_0564a1b8 = &PTR_LAB_04aac908;
      __cxa_guard_release(&DAT_0564a1c0);
    }
  }
  if ((undefined ***)param_2 == &DAT_0564a1b8) {
    return 1;
  }
  uVar2 = FUN_02c0b31c(param_2);
  return uVar2;
}

