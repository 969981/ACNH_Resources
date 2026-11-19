
void FUN_03b983d0(undefined8 param_1,uint param_2,int param_3,float *param_4,uint *param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar5 = (int)param_2 >> 2;
  uVar15 = (ulong)uVar5;
  uVar16 = *param_5;
  if ((int)(*param_5 * 4) < (int)param_2) {
    *param_5 = uVar5;
    param_5[1] = 1;
    if (0xb < (int)param_2) {
      uVar16 = uVar5 >> 1;
      *param_6 = 0x3f800000;
      fVar26 = 0.7853982 / (float)uVar16;
      fVar19 = cosf(fVar26 * (float)uVar16);
      *(float *)((long)param_6 + (ulong)uVar16 * 4) = fVar19;
      *(float *)((long)param_6 + (ulong)(uVar16 + 1) * 4) = fVar19;
      if (0x17 < param_2) {
        uVar17 = 2;
        pfVar9 = (float *)((long)param_6 + uVar15 * 4 + -4);
        pfVar10 = (float *)((long)param_6 + 0xc);
        do {
          fVar25 = fVar26 * (float)(int)uVar17;
          fVar19 = cosf(fVar25);
          fVar25 = sinf(fVar25);
          uVar17 = uVar17 + 2;
          pfVar10[-1] = fVar19;
          *pfVar10 = fVar25;
          pfVar9[-1] = fVar25;
          *pfVar9 = fVar19;
          pfVar9 = pfVar9 + -2;
          pfVar10 = pfVar10 + 2;
        } while (uVar17 < uVar16);
        FUN_03b989b0(uVar15,param_5 + 2,param_6);
      }
    }
    uVar16 = uVar5;
  }
  uVar2 = param_5[1];
  if (((int)(param_5[1] * 4) < (int)param_2) &&
     (param_5[1] = uVar5, uVar2 = uVar5, 7 < (int)param_2)) {
    uVar5 = uVar5 >> 1;
    pfVar9 = (float *)((long)param_6 + (long)(int)uVar16 * 4);
    fVar26 = 0.7853982 / (float)uVar5;
    fVar19 = cosf(fVar26 * (float)uVar5);
    *pfVar9 = fVar19;
    pfVar9[uVar5] = fVar19 * 0.5;
    if (0xf < param_2) {
      if (uVar5 < 3) {
        uVar5 = 2;
      }
      lVar18 = uVar15 * 4;
      uVar15 = 1;
      do {
        lVar18 = lVar18 + -4;
        fVar25 = fVar26 * (float)(int)uVar15;
        fVar19 = cosf(fVar25);
        pfVar9[uVar15] = fVar19 * 0.5;
        fVar19 = sinf(fVar25);
        uVar15 = uVar15 + 1;
        *(float *)((long)pfVar9 + lVar18) = fVar19 * 0.5;
      } while (uVar5 != uVar15);
    }
  }
  if (-1 < param_3) {
    if ((int)param_2 < 5) {
      if (param_2 == 4) {
        FUN_03b98cb0(4,param_4,param_6);
      }
    }
    else {
      FUN_03b989b0(param_2,param_5 + 2,param_4);
      FUN_03b98cb0(param_2,param_4,param_6);
      if (param_2 != 5) {
        uVar5 = param_2 >> 1;
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = (int)(uVar2 << 1) / (int)uVar5;
        }
        pfVar9 = (float *)((long)param_6 + (long)(int)uVar16 * 4);
        uVar15 = 2;
        uVar17 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
        pfVar10 = (float *)((long)param_6 +
                           (((long)(int)uVar16 * 4 + (long)(int)uVar2 * 4) - uVar17));
        pfVar6 = param_4 + ((ulong)param_2 - 1);
        pfVar12 = param_4 + 3;
        do {
          pfVar9 = (float *)((long)pfVar9 + uVar17);
          fVar19 = *pfVar10;
          uVar15 = uVar15 + 2;
          pfVar10 = (float *)((long)pfVar10 - uVar17);
          fVar25 = *pfVar12 + *pfVar6;
          fVar26 = pfVar12[-1] - pfVar6[-1];
          fVar23 = -(*pfVar9 * fVar25) + fVar26 * (0.5 - fVar19);
          fVar19 = *pfVar9 * fVar26 + fVar25 * (0.5 - fVar19);
          pfVar12[-1] = pfVar12[-1] - fVar23;
          *pfVar12 = *pfVar12 - fVar19;
          pfVar6[-1] = pfVar6[-1] + fVar23;
          *pfVar6 = *pfVar6 - fVar19;
          pfVar6 = pfVar6 + -2;
          pfVar12 = pfVar12 + 2;
        } while (uVar15 < uVar5);
      }
    }
    fVar19 = *param_4;
    *param_4 = fVar19 + param_4[1];
    param_4[1] = fVar19 - param_4[1];
    return;
  }
  fVar19 = (*param_4 - param_4[1]) * 0.5;
  *param_4 = *param_4 - fVar19;
  param_4[1] = fVar19;
  if ((int)param_2 < 5) {
    if (param_2 == 4) {
      FUN_03b98cb0(4,param_4,param_6);
      return;
    }
    return;
  }
  uVar5 = param_2 >> 1;
  param_4[1] = -fVar19;
  if (param_2 != 5) {
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = (int)(uVar2 << 1) / (int)uVar5;
    }
    pfVar9 = (float *)((long)param_6 + (long)(int)uVar16 * 4);
    uVar15 = 2;
    uVar17 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    pfVar10 = (float *)((long)param_6 + (((long)(int)uVar16 * 4 + (long)(int)uVar2 * 4) - uVar17));
    pfVar6 = param_4 + ((ulong)param_2 - 1);
    pfVar12 = param_4 + 3;
    do {
      pfVar9 = (float *)((long)pfVar9 + uVar17);
      fVar19 = *pfVar10;
      uVar15 = uVar15 + 2;
      pfVar10 = (float *)((long)pfVar10 - uVar17);
      fVar25 = *pfVar12 + *pfVar6;
      fVar26 = pfVar12[-1] - pfVar6[-1];
      fVar23 = *pfVar9 * fVar25 + fVar26 * (0.5 - fVar19);
      fVar19 = -(*pfVar9 * fVar26) + fVar25 * (0.5 - fVar19);
      pfVar12[-1] = pfVar12[-1] - fVar23;
      *pfVar12 = fVar19 - *pfVar12;
      pfVar6[-1] = pfVar6[-1] + fVar23;
      *pfVar6 = fVar19 - *pfVar6;
      pfVar6 = pfVar6 + -2;
      pfVar12 = pfVar12 + 2;
    } while (uVar15 < uVar5);
  }
  param_4[uVar5 + 1] = -param_4[uVar5 + 1];
  FUN_03b989b0(param_2,param_5 + 2,param_4);
  if ((int)param_2 < 9) {
    uVar15 = 2;
  }
  else {
    FUN_03b98ea0(param_2,param_4,param_6);
    if (param_2 < 0x21) {
      uVar15 = 8;
      uVar5 = 8;
      if (param_2 != 0x20) goto LAB_03b98938;
      goto LAB_03b9883c;
    }
    uVar17 = 8;
    uVar3 = 0x20;
    do {
      uVar15 = uVar3;
      FUN_03b99150(param_2,uVar17,param_4,param_6);
      uVar5 = (int)uVar15 * 4;
      uVar17 = uVar15;
      uVar3 = (ulong)uVar5;
    } while ((int)uVar5 < (int)param_2);
  }
  uVar5 = (uint)uVar15;
  if (param_2 != uVar5 * 4) {
LAB_03b98938:
    if ((int)uVar15 < 1) {
      return;
    }
    lVar18 = uVar15 << 0x20;
    uVar17 = 0;
    do {
      fVar25 = param_4[uVar15 + uVar17];
      pfVar9 = param_4 + uVar17;
      uVar4 = lVar18 >> 0x1e | 4;
      fVar23 = *(float *)((long)param_4 + uVar4);
      fVar19 = *pfVar9;
      fVar26 = pfVar9[1];
      uVar3 = uVar17 + 2;
      lVar18 = lVar18 + 0x200000000;
      *pfVar9 = fVar19 + fVar25;
      pfVar9[1] = -fVar26 - fVar23;
      param_4[uVar15 + uVar17] = fVar19 - fVar25;
      *(float *)((long)param_4 + uVar4) = fVar23 - fVar26;
      uVar17 = uVar3;
    } while (uVar3 < uVar15);
    return;
  }
