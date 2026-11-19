
void FUN_03b5ca70(undefined8 *param_1)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  MutexType *pMVar10;
  
  piVar1 = (int *)(param_1 + 0x8032);
  lVar7 = param_1[0x804a];
  *param_1 = &PTR_FUN_04b77708;
  puVar2 = (uint *)(param_1 + 0x8034);
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x4010) = 4;
    uVar9 = *(uint *)(param_1 + 0x8034);
    while (uVar8 = uVar9, (int)(uVar8 - *(int *)((long)param_1 + 0x401a4)) < *piVar1) {
      while (uVar9 = *puVar2, uVar8 == *puVar2) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          DataMemoryBarrier(2,3);
          *(long *)(param_1[0x8033] + (ulong)(*piVar1 - 1U & uVar8) * 8) = lVar7;
          goto LAB_03b5cb00;
        }
      }
    }
  }
LAB_03b5cb00:
  lVar7 = param_1[0x804b];
  param_1[0x804a] = 0;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x4010) = 4;
    uVar9 = *(uint *)(param_1 + 0x8034);
    if ((int)(*(uint *)(param_1 + 0x8034) - *(int *)((long)param_1 + 0x401a4)) < *piVar1) {
      do {
        while (uVar8 = *puVar2, uVar9 == uVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            DataMemoryBarrier(2,3);
            *(long *)(param_1[0x8033] + (ulong)(*piVar1 - 1U & uVar9) * 8) = lVar7;
            goto LAB_03b5cb84;
          }
        }
        uVar9 = uVar8;
      } while ((int)(uVar8 - *(int *)((long)param_1 + 0x401a4)) < *piVar1);
    }
  }
LAB_03b5cb84:
  lVar7 = param_1[0x804c];
  param_1[0x804b] = 0;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x4010) = 4;
    uVar9 = *(uint *)(param_1 + 0x8034);
    if ((int)(*(uint *)(param_1 + 0x8034) - *(int *)((long)param_1 + 0x401a4)) < *piVar1) {
      do {
        while (uVar8 = *puVar2, uVar9 == uVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            DataMemoryBarrier(2,3);
            *(long *)(param_1[0x8033] + (ulong)(*piVar1 - 1U & uVar9) * 8) = lVar7;
            goto LAB_03b5cc14;
          }
        }
        uVar9 = uVar8;
      } while ((int)(uVar8 - *(int *)((long)param_1 + 0x401a4)) < *piVar1);
    }
  }
LAB_03b5cc14:
  lVar7 = param_1[0x804d];
  param_1[0x804c] = 0;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x4010) = 4;
    uVar9 = *(uint *)(param_1 + 0x8034);
    if ((int)(*(uint *)(param_1 + 0x8034) - *(int *)((long)param_1 + 0x401a4)) < *piVar1) {
      do {
        while (uVar8 = *puVar2, uVar9 == uVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            DataMemoryBarrier(2,3);
            *(long *)(param_1[0x8033] + (ulong)(*piVar1 - 1U & uVar9) * 8) = lVar7;
            goto LAB_03b5cca4;
          }
        }
        uVar9 = uVar8;
      } while ((int)(uVar8 - *(int *)((long)param_1 + 0x401a4)) < *piVar1);
    }
  }
LAB_03b5cca4:
  param_1[0x804d] = 0;
  puVar5 = PTR_DAT_04bb2698;
  pMVar10 = (MutexType *)param_1[0x804e];
  if (pMVar10 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar10);
    if (*(long *)puVar5 == 0) {
      free(pMVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,pMVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pMVar10);
      }
    }
    param_1[0x804e] = 0;
  }
  pMVar10 = (MutexType *)param_1[0x804f];
  if (pMVar10 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar10);
    if (*(long *)puVar5 == 0) {
      free(pMVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,pMVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pMVar10);
      }
    }
    param_1[0x804f] = 0;
  }
  pMVar10 = (MutexType *)param_1[0x8050];
  if (pMVar10 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar10);
    if (*(long *)puVar5 == 0) {
      free(pMVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,pMVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pMVar10);
      }
    }
    param_1[0x8050] = 0;
  }
  pMVar10 = (MutexType *)param_1[0x8051];
  if (pMVar10 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar10);
    if (*(long *)puVar5 == 0) {
      free(pMVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,pMVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pMVar10);
      }
    }
    param_1[0x8051] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8052));
  return;
}

