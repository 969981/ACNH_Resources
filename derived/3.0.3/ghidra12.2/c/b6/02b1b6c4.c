
bool FUN_02b1b6c4(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05626cc8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05626cc8);
    if (iVar2 != 0) {
      DAT_05626cc0 = PTR_DAT_04bc4928 + 0x10;
      __cxa_guard_release(&DAT_05626cc8);
    }
  }
  if ((undefined **)param_2 == &DAT_05626cc0) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bc4938 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4938);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bc4930 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4938);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bc4930;
  }
  return bVar1;
}

