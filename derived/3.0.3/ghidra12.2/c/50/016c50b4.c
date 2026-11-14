
undefined8 FUN_016c50b4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_0523ae28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0523ae28);
    if (iVar1 != 0) {
      DAT_0523ae20 = PTR_DAT_04bb3600 + 0x10;
      __cxa_guard_release(&DAT_0523ae28);
    }
  }
  if ((undefined **)param_2 == &DAT_0523ae20) {
    return 1;
  }
  uVar2 = FUN_007521f0(param_2);
  return uVar2;
}

