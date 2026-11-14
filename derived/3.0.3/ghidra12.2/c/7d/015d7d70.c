
undefined8 FUN_015d7d70(long param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  if (*(char *)(param_1 + 0x16c) == '\0') {
    return 0;
  }
  uVar2 = *param_2;
  if (((uVar2 == 0xffffffff) ||
      ((((uVar2 & 0xe000) == 0x6000 && (2 < (uVar2 & 7))) ||
       ((*(uint *)(param_1 + 0x170) >> 2 & 1) != 0)))) ||
     (uVar6 = FUN_0157fa74(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x118),0x3c,param_1 + 0x6c0,
                           param_3 & 1), (uVar6 & 1) == 0)) {
    uVar7 = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x4a0));
    if (*(int *)(param_1 + 0x478) < 1) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = *(long **)(param_1 + 0x470);
      if (*plVar9 != 0) {
        *(long *)(*plVar9 + 8) = plVar9[1];
      }
      if ((long *)plVar9[1] != (long *)0x0) {
        *(long *)plVar9[1] = *plVar9;
      }
      *plVar9 = 0;
      plVar9[1] = 0;
      *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) + -1;
    }
    iVar3 = *(int *)(param_1 + 0x47c);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x4a0));
    uVar7 = 0;
    if ((plVar9 != (long *)0x0) && (lVar8 = (long)plVar9 - (long)iVar3, lVar8 != 0)) {
      puVar1 = (uint *)(param_1 + 0x170);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined4 *)(lVar8 + 0x3c) = 1;
      *(ushort *)(lVar8 + 0x38) = *(ushort *)(lVar8 + 0x38) | 0x20;
      *(uint *)(lVar8 + 0x20) = *param_2;
      nn::os::LockMutex((MutexType *)(param_1 + 0x4f8));
      plVar9 = (long *)(lVar8 + *(int *)(param_1 + 0x4d4));
      lVar8 = *(long *)(param_1 + 0x4c0);
      *(long **)(param_1 + 0x4c0) = plVar9;
      *plVar9 = lVar8;
      plVar9[1] = param_1 + 0x4c0;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar9;
      }
      *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + 1;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x4f8));
      uVar7 = 1;
    }
  }
  return uVar7;
}

