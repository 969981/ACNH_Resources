
bool FUN_0072abc4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04c92d38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92d38), iVar1 != 0)) {
    DAT_04c92d30 = &PTR_LAB_04901308;
    __cxa_guard_release(&DAT_04c92d38);
  }
  if ((undefined ***)param_2 != &DAT_04c92d30) {
    if (((*PTR_DAT_04bb33e0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb33e0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb33d8 = PTR_DAT_04bb2fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb33e0);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb33d8) {
      if (((*PTR_DAT_04bb2fe0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fe0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2fd8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2fe0);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb2fd8;
    }
  }
  return true;
}

