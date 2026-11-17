
bool FUN_02bb9560(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bc4e88 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e88);
    if (iVar2 != 0) {
      *(undefined ***)PTR_DAT_04bc4e80 = &PTR_LAB_04aa77a0;
      __cxa_guard_release(PTR_DAT_04bc4e88);
    }
  }
  if (param_2 == PTR_DAT_04bc4e80) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bc4ea0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4ea0);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bc4e98 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ea0);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bc4e98;
  }
  return bVar1;
}

