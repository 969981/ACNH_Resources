
undefined8 FUN_01575c50(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_0521e330 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0521e330);
    if (iVar1 != 0) {
      DAT_0521e328 = &PTR_LAB_049ab440;
      __cxa_guard_release(&DAT_0521e330);
    }
  }
  if ((undefined ***)param_2 != &DAT_0521e328) {
    if ((*PTR_DAT_04bbd608 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd608);
      if (iVar1 != 0) {
        *(undefined ***)PTR_DAT_04bbd600 = &PTR_FUN_049ab868;
        __cxa_guard_release(PTR_DAT_04bbd608);
      }
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bbd600) {
      if ((*PTR_DAT_04bbd5d0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd5d0);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbd5c8 = PTR_DAT_04bb3028 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbd5d0);
        }
      }
      if (param_2 != (undefined8 *)PTR_DAT_04bbd5c8) {
        uVar2 = FUN_006fea14(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

