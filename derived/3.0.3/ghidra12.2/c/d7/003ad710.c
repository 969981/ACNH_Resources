
void FUN_003ad710(undefined8 *param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = (float)*(undefined8 *)param_3 - *param_2;
  fVar11 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) - param_2[1];
  fVar12 = (float)*(undefined8 *)(param_3 + 2) - param_2[2];
  fVar13 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) - param_2[3];
  fVar5 = fVar10 * fVar10;
  fVar6 = fVar11 * fVar11;
  auVar7._4_4_ = fVar6;
  auVar7._0_4_ = fVar5;
  auVar7._8_4_ = fVar12 * fVar12;
  auVar7._12_4_ = fVar13 * fVar13;
  auVar1._4_4_ = fVar6;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar12 * fVar12;
  auVar1._12_4_ = fVar13 * fVar13;
  auVar7 = NEON_ext(auVar7,auVar1,8,1);
  fVar6 = auVar7._0_4_ + fVar5 + auVar7._4_4_ + fVar6;
  fVar8 = param_3[4] - param_2[4];
  fVar8 = fVar8 * fVar8;
  fVar5 = 0.0001;
  if (0.0001 <= fVar8) {
    fVar5 = fVar8;
  }
  if (fVar5 <= fVar6) {
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    fVar6 = fVar6 * (1.0 / fVar5);
    fVar9 = (fVar6 + param_2[4] + param_3[4]) * 0.5;
    fVar6 = (fVar9 - param_2[4]) / fVar6;
    fVar5 = *param_2;
    fVar8 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    *(float *)(param_1 + 2) = fVar9;
    param_1[1] = CONCAT44(fVar3 + fVar13 * fVar6,fVar2 + fVar12 * fVar6);
    *param_1 = CONCAT44(fVar8 + fVar11 * fVar6,fVar5 + fVar10 * fVar6);
    return;
  }
  if (param_2[4] <= param_3[4]) {
    param_2 = param_3;
  }
  uVar4 = *(undefined8 *)(param_2 + 6);
  param_1[1] = *(undefined8 *)(param_2 + 2);
  param_1[3] = uVar4;
  uVar4 = *(undefined8 *)param_2;
  param_1[2] = *(undefined8 *)(param_2 + 4);
  *param_1 = uVar4;
  return;
}

