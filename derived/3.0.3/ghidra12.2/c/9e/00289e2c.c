
bool FUN_00289e2c(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if ((*PTR_DAT_04bcdce0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bcdce0);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bcdce8 = PTR_DAT_04bcdc98 + 0x10;
      __cxa_guard_release(PTR_DAT_04bcdce0);
      return param_2 == PTR_DAT_04bcdce8;
    }
  }
  return param_2 == PTR_DAT_04bcdce8;
}

