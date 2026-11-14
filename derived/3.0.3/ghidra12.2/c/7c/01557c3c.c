
bool FUN_01557c3c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05219e90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05219e90), iVar1 != 0)) {
    DAT_05219e88 = &PTR_LAB_049a8980;
    __cxa_guard_release(&DAT_05219e90);
  }
  if ((undefined ***)param_2 != &DAT_05219e88) {
    if (((*PTR_DAT_04bbd4c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd4c8), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bbd4c0 = &PTR_LAB_049a8968;
      __cxa_guard_release(PTR_DAT_04bbd4c8);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bbd4c0) {
      if (((*PTR_DAT_04bbd4e0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd4e0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bbd4d8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd4e0);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bbd4d8;
    }
  }
  return true;
}

