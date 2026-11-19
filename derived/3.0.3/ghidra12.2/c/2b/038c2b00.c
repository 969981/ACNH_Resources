
bool FUN_038c2b00(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05ae7490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae7490), iVar1 != 0)) {
    DAT_05ae7488 = &PTR_LAB_04b640b0;
    __cxa_guard_release(&DAT_05ae7490);
  }
  if ((undefined ***)param_2 != &DAT_05ae7488) {
    if (((*PTR_DAT_04bd0d08 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0d08), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bd0d00 = &PTR_LAB_04b64098;
      __cxa_guard_release(PTR_DAT_04bd0d08);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bd0d00) {
      if (((*PTR_DAT_04bc95b8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc95b8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc95b0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc95b8);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bc95b0;
    }
  }
  return true;
}

