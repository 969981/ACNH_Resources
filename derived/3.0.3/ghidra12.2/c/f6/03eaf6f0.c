
undefined8 FUN_03eaf6f0(long param_1,long param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  float fVar25;
  
  fVar15 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
  fVar11 = *(float *)(param_2 + 0x20);
  fVar10 = *(float *)(param_2 + 0x24);
  fVar12 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  fVar3 = *(float *)(param_2 + 0x14);
  fVar16 = *(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10);
  fVar5 = *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x1c);
  fVar14 = fVar15 * fVar5 + fVar12 * fVar3 + fVar16 * fVar4;
  fVar7 = *(float *)(param_2 + 0x28);
  fVar6 = *(float *)(param_2 + 0x2c);
  fVar13 = fVar15 * fVar10 + fVar12 * fVar11 + fVar16 * fVar7;
  fVar8 = *(float *)(param_2 + 0x30);
  fVar9 = *(float *)(param_2 + 0x34);
  fVar12 = fVar15 * fVar8 + fVar12 * fVar6 + fVar16 * fVar9;
  fVar15 = *(float *)(param_1 + 0x20);
  fVar18 = fVar15 * *(float *)(param_1 + 0x14);
  fVar19 = fVar15 * *(float *)(param_1 + 0x18);
  fVar15 = fVar15 * *(float *)(param_1 + 0x1c);
  fVar17 = fVar5 * fVar19 + fVar18 * fVar3 + fVar15 * fVar4;
  fVar20 = *(float *)(param_2 + 0x38);
  fVar16 = fVar10 * fVar19 + fVar18 * fVar11 + fVar15 * fVar7;
  fVar15 = fVar8 * fVar19 + fVar18 * fVar6 + fVar15 * fVar9;
  fVar18 = -fVar20;
  if (fVar18 < fVar14) {
    if (fVar14 < fVar20) {
      fVar19 = *(float *)(param_2 + 0x3c);
      fVar21 = -fVar19;
    }
    else {
      if (fVar20 <= fVar14 + fVar17) {
        return 0;
      }
      fVar22 = (fVar20 - fVar14) / fVar17;
      fVar23 = fVar13 + fVar16 * fVar22;
      fVar19 = *(float *)(param_2 + 0x3c);
      fVar21 = -fVar19;
      bVar1 = true;
      bVar2 = false;
      if (fVar23 <= fVar19) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar23) && !NAN(fVar21)) {
          bVar1 = fVar23 < fVar21;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        fVar24 = fVar12 + fVar15 * fVar22;
        fVar25 = -*(float *)(param_2 + 0x40);
        bVar1 = true;
        bVar2 = false;
        if (fVar24 <= *(float *)(param_2 + 0x40)) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar24) && !NAN(fVar25)) {
            bVar1 = fVar24 < fVar25;
            bVar2 = false;
          }
        }
        if (bVar1 == bVar2) {
          fVar22 = fVar14 + fVar17 * fVar22;
          fVar12 = fVar3;
          fVar13 = fVar5;
          fVar14 = fVar4;
          goto joined_r0x03eafa68;
        }
      }
    }
  }
  else {
    if (fVar14 + fVar17 <= fVar18) {
      return 0;
    }
    fVar22 = (fVar18 - fVar14) / fVar17;
    fVar23 = fVar13 + fVar16 * fVar22;
    fVar19 = *(float *)(param_2 + 0x3c);
    fVar21 = -fVar19;
    bVar1 = true;
    bVar2 = false;
    if (fVar23 <= fVar19) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar23) && !NAN(fVar21)) {
        bVar1 = fVar23 < fVar21;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      fVar24 = fVar12 + fVar15 * fVar22;
      fVar25 = -*(float *)(param_2 + 0x40);
      bVar1 = true;
      bVar2 = false;
      if (fVar24 <= *(float *)(param_2 + 0x40)) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar24) && !NAN(fVar25)) {
          bVar1 = fVar24 < fVar25;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        fVar22 = fVar14 + fVar17 * fVar22;
        fVar12 = -fVar3;
        fVar13 = -fVar5;
        fVar14 = -fVar4;
        goto joined_r0x03eafa68;
      }
    }
  }
  if (fVar21 < fVar13) {
    if (fVar19 <= fVar13) {
      if (fVar19 <= fVar13 + fVar16) {
        return 0;
      }
      fVar23 = (fVar19 - fVar13) / fVar16;
      fVar22 = fVar14 + fVar17 * fVar23;
      bVar1 = true;
      bVar2 = false;
      if (fVar22 <= fVar20) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar22) && !NAN(fVar18)) {
          bVar1 = fVar22 < fVar18;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        fVar24 = fVar12 + fVar15 * fVar23;
        fVar25 = -*(float *)(param_2 + 0x40);
        bVar1 = true;
        bVar2 = false;
        if (fVar24 <= *(float *)(param_2 + 0x40)) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar24) && !NAN(fVar25)) {
            bVar1 = fVar24 < fVar25;
            bVar2 = false;
          }
        }
        if (bVar1 == bVar2) {
          fVar23 = fVar13 + fVar16 * fVar23;
          fVar12 = fVar11;
          fVar13 = fVar10;
          fVar14 = fVar7;
          goto joined_r0x03eafa68;
        }
      }
    }
  }
  else {
    if (fVar13 + fVar16 <= fVar21) {
      return 0;
    }
    fVar23 = (fVar21 - fVar13) / fVar16;
    fVar22 = fVar14 + fVar17 * fVar23;
    bVar1 = true;
    bVar2 = false;
    if (fVar22 <= fVar20) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar22) && !NAN(fVar18)) {
        bVar1 = fVar22 < fVar18;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      fVar24 = fVar12 + fVar15 * fVar23;
      fVar25 = -*(float *)(param_2 + 0x40);
      bVar1 = true;
      bVar2 = false;
      if (fVar24 <= *(float *)(param_2 + 0x40)) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar24) && !NAN(fVar25)) {
          bVar1 = fVar24 < fVar25;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        fVar23 = fVar13 + fVar16 * fVar23;
        fVar12 = -fVar11;
        fVar13 = -fVar10;
        fVar14 = -fVar7;
        goto joined_r0x03eafa68;
      }
    }
  }
  fVar23 = *(float *)(param_2 + 0x40);
  fVar22 = -fVar23;
  if (fVar22 < fVar12) {
    if (fVar12 < fVar23) {
      return 0;
    }
    if (fVar23 <= fVar12 + fVar15) {
      return 0;
    }
    fVar24 = (fVar23 - fVar12) / fVar15;
    fVar22 = fVar14 + fVar17 * fVar24;
    bVar1 = true;
    bVar2 = false;
    if (fVar22 <= fVar20) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar22) && !NAN(fVar18)) {
        bVar1 = fVar22 < fVar18;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      return 0;
    }
    fVar23 = fVar13 + fVar16 * fVar24;
    bVar1 = true;
    bVar2 = false;
    if (fVar23 <= fVar19) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar23) && !NAN(fVar21)) {
        bVar1 = fVar23 < fVar21;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      return 0;
    }
    fVar24 = fVar12 + fVar15 * fVar24;
    fVar12 = fVar6;
    fVar13 = fVar8;
    fVar14 = fVar9;
  }
  else {
    if (fVar12 + fVar15 <= fVar22) {
      return 0;
    }
    fVar24 = (fVar22 - fVar12) / fVar15;
    fVar22 = fVar14 + fVar17 * fVar24;
    bVar1 = true;
    bVar2 = false;
    if (fVar22 <= fVar20) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar22) && !NAN(fVar18)) {
        bVar1 = fVar22 < fVar18;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      return 0;
    }
    fVar23 = fVar13 + fVar16 * fVar24;
    bVar1 = true;
    bVar2 = false;
    if (fVar23 <= fVar19) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar23) && !NAN(fVar21)) {
        bVar1 = fVar23 < fVar21;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      return 0;
    }
    fVar24 = fVar12 + fVar15 * fVar24;
    fVar12 = -fVar6;
    fVar13 = -fVar8;
    fVar14 = -fVar9;
  }
joined_r0x03eafa68:
  if (param_3 != (float *)0x0) {
    fVar3 = fVar11 * fVar23 + fVar22 * fVar3 + fVar24 * fVar6;
    fVar5 = fVar10 * fVar23 + fVar22 * fVar5 + fVar24 * fVar8;
    fVar4 = fVar7 * fVar23 + fVar22 * fVar4 + fVar24 * fVar9;
    param_3[4] = fVar3;
    param_3[5] = fVar5;
    param_3[6] = fVar4;
    param_3[4] = fVar3 + *(float *)(param_2 + 8);
    param_3[5] = fVar5 + *(float *)(param_2 + 0xc);
    fVar3 = *(float *)(param_2 + 0x10);
    *param_3 = fVar12;
    param_3[1] = fVar13;
    param_3[2] = fVar14;
    param_3[6] = fVar4 + fVar3;
  }
  return 1;
}

