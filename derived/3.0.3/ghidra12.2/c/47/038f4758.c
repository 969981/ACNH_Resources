
bool FUN_038f4758(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bd0f98 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bd0f98);
    if (iVar2 != 0) {
      *(undefined ***)PTR_DAT_04bd0f90 = &PTR_LAB_04b659d0;
      __cxa_guard_release(PTR_DAT_04bd0f98);
    }
  }
  if (param_2 == PTR_DAT_04bd0f90) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bd0d28 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bd0d28);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bd0d20 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd0d28);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bd0d20;
  }
  return bVar1;
}

