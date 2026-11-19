
bool FUN_03c5f064(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05aee0d0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05aee0d0);
    if (iVar2 != 0) {
      DAT_05aee0c8 = &PTR_FUN_04b81c70;
      __cxa_guard_release(&DAT_05aee0d0);
    }
  }
  if ((undefined ***)param_2 == &DAT_05aee0c8) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bd3928 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3928);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bd3920 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd3928);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bd3920;
  }
  return bVar1;
}

