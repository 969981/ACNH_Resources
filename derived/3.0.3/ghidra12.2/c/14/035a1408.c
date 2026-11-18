
bool FUN_035a1408(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05774118 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05774118), iVar1 != 0)) {
    DAT_05774110 = &PTR_LAB_04b3e6f0;
    __cxa_guard_release(&DAT_05774118);
  }
  if ((undefined ***)param_2 == &DAT_05774110) {
    return true;
  }
  if (((DAT_05774108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05774108), iVar1 != 0)) {
    DAT_05774100 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_05774108);
  }
  if ((undefined **)param_2 != &DAT_05774100) {
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

