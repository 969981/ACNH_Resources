
bool FUN_02ff7cc0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  fVar4 = param_1[1];
  fVar2 = 255.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1 * 255.0;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar1) {
    fVar7 = fVar2;
  }
  fVar2 = 255.0;
  if (fVar4 <= 1.0) {
    fVar2 = fVar4 * 255.0;
  }
  fVar1 = 0.0;
  if (0.0 <= fVar4) {
    fVar1 = fVar2;
  }
  fVar4 = param_1[2];
  fVar2 = 255.0;
  if (fVar4 <= 1.0) {
    fVar2 = fVar4 * 255.0;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar2;
  }
  fVar4 = *param_2;
  fVar8 = param_2[1];
  fVar2 = 255.0;
  if (fVar4 <= 1.0) {
    fVar2 = fVar4 * 255.0;
  }
  fVar6 = 0.0;
  if (0.0 <= fVar4) {
    fVar6 = fVar2;
  }
  fVar2 = 255.0;
  if (fVar8 <= 1.0) {
    fVar2 = fVar8 * 255.0;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar8) {
    fVar4 = fVar2;
  }
  fVar8 = param_2[2];
  fVar2 = 255.0;
  if (fVar8 <= 1.0) {
    fVar2 = fVar8 * 255.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar8) {
    fVar3 = fVar2;
  }
  if (((int)fVar7 != (int)fVar6 || (int)fVar1 != (int)fVar4) || (int)fVar5 != (int)fVar3) {
    return false;
  }
  fVar1 = param_2[3];
  fVar2 = 255.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1 * 255.0;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar1) {
    fVar4 = fVar2;
  }
  fVar1 = param_1[3];
  fVar2 = 255.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1 * 255.0;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar1) {
    fVar7 = fVar2;
  }
  return (int)fVar7 == (int)fVar4;
}

