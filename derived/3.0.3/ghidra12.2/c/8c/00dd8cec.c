
undefined8 FUN_00dd8cec(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04f2a0a8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04f2a0a8);
    if (iVar1 != 0) {
      DAT_04f2a0a0 = PTR_DAT_04bb6598 + 0x10;
      __cxa_guard_release(&DAT_04f2a0a8);
    }
  }
  if ((undefined **)param_2 == &DAT_04f2a0a0) {
    return 1;
  }
  uVar2 = FUN_00adc7b8(param_2);
  return uVar2;
}

