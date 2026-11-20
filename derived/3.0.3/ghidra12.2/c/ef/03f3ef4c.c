
undefined8 FUN_03f3ef4c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long *plVar5;
  
  if ((*(uint *)(param_1 + 0x10) < 0x10 &&
       (1 << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) & 0xc020U) != 0) &&
     (plVar5 = *(long **)(param_1 + 0x30), plVar5 != (long *)0x0)) {
    if (((*PTR_DAT_04bb4458 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4458);
    }
    uVar2 = (**(code **)*plVar5)(plVar5,PTR_DAT_04bb4450);
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 6;
      uVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        uVar4 = 5;
        goto LAB_03f3efe8;
      }
    }
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2f8));
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  uVar4 = 0xb;
LAB_03f3efe8:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return uVar3;
}

