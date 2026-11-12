
bool FUN_006ee95c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04c89098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c89098), iVar1 != 0)) {
    DAT_04c89090 = &PTR_LAB_048fc230;
    __cxa_guard_release(&DAT_04c89098);
  }
  if ((undefined ***)param_2 != &DAT_04c89090) {
    if (((*PTR_DAT_04bb2c78 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2c78), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2c70 = PTR_DAT_04bb2c80 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2c78);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb2c70) {
      if (((*PTR_DAT_04bb2c90 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2c90), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2c88 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2c90);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb2c88;
    }
  }
  return true;
}