LAB_03b9883c:
  if (0 < (int)uVar5) {
    uVar15 = (ulong)uVar5;
    uVar17 = (ulong)uVar5;
    lVar18 = uVar15 + (ulong)uVar5 * 2;
    lVar13 = 1;
    lVar7 = uVar17 << 0x20;
    lVar8 = uVar17 << 0x21;
    lVar11 = lVar18 << 0x20;
    pfVar9 = param_4;
    do {
      uVar14 = lVar7 >> 0x1e | 4;
      uVar3 = lVar8 >> 0x1e | 4;
      uVar4 = lVar11 >> 0x1e | 4;
      lVar7 = lVar7 + 0x200000000;
      fVar22 = *(float *)((long)param_4 + uVar14);
      lVar8 = lVar8 + 0x200000000;
      fVar23 = *(float *)((long)param_4 + uVar3);
      fVar27 = *pfVar9 + pfVar9[uVar15];
      fVar19 = *pfVar9 - pfVar9[uVar15];
      fVar24 = *(float *)((long)param_4 + uVar4);
      fVar25 = pfVar9[uVar17 * 2] + pfVar9[lVar18];
      fVar20 = pfVar9[uVar17 * 2] - pfVar9[lVar18];
      fVar26 = fVar22 - pfVar9[1];
      fVar21 = fVar23 + fVar24;
      fVar22 = -pfVar9[1] - fVar22;
      lVar11 = lVar11 + 0x200000000;
      pfVar9[uVar17 * 2] = fVar27 - fVar25;
      fVar23 = fVar23 - fVar24;
      *pfVar9 = fVar27 + fVar25;
      pfVar9[1] = fVar22 - fVar21;
      *(float *)((long)param_4 + uVar3) = fVar22 + fVar21;
      uVar3 = lVar13 + 1;
      lVar13 = lVar13 + 2;
      pfVar9[uVar15] = fVar19 - fVar23;
      *(float *)((long)param_4 + uVar14) = fVar26 - fVar20;
      pfVar9[lVar18] = fVar19 + fVar23;
      pfVar9 = pfVar9 + 2;
      *(float *)((long)param_4 + uVar4) = fVar26 + fVar20;
    } while (uVar3 < uVar15);
  }
  return;
}

