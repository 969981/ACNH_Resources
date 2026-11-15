
bool FUN_02054cd4(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bc2648 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bc2648);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bc2640 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2648);
    }
  }
  if (param_2 == PTR_DAT_04bc2640) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb4a90 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4a90);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb4a88 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4a90);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb4a88;
  }
  return bVar1;
}

