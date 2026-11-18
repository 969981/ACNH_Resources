
bool FUN_032be7d8(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_0572da80 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0572da80);
    if (iVar2 != 0) {
      DAT_0572da78 = &PTR_LAB_04b1aa40;
      __cxa_guard_release(&DAT_0572da80);
    }
  }
  if ((undefined ***)param_2 == &DAT_0572da78) {
    bVar1 = true;
  }
  else {
    if ((DAT_0572da70 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0572da70);
      if (iVar2 != 0) {
        DAT_0572da68 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(&DAT_0572da70);
      }
    }
    bVar1 = (undefined **)param_2 == &DAT_0572da68;
  }
  return bVar1;
}

