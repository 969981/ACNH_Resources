
bool FUN_013d63d0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_051b0f18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b0f18), iVar1 != 0)) {
    DAT_051b0f10 = &PTR_LAB_04995aa0;
    __cxa_guard_release(&DAT_051b0f18);
  }
  if ((undefined ***)param_2 != &DAT_051b0f10) {
    if (((DAT_051b0f28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b0f28), iVar1 != 0)) {
      DAT_051b0f20 = &PTR_FUN_04995ab8;
      __cxa_guard_release(&DAT_051b0f28);
    }
    if ((undefined ***)param_2 != &DAT_051b0f20) {
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

