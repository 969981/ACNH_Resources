
/* WARNING: Type propagation algorithm not settling */

bool FUN_006ee078(long param_1,long param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
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
  float fVar36;
  float fVar37;
  
  if (param_3 != (float *)0x0) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
  }
  if (param_4 != (float *)0x0) {
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  fVar11 = *(float *)(param_2 + 8);
  fVar13 = *(float *)(param_2 + 0xc);
  fVar22 = *(float *)(param_1 + 8);
  fVar18 = *(float *)(param_1 + 0xc);
  fVar28 = fVar13 - fVar18;
  fVar29 = fVar11 - fVar22;
  fVar14 = *(float *)(param_2 + 0x10);
  fVar24 = *(float *)(param_1 + 0x10);
  fVar15 = *(float *)(param_1 + 0x14);
  fVar32 = fVar14 - fVar24;
  fVar27 = (*(float *)(param_2 + 0x14) - fVar22) - fVar29;
  fVar25 = (*(float *)(param_2 + 0x18) - fVar18) - fVar28;
  fVar23 = (*(float *)(param_2 + 0x1c) - fVar24) - fVar32;
  bVar1 = true;
  if ((SQRT((fVar24 - fVar14) * (fVar24 - fVar14) + (fVar22 - fVar11) * (fVar22 - fVar11)) <= fVar15
      ) && (bVar1 = false, !NAN(fVar13) && !NAN(fVar18))) {
    bVar1 = fVar13 < fVar18;
  }
  if ((!bVar1) && (fVar13 <= fVar18 + *(float *)(param_1 + 0x18))) {
    fVar11 = fVar11 + fVar27 * 0.01;
    fVar13 = fVar13 + fVar25 * 0.01;
    fVar14 = fVar14 + fVar23 * 0.01;
    if (param_3 != (float *)0x0) {
      *param_3 = fVar11;
      param_3[1] = fVar13;
      param_3[2] = fVar14;
    }
    if (param_4 != (float *)0x0) {
      fVar11 = fVar11 - *(float *)(param_1 + 8);
      fVar13 = fVar13 - *(float *)(param_1 + 0xc);
      fVar14 = fVar14 - *(float *)(param_1 + 0x10);
      *param_4 = fVar11;
      param_4[1] = fVar13;
      param_4[2] = fVar14;
      fVar22 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar14 * fVar14);
      bVar1 = false;
      bVar6 = true;
      if (-1.1920929e-07 <= fVar22) {
        bVar1 = false;
        bVar6 = true;
        if (!NAN(fVar22)) {
          bVar1 = fVar22 == 1.1920929e-07;
          bVar6 = 1.1920929e-07 <= fVar22;
        }
      }
      if (!bVar6 || bVar1) {
        param_4[2] = 0.0;
        param_4[0] = 1.0;
        param_4[1] = 0.0;
        return true;
      }
      fVar22 = 1.0 / fVar22;
      *param_4 = fVar11 * fVar22;
      param_4[1] = fVar13 * fVar22;
      param_4[2] = fVar14 * fVar22;
    }
    return true;
  }
  fVar15 = fVar15 * fVar15;
  if ((fVar25 < -1.1920929e-07) || (1.1920929e-07 < fVar25)) {
    fVar11 = 1.0;
    fVar13 = -fVar28 / fVar25;
    bVar1 = false;
    bVar6 = true;
    if (0.0 <= fVar13) {
      bVar1 = false;
      bVar6 = true;
      if (!NAN(fVar13)) {
        bVar1 = fVar13 == 1.0;
        bVar6 = 1.0 <= fVar13;
      }
    }
    if (bVar6 && !bVar1) {
LAB_006ee184:
      bVar1 = false;
      fVar14 = 0.0;
      fVar16 = 0.0;
      fVar13 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar14 = fVar29 + fVar13 * fVar27;
      fVar13 = fVar32 + fVar13 * fVar23;
      if (fVar15 <= fVar13 * fVar13 + fVar14 * fVar14) goto LAB_006ee184;
      fVar14 = fVar22 + fVar14;
      fVar13 = fVar24 + fVar13;
      bVar1 = true;
      fVar17 = -1.0;
      fVar16 = fVar18;
    }
    fVar19 = (*(float *)(param_1 + 0x18) - fVar28) / fVar25;
    if ((fVar19 < 0.0) || (1.0 < fVar19)) goto LAB_006ee1e8;
    fVar35 = fVar29 + fVar19 * fVar27;
    fVar19 = fVar32 + fVar19 * fVar23;
    if (fVar15 <= fVar19 * fVar19 + fVar35 * fVar35) goto LAB_006ee1e8;
    fVar22 = fVar22 + fVar35;
    fVar18 = fVar18 + *(float *)(param_1 + 0x18);
    bVar6 = true;
    fVar24 = fVar24 + fVar19;
  }
  else {
    bVar1 = false;
    fVar14 = 0.0;
    fVar16 = 0.0;
    fVar13 = 0.0;
    fVar17 = 0.0;
LAB_006ee1e8:
    bVar6 = false;
    fVar24 = 0.0;
    fVar18 = 0.0;
    fVar22 = 0.0;
    fVar11 = 0.0;
  }
  bVar5 = false;
  fVar35 = fVar32 * fVar23 + fVar29 * fVar27;
  fVar34 = fVar23 * fVar23 + fVar27 * fVar27;
  fVar35 = fVar35 + fVar35;
  fVar19 = fVar34 + fVar34;
  fVar15 = (fVar32 * fVar32 + fVar29 * fVar29) - fVar15;
  bVar3 = false;
  bVar7 = true;
  if (-1.1920929e-07 <= fVar19) {
    bVar3 = false;
    bVar7 = true;
    if (!NAN(fVar19)) {
      bVar3 = fVar19 == 1.1920929e-07;
      bVar7 = 1.1920929e-07 <= fVar19;
    }
  }
  if (!bVar7 || bVar3) {
    bVar3 = false;
    bVar7 = true;
    if (-1.1920929e-07 <= fVar35) {
      bVar3 = false;
      bVar7 = true;
      if (!NAN(fVar35)) {
        bVar3 = fVar35 == 1.1920929e-07;
        bVar7 = 1.1920929e-07 <= fVar35;
      }
    }
    if (!bVar7 || bVar3) {
      return false;
    }
    fVar15 = -fVar15 / fVar35;
LAB_006ee2fc:
    bVar3 = false;
    bVar7 = false;
    bVar9 = false;
    if (0.0 <= fVar15) {
      bVar3 = false;
      bVar7 = false;
      bVar9 = true;
      if (!NAN(fVar15)) {
        bVar3 = fVar15 < 1.0;
        bVar7 = fVar15 == 1.0;
        bVar9 = false;
      }
    }
    if (!bVar7 && bVar3 == bVar9) {
      return false;
    }
    fVar19 = fVar28 + fVar25 * fVar15;
    fVar35 = *(float *)(param_1 + 0x18);
    bVar3 = false;
    bVar7 = false;
    bVar9 = false;
    if (0.0 <= fVar19) {
      bVar3 = false;
      bVar7 = false;
      bVar9 = true;
      if (!NAN(fVar19) && !NAN(fVar35)) {
        bVar3 = fVar19 < fVar35;
        bVar7 = fVar19 == fVar35;
        bVar9 = false;
      }
    }
    if (bVar7 || bVar3 != bVar9) {
LAB_006ee414:
      bVar5 = true;
      fVar12 = *(float *)(param_1 + 8) + fVar29 + fVar27 * fVar15;
      fVar33 = fVar28 + fVar25 * fVar15 + *(float *)(param_1 + 0xc);
      fVar30 = fVar32 + fVar23 * fVar15 + *(float *)(param_1 + 0x10);
      fVar26 = fVar12 - *(float *)(param_1 + 8);
      fVar34 = fVar30 - *(float *)(param_1 + 0x10);
      fVar15 = SQRT(fVar26 * fVar26 + 0.0 + fVar34 * fVar34);
      bVar3 = false;
      bVar7 = true;
      if (-1.1920929e-07 <= fVar15) {
        bVar3 = false;
        bVar7 = true;
        if (!NAN(fVar15)) {
          bVar3 = fVar15 == 1.1920929e-07;
          bVar7 = 1.1920929e-07 <= fVar15;
        }
      }
      if (!bVar7 || bVar3) {
        fVar26 = 1.0;
        goto LAB_006ee4a0;
      }
      fVar15 = 1.0 / fVar15;
      fVar26 = fVar26 * fVar15;
      fVar36 = fVar15 * 0.0;
      fVar34 = fVar34 * fVar15;
    }
    else {
LAB_006ee3c4:
      fVar12 = 0.0;
      fVar33 = 0.0;
      fVar30 = 0.0;
      fVar26 = 0.0;
LAB_006ee4a0:
      fVar36 = 0.0;
      fVar34 = 0.0;
    }
    bVar3 = false;
    fVar23 = 0.0;
    fVar28 = 0.0;
    fVar15 = 0.0;
    fVar35 = 0.0;
LAB_006ee4b0:
    fVar25 = 0.0;
    fVar31 = 0.0;
  }
  else {
    fVar34 = fVar15 * fVar34 * -4.0 + fVar35 * fVar35;
    if (fVar34 < 0.0) {
      return false;
    }
    fVar12 = SQRT(fVar34);
    if (NAN(fVar12)) {
      fVar12 = sqrtf(fVar34);
    }
    fVar15 = (fVar12 - fVar35) / fVar19;
    if (fVar34 <= 0.0) goto LAB_006ee2fc;
    bVar9 = fVar15 < 0.0;
    fVar19 = (-fVar35 - fVar12) / fVar19;
    fVar35 = 1.0;
    bVar3 = 1.0 < fVar15;
    bVar7 = 1.0 < fVar19 || fVar19 < 0.0;
    if ((bVar3 || bVar9) && (bVar7)) {
      return false;
    }
    if (!bVar3 && !bVar9) {
      fVar34 = fVar28 + fVar25 * fVar15;
      fVar12 = *(float *)(param_1 + 0x18);
      bVar2 = false;
      bVar4 = false;
      bVar8 = false;
      if (0.0 <= fVar34) {
        bVar2 = false;
        bVar4 = false;
        bVar8 = true;
        if (!NAN(fVar34) && !NAN(fVar12)) {
          bVar2 = fVar34 < fVar12;
          bVar4 = fVar34 == fVar12;
          bVar8 = false;
        }
      }
      if (bVar4 || bVar2 != bVar8) goto LAB_006ee3f4;
      if (bVar7) goto LAB_006ee3c4;
      fVar15 = fVar28 + fVar25 * fVar19;
      bVar3 = false;
      bVar7 = false;
      bVar9 = false;
      if (0.0 <= fVar15) {
        bVar3 = false;
        bVar7 = false;
        bVar9 = true;
        if (!NAN(fVar15) && !NAN(fVar12)) {
          bVar3 = fVar15 < fVar12;
          bVar7 = fVar15 == fVar12;
          bVar9 = false;
        }
      }
      if (!bVar7 && bVar3 == bVar9) goto LAB_006ee3c4;
LAB_006ee6b4:
      bVar3 = true;
      fVar15 = fVar29 + fVar27 * fVar19 + *(float *)(param_1 + 8);
      fVar28 = fVar28 + fVar25 * fVar19 + *(float *)(param_1 + 0xc);
      fVar23 = fVar32 + fVar23 * fVar19 + *(float *)(param_1 + 0x10);
      fVar25 = fVar15 - *(float *)(param_1 + 8);
      fVar31 = fVar23 - *(float *)(param_1 + 0x10);
      fVar12 = 0.0;
      fVar27 = SQRT(fVar25 * fVar25 + 0.0 + fVar31 * fVar31);
      bVar7 = false;
      bVar9 = true;
      if (-1.1920929e-07 <= fVar27) {
        bVar7 = false;
        bVar9 = true;
        if (!NAN(fVar27)) {
          bVar7 = fVar27 == 1.1920929e-07;
          bVar9 = 1.1920929e-07 <= fVar27;
        }
      }
      if (bVar9 && !bVar7) {
        fVar27 = 1.0 / fVar27;
        fVar26 = 0.0;
        fVar36 = 0.0;
        fVar34 = 0.0;
        fVar35 = fVar25 * fVar27;
        fVar25 = fVar27 * 0.0;
        fVar31 = fVar31 * fVar27;
        fVar33 = 0.0;
        fVar30 = 0.0;
        goto LAB_006ee4b4;
      }
      fVar33 = 0.0;
      fVar30 = 0.0;
      fVar26 = 0.0;
      fVar36 = 0.0;
      fVar34 = 0.0;
      goto LAB_006ee4b0;
    }
LAB_006ee3f4:
    if (bVar7) {
LAB_006ee40c:
      if (!bVar3 && !bVar9) goto LAB_006ee414;
      goto LAB_006ee3c4;
    }
    fVar12 = fVar28 + fVar25 * fVar19;
    fVar34 = *(float *)(param_1 + 0x18);
    bVar7 = false;
    bVar2 = false;
    bVar4 = false;
    if (0.0 <= fVar12) {
      bVar7 = false;
      bVar2 = false;
      bVar4 = true;
      if (!NAN(fVar12) && !NAN(fVar34)) {
        bVar7 = fVar12 < fVar34;
        bVar2 = fVar12 == fVar34;
        bVar4 = false;
      }
    }
    if (!bVar2 && bVar7 == bVar4) goto LAB_006ee40c;
    if (bVar3 || bVar9) goto LAB_006ee6b4;
    fVar37 = *(float *)(param_1 + 8);
    fVar36 = 0.0;
    fVar31 = *(float *)(param_1 + 0x10);
    fVar34 = 0.0;
    fVar28 = fVar28 + *(float *)(param_1 + 0xc);
    fVar12 = fVar27 * fVar15 + fVar29 + fVar37;
    fVar30 = fVar23 * fVar15 + fVar32 + fVar31;
    fVar20 = fVar12 - fVar37;
    fVar33 = fVar30 - fVar31;
    fVar21 = SQRT(fVar20 * fVar20 + 0.0 + fVar33 * fVar33);
    fVar35 = 1.0;
    bVar5 = false;
    bVar3 = true;
    if (-1.1920929e-07 <= fVar21) {
      bVar5 = false;
      bVar3 = true;
      if (!NAN(fVar21)) {
        bVar5 = fVar21 == 1.1920929e-07;
        bVar3 = 1.1920929e-07 <= fVar21;
      }
    }
    fVar26 = 1.0;
    if (bVar3 && !bVar5) {
      fVar21 = 1.0 / fVar21;
      fVar26 = fVar20 * fVar21;
      fVar36 = fVar21 * 0.0;
      fVar34 = fVar33 * fVar21;
    }
    bVar3 = true;
    bVar5 = true;
    fVar33 = fVar25 * fVar15 + fVar28;
    fVar15 = fVar27 * fVar19 + fVar29 + fVar37;
    fVar23 = fVar23 * fVar19 + fVar32 + fVar31;
    fVar28 = fVar25 * fVar19 + fVar28;
    fVar37 = fVar15 - fVar37;
    fVar31 = fVar23 - fVar31;
    fVar27 = SQRT(fVar37 * fVar37 + 0.0 + fVar31 * fVar31);
    bVar7 = false;
    bVar9 = true;
    if (-1.1920929e-07 <= fVar27) {
      bVar7 = false;
      bVar9 = true;
      if (!NAN(fVar27)) {
        bVar7 = fVar27 == 1.1920929e-07;
        bVar9 = 1.1920929e-07 <= fVar27;
      }
    }
    if (!bVar9 || bVar7) goto LAB_006ee4b0;
    fVar27 = 1.0 / fVar27;
    fVar35 = fVar37 * fVar27;
    fVar25 = fVar27 * 0.0;
    fVar31 = fVar31 * fVar27;
  }
