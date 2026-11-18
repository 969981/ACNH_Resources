
void FUN_032b2864(long param_1,float *param_2)

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
  
  if (*(int *)(param_1 + 0xac) != 0) {
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar1 = *(float *)(param_1 + 0x30);
    fVar6 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
    fVar5 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34);
    fVar7 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0xc0);
    fVar10 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0xb8);
    fVar9 = *param_2;
    if (*(int *)(param_1 + 8) == 0) {
      fVar9 = 0.0;
    }
    fVar3 = *param_2;
    fVar4 = 0.0;
    if (*(int *)(param_1 + 8) != 1) {
      fVar3 = fVar9;
      fVar4 = param_2[1];
    }
    fVar4 = fVar1 + fVar4;
    fVar3 = fVar2 + fVar3;
    fVar9 = *(float *)(param_1 + 0xc4) + (*(float *)(param_1 + 0x24) - fVar5);
    fVar8 = *(float *)(param_1 + 0xbc) + (*(float *)(param_1 + 0x28) - fVar6);
    if (fVar3 <= fVar9) {
      fVar9 = fVar3;
    }
    if (fVar4 <= fVar8) {
      fVar8 = fVar4;
    }
    if (fVar7 <= fVar9) {
      fVar7 = fVar9;
    }
    if (fVar10 <= fVar8) {
      fVar10 = fVar8;
    }
    fVar9 = 0.5;
    if (fVar7 < 0.0) {
      fVar9 = -0.5;
    }
    fVar4 = 0.5;
    if (fVar10 < 0.0) {
      fVar4 = -0.5;
    }
    fVar7 = (float)(int)(fVar7 + fVar9);
    fVar10 = (float)(int)(fVar10 + fVar4);
    *(float *)(param_1 + 0x2c) = fVar7;
    *(float *)(param_1 + 0x34) = fVar7;
    *(float *)(param_1 + 0x30) = fVar10;
    *(float *)(param_1 + 0x38) = fVar10;
    *(float *)(param_1 + 0x3c) = fVar5 + fVar7;
    *(bool *)(param_1 + 0x150) = fVar1 != fVar10 || fVar2 != fVar7;
    *(float *)(param_1 + 0x40) = fVar6 + fVar10;
  }
  return;
}

