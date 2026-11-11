
undefined8 FUN_006561f0(long param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  byte *pbVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  short *psVar20;
  ushort *puVar21;
  long lVar22;
  
  puVar12 = (undefined8 *)(param_1 + (long)param_2 * 0x18);
  uVar7 = 0x80040200;
  if (*(byte *)((long)puVar12 + 0xc) - 1 < 10) {
    iVar11 = *(int *)(param_1 + 0x304);
    bVar6 = *(byte *)((long)puVar12 + 0xd);
    uVar17 = (ulong)bVar6;
    puVar14 = (uint *)*puVar12;
    lVar13 = (long)*(int *)(puVar12 + 1);
    switch((uint)*(byte *)((long)puVar12 + 0xc)) {
    case 1:
      if ((0 < iVar11) && (bVar6 != 0)) {
        iVar16 = 0;
        do {
          if (uVar17 - 1 < 7) {
            lVar18 = 0;
          }
          else {
            puVar10 = param_3;
            lVar22 = 3;
            do {
              lVar18 = lVar22;
              pcVar1 = (char *)((long)puVar14 + lVar18);
              *puVar10 = (uint)(byte)pcVar1[-3];
              puVar10[1] = (uint)(byte)pcVar1[-2];
              puVar10[2] = (uint)(byte)pcVar1[-1];
              puVar10[3] = (int)*pcVar1;
              puVar10[4] = (int)pcVar1[1];
              puVar10[5] = (int)pcVar1[2];
              puVar10[6] = (int)pcVar1[3];
              param_3 = puVar10 + 8;
              puVar10[7] = (int)pcVar1[4];
              puVar10 = param_3;
              lVar22 = lVar18 + 8;
            } while (((uVar17 & 7) - uVar17) + lVar18 + 8 != 3);
            lVar18 = lVar18 + 5;
          }
          if ((bVar6 & 7) != 0) {
            puVar10 = param_3;
            lVar22 = -(uVar17 & 7);
            do {
              pcVar1 = (char *)((long)puVar14 + lVar18);
              lVar18 = lVar18 + 1;
              param_3 = puVar10 + 1;
              *puVar10 = (int)*pcVar1;
              lVar22 = lVar22 + 1;
              puVar10 = param_3;
            } while (lVar22 != 0);
          }
          iVar16 = iVar16 + 1;
          puVar14 = (uint *)((long)puVar14 + lVar13);
        } while (iVar16 != iVar11);
      }
      break;
    case 2:
      if ((0 < iVar11) && (bVar6 != 0)) {
        iVar16 = 0;
        do {
          if (uVar17 - 1 < 7) {
            lVar18 = 0;
          }
          else {
            puVar10 = param_3;
            lVar22 = 3;
            do {
              lVar18 = lVar22;
              pbVar15 = (byte *)((long)puVar14 + lVar18);
              *puVar10 = (uint)pbVar15[-3];
              puVar10[1] = (uint)pbVar15[-2];
              puVar10[2] = (uint)pbVar15[-1];
              puVar10[3] = (uint)*pbVar15;
              puVar10[4] = (uint)pbVar15[1];
              puVar10[5] = (uint)pbVar15[2];
              puVar10[6] = (uint)pbVar15[3];
              param_3 = puVar10 + 8;
              puVar10[7] = (uint)pbVar15[4];
              puVar10 = param_3;
              lVar22 = lVar18 + 8;
            } while (((uVar17 & 7) - uVar17) + lVar18 + 8 != 3);
            lVar18 = lVar18 + 5;
          }
          if ((bVar6 & 7) != 0) {
            puVar10 = param_3;
            lVar22 = -(uVar17 & 7);
            do {
              pbVar15 = (byte *)((long)puVar14 + lVar18);
              lVar18 = lVar18 + 1;
              param_3 = puVar10 + 1;
              *puVar10 = (uint)*pbVar15;
              lVar22 = lVar22 + 1;
              puVar10 = param_3;
            } while (lVar22 != 0);
          }
          iVar16 = iVar16 + 1;
          puVar14 = (uint *)((long)puVar14 + lVar13);
        } while (iVar16 != iVar11);
      }
      break;
    case 3:
      if ((0 < iVar11) && (bVar6 != 0)) {
        iVar16 = 0;
        puVar10 = puVar14 + 2;
        do {
          if (uVar17 - 1 < 7) {
            lVar22 = 0;
          }
          else {
            lVar22 = 0;
            puVar8 = param_3;
            puVar9 = puVar10;
            do {
              *puVar8 = (int)(short)puVar9[-2];
              puVar8[1] = (int)*(short *)((long)puVar9 + -6);
              puVar8[2] = (int)(short)puVar9[-1];
              puVar8[3] = (int)*(short *)((long)puVar9 + -2);
              puVar8[4] = (int)(short)*puVar9;
              puVar8[5] = (int)*(short *)((long)puVar9 + 2);
              puVar8[6] = (int)(short)puVar9[1];
              param_3 = puVar8 + 8;
              lVar22 = lVar22 + -8;
              puVar8[7] = (int)*(short *)((long)puVar9 + 6);
              puVar9 = puVar9 + 4;
              puVar8 = param_3;
            } while ((uVar17 & 7) - uVar17 != lVar22);
            lVar22 = -lVar22;
          }
          if ((bVar6 & 7) != 0) {
            puVar9 = param_3;
            psVar20 = (short *)((long)puVar14 + lVar22 * 2);
            lVar22 = -(uVar17 & 7);
            do {
              lVar22 = lVar22 + 1;
              param_3 = puVar9 + 1;
              *puVar9 = (int)*psVar20;
              puVar9 = param_3;
              psVar20 = psVar20 + 1;
            } while (lVar22 != 0);
          }
          iVar16 = iVar16 + 1;
          puVar14 = (uint *)((long)puVar14 + lVar13);
          puVar10 = (uint *)((long)puVar10 + lVar13);
        } while (iVar16 != iVar11);
      }
      break;
    case 4:
      if ((0 < iVar11) && (bVar6 != 0)) {
        iVar16 = 0;
        puVar10 = puVar14 + 2;
        do {
          if (uVar17 - 1 < 7) {
            lVar22 = 0;
          }
          else {
            lVar22 = 0;
            puVar8 = param_3;
            puVar9 = puVar10;
            do {
              *puVar8 = (uint)(ushort)puVar9[-2];
              puVar8[1] = (uint)*(ushort *)((long)puVar9 + -6);
              puVar8[2] = (uint)(ushort)puVar9[-1];
              puVar8[3] = (uint)*(ushort *)((long)puVar9 + -2);
              puVar8[4] = (uint)(ushort)*puVar9;
              puVar8[5] = (uint)*(ushort *)((long)puVar9 + 2);
              puVar8[6] = (uint)(ushort)puVar9[1];
              param_3 = puVar8 + 8;
              lVar22 = lVar22 + -8;
              puVar8[7] = (uint)*(ushort *)((long)puVar9 + 6);
              puVar9 = puVar9 + 4;
              puVar8 = param_3;
            } while ((uVar17 & 7) - uVar17 != lVar22);
            lVar22 = -lVar22;
          }
          if ((bVar6 & 7) != 0) {
            puVar9 = param_3;
            puVar21 = (ushort *)((long)puVar14 + lVar22 * 2);
            lVar22 = -(uVar17 & 7);
            do {
              lVar22 = lVar22 + 1;
              param_3 = puVar9 + 1;
              *puVar9 = (uint)*puVar21;
              puVar9 = param_3;
              puVar21 = puVar21 + 1;
            } while (lVar22 != 0);
          }
          iVar16 = iVar16 + 1;
          puVar14 = (uint *)((long)puVar14 + lVar13);
          puVar10 = (uint *)((long)puVar10 + lVar13);
        } while (iVar16 != iVar11);
      }
      break;
    case 5:
      if ((0 < iVar11) && (bVar6 != 0)) {
        iVar16 = 0;
        do {
          if (uVar17 - 1 < 7) {
            lVar18 = 0;
          }
          else {
            lVar22 = 0;
            lVar18 = 0;
            do {
              puVar2 = (undefined4 *)((long)puVar14 + lVar22);
              puVar3 = (undefined4 *)((long)param_3 + lVar22);
              lVar22 = lVar22 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar18 = lVar18 + -8;
              puVar3[7] = puVar2[7];
            } while ((uVar17 & 7) - uVar17 != lVar18);
            param_3 = (uint *)((long)param_3 + lVar22);
            lVar18 = -lVar18;
          }
          if ((bVar6 & 7) != 0) {
            puVar10 = param_3;
            puVar9 = puVar14 + lVar18;
            lVar22 = -(uVar17 & 7);
            do {
              lVar22 = lVar22 + 1;
              param_3 = puVar10 + 1;
              *puVar10 = *puVar9;
              puVar10 = param_3;
              puVar9 = puVar9 + 1;
            } while (lVar22 != 0);
          }
          iVar16 = iVar16 + 1;
          puVar14 = (uint *)((long)puVar14 + lVar13);
        } while (iVar16 != iVar11);
      }
      break;
    case 6:
      if ((0 < iVar11) && (bVar6 != 0)) {
        iVar16 = 0;
        do {
          if (uVar17 - 1 < 7) {
            lVar18 = 0;
          }
          else {
            lVar22 = 0;
            lVar18 = 0;
            do {
              puVar2 = (undefined4 *)((long)puVar14 + lVar22);
              puVar3 = (undefined4 *)((long)param_3 + lVar22);
              lVar22 = lVar22 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar18 = lVar18 + -8;
              puVar3[7] = puVar2[7];
            } while ((uVar17 & 7) - uVar17 != lVar18);
            param_3 = (uint *)((long)param_3 + lVar22);
            lVar18 = -lVar18;
          }
          if ((bVar6 & 7) != 0) {
            puVar10 = param_3;
            puVar9 = puVar14 + lVar18;
            lVar22 = -(uVar17 & 7);
            do {
              lVar22 = lVar22 + 1;
              param_3 = puVar10 + 1;
              *puVar10 = *puVar9;
              puVar10 = param_3;
              puVar9 = puVar9 + 1;
            } while (lVar22 != 0);
          }
          iVar16 = iVar16 + 1;
          puVar14 = (uint *)((long)puVar14 + lVar13);
        } while (iVar16 != iVar11);
      }
      break;
    case 7:
      if (0 < iVar11) {
        do {
          uVar5 = *puVar14;
          puVar14 = (uint *)((long)puVar14 + lVar13);
          *param_3 = uVar5 & 0xff;
          param_3[1] = uVar5 >> 8 & 0xff;
          param_3[2] = uVar5 >> 0x10 & 0xff;
          param_3[3] = uVar5 >> 0x18;
          iVar11 = iVar11 + -1;
          param_3 = param_3 + 4;
        } while (iVar11 != 0);
      }
      break;
    case 8:
      if (0 < iVar11) {
        pbVar15 = (byte *)((long)puVar14 + 1);
        do {
          *param_3 = (uint)pbVar15[-1];
          param_3[1] = (uint)*pbVar15;
          param_3[2] = (uint)pbVar15[1];
          param_3[3] = (uint)pbVar15[2];
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + lVar13;
          param_3 = param_3 + 4;
        } while (iVar11 != 0);
      }
      break;
    case 9:
      goto switchD_00656238_caseD_9;
    case 10:
      if ((0 < iVar11) && (bVar6 != 0)) {
        iVar16 = 0;
        do {
          if (uVar17 - 1 < 3) {
            lVar18 = 0;
          }
          else {
            lVar22 = 0;
            lVar18 = 0;
            do {
              pfVar19 = (float *)((long)puVar14 + lVar22);
              piVar4 = (int *)((long)param_3 + lVar22);
              *piVar4 = (int)*pfVar19;
              piVar4[1] = (int)pfVar19[1];
              lVar18 = lVar18 + -4;
              piVar4[2] = (int)pfVar19[2];
              lVar22 = lVar22 + 0x10;
              piVar4[3] = (int)pfVar19[3];
            } while ((uVar17 & 3) - uVar17 != lVar18);
            param_3 = (uint *)((long)param_3 + lVar22);
            lVar18 = -lVar18;
          }
          if ((bVar6 & 3) != 0) {
            puVar10 = param_3;
            pfVar19 = (float *)(puVar14 + lVar18);
            lVar22 = -(uVar17 & 3);
            do {
              lVar22 = lVar22 + 1;
              param_3 = puVar10 + 1;
              *puVar10 = (int)*pfVar19;
              puVar10 = param_3;
              pfVar19 = pfVar19 + 1;
            } while (lVar22 != 0);
          }
          iVar16 = iVar16 + 1;
          puVar14 = (uint *)((long)puVar14 + lVar13);
        } while (iVar16 != iVar11);
      }
    }
    uVar7 = 0;
  }
switchD_00656238_caseD_9:
  return uVar7;
}

