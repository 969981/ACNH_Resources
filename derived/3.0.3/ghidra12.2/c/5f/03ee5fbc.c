
bool FUN_03ee5fbc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05b05330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05b05330), iVar1 != 0)) {
    DAT_05b05328 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(&DAT_05b05330);
  }
  if ((undefined **)param_2 != &DAT_05b05328) {
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb2820) {
      if (((*PTR_DAT_04bb2840 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2840), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2838 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2840);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb2838;
    }
  }
  return true;
}

