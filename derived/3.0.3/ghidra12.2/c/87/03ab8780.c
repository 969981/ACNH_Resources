
void FUN_03ab8780(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_18c [21];
  float local_138 [38];
  
  uVar2 = *(uint *)(param_1 + 0x7c8);
  local_18c[0] = 0.0;
  uVar4 = uVar2;
  if (8 < (int)uVar2) {
    uVar4 = 9;
  }
  *(uint *)(param_1 + 0x7c8) = uVar4;
  if (0 < (int)uVar2) {
    uVar1 = uVar4;
    if ((int)uVar4 < 2) {
      uVar1 = 1;
    }
    memset(local_18c + 1,0,(ulong)uVar1 << 3);
    uVar13 = 0;
    pfVar9 = local_138 + 3;
    do {
      fVar21 = (1.0 / ((float)(int)uVar4 + 1.0)) * ((float)(int)uVar13 + 1.2);
      fVar20 = ((float)(int)uVar13 * 3.1415927) / (float)(int)uVar4 + 0.1;
      fVar14 = cosf(fVar20);
      fVar20 = sinf(fVar20);
      uVar13 = uVar13 + 1;
      pfVar9[-3] = fVar14 * fVar21;
      pfVar9[-2] = fVar20 * fVar21;
      pfVar9[-1] = -(fVar14 * fVar21);
      *pfVar9 = -(fVar20 * fVar21);
      pfVar9 = pfVar9 + 4;
    } while (uVar1 != uVar13);
  }
  uVar1 = uVar4 << 1 | 1;
  if ((int)param_2 < 1) {
    fVar14 = 0.0;
  }
  else {
    uVar3 = param_2 >> 1;
    fVar20 = (float)uVar3;
    uVar5 = 0;
    fVar14 = 2.0 / (float)(int)param_2;
    fVar21 = (fVar14 + fVar14) / (float)(int)param_2;
    if ((int)uVar1 < 2) {
      fVar17 = 0.0;
      fVar14 = 0.0;
      do {
        uVar6 = 0;
        fVar15 = (float)(int)(uVar5 - uVar3) / fVar20;
        do {
          fVar16 = (float)(int)(uVar6 - uVar3) / fVar20;
          fVar16 = fVar15 * fVar15 + fVar16 * fVar16;
          if (fVar16 <= 1.0) {
            fVar16 = 1.0 - fVar16;
            fVar19 = SQRT(fVar16);
            if (NAN(fVar19)) {
              fVar19 = sqrtf(fVar16);
            }
            fVar16 = fVar21 * (fVar19 + fVar19);
            fVar17 = fVar17 + fVar16;
            fVar14 = fVar14 + fVar16;
          }
          uVar6 = uVar6 + 1;
        } while (param_2 != uVar6);
        uVar5 = uVar5 + 1;
      } while (uVar5 != param_2);
      local_18c[0] = fVar17;
    }
    else {
      fVar14 = 0.0;
      do {
        uVar6 = 0;
        fVar17 = (float)(int)(uVar5 - uVar3) / fVar20;
        do {
          fVar16 = (float)(int)(uVar6 - uVar3) / fVar20;
          fVar15 = fVar17 * fVar17 + fVar16 * fVar16;
          if (fVar15 <= 1.0) {
            uVar8 = 0;
            uVar13 = 1;
            pfVar9 = local_138 + 3;
            fVar19 = fVar15;
            do {
              fVar18 = (fVar17 - pfVar9[-2]) * (fVar17 - pfVar9[-2]) +
                       (fVar16 - pfVar9[-3]) * (fVar16 - pfVar9[-3]);
              uVar7 = (uint)uVar13;
              if (fVar19 <= fVar18) {
                uVar7 = (uint)uVar8;
                fVar18 = fVar19;
              }
              pfVar10 = pfVar9 + -1;
              fVar19 = *pfVar9;
              pfVar9 = pfVar9 + 4;
              fVar19 = (fVar17 - fVar19) * (fVar17 - fVar19) +
                       (fVar16 - *pfVar10) * (fVar16 - *pfVar10);
              if (fVar18 <= fVar19) {
                fVar19 = fVar18;
              }
              else {
                uVar7 = (uint)uVar13 + 1;
              }
              uVar8 = (ulong)uVar7;
              uVar13 = uVar13 + 2;
            } while (uVar13 != uVar1);
            fVar16 = SQRT(1.0 - fVar15);
            if (NAN(fVar16)) {
              fVar16 = sqrtf(1.0 - fVar15);
            }
            uVar13 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2;
            fVar15 = fVar21 * (fVar16 + fVar16);
            fVar14 = fVar14 + fVar15;
            *(float *)((long)local_18c + uVar13) = *(float *)((long)local_18c + uVar13) + fVar15;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_2);
        uVar5 = uVar5 + 1;
      } while (uVar5 != param_2);
    }
  }
  if (-1 < (int)uVar4) {
    if ((int)uVar1 < 2) {
      uVar8 = 0;
    }
    else {
      uVar13 = 0;
      do {
        uVar8 = uVar13 + 2;
        local_18c[uVar13] = local_18c[uVar13] / fVar14;
        local_18c[uVar13 + 1] = local_18c[uVar13 + 1] / fVar14;
        uVar13 = uVar8;
      } while (uVar4 << 1 != uVar8);
    }
    local_18c[uVar8] = local_18c[uVar8] / fVar14;
  }
  *(float *)(param_1 + 0x1e0) = local_18c[0];
  if (0 < (int)uVar2) {
    pfVar9 = local_138 + 1;
    if ((int)uVar4 < 2) {
      uVar4 = 1;
    }
    uVar13 = (ulong)uVar4;
    pfVar10 = (float *)(param_1 + 0x1f0);
    pfVar11 = (float *)(param_1 + 0x274);
    pfVar12 = local_18c + 1;
    do {
      fVar21 = pfVar9[-1];
      fVar17 = *pfVar9;
      fVar20 = 1.0 - (fVar17 * fVar17 + fVar21 * fVar21);
      fVar14 = SQRT(fVar20);
      if (NAN(fVar14)) {
        fVar14 = sqrtf(fVar20);
      }
      fVar20 = *pfVar12;
      pfVar10[-3] = fVar21;
      pfVar10[-2] = fVar17;
      uVar13 = uVar13 - 1;
      pfVar9 = pfVar9 + 4;
      pfVar10[-1] = fVar14 + fVar14;
      *pfVar10 = fVar20;
      pfVar10 = pfVar10 + 4;
      *pfVar11 = fVar14 + fVar14;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 2;
    } while (uVar13 != 0);
  }
  return;
}

