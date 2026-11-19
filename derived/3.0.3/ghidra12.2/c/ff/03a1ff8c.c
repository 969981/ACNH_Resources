
bool FUN_03a1ff8c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05aea550 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea550), iVar1 != 0)) {
    DAT_05aea548 = &PTR_LAB_04b6d268;
    __cxa_guard_release(&DAT_05aea550);
  }
  if ((undefined ***)param_2 != &DAT_05aea548) {
    if (((*PTR_DAT_04bd1510 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd1510), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bd1508 = &PTR_FUN_04b6d108;
      __cxa_guard_release(PTR_DAT_04bd1510);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bd1508) {
      if (((*PTR_DAT_04bd14f0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bd14e8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd14f0);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bd14e8;
    }
  }
  return true;
}

