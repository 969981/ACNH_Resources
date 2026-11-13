
bool FUN_0132a744(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbc3e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbc3e8), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bbc3e0 = &PTR_LAB_0498e720;
    __cxa_guard_release(PTR_DAT_04bbc3e8);
  }
  if (param_1 != PTR_DAT_04bbc3e0) {
    if (((*PTR_DAT_04bbc3d8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbc3d8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbc3d0 = PTR_DAT_04bb2fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc3d8);
    }
    if (param_1 != PTR_DAT_04bbc3d0) {
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

