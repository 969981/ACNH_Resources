
void FUN_00692d70(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long local_98;
  long *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar8 = param_1 + 8;
  if (*(long *)(param_1 + 0x10) == lVar8) {
    for (lVar8 = *(long *)(param_1 + 0x20); lVar8 != param_1 + 0x18; lVar8 = *(long *)(lVar8 + 8)) {
      nn::os::StopTimerEvent((TimerEventType *)(lVar8 + 0x10));
    }
  }
  else {
    lVar4 = nn::os::GetSystemTick();
    puVar3 = PTR_PTR_04bdf3f0;
    puVar2 = PTR_PTR_04bdf3d8;
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 == lVar8) {
      uVar5 = nn::os::ConvertToTimeSpan(0x7fffffffffffffff - lVar4);
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 == param_1 + 0x18) {
        return;
      }
    }
    else {
      lVar11 = 0x7fffffffffffffff;
      do {
        local_98 = 0;
        puVar9 = (undefined8 *)(lVar10 + -8);
        uVar5 = (**(code **)*puVar9)(puVar9);
        puStack_88 = puVar2;
        local_80 = puVar3;
        local_68 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_90 = &local_98;
        uVar6 = FUN_00692170(uVar5,&local_90,0);
        if ((((uVar6 & 1) == 0) ||
            (plVar1 = (long *)(local_98 + (long)puVar9), plVar1 == (long *)0x0)) ||
           (lVar7 = (**(code **)(*plVar1 + 0x10))(plVar1), lVar7 <= lVar4)) {
          for (lVar8 = *(long *)(param_1 + 0x20); lVar8 != param_1 + 0x18;
              lVar8 = *(long *)(lVar8 + 8)) {
            nn::os::SignalTimerEvent((TimerEventType *)(lVar8 + 0x10));
          }
          return;
        }
        lVar7 = (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar10 = *(long *)(lVar10 + 8);
        if (lVar11 <= lVar7) {
          lVar7 = lVar11;
        }
        lVar11 = lVar7;
      } while (lVar10 != lVar8);
      uVar5 = nn::os::ConvertToTimeSpan(lVar7 - lVar4);
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 == param_1 + 0x18) {
        return;
      }
    }
    do {
      nn::os::StartOneShotTimerEvent(lVar8 + 0x10,uVar5);
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != param_1 + 0x18);
  }
  return;
}

