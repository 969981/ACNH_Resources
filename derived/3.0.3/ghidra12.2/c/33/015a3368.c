
bool FUN_015a3368(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05222f00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05222f00), iVar1 != 0)) {
    DAT_05222ef8 = PTR_DAT_04bbd4e8 + 0x10;
    __cxa_guard_release(&DAT_05222f00);
  }
  if ((undefined **)param_2 != &DAT_05222ef8) {
    if (((*PTR_DAT_04bbd4c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd4c8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbd4c0 = PTR_DAT_04bbd4d0 + 0x10;
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

