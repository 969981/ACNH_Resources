
void FUN_00689220(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  undefined2 *puVar19;
  long lVar20;
  uint uVar21;
  
  param_1[2] = 1;
  *param_1 = &PTR_LAB_048f28a8;
  param_1[1] = 0xffffffff;
  param_1[5] = 0x8000000000000000;
  plVar17 = param_1 + 3;
  *plVar17 = 0;
  plVar15 = param_1 + 4;
  *plVar15 = 0;
  plVar18 = param_1 + 6;
  *plVar18 = 0;
  plVar14 = param_1 + 7;
  *plVar14 = 0;
  param_1[8] = 0x8000000000000000;
  plVar13 = param_1 + 9;
  *plVar13 = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0x10] = 0x8000000000000000;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (param_2[3] == 0) {
    *plVar17 = 0;
    iVar11 = *(int *)(param_2 + 5);
    puVar2 = PTR_DAT_048607b8;
  }
  else {
    FUN_004435a0();
    lVar3 = *plVar17;
    *plVar17 = param_2[3];
    if (lVar3 != 0) {
      FUN_004435c0();
    }
    iVar11 = *(int *)(param_2 + 5);
    puVar2 = PTR_DAT_048607b8;
  }
  PTR_DAT_048607b8 = puVar2;
  if (0 < iVar11) {
    uVar21 = *(uint *)(param_1 + 5);
    lVar3 = 0;
    do {
      lVar20 = param_2[4];
      if (uVar21 == (*(uint *)((long)param_1 + 0x2c) & 0x3fffffff)) {
        FUN_00426990(puVar2,plVar15,8);
        uVar21 = *(uint *)(param_1 + 5);
      }
      lVar20 = *(long *)(lVar20 + lVar3 * 8);
      *(long *)(*plVar15 + (long)(int)uVar21 * 8) = lVar20;
      uVar21 = uVar21 + 1;
      if (lVar20 != 0) {
        FUN_004435a0();
      }
      *(uint *)(param_1 + 5) = uVar21;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_2 + 5));
  }
  if (param_2[6] == 0) {
    lVar3 = *plVar18;
    *plVar18 = 0;
  }
  else {
    FUN_004435a0();
    lVar3 = *plVar18;
    *plVar18 = param_2[6];
  }
  if (lVar3 != 0) {
    FUN_004435c0();
  }
  puVar2 = PTR_DAT_048607b8;
  if (0 < *(int *)(param_2 + 8)) {
    uVar21 = *(uint *)(param_1 + 8);
    lVar3 = 0;
    do {
      lVar20 = param_2[7];
      if (uVar21 == (*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
        FUN_00426990(puVar2,plVar14,8);
        uVar21 = *(uint *)(param_1 + 8);
      }
      lVar20 = *(long *)(lVar20 + lVar3 * 8);
      *(long *)(*plVar14 + (long)(int)uVar21 * 8) = lVar20;
      uVar21 = uVar21 + 1;
      if (lVar20 != 0) {
        FUN_004435a0();
      }
      *(uint *)(param_1 + 8) = uVar21;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_2 + 8));
  }
  puVar2 = PTR_DAT_048607b8;
  if (0 < *(int *)(param_2 + 10)) {
    uVar21 = *(uint *)(param_1 + 10);
    lVar3 = 0;
    do {
      lVar20 = param_2[9];
      if (uVar21 == (*(uint *)((long)param_1 + 0x54) & 0x3fffffff)) {
        FUN_00426990(puVar2,plVar13,8);
        uVar21 = *(uint *)(param_1 + 10);
      }
      lVar20 = *(long *)(lVar20 + lVar3 * 8);
      *(long *)(*plVar13 + (long)(int)uVar21 * 8) = lVar20;
      uVar21 = uVar21 + 1;
      if (lVar20 != 0) {
        FUN_004435a0();
      }
      *(uint *)(param_1 + 10) = uVar21;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_2 + 10));
  }
  if (param_2 != param_1) {
    iVar11 = *(int *)(param_2 + 0xc);
    uVar16 = param_2[0xb];
    uVar6 = param_1[0xb];
    if ((int)(*(uint *)((long)param_1 + 100) & 0x3fffffff) < iVar11) {
      uVar6 = FUN_004267f0(PTR_DAT_048607b8,iVar11,4,uVar6,*(undefined4 *)(param_1 + 0xc),
                           (long)param_1 + 100);
      param_1[0xb] = uVar6;
    }
    FUN_0043aa30(uVar6,uVar16,(long)iVar11 << 2);
    *(int *)(param_1 + 0xc) = iVar11;
  }
  iVar11 = *(int *)(param_2 + 0xe);
  uVar6 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)(*(uint *)((long)param_1 + 0x74) & 0x3fffffff) < iVar11) {
    uVar16 = FUN_00426720(uVar6,iVar11,0x10,param_1[0xd],*(undefined4 *)(param_1 + 0xe),
                          (uint *)((long)param_1 + 0x74));
    param_1[0xd] = uVar16;
  }
  iVar1 = *(int *)(param_1 + 0xe);
  if (iVar1 < iVar11) {
    puVar8 = (undefined8 *)(param_1[0xd] + (long)iVar1 * 0x10);
    uVar21 = iVar11 - iVar1 & 1;
    *(int *)(param_1 + 0xe) = iVar11;
    if (iVar11 != iVar1 + 1) {
      iVar11 = (iVar1 + uVar21) - iVar11;
      puVar7 = puVar8;
      do {
        puVar8 = puVar7 + 4;
        *puVar7 = 0;
        puVar7[1] = 0x8000000000000000;
        iVar11 = iVar11 + 2;
        puVar7[2] = 0;
        puVar7[3] = 0x8000000000000000;
        puVar7 = puVar8;
      } while (iVar11 != 0);
    }
    if (uVar21 != 0) {
      *puVar8 = 0;
      puVar8[1] = 0x8000000000000000;
      iVar11 = *(int *)(param_2 + 0xe);
      goto joined_r0x006895e0;
    }
  }
  else if (iVar11 < iVar1) {
    *(int *)(param_1 + 0xe) = iVar11;
    if (0 < iVar1 - iVar11) {
      iVar11 = iVar1 - iVar11;
      plVar13 = (long *)(param_1[0xd] + (long)iVar1 * 0x10);
      do {
        plVar14 = plVar13 + -2;
        *(undefined4 *)(plVar13 + -1) = 0;
        if ((-1 < (int)*(uint *)((long)plVar13 + -4)) && (*plVar14 != 0)) {
          FUN_00421f90(uVar6,*plVar14,2,*(uint *)((long)plVar13 + -4) & 0x3fffffff);
        }
        *plVar14 = 0;
        iVar11 = iVar11 + -1;
        *(undefined4 *)((long)plVar13 + -4) = 0x80000000;
        plVar13 = plVar14;
      } while (iVar11 != 0);
    }
  }
  iVar11 = *(int *)(param_2 + 0xe);
