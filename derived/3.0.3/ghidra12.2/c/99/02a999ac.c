
bool FUN_02a999ac(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0560b170 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0560b170), iVar1 != 0)) {
    DAT_0560b168 = &PTR_LAB_04a9d1a0;
    __cxa_guard_release(&DAT_0560b170);
  }
  if ((undefined ***)param_2 != &DAT_0560b168) {
    if (((DAT_0560b160 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0560b160), iVar1 != 0)) {
      DAT_0560b158 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_0560b160);
    }
    if ((undefined **)param_2 != &DAT_0560b158) {
      if (((*PTR_DAT_04bb4a90 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4a90), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4a88 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4a90);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb4a88;
    }
  }
  return true;
}

