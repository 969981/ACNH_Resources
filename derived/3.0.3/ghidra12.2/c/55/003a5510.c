
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void switchD_003a8558::caseD_0(float param_1,long *param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar4 = _UNK_041029f8;
  uVar3 = _DAT_041029f0;
  uVar2 = *(ushort *)(param_3 + 100);
  if ((ulong)uVar2 != 0) {
    lVar8 = *param_2;
    lVar7 = 0;
    pfVar9 = (float *)(*(long *)(param_3 + 0x48) + 0x18);
    do {
      uVar1 = *(uint *)(*(long *)(param_3 + 0x58) + lVar7);
      if ((-1 < (int)uVar1) && (uVar11 = (ulong)uVar1 & 0x7fff, (int)uVar11 != 0x7fff)) {
        fVar14 = pfVar9[2];
        fVar12 = pfVar9[3];
        fVar16 = pfVar9[4];
        puVar10 = (undefined8 *)(lVar8 + uVar11 * 0x50);
        fVar17 = pfVar9[5] + pfVar9[5];
        fVar19 = fVar14 + fVar14;
        fVar18 = fVar16 * (fVar16 + fVar16);
        puVar10[5] = CONCAT44((float)((ulong)puVar10[5] >> 0x20) + param_1 * 0.0,
                              (float)puVar10[5] + (fVar16 * fVar19 + fVar12 * fVar17) * param_1);
        puVar10[4] = CONCAT44((float)((ulong)puVar10[4] >> 0x20) +
                              (fVar12 * fVar19 - fVar16 * fVar17) * param_1,
                              (float)puVar10[4] +
                              ((1.0 - fVar12 * (fVar12 + fVar12)) - fVar18) * param_1);
        puVar10[7] = CONCAT44((float)((ulong)puVar10[7] >> 0x20) + param_1 * 0.0,
                              (float)puVar10[7] +
                              ((fVar12 + fVar12) * fVar16 - fVar14 * fVar17) * param_1);
        puVar10[6] = CONCAT44((float)((ulong)puVar10[6] >> 0x20) +
                              ((1.0 - fVar14 * fVar19) - fVar18) * param_1,
                              (float)puVar10[6] + (fVar12 * fVar19 + fVar16 * fVar17) * param_1);
        if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
          uVar13 = *(undefined8 *)(pfVar9 + -5);
          puVar10[1] = CONCAT44((float)((ulong)puVar10[1] >> 0x20) + param_1 * 0.0,
                                (float)puVar10[1] + pfVar9[-3] * param_1);
          *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) +
                              (float)((ulong)uVar13 >> 0x20) * param_1,
                              (float)*puVar10 + (float)uVar13 * param_1);
          uVar13 = *(undefined8 *)(pfVar9 + -2);
          lVar5 = lVar8 + uVar11 * 0x50;
          pfVar6 = (float *)(lVar5 + 0x44);
          fVar17 = *pfVar6;
          *(ulong *)(lVar5 + 0x18) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) + param_1 * 0.0,
                        (float)*(undefined8 *)(lVar5 + 0x18) + *pfVar9 * param_1);
          *(ulong *)(lVar5 + 0x10) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) +
                        (float)((ulong)uVar13 >> 0x20) * param_1,
                        (float)*(undefined8 *)(lVar5 + 0x10) + (float)uVar13 * param_1);
          *(uint *)(lVar5 + 0x40) = *(uint *)(lVar5 + 0x40) | (uint)pfVar9[-6] ^ 0xffffffff;
        }
        else {
          fVar12 = powf(pfVar9[-5],param_1);
          fVar14 = powf(pfVar9[-4],param_1);
          fVar16 = powf(pfVar9[-3],param_1);
          pfVar6 = (float *)(lVar8 + uVar11 * 0x50 + 0x44);
          fVar17 = *pfVar6;
          uVar13 = uVar3;
          uVar15 = uVar4;
          if (0.001 <= ABS(fVar17)) {
            uVar15 = puVar10[1];
            uVar13 = *puVar10;
          }
          puVar10[1] = CONCAT44((float)((ulong)uVar15 >> 0x20) * 0.0,fVar16 * (float)uVar15);
          *puVar10 = CONCAT44(fVar14 * (float)((ulong)uVar13 >> 0x20),fVar12 * (float)uVar13);
          uVar13 = *(undefined8 *)(pfVar9 + -2);
          lVar5 = lVar8 + uVar11 * 0x50;
          *(ulong *)(lVar5 + 0x18) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) + param_1 * 0.0,
                        (float)*(undefined8 *)(lVar5 + 0x18) + *pfVar9 * param_1);
          *(ulong *)(lVar5 + 0x10) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) +
                        (float)((ulong)uVar13 >> 0x20) * param_1,
                        (float)*(undefined8 *)(lVar5 + 0x10) + (float)uVar13 * param_1);
          *(uint *)(lVar5 + 0x40) = *(uint *)(lVar5 + 0x40) | (uint)pfVar9[-6] ^ 0xffffffff;
        }
        *pfVar6 = fVar17 + param_1;
      }
      lVar7 = lVar7 + 4;
      pfVar9 = pfVar9 + 0xc;
    } while ((ulong)uVar2 * 4 != lVar7);
  }
  return;
}

