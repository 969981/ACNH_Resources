
bool FUN_011b7a54(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_050d4050 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_050d4050);
    if (iVar2 != 0) {
      DAT_050d4048 = PTR_DAT_04bbba98 + 0x10;
      __cxa_guard_release(&DAT_050d4050);
    }
  }
  if ((undefined **)param_2 == &DAT_050d4048) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb5b78 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5b78);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb5b70 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5b78);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb5b70;
  }
  return bVar1;
}

