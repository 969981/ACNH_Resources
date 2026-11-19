
void FUN_038e4634(long param_1,float *param_2)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar4 = *(float *)(param_1 + 0x38);
  fVar5 = *(float *)(param_1 + 0x3c);
  fVar3 = *(float *)(param_1 + 0x40);
  fVar7 = *(float *)(param_1 + 0x48);
  fVar8 = *(float *)(param_1 + 0x4c);
  bVar1 = false;
  if ((fVar4 == *(float *)(param_1 + 0x44)) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar7))) {
    bVar1 = fVar5 == fVar7;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(fVar3) && !NAN(fVar8))) {
    bVar2 = fVar3 == fVar8;
  }
  if (!bVar2) {
    fVar6 = fVar4 - *(float *)(param_1 + 0x44);
    fVar7 = fVar5 - fVar7;
    fVar8 = fVar3 - fVar8;
    fVar9 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
    if (0.0 < fVar9) {
      fVar9 = 1.0 / fVar9;
      fVar6 = fVar6 * fVar9;
      fVar7 = fVar7 * fVar9;
      fVar8 = fVar8 * fVar9;
    }
    fVar10 = -(*(float *)(param_1 + 0x58) * fVar7) + fVar8 * *(float *)(param_1 + 0x54);
    fVar11 = -(*(float *)(param_1 + 0x50) * fVar8) + fVar6 * *(float *)(param_1 + 0x58);
    fVar9 = -(*(float *)(param_1 + 0x54) * fVar6) + fVar7 * *(float *)(param_1 + 0x50);
    fVar12 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
    if (0.0 < fVar12) {
      fVar12 = 1.0 / fVar12;
      fVar10 = fVar10 * fVar12;
      fVar11 = fVar11 * fVar12;
      fVar9 = fVar9 * fVar12;
    }
    fVar12 = -(fVar8 * fVar11) + fVar9 * fVar7;
    *param_2 = fVar10;
    param_2[1] = fVar11;
    fVar13 = -(fVar6 * fVar9) + fVar10 * fVar8;
    param_2[8] = fVar6;
    param_2[9] = fVar7;
    fVar14 = -(fVar7 * fVar10) + fVar11 * fVar6;
    param_2[4] = fVar12;
    param_2[5] = fVar13;
    param_2[10] = fVar8;
    param_2[0xb] = -(fVar8 * fVar3) - (fVar5 * fVar7 + fVar4 * fVar6);
    param_2[2] = fVar9;
    param_2[3] = -(fVar9 * fVar3) - (fVar5 * fVar11 + fVar4 * fVar10);
    param_2[6] = fVar14;
    param_2[7] = -(fVar14 * fVar3) - (fVar5 * fVar13 + fVar4 * fVar12);
  }
  return;
}

