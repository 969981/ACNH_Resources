
/* WARNING: Removing unreachable block (ram,0x00654d50) */

void FUN_00654c60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  
  FUN_00651bd0();
  *param_1 = &PTR_LAB_048e3390;
  FUN_00651c20(param_1 + 3);
  param_1[0x24] = 0;
  param_1[0x25] = 0x8000000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0x8000000000000000;
  *(undefined1 *)((long)param_1 + 0x15c) = 0;
  param_1[0x28] = 0x8000000000000000;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  FUN_00651ca0(param_1 + 3,param_2 + 3);
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 0x28);
    lVar16 = param_2[0x27];
    if ((int)(*(uint *)((long)param_1 + 0x144) & 0x3fffffff) < (int)uVar1) {
      lVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar1,2,param_1[0x27],*(undefined4 *)(param_1 + 0x28));
      param_1[0x27] = lVar4;
    }
    else {
      lVar4 = param_1[0x27];
    }
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar15 = uVar2;
    if ((int)uVar1 <= (int)uVar2) {
      uVar15 = uVar1;
    }
    if ((lVar4 != lVar16) && (0 < (int)uVar15)) {
      if (uVar15 == 1) {
        lVar13 = 0;
LAB_00654d88:
        *(undefined2 *)(lVar4 + lVar13 * 2) = *(undefined2 *)(lVar16 + lVar13 * 2);
      }
      else {
        lVar13 = 0;
        do {
          lVar6 = lVar13 * 2;
          lVar13 = lVar13 + 2;
          puVar10 = (undefined2 *)(lVar16 + lVar6);
          puVar12 = (undefined2 *)(lVar4 + lVar6);
          *puVar12 = *puVar10;
          puVar12[1] = puVar10[1];
        } while ((ulong)uVar15 - ((ulong)uVar15 & 1) != lVar13);
        if ((uVar15 & 1) != 0) goto LAB_00654d88;
      }
      lVar4 = param_1[0x27];
    }
    if ((int)uVar2 < (int)uVar1) {
      puVar10 = (undefined2 *)(lVar16 + (long)(int)uVar15 * 2);
      puVar12 = (undefined2 *)(lVar4 + (long)(int)uVar15 * 2);
      uVar15 = uVar1 + ~uVar2 + 1 & 3;
      if (2 < uVar1 + ~uVar2) {
        iVar7 = (uVar2 + uVar15) - uVar1;
        puVar9 = puVar10;
        puVar11 = puVar12;
        do {
          *puVar11 = *puVar9;
          puVar11[1] = puVar9[1];
          puVar11[2] = puVar9[2];
          puVar10 = puVar9 + 4;
          puVar12 = puVar11 + 4;
          puVar11[3] = puVar9[3];
          iVar7 = iVar7 + 4;
          puVar9 = puVar10;
          puVar11 = puVar12;
        } while (iVar7 != 0);
      }
      if (uVar15 != 0) {
        iVar7 = -uVar15;
        do {
          iVar7 = iVar7 + 1;
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        } while (iVar7 != 0);
      }
    }
    *(uint *)(param_1 + 0x28) = uVar1;
    if (param_2 != param_1) {
      plVar14 = (long *)param_2[0x29];
      uVar1 = *(uint *)(param_2 + 0x2a);
      if ((int)(*(uint *)((long)param_1 + 0x154) & 0x3fffffff) < (int)uVar1) {
        uVar5 = FUN_004267f0(PTR_DAT_048607b8,uVar1,0x18,param_1[0x29],
                             *(undefined4 *)(param_1 + 0x2a));
        param_1[0x29] = uVar5;
      }
      uVar15 = *(uint *)(param_1 + 0x2a);
      iVar7 = uVar15 - uVar1;
      if (0 < iVar7) {
        plVar8 = (long *)(param_1[0x29] + (long)(int)uVar15 * 0x18);
        do {
          plVar8 = plVar8 + -3;
          if (*plVar8 != 0) {
            FUN_004435c0();
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        uVar15 = *(uint *)(param_1 + 0x2a);
      }
      plVar8 = (long *)param_1[0x29];
      uVar2 = uVar15;
      if ((int)uVar1 <= (int)uVar15) {
        uVar2 = uVar1;
      }
      if ((plVar8 != plVar14) && (0 < (int)uVar2)) {
        uVar17 = (ulong)uVar2;
        plVar18 = plVar14;
        do {
          if (*plVar18 == 0) {
            lVar16 = *plVar8;
            *plVar8 = 0;
          }
          else {
            FUN_004435a0();
            lVar16 = *plVar8;
            *plVar8 = *plVar18;
          }
          if (lVar16 != 0) {
            FUN_004435c0();
          }
          lVar16 = plVar18[1];
          *(char *)(plVar8 + 2) = (char)plVar18[2];
          plVar8[1] = lVar16;
          uVar17 = uVar17 - 1;
          plVar18 = plVar18 + 3;
          plVar8 = plVar8 + 3;
        } while (uVar17 != 0);
        plVar8 = (long *)param_1[0x29];
      }
      if (0 < (int)(uVar1 - uVar2)) {
        uVar3 = ~uVar1;
        plVar14 = plVar14 + (long)(int)uVar2 * 3;
        plVar8 = plVar8 + (long)(int)uVar2 * 3;
        if ((int)uVar3 < (int)~uVar15) {
          uVar3 = ~uVar15;
        }
        iVar7 = uVar1 + uVar3 + 1;
        do {
          lVar16 = *plVar14;
          *plVar8 = lVar16;
          if (lVar16 != 0) {
            FUN_004435a0();
          }
          lVar16 = plVar14[1];
          *(char *)(plVar8 + 2) = (char)plVar14[2];
          plVar8[1] = lVar16;
          iVar7 = iVar7 + -1;
          plVar14 = plVar14 + 3;
          plVar8 = plVar8 + 3;
        } while (iVar7 != 0);
      }
      *(uint *)(param_1 + 0x2a) = uVar1;
      goto joined_r0x00654fb4;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x2a);
joined_r0x00654fb4:
  if (0 < (int)uVar1) {
    lVar16 = 0;
    uVar17 = (ulong)uVar1;
    do {
      lVar13 = param_1[0x29];
      lVar4 = (**(code **)(**(long **)(lVar13 + lVar16) + 0x20))();
      if (lVar4 != 0) {
        FUN_004435a0(lVar4);
      }
      lVar6 = *(long *)(lVar13 + lVar16);
      *(long *)(lVar13 + lVar16) = lVar4;
      if (lVar6 != 0) {
        FUN_004435c0();
        lVar4 = *(long *)(lVar13 + lVar16);
      }
      FUN_004435c0(lVar4);
      lVar16 = lVar16 + 0x18;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  iVar7 = *(int *)(param_1 + 0x23);
  if ((int)(*(uint *)((long)param_1 + 300) & 0x3fffffff) < iVar7) {
    uVar5 = FUN_00426720(PTR_DAT_048607b8,iVar7,7,param_1[0x24],*(undefined4 *)(param_1 + 0x25),
                         (long)param_1 + 300);
    param_1[0x24] = uVar5;
  }
  if (*(int *)(param_1 + 0x25) != iVar7) {
    *(int *)(param_1 + 0x25) = iVar7;
  }
  *(undefined1 *)((long)param_1 + 0x166) = 0;
  return;
}

