
bool FUN_006ef514(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_04c89168 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c89168);
    if (iVar2 != 0) {
      DAT_04c89160 = PTR_DAT_04bb2c80 + 0x10;
      __cxa_guard_release(&DAT_04c89168);
    }
  }
  if ((undefined **)param_2 == &DAT_04c89160) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb2c90 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2c90);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb2c88 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2c90);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb2c88;
  }
  return bVar1;
}

