
bool FUN_03853edc(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if ((*PTR_DAT_04bb4a90 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4a90);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bb4a88 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4a90);
    }
  }
  return param_2 == PTR_DAT_04bb4a88;
}

