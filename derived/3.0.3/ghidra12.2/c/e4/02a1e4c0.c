
void FUN_02a1e4c0(undefined1 param_1 [16],long param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar14 = param_1._12_4_;
  fVar13 = param_1._8_4_;
  fVar12 = param_1._4_4_;
  fVar11 = param_1._0_4_;
  if (*(long *)(param_2 + 0x50) != 0) {
    fVar18 = (float)*(undefined8 *)(param_2 + 0x128);
    fVar17 = (float)((ulong)*(undefined8 *)(param_2 + 0x128) >> 0x20);
    fVar15 = (float)*(undefined8 *)(param_2 + 0x120);
    fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0x120) >> 0x20);
    fVar19 = *(float *)(param_2 + 0x78);
    fVar20 = *(float *)(param_2 + 0x68);
    puVar10 = *(undefined8 **)(param_2 + 0x70);
    if (puVar10 == (undefined8 *)0x0) {
      uVar25 = *(ulong *)(param_2 + 0x138);
      uVar22 = *(undefined8 *)(param_2 + 0x130);
    }
    else {
      uVar22 = *puVar10;
      uVar25 = (ulong)*(uint *)(puVar10 + 1);
    }
    fVar21 = (float)uVar22 - fVar15;
    fVar23 = (float)((ulong)uVar22 >> 0x20) - fVar16;
    fVar24 = (float)uVar25 - fVar18;
    fVar26 = (float)(uVar25 >> 0x20) - fVar17;
    fVar27 = fVar21 * fVar21;
    fVar28 = fVar23 * fVar23;
    auVar30._4_4_ = fVar28;
    auVar30._0_4_ = fVar27;
    auVar30._8_4_ = fVar24 * fVar24;
    auVar30._12_4_ = fVar26 * fVar26;
    auVar7._4_4_ = fVar28;
    auVar7._0_4_ = fVar27;
    auVar7._8_4_ = fVar24 * fVar24;
    auVar7._12_4_ = fVar26 * fVar26;
    auVar30 = NEON_ext(auVar30,auVar7,8,1);
    fVar27 = SQRT(auVar30._0_4_ + fVar27 + auVar30._4_4_ + fVar28);
    bVar8 = false;
    bVar9 = true;
    if (-1.1920929e-07 <= fVar27) {
      bVar8 = false;
      bVar9 = true;
      if (!NAN(fVar27)) {
        bVar8 = fVar27 == 1.1920929e-07;
        bVar9 = 1.1920929e-07 <= fVar27;
      }
    }
    if (!bVar9 || bVar8) {
      fVar20 = *(float *)(param_2 + 0x110) - fVar11;
      fVar19 = *(float *)(param_2 + 0x114) - fVar12;
      fVar21 = *(float *)(param_2 + 0x118) - fVar13;
      fVar23 = *(float *)(param_2 + 0x11c) - fVar14;
      fVar15 = (fVar15 - fVar11) * (fVar15 - fVar11);
      fVar16 = (fVar16 - fVar12) * (fVar16 - fVar12);
      fVar11 = (fVar18 - fVar13) * (fVar18 - fVar13);
      fVar12 = (fVar17 - fVar14) * (fVar17 - fVar14);
      auVar5._4_4_ = fVar16;
      auVar5._0_4_ = fVar15;
      auVar5._8_4_ = fVar11;
      auVar5._12_4_ = fVar12;
      auVar6._4_4_ = fVar16;
      auVar6._0_4_ = fVar15;
      auVar6._8_4_ = fVar11;
      auVar6._12_4_ = fVar12;
      auVar30 = NEON_ext(auVar5,auVar6,8,1);
      fVar11 = fVar20 * fVar20;
      fVar12 = fVar19 * fVar19;
      fVar13 = fVar21 * fVar21;
      fVar14 = fVar23 * fVar23;
      fVar20 = SQRT(auVar30._0_4_ + fVar15 + auVar30._4_4_ + fVar16);
      *(ulong *)param_3 = CONCAT44(fVar20,fVar20);
    }
    else {
      fVar28 = fVar21;
      fVar32 = fVar23;
      fVar33 = fVar24;
      fVar29 = fVar26;
      if (0.0 < fVar27) {
        fVar29 = 1.0 / fVar27;
        fVar28 = fVar21 * fVar29;
        fVar32 = fVar23 * fVar29;
        fVar33 = fVar24 * fVar29;
        fVar29 = fVar26 * fVar29;
      }
      auVar31._0_4_ = (fVar11 - fVar15) * fVar28;
      auVar31._4_4_ = (fVar12 - fVar16) * fVar32;
      auVar31._8_4_ = (fVar13 - fVar18) * fVar33;
      auVar31._12_4_ = (fVar14 - fVar17) * fVar29;
      auVar30 = NEON_ext(auVar31,auVar31,8,1);
      fVar27 = (auVar30._0_4_ + auVar31._0_4_ + auVar30._4_4_ + auVar31._4_4_) / fVar27;
      fVar28 = fVar19;
      if (fVar20 <= fVar19) {
        fVar28 = fVar20;
        fVar20 = fVar19;
      }
      if (fVar27 <= fVar20) {
        fVar20 = fVar27;
      }
      if (fVar28 <= fVar27) {
        fVar28 = fVar20;
      }
      fVar20 = (fVar15 + fVar21 * fVar28) - fVar11;
      fVar15 = (fVar16 + fVar23 * fVar28) - fVar12;
      fVar16 = (fVar18 + fVar24 * fVar28) - fVar13;
      fVar18 = (fVar17 + fVar26 * fVar28) - fVar14;
      fVar11 = *(float *)(param_2 + 0x110) - fVar11;
      fVar12 = *(float *)(param_2 + 0x114) - fVar12;
      fVar13 = *(float *)(param_2 + 0x118) - fVar13;
      fVar14 = *(float *)(param_2 + 0x11c) - fVar14;
      fVar20 = fVar20 * fVar20;
      fVar15 = fVar15 * fVar15;
      fVar16 = fVar16 * fVar16;
      fVar18 = fVar18 * fVar18;
      auVar3._4_4_ = fVar15;
      auVar3._0_4_ = fVar20;
      auVar3._8_4_ = fVar16;
      auVar3._12_4_ = fVar18;
      auVar4._4_4_ = fVar15;
      auVar4._0_4_ = fVar20;
      auVar4._8_4_ = fVar16;
      auVar4._12_4_ = fVar18;
      auVar30 = NEON_ext(auVar3,auVar4,8,1);
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      fVar13 = fVar13 * fVar13;
      fVar14 = fVar14 * fVar14;
      fVar20 = SQRT(auVar30._0_4_ + fVar20 + auVar30._4_4_ + fVar15) - *(float *)(param_2 + 0xa4);
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      *param_3 = fVar20;
      param_3[1] = fVar20;
    }
    auVar1._4_4_ = fVar12;
    auVar1._0_4_ = fVar11;
    auVar1._8_4_ = fVar13;
    auVar1._12_4_ = fVar14;
    auVar2._4_4_ = fVar12;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar13;
    auVar2._12_4_ = fVar14;
    auVar30 = NEON_ext(auVar1,auVar2,8,1);
    fVar11 = SQRT(auVar30._0_4_ + fVar11 + auVar30._4_4_ + fVar12);
    param_3[4] = fVar20;
    param_3[5] = fVar11;
    *(ulong *)(param_3 + 2) = CONCAT44(fVar11,fVar11);
  }
  return;
}

