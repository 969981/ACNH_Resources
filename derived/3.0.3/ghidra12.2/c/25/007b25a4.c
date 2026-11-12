
bool FUN_007b25a4(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_04ca7b10 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04ca7b10);
    if (iVar2 != 0) {
      DAT_04ca7b08 = PTR_DAT_04bb43c8 + 0x10;
      __cxa_guard_release(&DAT_04ca7b10);
    }
  }
  if ((undefined **)param_2 == &DAT_04ca7b08) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb43d8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb43d8);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb43d0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb43d8);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb43d0;
  }
  return bVar1;
}

