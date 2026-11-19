
void FUN_03b82f28(long param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  if (*(char *)(param_1 + 9) != '\0') {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    return;
  }
  iVar14 = *(int *)(param_1 + 0x38);
  fVar20 = *(float *)(param_1 + 0x50) *
           (*(float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x48) >> 0x14) & 0xff0)) +
           *(float *)((long)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x48) >> 0x14) & 0xff0)
                            ) + 4) * (float)(*(uint *)(param_1 + 0x48) & 0xffffff) * 5.9604645e-08);
  fVar16 = (float)iVar14;
  fVar17 = *(float *)(param_1 + 0x44) - fVar20;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (fVar16 <= fVar17) {
      fVar17 = fVar17 - fVar16;
    }
    else if (fVar17 < 0.0) {
      fVar20 = fVar17 + fVar16;
      fVar17 = fVar20 - fVar16;
      bVar8 = true;
      bVar9 = false;
      if (fVar17 <= 0.005) {
        bVar8 = false;
        bVar9 = true;
        if (!NAN(fVar17)) {
          bVar8 = fVar17 < -0.005;
          bVar9 = false;
        }
      }
      fVar17 = fVar20 + -0.005;
      if (bVar8 != bVar9) {
        fVar17 = fVar20;
      }
    }
    iVar12 = (int)fVar17;
    uVar10 = (uint)((fVar17 - (float)(int)fVar17) * 128.0);
    pfVar3 = (float *)(param_1 + 0x54) + (ulong)uVar10 * 4;
    if (0x7f < uVar10) {
      pfVar3 = (float *)(param_1 + 0x54);
    }
    fVar17 = *pfVar3;
    fVar20 = pfVar3[1];
    fVar18 = pfVar3[2];
    fVar19 = pfVar3[3];
    lVar11 = *(long *)(param_1 + 0x30);
    pfVar3 = (float *)(lVar11 + (long)iVar12 * 0x10);
    iVar13 = iVar14;
    if (0 < iVar12) {
      iVar13 = iVar12;
    }
    fVar21 = *pfVar3;
    auVar25._0_4_ = pfVar3[1];
    fVar28 = pfVar3[2];
    auVar26._0_4_ = pfVar3[3];
    pfVar3 = (float *)(lVar11 + ((long)iVar13 + -1) * 0x10);
    iVar12 = iVar14;
    if (1 < iVar13) {
      iVar12 = (int)((long)iVar13 + -1);
    }
    pfVar7 = (float *)(lVar11 + ((long)iVar12 + -1) * 0x10);
    auVar26._4_4_ = pfVar3[3];
    if (1 < iVar12) {
      iVar14 = (int)((long)iVar12 + -1);
    }
    lVar2 = lVar11 + (long)iVar14 * 0x10;
    auVar26._8_4_ = pfVar7[3];
    fVar22 = *pfVar3;
    fVar23 = *pfVar7;
    fVar29 = pfVar3[2];
    fVar24 = *(float *)(lVar2 + -0x10);
    auVar25._4_4_ = pfVar3[1];
    fVar30 = pfVar7[2];
    auVar25._8_4_ = pfVar7[1];
    fVar31 = *(float *)(lVar2 + -8);
    lVar1 = lVar2;
    fVar32 = fVar17;
    fVar33 = fVar20;
    fVar34 = fVar18;
    fVar35 = fVar19;
  }
  else {
    if (fVar16 <= fVar17) {
      fVar17 = fVar17 - fVar16;
    }
    else if (fVar17 < 0.0) {
      fVar18 = fVar17 + fVar16;
      fVar17 = fVar18 - fVar16;
      bVar8 = true;
      bVar9 = false;
      if (fVar17 <= 0.005) {
        bVar8 = false;
        bVar9 = true;
        if (!NAN(fVar17)) {
          bVar8 = fVar17 < -0.005;
          bVar9 = false;
        }
      }
      fVar17 = fVar18 + -0.005;
      if (bVar8 != bVar9) {
        fVar17 = fVar18;
      }
    }
    iVar12 = (int)fVar17;
    uVar10 = (uint)((fVar17 - (float)(int)fVar17) * 128.0);
    fVar20 = *(float *)(param_1 + 0x44) + fVar20;
    if (fVar16 <= fVar20) {
      fVar20 = fVar20 - fVar16;
    }
    else if (fVar20 < 0.0) {
      fVar17 = fVar20 + fVar16;
      fVar20 = fVar17 - fVar16;
      bVar8 = true;
      bVar9 = false;
      if (fVar20 <= 0.005) {
        bVar8 = false;
        bVar9 = true;
        if (!NAN(fVar20)) {
          bVar8 = fVar20 < -0.005;
          bVar9 = false;
        }
      }
      fVar20 = fVar17 + -0.005;
      if (bVar8 != bVar9) {
        fVar20 = fVar17;
      }
    }
    iVar13 = (int)fVar20;
    pfVar3 = (float *)(param_1 + 0x54);
    pfVar7 = pfVar3 + (ulong)uVar10 * 4;
    if (0x7f < uVar10) {
      pfVar7 = pfVar3;
    }
    uVar10 = (uint)((fVar20 - (float)(int)fVar20) * 128.0);
    fVar17 = *pfVar7;
    fVar20 = pfVar7[1];
    fVar18 = pfVar7[2];
    fVar19 = pfVar7[3];
    pfVar7 = pfVar3 + (ulong)uVar10 * 4;
    if (0x7f < uVar10) {
      pfVar7 = pfVar3;
    }
    lVar11 = *(long *)(param_1 + 0x30);
    pfVar3 = (float *)(lVar11 + (long)iVar12 * 0x10);
    lVar1 = lVar11 + (long)iVar13 * 0x10;
    iVar15 = iVar14;
    if (0 < iVar12) {
      iVar15 = iVar12;
    }
    iVar12 = iVar14;
    if (0 < iVar13) {
      iVar12 = iVar13;
    }
    fVar28 = *(float *)(lVar1 + 8);
    auVar26._0_4_ = *(float *)(lVar1 + 0xc);
    fVar21 = *pfVar3;
    auVar25._0_4_ = pfVar3[1];
    lVar4 = lVar11 + ((long)iVar12 + -1) * 0x10;
    iVar13 = iVar14;
    if (1 < iVar15) {
      iVar13 = (int)((long)iVar15 + -1);
    }
    pfVar3 = (float *)(lVar11 + ((long)iVar15 + -1) * 0x10);
    iVar15 = iVar14;
    if (1 < iVar12) {
      iVar15 = (int)((long)iVar12 + -1);
    }
    auVar26._4_4_ = *(float *)(lVar4 + 0xc);
    pfVar5 = (float *)(lVar11 + ((long)iVar13 + -1) * 0x10);
    iVar12 = iVar14;
    if (1 < iVar13) {
      iVar12 = (int)((long)iVar13 + -1);
    }
    lVar6 = lVar11 + ((long)iVar15 + -1) * 0x10;
    lVar1 = lVar11 + (long)iVar12 * 0x10;
    if (1 < iVar15) {
      iVar14 = (int)((long)iVar15 + -1);
    }
    lVar2 = lVar11 + (long)iVar14 * 0x10;
    auVar26._8_4_ = *(float *)(lVar6 + 0xc);
    fVar22 = *pfVar3;
    fVar23 = *pfVar5;
    fVar29 = *(float *)(lVar4 + 8);
    fVar24 = *(float *)(lVar1 + -0x10);
    auVar25._4_4_ = pfVar3[1];
    fVar30 = *(float *)(lVar6 + 8);
    auVar25._8_4_ = pfVar5[1];
    fVar31 = *(float *)(lVar2 + -8);
    fVar32 = *pfVar7;
    fVar33 = pfVar7[1];
    fVar34 = pfVar7[2];
    fVar35 = pfVar7[3];
  }
  fVar21 = fVar17 * fVar21 + fVar20 * fVar22 + fVar18 * fVar23 + fVar19 * fVar24;
  fVar28 = fVar32 * fVar28 + fVar33 * fVar29 + fVar34 * fVar30 + fVar35 * fVar31;
  fVar20 = fVar17 * auVar25._0_4_ + fVar20 * auVar25._4_4_ +
           fVar18 * auVar25._8_4_ + fVar19 * *(float *)(lVar1 + -0xc);
  fVar18 = fVar32 * auVar26._0_4_ + fVar33 * auVar26._4_4_ +
           fVar34 * auVar26._8_4_ + fVar35 * *(float *)(lVar2 + -4);
  auVar27._4_4_ = (int)(float)*param_3;
  auVar27._0_4_ = (int)(float)*param_2;
  auVar27._8_4_ = (int)(float)*param_4;
  auVar27._12_4_ = (int)(float)*param_5;
  auVar27 = NEON_scvtf(auVar27,4);
  fVar17 = (float)*(undefined8 *)(param_1 + 0x20);
  *(float *)(lVar11 + (long)*(int *)(param_1 + 0x40) * 0x10) =
       auVar27._0_4_ + fVar21 * fVar17 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * (fVar28 + fVar20);
  *(float *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x40) * 0x10 + 8) =
       auVar27._4_4_ + fVar28 * fVar17 + *(float *)(param_1 + 0x24) * (fVar21 + fVar18);
  *(float *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x40) * 0x10 + 4) =
       auVar27._8_4_ + fVar20 * fVar17 + *(float *)(param_1 + 0x24) * (fVar21 + fVar18);
  *(float *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x40) * 0x10 + 0xc) =
       auVar27._12_4_ + fVar18 * fVar17 + *(float *)(param_1 + 0x24) * (fVar28 + fVar20);
  fVar17 = *(float *)(param_1 + 0x28);
  *param_2 = (int)(fVar21 * fVar17);
  *param_3 = (int)(fVar28 * fVar17);
  *param_4 = (int)(fVar20 * fVar17);
  *param_5 = (int)(fVar18 * fVar17);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c);
  fVar17 = *(float *)(param_1 + 0x44) + 1.0;
  iVar14 = 0;
  if (*(int *)(param_1 + 0x40) + 1 < *(int *)(param_1 + 0x38)) {
    iVar14 = *(int *)(param_1 + 0x40) + 1;
  }
  *(int *)(param_1 + 0x40) = iVar14;
  fVar20 = 0.0;
  if (fVar16 <= fVar17) {
    fVar20 = fVar16;
  }
  *(float *)(param_1 + 0x44) = fVar17 - fVar20;
  return;
}

