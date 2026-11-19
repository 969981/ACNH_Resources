
float FUN_03baa4d0(long param_1,float *param_2)

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
  float fVar10;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 1.0;
  }
  fVar5 = *param_2 - *(float *)(param_1 + 0x24);
  fVar3 = param_2[1] - *(float *)(param_1 + 0x34);
  fVar6 = param_2[2] - *(float *)(param_1 + 0x44);
  if (((fVar5 != 0.0) || (fVar3 != 0.0)) || (fVar6 != 0.0)) {
    fVar1 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
    if (*(float *)(param_1 + 0x60) < fVar1) {
      if (fVar1 <= *(float *)(param_1 + 100)) {
        fVar1 = (fVar1 - *(float *)(param_1 + 0x60)) / *(float *)(param_1 + 0x68);
        if (fVar1 == 0.0) goto LAB_03baa600;
      }
      else {
        fVar1 = 1.0;
      }
      fVar8 = *(float *)(param_1 + 0x48);
      fVar9 = *(float *)(param_1 + 0x4c);
      fVar10 = *(float *)(param_1 + 0x50);
      if (((fVar8 != 0.0) || (fVar9 != 0.0)) || (fVar2 = 0.0, fVar10 != 0.0)) {
        fVar2 = -(fVar10 * fVar3) + fVar6 * fVar9;
        fVar4 = -(fVar9 * fVar5) + fVar3 * fVar8;
        fVar7 = -(fVar8 * fVar6) + fVar5 * fVar10;
        fVar2 = atan2f(SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar4 * fVar4),
                       fVar3 * fVar9 + fVar5 * fVar8 + fVar6 * fVar10);
      }
      if ((*(float *)(param_1 + 0x54) < fVar2) &&
         ((fVar3 = 1.0, *(float *)(param_1 + 0x58) < fVar2 ||
          (fVar3 = (fVar2 - *(float *)(param_1 + 0x54)) / *(float *)(param_1 + 0x5c), fVar3 != 0.0))
         )) {
        if (fVar3 <= fVar1) {
          fVar1 = fVar3;
        }
        if (fVar1 == 1.0) {
          return *(float *)(param_1 + 0x70);
        }
        return *(float *)(param_1 + 0x6c) + fVar1 * *(float *)(param_1 + 0x74);
      }
    }
  }
LAB_03baa600:
  return *(float *)(param_1 + 0x6c);
}

