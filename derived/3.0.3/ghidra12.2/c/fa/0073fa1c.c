
void FUN_0073fa1c(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float __x;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float __x_00;
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar7 = param_2[2];
  fVar6 = param_2[3];
  fVar1 = -(fVar6 * fVar5) + fVar7 * fVar4;
  fVar1 = fVar1 + fVar1;
  __x_00 = -fVar1;
  fVar2 = __x_00;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  if (1.1920929e-06 <= 1.0 - fVar2) {
    fVar3 = fVar6 * fVar7 + fVar5 * fVar4;
    fVar3 = fVar3 + fVar3;
    fVar2 = fVar6 * fVar4 + fVar7 * fVar5;
    __x = ((fVar6 * fVar6 + fVar4 * fVar4) - fVar5 * fVar5) - fVar7 * fVar7;
    fVar2 = atan2f(fVar2 + fVar2,((fVar6 * fVar6 - fVar4 * fVar4) - fVar5 * fVar5) + fVar7 * fVar7);
    *param_1 = fVar2;
    fVar2 = asinf(__x_00);
    param_1[1] = fVar2;
  }
  else {
    fVar3 = fVar6 * fVar5 + fVar7 * fVar4;
    *param_1 = 0.0;
    __x = (fVar3 + fVar3) * __x_00;
    fVar3 = (fVar7 * -fVar6 + fVar5 * fVar4) * -2.0;
    param_1[1] = (fVar1 / fVar2) * -1.5707964;
  }
  fVar2 = atan2f(fVar3,__x);
  param_1[2] = fVar2;
  return;
}

