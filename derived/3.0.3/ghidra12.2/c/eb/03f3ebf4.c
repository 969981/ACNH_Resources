
void FUN_03f3ebf4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if ((*(int *)(param_1 + 0x10) - 0xbU < 2) &&
     (plVar5 = *(long **)(param_1 + 0x30), plVar5 != (long *)0x0)) {
    if (((*PTR_DAT_04bb4458 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4458);
    }
    uVar3 = (**(code **)*plVar5)(plVar5,PTR_DAT_04bb4450);
    puVar1 = PTR_DAT_04bb3350;
    if ((uVar3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x3f8);
      if (lVar7 == 0) {
        lVar6 = 1;
      }
      else {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar6 = *(long *)(lVar4 + 0xa8);
        *(long *)(lVar4 + 0xa8) = lVar7;
      }
      *(undefined4 *)(param_1 + 0x10) = 4;
      (**(code **)(*plVar5 + 0x38))(plVar5);
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2f8));
      *(undefined4 *)(param_1 + 0x10) = 8;
      if (lVar6 == 1) {
        return;
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar6;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 8;
  return;
}

