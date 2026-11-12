
undefined8 FUN_00be6734(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04e2af80 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04e2af80);
    if (iVar1 != 0) {
      DAT_04e2af78 = PTR_DAT_04bb6598 + 0x10;
      __cxa_guard_release(&DAT_04e2af80);
    }
  }
  if ((undefined **)param_2 == &DAT_04e2af78) {
    return 1;
  }
  uVar2 = FUN_00adc7b8(param_2);
  return uVar2;
}

