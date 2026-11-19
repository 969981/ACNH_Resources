
bool FUN_038a3570(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05ae6fc8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05ae6fc8);
    if (iVar2 != 0) {
      DAT_05ae6fc0 = &PTR_LAB_04b623b0;
      __cxa_guard_release(&DAT_05ae6fc8);
    }
  }
  if ((undefined ***)param_2 == &DAT_05ae6fc0) {
    bVar1 = true;
  }
  else {
    if ((DAT_05ae6fb8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_05ae6fb8);
      if (iVar2 != 0) {
        DAT_05ae6fb0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(&DAT_05ae6fb8);
      }
    }
    bVar1 = (undefined **)param_2 == &DAT_05ae6fb0;
  }
  return bVar1;
}

