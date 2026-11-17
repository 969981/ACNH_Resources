
undefined8 FUN_02b30ab0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_0562bf30 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0562bf30);
    if (iVar1 != 0) {
      DAT_0562bf28 = PTR_DAT_04bb3600 + 0x10;
      __cxa_guard_release(&DAT_0562bf30);
    }
  }
  if ((undefined **)param_2 == &DAT_0562bf28) {
    return 1;
  }
  uVar2 = FUN_007521f0(param_2);
  return uVar2;
}

