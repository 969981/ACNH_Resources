
void FUN_02201470(float *param_1,undefined4 *param_2,float *param_3,float *param_4,byte *param_5)

{
  undefined *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_04bb2d00;
  uVar2 = (uint)*param_5;
  if ((*param_5 & 1) == 0) {
    fVar3 = 3.4028235e+38;
  }
  else {
    fVar8 = *(float *)PTR_DAT_04bb2d00 + *(float *)(PTR_DAT_04bb2d00 + 4) * 0.0;
    fVar3 = *(float *)(PTR_DAT_04bb2d00 + 8) + *(float *)(PTR_DAT_04bb2d00 + 0xc) * 0.0;
    fVar7 = fVar8 * 0.0;
    fVar9 = fVar8 * (fVar8 + fVar8);
    fVar3 = fVar3 + fVar3;
    fVar6 = (fVar8 + fVar8) * fVar7;
    fVar4 = fVar7 * (fVar7 + fVar7);
    fVar5 = fVar8 * (fVar7 + fVar7);
    fVar7 = fVar7 * fVar3;
    fVar8 = fVar8 * fVar3;
    fVar10 = *param_3 +
             (fVar4 + fVar8 + (fVar5 - fVar7) * 0.0 + ((1.0 - fVar9) - fVar4) * 0.0) * 10.0;
    fVar8 = param_3[2] +
            (((1.0 - fVar4) - fVar9) + (fVar6 + fVar7) * 0.0 + (fVar4 - fVar8) * 0.0) * 10.0;
    fVar3 = *param_4 - fVar10;
    fVar9 = param_4[2] - fVar8;
    fVar9 = fVar9 * fVar9 + fVar3 * fVar3;
    fVar3 = 3.4028235e+38;
    if (fVar9 < 3.4028235e+38) {
      fVar3 = param_3[1];
      *param_1 = fVar10;
      param_1[2] = fVar8;
      param_1[1] = ((fVar6 - fVar7) + ((1.0 - fVar4) - fVar4) * 0.0 + (fVar5 + fVar7) * 0.0) * 10.0
                   + fVar3;
      *param_2 = 0;
      uVar2 = (uint)*param_5;
      fVar3 = fVar9;
    }
  }
  if ((uVar2 >> 1 & 1) != 0) {
    fVar9 = *(float *)(puVar1 + 0x200) + *(float *)(puVar1 + 0x204) * 0.0;
    fVar6 = *(float *)(puVar1 + 0x208) + *(float *)(puVar1 + 0x20c) * 0.0;
    fVar7 = fVar9 * 0.0;
    fVar10 = fVar9 * (fVar9 + fVar9);
    fVar6 = fVar6 + fVar6;
    fVar5 = (fVar9 + fVar9) * fVar7;
    fVar8 = fVar7 * (fVar7 + fVar7);
    fVar4 = fVar9 * (fVar7 + fVar7);
    fVar7 = fVar7 * fVar6;
    fVar9 = fVar9 * fVar6;
    fVar6 = *param_3 +
            (fVar8 + fVar9 + (fVar4 - fVar7) * 0.0 + ((1.0 - fVar10) - fVar8) * 0.0) * 10.0;
    fVar9 = param_3[2] +
            (((1.0 - fVar8) - fVar10) + (fVar5 + fVar7) * 0.0 + (fVar8 - fVar9) * 0.0) * 10.0;
    fVar10 = *param_4 - fVar6;
    fVar11 = param_4[2] - fVar9;
    fVar10 = fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar10 < fVar3) {
      fVar3 = param_3[1];
      param_1[2] = fVar9;
      *param_1 = fVar6;
      param_1[1] = ((fVar5 - fVar7) + ((1.0 - fVar8) - fVar8) * 0.0 + (fVar4 + fVar7) * 0.0) * 10.0
                   + fVar3;
      *param_2 = 1;
      uVar2 = (uint)*param_5;
      fVar3 = fVar10;
    }
  }
  if ((uVar2 >> 2 & 1) != 0) {
    fVar9 = *(float *)(puVar1 + 0x400) + *(float *)(puVar1 + 0x404) * 0.0;
    fVar6 = *(float *)(puVar1 + 0x408) + *(float *)(puVar1 + 0x40c) * 0.0;
    fVar7 = fVar9 * 0.0;
    fVar10 = fVar9 * (fVar9 + fVar9);
    fVar6 = fVar6 + fVar6;
    fVar5 = (fVar9 + fVar9) * fVar7;
    fVar8 = fVar7 * (fVar7 + fVar7);
    fVar4 = fVar9 * (fVar7 + fVar7);
    fVar7 = fVar7 * fVar6;
    fVar9 = fVar9 * fVar6;
    fVar6 = *param_3 +
            (fVar8 + fVar9 + (fVar4 - fVar7) * 0.0 + ((1.0 - fVar10) - fVar8) * 0.0) * 10.0;
    fVar9 = param_3[2] +
            (((1.0 - fVar8) - fVar10) + (fVar5 + fVar7) * 0.0 + (fVar8 - fVar9) * 0.0) * 10.0;
    fVar10 = *param_4 - fVar6;
    fVar11 = param_4[2] - fVar9;
    fVar10 = fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar10 < fVar3) {
      fVar3 = param_3[1];
      param_1[2] = fVar9;
      *param_1 = fVar6;
      param_1[1] = ((fVar5 - fVar7) + ((1.0 - fVar8) - fVar8) * 0.0 + (fVar4 + fVar7) * 0.0) * 10.0
                   + fVar3;
      *param_2 = 2;
      uVar2 = (uint)*param_5;
      fVar3 = fVar10;
    }
  }
  if ((uVar2 >> 3 & 1) != 0) {
    fVar9 = *(float *)(puVar1 + 0x600) + *(float *)(puVar1 + 0x604) * 0.0;
    fVar6 = *(float *)(puVar1 + 0x608) + *(float *)(puVar1 + 0x60c) * 0.0;
    fVar7 = fVar9 * 0.0;
    fVar10 = fVar9 * (fVar9 + fVar9);
    fVar6 = fVar6 + fVar6;
    fVar5 = (fVar9 + fVar9) * fVar7;
    fVar8 = fVar7 * (fVar7 + fVar7);
    fVar4 = fVar9 * (fVar7 + fVar7);
    fVar7 = fVar7 * fVar6;
    fVar9 = fVar9 * fVar6;
    fVar6 = *param_3 +
            (fVar8 + fVar9 + (fVar4 - fVar7) * 0.0 + ((1.0 - fVar10) - fVar8) * 0.0) * 10.0;
    fVar9 = param_3[2] +
            (((1.0 - fVar8) - fVar10) + (fVar5 + fVar7) * 0.0 + (fVar8 - fVar9) * 0.0) * 10.0;
    fVar10 = *param_4 - fVar6;
    fVar11 = param_4[2] - fVar9;
    if (fVar11 * fVar11 + fVar10 * fVar10 < fVar3) {
      fVar3 = param_3[1];
      param_1[2] = fVar9;
      *param_1 = fVar6;
      param_1[1] = ((fVar5 - fVar7) + ((1.0 - fVar8) - fVar8) * 0.0 + (fVar4 + fVar7) * 0.0) * 10.0
                   + fVar3;
      *param_2 = 3;
    }
  }
  return;
}

