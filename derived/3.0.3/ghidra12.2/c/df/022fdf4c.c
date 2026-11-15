
bool FUN_022fdf4c(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bc2f90 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bc2f90);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bc2f88 = PTR_DAT_04bc2e88 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2f90);
    }
  }
  if (param_2 == PTR_DAT_04bc2f88) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bbc6b0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bbc6b0);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bbc6a8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbc6b0);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bbc6a8;
  }
  return bVar1;
}

