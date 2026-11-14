
undefined8 FUN_015d8190(long param_1,undefined4 *param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (((*(char *)(param_1 + 0x16c) == '\0' && *(char *)(param_1 + 0x16d) == '\0') ||
      ((*(uint *)(param_1 + 0x170) & 1) == 0)) || ((*(uint *)(param_1 + 0x170) >> 1 & 1) != 0)) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 1) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    *(ushort *)(param_2 + 1) = *(ushort *)(param_2 + 1) | 4;
    if (*(long *)(param_2 + 4) == 0) {
      bVar6 = 1;
    }
    else {
      pMVar1 = (MutexType *)(*(long *)(param_2 + 4) + 0x60);
      nn::os::LockMutex(pMVar1);
      bVar6 = FUN_015d3428(param_2);
      if ((bVar6 & 1) == 0) {
        bVar5 = false;
      }
      else {
        lVar9 = *(long *)(param_2 + 4);
        if (*(int *)(lVar9 + 0x3c) == 1) {
          bVar5 = true;
        }
        else {
          bVar5 = *(int *)(lVar9 + 0x3c) == 2;
        }
        *(ushort *)(lVar9 + 0x38) = *(ushort *)(lVar9 + 0x38) | 4;
        *(undefined8 *)(param_2 + 4) = 0;
      }
      nn::os::UnlockMutex(pMVar1);
      bVar6 = bVar5 | bVar6 ^ 1;
    }
    if (((bVar6 & 1) != 0) && (*(long *)(param_2 + 2) != 0)) {
      piVar2 = (int *)(*(long *)(param_2 + 2) + 0x470);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined8 *)(param_2 + 2) = 0;
    *param_2 = 0xffffffff;
    *(undefined2 *)(param_2 + 1) = 0;
    iVar7 = FUN_015d3550(0);
    iVar3 = 0;
    if (iVar7 != -1) {
      iVar3 = iVar7;
    }
    uVar8 = 1;
    param_2[6] = iVar3;
  }
  return uVar8;
}

