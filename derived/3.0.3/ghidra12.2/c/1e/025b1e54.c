
bool FUN_025b1e54(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_0551e010 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0551e010);
    if (iVar2 != 0) {
      DAT_0551e008 = PTR_DAT_04bc3208 + 0x10;
      __cxa_guard_release(&DAT_0551e010);
    }
  }
  if ((undefined **)param_2 == &DAT_0551e008) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bc3218 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bc3218);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bc3210 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3218);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bc3210;
  }
  return bVar1;
}

