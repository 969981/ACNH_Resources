
undefined8 FUN_016f3040(long param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_ac;
  float local_a8 [6];
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 1.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 1.0;
  lVar7 = *(long *)(param_1 + 0xa0);
  if (lVar7 == 0) {
    return 0;
  }
  fVar15 = *(float *)(lVar7 + 0x2ef4);
  if (fVar15 != 0.0) {
    fVar19 = 0.0;
    uVar10 = 0;
    fVar16 = 0.0;
    param_2[6] = fVar15;
    local_a8[4] = 0.0;
    local_ac = 0.0;
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    local_a8[3] = 0.0;
    lVar11 = lVar7 + 0x2ef8;
    do {
      lVar2 = lVar11;
      if (0x3f < uVar10) {
        lVar2 = lVar7 + 0x2ef8;
      }
      fVar18 = *(float *)(lVar2 + 0x38);
      fVar17 = *(float *)(lVar2 + 0x40);
      fVar12 = SQRT(fVar18 * fVar18 + 0.0 + fVar17 * fVar17);
      if (fVar12 <= 0.0) {
        fVar20 = 0.0;
      }
      else {
        fVar12 = 1.0 / fVar12;
        fVar18 = fVar18 * fVar12;
        fVar17 = fVar17 * fVar12;
        fVar20 = fVar12 * 0.0;
        fVar12 = SQRT(fVar18 * fVar18 + 0.0 + fVar17 * fVar17);
      }
      fVar13 = fVar17;
      fVar14 = fVar18;
      if (0.0 < fVar12) {
        fVar14 = fVar18 * (1.0 / fVar12);
        fVar13 = fVar17 * (1.0 / fVar12);
      }
      if ((fVar14 == 0.0) && (fVar13 == 0.0)) {
        uVar6 = 0;
        puVar8 = *(uint **)(param_2 + 10);
        uVar5 = 0;
        if (puVar8 == (uint *)0x0) goto LAB_016f31b0;
LAB_016f3178:
        uVar6 = uVar5;
        uVar4 = *puVar8;
        uVar5 = uVar6 ^ 0x80000000;
        if (uVar5 - uVar4 == 0) goto LAB_016f31b0;
        uVar1 = uVar5 - uVar4;
        if (uVar5 <= uVar4) {
          uVar1 = uVar4 - uVar5;
        }
        uVar5 = -uVar1;
        if (uVar1 < 0x80000001) {
          uVar5 = uVar1;
        }
        if ((float)uVar5 * 8.381903e-08 <= 75.0) goto LAB_016f31b0;
      }
      else {
        uVar6 = FUN_006f0400(fVar18,fVar17);
        puVar8 = *(uint **)(param_2 + 10);
        uVar5 = uVar6;
        if (puVar8 != (uint *)0x0) goto LAB_016f3178;
LAB_016f31b0:
        fVar12 = param_2[8];
        if ((((((uint)fVar12 >> 1 & 1) == 0) || ((*(byte *)(lVar2 + 0x4c) >> 3 & 1) == 0)) &&
            ((((uint)fVar12 >> 2 & 1) == 0 || ((*(byte *)(lVar2 + 0x4d) & 1) == 0)))) &&
           (((((uint)fVar12 & 1) == 0 || ((*(uint *)(lVar2 + 0x4c) >> 6 & 1) != 0)) ||
            ((*(uint *)(lVar2 + 0x4c) & 0x84) == 0)))) {
          if (((((uint)fVar12 >> 3 & 1) != 0) && ((*(byte *)(lVar2 + 0x4e) >> 5 & 1) != 0)) &&
             (DAT_04c487d4 != -1)) {
            local_a8[5] = 4.48416e-44;
            puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar3 = PTR_DAT_04bc39f8;
            }
            if ((*(uint *)(puVar3 + 4) & 1) != 0) goto LAB_016f31e4;
          }
        }
        else {
LAB_016f31e4:
          if (local_a8[4] <= fVar18) {
            if (local_a8[1] < fVar18) {
              pfVar9 = local_a8 + 1;
              goto LAB_016f3270;
            }
          }
          else {
            pfVar9 = local_a8 + 4;
LAB_016f3270:
            *pfVar9 = fVar18;
          }
          if (local_a8[3] <= fVar20) {
            if (local_a8[0] < fVar20) {
              pfVar9 = local_a8;
              goto LAB_016f32a0;
            }
          }
          else {
            pfVar9 = local_a8 + 3;
LAB_016f32a0:
            *pfVar9 = fVar20;
          }
          if (local_a8[2] <= fVar17) {
            if (local_ac < fVar17) {
              pfVar9 = &local_ac;
              goto LAB_016f32d0;
            }
          }
          else {
            pfVar9 = local_a8 + 2;
LAB_016f32d0:
            *pfVar9 = fVar17;
          }
          fVar16 = (float)((int)fVar16 + 1);
          if (puVar8 != (uint *)0x0) {
            uVar5 = *puVar8;
            fVar12 = 0.0;
            if (uVar6 - uVar5 != 0) {
              uVar4 = uVar6 - uVar5;
              if (uVar6 <= uVar5) {
                uVar4 = uVar5 - uVar6;
              }
              uVar5 = -uVar4;
              if (uVar4 < 0x80000001) {
                uVar5 = uVar4;
              }
              fVar12 = (float)uVar5 * 8.381903e-08;
            }
            if (fVar19 < fVar12) {
              param_2[3] = fVar18;
              param_2[4] = fVar20;
              param_2[5] = fVar17;
              fVar19 = fVar12;
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x80;
    } while ((uint)fVar15 != uVar10);
    param_2[7] = fVar16;
    if (fVar16 != 0.0) {
      local_a8[4] = local_a8[4] + local_a8[1];
      local_a8[2] = local_a8[2] + local_ac;
      *param_2 = local_a8[4];
      param_2[1] = local_a8[3] + local_a8[0];
      param_2[2] = local_a8[2];
      if ((local_a8[4] != 0.0) || (local_a8[2] != 0.0)) {
        fVar15 = 0.0;
        param_2[1] = 0.0;
        fVar16 = SQRT(local_a8[4] * local_a8[4] + 0.0 + local_a8[2] * local_a8[2]);
        if (0.0 < fVar16) {
          fVar16 = 1.0 / fVar16;
          local_a8[4] = local_a8[4] * fVar16;
          fVar15 = fVar16 * 0.0;
          local_a8[2] = local_a8[2] * fVar16;
          *param_2 = local_a8[4];
          param_2[1] = fVar15;
          param_2[2] = local_a8[2];
        }
        if (puVar8 == (uint *)0x0) {
          param_2[3] = local_a8[4];
          param_2[4] = fVar15;
          param_2[5] = local_a8[2];
          return 1;
        }
        return 1;
      }
    }
  }
  return 0;
}

