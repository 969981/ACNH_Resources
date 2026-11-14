
bool FUN_01c561dc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0534e620 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534e620), iVar1 != 0)) {
    DAT_0534e618 = &PTR_LAB_04a42058;
    __cxa_guard_release(&DAT_0534e620);
  }
  if ((undefined ***)param_2 != &DAT_0534e618) {
    if (((DAT_0534e390 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534e390), iVar1 != 0)) {
      DAT_0534e388 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_0534e390);
    }
    if ((undefined **)param_2 != &DAT_0534e388) {
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

