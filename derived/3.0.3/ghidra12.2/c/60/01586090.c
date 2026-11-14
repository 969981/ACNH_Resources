
undefined8 FUN_01586090(long param_1,int *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  
  if (*(char *)(param_1 + 0x3a0) == '\0') {
    return 0;
  }
  if (((*param_2 == *(int *)PTR_DAT_04bb4b48) ||
      (puVar7 = (uint *)(param_1 + 0xf8), (*puVar7 >> 2 & 1) != 0)) ||
     (uVar4 = FUN_0157fa74(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x118),0x3c,param_1 + 0x6b0,
                           param_3 & 1), (uVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x490));
    if (*(int *)(param_1 + 0x468) < 1) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = *(long **)(param_1 + 0x460);
      if (*plVar8 != 0) {
        *(long *)(*plVar8 + 8) = plVar8[1];
      }
      if ((long *)plVar8[1] != (long *)0x0) {
        *(long *)plVar8[1] = *plVar8;
      }
      *plVar8 = 0;
      plVar8[1] = 0;
      *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    }
    iVar1 = *(int *)(param_1 + 0x46c);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x490));
    uVar5 = 0;
    if ((plVar8 != (long *)0x0) && (lVar6 = (long)plVar8 - (long)iVar1, lVar6 != 0)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *puVar7 = *puVar7 | 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined4 *)(lVar6 + 0x3c) = 1;
      *(ushort *)(lVar6 + 0x38) = *(ushort *)(lVar6 + 0x38) | 0x20;
      *(int *)(lVar6 + 0x20) = *param_2;
      nn::os::LockMutex((MutexType *)(param_1 + 0x4e8));
      plVar8 = (long *)(lVar6 + *(int *)(param_1 + 0x4c4));
      lVar6 = *(long *)(param_1 + 0x4b0);
      *(long **)(param_1 + 0x4b0) = plVar8;
      *plVar8 = lVar6;
      plVar8[1] = param_1 + 0x4b0;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar8;
      }
      *(int *)(param_1 + 0x4c0) = *(int *)(param_1 + 0x4c0) + 1;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x4e8));
      uVar5 = 1;
    }
  }
  return uVar5;
}

