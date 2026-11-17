
bool FUN_02b35df8(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bc49d8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bc49d8);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bc49d0 = PTR_DAT_04bbba98 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc49d8);
    }
  }
  if (param_2 == PTR_DAT_04bc49d0) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb5b78 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5b78);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb5b70 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5b78);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb5b70;
  }
  return bVar1;
}

