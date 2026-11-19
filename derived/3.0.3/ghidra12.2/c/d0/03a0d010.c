
void FUN_03a0d010(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  int iVar15;
  int local_38;
  uint local_34;
  
  puVar6 = PTR_DAT_04bb3508;
  if (*(char *)(param_1 + 0x8c) == '\0') {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    uVar10 = nn::os::GetSystemTick();
    uVar14 = *(uint *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x98) = uVar10;
    if (0 < (int)uVar14) {
      uVar12 = 0;
      do {
        uVar11 = uVar12;
        if (uVar14 <= uVar12) {
          uVar11 = 0;
        }
        plVar13 = *(long **)(*(long *)(param_1 + 0x70) + (ulong)uVar11 * 8);
        if ((*(int *)((long)plVar13 + 0x104) != 0 || *(char *)(param_1 + 0x8d) != '\0') &&
           ((int)plVar13[0x25] != 0)) {
          nn::os::ClearLightEvent((LightEventType *)(plVar13 + 0x2f));
          *(undefined4 *)(plVar13 + 0x21) = 1;
          (**(code **)(*plVar13 + 0x18))(plVar13,1,1);
          uVar14 = *(uint *)(param_1 + 0x68);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar14);
    }
  }
  else if (*(int *)(param_1 + 0x88) != 0) {
    uVar14 = 0;
    do {
      uVar12 = uVar14;
      if (*(uint *)(param_1 + 0x78) <= uVar14) {
        uVar12 = 0;
      }
      (**(code **)**(undefined8 **)(*(long *)(param_1 + 0x80) + (long)(int)uVar12 * 8))();
      uVar12 = uVar14;
      if (*(uint *)(param_1 + 0x78) <= uVar14) {
        uVar12 = 0;
      }
      plVar13 = *(long **)(*(long *)(param_1 + 0x80) + (long)(int)uVar12 * 8);
      uVar7 = (**(code **)(*plVar13 + 0x10))(plVar13);
      iVar15 = 0;
      do {
        local_38 = 0;
        uVar8 = (**(code **)(*plVar13 + 8))(plVar13,uVar7,&local_38,0);
        iVar15 = local_38 + iVar15;
      } while ((uVar8 & 1) == 0);
      uVar12 = uVar14;
      if (*(uint *)(param_1 + 0x78) <= uVar14) {
        uVar12 = 0;
      }
      piVar1 = (int *)(*(long *)(*(long *)(param_1 + 0x80) + (long)(int)uVar12 * 8) + 0x70);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + *piVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar12 = uVar14;
      if (*(uint *)(param_1 + 0x78) <= uVar14) {
        uVar12 = 0;
      }
      plVar13 = *(long **)(*(long *)(param_1 + 0x80) + (long)(int)uVar12 * 8);
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (lVar9 == 0) {
        local_34 = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_34 = (int)lVar9 - 1;
      }
      DataMemoryBarrier(2,3);
      puVar3 = (undefined4 *)((long)plVar13 + 100) + local_34;
      if (2 < local_34) {
        puVar3 = (undefined4 *)((long)plVar13 + 100);
      }
      *puVar3 = 0;
      DataMemoryBarrier(2,3);
      if ((((int)plVar13[3] == 2) || ((int)plVar13[3] == 1)) &&
         (uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13), (uVar8 & 1) == 0)) {
        nn::os::WaitLightEvent((LightEventType *)(plVar13 + 9));
      }
      uVar12 = *(uint *)(param_1 + 0x68);
      if (0 < (int)uVar12) {
        uVar11 = 0;
        do {
          uVar2 = uVar11;
          if (uVar12 <= uVar11) {
            uVar2 = 0;
          }
          lVar9 = *(long *)(*(long *)(param_1 + 0x70) + (ulong)uVar2 * 8);
          piVar1 = (int *)(lVar9 + 0x130);
          do {
          } while (*piVar1 == 1);
          do {
            do {
            } while (*piVar1 != 0);
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          *(undefined8 *)(lVar9 + 0x124) = 0;
          DataMemoryBarrier(2,3);
          do {
            do {
            } while (*piVar1 != 1);
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar12 = *(uint *)(param_1 + 0x68);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar12);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_1 + 0x88));
  }
  return;
}

