
void FUN_038e4474(long param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar12 = *param_3;
  fVar2 = *(float *)(param_1 + 0xc);
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar6 = *(float *)(param_1 + 0x24);
  fVar8 = *(float *)(param_1 + 0x2c);
  fVar9 = *(float *)(param_1 + 0x30);
  fVar10 = *(float *)(param_1 + 0x34);
  fVar11 = param_3[1];
  fVar7 = param_3[2];
  *param_2 = *(float *)(param_1 + 8) * fVar12 +
             *(float *)(param_1 + 0x28) * fVar7 +
             *(float *)(param_1 + 0x18) * fVar11 +
             ((-(*(float *)(param_1 + 0x18) * fVar6) - fVar4 * *(float *)(param_1 + 8)) -
             fVar10 * *(float *)(param_1 + 0x28));
  param_2[1] = fVar2 * fVar12 +
               fVar8 * fVar7 +
               fVar1 * fVar11 + ((-(fVar1 * fVar6) - fVar4 * fVar2) - fVar10 * fVar8);
  param_2[2] = fVar3 * fVar12 +
               fVar9 * fVar7 +
               fVar5 * fVar11 + ((-(fVar5 * fVar6) - fVar4 * fVar3) - fVar10 * fVar9);
  return;
}

