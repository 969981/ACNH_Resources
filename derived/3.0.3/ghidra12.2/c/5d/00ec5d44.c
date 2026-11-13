
bool FUN_00ec5d44(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04f98ce8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f98ce8), iVar1 != 0)) {
    DAT_04f98ce0 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(&DAT_04f98ce8);
  }
  if ((undefined **)param_2 != &DAT_04f98ce0) {
    if (((*PTR_DAT_04bb9908 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb9908), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb9900 = PTR_DAT_04bb6508 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb9908);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb9900) {
      if (((*PTR_DAT_04bb6518 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6518), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb6510 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6518);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb6510;
    }
  }
  return true;
}

