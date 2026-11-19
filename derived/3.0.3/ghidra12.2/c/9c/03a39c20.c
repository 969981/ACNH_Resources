
void FUN_03a39c20(undefined8 *param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  short *psVar15;
  
  lVar12 = param_1[2];
  iVar5 = *(int *)(param_1 + 1);
  *param_1 = &PTR_FUN_04b6d910;
  if (iVar5 != 0) {
    iVar13 = 0;
    uVar11 = *(undefined8 *)PTR_DAT_04bbd510;
    do {
      if (*(long *)(lVar12 + (long)iVar13 * 0x238) != 0) {
        FUN_039499cc(uVar11);
      }
      iVar13 = iVar13 + 1;
    } while (iVar5 != iVar13);
    lVar12 = param_1[2];
  }
  if (lVar12 != 0) {
    plVar10 = (long *)(lVar12 + -8);
    if (*plVar10 != 0) {
      lVar14 = *plVar10 * 0x238;
      puVar1 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar3 = lVar12 + lVar14;
        *(undefined **)(lVar3 + -0xe8) = puVar1;
        FUN_038fd0e0(lVar3 + -0x90);
        lVar8 = DAT_05ae78f0;
        psVar15 = (short *)(lVar3 + -0x156);
        if (*psVar15 != -1) {
          pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x580);
          nn::os::LockMutex(pMVar2);
          uVar7 = (int)*psVar15 - (uint)*(ushort *)(lVar8 + 0x5c0);
          if (*(uint *)(lVar8 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar4 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex(pMVar2);
          *psVar15 = -1;
        }
        FUN_038fd0e0(lVar3 + -0x1e0);
        lVar14 = lVar14 + -0x238;
      } while (lVar14 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar10);
    }
    else {
      plVar9 = (long *)FUN_038cb610(DAT_05ae7600,plVar10);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar10);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  param_1[4] = PTR_DAT_04bd0d40 + 0x10;
  lVar12 = param_1[5];
  if (lVar12 != 0) {
    if (lVar12 == 1) {
      return;
    }
    if ((*(uint *)(lVar12 + 0xd0) & 1) == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = lVar12 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar12 + 0xb0));
    }
    plVar10 = (long *)((long)*(int *)(lVar12 + 0x84) + (long)(param_1 + 4));
    if (*plVar10 != 0) {
      *(long *)(*plVar10 + 8) = plVar10[1];
    }
    if ((long *)plVar10[1] != (long *)0x0) {
      *(long *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
    if (lVar14 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
    }
  }
  param_1[5] = 1;
  return;
}

