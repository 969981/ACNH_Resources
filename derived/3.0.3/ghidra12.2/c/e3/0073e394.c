
bool FUN_0073e394(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bb3468 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3468);
    if (iVar2 != 0) {
      *(undefined ***)PTR_DAT_04bb3460 = &PTR_LAB_04903a58;
      __cxa_guard_release(PTR_DAT_04bb3468);
    }
  }
  if (param_2 == PTR_DAT_04bb3460) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb3478 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3478);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb3470 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3478);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb3470;
  }
  return bVar1;
}

