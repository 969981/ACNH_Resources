
undefined8
FUN_004d4530(undefined1 (*param_1) [16],undefined1 (*param_2) [12],undefined1 (*param_3) [12],
            undefined8 *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar19;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar15;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  float fVar22;
  undefined1 auVar21 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  
  fVar6 = (float)*(undefined8 *)(*param_2 + 8);
  fVar8 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar9 = (float)*(undefined8 *)*param_2;
  fVar4 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  fVar5 = (float)*(undefined8 *)(*param_3 + 8);
  fVar2 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  fVar3 = (float)*(undefined8 *)*param_3;
  fVar7 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  auVar10._12_4_ = fVar8;
  auVar10._0_12_ = *param_2;
  auVar24._12_4_ = fVar8;
  auVar24._0_12_ = *param_2;
  auVar10 = NEON_ext(auVar10,auVar24,4,1);
  auVar17._12_4_ = fVar2;
  auVar17._0_12_ = *param_3;
  auVar20._12_4_ = fVar2;
  auVar20._0_12_ = *param_3;
  auVar20 = NEON_ext(auVar17,auVar20,4,1);
  auVar17 = NEON_ext(auVar10,auVar10,8,1);
  auVar24 = NEON_ext(auVar20,auVar20,8,1);
  uVar14 = NEON_rev64(auVar17._0_8_,4);
  uVar15 = NEON_rev64(auVar24._0_8_,4);
  auVar17 = *param_1;
  fVar11 = (float)((ulong)uVar14 >> 0x20);
  fVar22 = (float)((ulong)uVar15 >> 0x20);
  auVar18._0_4_ = fVar9 * auVar20._0_4_ - fVar3 * auVar10._0_4_;
  auVar18._4_4_ = fVar4 * auVar20._4_4_ - fVar7 * auVar10._4_4_;
  auVar18._8_4_ = fVar6 * (float)uVar15 - fVar5 * (float)uVar14;
  auVar18._12_4_ = fVar8 * fVar22 - fVar2 * fVar11;
  auVar24 = NEON_ext(auVar18,auVar18,4,1);
  fVar23 = auVar17._0_4_;
  fVar12 = fVar23 * auVar24._0_4_;
  fVar25 = auVar17._4_4_;
  fVar19 = fVar25 * auVar24._4_4_;
  fVar26 = auVar17._8_4_;
  fVar27 = auVar17._12_4_;
  fVar13 = fVar12 + fVar19 + fVar26 * auVar18._0_4_;
  uVar16 = CONCAT44(fVar12 + fVar19 + fVar26 * auVar18._0_4_,fVar13);
  if (fVar13 == 0.0) {
    return 0x80040200;
  }
  auVar17 = NEON_ext(auVar17,auVar17,4,1);
  auVar29 = NEON_ext(auVar17,auVar17,8,1);
  uVar28 = NEON_rev64(auVar29._0_8_,4);
  fVar12 = (float)((ulong)uVar28 >> 0x20);
  auVar21._0_4_ = fVar3 * auVar17._0_4_ - fVar23 * auVar20._0_4_;
  auVar21._4_4_ = fVar7 * auVar17._4_4_ - fVar25 * auVar20._4_4_;
  auVar21._8_4_ = fVar5 * (float)uVar28 - fVar26 * (float)uVar15;
  auVar21._12_4_ = fVar2 * fVar12 - fVar27 * fVar22;
  auVar20 = NEON_ext(auVar21,auVar21,4,1);
  fVar3 = fVar23 * auVar10._0_4_ - fVar9 * auVar17._0_4_;
  fVar5 = fVar25 * auVar10._4_4_ - fVar4 * auVar17._4_4_;
  fVar7 = fVar26 * (float)uVar14 - fVar6 * (float)uVar28;
  fVar9 = fVar27 * fVar11 - fVar8 * fVar12;
  auVar29._4_4_ = fVar5;
  auVar29._0_4_ = fVar3;
  auVar29._8_4_ = fVar7;
  auVar29._12_4_ = fVar9;
  auVar1._4_4_ = fVar5;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar9;
  auVar17 = NEON_ext(auVar29,auVar1,4,1);
  uVar14 = NEON_frecpe(uVar16,4);
  uVar15 = NEON_frecps(uVar16,uVar14,4);
  fVar7 = (float)uVar14 * (float)uVar15;
  fVar9 = (float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar15 >> 0x20);
  uVar14 = NEON_frecps(uVar16,CONCAT44(fVar9,fVar7),4);
  fVar7 = (float)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x60) * fVar7 * (float)uVar14;
  fVar9 = (float)((ulong)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x60) >> 0x20) *
          fVar9 * (float)((ulong)uVar14 >> 0x20);
  param_4[1] = CONCAT44((auVar18._4_4_ * -fVar27 + 0.0 + auVar21._4_4_ * -fVar8 + fVar5 * -fVar2) *
                        fVar9,(auVar18._0_4_ * -fVar27 + 0.0 + auVar21._0_4_ * -fVar8 +
                              fVar3 * -fVar2) * fVar7);
  *param_4 = CONCAT44((auVar24._4_4_ * -fVar27 + 0.0 + auVar20._4_4_ * -fVar8 +
                      auVar17._4_4_ * -fVar2) * fVar9,
                      (auVar24._0_4_ * -fVar27 + 0.0 + auVar20._0_4_ * -fVar8 +
                      auVar17._0_4_ * -fVar2) * fVar7);
  return 0;
}

