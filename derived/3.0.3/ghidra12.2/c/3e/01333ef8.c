
bool FUN_01333ef8(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbc488 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbc488), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bbc480 = &PTR_LAB_0498f9b8;
    __cxa_guard_release(PTR_DAT_04bbc488);
  }
  if (param_1 != PTR_DAT_04bbc480) {
    if (((*PTR_DAT_04bbc478 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbc478), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbc470 = PTR_DAT_04bb2fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc478);
    }
    if (param_1 != PTR_DAT_04bbc470) {
      if (((*PTR_DAT_04bb2fe0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fe0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2fd8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2fe0);
      }
      return param_1 == PTR_DAT_04bb2fd8;
    }
  }
  return true;
}

