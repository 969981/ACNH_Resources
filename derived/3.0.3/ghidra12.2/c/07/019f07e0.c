
undefined8 FUN_019f07e0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052d0fa8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052d0fa8);
    if (iVar1 != 0) {
      DAT_052d0fa0 = &PTR_LAB_049f5468;
      __cxa_guard_release(&DAT_052d0fa8);
    }
  }
  if ((undefined ***)param_2 != &DAT_052d0fa0) {
    if ((DAT_052d0f98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052d0f98);
      if (iVar1 != 0) {
        DAT_052d0f90 = PTR_DAT_04bb5e78 + 0x10;
        __cxa_guard_release(&DAT_052d0f98);
      }
    }
    if ((undefined **)param_2 != &DAT_052d0f90) {
      if ((*PTR_DAT_04bb5e88 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5e88);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bb5e80 = PTR_DAT_04bb3600 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5e88);
        }
      }
      if (param_2 != (undefined8 *)PTR_DAT_04bb5e80) {
        uVar2 = FUN_007521f0(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

