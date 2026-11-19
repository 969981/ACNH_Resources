
void FUN_039dc1dc(long param_1,int *param_2)

{
  long lVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  int *piVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
    FUN_039dbfa0(param_1);
  }
  if (*param_2 != -0x52fff2e2) {
    if (*param_2 != -0x2ea54e13) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
      FUN_039db950(param_1,extraout_x1,0);
    }
    piVar8 = param_2 + 5;
    piVar9 = (int *)((long)*piVar8 + (long)piVar8);
    piVar3 = (int *)0x0;
    if (*piVar8 != 0) {
      piVar3 = piVar9;
    }
    if (piVar3 == param_2) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar4 = (int *)0x0;
      if (param_2[6] != 0) {
        piVar4 = (int *)((long)param_2[6] + (long)piVar8);
      }
      if ((piVar3 == (int *)0x0) || (*piVar3 != -0x2ea54e13)) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
        FUN_039db950(param_1,extraout_x1_00,0);
      }
      if ((piVar4 == (int *)0x0) || (*piVar4 != -0x2ea54e13)) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
        FUN_039db950(param_1,extraout_x1_01,0);
      }
      iVar7 = 0;
      if (piVar3 != (int *)0x0) {
        iVar7 = (int)piVar3 - ((int)piVar4 + 0x14);
      }
      piVar4[5] = iVar7;
      iVar7 = 0;
      if (piVar4 != (int *)0x0) {
        iVar7 = ((int)piVar4 - (int)piVar3) + -0x14;
      }
      piVar3[6] = iVar7;
    }
    param_2[5] = 0;
    param_2[6] = 0;
    lVar10 = LZCOUNT(param_2[1]);
    lVar13 = 0x1a - lVar10;
    puVar2 = (uint *)(param_1 + 0x4120);
    uVar6 = (0x80000000U >> (ulong)((uint)lVar10 & 0x1f) ^ param_2[1]) >>
            (ulong)((uint)lVar13 & 0x1f);
    if (*(int **)(puVar2 + lVar13 * 0x40 + (long)(int)uVar6 * 2 + 0x1c) == param_2) {
      *(int **)(puVar2 + lVar13 * 0x40 + (long)(int)uVar6 * 2 + 0x1c) = piVar9;
      if (piVar9 != (int *)0x0) {
        if (*piVar9 == -0x2ea54e13) goto LAB_039dc364;
        nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
        FUN_039db950(param_1,extraout_x1_02,0);
        if (*(long *)(puVar2 + lVar13 * 0x40 + (long)(int)uVar6 * 2 + 0x1c) != 0) goto LAB_039dc364;
      }
      lVar10 = param_1 + lVar13 * 4;
      uVar6 = *(uint *)(lVar10 + 0x4124) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      *(uint *)(lVar10 + 0x4124) = uVar6;
      if (uVar6 == 0) {
        *puVar2 = *puVar2 & (1 << (ulong)((uint)lVar13 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
LAB_039dc364:
  piVar8 = param_2 + 3;
  piVar9 = (int *)((long)*piVar8 + (long)piVar8);
  piVar3 = (int *)0x0;
  if (*piVar8 != 0) {
    piVar3 = piVar9;
  }
  if (piVar3 == param_2) {
    piVar9 = (int *)0x0;
  }
  else {
    lVar10 = 0;
    if (param_2[4] != 0) {
      lVar10 = (long)param_2[4] + (long)piVar8;
    }
    iVar7 = 0;
    if (piVar3 != (int *)0x0) {
      iVar7 = (int)piVar3 - ((int)lVar10 + 0xc);
    }
    *(int *)(lVar10 + 0xc) = iVar7;
    iVar7 = 0;
    if (lVar10 != 0) {
      iVar7 = ((int)lVar10 - (int)piVar3) + -0xc;
    }
    piVar3[4] = iVar7;
  }
  param_2[3] = 0;
  param_2[4] = 0;
  iVar7 = (int)param_2 - *(int *)(param_1 + 0x5ce8);
  uVar12 = (ulong)(iVar7 >> (*(byte *)(param_1 + 8) - 10 & 0x1f) & 0x1f);
  uVar11 = (ulong)(iVar7 >> (*(byte *)(param_1 + 8) - 5 & 0x1f) & 0x1f);
  lVar13 = 0x2098;
  lVar10 = param_1 + 0x2098;
  if (*param_2 != -0x52fff2e2) {
    lVar13 = 0x10;
    lVar10 = param_1 + 0x10;
  }
  lVar1 = lVar10 + uVar11 * 0x100 + 0x88;
  if (((*(int **)(lVar1 + uVar12 * 8) == param_2) &&
      (*(int **)(lVar1 + uVar12 * 8) = piVar9, piVar9 == (int *)0x0)) &&
     (lVar10 = lVar10 + uVar11 * 4, uVar6 = *(uint *)(lVar10 + 4) & (1 << uVar12 ^ 0xffffffffU),
     *(uint *)(lVar10 + 4) = uVar6, uVar6 == 0)) {
    *(uint *)(param_1 + lVar13) = *(uint *)(param_1 + lVar13) & (1 << uVar11 ^ 0xffffffffU);
    bVar5 = *(byte *)(param_1 + 9);
  }
  else {
    bVar5 = *(byte *)(param_1 + 9);
  }
  if ((bVar5 >> 3 & 1) == 0) {
    return;
  }
  FUN_039dbfa0(param_1);
  return;
}

