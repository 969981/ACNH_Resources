
undefined8 FUN_0293b34c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_055d0b00 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_055d0b00);
    if (iVar1 != 0) {
      DAT_055d0af8 = &PTR_LAB_04a93940;
      __cxa_guard_release(&DAT_055d0b00);
    }
  }
  if ((undefined ***)param_2 == &DAT_055d0af8) {
    return 1;
  }
  uVar2 = FUN_0293e010(param_2);
  return uVar2;
}

