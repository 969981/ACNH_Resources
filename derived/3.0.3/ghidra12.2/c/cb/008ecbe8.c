
bool FUN_008ecbe8(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bb5900 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5900);
    if (iVar2 != 0) {
      *(undefined ***)PTR_DAT_04bb58f8 = &PTR_LAB_04926160;
      __cxa_guard_release(PTR_DAT_04bb5900);
    }
  }
  if (param_2 == PTR_DAT_04bb58f8) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb5918 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5918);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb5910 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5918);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb5910;
  }
  return bVar1;
}

