
undefined8 FUN_01ffc810(long param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = 0.0;
  fVar2 = *param_2 - *param_3;
  fVar3 = param_2[2] - param_3[2];
  fVar6 = SQRT(fVar2 * fVar2 + 0.0 + fVar3 * fVar3);
  if (0.0 < fVar6) {
    fVar6 = 1.0 / fVar6;
    fVar2 = fVar2 * fVar6;
    fVar5 = fVar6 * 0.0;
    fVar3 = fVar3 * fVar6;
  }
  fVar6 = *param_3 - *param_2;
  fVar4 = param_3[2] - param_2[2];
  fVar6 = fVar4 * fVar4 + fVar6 * fVar6;
  fVar2 = fVar5 * param_4[1] + *param_4 * fVar2 + param_4[2] * fVar3;
  if (fVar6 <= 900.0) {
    if (fVar2 < DAT_053bbd7c) {
      return 0;
    }
  }
  else if (fVar6 <= *(float *)(param_1 + 0x3448)) {
    uVar1 = (ulong)(*(uint *)(param_1 + 0x3440) >> 0x14) & 0xff0;
    if (fVar2 < *(float *)(PTR_DAT_04bb2d00 + uVar1 + 8) +
                *(float *)(PTR_DAT_04bb2d00 + uVar1 + 0xc) *
                (float)(*(uint *)(param_1 + 0x3440) & 0xffffff) * 5.9604645e-08) {
      return 0;
    }
  }
  else {
    if (*(float *)(param_1 + 0x3450) < fVar6) {
      return 0;
    }
    uVar1 = (ulong)(*(uint *)(param_1 + 0x3440) >> 0x14) & 0xff0;
    if (fVar2 < *(float *)(PTR_DAT_04bb2d00 + uVar1 + 8) +
                *(float *)(PTR_DAT_04bb2d00 + uVar1 + 0xc) *
                (float)(*(uint *)(param_1 + 0x3440) & 0xffffff) * 5.9604645e-08) {
      return 0;
    }
  }
  if (param_5 != (float *)0x0) {
    *param_5 = fVar6;
  }
  return 1;
}

