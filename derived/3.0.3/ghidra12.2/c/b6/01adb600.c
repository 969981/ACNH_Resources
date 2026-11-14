
void FUN_01adb600(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = (float)FUN_01adb220();
  fVar8 = param_2;
  fVar9 = param_3;
  fVar2 = (float)FUN_01adadf0(param_4);
  fVar3 = sinf(fVar1 * 0.017453292);
  fVar4 = sinf(param_2 * 0.017453292);
  fVar5 = sinf(param_3 * 0.017453292);
  fVar1 = cosf(fVar1 * 0.017453292);
  fVar6 = cosf(param_2 * 0.017453292);
  fVar7 = cosf(param_3 * 0.017453292);
  param_5[8] = -fVar4;
  param_5[9] = fVar3 * fVar6;
  param_5[4] = fVar5 * fVar6;
  param_5[5] = fVar1 * fVar7 + fVar5 * fVar3 * fVar4;
  *param_5 = fVar6 * fVar7;
  param_5[1] = fVar3 * fVar4 * fVar7 - fVar5 * fVar1;
  param_5[6] = -(fVar3 * fVar7) + fVar4 * fVar5 * fVar1;
  param_5[7] = fVar8;
  param_5[10] = fVar1 * fVar6;
  param_5[0xb] = fVar9;
  param_5[2] = fVar3 * fVar5 + fVar4 * fVar1 * fVar7;
  param_5[3] = fVar2;
  return;
}

