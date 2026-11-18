
undefined8 FUN_033c9d60(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05744068 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05744068);
    if (iVar1 != 0) {
      DAT_05744060 = &PTR_LAB_04b26138;
      __cxa_guard_release(&DAT_05744068);
    }
  }
  if ((undefined ***)param_2 != &DAT_05744060) {
    if ((DAT_05744058 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05744058);
      if (iVar1 != 0) {
        DAT_05744050 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(&DAT_05744058);
      }
    }
    if ((undefined **)param_2 != &DAT_05744050) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

