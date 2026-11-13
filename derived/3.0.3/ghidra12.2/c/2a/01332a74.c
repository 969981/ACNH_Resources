
bool FUN_01332a74(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bb2fc8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2fc8);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bb2fc0 = PTR_DAT_04bb2fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2fc8);
    }
  }
  if (param_2 == PTR_DAT_04bb2fc0) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb2fe0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2fe0);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb2fd8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2fe0);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb2fd8;
  }
  return bVar1;
}

