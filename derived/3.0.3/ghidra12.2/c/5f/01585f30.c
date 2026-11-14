
undefined8 FUN_01585f30(long param_1,undefined4 *param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (*(char *)(param_1 + 0x3a0) == '\0' && *(char *)(param_1 + 0x3a1) == '\0') {
    return 0;
  }
  if ((((*(uint *)(param_1 + 0xf8) & 1) == 0) || ((*(uint *)(param_1 + 0xf8) >> 1 & 1) != 0)) ||
     ((*(ushort *)(param_2 + 1) & 1) == 0)) {
    uVar9 = 0;
  }
  else {
    *(ushort *)(param_2 + 1) = *(ushort *)(param_2 + 1) | 4;
    if (*(long *)(param_2 + 4) == 0) {
      bVar7 = 1;
    }
    else {
      pMVar1 = (MutexType *)(*(long *)(param_2 + 4) + 0x60);
      nn::os::LockMutex(pMVar1);
      bVar7 = FUN_01581c40(param_2);
      if ((bVar7 & 1) == 0) {
        bVar6 = false;
      }
      else {
        lVar10 = *(long *)(param_2 + 4);
        if (*(int *)(lVar10 + 0x3c) == 1) {
          bVar6 = true;
        }
        else {
          bVar6 = *(int *)(lVar10 + 0x3c) == 2;
        }
        *(ushort *)(lVar10 + 0x38) = *(ushort *)(lVar10 + 0x38) | 4;
        *(undefined8 *)(param_2 + 4) = 0;
      }
      nn::os::UnlockMutex(pMVar1);
      bVar7 = bVar6 | bVar7 ^ 1;
    }
    if (((bVar7 & 1) != 0) && (*(long *)(param_2 + 2) != 0)) {
      piVar2 = (int *)(*(long *)(param_2 + 2) + 0x46c);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar5 = PTR_DAT_04bb4b48;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    *param_2 = *(undefined4 *)puVar5;
    iVar8 = FUN_01581d70(0);
    iVar3 = 0;
    if (iVar8 != -1) {
      iVar3 = iVar8;
    }
    uVar9 = 1;
    param_2[6] = iVar3;
  }
  return uVar9;
}

