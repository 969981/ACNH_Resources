
bool FUN_032e2120(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05730038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05730038), iVar1 != 0)) {
    DAT_05730030 = &PTR_LAB_04b1c2d0;
    __cxa_guard_release(&DAT_05730038);
  }
  if ((undefined ***)param_2 != &DAT_05730030) {
    if (((*PTR_DAT_04bc9660 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc9660), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc9658 = PTR_DAT_04bb44a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc9660);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bc9658) {
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

