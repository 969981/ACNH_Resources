
void FUN_030b2978(float param_1,long *param_2,float *param_3,float *param_4,long *param_5,
                 float *param_6)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_58;
  float fStack_54;
  
  if (((param_3 != (float *)0x0) && (param_4 != (float *)0x0)) && (param_5 != (long *)0x0)) {
    fStack_54 = param_3[1] + param_6[1];
    local_58 = *param_3 + *param_6;
    (**(code **)(*param_2 + 8))(param_2,&local_58);
    fVar2 = *param_4;
    fVar3 = param_4[1];
    fVar7 = (fStack_54 - fVar3) * param_1 + 0.5;
    fVar8 = (local_58 - fVar2) * param_1 + 0.5;
    if (0.0 < SQRT(param_6[1] * param_6[1] + *param_6 * *param_6)) {
      uVar1 = (**(code **)(*param_5 + 0x30))(param_5);
      fVar2 = *param_4;
      fVar3 = param_4[1];
      if ((uVar1 & 1) == 0) {
        fVar4 = 1.0;
        if (fVar8 <= 1.0) {
          fVar4 = fVar8;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar8) {
          fVar5 = fVar4;
        }
        fVar4 = 1.0;
        if (fVar7 <= 1.0) {
          fVar4 = fVar7;
        }
        fVar6 = 0.0;
        if (0.0 <= fVar7) {
          fVar6 = fVar4;
        }
        fVar2 = (1.0 / param_1) * (fVar8 - fVar5) + fVar2;
        fVar3 = (1.0 / param_1) * (fVar7 - fVar6) + fVar3;
        *param_4 = fVar2;
        param_4[1] = fVar3;
      }
    }
    fVar4 = 0.5;
    if (fVar8 <= 1.0) {
      fVar4 = fVar8 + -0.5;
    }
    fVar5 = 0.5;
    if (fVar7 <= 1.0) {
      fVar5 = fVar7 + -0.5;
    }
    fVar6 = -0.5;
    if (0.0 <= fVar8) {
      fVar6 = fVar4;
    }
    fVar8 = -0.5;
    if (0.0 <= fVar7) {
      fVar8 = fVar5;
    }
    *(ulong *)param_3 = CONCAT44((1.0 / param_1) * fVar8 + fVar3,(1.0 / param_1) * fVar6 + fVar2);
  }
  return;
}

