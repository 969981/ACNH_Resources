
void FUN_039dbda0(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  
  bVar5 = *(byte *)(param_1 + 8);
  iVar6 = param_2[3];
  iVar10 = (int)param_2;
  iVar11 = iVar10 - *(int *)(param_1 + 0x5ce8);
  uVar12 = (ulong)(iVar11 >> (bVar5 - 10 & 0x1f) & 0x1f);
  if (((iVar6 != 0) && ((long)iVar6 != -0xc - (long)param_2)) ||
     ((*param_2 != -0x52fff2e2 && (*param_2 != -0x2ea54e13)))) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
    FUN_039db950(param_1,extraout_x1,0);
  }
  uVar13 = (ulong)(iVar11 >> (bVar5 - 5 & 0x1f) & 0x1f);
  if (((param_2[4] != 0) && ((long)param_2[4] != -0xc - (long)param_2)) ||
     ((iVar6 = *param_2, iVar6 != -0x52fff2e2 && (iVar6 != -0x2ea54e13)))) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
    FUN_039db950(param_1,extraout_x1_00,0);
    iVar6 = *param_2;
  }
  lVar4 = 0x2098;
  lVar2 = param_1 + 0x2098;
  if (iVar6 != -0x52fff2e2) {
    lVar4 = 0x10;
    lVar2 = param_1 + 0x10;
  }
  lVar1 = lVar2 + uVar13 * 0x100 + 0x88;
  piVar9 = *(int **)(lVar1 + uVar12 * 8);
  if (piVar9 == (int *)0x0) {
    lVar2 = lVar2 + uVar13 * 4;
    param_2[3] = -0xc;
    param_2[4] = -0xc;
    *(int **)(lVar1 + uVar12 * 8) = param_2;
    *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | 1 << uVar12;
    *(uint *)(param_1 + lVar4) = *(uint *)(param_1 + lVar4) | 1 << uVar13;
  }
  else {
    piVar8 = piVar9;
    do {
      if (param_2 < piVar8) goto LAB_039dbef4;
      piVar7 = piVar8 + 3;
      iVar6 = *piVar7;
      piVar8 = (int *)0x0;
      if (iVar6 != 0) {
        piVar8 = (int *)((long)iVar6 + (long)piVar7);
      }
    } while (piVar8 != piVar9);
    piVar8 = piVar9;
LAB_039dbef4:
    if (param_2 < piVar9) {
      *(int **)(lVar1 + uVar12 * 8) = param_2;
    }
    lVar2 = 0;
    if (piVar8[4] != 0) {
      lVar2 = (long)piVar8[4] + (long)(piVar8 + 3);
    }
    *(int *)(lVar2 + 0xc) = iVar10 - ((int)lVar2 + 0xc);
    iVar11 = (int)(param_2 + 3);
    iVar6 = 0;
    if (lVar2 != 0) {
      iVar6 = (int)lVar2 - iVar11;
    }
    iVar3 = 0;
    if (piVar8 != (int *)0x0) {
      iVar3 = (int)piVar8 - iVar11;
    }
    param_2[3] = iVar3;
    param_2[4] = iVar6;
    piVar8[4] = iVar10 - (int)(piVar8 + 3);
  }
  return;
}

