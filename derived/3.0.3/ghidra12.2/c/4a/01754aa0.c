
void FUN_01754aa0(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar7 = *(uint *)(param_1 + 4);
  uVar8 = (ulong)uVar7;
  if ((int)uVar7 < 1) {
    *(undefined4 *)(param_1 + 0xc) = *param_2;
    *(undefined4 *)(param_1 + 0x10) = param_2[1];
    *(undefined4 *)(param_1 + 0x14) = param_2[2];
  }
  else {
    lVar10 = param_1 + 0x10;
    uVar9 = uVar8;
    do {
      uVar9 = uVar9 - 1;
      *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar10 + 4);
      *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(lVar10 + -4);
      fVar14 = DAT_052885c0;
      fVar13 = DAT_04c483c8;
      fVar18 = DAT_04c483c0;
      lVar10 = lVar10 + 0x28;
    } while (uVar9 != 0);
    *(undefined4 *)(param_1 + 0xc) = *param_2;
    fVar19 = DAT_052885c8;
    fVar17 = DAT_04c483cc;
    uVar9 = 0;
    fVar18 = 1.0 - fVar18;
    fVar15 = DAT_052885c4 * 0.033333335;
    *(undefined4 *)(param_1 + 0x10) = param_2[1];
    fVar5 = DAT_052885d4;
    fVar4 = DAT_052885d0;
    fVar3 = DAT_052885cc;
    pfVar11 = (float *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x14) = param_2[2];
    fVar16 = DAT_04c483d0;
    do {
      if (0.0 < pfVar11[3]) {
        fVar20 = (float)(int)uVar9 / (float)(int)uVar7;
        fVar22 = fVar15 + pfVar11[2];
        pfVar11[2] = fVar22;
        fVar24 = fVar3;
        fVar21 = fVar17;
        fVar23 = fVar19;
        if (*(char *)(param_1 + 0x414) != '\0') {
          fVar24 = fVar5;
          fVar21 = fVar16;
          fVar23 = fVar4;
        }
        fVar20 = fVar20 * fVar20;
        fVar23 = (fVar14 * 0.033333335 + *pfVar11 + fVar20 * fVar23 * 0.033333335) * 0.99;
        fVar21 = (fVar13 * 0.033333335 + pfVar11[1] + fVar20 * fVar21 * 0.033333335) * 0.99;
        fVar24 = (fVar22 + fVar20 * fVar24 * 0.033333335) * 0.99;
        *pfVar11 = fVar23;
        pfVar11[1] = fVar21;
        pfVar11[2] = fVar24;
        if (uVar7 - 1 == uVar9) {
          if (10.0 < SQRT(fVar24 * fVar24 + fVar23 * fVar23)) {
            *pfVar11 = fVar18 * fVar23;
            pfVar11[2] = fVar18 * fVar24;
          }
          if (fVar21 < 0.0) {
            pfVar11[1] = fVar18 * fVar21;
          }
        }
      }
      uVar9 = uVar9 + 1;
      pfVar11 = pfVar11 + 10;
    } while (uVar8 != uVar9);
    pfVar11 = (float *)(param_1 + 0x18);
    do {
      if (0.0 < pfVar11[6]) {
        pfVar11[-3] = pfVar11[3] * 0.033333335 + *pfVar11;
        pfVar11[-2] = pfVar11[4] * 0.033333335 + pfVar11[1];
        pfVar11[-1] = pfVar11[5] * 0.033333335 + pfVar11[2];
      }
      uVar8 = uVar8 - 1;
      pfVar11 = pfVar11 + 10;
    } while (uVar8 != 0);
  }
  iVar2 = DAT_04c483c4;
  if (0 < DAT_04c483c4) {
    iVar6 = 0;
    do {
      lVar10 = 0;
      do {
        lVar1 = param_1 + lVar10;
        pfVar11 = *(float **)(lVar1 + 0x290);
        if ((pfVar11 != (float *)0x0) &&
           (pfVar12 = *(float **)(lVar1 + 0x298), pfVar12 != (float *)0x0)) {
          fVar13 = pfVar12[1] - pfVar11[1];
          fVar18 = *pfVar12 - *pfVar11;
          fVar14 = pfVar12[2] - pfVar11[2];
          fVar17 = SQRT(fVar13 * fVar13 + fVar18 * fVar18 + fVar14 * fVar14);
          if (0.0 < fVar17) {
            fVar16 = pfVar11[9] + pfVar12[9];
            if (0.0 < fVar16) {
              fVar19 = pfVar11[9] / fVar16;
              fVar17 = *(float *)(lVar1 + 0x2a0) / fVar17 + -1.0;
              *pfVar11 = *pfVar11 - fVar19 * fVar18 * fVar17;
              pfVar11[1] = pfVar11[1] - fVar19 * fVar13 * fVar17;
              pfVar11[2] = pfVar11[2] - fVar19 * fVar14 * fVar17;
              pfVar11 = *(float **)(lVar1 + 0x298);
              fVar16 = pfVar11[9] / fVar16;
              *pfVar11 = *pfVar11 + fVar18 * fVar17 * fVar16;
              pfVar11[1] = fVar13 * fVar17 * fVar16 + pfVar11[1];
              pfVar11[2] = fVar14 * fVar17 * fVar16 + pfVar11[2];
            }
          }
        }
        lVar10 = lVar10 + 0x18;
      } while (lVar10 != 0x180);
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar2);
    uVar7 = *(uint *)(param_1 + 4);
  }
  if (0 < (int)uVar7) {
    uVar8 = (ulong)uVar7;
    pfVar11 = (float *)(param_1 + 0x18);
    do {
      if (0.0 < pfVar11[6]) {
        pfVar11[3] = (pfVar11[-3] - *pfVar11) * 29.999998;
        pfVar11[4] = (pfVar11[-2] - pfVar11[1]) * 29.999998;
        pfVar11[5] = (pfVar11[-1] - pfVar11[2]) * 29.999998;
      }
      uVar8 = uVar8 - 1;
      pfVar11 = pfVar11 + 10;
    } while (uVar8 != 0);
  }
  return;
}

