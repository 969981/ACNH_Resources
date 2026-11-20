
bool FUN_03eaf030(float *param_1,long param_2,float *param_3)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = param_1[1] - *(float *)(param_2 + 0xc);
  fVar6 = *param_1 - *(float *)(param_2 + 8);
  fVar8 = param_1[2] - *(float *)(param_2 + 0x10);
  fVar5 = fVar7 * *(float *)(param_2 + 0x18) + fVar6 * *(float *)(param_2 + 0x14);
  fVar3 = fVar5 + fVar8 * *(float *)(param_2 + 0x1c);
  fVar5 = -(*(float *)(param_2 + 0x1c) * fVar8) - fVar5;
  if (0.0 <= fVar3) {
    fVar5 = fVar3;
  }
  if (*(float *)(param_2 + 0x38) <= fVar5) {
    return false;
  }
  fVar9 = fVar7 * *(float *)(param_2 + 0x24) + fVar6 * *(float *)(param_2 + 0x20);
  fVar4 = fVar9 + fVar8 * *(float *)(param_2 + 0x28);
  fVar9 = -(*(float *)(param_2 + 0x28) * fVar8) - fVar9;
  if (0.0 <= fVar4) {
    fVar9 = fVar4;
  }
  if (*(float *)(param_2 + 0x3c) <= fVar9) {
    return false;
  }
  fVar6 = fVar7 * *(float *)(param_2 + 0x30) + fVar6 * *(float *)(param_2 + 0x2c);
  fVar7 = fVar6 + fVar8 * *(float *)(param_2 + 0x34);
  fVar6 = -(*(float *)(param_2 + 0x34) * fVar8) - fVar6;
  if (0.0 <= fVar7) {
    fVar6 = fVar7;
  }
  bVar1 = fVar6 < *(float *)(param_2 + 0x40);
  if (param_3 == (float *)0x0) {
    return bVar1;
  }
  if (!bVar1) {
    return bVar1;
  }
  fVar5 = *(float *)(param_2 + 0x38) - fVar5;
  fVar9 = *(float *)(param_2 + 0x3c) - fVar9;
  fVar6 = *(float *)(param_2 + 0x40) - fVar6;
  pfVar2 = param_3;
  if (fVar5 <= fVar9) {
    if (fVar6 < fVar5) goto LAB_03eaf128;
    param_3[2] = 0.0;
    pfVar2 = param_3 + 1;
    fVar6 = 1.0;
    if (fVar3 < 0.0) {
      fVar6 = -1.0;
    }
    *param_3 = fVar6;
  }
  else {
    if (fVar6 < fVar9) {
LAB_03eaf128:
      param_3[1] = 0.0;
      fVar3 = 1.0;
      if (fVar7 < 0.0) {
        fVar3 = -1.0;
      }
      param_3[2] = fVar3;
      goto LAB_03eaf16c;
    }
    param_3[2] = 0.0;
    fVar5 = 1.0;
    if (fVar4 < 0.0) {
      fVar5 = -1.0;
    }
    param_3[1] = fVar5;
    fVar5 = fVar9;
  }
  fVar3 = 0.0;
  fVar6 = fVar5;
LAB_03eaf16c:
  *pfVar2 = 0.0;
  param_3[3] = fVar6;
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar4 = *(float *)(param_2 + 0x18);
  fVar8 = *(float *)(param_2 + 0x1c);
  fVar10 = *(float *)(param_2 + 0x30);
  fVar9 = *(float *)(param_2 + 0x24);
  fVar11 = *(float *)(param_2 + 0x28);
  fVar7 = *(float *)(param_2 + 0x34);
  *param_3 = *(float *)(param_2 + 0x20) * fVar6 + fVar5 * *(float *)(param_2 + 0x14) +
             fVar3 * *(float *)(param_2 + 0x2c);
  param_3[1] = fVar6 * fVar9 + fVar5 * fVar4 + fVar3 * fVar10;
  param_3[2] = fVar6 * fVar11 + fVar5 * fVar8 + fVar3 * fVar7;
  param_3[4] = *param_1;
  param_3[5] = param_1[1];
  param_3[6] = param_1[2];
  return true;
}

