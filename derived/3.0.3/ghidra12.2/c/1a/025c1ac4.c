
bool FUN_025c1ac4(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05528440 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05528440);
    if (iVar2 != 0) {
      DAT_05528438 = PTR_DAT_04bc3208 + 0x10;
      __cxa_guard_release(&DAT_05528440);
    }
  }
  if ((undefined **)param_2 == &DAT_05528438) {
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

