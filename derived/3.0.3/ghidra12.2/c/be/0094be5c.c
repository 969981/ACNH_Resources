
bool FUN_0094be5c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_04cf78b0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04cf78b0);
    if (iVar2 != 0) {
      DAT_04cf78a8 = &PTR_LAB_04929bb0;
      __cxa_guard_release(&DAT_04cf78b0);
    }
  }
  if ((undefined ***)param_2 == &DAT_04cf78a8) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb5b90 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5b90);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb5b88 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5b90);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb5b88;
  }
  return bVar1;
}

