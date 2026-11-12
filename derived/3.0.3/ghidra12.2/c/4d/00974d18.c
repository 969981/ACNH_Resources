
bool FUN_00974d18(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_04cf9370 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04cf9370);
    if (iVar2 != 0) {
      DAT_04cf9368 = PTR_DAT_04bb5cb8 + 0x10;
      __cxa_guard_release(&DAT_04cf9370);
    }
  }
  if ((undefined **)param_2 == &DAT_04cf9368) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb5ca8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5ca8);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb5ca0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5ca8);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb5ca0;
  }
  return bVar1;
}