joined_r0x006895e0:
  if (0 < iVar11) {
    lVar3 = 0;
    do {
      puVar8 = (undefined8 *)(param_1[0xd] + lVar3 * 0x10);
      puVar7 = (undefined8 *)(param_2[0xd] + lVar3 * 0x10);
      *(int *)(puVar8 + 1) = 0;
      iVar11 = *(int *)(puVar7 + 1);
      puVar19 = (undefined2 *)*puVar7;
      if ((int)(*(uint *)((long)puVar8 + 0xc) & 0x3fffffff) < iVar11) {
        puVar4 = (undefined2 *)FUN_00426720(uVar6,iVar11,2,*puVar8,0);
        *puVar8 = puVar4;
      }
      else {
        puVar4 = (undefined2 *)*puVar8;
      }
      if (iVar11 != 0) {
        uVar12 = (long)iVar11 * 2 - 2;
        uVar21 = ((uint)(uVar12 >> 1) & 0x7fffffff) + 1;
        puVar10 = puVar19;
        if ((uVar21 & 7) != 0) {
          lVar20 = -((ulong)uVar21 & 7);
          puVar5 = puVar4;
          puVar9 = puVar19;
          do {
            puVar10 = puVar9 + 1;
            lVar20 = lVar20 + 1;
            puVar4 = puVar5 + 1;
            *puVar5 = *puVar9;
            puVar5 = puVar4;
            puVar9 = puVar10;
          } while (lVar20 != 0);
        }
        if (0xd < uVar12) {
          do {
            *puVar4 = *puVar10;
            puVar4[1] = puVar10[1];
            puVar4[2] = puVar10[2];
            puVar4[3] = puVar10[3];
            puVar4[4] = puVar10[4];
            puVar4[5] = puVar10[5];
            puVar4[6] = puVar10[6];
            puVar5 = puVar10 + 7;
            puVar10 = puVar10 + 8;
            puVar4[7] = *puVar5;
            puVar4 = puVar4 + 8;
          } while (puVar10 != puVar19 + iVar11);
        }
      }
      *(int *)(puVar8 + 1) = iVar11;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_2 + 0xe));
  }
  return;
}

