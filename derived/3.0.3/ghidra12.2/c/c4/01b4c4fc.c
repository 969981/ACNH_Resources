
bool FUN_01b4c4fc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05334f70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05334f70), iVar1 != 0)) {
    DAT_05334f68 = &PTR_LAB_04a38278;
    __cxa_guard_release(&DAT_05334f70);
  }
  if ((undefined ***)param_2 != &DAT_05334f68) {
    if (((DAT_05334f60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05334f60), iVar1 != 0)) {
      DAT_05334f58 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05334f60);
    }
    if ((undefined **)param_2 != &DAT_05334f58) {
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

