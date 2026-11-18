
undefined8 FUN_033c4260(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05743fc8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05743fc8);
    if (iVar1 != 0) {
      DAT_05743fc0 = &PTR_LAB_04b24bc0;
      __cxa_guard_release(&DAT_05743fc8);
    }
  }
  if ((undefined ***)param_2 != &DAT_05743fc0) {
    if ((DAT_05743fb8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05743fb8);
      if (iVar1 != 0) {
        DAT_05743fb0 = PTR_DAT_04bbda78 + 0x10;
        __cxa_guard_release(&DAT_05743fb8);
      }
    }
    if ((undefined **)param_2 != &DAT_05743fb0) {
      if ((*PTR_DAT_04bbda88 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbda88);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbda80 = PTR_DAT_04bb3028 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbda88);
        }
      }
      if (param_2 != (undefined8 *)PTR_DAT_04bbda80) {
        uVar2 = FUN_006fea14(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

