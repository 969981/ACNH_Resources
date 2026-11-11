
/* WARNING: Removing unreachable block (ram,0x00534454) */
/* WARNING: Removing unreachable block (ram,0x005340e4) */
/* WARNING: Removing unreachable block (ram,0x0053429c) */
/* WARNING: Removing unreachable block (ram,0x00534950) */

long * FUN_00533710(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  long lVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined2 *puVar18;
  ulong uVar19;
  undefined2 *puVar20;
  long lVar21;
  undefined4 *puVar22;
  
  if (param_2 == param_1) {
    *(short *)(param_1 + 2) = (short)param_2[2];
LAB_00533a04:
    *(short *)(param_1 + 5) = (short)param_2[5];
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 1);
  lVar21 = *param_2;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)uVar2) {
    lVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar2,8,*param_1,(int)param_1[1]);
    *param_1 = lVar7;
  }
  else {
    lVar7 = *param_1;
  }
  uVar3 = *(uint *)(param_1 + 1);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((lVar7 != lVar21) && (0 < (int)uVar1)) {
    uVar19 = (ulong)uVar1;
    if (uVar19 - 1 < 3) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar22 = (undefined4 *)(lVar21 + 0x10);
      puVar8 = (undefined4 *)(lVar7 + 0x10);
      do {
        uVar4 = puVar22[-4];
        *(undefined4 *)((long)puVar8 + -0xd) = *(undefined4 *)((long)puVar22 + -0xd);
        puVar8[-4] = uVar4;
        uVar4 = puVar22[-2];
        *(undefined4 *)((long)puVar8 + -5) = *(undefined4 *)((long)puVar22 + -5);
        puVar8[-2] = uVar4;
        uVar4 = *puVar22;
        *(undefined4 *)((long)puVar8 + 3) = *(undefined4 *)((long)puVar22 + 3);
        *puVar8 = uVar4;
        uVar4 = puVar22[2];
        puVar10 = (undefined4 *)((long)puVar22 + 0xb);
        lVar17 = lVar17 + 4;
        puVar22 = puVar22 + 8;
        *(undefined4 *)((long)puVar8 + 0xb) = *puVar10;
        puVar8[2] = uVar4;
        puVar8 = puVar8 + 8;
      } while (uVar19 - (uVar19 & 3) != lVar17);
    }
    if ((uVar1 & 3) != 0) {
      puVar22 = (undefined4 *)(lVar21 + lVar17 * 8);
      lVar14 = -(uVar19 & 3);
      puVar8 = (undefined4 *)(lVar7 + lVar17 * 8);
      do {
        uVar4 = *puVar22;
        *(undefined4 *)((long)puVar8 + 3) = *(undefined4 *)((long)puVar22 + 3);
        *puVar8 = uVar4;
        puVar22 = puVar22 + 2;
        lVar14 = lVar14 + 1;
        puVar8 = puVar8 + 2;
      } while (lVar14 != 0);
    }
    lVar7 = *param_1;
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar12 = (undefined8 *)(lVar21 + (long)(int)uVar1 * 8);
    puVar16 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar11 = puVar12;
      puVar15 = puVar16;
      do {
        *puVar15 = *puVar11;
        puVar15[1] = puVar11[1];
        puVar15[2] = puVar11[2];
        puVar12 = puVar11 + 4;
        puVar16 = puVar15 + 4;
        puVar15[3] = puVar11[3];
        iVar9 = iVar9 + 4;
        puVar11 = puVar12;
        puVar15 = puVar16;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar16 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 1) = uVar2;
  *(short *)(param_1 + 2) = (short)param_2[2];
  if (param_2 == param_1) goto LAB_00533a04;
  lVar7 = param_2[3];
  iVar9 = (int)param_2[4];
  lVar21 = param_1[3];
  if ((int)(*(uint *)((long)param_1 + 0x24) & 0x3fffffff) < iVar9) {
    lVar21 = FUN_004267f0(PTR_DAT_048607b8,iVar9,2,lVar21,(int)param_1[4]);
    param_1[3] = lVar21;
  }
  FUN_0043aa30(lVar21,lVar7,(long)iVar9 << 1);
  *(int *)(param_1 + 4) = iVar9;
  *(short *)(param_1 + 5) = (short)param_2[5];
  iVar9 = (int)param_2[7];
  lVar7 = param_2[6];
  lVar21 = param_1[6];
  if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) < iVar9) {
    lVar21 = FUN_004267f0(PTR_DAT_048607b8,iVar9,4,lVar21,(int)param_1[7]);
    param_1[6] = lVar21;
  }
  FUN_0043aa30(lVar21,lVar7,(long)iVar9 << 2);
  *(int *)(param_1 + 7) = iVar9;
  uVar2 = *(uint *)(param_2 + 9);
  lVar21 = param_2[8];
  if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) < (int)uVar2) {
    lVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar2,4,param_1[8],(int)param_1[9]);
    param_1[8] = lVar7;
  }
  else {
    lVar7 = param_1[8];
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((lVar7 != lVar21) && (0 < (int)uVar1)) {
    uVar19 = (ulong)uVar1;
    if (uVar19 - 1 < 3) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar20 = (undefined2 *)(lVar21 + 8);
      puVar18 = (undefined2 *)(lVar7 + 8);
      do {
        uVar6 = puVar20[-4];
        *(undefined1 *)(puVar18 + -3) = *(undefined1 *)(puVar20 + -3);
        puVar18[-4] = uVar6;
        uVar6 = puVar20[-2];
        *(undefined1 *)(puVar18 + -1) = *(undefined1 *)(puVar20 + -1);
        puVar18[-2] = uVar6;
        uVar6 = *puVar20;
        *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar20 + 1);
        *puVar18 = uVar6;
        uVar5 = *(undefined1 *)(puVar20 + 3);
        lVar17 = lVar17 + 4;
        puVar18[2] = puVar20[2];
        *(undefined1 *)(puVar18 + 3) = uVar5;
        puVar20 = puVar20 + 8;
        puVar18 = puVar18 + 8;
      } while (uVar19 - (uVar19 & 3) != lVar17);
    }
    if ((uVar1 & 3) != 0) {
      puVar20 = (undefined2 *)(lVar21 + lVar17 * 4);
      lVar14 = -(uVar19 & 3);
      puVar18 = (undefined2 *)(lVar7 + lVar17 * 4);
      do {
        uVar6 = *puVar20;
        *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar20 + 1);
        *puVar18 = uVar6;
        puVar20 = puVar20 + 2;
        lVar14 = lVar14 + 1;
        puVar18 = puVar18 + 2;
      } while (lVar14 != 0);
    }
    lVar7 = param_1[8];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar22 = (undefined4 *)(lVar21 + (long)(int)uVar1 * 4);
    puVar8 = (undefined4 *)(lVar7 + (long)(int)uVar1 * 4);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar10 = puVar22;
      puVar13 = puVar8;
      do {
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        puVar22 = puVar10 + 4;
        puVar8 = puVar13 + 4;
        puVar13[3] = puVar10[3];
        iVar9 = iVar9 + 4;
        puVar10 = puVar22;
        puVar13 = puVar8;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar8 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 9) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0xb);
  lVar21 = param_2[10];
  if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) < (int)uVar2) {
    lVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar2,8,param_1[10],(int)param_1[0xb]);
    param_1[10] = lVar7;
  }
  else {
    lVar7 = param_1[10];
  }
  uVar3 = *(uint *)(param_1 + 0xb);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((lVar7 != lVar21) && (0 < (int)uVar1)) {
    uVar19 = (ulong)uVar1;
    if (uVar19 - 1 < 3) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar12 = (undefined8 *)(lVar21 + 0x10);
      puVar16 = (undefined8 *)(lVar7 + 0x10);
      do {
        puVar16[-2] = puVar12[-2];
        puVar16[-1] = puVar12[-1];
        *puVar16 = *puVar12;
        puVar11 = puVar12 + 1;
        lVar17 = lVar17 + 4;
        puVar12 = puVar12 + 4;
        puVar16[1] = *puVar11;
        puVar16 = puVar16 + 4;
      } while (uVar19 - (uVar19 & 3) != lVar17);
    }
    if ((uVar1 & 3) != 0) {
      lVar14 = -(uVar19 & 3);
      puVar12 = (undefined8 *)(lVar7 + lVar17 * 8);
      puVar16 = (undefined8 *)(lVar21 + lVar17 * 8);
      do {
        lVar14 = lVar14 + 1;
        *puVar12 = *puVar16;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar14 != 0);
    }
    lVar7 = param_1[10];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar12 = (undefined8 *)(lVar21 + (long)(int)uVar1 * 8);
    puVar16 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar11 = puVar12;
      puVar15 = puVar16;
      do {
        *puVar15 = *puVar11;
        puVar15[1] = puVar11[1];
        puVar15[2] = puVar11[2];
        puVar12 = puVar11 + 4;
        puVar16 = puVar15 + 4;
        puVar15[3] = puVar11[3];
        iVar9 = iVar9 + 4;
        puVar11 = puVar12;
        puVar15 = puVar16;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar16 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0xb) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0xd);
  lVar21 = param_2[0xc];
  if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) < (int)uVar2) {
    lVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar2,4,param_1[0xc],(int)param_1[0xd]);
    param_1[0xc] = lVar7;
  }
  else {
    lVar7 = param_1[0xc];
  }
  uVar3 = *(uint *)(param_1 + 0xd);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((lVar7 != lVar21) && (0 < (int)uVar1)) {
    uVar19 = (ulong)uVar1;
    if (uVar19 - 1 < 3) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar20 = (undefined2 *)(lVar21 + 8);
      puVar18 = (undefined2 *)(lVar7 + 8);
      do {
        uVar6 = puVar20[-4];
        *(undefined1 *)(puVar18 + -3) = *(undefined1 *)(puVar20 + -3);
        puVar18[-4] = uVar6;
        uVar6 = puVar20[-2];
        *(undefined1 *)(puVar18 + -1) = *(undefined1 *)(puVar20 + -1);
        puVar18[-2] = uVar6;
        uVar6 = *puVar20;
        *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar20 + 1);
        *puVar18 = uVar6;
        uVar5 = *(undefined1 *)(puVar20 + 3);
        lVar17 = lVar17 + 4;
        puVar18[2] = puVar20[2];
        *(undefined1 *)(puVar18 + 3) = uVar5;
        puVar20 = puVar20 + 8;
        puVar18 = puVar18 + 8;
      } while (uVar19 - (uVar19 & 3) != lVar17);
    }
    if ((uVar1 & 3) != 0) {
      puVar20 = (undefined2 *)(lVar21 + lVar17 * 4);
      lVar14 = -(uVar19 & 3);
      puVar18 = (undefined2 *)(lVar7 + lVar17 * 4);
      do {
        uVar6 = *puVar20;
        *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar20 + 1);
        *puVar18 = uVar6;
        puVar20 = puVar20 + 2;
        lVar14 = lVar14 + 1;
        puVar18 = puVar18 + 2;
      } while (lVar14 != 0);
    }
    lVar7 = param_1[0xc];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar22 = (undefined4 *)(lVar21 + (long)(int)uVar1 * 4);
    puVar8 = (undefined4 *)(lVar7 + (long)(int)uVar1 * 4);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar10 = puVar22;
      puVar13 = puVar8;
      do {
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        puVar22 = puVar10 + 4;
        puVar8 = puVar13 + 4;
        puVar13[3] = puVar10[3];
        iVar9 = iVar9 + 4;
        puVar10 = puVar22;
        puVar13 = puVar8;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar8 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0xd) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0xf);
  lVar21 = param_2[0xe];
  if ((int)(*(uint *)((long)param_1 + 0x7c) & 0x3fffffff) < (int)uVar2) {
    lVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar2,4,param_1[0xe],(int)param_1[0xf]);
    param_1[0xe] = lVar7;
  }
  else {
    lVar7 = param_1[0xe];
  }
  uVar3 = *(uint *)(param_1 + 0xf);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((lVar7 != lVar21) && (0 < (int)uVar1)) {
    uVar19 = (ulong)uVar1;
    if (uVar19 - 1 < 3) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar22 = (undefined4 *)(lVar21 + 8);
      puVar8 = (undefined4 *)(lVar7 + 8);
      do {
        puVar8[-2] = puVar22[-2];
        puVar8[-1] = puVar22[-1];
        *puVar8 = *puVar22;
        puVar10 = puVar22 + 1;
        lVar17 = lVar17 + 4;
        puVar22 = puVar22 + 4;
        puVar8[1] = *puVar10;
        puVar8 = puVar8 + 4;
      } while (uVar19 - (uVar19 & 3) != lVar17);
    }
    if ((uVar1 & 3) != 0) {
      lVar14 = -(uVar19 & 3);
      puVar22 = (undefined4 *)(lVar7 + lVar17 * 4);
      puVar8 = (undefined4 *)(lVar21 + lVar17 * 4);
      do {
        lVar14 = lVar14 + 1;
        *puVar22 = *puVar8;
        puVar22 = puVar22 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar14 != 0);
    }
    lVar7 = param_1[0xe];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar22 = (undefined4 *)(lVar21 + (long)(int)uVar1 * 4);
    puVar8 = (undefined4 *)(lVar7 + (long)(int)uVar1 * 4);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar10 = puVar22;
      puVar13 = puVar8;
      do {
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        puVar22 = puVar10 + 4;
        puVar8 = puVar13 + 4;
        puVar13[3] = puVar10[3];
        iVar9 = iVar9 + 4;
        puVar10 = puVar22;
        puVar13 = puVar8;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar8 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0xf) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x11);
  puVar22 = (undefined4 *)param_2[0x10];
  if ((int)(*(uint *)((long)param_1 + 0x8c) & 0x3fffffff) < (int)uVar2) {
    puVar8 = (undefined4 *)FUN_004267f0(PTR_DAT_048607b8,uVar2,6,param_1[0x10],(int)param_1[0x11]);
    param_1[0x10] = (long)puVar8;
  }
  else {
    puVar8 = (undefined4 *)param_1[0x10];
  }
  uVar3 = *(uint *)(param_1 + 0x11);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((puVar8 != puVar22) && (0 < (int)uVar1)) {
    if (uVar1 == 1) {
      lVar21 = 0;
LAB_00534130:
      puVar10 = (undefined4 *)((long)puVar22 + lVar21 * 6);
      puVar8 = (undefined4 *)((long)puVar8 + lVar21 * 6);
      uVar4 = *puVar10;
      *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar10 + 1);
      *puVar8 = uVar4;
    }
    else {
      lVar21 = 0;
      puVar13 = puVar8;
      puVar10 = puVar22;
      do {
        uVar4 = *puVar10;
        *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar10 + 1);
        *puVar13 = uVar4;
        uVar5 = *(undefined1 *)((long)puVar10 + 10);
        lVar21 = lVar21 + 2;
        *(undefined4 *)((long)puVar13 + 6) = *(undefined4 *)((long)puVar10 + 6);
        *(undefined1 *)((long)puVar13 + 10) = uVar5;
        puVar10 = puVar10 + 3;
        puVar13 = puVar13 + 3;
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar21);
      if ((uVar1 & 1) != 0) goto LAB_00534130;
    }
    puVar8 = (undefined4 *)param_1[0x10];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar22 = (undefined4 *)((long)puVar22 + (long)(int)uVar1 * 6);
    puVar8 = (undefined4 *)((long)puVar8 + (long)(int)uVar1 * 6);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar10 = puVar22;
      puVar13 = puVar8;
      do {
        uVar4 = *puVar10;
        *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar10 + 1);
        *puVar13 = uVar4;
        uVar4 = *(undefined4 *)((long)puVar10 + 6);
        *(undefined2 *)((long)puVar13 + 10) = *(undefined2 *)((long)puVar10 + 10);
        *(undefined4 *)((long)puVar13 + 6) = uVar4;
        uVar4 = puVar10[3];
        *(undefined2 *)(puVar13 + 4) = *(undefined2 *)(puVar10 + 4);
        puVar13[3] = uVar4;
        puVar22 = puVar10 + 6;
        uVar4 = *(undefined4 *)((long)puVar10 + 0x12);
        puVar8 = puVar13 + 6;
        *(undefined2 *)((long)puVar13 + 0x16) = *(undefined2 *)((long)puVar10 + 0x16);
        *(undefined4 *)((long)puVar13 + 0x12) = uVar4;
        iVar9 = iVar9 + 4;
        puVar10 = puVar22;
        puVar13 = puVar8;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        uVar4 = *puVar22;
        *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(puVar22 + 1);
        *puVar8 = uVar4;
        puVar22 = (undefined4 *)((long)puVar22 + 6);
        iVar9 = iVar9 + 1;
        puVar8 = (undefined4 *)((long)puVar8 + 6);
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0x11) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x13);
  puVar22 = (undefined4 *)param_2[0x12];
  if ((int)(*(uint *)((long)param_1 + 0x9c) & 0x3fffffff) < (int)uVar2) {
    puVar8 = (undefined4 *)FUN_004267f0(PTR_DAT_048607b8,uVar2,6,param_1[0x12],(int)param_1[0x13]);
    param_1[0x12] = (long)puVar8;
  }
  else {
    puVar8 = (undefined4 *)param_1[0x12];
  }
  uVar3 = *(uint *)(param_1 + 0x13);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((puVar8 != puVar22) && (0 < (int)uVar1)) {
    if (uVar1 == 1) {
      lVar21 = 0;
LAB_005342e8:
      puVar10 = (undefined4 *)((long)puVar22 + lVar21 * 6);
      puVar8 = (undefined4 *)((long)puVar8 + lVar21 * 6);
      uVar4 = *puVar10;
      *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(puVar10 + 1);
      *puVar8 = uVar4;
    }
    else {
      lVar21 = 0;
      puVar13 = puVar8;
      puVar10 = puVar22;
      do {
        uVar4 = *puVar10;
        *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar10 + 1);
        *puVar13 = uVar4;
        uVar6 = *(undefined2 *)((long)puVar10 + 10);
        lVar21 = lVar21 + 2;
        *(undefined4 *)((long)puVar13 + 6) = *(undefined4 *)((long)puVar10 + 6);
        *(undefined2 *)((long)puVar13 + 10) = uVar6;
        puVar10 = puVar10 + 3;
        puVar13 = puVar13 + 3;
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar21);
      if ((uVar1 & 1) != 0) goto LAB_005342e8;
    }
    puVar8 = (undefined4 *)param_1[0x12];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar22 = (undefined4 *)((long)puVar22 + (long)(int)uVar1 * 6);
    puVar8 = (undefined4 *)((long)puVar8 + (long)(int)uVar1 * 6);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar10 = puVar22;
      puVar13 = puVar8;
      do {
        uVar4 = *puVar10;
        *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar10 + 1);
        *puVar13 = uVar4;
        uVar4 = *(undefined4 *)((long)puVar10 + 6);
        *(undefined2 *)((long)puVar13 + 10) = *(undefined2 *)((long)puVar10 + 10);
        *(undefined4 *)((long)puVar13 + 6) = uVar4;
        uVar4 = puVar10[3];
        *(undefined2 *)(puVar13 + 4) = *(undefined2 *)(puVar10 + 4);
        puVar13[3] = uVar4;
        puVar22 = puVar10 + 6;
        uVar4 = *(undefined4 *)((long)puVar10 + 0x12);
        puVar8 = puVar13 + 6;
        *(undefined2 *)((long)puVar13 + 0x16) = *(undefined2 *)((long)puVar10 + 0x16);
        *(undefined4 *)((long)puVar13 + 0x12) = uVar4;
        iVar9 = iVar9 + 4;
        puVar10 = puVar22;
        puVar13 = puVar8;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        uVar4 = *puVar22;
        *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(puVar22 + 1);
        *puVar8 = uVar4;
        puVar22 = (undefined4 *)((long)puVar22 + 6);
        iVar9 = iVar9 + 1;
        puVar8 = (undefined4 *)((long)puVar8 + 6);
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0x13) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x15);
  puVar22 = (undefined4 *)param_2[0x14];
  if ((int)(*(uint *)((long)param_1 + 0xac) & 0x3fffffff) < (int)uVar2) {
    puVar8 = (undefined4 *)FUN_004267f0(PTR_DAT_048607b8,uVar2,6,param_1[0x14],(int)param_1[0x15]);
    param_1[0x14] = (long)puVar8;
  }
  else {
    puVar8 = (undefined4 *)param_1[0x14];
  }
  uVar3 = *(uint *)(param_1 + 0x15);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((puVar8 != puVar22) && (0 < (int)uVar1)) {
    if (uVar1 == 1) {
      lVar21 = 0;
LAB_005344a0:
      puVar10 = (undefined4 *)((long)puVar22 + lVar21 * 6);
      puVar8 = (undefined4 *)((long)puVar8 + lVar21 * 6);
      uVar4 = *puVar10;
      *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar10 + 1);
      *puVar8 = uVar4;
    }
    else {
      lVar21 = 0;
      puVar13 = puVar8;
      puVar10 = puVar22;
      do {
        uVar4 = *puVar10;
        *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar10 + 1);
        *puVar13 = uVar4;
        uVar5 = *(undefined1 *)((long)puVar10 + 10);
        lVar21 = lVar21 + 2;
        *(undefined4 *)((long)puVar13 + 6) = *(undefined4 *)((long)puVar10 + 6);
        *(undefined1 *)((long)puVar13 + 10) = uVar5;
        puVar10 = puVar10 + 3;
        puVar13 = puVar13 + 3;
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar21);
      if ((uVar1 & 1) != 0) goto LAB_005344a0;
    }
    puVar8 = (undefined4 *)param_1[0x14];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar22 = (undefined4 *)((long)puVar22 + (long)(int)uVar1 * 6);
    puVar8 = (undefined4 *)((long)puVar8 + (long)(int)uVar1 * 6);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar10 = puVar22;
      puVar13 = puVar8;
      do {
        uVar4 = *puVar10;
        *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar10 + 1);
        *puVar13 = uVar4;
        uVar4 = *(undefined4 *)((long)puVar10 + 6);
        *(undefined2 *)((long)puVar13 + 10) = *(undefined2 *)((long)puVar10 + 10);
        *(undefined4 *)((long)puVar13 + 6) = uVar4;
        uVar4 = puVar10[3];
        *(undefined2 *)(puVar13 + 4) = *(undefined2 *)(puVar10 + 4);
        puVar13[3] = uVar4;
        puVar22 = puVar10 + 6;
        uVar4 = *(undefined4 *)((long)puVar10 + 0x12);
        puVar8 = puVar13 + 6;
        *(undefined2 *)((long)puVar13 + 0x16) = *(undefined2 *)((long)puVar10 + 0x16);
        *(undefined4 *)((long)puVar13 + 0x12) = uVar4;
        iVar9 = iVar9 + 4;
        puVar10 = puVar22;
        puVar13 = puVar8;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        uVar4 = *puVar22;
        *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(puVar22 + 1);
        *puVar8 = uVar4;
        puVar22 = (undefined4 *)((long)puVar22 + 6);
        iVar9 = iVar9 + 1;
        puVar8 = (undefined4 *)((long)puVar8 + 6);
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0x15) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x17);
  lVar21 = param_2[0x16];
  if ((int)(*(uint *)((long)param_1 + 0xbc) & 0x3fffffff) < (int)uVar2) {
    lVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar2,4,param_1[0x16],(int)param_1[0x17]);
    param_1[0x16] = lVar7;
  }
  else {
    lVar7 = param_1[0x16];
  }
  uVar3 = *(uint *)(param_1 + 0x17);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((lVar7 != lVar21) && (0 < (int)uVar1)) {
    uVar19 = (ulong)uVar1;
    if (uVar19 - 1 < 3) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar22 = (undefined4 *)(lVar21 + 8);
      puVar8 = (undefined4 *)(lVar7 + 8);
      do {
        puVar8[-2] = puVar22[-2];
        puVar8[-1] = puVar22[-1];
        *puVar8 = *puVar22;
        puVar10 = puVar22 + 1;
        lVar17 = lVar17 + 4;
        puVar22 = puVar22 + 4;
        puVar8[1] = *puVar10;
        puVar8 = puVar8 + 4;
      } while (uVar19 - (uVar19 & 3) != lVar17);
    }
    if ((uVar1 & 3) != 0) {
      lVar14 = -(uVar19 & 3);
      puVar22 = (undefined4 *)(lVar7 + lVar17 * 4);
      puVar8 = (undefined4 *)(lVar21 + lVar17 * 4);
      do {
        lVar14 = lVar14 + 1;
        *puVar22 = *puVar8;
        puVar22 = puVar22 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar14 != 0);
    }
    lVar7 = param_1[0x16];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar22 = (undefined4 *)(lVar21 + (long)(int)uVar1 * 4);
    puVar8 = (undefined4 *)(lVar7 + (long)(int)uVar1 * 4);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar10 = puVar22;
      puVar13 = puVar8;
      do {
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        puVar22 = puVar10 + 4;
        puVar8 = puVar13 + 4;
        puVar13[3] = puVar10[3];
        iVar9 = iVar9 + 4;
        puVar10 = puVar22;
        puVar13 = puVar8;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar8 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0x17) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x19);
  lVar21 = param_2[0x18];
  if ((int)(*(uint *)((long)param_1 + 0xcc) & 0x3fffffff) < (int)uVar2) {
    lVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar2,8,param_1[0x18],(int)param_1[0x19]);
    param_1[0x18] = lVar7;
  }
  else {
    lVar7 = param_1[0x18];
  }
  uVar3 = *(uint *)(param_1 + 0x19);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((lVar7 != lVar21) && (0 < (int)uVar1)) {
    uVar19 = (ulong)uVar1;
    if (uVar19 - 1 < 3) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar22 = (undefined4 *)(lVar21 + 0x10);
      puVar8 = (undefined4 *)(lVar7 + 0x10);
      do {
        uVar4 = puVar22[-4];
        *(undefined4 *)((long)puVar8 + -0xd) = *(undefined4 *)((long)puVar22 + -0xd);
        puVar8[-4] = uVar4;
        uVar4 = puVar22[-2];
        *(undefined4 *)((long)puVar8 + -5) = *(undefined4 *)((long)puVar22 + -5);
        puVar8[-2] = uVar4;
        uVar4 = *puVar22;
        *(undefined4 *)((long)puVar8 + 3) = *(undefined4 *)((long)puVar22 + 3);
        *puVar8 = uVar4;
        uVar4 = puVar22[2];
        puVar10 = (undefined4 *)((long)puVar22 + 0xb);
        lVar17 = lVar17 + 4;
        puVar22 = puVar22 + 8;
        *(undefined4 *)((long)puVar8 + 0xb) = *puVar10;
        puVar8[2] = uVar4;
        puVar8 = puVar8 + 8;
      } while (uVar19 - (uVar19 & 3) != lVar17);
    }
    if ((uVar1 & 3) != 0) {
      puVar22 = (undefined4 *)(lVar21 + lVar17 * 8);
      lVar14 = -(uVar19 & 3);
      puVar8 = (undefined4 *)(lVar7 + lVar17 * 8);
      do {
        uVar4 = *puVar22;
        *(undefined4 *)((long)puVar8 + 3) = *(undefined4 *)((long)puVar22 + 3);
        *puVar8 = uVar4;
        puVar22 = puVar22 + 2;
        lVar14 = lVar14 + 1;
        puVar8 = puVar8 + 2;
      } while (lVar14 != 0);
    }
    lVar7 = param_1[0x18];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar12 = (undefined8 *)(lVar21 + (long)(int)uVar1 * 8);
    puVar16 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar11 = puVar12;
      puVar15 = puVar16;
      do {
        *puVar15 = *puVar11;
        puVar15[1] = puVar11[1];
        puVar15[2] = puVar11[2];
        puVar12 = puVar11 + 4;
        puVar16 = puVar15 + 4;
        puVar15[3] = puVar11[3];
        iVar9 = iVar9 + 4;
        puVar11 = puVar12;
        puVar15 = puVar16;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar16 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0x19) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x1b);
  puVar22 = (undefined4 *)param_2[0x1a];
  if ((int)(*(uint *)((long)param_1 + 0xdc) & 0x3fffffff) < (int)uVar2) {
    puVar8 = (undefined4 *)FUN_004267f0(PTR_DAT_048607b8,uVar2,6,param_1[0x1a],(int)param_1[0x1b]);
    param_1[0x1a] = (long)puVar8;
  }
  else {
    puVar8 = (undefined4 *)param_1[0x1a];
  }
  uVar3 = *(uint *)(param_1 + 0x1b);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((puVar8 == puVar22) || ((int)uVar1 < 1)) goto LAB_005349c0;
  if (uVar1 == 1) {
    lVar21 = 0;
LAB_0053499c:
    puVar10 = (undefined4 *)((long)puVar22 + lVar21 * 6);
    puVar8 = (undefined4 *)((long)puVar8 + lVar21 * 6);
    uVar4 = *puVar10;
    *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(puVar10 + 1);
    *puVar8 = uVar4;
  }
  else {
    lVar21 = 0;
    puVar13 = puVar8;
    puVar10 = puVar22;
    do {
      uVar4 = *puVar10;
      *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar10 + 1);
      *puVar13 = uVar4;
      uVar6 = *(undefined2 *)((long)puVar10 + 10);
      lVar21 = lVar21 + 2;
      *(undefined4 *)((long)puVar13 + 6) = *(undefined4 *)((long)puVar10 + 6);
      *(undefined2 *)((long)puVar13 + 10) = uVar6;
      puVar10 = puVar10 + 3;
      puVar13 = puVar13 + 3;
    } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar21);
    if ((uVar1 & 1) != 0) goto LAB_0053499c;
  }
  puVar8 = (undefined4 *)param_1[0x1a];
