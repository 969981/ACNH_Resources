
undefined8 FUN_020ba984(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_053dfe38 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_053dfe38);
    if (iVar1 != 0) {
      DAT_053dfe30 = PTR_DAT_04bb3600 + 0x10;
      __cxa_guard_release(&DAT_053dfe38);
    }
  }
  if ((undefined **)param_2 == &DAT_053dfe30) {
    return 1;
  }
  uVar2 = FUN_007521f0(param_2);
  return uVar2;
}

