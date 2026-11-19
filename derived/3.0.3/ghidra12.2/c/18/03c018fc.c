
bool FUN_03c018fc(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bb2170 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2170);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bb2168 = PTR_DAT_04bb2178 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2170);
    }
  }
  if (param_2 == PTR_DAT_04bb2168) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb2188 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2188);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb2180 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2188);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb2180;
  }
  return bVar1;
}

