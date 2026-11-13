
void FUN_013c70c8(long param_1)

{
  uint uVar1;
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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  *(undefined1 *)(param_1 + 0xa50) = 0;
  FUN_013bb7b8();
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(param_1 + 0xa14) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_1 + 0x310);
  FUN_013bbef4(param_1,1);
  *(float *)(param_1 + 0x56c) = *(float *)(param_1 + 0x294);
  fVar7 = *(float *)(param_1 + 0x294) - *(float *)(param_1 + 0x2e0);
  *(float *)(param_1 + 0x570) = *(float *)(param_1 + 0x298);
  *(float *)(param_1 + 0x574) = *(float *)(param_1 + 0x29c);
  fVar9 = *(float *)(param_1 + 0x298) - *(float *)(param_1 + 0x2e4);
  fVar8 = *(float *)(param_1 + 0x29c) - *(float *)(param_1 + 0x2e8);
  uVar2 = nn::os::GetSystemTick();
  fVar9 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
  if (0.0 < fVar9) {
    uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
    uVar2 = uVar1 ^ uVar1 * 0x800;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    fVar3 = (float)((uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1) >> 9 | 0x3f800000) + -1.0;
    fVar9 = (fVar3 + fVar3 + 2.0) / fVar9;
    fVar7 = fVar7 * fVar9;
    fVar8 = fVar8 * fVar9;
  }
  fVar10 = *(float *)(param_1 + 0x298);
  fVar11 = *(float *)(param_1 + 0x55c);
  uVar2 = nn::os::GetSystemTick();
  fVar6 = *(float *)(param_1 + 0x294);
  fVar4 = *(float *)(param_1 + 0x298);
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = uVar1 ^ uVar1 * 0x800;
  fVar5 = *(float *)(param_1 + 0x29c);
  fVar3 = fVar8 + fVar5;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(float *)(param_1 + 0xa34) = fVar3;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  fVar9 = ((float)((uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1) >> 9 | 0x3f800000) + -1.0) * 5.0 +
          5.0;
  if (fVar10 <= fVar11) {
    fVar9 = -fVar9;
  }
  fVar10 = fVar7 + fVar6;
  fVar11 = fVar9 + fVar4;
  fVar12 = *(float *)(param_1 + 700) - fVar10;
  *(float *)(param_1 + 0xa2c) = fVar10;
  *(float *)(param_1 + 0xa30) = fVar11;
  fVar13 = *(float *)(param_1 + 0x2c0) - fVar11;
  fVar15 = *(float *)(param_1 + 0x2c4) - fVar3;
  fVar17 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar15 * fVar15);
  fVar16 = fVar17 * 0.5;
  if (0.0 < fVar17) {
    fVar17 = 1.0 / fVar17;
    fVar12 = fVar12 * fVar17;
    fVar13 = fVar13 * fVar17;
    fVar15 = fVar15 * fVar17;
  }
  fVar17 = fVar10 + fVar16 * fVar12;
  fVar14 = fVar11 + fVar16 * fVar13;
  fVar16 = fVar3 + fVar16 * fVar15;
  *(float *)(param_1 + 0xa44) = fVar17;
  *(float *)(param_1 + 0xa48) = fVar14;
  *(float *)(param_1 + 0xa4c) = fVar16;
  fVar13 = (fVar10 + *(float *)(param_1 + 0x3a0)) * 0.5 - fVar6;
  fVar12 = (fVar11 + *(float *)(param_1 + 0x3a4)) * 0.5 - fVar4;
  fVar15 = (fVar3 + *(float *)(param_1 + 0x3a8)) * 0.5 - fVar5;
  fVar18 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar15 * fVar15);
  if (0.0 < fVar18) {
    fVar18 = 1.0 / fVar18;
    fVar13 = fVar13 * fVar18;
    fVar12 = fVar12 * fVar18;
    fVar15 = fVar15 * fVar18;
    fVar18 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar15 * fVar15);
  }
  fVar17 = (fVar10 + fVar17) * 0.5 - fVar6;
  fVar9 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
  fVar7 = (fVar11 + fVar14) * 0.5 - fVar4;
  fVar8 = (fVar3 + fVar16) * 0.5 - fVar5;
  fVar16 = fVar9 / fVar18;
  if (0.0 < fVar18) {
    fVar15 = fVar16 * fVar15;
    fVar12 = fVar16 * fVar12;
    fVar13 = fVar13 * fVar16;
  }
  *(float *)(param_1 + 0xa20) = fVar6 + fVar13;
  *(float *)(param_1 + 0xa24) = fVar4 + fVar12;
  *(float *)(param_1 + 0xa28) = fVar5 + fVar15;
  fVar16 = SQRT(fVar7 * fVar7 + fVar17 * fVar17 + fVar8 * fVar8);
  if (0.0 < fVar16) {
    fVar16 = 1.0 / fVar16;
    fVar17 = fVar17 * fVar16;
    fVar7 = fVar7 * fVar16;
    fVar8 = fVar8 * fVar16;
    fVar16 = SQRT(fVar7 * fVar7 + fVar17 * fVar17 + fVar8 * fVar8);
  }
  if (0.0 < fVar16) {
    fVar9 = fVar9 / fVar16;
    fVar17 = fVar9 * fVar17;
    fVar7 = fVar9 * fVar7;
    fVar8 = fVar8 * fVar9;
  }
  *(float *)(param_1 + 0x294) = fVar6 + fVar13;
  *(float *)(param_1 + 0x298) = fVar4 + fVar12;
  *(float *)(param_1 + 0x29c) = fVar5 + fVar15;
  *(float *)(param_1 + 0x3ac) = fVar10;
  *(float *)(param_1 + 0x3b0) = fVar11;
  *(float *)(param_1 + 0x3b4) = fVar3;
  *(float *)(param_1 + 0xa38) = fVar6 + fVar17;
  *(float *)(param_1 + 0xa3c) = fVar4 + fVar7;
  *(float *)(param_1 + 0xa40) = fVar5 + fVar8;
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0xa1c);
  FUN_013bba10(param_1);
  if (*(int *)(param_1 + 0x510) == 4) {
    return;
  }
  FUN_03ebb160(param_1 + 0x508);
  return;
}

