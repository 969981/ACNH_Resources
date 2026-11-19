
bool FUN_038e47e8(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bb6208 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb6208);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6208);
    }
  }
  if (param_2 == PTR_DAT_04bb6200) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb6220 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb6220);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb6218 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6220);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb6218;
  }
  return bVar1;
}

