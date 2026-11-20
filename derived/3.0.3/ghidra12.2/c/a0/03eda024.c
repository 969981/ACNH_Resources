
bool FUN_03eda024(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05b052c0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05b052c0);
    if (iVar2 != 0) {
      DAT_05b052b8 = PTR_DAT_04bd47d0 + 0x10;
      __cxa_guard_release(&DAT_05b052c0);
    }
  }
  if ((undefined **)param_2 == &DAT_05b052b8) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bd47e0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bd47e0);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bd47d8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd47e0);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bd47d8;
  }
  return bVar1;
}