LAB_006ee4b4:
  fVar27 = *(float *)(param_2 + 8);
  fVar29 = *(float *)(param_2 + 0xc);
  fVar32 = *(float *)(param_2 + 0x10);
  if (bVar1) {
    if (bVar6) {
      iVar10 = 2;
      if (SQRT((fVar16 - fVar29) * (fVar16 - fVar29) + (fVar14 - fVar27) * (fVar14 - fVar27) +
               (fVar13 - fVar32) * (fVar13 - fVar32)) <=
          SQRT((fVar18 - fVar29) * (fVar18 - fVar29) + (fVar22 - fVar27) * (fVar22 - fVar27) +
               (fVar24 - fVar32) * (fVar24 - fVar32))) {
        fVar24 = fVar13;
        fVar22 = fVar14;
        fVar18 = fVar16;
        fVar11 = fVar17;
      }
    }
    else {
      iVar10 = 1;
      fVar24 = fVar13;
      fVar22 = fVar14;
      fVar18 = fVar16;
      fVar11 = fVar17;
    }
  }
  else if (bVar6) {
    iVar10 = 1;
  }
  else {
    iVar10 = 0;
    fVar24 = 0.0;
    fVar22 = 0.0;
    fVar18 = 0.0;
    fVar11 = 0.0;
  }
  if (!bVar5) {
    fVar13 = 0.0;
    fVar14 = 0.0;
    goto joined_r0x006ee5e0;
  }
  if (iVar10 == 0) {
LAB_006ee530:
    fVar22 = fVar12;
    fVar18 = fVar33;
    fVar24 = fVar30;
    fVar13 = fVar34;
    fVar11 = fVar36;
    fVar14 = fVar26;
  }
  else {
    fVar13 = 0.0;
    if (iVar10 == 1) {
      fVar14 = 0.0;
      if (SQRT((fVar33 - fVar29) * (fVar33 - fVar29) + (fVar12 - fVar27) * (fVar12 - fVar27) +
               (fVar30 - fVar32) * (fVar30 - fVar32)) <
          SQRT((fVar18 - fVar29) * (fVar18 - fVar29) + (fVar22 - fVar27) * (fVar22 - fVar27) +
               (fVar24 - fVar32) * (fVar24 - fVar32))) goto LAB_006ee530;
    }
    else {
      fVar14 = 0.0;
    }
  }
  iVar10 = iVar10 + 1;
joined_r0x006ee5e0:
  if (bVar3) {
    if ((iVar10 == 0) ||
       ((iVar10 == 1 &&
        (SQRT((fVar28 - fVar29) * (fVar28 - fVar29) + (fVar15 - fVar27) * (fVar15 - fVar27) +
              (fVar23 - fVar32) * (fVar23 - fVar32)) <
         SQRT((fVar18 - fVar29) * (fVar18 - fVar29) + (fVar22 - fVar27) * (fVar22 - fVar27) +
              (fVar24 - fVar32) * (fVar24 - fVar32)))))) {
      iVar10 = 1;
      fVar22 = fVar15;
      fVar18 = fVar28;
      fVar24 = fVar23;
      fVar13 = fVar31;
      fVar11 = fVar25;
      fVar14 = fVar35;
    }
    else {
      iVar10 = 1;
    }
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar22;
    param_3[1] = fVar18;
    param_3[2] = fVar24;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar14;
    param_4[1] = fVar11;
    param_4[2] = fVar13;
  }
  return iVar10 != 0;
}

