
undefined8 FUN_01917f30(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c5470 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c5470);
    if (iVar1 != 0) {
      DAT_052c5468 = &PTR_LAB_049d9850;
      __cxa_guard_release(&DAT_052c5470);
    }
  }
  if ((undefined ***)param_1 != &DAT_052c5468) {
    if ((DAT_052c5450 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052c5450);
      if (iVar1 != 0) {
        DAT_052c5448 = &PTR_LAB_049d9820;
        __cxa_guard_release(&DAT_052c5450);
      }
    }
    if ((undefined ***)param_1 != &DAT_052c5448) {
      if ((DAT_052c5440 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052c5440);
        if (iVar1 != 0) {
          DAT_052c5438 = &PTR_LAB_049d9808;
          __cxa_guard_release(&DAT_052c5440);
        }
      }
      if ((undefined ***)param_1 != &DAT_052c5438) {
        uVar2 = FUN_0190a9d4();
        return uVar2;
      }
    }
  }
  return 1;
}

