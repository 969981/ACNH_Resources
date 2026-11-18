
undefined8 FUN_035c5b00(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  if (param_2 <= (ulong)param_1[4]) {
    return 0;
  }
  if ((param_2 < 0x24924924924924a) &&
     (lVar6 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 * 0x70,param_1[1]),
     lVar6 != 0)) {
    lVar8 = param_1[2];
    if (lVar8 != 0) {
      if (param_1[3] != 0) {
        uVar11 = 0;
        do {
          puVar2 = (undefined8 *)(param_1[2] + uVar11 * 0x70);
          puVar3 = (undefined8 *)(lVar6 + uVar11 * 0x70);
          *puVar3 = *puVar2;
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
          uVar7 = puVar2[3];
          puVar3[2] = puVar2[2];
          puVar3[3] = uVar7;
          puVar3[4] = puVar2[4];
          uVar7 = puVar2[6];
          puVar3[5] = puVar2[5];
          puVar3[6] = uVar7;
          puVar3[7] = puVar2[7];
          puVar12 = puVar2 + 8;
          puVar3[8] = *puVar12;
          *puVar12 = 0;
          puVar2[7] = 0;
          puVar3[9] = puVar2[9];
          plVar10 = puVar2 + 10;
          puVar3[10] = *plVar10;
          puVar2[9] = 0;
          *plVar10 = 0;
          puVar3[0xb] = puVar2[0xb];
          puVar3[0xc] = puVar2[0xc];
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          puVar3[0xd] = puVar2[0xd];
          plVar9 = (long *)puVar2[0xc];
          if (plVar9 == (long *)0x0) {
LAB_035c5c44:
            plVar10 = (long *)*plVar10;
          }
          else {
            plVar1 = plVar9 + 1;
            do {
              lVar8 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 != 0) goto LAB_035c5c44;
            (**(code **)(*plVar9 + 0x10))(plVar9);
            std::__shared_weak_count::__release_weak();
            plVar10 = (long *)*plVar10;
          }
          if (plVar10 != (long *)0x0) {
            plVar9 = plVar10 + 1;
            do {
              lVar8 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar10 = (long *)*puVar12;
          if (plVar10 != (long *)0x0) {
            plVar9 = plVar10 + 1;
            do {
              lVar8 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              std::__shared_weak_count::__release_weak();
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < (ulong)param_1[3]);
        lVar8 = param_1[2];
      }
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,lVar8);
    }
    uVar7 = 0;
    param_1[2] = lVar6;
    param_1[4] = param_2;
  }
  else {
    uVar7 = 0x80000007;
  }
  return uVar7;
}

