
bool FUN_003af7b0(long *param_1,uint *param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  float *pfVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ushort *puVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  
  if ((int)(uint)*(byte *)(*param_1 + 0x5b) <= (int)param_4) {
    return false;
  }
  lVar14 = *(long *)(*param_1 + 0x18);
  if ((int)param_4 < 1) {
    uVar18 = 0;
  }
  else {
    if (param_4 == 1) {
      uVar18 = 0;
      uVar15 = 0;
    }
    else {
      uVar18 = 0;
      uVar15 = 0;
      puVar19 = (ushort *)(lVar14 + 0x6c);
      do {
        uVar18 = uVar18 + 2;
        uVar15 = uVar15 + puVar19[-0x1c] + (uint)*puVar19;
        puVar19 = puVar19 + 0x38;
      } while (((ulong)param_4 & 0xfffffffe) != uVar18);
    }
    if ((param_4 & 1) != 0) {
      uVar15 = uVar15 + *(ushort *)(lVar14 + uVar18 * 0x38 + 0x34);
    }
    uVar18 = (ulong)uVar15;
  }
  lVar1 = param_1[8] + uVar18 * 0x20;
  uVar15 = *param_2;
  uVar3 = *(ushort *)(lVar14 + (long)(int)param_4 * 0x38 + 0x34);
  param_2[2] = uVar15;
  uVar16 = (uint)uVar3;
  if ((int)uVar15 < (int)(uint)uVar3) {
    uVar18 = (ulong)(int)uVar15;
    bVar13 = true;
    uVar20 = (ulong)uVar15;
    do {
      pfVar2 = (float *)(lVar1 + uVar18 * 0x20);
      if (*(int *)((long)param_3 + 0xe4) == 0) {
LAB_003af8e4:
        uVar15 = *(uint *)(param_3 + 0x1c);
        if (0 < (int)uVar15) {
          uVar21 = 0;
          bVar7 = false;
          pfVar22 = (float *)(param_3 + 6);
          do {
            fVar25 = (float)*(undefined8 *)(pfVar22 + -2);
            fVar23 = (float)*(undefined8 *)(pfVar22 + -4);
            fVar24 = (float)((ulong)*(undefined8 *)(pfVar22 + -4) >> 0x20);
            fVar28 = *pfVar2;
            if (fVar23 < 0.0) {
              fVar28 = pfVar2[4];
            }
            fVar26 = pfVar2[1];
            if (fVar24 < 0.0) {
              fVar26 = pfVar2[5];
            }
            fVar27 = pfVar2[6];
            if (0.0 <= fVar25) {
              fVar27 = pfVar2[2];
            }
            fVar23 = fVar23 * fVar28;
            fVar24 = fVar24 * fVar26;
            fVar25 = fVar25 * fVar27;
            fVar28 = (float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20) * 0.0;
            auVar29._4_4_ = fVar24;
            auVar29._0_4_ = fVar23;
            auVar29._8_4_ = fVar25;
            auVar29._12_4_ = fVar28;
            auVar4._4_4_ = fVar24;
            auVar4._0_4_ = fVar23;
            auVar4._8_4_ = fVar25;
            auVar4._12_4_ = fVar28;
            auVar29 = NEON_ext(auVar29,auVar4,8,1);
            if (0.0 < auVar29._0_4_ + fVar23 + auVar29._4_4_ + fVar24 + *pfVar22) break;
            uVar21 = uVar21 + 1;
            pfVar22 = pfVar22 + 8;
            bVar7 = uVar15 <= uVar21;
          } while (uVar15 != uVar21);
          if (!bVar7) goto LAB_003af874;
        }
        uVar15 = (int)uVar20 + 1;
        *param_2 = uVar15;
        goto joined_r0x003af9d0;
      }
      if (((float)*param_3 <= pfVar2[4]) && (*pfVar2 <= *(float *)(param_3 + 2))) {
        fVar28 = (float)param_3[1];
        fVar27 = pfVar2[6];
        fVar23 = pfVar2[1];
        fVar24 = pfVar2[2];
        fVar25 = *(float *)((long)param_3 + 0x14);
        fVar26 = *(float *)(param_3 + 3);
        bVar7 = false;
        bVar9 = false;
        bVar11 = false;
        if ((float)((ulong)*param_3 >> 0x20) <= pfVar2[5]) {
          bVar7 = false;
          bVar9 = false;
          bVar11 = true;
          if (!NAN(fVar23) && !NAN(fVar25)) {
            bVar7 = fVar23 < fVar25;
            bVar9 = fVar23 == fVar25;
            bVar11 = false;
          }
        }
        bVar8 = false;
        bVar10 = false;
        bVar12 = false;
        if (bVar9 || bVar7 != bVar11) {
          bVar8 = false;
          bVar10 = false;
          bVar12 = true;
          if (!NAN(fVar28) && !NAN(fVar27)) {
            bVar8 = fVar28 < fVar27;
            bVar10 = fVar28 == fVar27;
            bVar12 = false;
          }
        }
        bVar7 = false;
        bVar9 = false;
        bVar11 = false;
        if (bVar10 || bVar8 != bVar12) {
          bVar7 = false;
          bVar9 = false;
          bVar11 = true;
          if (!NAN(fVar24) && !NAN(fVar26)) {
            bVar7 = fVar24 < fVar26;
            bVar9 = fVar24 == fVar26;
            bVar11 = false;
          }
        }
        if (bVar9 || bVar7 != bVar11) goto LAB_003af8e4;
      }
LAB_003af874:
      uVar18 = uVar18 + 1;
      param_2[2] = (uint)uVar18;
      bVar13 = (long)uVar18 < (long)(ulong)uVar3;
      uVar20 = uVar18;
    } while ((uint)uVar18 != uVar16);
    uVar15 = uVar16 + 1;
    *param_2 = uVar15;
    uVar17 = uVar16;
    if (uVar16 <= uVar15) goto LAB_003afb50;
  }
  else {
    bVar13 = false;
    uVar18 = (ulong)uVar15;
    uVar15 = uVar15 + 1;
    *param_2 = uVar15;
joined_r0x003af9d0:
    uVar17 = (uint)uVar18;
    if ((int)uVar16 <= (int)uVar15) goto LAB_003afb50;
  }
  do {
    pfVar2 = (float *)(lVar1 + (long)(int)uVar15 * 0x20);
    if (*(int *)((long)param_3 + 0xe4) != 0) {
      if ((pfVar2[4] < (float)*param_3) || (*(float *)(param_3 + 2) < *pfVar2)) break;
      fVar28 = (float)param_3[1];
      fVar27 = pfVar2[6];
      fVar23 = pfVar2[1];
      fVar24 = pfVar2[2];
      fVar25 = *(float *)((long)param_3 + 0x14);
      fVar26 = *(float *)(param_3 + 3);
      bVar7 = false;
      bVar9 = false;
      bVar11 = false;
      if ((float)((ulong)*param_3 >> 0x20) <= pfVar2[5]) {
        bVar7 = false;
        bVar9 = false;
        bVar11 = true;
        if (!NAN(fVar23) && !NAN(fVar25)) {
          bVar7 = fVar23 < fVar25;
          bVar9 = fVar23 == fVar25;
          bVar11 = false;
        }
      }
      bVar8 = false;
      bVar10 = false;
      bVar12 = false;
      if (bVar9 || bVar7 != bVar11) {
        bVar8 = false;
        bVar10 = false;
        bVar12 = true;
        if (!NAN(fVar28) && !NAN(fVar27)) {
          bVar8 = fVar28 < fVar27;
          bVar10 = fVar28 == fVar27;
          bVar12 = false;
        }
      }
      bVar7 = false;
      bVar9 = false;
      bVar11 = false;
      if (bVar10 || bVar8 != bVar12) {
        bVar7 = false;
        bVar9 = false;
        bVar11 = true;
        if (!NAN(fVar24) && !NAN(fVar26)) {
          bVar7 = fVar24 < fVar26;
          bVar9 = fVar24 == fVar26;
          bVar11 = false;
        }
      }
      if (!bVar9 && bVar7 == bVar11) break;
    }
    uVar16 = *(uint *)(param_3 + 0x1c);
    if (0 < (int)uVar16) {
      uVar18 = 0;
      bVar7 = false;
      pfVar22 = (float *)(param_3 + 6);
      do {
        fVar25 = (float)*(undefined8 *)(pfVar22 + -2);
        fVar23 = (float)*(undefined8 *)(pfVar22 + -4);
        fVar24 = (float)((ulong)*(undefined8 *)(pfVar22 + -4) >> 0x20);
        fVar28 = *pfVar2;
        if (fVar23 < 0.0) {
          fVar28 = pfVar2[4];
        }
        fVar26 = pfVar2[5];
        if (0.0 <= fVar24) {
          fVar26 = pfVar2[1];
        }
        fVar27 = pfVar2[6];
        if (0.0 <= fVar25) {
          fVar27 = pfVar2[2];
        }
        fVar23 = fVar23 * fVar28;
        fVar24 = fVar24 * fVar26;
        fVar25 = fVar25 * fVar27;
        fVar28 = (float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20) * 0.0;
        auVar5._4_4_ = fVar24;
        auVar5._0_4_ = fVar23;
        auVar5._8_4_ = fVar25;
        auVar5._12_4_ = fVar28;
        auVar6._4_4_ = fVar24;
        auVar6._0_4_ = fVar23;
        auVar6._8_4_ = fVar25;
        auVar6._12_4_ = fVar28;
        auVar29 = NEON_ext(auVar5,auVar6,8,1);
        if (0.0 < auVar29._0_4_ + fVar23 + auVar29._4_4_ + fVar24 + *pfVar22) break;
        uVar18 = uVar18 + 1;
        pfVar22 = pfVar22 + 8;
        bVar7 = uVar16 <= uVar18;
      } while (uVar16 != uVar18);
      if (!bVar7) break;
    }
    uVar15 = uVar15 + 1;
    *param_2 = uVar15;
  } while ((int)uVar15 < (int)(uint)uVar3);
LAB_003afb50:
  param_2[3] = uVar15 - uVar17;
  return bVar13;
}

