
bool FUN_038d9488(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bb2828 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2828);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
  }
  if (param_2 == PTR_DAT_04bb2820) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb2840 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2840);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb2838 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2840);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb2838;
  }
  return bVar1;
}

