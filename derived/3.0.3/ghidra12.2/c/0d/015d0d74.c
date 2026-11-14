
float FUN_015d0d74(undefined8 *param_1,uint *param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar16 = *(long *)(param_2 + 2);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = *(uint *)param_1[1];
  uVar5 = *(uint *)*param_1;
  lVar14 = (long)(int)(uVar2 * uVar4 + uVar5);
  if (uVar3 <= uVar4 || uVar2 <= uVar5) {
    lVar14 = 0;
  }
  lVar15 = lVar16 + lVar14 * 0x3c;
  if (*(char *)(lVar15 + 0x20) == '\0') {
    return 0.0;
  }
  cVar6 = *(char *)param_1[2];
  lVar19 = lVar16 + lVar14 * 0x3c;
  bVar7 = cVar6 != '\0';
  bVar8 = *(char *)param_1[3] != '\0';
  if (cVar6 == '\0' || *(char *)param_1[3] == '\0') {
    if (cVar6 == '\0') {
      pfVar11 = (float *)(lVar19 + 0x34);
      pfVar12 = (float *)(lVar19 + 0x38);
    }
    else {
      pfVar11 = (float *)(lVar19 + 0x2c);
      pfVar12 = (float *)(lVar19 + 0x30);
    }
  }
  else {
    pfVar11 = (float *)(lVar19 + 0x24);
    pfVar12 = (float *)(lVar19 + 0x28);
  }
  fVar22 = *(float *)param_1[4];
  if (0.0 <= fVar22) {
    uVar18 = uVar2 - 1;
    if ((int)(uVar5 + 1) < (int)uVar18) {
      uVar18 = uVar5 + 1;
    }
  }
  else {
    uVar18 = uVar5;
    if ((int)uVar5 < 2) {
      uVar18 = 1;
    }
    uVar18 = uVar18 - 1;
  }
  fVar21 = *pfVar11;
  lVar17 = lVar16 + (long)(int)(uVar2 * uVar4 + uVar18) * 0x3c;
  fVar20 = *pfVar12;
  lVar19 = lVar17;
  if (uVar2 <= uVar18 || uVar3 <= uVar4) {
    lVar19 = 0;
  }
  if (*(char *)(lVar19 + 0x20) == '\0' || lVar19 == lVar15) {
    lVar17 = lVar15;
  }
  else {
    if (bVar7 && bVar8) {
      pfVar11 = (float *)(lVar19 + 0x24);
      pfVar12 = (float *)(lVar19 + 0x28);
    }
    else if (cVar6 == '\0') {
      pfVar11 = (float *)(lVar19 + 0x34);
      pfVar12 = (float *)(lVar19 + 0x38);
    }
    else {
      pfVar11 = (float *)(lVar19 + 0x2c);
      pfVar12 = (float *)(lVar19 + 0x30);
    }
    fVar20 = fVar20 + *pfVar12;
    fVar21 = fVar21 + *pfVar11;
  }
  fVar23 = ((float *)param_1[4])[2];
  if (0.0 <= fVar23) {
    uVar10 = uVar3 - 1;
    if ((int)(uVar4 + 1) < (int)uVar10) {
      uVar10 = uVar4 + 1;
    }
  }
  else {
    uVar10 = uVar4;
    if ((int)uVar4 < 2) {
      uVar10 = 1;
    }
    uVar10 = uVar10 - 1;
  }
  lVar13 = lVar16 + (long)(int)(uVar10 * uVar2 + uVar5) * 0x3c;
  lVar19 = lVar13;
  if (uVar3 <= uVar10 || uVar2 <= uVar5) {
    lVar19 = 0;
  }
  if ((*(char *)(lVar19 + 0x20) != '\0') && (lVar19 != lVar15)) {
    pfVar12 = (float *)(lVar19 + 0x38);
    pfVar11 = (float *)(lVar19 + 0x34);
    if (cVar6 != '\0') {
      pfVar12 = (float *)(lVar19 + 0x30);
      pfVar11 = (float *)(lVar19 + 0x2c);
    }
    if (bVar7 && bVar8) {
      pfVar11 = (float *)(lVar19 + 0x24);
    }
    fVar21 = fVar21 + *pfVar11;
    if (bVar7 && bVar8) {
      pfVar12 = (float *)(lVar19 + 0x28);
    }
    fVar20 = fVar20 + *pfVar12;
    lVar15 = lVar13;
  }
  if ((uVar18 != uVar5) && (uVar10 != uVar4)) {
    lVar19 = lVar16 + (long)(int)(uVar10 * uVar2 + uVar18) * 0x3c;
    if (uVar3 <= uVar10 || uVar2 <= uVar18) {
      lVar19 = 0;
    }
    if (*(char *)(lVar19 + 0x20) != '\0') {
      pfVar12 = (float *)(lVar19 + 0x38);
      pfVar11 = (float *)(lVar19 + 0x34);
      if (cVar6 != '\0') {
        pfVar12 = (float *)(lVar19 + 0x30);
        pfVar11 = (float *)(lVar19 + 0x2c);
      }
      if (bVar7 && bVar8) {
        pfVar11 = (float *)(lVar19 + 0x24);
      }
      fVar21 = fVar21 + *pfVar11;
      if (bVar7 && bVar8) {
        pfVar12 = (float *)(lVar19 + 0x28);
      }
      fVar20 = fVar20 + *pfVar12;
    }
  }
  if (((fVar21 != 0.0) || (fVar20 != 0.0)) &&
     (fVar20 = SQRT(fVar20 * fVar20 + fVar21 * fVar21), 0.0 < fVar20)) {
    fVar21 = fVar21 * (1.0 / fVar20);
  }
  fVar20 = -fVar22;
  if (0.0 <= fVar22) {
    fVar20 = fVar22;
  }
  fVar22 = -fVar23;
  if (0.0 <= fVar23) {
    fVar22 = fVar23;
  }
  pfVar11 = (float *)(lVar17 + 0x2c);
  pfVar12 = (float *)(lVar16 + lVar14 * 0x3c + 0x2c);
  if (cVar6 == '\0') {
    pfVar11 = (float *)(lVar17 + 0x34);
    pfVar12 = (float *)(lVar16 + lVar14 * 0x3c + 0x34);
  }
  pfVar1 = (float *)(lVar17 + 0x24);
  pfVar9 = (float *)(lVar16 + lVar14 * 0x3c + 0x24);
  if (!bVar7 || !bVar8) {
    pfVar1 = pfVar11;
    pfVar9 = pfVar12;
  }
  pfVar11 = (float *)(lVar15 + 0x34);
  if (cVar6 != '\0') {
    pfVar11 = (float *)(lVar15 + 0x2c);
  }
  if (bVar7 && bVar8) {
    pfVar11 = (float *)(lVar15 + 0x24);
  }
  fVar23 = *pfVar9 + fVar20 * (*pfVar1 - *pfVar9);
  return fVar23 + (fVar22 / (1.0 - fVar20)) *
                  ((*pfVar11 + (fVar20 + fVar20) * (fVar21 - *pfVar11)) - fVar23);
}

