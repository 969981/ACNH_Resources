
bool FUN_03ebda2c(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bd4778 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bd4778);
    if (iVar2 != 0) {
      *(undefined ***)PTR_DAT_04bd4770 = &PTR_LAB_04ba5170;
      __cxa_guard_release(PTR_DAT_04bd4778);
    }
  }
  if (param_2 == PTR_DAT_04bd4770) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bd4750 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bd4750);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bd4748 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd4750);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bd4748;
  }
  return bVar1;
}

