
bool FUN_029b07e0(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bc3e90 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bc3e90);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bc3e88 = PTR_DAT_04bb3a40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3e90);
    }
  }
  if (param_2 == PTR_DAT_04bc3e88) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb3a28 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3a28);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb3a20 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3a28);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb3a20;
  }
  return bVar1;
}

