
ushort FUN_015a30c0(long param_1,undefined2 *param_2)

{
  long *plVar1;
  long *plVar2;
  MutexType *pMVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  undefined2 uVar7;
  bool bVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  
  uVar4 = param_2[8];
  if ((uVar4 >> 1 & 1) != 0) {
    param_2[8] = uVar4 | 0x10;
    if (*(long *)(param_2 + 0x10) == 0) {
      bVar9 = 1;
    }
    else {
      pMVar3 = (MutexType *)(*(long *)(param_2 + 0x10) + 0x4088);
      nn::os::LockMutex(pMVar3);
      bVar9 = FUN_01596ab4(param_2);
      if ((bVar9 & 1) == 0) {
        bVar8 = false;
      }
      else {
        lVar11 = *(long *)(param_2 + 0x10);
        if (*(int *)(lVar11 + 0x4054) == 1) {
          bVar8 = true;
        }
        else {
          bVar8 = *(int *)(lVar11 + 0x4054) == 2;
        }
        *(ushort *)(lVar11 + 0x4050) = *(ushort *)(lVar11 + 0x4050) | 0x20;
        *(undefined8 *)(param_2 + 0x10) = 0;
      }
      nn::os::UnlockMutex(pMVar3);
      bVar9 = bVar8 | bVar9 ^ 1;
    }
    if (((bVar9 & 1) != 0) && (lVar11 = *(long *)(param_2 + 0xc), lVar11 != 0)) {
      plVar1 = (long *)(param_1 + 0xd3cf0);
      plVar2 = (long *)(param_1 + 0xc8da8);
      piVar13 = (int *)(lVar11 + 0x3c0);
      do {
        iVar5 = *piVar13;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar8) {
          *piVar13 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      uVar10 = FUN_007ef630(param_2);
      if ((iVar5 < 2) && ((uVar10 & 1) != 0)) {
        uVar10 = FUN_007ef630(param_2);
        if (((uVar10 & 1) == 0) || (uVar10 = FUN_007ef180(param_2), (uVar10 & 1) == 0)) {
          nn::os::LockMutex((MutexType *)(param_1 + 0xd3d80));
          plVar14 = (long *)(lVar11 + *(int *)(param_1 + 0xd3d5c));
          if (*plVar14 != 0) {
            *(long *)(*plVar14 + 8) = plVar14[1];
          }
          lVar12 = param_1 + 0xd3d60;
          if ((long *)plVar14[1] != (long *)0x0) {
            *(long *)plVar14[1] = *plVar14;
          }
          piVar13 = (int *)(param_1 + 0xd3d58);
        }
        else {
          nn::os::LockMutex((MutexType *)(param_1 + 0xc8e38));
          plVar14 = (long *)(*(int *)(param_1 + 0xc8e14) + lVar11);
          if (*plVar14 != 0) {
            *(long *)(*plVar14 + 8) = plVar14[1];
          }
          lVar12 = param_1 + 0xc8e18;
          if ((long *)plVar14[1] != (long *)0x0) {
            *(long *)plVar14[1] = *plVar14;
          }
          piVar13 = (int *)(param_1 + 0xc8e10);
        }
        *plVar14 = 0;
        plVar14[1] = 0;
        *piVar13 = *piVar13 + -1;
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
        uVar7 = DAT_04cb6038;
        *(undefined8 *)(lVar11 + 0x3c8) = 0;
        *(undefined8 **)(lVar11 + 0x3a8) = &DAT_0407ebb1;
        *(undefined2 *)(lVar11 + 0x3c4) = uVar7;
        *(ushort *)(lVar11 + 0x4b0) = *(ushort *)(lVar11 + 0x4b0) & 0xfffe;
        *(undefined4 *)(lVar11 + 0x3c0) = 0;
        uVar10 = FUN_007ef630(param_2);
        if (((uVar10 & 1) == 0) || (uVar10 = FUN_007ef180(param_2), (uVar10 & 1) == 0)) {
          lVar12 = param_1 + 0xd3d08;
          nn::os::LockMutex((MutexType *)(param_1 + 0xd3d28));
          plVar2 = (long *)(lVar11 + *(int *)(param_1 + 0xd3d04));
          lVar11 = *plVar1;
          *plVar1 = (long)plVar2;
          *plVar2 = lVar11;
          plVar2[1] = (long)plVar1;
          if (lVar11 != 0) {
            *(long **)(lVar11 + 8) = plVar2;
          }
          piVar13 = (int *)(param_1 + 0xd3d00);
        }
        else {
          lVar12 = param_1 + 0xc8dc0;
          nn::os::LockMutex((MutexType *)(param_1 + 0xc8de0));
          plVar1 = (long *)(lVar11 + *(int *)(param_1 + 0xc8dbc));
          lVar11 = *plVar2;
          *plVar2 = (long)plVar1;
          *plVar1 = lVar11;
          plVar1[1] = (long)plVar2;
          if (lVar11 != 0) {
            *(long **)(lVar11 + 8) = plVar1;
          }
          piVar13 = (int *)(param_1 + 0xc8db8);
        }
        *piVar13 = *piVar13 + 1;
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
    uVar7 = DAT_04cb6038;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    param_2[8] = 0;
    *param_2 = uVar7;
  }
  return uVar4 >> 1 & 1;
}

