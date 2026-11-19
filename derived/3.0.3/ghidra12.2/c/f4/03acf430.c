
void FUN_03acf430(undefined8 param_1,float *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  fVar9 = *param_2;
  fVar11 = param_2[1];
  fVar13 = param_2[0x12];
  fVar16 = param_2[0x13];
  lVar7 = 0;
  piVar8 = &DAT_041e00d8;
  fVar17 = param_2[0x14];
  fVar14 = param_2[2];
  do {
    if ((1 << (ulong)((uint)lVar7 & 0x1f) & param_3 & 0xff) != 0) {
      pfVar5 = param_2 + (long)piVar8[-2] * 3;
      pfVar6 = param_2 + (long)*piVar8 * 3;
      fVar10 = *pfVar5;
      fVar12 = pfVar5[1];
      fVar19 = pfVar6[1] - fVar12;
      fVar18 = *pfVar6 - fVar10;
      fVar15 = pfVar5[2];
      fVar20 = pfVar6[2] - fVar15;
      fVar21 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20);
      if (0.0 < fVar21) {
        fVar21 = 1.0 / fVar21;
        fVar18 = fVar18 * fVar21;
        fVar19 = fVar19 * fVar21;
        fVar20 = fVar20 * fVar21;
      }
      pfVar5 = param_2 + (long)piVar8[-1] * 3;
      fVar22 = pfVar5[1] - fVar12;
      fVar23 = *pfVar5 - fVar10;
      fVar24 = pfVar5[2] - fVar15;
      fVar21 = SQRT(fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24);
      if (0.0 < fVar21) {
        fVar21 = 1.0 / fVar21;
        fVar23 = fVar23 * fVar21;
        fVar22 = fVar22 * fVar21;
        fVar24 = fVar24 * fVar21;
      }
      local_90 = -(fVar20 * fVar22) + fVar24 * fVar19;
      fStack_8c = -(fVar18 * fVar24) + fVar23 * fVar20;
      local_88 = -(fVar19 * fVar23) + fVar22 * fVar18;
      fVar19 = fStack_8c * fStack_8c + local_90 * local_90 + local_88 * local_88;
      fVar18 = SQRT(fVar19);
      if (0.0 < fVar18) {
        fVar19 = 1.0 / fVar18;
        local_90 = local_90 * fVar19;
        fStack_8c = fStack_8c * fVar19;
        local_88 = local_88 * fVar19;
        fVar19 = fStack_8c * fStack_8c + local_90 * local_90 + local_88 * local_88;
      }
      fVar19 = fVar19 + -1.0;
      bVar1 = true;
      bVar4 = false;
      if (0.0 < fVar18) {
        bVar1 = false;
        bVar4 = true;
        if (!NAN(fVar19)) {
          bVar1 = fVar19 < -1.1920929e-06;
          bVar4 = false;
        }
      }
      bVar2 = false;
      bVar3 = true;
      if (bVar1 == bVar4) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar19)) {
          bVar2 = fVar19 == 1.1920929e-06;
          bVar3 = 1.1920929e-06 <= fVar19;
        }
      }
      if (!bVar3 || bVar2) {
        fStack_84 = fVar12 * fStack_8c + fVar10 * local_90 + fVar15 * local_88;
        if (0.0 < ((fVar11 + fVar16) * 0.5 * fStack_8c + (fVar9 + fVar13) * 0.5 * local_90 +
                  (fVar14 + fVar17) * 0.5 * local_88) - fStack_84) {
          local_90 = -local_90;
          fStack_8c = -fStack_8c;
          local_88 = -local_88;
          fStack_84 = -fStack_84;
        }
        FUN_03acf660(param_1,&local_90);
      }
    }
    lVar7 = lVar7 + 1;
    piVar8 = piVar8 + 3;
  } while (lVar7 != 6);
  return;
}

