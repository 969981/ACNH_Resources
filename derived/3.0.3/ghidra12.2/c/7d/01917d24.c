
undefined8 FUN_01917d24(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c5460 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c5460);
    if (iVar1 != 0) {
      DAT_052c5458 = &PTR_LAB_049d9838;
      __cxa_guard_release(&DAT_052c5460);
    }
  }
  if ((undefined ***)param_1 != &DAT_052c5458) {
    if ((*PTR_DAT_04bbf0b8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf0b8);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbf0b0 = PTR_DAT_04bbf288 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbf0b8);
      }
    }
    if (param_1 != (undefined8 *)PTR_DAT_04bbf0b0) {
      if ((*PTR_DAT_04bbf298 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf298);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbf290 = PTR_DAT_04bbf2a0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbf298);
        }
      }
      if (param_1 != (undefined8 *)PTR_DAT_04bbf290) {
        uVar2 = FUN_018e9548();
        return uVar2;
      }
    }
  }
  return 1;
}

