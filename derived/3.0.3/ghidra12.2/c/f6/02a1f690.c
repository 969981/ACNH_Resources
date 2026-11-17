
undefined8 FUN_02a1f690(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_055f5200 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_055f5200);
    if (iVar1 != 0) {
      DAT_055f51f8 = PTR_DAT_04bb4478 + 0x10;
      __cxa_guard_release(&DAT_055f5200);
    }
  }
  if ((undefined **)param_2 == &DAT_055f51f8) {
    return 1;
  }
  uVar2 = FUN_007b5e24(param_2);
  return uVar2;
}