LAB_005349c0:
  if ((int)uVar3 < (int)uVar2) {
    puVar22 = (undefined4 *)((long)puVar22 + (long)(int)uVar1 * 6);
    puVar8 = (undefined4 *)((long)puVar8 + (long)(int)uVar1 * 6);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar10 = puVar22;
      puVar13 = puVar8;
      do {
        uVar4 = *puVar10;
        *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar10 + 1);
        *puVar13 = uVar4;
        uVar4 = *(undefined4 *)((long)puVar10 + 6);
        *(undefined2 *)((long)puVar13 + 10) = *(undefined2 *)((long)puVar10 + 10);
        *(undefined4 *)((long)puVar13 + 6) = uVar4;
        uVar4 = puVar10[3];
        *(undefined2 *)(puVar13 + 4) = *(undefined2 *)(puVar10 + 4);
        puVar13[3] = uVar4;
        puVar22 = puVar10 + 6;
        uVar4 = *(undefined4 *)((long)puVar10 + 0x12);
        puVar8 = puVar13 + 6;
        *(undefined2 *)((long)puVar13 + 0x16) = *(undefined2 *)((long)puVar10 + 0x16);
        *(undefined4 *)((long)puVar13 + 0x12) = uVar4;
        iVar9 = iVar9 + 4;
        puVar10 = puVar22;
        puVar13 = puVar8;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        uVar4 = *puVar22;
        *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(puVar22 + 1);
        *puVar8 = uVar4;
        puVar22 = (undefined4 *)((long)puVar22 + 6);
        iVar9 = iVar9 + 1;
        puVar8 = (undefined4 *)((long)puVar8 + 6);
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0x1b) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x1d);
  lVar21 = param_2[0x1c];
  if ((int)(*(uint *)((long)param_1 + 0xec) & 0x3fffffff) < (int)uVar2) {
    lVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar2,8,param_1[0x1c],(int)param_1[0x1d]);
    param_1[0x1c] = lVar7;
  }
  else {
    lVar7 = param_1[0x1c];
  }
  uVar3 = *(uint *)(param_1 + 0x1d);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((lVar7 != lVar21) && (0 < (int)uVar1)) {
    uVar19 = (ulong)uVar1;
    if (uVar19 - 1 < 3) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar22 = (undefined4 *)(lVar21 + 0x10);
      puVar8 = (undefined4 *)(lVar7 + 0x10);
      do {
        uVar4 = puVar22[-4];
        *(undefined4 *)((long)puVar8 + -0xd) = *(undefined4 *)((long)puVar22 + -0xd);
        puVar8[-4] = uVar4;
        uVar4 = puVar22[-2];
        *(undefined4 *)((long)puVar8 + -5) = *(undefined4 *)((long)puVar22 + -5);
        puVar8[-2] = uVar4;
        uVar4 = *puVar22;
        *(undefined4 *)((long)puVar8 + 3) = *(undefined4 *)((long)puVar22 + 3);
        *puVar8 = uVar4;
        uVar4 = puVar22[2];
        puVar10 = (undefined4 *)((long)puVar22 + 0xb);
        lVar17 = lVar17 + 4;
        puVar22 = puVar22 + 8;
        *(undefined4 *)((long)puVar8 + 0xb) = *puVar10;
        puVar8[2] = uVar4;
        puVar8 = puVar8 + 8;
      } while (uVar19 - (uVar19 & 3) != lVar17);
    }
    if ((uVar1 & 3) != 0) {
      puVar22 = (undefined4 *)(lVar21 + lVar17 * 8);
      lVar14 = -(uVar19 & 3);
      puVar8 = (undefined4 *)(lVar7 + lVar17 * 8);
      do {
        uVar4 = *puVar22;
        *(undefined4 *)((long)puVar8 + 3) = *(undefined4 *)((long)puVar22 + 3);
        *puVar8 = uVar4;
        puVar22 = puVar22 + 2;
        lVar14 = lVar14 + 1;
        puVar8 = puVar8 + 2;
      } while (lVar14 != 0);
    }
    lVar7 = param_1[0x1c];
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar12 = (undefined8 *)(lVar21 + (long)(int)uVar1 * 8);
    puVar16 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8);
    uVar1 = uVar2 + ~uVar3 + 1 & 3;
    if (2 < uVar2 + ~uVar3) {
      iVar9 = (uVar3 + uVar1) - uVar2;
      puVar11 = puVar12;
      puVar15 = puVar16;
      do {
        *puVar15 = *puVar11;
        puVar15[1] = puVar11[1];
        puVar15[2] = puVar11[2];
        puVar12 = puVar11 + 4;
        puVar16 = puVar15 + 4;
        puVar15[3] = puVar11[3];
        iVar9 = iVar9 + 4;
        puVar11 = puVar12;
        puVar15 = puVar16;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar16 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar9 != 0);
    }
  }
  *(uint *)(param_1 + 0x1d) = uVar2;
  if (param_2 == param_1) {
    return param_1;
  }
  lVar7 = param_2[0x1e];
  iVar9 = (int)param_2[0x1f];
  lVar21 = param_1[0x1e];
  if ((int)(*(uint *)((long)param_1 + 0xfc) & 0x3fffffff) < iVar9) {
    lVar21 = FUN_004267f0(PTR_DAT_048607b8,iVar9,2,lVar21,(int)param_1[0x1f]);
    param_1[0x1e] = lVar21;
  }
  FUN_0043aa30(lVar21,lVar7,(long)iVar9 << 1);
  *(int *)(param_1 + 0x1f) = iVar9;
  iVar9 = (int)param_2[0x21];
  lVar7 = param_2[0x20];
  lVar21 = param_1[0x20];
  if ((int)(*(uint *)((long)param_1 + 0x10c) & 0x3fffffff) < iVar9) {
    lVar21 = FUN_004267f0(PTR_DAT_048607b8,iVar9,2,lVar21,(int)param_1[0x21],(long)param_1 + 0x10c);
    param_1[0x20] = lVar21;
  }
  FUN_0043aa30(lVar21,lVar7,(long)iVar9 << 1);
  *(int *)(param_1 + 0x21) = iVar9;
  iVar9 = (int)param_2[0x23];
  lVar7 = param_2[0x22];
  lVar21 = param_1[0x22];
  if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x3fffffff) < iVar9) {
    lVar21 = FUN_004267f0(PTR_DAT_048607b8,iVar9,2,lVar21,(int)param_1[0x23],(long)param_1 + 0x11c);
    param_1[0x22] = lVar21;
  }
  FUN_0043aa30(lVar21,lVar7,(long)iVar9 << 1);
  *(int *)(param_1 + 0x23) = iVar9;
  lVar7 = param_2[0x24];
  iVar9 = (int)param_2[0x25];
  lVar21 = param_1[0x24];
  if ((int)(*(uint *)((long)param_1 + 300) & 0x3fffffff) < iVar9) {
    lVar21 = FUN_004267f0(PTR_DAT_048607b8,iVar9,2,lVar21,(int)param_1[0x25],(long)param_1 + 300);
    param_1[0x24] = lVar21;
  }
  FUN_0043aa30(lVar21,lVar7,(long)iVar9 << 1);
  *(int *)(param_1 + 0x25) = iVar9;
  return param_1;
}

