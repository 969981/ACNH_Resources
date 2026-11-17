
bool FUN_02b14a94(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05623b48 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05623b48);
    if (iVar2 != 0) {
      DAT_05623b40 = PTR_DAT_04bc4928 + 0x10;
      __cxa_guard_release(&DAT_05623b48);
    }
  }
  if ((undefined **)param_2 == &DAT_05623b40) {
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

