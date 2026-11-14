
bool FUN_01b523a4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05335058 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05335058), iVar1 != 0)) {
    DAT_05335050 = &PTR_LAB_04a38360;
    __cxa_guard_release(&DAT_05335058);
  }
  if ((undefined ***)param_2 != &DAT_05335050) {
    if (((DAT_05335038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05335038), iVar1 != 0)) {
      DAT_05335030 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05335038);
    }
    if ((undefined **)param_2 != &DAT_05335030) {
      if (((*PTR_DAT_04bb4a90 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4a90), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4a88 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4a90);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb4a88;
    }
  }
  return true;
}

