
void FUN_00322694(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar4 = param_2[7];
  *(undefined8 *)(param_1 + 0x98) = param_2[5];
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x80) = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar4 = param_2[4];
  *(undefined8 *)(param_1 + 0xa0) = param_2[6];
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  fVar15 = (float)param_2[5];
  fVar16 = (float)((ulong)param_2[5] >> 0x20);
  fVar13 = (float)param_2[4];
  fVar14 = (float)((ulong)param_2[4] >> 0x20);
  fVar7 = (float)param_2[1];
  fVar8 = (float)((ulong)param_2[1] >> 0x20);
  fVar5 = (float)*param_2;
  fVar6 = (float)((ulong)*param_2 >> 0x20);
  fVar11 = (float)param_2[3];
  fVar12 = (float)((ulong)param_2[3] >> 0x20);
  fVar9 = (float)param_2[2];
  fVar10 = (float)((ulong)param_2[2] >> 0x20);
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  fVar12 = fVar12 * fVar12;
  auVar19._4_4_ = fVar10;
  auVar19._0_4_ = fVar9;
  auVar19._8_4_ = fVar11;
  auVar19._12_4_ = fVar12;
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar11;
  auVar1._12_4_ = fVar12;
  auVar19 = NEON_ext(auVar19,auVar1,8,1);
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  auVar17._4_4_ = fVar6;
  auVar17._0_4_ = fVar5;
  auVar17._8_4_ = fVar7;
  auVar17._12_4_ = fVar8;
  auVar18._4_4_ = fVar6;
  auVar18._0_4_ = fVar5;
  auVar18._8_4_ = fVar7;
  auVar18._12_4_ = fVar8;
  auVar17 = NEON_ext(auVar17,auVar18,8,1);
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  fVar16 = fVar16 * fVar16;
  auVar2._4_4_ = fVar14;
  auVar2._0_4_ = fVar13;
  auVar2._8_4_ = fVar15;
  auVar2._12_4_ = fVar16;
  auVar3._4_4_ = fVar14;
  auVar3._0_4_ = fVar13;
  auVar3._8_4_ = fVar15;
  auVar3._12_4_ = fVar16;
  auVar18 = NEON_ext(auVar2,auVar3,8,1);
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar15 = 0.0;
  fVar8 = 0.0;
  fVar7 = SQRT(auVar18._0_4_ + fVar13 + auVar18._4_4_ + fVar14);
  *(ulong *)(param_1 + 0x100) =
       CONCAT44(SQRT(auVar19._0_4_ + fVar9 + auVar19._4_4_ + fVar10),
                SQRT(auVar17._0_4_ + fVar5 + auVar17._4_4_ + fVar6));
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  fVar5 = (float)uVar4;
  fVar6 = (float)((ulong)uVar4 >> 0x20);
  *(ulong *)(param_1 + 0x108) = (ulong)(uint)fVar7;
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  if (0.0 < fVar5) {
    fVar9 = 1.0 / fVar5;
    uVar4 = *param_2;
    *(ulong *)(param_1 + 0xb8) =
         CONCAT44((float)((ulong)param_2[1] >> 0x20) * fVar9,(float)param_2[1] * fVar9);
    *(ulong *)(param_1 + 0xb0) =
         CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar9,(float)uVar4 * fVar9);
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (0.0 < fVar6) {
    fVar9 = 1.0 / fVar6;
    uVar4 = param_2[2];
    *(ulong *)(param_1 + 200) =
         CONCAT44((float)((ulong)param_2[3] >> 0x20) * fVar9,(float)param_2[3] * fVar9);
    *(ulong *)(param_1 + 0xc0) =
         CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar9,(float)uVar4 * fVar9);
  }
  else {
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (0.0 < fVar7) {
    fVar8 = 1.0 / fVar7;
    fVar11 = (float)param_2[4] * fVar8;
    fVar12 = (float)((ulong)param_2[4] >> 0x20) * fVar8;
    fVar15 = (float)param_2[5] * fVar8;
    fVar8 = (float)((ulong)param_2[5] >> 0x20) * fVar8;
  }
  *(ulong *)(param_1 + 0xd8) = CONCAT44(fVar8,fVar15);
  *(ulong *)(param_1 + 0xd0) = CONCAT44(fVar12,fVar11);
  uVar4 = param_2[6];
  *(undefined8 *)(param_1 + 0xe8) = param_2[7];
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  *(ulong *)(param_1 + 0x158) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20) * 0.0,
                fVar7 * (float)*(undefined8 *)(param_1 + 0x138));
  *(ulong *)(param_1 + 0x150) =
       CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(param_1 + 0x130) >> 0x20),
                fVar5 * (float)*(undefined8 *)(param_1 + 0x130));
  return;
}

