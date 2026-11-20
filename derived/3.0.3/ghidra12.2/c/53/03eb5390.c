
void FUN_03eb5390(float param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s5;
  float in_s6;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float in_s18;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (param_1 <= 0.0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    return;
  }
  if (1.0 <= param_1) {
    *param_2 = *param_4;
    param_2[1] = param_4[1];
    param_2[2] = param_4[2];
    return;
  }
  fVar9 = *param_3;
  fVar12 = param_3[1];
  fVar14 = param_3[2];
  fVar11 = SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar14 * fVar14);
  if (0.0 < fVar11) {
    fVar16 = 1.0 / fVar11;
    in_s6 = fVar9 * fVar16;
    in_s5 = fVar12 * fVar16;
    fVar12 = fVar14 * fVar16;
  }
  fVar14 = *param_4;
  fVar16 = param_4[1];
  bVar2 = fVar11 != 0.0;
  fVar18 = param_4[2];
  fVar9 = 0.0;
  if (bVar2) {
    fVar9 = fVar12;
  }
  fVar12 = 0.0;
  if (bVar2) {
    fVar12 = in_s5;
  }
  fVar13 = 0.0;
  if (bVar2) {
    fVar13 = in_s6;
  }
  fVar15 = SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar18 * fVar18);
  if (0.0 < fVar15) {
    fVar19 = 1.0 / fVar15;
    in_s18 = fVar14 * fVar19;
    fVar16 = fVar16 * fVar19;
    fVar14 = fVar18 * fVar19;
  }
  bVar2 = fVar15 != 0.0;
  fVar19 = 1.0 - param_1;
  fVar18 = 0.0;
  if (bVar2) {
    fVar18 = fVar16;
  }
  fVar16 = 0.0;
  if (bVar2) {
    fVar16 = in_s18;
  }
  fVar17 = 0.0;
  if (bVar2) {
    fVar17 = fVar14;
  }
  fVar14 = fVar12 * fVar18 + fVar16 * fVar13 + fVar17 * fVar9;
  if (fVar14 <= 0.999999) {
    if (-0.999999 <= fVar14) {
      fVar21 = 1.0 - fVar14 * fVar14;
      fVar22 = SQRT(fVar21);
      if (NAN(fVar22)) {
        fVar22 = sqrtf(fVar21);
        if (0.0 <= fVar14) goto LAB_03eb56d0;
LAB_03eb553c:
        if (fVar14 < -0.70710677) {
          iVar8 = -0x80000000;
          fVar14 = (fVar22 / fVar14) * -128.0;
          iVar7 = *(int *)(&DAT_0419a7a8 + (long)(int)fVar14 * 8);
          fVar14 = (fVar14 - (float)(int)fVar14) * *(float *)(&DAT_0419a7ac + (long)(int)fVar14 * 8)
          ;
          goto LAB_03eb5760;
        }
        fVar22 = -fVar14 / fVar22;
        piVar5 = (int *)(PTR_DAT_04bd0d88 + (long)(int)(fVar22 * 128.0) * 8);
        iVar7 = *piVar5 + 0x40000000;
LAB_03eb570c:
        iVar7 = iVar7 + (int)((fVar22 * 128.0 - (float)(int)(fVar22 * 128.0)) * (float)piVar5[1]);
      }
      else {
        if (fVar14 < 0.0) goto LAB_03eb553c;
LAB_03eb56d0:
        if (0.70710677 < fVar14) {
          fVar22 = fVar22 / fVar14;
          piVar5 = (int *)(&DAT_0419a7a8 + (long)(int)(fVar22 * 128.0) * 8);
          iVar7 = *piVar5;
          goto LAB_03eb570c;
        }
        iVar8 = 0x40000000;
        fVar21 = (fVar14 / fVar22) * 128.0;
        lVar1 = (long)(int)((fVar14 / fVar22) * 128.0) * 8;
        iVar7 = *(int *)(&DAT_0419a7a8 + lVar1);
        fVar14 = (fVar21 - (float)(int)fVar21) * *(float *)(&DAT_0419a7ac + lVar1);
LAB_03eb5760:
        iVar7 = (iVar8 - iVar7) - (int)fVar14;
      }
      fVar14 = ((float)(iVar7 + 0x7fffffff) * 4.656613e-10 + -1.0) * 3.1415927;
      uVar6 = (ulong)(fVar19 * fVar14 * 6.8356525e+08);
      fVar22 = *(float *)(PTR_DAT_04bb2d00 +
                         ((ulong)(long)(fVar14 * 6.8356525e+08) >> 0x18 & 0xff) * 0x10) +
               *(float *)((long)(PTR_DAT_04bb2d00 +
                                ((ulong)(long)(fVar14 * 6.8356525e+08) >> 0x18 & 0xff) * 0x10) + 4)
               * (float)((uint)(long)(fVar14 * 6.8356525e+08) & 0xffffff) * 5.9604645e-08;
      uVar3 = (ulong)(fVar14 * param_1 * 6.8356525e+08);
      fVar14 = (*(float *)(PTR_DAT_04bb2d00 + (uVar6 >> 0x18 & 0xff) * 0x10) +
               *(float *)((long)(PTR_DAT_04bb2d00 + (uVar6 >> 0x18 & 0xff) * 0x10) + 4) *
               (float)((uint)uVar6 & 0xffffff) * 5.9604645e-08) / fVar22;
      fVar22 = (*(float *)(PTR_DAT_04bb2d00 + (uVar3 >> 0x18 & 0xff) * 0x10) +
               *(float *)((long)(PTR_DAT_04bb2d00 + (uVar3 >> 0x18 & 0xff) * 0x10) + 4) *
               (float)((uint)uVar3 & 0xffffff) * 5.9604645e-08) / fVar22;
      goto LAB_03eb5838;
    }
    if (param_5 != (float *)0x0) {
      fVar10 = -(param_5[2] * fVar12) + fVar9 * param_5[1];
      fVar20 = -(*param_5 * fVar9) + fVar13 * param_5[2];
      fVar21 = -(param_5[1] * fVar13) + fVar12 * *param_5;
      fVar14 = SQRT(fVar20 * fVar20 + fVar10 * fVar10 + fVar21 * fVar21);
      if (0.0 < fVar14) {
        fVar22 = 1.0 / fVar14;
        fVar10 = fVar10 * fVar22;
        fVar20 = fVar20 * fVar22;
        fVar21 = fVar21 * fVar22;
      }
      if (fVar14 != 0.0) {
        if (0.5 < param_1) {
          param_1 = param_1 + -0.5;
          fVar9 = fVar21;
          fVar12 = fVar20;
          fVar13 = fVar10;
          fVar21 = fVar17;
          fVar20 = fVar18;
          fVar10 = fVar16;
        }
        param_1 = param_1 + param_1;
        fVar19 = 1.0 - param_1;
        uVar3 = (ulong)(fVar19 * 1.5707964 * 6.8356525e+08);
        uVar6 = uVar3 >> 0x18 & 0xff;
        uVar4 = (ulong)(param_1 * 1.5707964 * 6.8356525e+08);
        fVar14 = (float)(&DAT_04199798)[uVar6 * 4] +
                 (float)(&DAT_0419979c)[uVar6 * 4] * (float)((uint)uVar3 & 0xffffff) * 5.9604645e-08
        ;
        uVar6 = uVar4 >> 0x18 & 0xff;
        fVar22 = (float)(&DAT_04199798)[uVar6 * 4] +
                 (float)(&DAT_0419979c)[uVar6 * 4] * (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08
        ;
        fVar17 = fVar21;
        fVar18 = fVar20;
        fVar16 = fVar10;
        goto LAB_03eb5838;
      }
    }
  }
  fVar14 = fVar19;
  fVar22 = param_1;
LAB_03eb5838:
  fVar11 = fVar15 * param_1 + fVar11 * fVar19;
  *param_2 = (fVar16 * fVar22 + fVar13 * fVar14) * fVar11;
  param_2[1] = (fVar18 * fVar22 + fVar12 * fVar14) * fVar11;
  param_2[2] = (fVar17 * fVar22 + fVar9 * fVar14) * fVar11;
  return;
}

