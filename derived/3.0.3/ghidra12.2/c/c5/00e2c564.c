
undefined8 FUN_00e2c564(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04f4d5c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04f4d5c0);
    if (iVar1 != 0) {
      DAT_04f4d5b8 = PTR_DAT_04bb6598 + 0x10;
      __cxa_guard_release(&DAT_04f4d5c0);
    }
  }
  if ((undefined **)param_2 == &DAT_04f4d5b8) {
    return 1;
  }
  uVar2 = FUN_00adc7b8(param_2);
  return uVar2;
}

