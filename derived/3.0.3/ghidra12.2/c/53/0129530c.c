
bool FUN_0129530c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05161d98 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05161d98);
    if (iVar2 != 0) {
      DAT_05161d90 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05161d98);
    }
  }
  if ((undefined **)param_2 == &DAT_05161d90) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb4a90 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4a90);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb4a88 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4a90);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb4a88;
  }
  return bVar1;
}

