
bool FUN_038e4aa4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05ae77c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae77c8), iVar1 != 0)) {
    DAT_05ae77c0 = &PTR_LAB_04b655f0;
    __cxa_guard_release(&DAT_05ae77c8);
  }
  if ((undefined ***)param_2 != &DAT_05ae77c0) {
    if (((*PTR_DAT_04bb6208 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6208);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb6200) {
      if (((*PTR_DAT_04bb6220 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6220), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb6218 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6220);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb6218;
    }
  }
  return true;
}

