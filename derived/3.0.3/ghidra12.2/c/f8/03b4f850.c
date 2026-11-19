
void FUN_03b4f850(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  long *plVar11;
  MutexType *pMVar12;
  
  lVar8 = DAT_05aebb88;
  if (param_1 != (int *)0x0) {
    iVar4 = *param_1;
    while (0 < iVar4) {
      puVar5 = *(undefined8 **)(param_1 + 2);
      plVar11 = (long *)*puVar5;
      memmove(puVar5,puVar5 + 1,(long)(iVar4 * 8 + -8));
      *param_1 = *param_1 + -1;
      if (plVar11 == (long *)0x0) break;
      uVar6 = (**(code **)(*plVar11 + 0x40))(plVar11);
      if ((uVar6 & 1) == 0) {
        iVar4 = (**(code **)(*plVar11 + 0x38))(plVar11);
        if (iVar4 == 3) {
          puVar5 = (undefined8 *)(*(long *)(lVar8 + 400) + 0x40268);
        }
        else {
          if (iVar4 != 2) goto LAB_03b4f8ac;
          puVar5 = (undefined8 *)(*(long *)(lVar8 + 400) + 0x40260);
        }
        pMVar12 = (MutexType *)puVar5[4];
        nn::os::LockMutex(pMVar12);
        piVar7 = (int *)*puVar5;
        if (*piVar7 < piVar7[1]) {
          *(long **)(*(long *)(piVar7 + 2) + (long)*piVar7 * 8) = plVar11;
          *piVar7 = *piVar7 + 1;
        }
        nn::os::UnlockMutex(pMVar12);
      }
      else {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
LAB_03b4f8ac:
      iVar4 = *param_1;
    }
    lVar8 = *(long *)(lVar8 + 400);
    param_1[0x1004] = 4;
    puVar9 = (uint *)(lVar8 + 0x401a0);
    uVar3 = *puVar9;
    while (uVar10 = uVar3, (int)(uVar10 - *(int *)(lVar8 + 0x401a4)) < *(int *)(lVar8 + 0x40190)) {
      while (uVar3 = *puVar9, uVar10 == *puVar9) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar2) {
          *puVar9 = uVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          DataMemoryBarrier(2,3);
          *(int **)(*(long *)(lVar8 + 0x40198) +
                   (ulong)(*(int *)(lVar8 + 0x40190) - 1U & uVar10) * 8) = param_1;
          return;
        }
      }
    }
  }
  return;
}

