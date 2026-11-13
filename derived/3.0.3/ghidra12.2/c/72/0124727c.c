
bool FUN_0124727c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05150d48 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05150d48);
    if (iVar2 != 0) {
      DAT_05150d40 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05150d48);
    }
  }
  if ((undefined **)param_2 == &DAT_05150d40) {
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

