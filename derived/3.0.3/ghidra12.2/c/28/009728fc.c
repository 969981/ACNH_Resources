
void FUN_009728fc(float *param_1,float *param_2,float *param_3,float *param_4,uint *param_5,
                 long param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar2 = *param_5;
  if ((int)uVar2 < 0x40) {
    fVar4 = *param_3;
    fVar5 = param_3[1];
    fVar6 = param_3[2];
    fVar12 = *param_1;
    fVar14 = param_1[1];
    fVar13 = param_1[2];
    fVar15 = *param_2;
    fVar16 = param_2[1];
    fVar8 = fVar16 - fVar14;
    fVar7 = fVar15 - fVar12;
    fVar17 = param_2[2];
    fVar10 = fVar17 - fVar13;
    fVar18 = -(fVar10 * (fVar5 - fVar14)) + (fVar6 - fVar13) * fVar8;
    fVar10 = -(fVar7 * (fVar6 - fVar13)) + (fVar4 - fVar12) * fVar10;
    fVar8 = -(fVar8 * (fVar4 - fVar12)) + (fVar5 - fVar14) * fVar7;
    fVar7 = SQRT(fVar10 * fVar10 + fVar18 * fVar18 + fVar8 * fVar8);
    if (0.0 < fVar7) {
      fVar7 = 1.0 / fVar7;
      fVar18 = fVar18 * fVar7;
      fVar10 = fVar10 * fVar7;
      fVar8 = fVar8 * fVar7;
    }
    fVar11 = param_4[2];
    fVar7 = *param_4;
    fVar9 = param_4[1];
    lVar1 = param_6 + (ulong)uVar2 * 0x90;
    if (0x3f < uVar2) {
      lVar1 = param_6;
    }
    *(float *)(lVar1 + 0x10) = fVar12;
    *(float *)(lVar1 + 0x14) = fVar14;
    *(float *)(lVar1 + 0x18) = fVar13;
    *(float *)(lVar1 + 0x1c) = fVar15;
    *(float *)(lVar1 + 0x20) = fVar16;
    *(float *)(lVar1 + 0x24) = fVar17;
    *(float *)(lVar1 + 0x28) = fVar4;
    *(float *)(lVar1 + 0x2c) = fVar5;
    *(float *)(lVar1 + 0x30) = fVar6;
    *(float *)(lVar1 + 0x40) = fVar18;
    *(float *)(lVar1 + 0x44) = fVar10;
    *(undefined4 *)(lVar1 + 0x50) = 7;
    *(undefined4 *)(lVar1 + 0x54) = param_7;
    *(undefined4 *)(lVar1 + 0x58) = param_8;
    *(undefined8 *)(lVar1 + 0x5c) = 0;
    *(undefined8 *)(lVar1 + 0x61) = 0;
    *(undefined8 *)(lVar1 + 0x7d) = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0x88) = param_9;
    *(float *)(lVar1 + 0x48) = fVar8;
    *(float *)(lVar1 + 0x4c) = -(fVar8 * fVar13) - (fVar14 * fVar10 + fVar12 * fVar18);
    uVar3 = *param_5;
    uVar2 = uVar3 + 1;
    *param_5 = uVar2;
    if ((int)uVar3 < 0x3f) {
      fVar8 = *param_1;
      fVar12 = param_1[1];
      fVar10 = param_1[2];
      fVar16 = fVar9 - fVar12;
      fVar15 = fVar7 - fVar8;
      fVar14 = fVar11 - fVar10;
      fVar13 = -((fVar6 - fVar10) * fVar16) + fVar14 * (fVar5 - fVar12);
      fVar14 = -((fVar4 - fVar8) * fVar14) + fVar15 * (fVar6 - fVar10);
      fVar15 = -((fVar5 - fVar12) * fVar15) + fVar16 * (fVar4 - fVar8);
      fVar16 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15);
      if (0.0 < fVar16) {
        fVar16 = 1.0 / fVar16;
        fVar13 = fVar13 * fVar16;
        fVar14 = fVar14 * fVar16;
        fVar15 = fVar15 * fVar16;
      }
      lVar1 = param_6 + (ulong)uVar2 * 0x90;
      if (0x3f < uVar2) {
        lVar1 = param_6;
      }
      *(float *)(lVar1 + 0x10) = fVar8;
      *(float *)(lVar1 + 0x14) = fVar12;
      *(float *)(lVar1 + 0x18) = fVar10;
      *(float *)(lVar1 + 0x1c) = fVar4;
      *(float *)(lVar1 + 0x20) = fVar5;
      *(float *)(lVar1 + 0x24) = fVar6;
      *(float *)(lVar1 + 0x28) = fVar7;
      *(float *)(lVar1 + 0x2c) = fVar9;
      *(float *)(lVar1 + 0x30) = fVar11;
      *(float *)(lVar1 + 0x40) = fVar13;
      *(float *)(lVar1 + 0x44) = fVar14;
      *(float *)(lVar1 + 0x48) = fVar15;
      *(undefined4 *)(lVar1 + 0x50) = 7;
      *(undefined4 *)(lVar1 + 0x54) = param_7;
      *(undefined4 *)(lVar1 + 0x58) = param_8;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 0x61) = 0;
      *(undefined8 *)(lVar1 + 0x7d) = 0;
      *(undefined8 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x88) = param_9;
      *(float *)(lVar1 + 0x4c) = -(fVar15 * fVar10) - (fVar12 * fVar14 + fVar8 * fVar13);
      *param_5 = *param_5 + 1;
    }
  }
  return;
}

