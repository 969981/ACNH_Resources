
undefined8 FUN_019184cc(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c5490 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c5490);
    if (iVar1 != 0) {
      DAT_052c5488 = &PTR_LAB_049d9880;
      __cxa_guard_release(&DAT_052c5490);
    }
  }
  if ((undefined ***)param_1 != &DAT_052c5488) {
    if ((*PTR_DAT_04bbf098 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf098);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbf090 = PTR_DAT_04bbf258 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbf098);
      }
    }
    if (param_1 != (undefined8 *)PTR_DAT_04bbf090) {
      if ((*PTR_DAT_04bbf268 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf268);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbf260 = PTR_DAT_04bbf270 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbf268);
        }
      }
      if (param_1 != (undefined8 *)PTR_DAT_04bbf260) {
        uVar2 = FUN_018e7498();
        return uVar2;
      }
    }
  }
  return 1;
}

