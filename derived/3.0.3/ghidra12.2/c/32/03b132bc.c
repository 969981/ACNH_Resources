
bool FUN_03b132bc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05aea9f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea9f8), iVar1 != 0)) {
    DAT_05aea9f0 = PTR_DAT_04bb4490 + 0x10;
    __cxa_guard_release(&DAT_05aea9f8);
  }
  if ((undefined **)param_2 != &DAT_05aea9f0) {
    if (((*PTR_DAT_04bb44a0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb44a0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb4498 = PTR_DAT_04bb44a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb44a0);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb4498) {
      if (((*PTR_DAT_04bb44b8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb44b8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb44b0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb44b8);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb44b0;
    }
  }
  return true;
}

