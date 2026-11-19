
long FUN_03ab6e60(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0x2e0);
  fVar2 = fVar1 + 1.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar3 = *(float *)(param_2 + 0x2e4);
  fVar1 = fVar3 + 1.0;
  if (0.0 <= fVar3) {
    fVar1 = fVar3;
  }
  fVar3 = fVar2 + -1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  fVar2 = fVar1 + -1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  *(float *)(param_2 + 0x2e0) = fVar3 + *(float *)(param_2 + 0x370) * param_1 * 0.016666668;
  *(float *)(param_2 + 0x2e4) = *(float *)(param_2 + 0x374) * param_1 * 0.016666668 + fVar2;
  fVar1 = *(float *)(param_2 + 0x2e8);
  fVar2 = fVar1 + -6.2831855;
  if (fVar1 <= 3.1415927) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 + 6.2831855;
  if (-3.1415927 <= fVar2) {
    fVar1 = fVar2;
  }
  *(float *)(param_2 + 0x2e8) = (*(float *)(param_2 + 0x410) * param_1) / 60.0 + fVar1;
  if (1 < *(int *)(param_2 + 0x390)) {
    fVar1 = *(float *)(param_2 + 0x3d0);
    fVar2 = (param_1 * 6.2831855) / (float)*(int *)(param_2 + 0x390) + *(float *)(param_2 + 0x2f4);
    *(float *)(param_2 + 0x2f4) = fVar2;
    fVar2 = cosf(fVar2);
    *(float *)(param_2 + 0x2ec) = fVar1 * fVar2;
  }
  if (1 < *(int *)(param_2 + 0x3b0)) {
    fVar1 = *(float *)(param_2 + 0x3d4);
    fVar2 = (param_1 * 6.2831855) / (float)*(int *)(param_2 + 0x3b0) + *(float *)(param_2 + 0x2f8);
    *(float *)(param_2 + 0x2f8) = fVar2;
    fVar2 = sinf(fVar2);
    *(float *)(param_2 + 0x2f0) = fVar1 * fVar2;
  }
  fVar1 = *(float *)(param_2 + 0x430) + *(float *)(param_2 + 0x2e8);
  fVar2 = sinf(fVar1);
  fVar1 = cosf(fVar1);
  *(undefined8 *)(param_2 + 0x2d8) = 0x3f800000;
  fVar4 = -0.5 / *(float *)(param_2 + 0x354);
  *(float *)(param_2 + 0x2b8) = fVar2 * 0.0 + fVar1 * 0.0;
  *(float *)(param_2 + 0x2c8) = fVar1 * -0.0 + fVar2 * 0.0;
  fVar3 = 0.5 / *(float *)(param_2 + 0x350);
  *(float *)(param_2 + 0x2b0) = fVar1 * fVar3;
  *(float *)(param_2 + 0x2d0) = fVar3 * -0.0;
  *(float *)(param_2 + 0x2b4) = (fVar1 * 0.0 - fVar2) * fVar4;
  *(float *)(param_2 + 0x2c0) = fVar2 * fVar3;
  *(float *)(param_2 + 0x2c4) = (fVar1 + fVar2 * 0.0) * fVar4;
  *(float *)(param_2 + 0x2d4) = fVar4 * 0.0;
  *(float *)(param_2 + 700) =
       *(float *)(param_2 + 0x3f0) + 0.5 + *(float *)(param_2 + 0x2e0) + *(float *)(param_2 + 0x2ec)
  ;
  *(float *)(param_2 + 0x2cc) =
       *(float *)(param_2 + 0x3f4) + 0.5 + *(float *)(param_2 + 0x2e4) + *(float *)(param_2 + 0x2f0)
  ;
  return param_2 + 0x2b0;
}

