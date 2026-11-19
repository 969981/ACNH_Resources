
bool FUN_03ba1a24(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bc3f48 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bc3f48);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bc3f40 = PTR_DAT_04bc3f50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3f48);
    }
  }
  if (param_2 == PTR_DAT_04bc3f40) {
    bVar1 = true;
  }
  else {
    if ((*DAT_04bc3f60 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(DAT_04bc3f60);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bc3f58 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(DAT_04bc3f60);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bc3f58;
  }
  return bVar1;
}

