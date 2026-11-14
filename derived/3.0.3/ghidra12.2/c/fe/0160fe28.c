
bool FUN_0160fe28(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_0522de28 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0522de28);
    if (iVar2 != 0) {
      DAT_0522de20 = PTR_DAT_04bbd870 + 0x10;
      __cxa_guard_release(&DAT_0522de28);
    }
  }
  if ((undefined **)param_2 == &DAT_0522de20) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bbd880 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bbd880);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bbd878 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd880);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bbd878;
  }
  return bVar1;
}

