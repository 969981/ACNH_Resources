
bool FUN_02a01c88(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_055f2608 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_055f2608);
    if (iVar2 != 0) {
      DAT_055f2600 = PTR_DAT_04bb3a40 + 0x10;
      __cxa_guard_release(&DAT_055f2608);
    }
  }
  if ((undefined **)param_2 == &DAT_055f2600) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb3a28 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3a28);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb3a20 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3a28);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb3a20;
  }
  return bVar1;
}

