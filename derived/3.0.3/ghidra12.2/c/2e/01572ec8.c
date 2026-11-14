
undefined8 FUN_01572ec8(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbd5e0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd5e0);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bbd5d8 = &PTR_FUN_049ab868;
      __cxa_guard_release(PTR_DAT_04bbd5e0);
    }
  }
  if (param_2 != PTR_DAT_04bbd5d8) {
    if ((*PTR_DAT_04bbd5d0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd5d0);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbd5c8 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd5d0);
      }
    }
    if (param_2 != PTR_DAT_04bbd5c8) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

