
void FUN_03b82b98(long param_1,int *param_2,int *param_3)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [12];
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (*(char *)(param_1 + 9) != '\0') {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  uVar11 = *(uint *)(param_1 + 0x38);
  fVar17 = *(float *)(param_1 + 0x50) *
           (*(float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x48) >> 0x14) & 0xff0)) +
           *(float *)((long)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x48) >> 0x14) & 0xff0)
                            ) + 4) * (float)(*(uint *)(param_1 + 0x48) & 0xffffff) * 5.9604645e-08);
  fVar13 = (float)(int)uVar11;
  fVar14 = *(float *)(param_1 + 0x44) - fVar17;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (fVar13 <= fVar14) {
      fVar14 = fVar14 - fVar13;
    }
    else if (fVar14 < 0.0) {
      fVar17 = fVar14 + fVar13;
      fVar14 = fVar17 - fVar13;
      bVar4 = true;
      bVar5 = false;
      if (fVar14 <= 0.005) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar14)) {
          bVar4 = fVar14 < -0.005;
          bVar5 = false;
        }
      }
      fVar14 = fVar17 + -0.005;
      if (bVar4 != bVar5) {
        fVar14 = fVar17;
      }
    }
    uVar8 = (uint)fVar14;
    uVar6 = (uint)((fVar14 - (float)(int)fVar14) * 128.0);
    lVar7 = *(long *)(param_1 + 0x30);
    pfVar9 = (float *)(param_1 + 0x54) + (ulong)uVar6 * 4;
    if (0x7f < uVar6) {
      pfVar9 = (float *)(param_1 + 0x54);
    }
    fVar14 = *pfVar9;
    fVar15 = pfVar9[1];
    fVar21 = pfVar9[2];
    fVar19 = pfVar9[3];
    pfVar9 = (float *)(lVar7 + (long)(int)uVar8 * 0x10);
    uVar6 = uVar11;
    if (0 < (int)uVar8) {
      uVar6 = uVar8;
    }
    fVar17 = *pfVar9;
    auVar16._0_4_ = pfVar9[2];
    pfVar9 = (float *)(lVar7 + ((long)(int)uVar6 + -1) * 0x10);
    uVar8 = uVar11;
    if (1 < (int)uVar6) {
      uVar8 = (uint)((long)(int)uVar6 + -1);
    }
    pfVar2 = (float *)(lVar7 + ((long)(int)uVar8 + -1) * 0x10);
    fVar25 = *pfVar9;
    if (1 < (int)uVar8) {
      uVar11 = (uint)((long)(int)uVar8 + -1);
    }
    auVar16._4_4_ = pfVar9[2];
    lVar1 = lVar7 + (long)(int)uVar11 * 0x10;
    pfVar9 = (float *)(lVar1 + -0x10);
    fVar26 = *pfVar2;
    auVar16._8_4_ = pfVar2[2];
    fVar20 = fVar14;
    fVar22 = fVar15;
    fVar23 = fVar21;
    fVar24 = fVar19;
  }
  else {
    if (fVar13 <= fVar14) {
      fVar14 = fVar14 - fVar13;
    }
    else if (fVar14 < 0.0) {
      fVar15 = fVar14 + fVar13;
      fVar14 = fVar15 - fVar13;
      bVar4 = true;
      bVar5 = false;
      if (fVar14 <= 0.005) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar14)) {
          bVar4 = fVar14 < -0.005;
          bVar5 = false;
        }
      }
      fVar14 = fVar15 + -0.005;
      if (bVar4 != bVar5) {
        fVar14 = fVar15;
      }
    }
    uVar8 = (uint)fVar14;
    uVar6 = (uint)((fVar14 - (float)(int)fVar14) * 128.0);
    fVar17 = *(float *)(param_1 + 0x44) + fVar17;
    if (fVar13 <= fVar17) {
      fVar17 = fVar17 - fVar13;
    }
    else if (fVar17 < 0.0) {
      fVar14 = fVar17 + fVar13;
      fVar17 = fVar14 - fVar13;
      bVar4 = true;
      bVar5 = false;
      if (fVar17 <= 0.005) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar17)) {
          bVar4 = fVar17 < -0.005;
          bVar5 = false;
        }
      }
      fVar17 = fVar14 + -0.005;
      if (bVar4 != bVar5) {
        fVar17 = fVar14;
      }
    }
    uVar10 = (uint)fVar17;
    pfVar9 = (float *)(param_1 + 0x54);
    pfVar2 = pfVar9 + (ulong)uVar6 * 4;
    if (0x7f < uVar6) {
      pfVar2 = pfVar9;
    }
    fVar14 = *pfVar2;
    fVar15 = pfVar2[1];
    fVar21 = pfVar2[2];
    fVar19 = pfVar2[3];
    uVar6 = (uint)((fVar17 - (float)(int)fVar17) * 128.0);
    pfVar2 = pfVar9 + (ulong)uVar6 * 4;
    if (0x7f < uVar6) {
      pfVar2 = pfVar9;
    }
    lVar7 = *(long *)(param_1 + 0x30);
    uVar6 = uVar11;
    if (0 < (int)uVar8) {
      uVar6 = uVar8;
    }
    fVar17 = *(float *)(lVar7 + (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4));
    uVar8 = uVar11;
    if (0 < (int)uVar10) {
      uVar8 = uVar10;
    }
    auVar16._0_4_ = *(float *)(lVar7 + (long)(int)uVar10 * 0x10 + 8);
    uVar10 = uVar11;
    if (1 < (int)uVar6) {
      uVar10 = uVar6 - 1;
    }
    uVar12 = uVar11;
    if (1 < (int)uVar8) {
      uVar12 = (uint)((long)(int)uVar8 + -1);
    }
    fVar25 = *(float *)(lVar7 + (long)(int)(uVar6 - 1) * 0x10);
    uVar6 = uVar11;
    if (1 < (int)uVar10) {
      uVar6 = uVar10 - 1;
    }
    auVar16._4_4_ = *(float *)(lVar7 + ((long)(int)uVar8 + -1) * 0x10 + 8);
    pfVar9 = (float *)(lVar7 + (long)(int)(uVar6 - 1) * 0x10);
    if (1 < (int)uVar12) {
      uVar11 = (uint)((long)(int)uVar12 + -1);
    }
    lVar1 = lVar7 + (long)(int)uVar11 * 0x10;
    fVar26 = *(float *)(lVar7 + (long)(int)(uVar10 - 1) * 0x10);
    auVar16._8_4_ = *(float *)(lVar7 + ((long)(int)uVar12 + -1) * 0x10 + 8);
    fVar20 = *pfVar2;
    fVar22 = pfVar2[1];
    fVar23 = pfVar2[2];
    fVar24 = pfVar2[3];
  }
  fVar14 = fVar14 * fVar17 + fVar15 * fVar25 + fVar21 * fVar26 + fVar19 * *pfVar9;
  fVar17 = fVar20 * auVar16._0_4_ + fVar22 * auVar16._4_4_ +
           fVar23 * auVar16._8_4_ + fVar24 * *(float *)(lVar1 + -8);
  uVar18 = NEON_scvtf(CONCAT44((int)(float)*param_3,(int)(float)*param_2),4);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar21 = (float)*(undefined8 *)(param_1 + 0x24);
  *(float *)(lVar7 + (long)*(int *)(param_1 + 0x40) * 0x10) =
       fVar17 * fVar21 + (float)uVar18 + fVar14 * fVar15;
  *(float *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x40) * 0x10 + 8) =
       fVar14 * fVar21 + (float)((ulong)uVar18 >> 0x20) + fVar17 * fVar15;
  fVar15 = (float)*(undefined8 *)(param_1 + 0x28);
  *param_2 = (int)(fVar14 * fVar15);
  *param_3 = (int)(fVar17 * fVar15);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c);
  fVar14 = *(float *)(param_1 + 0x44) + 1.0;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x40) + 1 < *(int *)(param_1 + 0x38)) {
    iVar3 = *(int *)(param_1 + 0x40) + 1;
  }
  *(int *)(param_1 + 0x40) = iVar3;
  fVar17 = 0.0;
  if (fVar13 <= fVar14) {
    fVar17 = fVar13;
  }
  *(float *)(param_1 + 0x44) = fVar14 - fVar17;
  return;
}

