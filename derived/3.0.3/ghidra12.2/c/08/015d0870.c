
bool FUN_015d0870(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05226ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05226ed0), iVar1 != 0)) {
    DAT_05226ec8 = PTR_DAT_04bbd480 + 0x10;
    __cxa_guard_release(&DAT_05226ed0);
  }
  if ((undefined **)param_2 != &DAT_05226ec8) {
    if (((*PTR_DAT_04bbd490 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd490), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbd488 = PTR_DAT_04bbd498 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd490);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bbd488) {
      if (((*PTR_DAT_04bbd478 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd478), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bbd470 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd478);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bbd470;
    }
  }
  return true;
}

