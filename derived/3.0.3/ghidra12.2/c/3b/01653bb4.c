
undefined8 FUN_01653bb4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05231100 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05231100);
    if (iVar1 != 0) {
      DAT_052310f8 = PTR_DAT_04bb61b8 + 0x10;
      __cxa_guard_release(&DAT_05231100);
    }
  }
  if ((undefined **)param_2 != &DAT_052310f8) {
    if ((*PTR_DAT_04bb61c8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bb61c8);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bb61c0 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb61c8);
      }
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb61c0) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

