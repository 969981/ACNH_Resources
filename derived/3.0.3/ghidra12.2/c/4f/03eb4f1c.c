
void FUN_03eb4f1c(float param_1,float *param_2,float *param_3,float *param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = param_3[1] * param_4[1] + *param_4 * *param_3 + param_4[2] * param_3[2] +
          param_4[3] * param_3[3];
  fVar11 = 1.0;
  if ((fVar9 <= 1.0) && (fVar11 = fVar9, fVar9 < -1.0)) {
    fVar11 = -1.0;
  }
  fVar9 = fVar11;
  if (fVar11 < 0.0) {
    fVar9 = -fVar11;
  }
  fVar10 = 1.0 - fVar9 * fVar9;
  fVar8 = SQRT(fVar10);
  if (NAN(fVar8)) {
    fVar8 = sqrtf(fVar10);
    if (fVar9 < 0.0) goto LAB_03eb4f84;
LAB_03eb5068:
    if (0.70710677 < fVar9) {
      fVar8 = fVar8 / fVar9;
      piVar4 = (int *)(&DAT_0419a7a8 + (long)(int)(fVar8 * 128.0) * 8);
      iVar5 = *piVar4;
      goto LAB_03eb50a4;
    }
    iVar6 = 0x40000000;
    fVar10 = (fVar9 / fVar8) * 128.0;
    lVar2 = (long)(int)((fVar9 / fVar8) * 128.0) * 8;
    iVar5 = *(int *)(&DAT_0419a7a8 + lVar2);
    fVar9 = (fVar10 - (float)(int)fVar10) * *(float *)(&DAT_0419a7ac + lVar2);
  }
  else {
    if (0.0 <= fVar9) goto LAB_03eb5068;
LAB_03eb4f84:
    if (-0.70710677 <= fVar9) {
      fVar8 = -fVar9 / fVar8;
      piVar4 = (int *)(PTR_DAT_04bd0d88 + (long)(int)(fVar8 * 128.0) * 8);
      iVar5 = *piVar4 + 0x40000000;
LAB_03eb50a4:
      uVar3 = iVar5 + (int)((fVar8 * 128.0 - (float)(int)(fVar8 * 128.0)) * (float)piVar4[1]);
      goto LAB_03eb5100;
    }
    iVar6 = -0x80000000;
    fVar9 = (fVar8 / fVar9) * -128.0;
    iVar5 = *(int *)(&DAT_0419a7a8 + (long)(int)fVar9 * 8);
    fVar9 = (fVar9 - (float)(int)fVar9) * *(float *)(&DAT_0419a7ac + (long)(int)fVar9 * 8);
  }
  uVar3 = (iVar6 - iVar5) - (int)fVar9;
LAB_03eb5100:
  fVar8 = (float)(&DAT_04199798)[(ulong)(uVar3 >> 0x18) * 4] +
          (float)(&DAT_0419979c)[(ulong)(uVar3 >> 0x18) * 4] * (float)(uVar3 & 0xffffff) *
          5.9604645e-08;
  fVar9 = -fVar8;
  if (0.0 <= fVar8) {
    fVar9 = fVar8;
  }
  if (1.1920929e-07 <= fVar9) {
    uVar7 = (uint)((float)uVar3 * param_1);
    uVar1 = (ulong)(uVar3 - uVar7 >> 0x18);
    fVar9 = (1.0 / fVar8) *
            ((float)(&DAT_04199798)[uVar1 * 4] +
            (float)(&DAT_0419979c)[uVar1 * 4] * (float)(uVar3 - uVar7 & 0xffffff) * 5.9604645e-08);
    param_1 = (1.0 / fVar8) *
              ((float)(&DAT_04199798)[(ulong)(uVar7 >> 0x18) * 4] +
              (float)(&DAT_0419979c)[(ulong)(uVar7 >> 0x18) * 4] * (float)(uVar7 & 0xffffff) *
              5.9604645e-08);
  }
  else {
    fVar9 = 1.0 - param_1;
  }
  if (fVar11 < 0.0) {
    param_1 = -param_1;
  }
  *param_2 = param_1 * *param_4 + *param_3 * fVar9;
  param_2[1] = param_1 * param_4[1] + param_3[1] * fVar9;
  param_2[2] = param_1 * param_4[2] + param_3[2] * fVar9;
  param_2[3] = param_1 * param_4[3] + param_3[3] * fVar9;
  return;
}

