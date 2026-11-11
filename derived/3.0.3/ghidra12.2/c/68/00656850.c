
undefined8 FUN_00656850(long param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  undefined2 *puVar19;
  long lVar20;
  
  puVar11 = (undefined8 *)(param_1 + (long)param_2 * 0x18);
  uVar7 = 0x80040200;
  if (*(byte *)((long)puVar11 + 0xc) - 1 < 10) {
    iVar10 = *(int *)(param_1 + 0x304);
    bVar6 = *(byte *)((long)puVar11 + 0xd);
    uVar16 = (ulong)bVar6;
    puVar13 = (uint *)*puVar11;
    lVar12 = (long)*(int *)(puVar11 + 1);
    switch((uint)*(byte *)((long)puVar11 + 0xc)) {
    case 1:
      if ((0 < iVar10) && (bVar6 != 0)) {
        iVar15 = 0;
        do {
          if (uVar16 - 1 < 7) {
            lVar17 = 0;
          }
          else {
            lVar20 = 3;
            do {
              lVar17 = lVar20;
              puVar14 = (undefined1 *)((long)puVar13 + lVar17);
              puVar14[-3] = (char)*param_3;
              puVar14[-2] = (char)param_3[1];
              puVar14[-1] = (char)param_3[2];
              *puVar14 = (char)param_3[3];
              puVar14[1] = (char)param_3[4];
              puVar14[2] = (char)param_3[5];
              puVar14[3] = (char)param_3[6];
              puVar9 = param_3 + 7;
              param_3 = param_3 + 8;
              puVar14[4] = (char)*puVar9;
              lVar20 = lVar17 + 8;
            } while (((uVar16 & 7) - uVar16) + lVar17 + 8 != 3);
            lVar17 = lVar17 + 5;
          }
          if ((bVar6 & 7) != 0) {
            puVar9 = param_3;
            lVar20 = -(uVar16 & 7);
            do {
              param_3 = puVar9 + 1;
              lVar20 = lVar20 + 1;
              *(char *)((long)puVar13 + lVar17) = (char)*puVar9;
              lVar17 = lVar17 + 1;
              puVar9 = param_3;
            } while (lVar20 != 0);
          }
          iVar15 = iVar15 + 1;
          puVar13 = (uint *)((long)puVar13 + lVar12);
        } while (iVar15 != iVar10);
      }
      break;
    case 2:
      if ((0 < iVar10) && (bVar6 != 0)) {
        iVar15 = 0;
        do {
          if (uVar16 - 1 < 7) {
            lVar17 = 0;
          }
          else {
            lVar20 = 3;
            do {
              lVar17 = lVar20;
              puVar14 = (undefined1 *)((long)puVar13 + lVar17);
              puVar14[-3] = (char)*param_3;
              puVar14[-2] = (char)param_3[1];
              puVar14[-1] = (char)param_3[2];
              *puVar14 = (char)param_3[3];
              puVar14[1] = (char)param_3[4];
              puVar14[2] = (char)param_3[5];
              puVar14[3] = (char)param_3[6];
              puVar9 = param_3 + 7;
              param_3 = param_3 + 8;
              puVar14[4] = (char)*puVar9;
              lVar20 = lVar17 + 8;
            } while (((uVar16 & 7) - uVar16) + lVar17 + 8 != 3);
            lVar17 = lVar17 + 5;
          }
          if ((bVar6 & 7) != 0) {
            puVar9 = param_3;
            lVar20 = -(uVar16 & 7);
            do {
              param_3 = puVar9 + 1;
              lVar20 = lVar20 + 1;
              *(char *)((long)puVar13 + lVar17) = (char)*puVar9;
              lVar17 = lVar17 + 1;
              puVar9 = param_3;
            } while (lVar20 != 0);
          }
          iVar15 = iVar15 + 1;
          puVar13 = (uint *)((long)puVar13 + lVar12);
        } while (iVar15 != iVar10);
      }
      break;
    case 3:
      if ((0 < iVar10) && (bVar6 != 0)) {
        iVar15 = 0;
        puVar9 = puVar13 + 2;
        do {
          if (uVar16 - 1 < 7) {
            lVar20 = 0;
          }
          else {
            lVar20 = 0;
            puVar8 = puVar9;
            do {
              *(short *)(puVar8 + -2) = (short)*param_3;
              *(short *)((long)puVar8 + -6) = (short)param_3[1];
              *(short *)(puVar8 + -1) = (short)param_3[2];
              *(short *)((long)puVar8 + -2) = (short)param_3[3];
              *(short *)puVar8 = (short)param_3[4];
              *(short *)((long)puVar8 + 2) = (short)param_3[5];
              *(short *)(puVar8 + 1) = (short)param_3[6];
              puVar1 = param_3 + 7;
              param_3 = param_3 + 8;
              lVar20 = lVar20 + -8;
              *(short *)((long)puVar8 + 6) = (short)*puVar1;
              puVar8 = puVar8 + 4;
            } while ((uVar16 & 7) - uVar16 != lVar20);
            lVar20 = -lVar20;
          }
          if ((bVar6 & 7) != 0) {
            puVar8 = param_3;
            puVar19 = (undefined2 *)((long)puVar13 + lVar20 * 2);
            lVar20 = -(uVar16 & 7);
            do {
              param_3 = puVar8 + 1;
              lVar20 = lVar20 + 1;
              *puVar19 = (short)*puVar8;
              puVar8 = param_3;
              puVar19 = puVar19 + 1;
            } while (lVar20 != 0);
          }
          iVar15 = iVar15 + 1;
          puVar13 = (uint *)((long)puVar13 + lVar12);
          puVar9 = (uint *)((long)puVar9 + lVar12);
        } while (iVar15 != iVar10);
      }
      break;
    case 4:
      if ((0 < iVar10) && (bVar6 != 0)) {
        iVar15 = 0;
        puVar9 = puVar13 + 2;
        do {
          if (uVar16 - 1 < 7) {
            lVar20 = 0;
          }
          else {
            lVar20 = 0;
            puVar8 = puVar9;
            do {
              *(short *)(puVar8 + -2) = (short)*param_3;
              *(short *)((long)puVar8 + -6) = (short)param_3[1];
              *(short *)(puVar8 + -1) = (short)param_3[2];
              *(short *)((long)puVar8 + -2) = (short)param_3[3];
              *(short *)puVar8 = (short)param_3[4];
              *(short *)((long)puVar8 + 2) = (short)param_3[5];
              *(short *)(puVar8 + 1) = (short)param_3[6];
              puVar1 = param_3 + 7;
              param_3 = param_3 + 8;
              lVar20 = lVar20 + -8;
              *(short *)((long)puVar8 + 6) = (short)*puVar1;
              puVar8 = puVar8 + 4;
            } while ((uVar16 & 7) - uVar16 != lVar20);
            lVar20 = -lVar20;
          }
          if ((bVar6 & 7) != 0) {
            puVar8 = param_3;
            puVar19 = (undefined2 *)((long)puVar13 + lVar20 * 2);
            lVar20 = -(uVar16 & 7);
            do {
              param_3 = puVar8 + 1;
              lVar20 = lVar20 + 1;
              *puVar19 = (short)*puVar8;
              puVar8 = param_3;
              puVar19 = puVar19 + 1;
            } while (lVar20 != 0);
          }
          iVar15 = iVar15 + 1;
          puVar13 = (uint *)((long)puVar13 + lVar12);
          puVar9 = (uint *)((long)puVar9 + lVar12);
        } while (iVar15 != iVar10);
      }
      break;
    case 5:
      if ((0 < iVar10) && (bVar6 != 0)) {
        iVar15 = 0;
        do {
          if (uVar16 - 1 < 7) {
            lVar17 = 0;
          }
          else {
            lVar20 = 0;
            lVar17 = 0;
            do {
              puVar2 = (undefined4 *)((long)param_3 + lVar20);
              puVar3 = (undefined4 *)((long)puVar13 + lVar20);
              lVar20 = lVar20 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar17 = lVar17 + -8;
              puVar3[7] = puVar2[7];
            } while ((uVar16 & 7) - uVar16 != lVar17);
            param_3 = (uint *)((long)param_3 + lVar20);
            lVar17 = -lVar17;
          }
          if ((bVar6 & 7) != 0) {
            puVar9 = param_3;
            puVar8 = puVar13 + lVar17;
            lVar20 = -(uVar16 & 7);
            do {
              param_3 = puVar9 + 1;
              lVar20 = lVar20 + 1;
              *puVar8 = *puVar9;
              puVar9 = param_3;
              puVar8 = puVar8 + 1;
            } while (lVar20 != 0);
          }
          iVar15 = iVar15 + 1;
          puVar13 = (uint *)((long)puVar13 + lVar12);
        } while (iVar15 != iVar10);
      }
      break;
    case 6:
      if ((0 < iVar10) && (bVar6 != 0)) {
        iVar15 = 0;
        do {
          if (uVar16 - 1 < 7) {
            lVar17 = 0;
          }
          else {
            lVar20 = 0;
            lVar17 = 0;
            do {
              puVar2 = (undefined4 *)((long)param_3 + lVar20);
              puVar3 = (undefined4 *)((long)puVar13 + lVar20);
              lVar20 = lVar20 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar17 = lVar17 + -8;
              puVar3[7] = puVar2[7];
            } while ((uVar16 & 7) - uVar16 != lVar17);
            param_3 = (uint *)((long)param_3 + lVar20);
            lVar17 = -lVar17;
          }
          if ((bVar6 & 7) != 0) {
            puVar9 = param_3;
            puVar8 = puVar13 + lVar17;
            lVar20 = -(uVar16 & 7);
            do {
              param_3 = puVar9 + 1;
              lVar20 = lVar20 + 1;
              *puVar8 = *puVar9;
              puVar9 = param_3;
              puVar8 = puVar8 + 1;
            } while (lVar20 != 0);
          }
          iVar15 = iVar15 + 1;
          puVar13 = (uint *)((long)puVar13 + lVar12);
        } while (iVar15 != iVar10);
      }
      break;
    case 7:
      if (0 < iVar10) {
        do {
          uVar5 = *param_3;
          puVar9 = param_3 + 1;
          puVar8 = param_3 + 2;
          puVar1 = param_3 + 3;
          param_3 = param_3 + 4;
          *puVar13 = (uint)(byte)*puVar1 |
                     ((uint)(byte)*puVar8 | ((uint)(byte)*puVar9 | (uVar5 & 0xff) << 8) << 8) << 8;
          puVar13 = (uint *)((long)puVar13 + lVar12);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      break;
    case 8:
      if (0 < iVar10) {
        puVar14 = (undefined1 *)((long)puVar13 + 1);
        do {
          puVar14[-1] = (char)*param_3;
          *puVar14 = (char)param_3[1];
          puVar14[1] = (char)param_3[2];
          puVar14[2] = (char)param_3[3];
          iVar10 = iVar10 + -1;
          puVar14 = puVar14 + lVar12;
          param_3 = param_3 + 4;
        } while (iVar10 != 0);
      }
      break;
    case 9:
      goto switchD_00656898_caseD_9;
    case 10:
      if ((0 < iVar10) && (bVar6 != 0)) {
        iVar15 = 0;
        do {
          if (uVar16 - 1 < 3) {
            lVar17 = 0;
          }
          else {
            lVar20 = 0;
            lVar17 = 0;
            do {
              piVar4 = (int *)((long)param_3 + lVar20);
              pfVar18 = (float *)((long)puVar13 + lVar20);
              *pfVar18 = (float)*piVar4;
              pfVar18[1] = (float)piVar4[1];
              lVar17 = lVar17 + -4;
              pfVar18[2] = (float)piVar4[2];
              lVar20 = lVar20 + 0x10;
              pfVar18[3] = (float)piVar4[3];
            } while ((uVar16 & 3) - uVar16 != lVar17);
            param_3 = (uint *)((long)param_3 + lVar20);
            lVar17 = -lVar17;
          }
          if ((bVar6 & 3) != 0) {
            puVar9 = param_3;
            pfVar18 = (float *)(puVar13 + lVar17);
            lVar20 = -(uVar16 & 3);
            do {
              param_3 = puVar9 + 1;
              lVar20 = lVar20 + 1;
              *pfVar18 = (float)(int)*puVar9;
              puVar9 = param_3;
              pfVar18 = pfVar18 + 1;
            } while (lVar20 != 0);
          }
          iVar15 = iVar15 + 1;
          puVar13 = (uint *)((long)puVar13 + lVar12);
        } while (iVar15 != iVar10);
      }
    }
    uVar7 = 0;
  }
switchD_00656898_caseD_9:
  return uVar7;
}

