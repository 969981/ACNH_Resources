
bool FUN_038317a4(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05ae0500 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05ae0500);
    if (iVar2 != 0) {
      DAT_05ae04f8 = &PTR_LAB_04b5d320;
      __cxa_guard_release(&DAT_05ae0500);
    }
  }
  if ((undefined ***)param_2 == &DAT_05ae04f8) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb5080 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5080);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb5078 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5080);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb5078;
  }
  return bVar1;
}

