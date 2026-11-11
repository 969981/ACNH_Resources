
void FUN_004da4c0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  ulong uVar18;
  
  plVar3 = (long *)(param_1 + 0x28);
  lVar8 = FUN_004dcbb0(plVar3,param_4);
  if (lVar8 == 0) {
    uVar9 = *(uint *)(param_1 + 0x20);
    uVar7 = uVar9;
    if (uVar9 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 0x18,0x10);
      uVar7 = *(uint *)(param_1 + 0x20);
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar7 * 0x10);
    *(uint *)(param_1 + 0x20) = uVar7 + 1;
    *plVar1 = 0;
    puVar12 = (uint *)(plVar1 + 1);
    puVar12[0] = 0;
    puVar12[1] = 0x80000000;
    uVar10 = *param_2;
    uVar14 = param_2[1];
    uVar13 = param_2[2];
    if ((uVar13 & 1) != 0) {
      FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
    }
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar18 = param_3[2];
    if ((uVar18 & 1) != 0) {
      FUN_0043dd30(uVar18 & 0xfffffffffffffffe);
    }
    uVar7 = *puVar12;
    if (uVar7 == (*(uint *)((long)plVar1 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar1,0x30);
      uVar7 = *puVar12;
    }
    puVar11 = (undefined8 *)(*plVar1 + (long)(int)uVar7 * 0x30);
    *puVar11 = uVar10;
    puVar11[3] = uVar4;
    puVar11[4] = uVar5;
    puVar11[1] = uVar14;
    puVar11[2] = uVar13;
    puVar11[5] = uVar18;
    *puVar12 = uVar7 + 1;
    iVar6 = *(int *)(param_1 + 0x20);
    lVar15 = *(long *)(param_1 + 0x18);
    uVar14 = *param_2;
    lVar8 = param_3[1];
    if (lVar8 == 0) {
      uVar13 = 0;
      bVar17 = true;
    }
    else {
      uVar13 = FUN_00428370(lVar8);
      if ((uVar13 & 1) == 0) {
        bVar17 = true;
      }
      else {
        FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
        FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
        bVar17 = false;
      }
    }
    plVar1 = (long *)(lVar15 + ((long)iVar6 + -1) * 0x10);
    uVar10 = *param_3;
    uVar4 = param_3[1];
    uVar18 = param_3[2];
    if ((uVar18 & 1) != 0) {
      FUN_0043dd30(uVar18 & 0xfffffffffffffffe);
    }
    puVar12 = (uint *)(plVar1 + 1);
    uVar7 = *puVar12;
    if (uVar7 == (*(uint *)((long)plVar1 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar1,0x30);
      uVar7 = *puVar12;
    }
    puVar11 = (undefined8 *)(*plVar1 + (long)(int)uVar7 * 0x30);
    puVar11[2] = uVar13;
    puVar11[3] = uVar10;
    puVar11[4] = uVar4;
    puVar11[5] = uVar18;
    *puVar11 = uVar14;
    puVar11[1] = lVar8;
    *puVar12 = uVar7 + 1;
    if (!bVar17) {
      FUN_0043dd50(uVar13 & 0xfffffffffffffffe);
    }
    uVar7 = FUN_004dcc20(plVar3,param_4);
    if (*(uint *)(param_1 + 0x30) == uVar7) {
      if ((*(uint *)(param_1 + 0x34) & 0x3fffffff) == uVar7) {
        FUN_00426990(PTR_DAT_048607b8,plVar3,8);
        uVar7 = *(uint *)(param_1 + 0x30);
      }
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar7 * 8);
      *puVar2 = *param_4;
      puVar2[1] = uVar9;
      *(uint *)(param_1 + 0x30) = uVar7 + 1;
    }
    else {
      *(uint *)(*plVar3 + ((long)((ulong)uVar7 << 0x20) >> 0x1d) + 4) = uVar9;
    }
  }
  else {
    lVar15 = (long)*(int *)(*(long *)(param_1 + 0x28) + (long)*(int *)(lVar8 + 4) * 8 + 4);
    lVar8 = *(long *)(param_1 + 0x18);
    uVar13 = param_2[2];
    uVar14 = *param_2;
    uVar10 = param_2[1];
    if ((uVar13 & 1) != 0) {
      FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
    }
    plVar3 = (long *)(lVar8 + lVar15 * 0x10);
    uVar18 = param_3[2];
    uVar4 = *param_3;
    uVar5 = param_3[1];
    if ((uVar18 & 1) != 0) {
      FUN_0043dd30(uVar18 & 0xfffffffffffffffe);
    }
    puVar12 = (uint *)(plVar3 + 1);
    uVar9 = *puVar12;
    if (uVar9 == (*(uint *)((long)plVar3 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar3,0x30);
      uVar9 = *puVar12;
    }
    puVar11 = (undefined8 *)(*plVar3 + (long)(int)uVar9 * 0x30);
    puVar11[2] = uVar13;
    puVar11[3] = uVar4;
    puVar11[4] = uVar5;
    puVar11[5] = uVar18;
    *puVar11 = uVar14;
    puVar11[1] = uVar10;
    *puVar12 = uVar9 + 1;
    lVar16 = *(long *)(param_1 + 0x18);
    uVar14 = *param_2;
    lVar8 = param_3[1];
    if (lVar8 == 0) {
      uVar13 = 0;
      bVar17 = true;
    }
    else {
      uVar13 = FUN_00428370(lVar8);
      if ((uVar13 & 1) == 0) {
        bVar17 = true;
      }
      else {
        FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
        FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
        bVar17 = false;
      }
    }
    plVar3 = (long *)(lVar16 + lVar15 * 0x10);
    uVar10 = *param_3;
    uVar4 = param_3[1];
    uVar18 = param_3[2];
    if ((uVar18 & 1) != 0) {
      FUN_0043dd30(uVar18 & 0xfffffffffffffffe);
    }
    puVar12 = (uint *)(plVar3 + 1);
    uVar9 = *puVar12;
    if (uVar9 == (*(uint *)((long)plVar3 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar3,0x30);
      uVar9 = *puVar12;
    }
    puVar11 = (undefined8 *)(*plVar3 + (long)(int)uVar9 * 0x30);
    *puVar11 = uVar14;
    puVar11[1] = lVar8;
    puVar11[2] = uVar13;
    puVar11[3] = uVar10;
    puVar11[4] = uVar4;
    puVar11[5] = uVar18;
    *puVar12 = uVar9 + 1;
    if (!bVar17) {
      FUN_0043dd50(uVar13 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}

