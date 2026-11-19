
void FUN_03b99150(uint param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  iVar5 = param_2 * 4;
  if (0 < (int)param_2) {
    uVar11 = (ulong)param_2;
    uVar9 = 0;
    pfVar13 = (float *)(param_3 + 4);
    do {
      pfVar15 = pfVar13 + (ulong)param_2 * 2;
      pfVar3 = pfVar13 + uVar11 + (ulong)param_2 * 2;
      uVar9 = uVar9 + 2;
      fVar24 = *pfVar15;
      fVar26 = *pfVar13 + pfVar13[uVar11];
      fVar25 = *pfVar3;
      fVar20 = *pfVar13 - pfVar13[uVar11];
      fVar27 = fVar24 + fVar25;
      fVar21 = pfVar13[-1] + pfVar13[(ulong)param_2 - 1];
      fVar19 = pfVar13[-1] - pfVar13[(ulong)param_2 - 1];
      fVar22 = pfVar15[-1] + pfVar3[-1];
      fVar23 = pfVar15[-1] - pfVar3[-1];
      pfVar13[-1] = fVar21 + fVar22;
      pfVar15[-1] = fVar21 - fVar22;
      *pfVar15 = fVar26 - fVar27;
      *pfVar13 = fVar26 + fVar27;
      fVar24 = fVar24 - fVar25;
      pfVar13[(ulong)param_2 - 1] = fVar19 - fVar24;
      pfVar13[uVar11] = fVar20 + fVar23;
      pfVar13 = pfVar13 + 2;
      pfVar3[-1] = fVar19 + fVar24;
      *pfVar3 = fVar20 - fVar23;
    } while (uVar9 < uVar11);
  }
  if (iVar5 < (int)(param_2 * 5)) {
    fVar19 = *(float *)(param_4 + 8);
    lVar10 = (long)iVar5;
    pfVar13 = (float *)(param_3 + (long)iVar5 * 4 + 4);
    pfVar15 = (float *)(param_3 + ((int)param_2 + lVar10) * 4 + 4);
    do {
      pfVar3 = (float *)((long)pfVar13 +
                        (-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3));
      pfVar4 = pfVar13 + (long)(int)param_2 + (long)(int)param_2 * 2;
      lVar10 = lVar10 + 2;
      fVar25 = *pfVar13 - *pfVar15;
      fVar24 = pfVar13[-1] - pfVar15[-1];
      fVar27 = *pfVar3 - *pfVar4;
      fVar20 = pfVar13[-1] + pfVar15[-1];
      fVar21 = *pfVar13 + *pfVar15;
      fVar23 = *pfVar3 + *pfVar4;
      fVar26 = pfVar3[-1] - pfVar4[-1];
      fVar22 = pfVar3[-1] + pfVar4[-1];
      fVar29 = fVar24 - fVar27;
      fVar24 = fVar24 + fVar27;
      fVar27 = fVar25 + fVar26;
      fVar26 = fVar26 - fVar25;
      pfVar13[-1] = fVar20 + fVar22;
      *pfVar13 = fVar21 + fVar23;
      pfVar3[-1] = fVar23 - fVar21;
      *pfVar3 = fVar20 - fVar22;
      pfVar13 = pfVar13 + 2;
      pfVar15[-1] = fVar19 * (fVar29 - fVar27);
      *pfVar15 = fVar19 * (fVar27 + fVar29);
      pfVar15 = pfVar15 + 2;
      pfVar4[-1] = fVar19 * (fVar26 - fVar24);
      *pfVar4 = fVar19 * (fVar26 + fVar24);
    } while (lVar10 < (int)(param_2 * 5));
  }
  uVar6 = param_2 * 8;
  if ((int)uVar6 < (int)param_1) {
    lVar12 = (long)(int)uVar6;
    uVar9 = -(ulong)((param_2 & 0x1fffffff) >> 0x1c) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
    lVar14 = (long)(int)param_2;
    uVar11 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
    uVar7 = param_2 * 0xc;
    lVar8 = param_3;
    lVar10 = lVar12;
    lVar16 = 0;
    do {
      lVar1 = lVar16 + 2;
      fVar19 = *(float *)(param_4 + lVar1 * 4);
      fVar21 = *(float *)(param_4 + lVar16 * 4 + 0xc);
      fVar20 = -fVar21;
      if (0 < (int)param_2) {
        pfVar13 = (float *)(param_4 + lVar1 * 8);
        fVar22 = *pfVar13;
        fVar23 = pfVar13[1];
        fVar24 = fVar22 - fVar23 * (fVar21 + fVar21);
        fVar25 = (fVar21 + fVar21) * fVar22 - fVar23;
        lVar17 = lVar8;
        lVar16 = lVar10;
        do {
          pfVar13 = (float *)(lVar17 + uVar9);
          pfVar15 = (float *)(lVar17 + (lVar14 + lVar12) * 4);
          pfVar3 = (float *)(lVar17 + uVar11 + uVar9 + 4);
          pfVar4 = (float *)(lVar17 + (long)(int)param_2 * 0xc + 4 + uVar9);
          lVar16 = lVar16 + 2;
          lVar17 = lVar17 + 8;
          fVar35 = pfVar13[1] + pfVar15[1];
          fVar27 = pfVar13[1] - pfVar15[1];
          fVar28 = *pfVar3 + *pfVar4;
          fVar34 = *pfVar13 + *pfVar15;
          fVar26 = *pfVar13 - *pfVar15;
          fVar29 = pfVar3[-1] + pfVar4[-1];
          fVar30 = pfVar3[-1] - pfVar4[-1];
          fVar31 = *pfVar3 - *pfVar4;
          fVar32 = fVar34 - fVar29;
          fVar33 = fVar26 - fVar31;
          fVar26 = fVar26 + fVar31;
          fVar31 = fVar27 + fVar30;
          fVar27 = fVar27 - fVar30;
          fVar30 = fVar35 - fVar28;
          *pfVar13 = fVar34 + fVar29;
          pfVar13[1] = fVar35 + fVar28;
          pfVar3[-1] = fVar30 * fVar20 + fVar32 * fVar19;
          *pfVar3 = fVar21 * fVar32 + fVar30 * fVar19;
          *pfVar15 = fVar31 * -fVar23 + fVar33 * fVar22;
          pfVar15[1] = fVar23 * fVar33 + fVar31 * fVar22;
          pfVar4[-1] = fVar27 * -fVar25 + fVar26 * fVar24;
          *pfVar4 = fVar25 * fVar26 + fVar27 * fVar24;
        } while (lVar16 < lVar10 + lVar14);
      }
      if (0 < (int)param_2) {
        lVar16 = (long)(int)uVar7 + 1;
        fVar21 = *(float *)(param_4 + (lVar1 * 8 | 8U));
        fVar22 = *(float *)(param_4 + (lVar1 * 8 | 0xcU));
        lVar17 = (ulong)uVar7 << 0x20;
        fVar23 = fVar21 - fVar22 * (fVar19 + fVar19);
        fVar24 = (fVar19 + fVar19) * fVar21 - fVar22;
        pfVar13 = (float *)(param_3 + (long)(int)uVar7 * 4);
        pfVar15 = (float *)(param_3 + 4 + (lVar14 + (int)uVar7) * 4);
        do {
          pfVar3 = (float *)((long)pfVar13 + uVar11);
          pfVar4 = pfVar13 + (long)(int)param_2 * 3 + 1;
          uVar18 = lVar17 >> 0x1e | 4;
          fVar27 = *(float *)(param_3 + uVar18);
          lVar17 = lVar17 + 0x200000000;
          fVar33 = *pfVar13 + pfVar15[-1];
          fVar25 = *pfVar13 - pfVar15[-1];
          fVar34 = pfVar3[1] + *pfVar4;
          fVar26 = *pfVar3 + pfVar4[-1];
          fVar29 = *pfVar3 - pfVar4[-1];
          fVar28 = pfVar3[1] - *pfVar4;
          fVar30 = fVar27 + *pfVar15;
          fVar27 = fVar27 - *pfVar15;
          fVar31 = fVar33 - fVar26;
          fVar32 = fVar25 - fVar28;
          fVar25 = fVar25 + fVar28;
          fVar28 = fVar27 + fVar29;
          fVar27 = fVar27 - fVar29;
          fVar29 = fVar30 - fVar34;
          *pfVar13 = fVar33 + fVar26;
          *(float *)(param_3 + uVar18) = fVar30 + fVar34;
          lVar2 = lVar16 + 1;
          lVar16 = lVar16 + 2;
          pfVar3[1] = fVar19 * fVar31 + fVar29 * fVar20;
          *pfVar3 = fVar29 * -fVar19 + fVar31 * fVar20;
          pfVar15[-1] = fVar28 * -fVar22 + fVar32 * fVar21;
          *pfVar15 = fVar22 * fVar32 + fVar28 * fVar21;
          pfVar4[-1] = fVar27 * -fVar24 + fVar25 * fVar23;
          *pfVar4 = fVar24 * fVar25 + fVar27 * fVar23;
          pfVar13 = pfVar13 + 2;
          pfVar15 = pfVar15 + 2;
        } while (lVar2 < lVar14 + iVar5 + lVar10);
      }
      lVar10 = lVar10 + lVar12;
      uVar7 = uVar7 + uVar6;
      lVar8 = lVar8 + uVar9;
      lVar16 = lVar1;
    } while (lVar10 < (long)(ulong)param_1);
  }
  return;
}

