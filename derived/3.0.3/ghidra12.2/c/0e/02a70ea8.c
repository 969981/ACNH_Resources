
void FUN_02a70ea8(long param_1,uint *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x3b8) = uVar1;
  fVar2 = (float)param_2[4];
  *(float *)(param_1 + 0x3ac) = fVar2;
  fVar4 = (float)param_2[5];
  *(float *)(param_1 + 0x3b0) = fVar4;
  fVar5 = (float)param_2[6];
  *(float *)(param_1 + 0x3b4) = fVar5;
  fVar2 = (float)param_2[7] - fVar2;
  fVar4 = (float)param_2[8] - fVar4;
  fVar5 = (float)param_2[9] - fVar5;
  fVar6 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5);
  if (0.0 < fVar6) {
    fVar6 = 1.0 / fVar6;
    fVar2 = fVar2 * fVar6;
    fVar4 = fVar4 * fVar6;
    fVar5 = fVar5 * fVar6;
  }
  fVar7 = (float)param_2[3] * 0.5;
  fVar10 = (float)uVar1 * -1.4629181e-09;
  fVar6 = sinf(fVar10);
  fVar10 = cosf(fVar10);
  fVar8 = (float)param_2[1];
  *(float *)(param_1 + 0x394) = fVar8;
  fVar8 = fVar8 * 0.5;
  *(uint *)(param_1 + 0x398) = param_2[2];
  fVar9 = (float)param_2[3];
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  *(undefined1 *)(param_1 + 0x380) = 1;
  *(float *)(param_1 + 0x39c) = fVar9;
  fVar9 = fVar9 * 0.5;
  fVar3 = fVar4 * fVar7 * fVar6 * 0.0 + fVar2 * fVar7 * fVar10 + fVar5 * fVar7 * (fVar6 + 0.0) +
          *(float *)(param_1 + 0x3ac);
  fVar2 = (fVar4 * fVar7 * fVar10 * 0.0 - fVar2 * fVar7 * fVar6) + fVar5 * fVar7 * fVar10 +
          *(float *)(param_1 + 0x3b4);
  *(float *)(param_1 + 0x3a0) = fVar3;
  *(float *)(param_1 + 0x3a8) = fVar2;
  *(float *)(param_1 + 900) = fVar3 - fVar8;
  *(float *)(param_1 + 0x388) = fVar2 - fVar9;
  *(float *)(param_1 + 0x38c) = fVar8 + fVar3;
  *(float *)(param_1 + 0x390) = fVar9 + fVar2;
  return;
}

