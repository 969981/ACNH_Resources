
void FUN_03270ef0(long param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  undefined *local_70;
  char *pcStack_68;
  
  iVar13 = *(int *)(param_1 + 0x220);
  lVar7 = FUN_033d0598(PTR_DAT_04bb32e0);
  piVar3 = (int *)(lVar7 + 0x164);
  if (iVar13 != 1) {
    piVar3 = (int *)(lVar7 + 0x100);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if (*(uint *)(lVar7 + 0x298) < 2) {
    uVar14 = 0;
LAB_03270f74:
    if ((int)uVar14 < *(int *)(param_1 + 0x228)) {
      iVar13 = -1;
      if ((*(int *)(param_1 + 0x46c10) != 0) &&
         (uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x230) + (ulong)uVar14 * 8) + 0xc),
         uVar2 <= *(int *)(param_1 + 0x46c10) - 1U)) {
        iVar13 = **(int **)(*(long *)(param_1 + 0x46c18) + (long)(int)uVar2 * 8);
      }
      goto LAB_03270fc4;
    }
  }
  else {
    uVar14 = *(int *)(lVar7 + 0x444) + *(int *)(lVar7 + 0x2e8) * *(int *)(lVar7 + 0x440);
    if (-1 < (int)uVar14) goto LAB_03270f74;
  }
  iVar13 = -1;
LAB_03270fc4:
  uVar2 = 0;
  if (*(uint *)(param_1 + 0xaa8e8) != 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0xaa8e8);
  }
  if (param_2 != 0xffffffff) {
    uVar2 = param_2;
  }
  uVar12 = (ulong)uVar2;
  piVar1 = piVar3 + 0xc;
  piVar4 = piVar1 + uVar12;
  piVar6 = piVar3 + uVar12;
  if (0xb < uVar2) {
    uVar12 = 0;
    piVar4 = piVar1;
    piVar6 = piVar3;
  }
  *piVar6 = 0;
  *piVar4 = -1;
  if ((iVar13 != -1) && (psVar8 = (short *)FUN_0267ce80(param_1 + 0x1f8,iVar13), *psVar8 != -2)) {
    if (*(uint *)(lVar7 + 0x298) < 2) {
      iVar10 = 0;
    }
    else {
      iVar9 = *(int *)(lVar7 + 0x430);
      if ((*(int *)(lVar7 + 0x418) != 2) &&
         (fVar15 = *(float *)(lVar7 + 0x424) - *(float *)(lVar7 + 0x428),
         iVar9 = *(int *)(lVar7 + 0x420), fVar15 <= 0.0001 && -0.0001 <= fVar15)) {
        iVar9 = *(int *)(lVar7 + 0x430);
      }
      iVar5 = *(int *)(lVar7 + 0x2e8);
      iVar10 = 0;
      if (iVar5 != 0) {
        iVar10 = (int)uVar14 / iVar5;
      }
      iVar10 = iVar10 - iVar9;
      if (iVar10 < 0) {
        iVar10 = -1;
      }
      else {
        iVar9 = 0;
        if (iVar5 != 0) {
          iVar9 = *(int *)(lVar7 + 0x2f0) / iVar5;
        }
        if (iVar9 < iVar10) {
          iVar10 = -1;
        }
      }
    }
    *piVar6 = iVar10;
    piVar1[uVar12] = iVar13;
  }
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "/L_SortWin_00";
  lVar7 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_70);
  uVar11 = 0xff;
  *(undefined2 *)(piVar3 + 0x18) = *(undefined2 *)(lVar7 + 0x2aa);
  uVar14 = *(uint *)(param_1 + 0xaa8e8);
  if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(param_1 + 0xaa8d0))) {
    lVar7 = param_1 + 0xaa8c0;
    uVar2 = uVar14 + 1 & 3;
    if (2 < uVar14) {
      uVar14 = uVar14 + 1 & 0xfffffffc;
      do {
        uVar14 = uVar14 - 4;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
      } while (uVar14 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar7 = *(long *)(lVar7 + 8);
    }
    uVar11 = 0xff;
    if ((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0xaa8d4), lVar7 != 0)) {
      uVar11 = (undefined1)*(undefined4 *)(lVar7 + 0x270);
    }
  }
  *(undefined1 *)((long)piVar3 + 0x62) = uVar11;
  return;
}

