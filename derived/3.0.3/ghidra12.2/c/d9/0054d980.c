
void FUN_0054d980(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_0054d9e0(param_1,param_2,param_5,param_6);
  fVar1 = ((float)*param_2 - (float)*param_5) * (float)*param_6;
  fVar2 = ((float)((ulong)*param_2 >> 0x20) - (float)((ulong)*param_5 >> 0x20)) *
          (float)((ulong)*param_6 >> 0x20);
  fVar3 = ((float)param_2[1] - (float)param_5[1]) * (float)param_6[1];
  *param_7 = CONCAT44(fVar1 + fVar2 + fVar3,fVar1 + fVar2 + fVar3);
  return;
}

