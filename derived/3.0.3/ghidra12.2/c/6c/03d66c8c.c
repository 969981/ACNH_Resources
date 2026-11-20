
bool FUN_03d66c8c(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bc4d48 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4d48);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bc4d40 = PTR_DAT_04bc4d50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d48);
    }
  }
  if (param_2 == PTR_DAT_04bc4d40) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bc4d60 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4d60);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bc4d58 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4d60);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bc4d58;
  }
  return bVar1;
}

