
bool FUN_018dc7b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_052c2188 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052c2188), iVar1 != 0)) {
    DAT_052c2180 = &PTR_LAB_049d1220;
    __cxa_guard_release(&DAT_052c2188);
  }
  if ((undefined ***)param_2 != &DAT_052c2180) {
    if (((DAT_052c2198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052c2198), iVar1 != 0)) {
      DAT_052c2190 = PTR_DAT_04bbca20 + 0x10;
      __cxa_guard_release(&DAT_052c2198);
    }
    if ((undefined **)param_2 != &DAT_052c2190) {
      if (((*PTR_DAT_04bbca30 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbca30), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bbca28 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbca30);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bbca28;
    }
  }
  return true;
}

