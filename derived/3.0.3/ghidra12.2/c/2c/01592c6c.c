
bool FUN_01592c6c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_052200d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052200d8), iVar1 != 0)) {
    DAT_052200d0 = &PTR_LAB_049ae2a0;
    __cxa_guard_release(&DAT_052200d8);
  }
  if ((undefined ***)param_2 == &DAT_052200d0) {
    return true;
  }
  if (((DAT_052200c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052200c8), iVar1 != 0)) {
    DAT_052200c0 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_052200c8);
  }
  if ((undefined **)param_2 != &DAT_052200c0) {
    if (((*PTR_DAT_04bb2fc8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fc8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2fc0 = PTR_DAT_04bb2fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2fc8);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb2fc0) {
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

