
bool FUN_02b86470(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0563fd18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0563fd18), iVar1 != 0)) {
    DAT_0563fd10 = PTR_DAT_04bbbc28 + 0x10;
    __cxa_guard_release(&DAT_0563fd18);
  }
  if ((undefined **)param_2 != &DAT_0563fd10) {
    if (((*PTR_DAT_04bbbc10 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbbc10), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbbc08 = PTR_DAT_04bbbc18 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbc10);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bbbc08) {
      if (((*PTR_DAT_04bbbc00 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbbc00), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bbbbf8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbbc00);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bbbbf8;
    }
  }
  return true;
}

