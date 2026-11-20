
void FUN_03d5a350(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(*(long *)PTR_DAT_04bb2718 + 0x420);
  if (*(long *)(param_1 + 0x38) != param_1 + 0x30) {
    lVar5 = (long)*(int *)(param_1 + 0x44);
    lVar6 = *(long *)(param_1 + 0x38) - lVar5;
    do {
      piVar1 = (int *)(*(long *)(lVar6 + 0x10) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
    } while (lVar6 != (param_1 + 0x30) - lVar5);
  }
  if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
    lVar5 = (long)*(int *)(param_1 + 0x2c);
    lVar6 = *(long *)(param_1 + 0x20) - lVar5;
    do {
      FUN_03d5a4a0(lVar6);
      lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
    } while (lVar6 != (param_1 + 0x18) - lVar5);
  }
  FUN_03d5b4a0(plVar7,param_1);
  if (((*(uint *)(plVar7 + 9) & 0xfffffffe) == 2) && ((*(uint *)(plVar7 + 0x10a) & 0xff00) != 0)) {
    uVar2 = *(uint *)((long)plVar7 + 0x854);
    *(uint *)(plVar7 + 0x10b) = uVar2;
    DataMemoryBarrier(2,3);
    if ((uVar2 & 1) != 0) {
      nn::os::SignalLightEvent((LightEventType *)(*plVar7 + 0x160));
    }
    if ((uVar2 >> 1 & 1) != 0) {
      nn::os::SignalLightEvent((LightEventType *)(plVar7[1] + 0x160));
    }
    if ((uVar2 >> 2 & 1) != 0) {
      nn::os::SignalLightEvent((LightEventType *)(plVar7[2] + 0x160));
      return;
    }
  }
  return;
}

