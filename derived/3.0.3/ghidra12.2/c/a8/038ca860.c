
void FUN_038ca860(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  size_t __n;
  long lVar9;
  uint *puVar10;
  long lVar11;
  
  puVar10 = (uint *)(param_1 + 0xd0);
  if ((*puVar10 & 1) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x90;
    nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar10,0x10);
    if (bVar2) {
      *puVar10 = *puVar10 & 0xfffffffd | 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (*(long *)(param_1 + 0x78) != param_1 + 0x70) {
    uVar6 = *(uint *)(param_1 + 0x84);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x78) - (long)(int)uVar6);
    uVar5 = (ulong)uVar6;
    do {
      if (puVar3[1] == 0) {
        puVar3 = (undefined8 *)(*(long *)((long)puVar3 + (long)(int)uVar6 + 8) + (long)(int)-uVar6);
        lVar8 = (long)-(int)uVar5;
      }
      else {
        (**(code **)*puVar3)();
        uVar6 = *(uint *)(param_1 + 0x84);
        uVar5 = (ulong)(int)uVar6;
        lVar8 = -uVar5;
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x78) - uVar5);
      }
    } while (puVar3 != (undefined8 *)(lVar8 + param_1 + 0x70));
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar10,0x10);
    if (bVar2) {
      *puVar10 = *puVar10 & 0xfffffffd;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 == 0) {
    if (0 < (int)DAT_05ae7550) {
      uVar5 = 0;
      __n = (long)(int)DAT_05ae7550 * 8;
      plVar4 = DAT_05ae7558;
      do {
        __n = __n - 8;
        if (*plVar4 == param_1) {
          iVar7 = (int)uVar5;
          if ((-1 < iVar7) && (iVar7 < (int)DAT_05ae7550)) {
            if (iVar7 + 1 < (int)DAT_05ae7550) {
              memmove(plVar4,plVar4 + 1,__n);
            }
            DAT_05ae7550 = DAT_05ae7550 - 1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 1;
      } while (DAT_05ae7550 != uVar5);
    }
  }
  else {
    nn::os::LockMutex((MutexType *)&DAT_05ae75e0);
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar4 = (long *)(*(int *)(lVar8 + 0x5c) + param_1);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar8 + 0x58) = *(int *)(lVar8 + 0x58) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
    nn::os::UnlockMutex((MutexType *)&DAT_05ae75e0);
  }
  FUN_038cba40(param_1);
  if (lVar9 == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
  return;
}

