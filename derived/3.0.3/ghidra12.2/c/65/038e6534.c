
bool FUN_038e6534(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bb6230 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb6230);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6230);
    }
  }
  if (param_2 == PTR_DAT_04bb6228) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb6248 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb6248);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb6240 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6248);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb6240;
  }
  return bVar1;
}

