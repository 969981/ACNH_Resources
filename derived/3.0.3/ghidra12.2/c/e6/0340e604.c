
bool FUN_0340e604(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05751288 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05751288);
    if (iVar2 != 0) {
      DAT_05751280 = PTR_DAT_04bb3a10 + 0x10;
      __cxa_guard_release(&DAT_05751288);
    }
  }
  if ((undefined **)param_2 == &DAT_05751280) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb39f8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb39f8);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb39f0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb39f8);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb39f0;
  }
  return bVar1;
}

