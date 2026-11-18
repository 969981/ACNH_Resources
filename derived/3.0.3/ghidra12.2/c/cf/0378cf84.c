
bool FUN_0378cf84(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05ac1a60 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05ac1a60);
    if (iVar2 != 0) {
      DAT_05ac1a58 = PTR_DAT_04bb3a40 + 0x10;
      __cxa_guard_release(&DAT_05ac1a60);
    }
  }
  if ((undefined **)param_2 == &DAT_05ac1a58) {
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

