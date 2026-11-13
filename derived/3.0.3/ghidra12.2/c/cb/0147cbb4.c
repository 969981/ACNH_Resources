
void FUN_0147cbb4(undefined4 *param_1,float *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float __x;
  float fVar8;
  float fVar9;
  
  fVar9 = param_2[8];
  fVar8 = -fVar9;
  fVar6 = fVar8;
  if (0.0 <= fVar9) {
    fVar6 = fVar9;
  }
  if (1.0 - fVar6 < 1.1920929e-06) {
    fVar7 = param_2[2] * fVar8;
    fVar5 = -param_2[1];
    *param_1 = 0;
    param_1[1] = -(int)((fVar9 / fVar6) * 1.0737418e+09);
    goto LAB_0147cd84;
  }
  fVar7 = *param_2;
  fVar5 = param_2[4];
  uVar2 = FUN_006f0400(param_2[9],param_2[10]);
  __x = fVar8 * fVar9 + 1.0;
  *param_1 = uVar2;
  fVar6 = SQRT(__x);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(__x);
    if (0.0 < fVar9) goto LAB_0147cc44;
LAB_0147cce0:
    if (-0.70710677 <= fVar9) {
      fVar6 = fVar8 / fVar6;
      piVar3 = (int *)(&DAT_0419a7a8 + (long)(int)(fVar6 * 128.0) * 8);
      iVar4 = *piVar3;
      goto LAB_0147cd64;
    }
    fVar9 = (fVar6 / fVar8) * 128.0;
    lVar1 = (long)(int)((fVar6 / fVar8) * 128.0) * 8;
    iVar4 = (0x40000000 - *(int *)(&DAT_0419a7a8 + lVar1)) -
            (int)((fVar9 - (float)(int)fVar9) * *(float *)(&DAT_0419a7ac + lVar1));
  }
  else {
    if (fVar9 <= 0.0) goto LAB_0147cce0;
LAB_0147cc44:
    if (0.70710677 < fVar9) {
      fVar6 = fVar6 / fVar9;
      piVar3 = (int *)(&DAT_0419a7a8 + (long)(int)(fVar6 * 128.0) * 8);
      iVar4 = *piVar3 + -0x40000000;
LAB_0147cd64:
      iVar4 = iVar4 + (int)((fVar6 * 128.0 - (float)(int)(fVar6 * 128.0)) * (float)piVar3[1]);
    }
    else {
      fVar8 = (fVar9 / fVar6) * 128.0;
      lVar1 = (long)(int)((fVar9 / fVar6) * 128.0) * 8;
      iVar4 = -(int)((fVar8 - (float)(int)fVar8) * *(float *)(&DAT_0419a7ac + lVar1)) -
              *(int *)(&DAT_0419a7a8 + lVar1);
    }
  }
  param_1[1] = iVar4;
LAB_0147cd84:
  uVar2 = FUN_006f0400(fVar5,fVar7);
  param_1[2] = uVar2;
  return;
}

