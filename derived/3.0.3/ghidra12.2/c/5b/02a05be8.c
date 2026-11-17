
bool FUN_02a05be8(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if ((*PTR_DAT_04bc4250 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4250);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bc4248 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4250);
    }
  }
  return param_2 == PTR_DAT_04bc4248;
}

