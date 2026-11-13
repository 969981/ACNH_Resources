
bool FUN_013fee30(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_051b7160 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_051b7160);
    if (iVar2 != 0) {
      DAT_051b7158 = &PTR_LAB_04997358;
      __cxa_guard_release(&DAT_051b7160);
    }
  }
  if ((undefined ***)param_2 == &DAT_051b7158) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb5e38 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5e38);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb5e30 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5e38);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb5e30;
  }
  return bVar1;
}

