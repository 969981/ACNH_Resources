
bool FUN_01581558(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_0521e510 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0521e510);
    if (iVar2 != 0) {
      DAT_0521e508 = PTR_DAT_04bbd4d0 + 0x10;
      __cxa_guard_release(&DAT_0521e510);
    }
  }
  if ((undefined **)param_2 == &DAT_0521e508) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bbd4e0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bbd4e0);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bbd4d8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd4e0);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bbd4d8;
  }
  return bVar1;
}

