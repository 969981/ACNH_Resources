
bool FUN_01b47a8c(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bb8c08 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb8c08);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bb8c00 = PTR_DAT_04bb8c10 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb8c08);
    }
  }
  if (param_2 == PTR_DAT_04bb8c00) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb8c20 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb8c20);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb8c18 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb8c20);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bb8c18;
  }
  return bVar1;
}

