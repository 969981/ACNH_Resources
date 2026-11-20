
void FUN_03ec5290(float param_1,uint *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *param_2;
  *param_2 = uVar1 & 0xffffffef;
  if ((uVar1 >> 3 & 1) != 0) {
    *param_2 = uVar1 & 0xffffffe7;
    return;
  }
  fVar5 = (float)param_2[1];
  fVar3 = (float)param_2[10];
  fVar4 = fVar5 + (float)param_2[3] * param_1;
  param_2[1] = (uint)fVar4;
  param_2[2] = (uint)fVar5;
  fVar5 = (float)param_2[5];
  if (fVar5 <= fVar4) {
    fVar2 = fVar5;
    if (0.0 <= fVar3) {
      fVar2 = fVar3;
    }
    if ((((uVar1 >> 1 & 1) != 0) || (fVar4 < fVar2)) && (fVar2 = 0.0, 0.0 < fVar5)) {
      if (fVar5 + fVar5 <= fVar4) {
        fVar2 = fVar4 - fVar5 * (float)(int)(fVar4 / fVar5);
      }
      else {
        fVar2 = fVar4 - fVar5;
      }
    }
    fVar4 = fVar2;
    param_2[1] = (uint)fVar4;
  }
  if ((((uVar1 ^ 0xffffffff) & 6) == 0) && (fVar4 < (float)param_2[4])) {
    fVar4 = fVar4 + (fVar5 - (float)param_2[4]);
    param_2[1] = (uint)fVar4;
  }
  if (fVar3 < 0.0) {
    param_2[9] = (uint)fVar4;
    return;
  }
  fVar4 = (float)param_2[3] * param_1 + (float)param_2[9];
  param_2[9] = (uint)fVar4;
  if (fVar4 < fVar3) {
    return;
  }
  param_2[9] = (uint)fVar3;
  param_2[1] = param_2[0xb];
  return;
}

