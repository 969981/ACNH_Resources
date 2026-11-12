
void FUN_00989ca4(float param_1,long param_2,float *param_3,float *param_4,uint param_5,
                 float *param_6)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = *(float *)(param_2 + 0x110) - *(float *)(param_2 + 0x104);
  fVar5 = *(float *)(param_2 + 0x10c);
  fVar4 = *(float *)(param_2 + 0x100);
  fVar3 = *(float *)(param_2 + 0x108);
  fVar6 = fVar5 - fVar4;
  fVar7 = *(float *)(param_2 + 0x114) - fVar3;
  fVar9 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7;
  bVar1 = false;
  bVar2 = true;
  if (-1.1920929e-07 <= fVar9) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar9)) {
      bVar1 = fVar9 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar9;
    }
  }
  if (bVar2 && !bVar1) {
    fVar9 = (fVar8 * (param_3[1] - *(float *)(param_2 + 0x104)) + fVar6 * (*param_3 - fVar4) +
            fVar7 * (param_3[2] - fVar3)) / fVar9;
    if (0.0 <= fVar9) {
      fVar8 = *(float *)(param_2 + 0x114);
      if (fVar9 <= 1.0) {
        fVar3 = fVar3 + fVar7 * fVar9;
        fVar4 = fVar4 + fVar6 * fVar9;
        goto LAB_00989d48;
      }
    }
    else {
      fVar5 = fVar4;
      fVar8 = fVar3;
    }
    fVar3 = fVar8;
    fVar4 = fVar5;
  }
LAB_00989d48:
  bVar1 = (param_5 & 1) == 0;
  fVar5 = *param_4 - fVar4;
  if (bVar1) {
    fVar5 = fVar4 - *param_4;
  }
  fVar6 = fVar3;
  fVar4 = param_4[2];
  if (bVar1) {
    fVar6 = param_4[2];
    fVar4 = fVar3;
  }
  fVar7 = 0.0;
  fVar4 = fVar4 - fVar6;
  fVar8 = SQRT(fVar5 * fVar5 + 0.0 + fVar4 * fVar4);
  fVar6 = (*(float *)(param_2 + 0x118) + param_1) - fVar8;
  fVar3 = 0.0;
  if (0.0 <= fVar6) {
    fVar3 = fVar6;
  }
  bVar1 = false;
  bVar2 = true;
  if (-1.1920929e-07 <= fVar8) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar8)) {
      bVar1 = fVar8 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar8;
    }
  }
  if (bVar2 && !bVar1) {
    fVar8 = fVar3 / fVar8;
    fVar3 = fVar5 * fVar8;
    fVar7 = fVar8 * 0.0;
    fVar4 = fVar4 * fVar8;
  }
  *param_6 = fVar3 + *param_6;
  param_6[1] = fVar7 + param_6[1];
  param_6[2] = fVar4 + param_6[2];
  return;
}

