
bool FUN_0121e358(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0514b418 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0514b418), iVar1 != 0)) {
    DAT_0514b410 = PTR_DAT_04bb8bf8 + 0x10;
    __cxa_guard_release(&DAT_0514b418);
  }
  if ((undefined **)param_2 != &DAT_0514b410) {
    if (((*PTR_DAT_04bb8c08 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb8c08), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb8c00 = PTR_DAT_04bb8c10 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb8c08);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb8c00) {
      if (((*PTR_DAT_04bb8c20 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb8c20), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb8c18 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb8c20);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb8c18;
    }
  }
  return true;
}

