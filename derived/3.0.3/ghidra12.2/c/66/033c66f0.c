
undefined8 FUN_033c66f0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05743fa8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05743fa8);
    if (iVar1 != 0) {
      DAT_05743fa0 = &PTR_LAB_04b24ba8;
      __cxa_guard_release(&DAT_05743fa8);
    }
  }
  if ((undefined ***)param_2 != &DAT_05743fa0) {
    if ((*PTR_DAT_04bc99a8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bc99a8);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bc99a0 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc99a8);
      }
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bc99a0) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

