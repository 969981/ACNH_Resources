
float FUN_03baa634(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 1.0;
  }
  fVar1 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  if (((fVar1 != 0.0) || (fVar4 != 0.0)) || (fVar5 != 0.0)) {
    fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar5 * fVar5);
    if (*(float *)(param_1 + 0x60) < fVar3) {
      if (fVar3 <= *(float *)(param_1 + 100)) {
        fVar3 = (fVar3 - *(float *)(param_1 + 0x60)) / *(float *)(param_1 + 0x68);
        if (fVar3 == 0.0) goto LAB_03baa72c;
      }
      else {
        fVar3 = 1.0;
      }
      fVar7 = fVar4 + fVar5 * -0.0;
      fVar6 = fVar5 * 0.0 - fVar1;
      fVar2 = fVar1 * 0.0 + fVar4 * -0.0;
      fVar1 = atan2f(SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar2 * fVar2),
                     (fVar4 * -0.0 + fVar1 * -0.0) - fVar5);
      if ((*(float *)(param_1 + 0x54) < fVar1) &&
         ((fVar4 = 1.0, *(float *)(param_1 + 0x58) < fVar1 ||
          (fVar4 = (fVar1 - *(float *)(param_1 + 0x54)) / *(float *)(param_1 + 0x5c), fVar4 != 0.0))
         )) {
        if (fVar4 <= fVar3) {
          fVar3 = fVar4;
        }
        if (fVar3 == 1.0) {
          return *(float *)(param_1 + 0x70);
        }
        return *(float *)(param_1 + 0x6c) + fVar3 * *(float *)(param_1 + 0x74);
      }
    }
  }
LAB_03baa72c:
  return *(float *)(param_1 + 0x6c);
}

