
void FUN_02a1e144(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4,uint param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  fVar3 = (float)param_3[1];
  fVar2 = (float)param_3[2];
  if (*(char *)(param_1 + 0x81) == '\0') goto LAB_02a1e268;
  fVar4 = *(float *)(param_4 + 4);
  fVar5 = *(float *)(param_4 + 8);
  if (fVar2 <= fVar5) {
    if ((param_5 & 1) == 0) {
      fVar8 = *(float *)(param_1 + 0x90);
      fVar6 = *(float *)(param_1 + 0x94);
      bVar1 = false;
    }
    else {
      bVar1 = true;
      fVar6 = 1.0;
      fVar8 = 1.0;
    }
  }
  else {
    bVar1 = false;
    if (fVar2 <= fVar5) {
      fVar6 = 0.0;
      fVar8 = 0.0;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x88);
      fVar6 = *(float *)(param_1 + 0x8c);
    }
  }
  if (fVar3 < fVar4) {
LAB_02a1e1c0:
    fVar7 = 1.5;
    fVar10 = 1.0;
  }
  else {
    fVar7 = 0.0;
    fVar10 = 0.0;
    if (fVar4 < fVar3) goto LAB_02a1e1c0;
  }
  fVar11 = fVar5 - fVar2;
  fVar9 = -fVar11;
  if (0.0 <= fVar11) {
    fVar9 = fVar11;
  }
  fVar12 = fVar4 - fVar3;
  fVar11 = -fVar12;
  if (0.0 <= fVar12) {
    fVar11 = fVar12;
  }
  fVar11 = fVar11 / 10.0;
  fVar9 = (float)NEON_fminnm((fVar9 / 10.0) / fVar8,0x3f800000);
  fVar8 = (float)NEON_fminnm(fVar11 / fVar10,0x3f800000);
  fVar10 = *(float *)(param_1 + 0x9c);
  if (fVar11 <= *(float *)(param_1 + 0x98)) {
    fVar12 = *(float *)(param_1 + 0xa0);
    if (fVar11 <= fVar12) {
      fVar10 = 1.0;
    }
    else {
      fVar11 = (float)NEON_fminnm((fVar11 - fVar12) / (*(float *)(param_1 + 0x98) - fVar12),
                                  0x3f800000);
      fVar10 = (fVar10 + -1.0) * fVar11 + 1.0;
    }
  }
  fVar3 = fVar4 + fVar7 * fVar8 * (fVar3 - fVar4);
  if (!bVar1) {
    fVar2 = fVar5 + fVar6 * fVar9 * fVar10 * (fVar2 - fVar5);
  }
LAB_02a1e268:
  *param_2 = *param_3;
  param_2[1] = fVar3;
  param_2[2] = fVar2;
  return;
}

