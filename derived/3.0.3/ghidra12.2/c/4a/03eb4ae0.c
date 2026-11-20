
bool FUN_03eb4ae0(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_5;
  if (fVar2 == param_1) {
    return true;
  }
  fVar3 = param_1 - fVar2;
  fVar1 = -fVar3;
  if (0.0 <= fVar3) {
    fVar1 = fVar3;
  }
  if (fVar1 <= param_4) {
    *param_5 = param_1;
    return true;
  }
  param_2 = fVar3 * param_2;
  fVar1 = param_4;
  if (fVar3 <= 0.0) {
    fVar1 = -param_3;
    param_3 = -param_4;
  }
  if (param_2 <= param_3) {
    param_3 = param_2;
  }
  if (fVar1 <= param_2) {
    fVar1 = param_3;
  }
  *param_5 = fVar2 + fVar1;
  return fVar2 + fVar1 == param_1;
}

