
bool FUN_01922588(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_052c5b30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052c5b30), iVar1 != 0)) {
    DAT_052c5b28 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_052c5b30);
  }
  if ((undefined **)param_2 != &DAT_052c5b28) {
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

