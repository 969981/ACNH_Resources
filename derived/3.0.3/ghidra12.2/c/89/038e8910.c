
float FUN_038e8910(float param_1,long param_2,float *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 <= *param_3) {
    return param_3[1];
  }
  bVar1 = *(byte *)(param_2 + 3);
  if (param_1 < param_3[((ulong)bVar1 / 3) * 3 + -3]) {
    if (2 < bVar1) {
      uVar2 = bVar1 / 3;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      uVar3 = (ulong)uVar2;
      do {
        fVar5 = param_3[3];
        if (param_1 < fVar5) {
          fVar5 = (param_1 - *param_3) / (fVar5 - *param_3);
          fVar4 = fVar5 * (fVar5 + fVar5);
          fVar6 = fVar5 * fVar5 * 3.0;
          fVar7 = fVar5 * fVar5;
          return param_3[4] * (fVar6 + fVar5 * fVar5 * fVar5 * -2.0) +
                 ((fVar4 * fVar5 - fVar6) + 1.0) * param_3[1] +
                 (fVar5 + (fVar7 * fVar5 - fVar4)) * param_3[2] +
                 (fVar7 * fVar5 - fVar7) * param_3[5];
        }
        uVar3 = uVar3 - 1;
        param_3 = param_3 + 3;
      } while (uVar3 != 0);
    }
    return 0.0;
  }
  return param_3[((ulong)bVar1 / 3) * 3 + -2];
}

