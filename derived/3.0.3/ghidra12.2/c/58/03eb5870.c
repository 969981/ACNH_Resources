
float FUN_03eb5870(float *param_1,float *param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float in_s3;
  float in_s4;
  float fVar7;
  float fVar8;
  float in_s7;
  float fVar9;
  float fVar10;
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar8 = param_1[2];
  fVar7 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar8 * fVar8);
  if (0.0 < fVar7) {
    in_s7 = 1.0 / fVar7;
    in_s3 = fVar5 * in_s7;
    in_s4 = fVar6 * in_s7;
    fVar6 = fVar8 * in_s7;
  }
  if (fVar7 == 0.0) {
    return 0.0;
  }
  fVar5 = *param_2;
  fVar7 = param_2[1];
  fVar9 = param_2[2];
  fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar9 * fVar9);
  if (0.0 < fVar8) {
    fVar10 = 1.0 / fVar8;
    in_s7 = fVar5 * fVar10;
    fVar7 = fVar7 * fVar10;
    fVar5 = fVar9 * fVar10;
  }
  if (fVar8 == 0.0) {
    return 0.0;
  }
  fVar5 = in_s4 * fVar7 + in_s7 * in_s3 + fVar5 * fVar6;
  if (1.0 <= fVar5) {
    return 0.0;
  }
  if (fVar5 <= -1.0) {
    return 3.1415927;
  }
  fVar6 = 1.0;
  if (fVar5 <= 1.0) {
    fVar6 = fVar5;
  }
  fVar7 = -1.0;
  if (-1.0 <= fVar5) {
    fVar7 = fVar6;
  }
  fVar6 = 1.0 - fVar7 * fVar7;
  fVar5 = SQRT(fVar6);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar6);
    if (fVar7 < 0.0) goto LAB_03eb5940;
LAB_03eb5a10:
    if (0.70710677 < fVar7) {
      fVar5 = fVar5 / fVar7;
      piVar2 = (int *)(&DAT_0419a7a8 + (long)(int)(fVar5 * 128.0) * 8);
      iVar3 = *piVar2;
      goto LAB_03eb5a4c;
    }
    iVar4 = 0x40000000;
    fVar6 = (fVar7 / fVar5) * 128.0;
    lVar1 = (long)(int)((fVar7 / fVar5) * 128.0) * 8;
    iVar3 = *(int *)(&DAT_0419a7a8 + lVar1);
    fVar5 = (fVar6 - (float)(int)fVar6) * *(float *)(&DAT_0419a7ac + lVar1);
  }
  else {
    if (0.0 <= fVar7) goto LAB_03eb5a10;
LAB_03eb5940:
    if (-0.70710677 <= fVar7) {
      fVar5 = -fVar7 / fVar5;
      piVar2 = (int *)(PTR_DAT_04bd0d88 + (long)(int)(fVar5 * 128.0) * 8);
      iVar3 = *piVar2 + 0x40000000;
LAB_03eb5a4c:
      iVar3 = iVar3 + (int)((fVar5 * 128.0 - (float)(int)(fVar5 * 128.0)) * (float)piVar2[1]);
      goto LAB_03eb5aa8;
    }
    iVar4 = -0x80000000;
    fVar5 = (fVar5 / fVar7) * -128.0;
    iVar3 = *(int *)(&DAT_0419a7a8 + (long)(int)fVar5 * 8);
    fVar5 = (fVar5 - (float)(int)fVar5) * *(float *)(&DAT_0419a7ac + (long)(int)fVar5 * 8);
  }
  iVar3 = (iVar4 - iVar3) - (int)fVar5;
LAB_03eb5aa8:
  return ((float)(iVar3 + 0x7fffffff) * 4.656613e-10 + -1.0) * 3.1415927;
}

