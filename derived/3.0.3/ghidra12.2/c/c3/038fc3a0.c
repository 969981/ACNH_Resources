
long * FUN_038fc3a0(long param_1,int *param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  
  pMVar1 = (MutexType *)(param_1 + 0x348);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x3a8) < 1) {
    nn::os::UnlockMutex(pMVar1);
LAB_038fc400:
    FUN_038faca0(param_1);
    nn::os::LockMutex(pMVar1);
    if (*(int *)(param_1 + 0x3a8) < 1) {
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      uVar8 = *(int *)(param_1 + 0x3a8) - 1;
      *(uint *)(param_1 + 0x3a8) = uVar8;
      plVar12 = *(long **)(*(long *)(param_1 + 0x3b0) + (ulong)uVar8 * 8);
      nn::os::UnlockMutex(pMVar1);
      if (plVar12 != (long *)0x0) goto LAB_038fc438;
    }
    FUN_038faca0(param_1);
    puVar11 = PTR_DAT_04bcf278;
    puVar10 = PTR_DAT_04bcf270;
    puVar9 = PTR_DAT_04bcf238;
    iVar5 = *(int *)(param_1 + 0x368);
    if (iVar5 != 0) {
      uVar14 = 0;
      lVar13 = *(long *)(param_1 + 0x370);
      do {
        if (0 < *(int *)(lVar13 + (-(uVar14 >> 0x1f) & 0xffffffe000000000 | uVar14 << 5))) {
          lVar4 = lVar13 + (long)(int)uVar14 * 0x20;
          (**(code **)puVar9)(*(undefined8 *)(lVar4 + 0x18));
          (**(code **)puVar10)(*(undefined8 *)(lVar4 + 0x18));
          (**(code **)puVar11)(*(undefined8 *)(lVar4 + 0x18));
        }
        uVar3 = uVar14 + 1;
        uVar14 = uVar3 & 0xffffffff;
      } while (iVar5 != (int)uVar3);
    }
    plVar12 = (long *)0x0;
  }
  else {
    uVar8 = *(int *)(param_1 + 0x3a8) - 1;
    *(uint *)(param_1 + 0x3a8) = uVar8;
    plVar12 = *(long **)(*(long *)(param_1 + 0x3b0) + (ulong)uVar8 * 8);
    nn::os::UnlockMutex(pMVar1);
    if (plVar12 == (long *)0x0) goto LAB_038fc400;
LAB_038fc438:
    if (*param_2 == -1) {
      nn::os::LockMutex(pMVar1);
      uVar8 = *(int *)(param_1 + 0x3c8) - 1;
      if (*(int *)(param_1 + 0x3c8) < 1) {
        lVar13 = 0;
      }
      else {
        *(uint *)(param_1 + 0x3c8) = uVar8;
        lVar13 = *(long *)(*(long *)(param_1 + 0x3d0) + (ulong)uVar8 * 8);
      }
      nn::os::UnlockMutex(pMVar1);
      piVar2 = (int *)(lVar13 + 0x80);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      uVar8 = *param_2 - (uint)*(ushort *)(param_1 + 0x3da);
      if (*(uint *)(param_1 + 0x368) <= uVar8) {
        uVar8 = 0;
      }
      lVar13 = **(long **)(*(long *)(param_1 + 0x370) + (long)(int)uVar8 * 0x20 + 0x10);
      piVar2 = (int *)(lVar13 + 0x80);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    *plVar12 = lVar13;
  }
  return plVar12;
}

