
void FUN_03927bd8(long param_1)

{
  bool bVar1;
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
  float fVar13;
  
  fVar3 = *(float *)(param_1 + 0x148);
  fVar5 = fVar3 - *(float *)(param_1 + 0x170);
  fVar4 = *(float *)(param_1 + 0x14c);
  fVar6 = fVar4 - *(float *)(param_1 + 0x174);
  fVar2 = *(float *)(param_1 + 0x150);
  fVar8 = fVar2 - *(float *)(param_1 + 0x178);
  fVar7 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar8 * fVar8);
  if (0.0 < fVar7) {
    fVar9 = 1.0 / fVar7;
    fVar5 = fVar5 * fVar9;
    fVar6 = fVar6 * fVar9;
    fVar8 = fVar8 * fVar9;
  }
  fVar9 = *(float *)(param_1 + 0x19c);
  bVar1 = 1.1920929e-07 <= fVar7;
  fVar7 = 0.0;
  if (bVar1) {
    fVar7 = fVar5;
  }
  fVar5 = 1.0;
  if (bVar1) {
    fVar5 = fVar6;
  }
  fVar6 = 0.0;
  if (bVar1) {
    fVar6 = fVar8;
  }
  fVar8 = *(float *)(param_1 + 0x198);
  fVar10 = *(float *)(param_1 + 0x1a0);
  fVar11 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
  if (0.0 < fVar11) {
    fVar13 = 1.0 / fVar11;
    fVar8 = fVar8 * fVar13;
    fVar9 = fVar9 * fVar13;
    fVar10 = fVar10 * fVar13;
  }
  if (1.1920929e-07 <= fVar11) {
    fVar13 = fVar5 * fVar9 + fVar7 * fVar8;
    fVar12 = fVar13 + fVar6 * fVar10;
    fVar13 = -(fVar10 * fVar6) - fVar13;
    fVar11 = fVar13;
    if (0.0 <= fVar12) {
      fVar11 = fVar12;
    }
    if (0.9999999 < fVar11) {
      fVar10 = fVar7 * 0.0 - fVar5;
      fVar8 = fVar6 * -0.0 + fVar5 * 0.0;
      fVar9 = fVar6 + fVar7 * -0.0;
      fVar13 = fVar5 * fVar9 + fVar7 * fVar8;
      fVar12 = fVar13 + fVar6 * fVar10;
      fVar13 = -(fVar10 * fVar6) - fVar13;
    }
    if (0.0 <= fVar12) {
      fVar13 = fVar12;
    }
    if (fVar13 <= 0.9999999) goto LAB_03927d08;
  }
  fVar9 = fVar6 * 0.0 - fVar7;
  fVar10 = fVar5 * -0.0 + fVar7 * 0.0;
  fVar8 = fVar5 + fVar6 * -0.0;
LAB_03927d08:
  fVar11 = -(fVar10 * fVar5) + fVar6 * fVar9;
  fVar10 = -(fVar8 * fVar6) + fVar7 * fVar10;
  fVar9 = -(fVar9 * fVar7) + fVar5 * fVar8;
  fVar8 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9);
  if (0.0 < fVar8) {
    fVar8 = 1.0 / fVar8;
    fVar11 = fVar11 * fVar8;
    fVar10 = fVar10 * fVar8;
    fVar9 = fVar9 * fVar8;
  }
  fVar8 = -(fVar6 * fVar10) + fVar9 * fVar5;
  *(float *)(param_1 + 0x24c) = fVar10;
  fVar13 = -(fVar7 * fVar9) + fVar11 * fVar6;
  *(float *)(param_1 + 0x268) = fVar7;
  fVar12 = -(fVar5 * fVar11) + fVar10 * fVar7;
  *(float *)(param_1 + 0x248) = fVar11;
  *(float *)(param_1 + 0x250) = fVar9;
  *(float *)(param_1 + 0x26c) = fVar5;
  *(float *)(param_1 + 0x270) = fVar6;
  *(float *)(param_1 + 600) = fVar8;
  *(float *)(param_1 + 0x25c) = fVar13;
  *(float *)(param_1 + 0x260) = fVar12;
  *(float *)(param_1 + 0x274) = -(fVar6 * fVar2) - (fVar4 * fVar5 + fVar3 * fVar7);
  *(float *)(param_1 + 0x254) = -(fVar9 * fVar2) - (fVar4 * fVar10 + fVar3 * fVar11);
  *(float *)(param_1 + 0x264) = -(fVar12 * fVar2) - (fVar4 * fVar13 + fVar3 * fVar8);
  return;
}

