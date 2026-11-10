
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031dc44(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  ulong uVar11;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  ulong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  
  uVar1 = *(uint *)(param_1 + 0xac);
  uVar2 = uVar1 * 0x41c64e6d + 0x3039;
  lVar12 = *(long *)(param_1 + 0xa0);
  uVar3 = uVar2 * 0x41c64e6d + 0x3039;
  fVar25 = *(float *)(lVar12 + 0x7c8);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar4 = uVar3 * 0x41c64e6d + 0x3039;
  fVar25 = fVar25 + *(float *)(lVar12 + 0x7d4) * ((float)uVar1 * 2.3283064e-10 * 2.0 + -1.0);
  fVar20 = *(float *)(lVar12 + 0x7cc);
  *(uint *)(param_1 + 0xac) = uVar3;
  fVar20 = fVar20 + *(float *)(lVar12 + 0x7d8) * ((float)uVar2 * 2.3283064e-10 * 2.0 + -1.0);
  fVar26 = *(float *)(lVar12 + 2000);
  *(uint *)(param_1 + 0xac) = uVar4;
  fVar26 = fVar26 + *(float *)(lVar12 + 0x7dc) * ((float)uVar3 * 2.3283064e-10 * 2.0 + -1.0);
  fVar27 = *(float *)PTR_Float2Pi_04bcede0;
  fVar21 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar13 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar44 = *(float *)PTR_CosCoefficients_04bcedf0;
  fVar16 = *(float *)(PTR_CosCoefficients_04bcedf0 + 4);
  fVar43 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0xc);
  fVar47 = *(float *)PTR_SinCoefficients_04bcede8;
  auVar18._0_4_ = fVar25 - (float)(int)(fVar25 * fVar21) * fVar27;
  auVar18._4_4_ = fVar20 - (float)(int)(fVar20 * fVar21) * fVar27;
  auVar18._8_4_ = fVar26 - (float)(int)(fVar26 * fVar21) * fVar27;
  auVar18._12_4_ = 0.0 - (float)(int)(fVar21 * 0.0) * fVar27;
  fVar26 = *(float *)PTR_FloatPi_04bcedc8;
  fVar20 = -fVar13;
  fVar21 = -fVar26;
  fVar49 = -*(float *)(PTR_CosCoefficients_04bcedf0 + 8);
  auVar22._0_4_ = -(uint)(fVar13 < auVar18._0_4_);
  auVar22._4_4_ = -(uint)(fVar13 < auVar18._4_4_);
  auVar22._8_4_ = -(uint)(fVar13 < auVar18._8_4_);
  auVar22._12_4_ = -(uint)(fVar13 < auVar18._12_4_);
  auVar10._4_4_ = fVar26 - auVar18._4_4_;
  auVar10._0_4_ = fVar26 - auVar18._0_4_;
  auVar10._8_4_ = fVar26 - auVar18._8_4_;
  auVar10._12_4_ = fVar26 - auVar18._12_4_;
  auVar18 = auVar18 ^ (auVar18 ^ auVar10) & auVar22;
  fVar30 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc);
  fVar29 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4);
  iVar6 = -(uint)(auVar18._0_4_ < fVar20);
  iVar7 = -(uint)(auVar18._4_4_ < fVar20);
  bVar34 = (byte)((uint)iVar7 >> 8);
  bVar35 = (byte)((uint)iVar7 >> 0x10);
  bVar36 = (byte)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(auVar18._8_4_ < fVar20);
  bVar37 = (byte)((uint)iVar8 >> 8);
  bVar38 = (byte)((uint)iVar8 >> 0x10);
  bVar39 = (byte)((uint)iVar8 >> 0x18);
  iVar9 = -(uint)(auVar18._12_4_ < fVar20);
  bVar40 = (byte)((uint)iVar9 >> 8);
  bVar41 = (byte)((uint)iVar9 >> 0x10);
  bVar42 = (byte)((uint)iVar9 >> 0x18);
  auVar23[0] = (byte)iVar6 | (byte)auVar22._0_4_;
  auVar23[1] = (byte)((uint)iVar6 >> 8) | (byte)((uint)auVar22._0_4_ >> 8);
  auVar23[2] = (byte)((uint)iVar6 >> 0x10) | (byte)((uint)auVar22._0_4_ >> 0x10);
  auVar23[3] = (byte)((uint)iVar6 >> 0x18) | (byte)((uint)auVar22._0_4_ >> 0x18);
  auVar23[4] = (byte)iVar7 | (byte)auVar22._4_4_;
  auVar23[5] = bVar34 | (byte)((uint)auVar22._4_4_ >> 8);
  auVar23[6] = bVar35 | (byte)((uint)auVar22._4_4_ >> 0x10);
  auVar23[7] = bVar36 | (byte)((uint)auVar22._4_4_ >> 0x18);
  auVar23[8] = (byte)iVar8 | (byte)auVar22._8_4_;
  auVar23[9] = bVar37 | (byte)((uint)auVar22._8_4_ >> 8);
  auVar23[10] = bVar38 | (byte)((uint)auVar22._8_4_ >> 0x10);
  auVar23[0xb] = bVar39 | (byte)((uint)auVar22._8_4_ >> 0x18);
  auVar23[0xc] = (byte)iVar9 | (byte)auVar22._12_4_;
  auVar23[0xd] = bVar40 | (byte)((uint)auVar22._12_4_ >> 8);
  auVar23[0xe] = bVar41 | (byte)((uint)auVar22._12_4_ >> 0x10);
  auVar23[0xf] = bVar42 | (byte)((uint)auVar22._12_4_ >> 0x18);
  auVar46._4_4_ = fVar21 - auVar18._4_4_;
  auVar46._0_4_ = fVar21 - auVar18._0_4_;
  auVar46._8_4_ = fVar21 - auVar18._8_4_;
  auVar46._12_4_ = fVar21 - auVar18._12_4_;
  auVar17[4] = (byte)iVar7;
  auVar17._0_4_ = iVar6;
  auVar17[5] = bVar34;
  auVar17[6] = bVar35;
  auVar17[7] = bVar36;
  auVar17[8] = (byte)iVar8;
  auVar17[9] = bVar37;
  auVar17[10] = bVar38;
  auVar17[0xb] = bVar39;
  auVar17[0xc] = (byte)iVar9;
  auVar17[0xd] = bVar40;
  auVar17[0xe] = bVar41;
  auVar17[0xf] = bVar42;
  auVar18 = auVar18 ^ (auVar18 ^ auVar46) & auVar17;
  fVar26 = auVar18._0_4_;
  fVar28 = fVar26 * fVar26;
  fVar21 = auVar18._4_4_;
  fVar31 = fVar21 * fVar21;
  fVar25 = auVar18._8_4_;
  fVar32 = fVar25 * fVar25;
  fVar27 = auVar18._12_4_;
  fVar33 = fVar27 * fVar27;
  fVar45 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4) >> 0x20);
  fVar20 = -*(float *)(PTR_CosCoefficients_04bcedf0 + 0x10);
  fVar48 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc) >> 0x20);
  auVar46 = NEON_fmov(0x3f800000,4);
  uVar1 = uVar4 * 0x41c64e6d + 0x3039;
  uVar2 = uVar1 * 0x41c64e6d + 0x3039;
  auVar24._0_4_ =
       auVar46._0_4_ +
       fVar28 * (fVar20 + fVar28 * (fVar43 + fVar28 * (fVar49 + fVar28 * (fVar16 - fVar28 * fVar44))
                                   ));
  auVar24._4_4_ =
       auVar46._4_4_ +
       fVar31 * (fVar20 + fVar31 * (fVar43 + fVar31 * (fVar49 + fVar31 * (fVar16 - fVar31 * fVar44))
                                   ));
  auVar24._8_4_ =
       auVar46._8_4_ +
       fVar32 * (fVar20 + fVar32 * (fVar43 + fVar32 * (fVar49 + fVar32 * (fVar16 - fVar32 * fVar44))
                                   ));
  auVar24._12_4_ =
       auVar46._12_4_ +
       fVar33 * (fVar20 + fVar33 * (fVar43 + fVar33 * (fVar49 + fVar33 * (fVar16 - fVar33 * fVar44))
                                   ));
  fVar43 = *(float *)(lVar12 + 0x7b0);
  *(uint *)(param_1 + 0xac) = uVar1;
  fVar49 = *(float *)(lVar12 + 0x7bc);
  fVar20 = -auVar24._4_4_;
  fVar13 = -auVar24._8_4_;
  fVar16 = -auVar24._12_4_;
  auVar5[4] = SUB41(fVar20,0);
  auVar5._0_4_ = -auVar24._0_4_;
  auVar5[5] = (char)((uint)fVar20 >> 8);
  auVar5[6] = (char)((uint)fVar20 >> 0x10);
  auVar5[7] = (char)((uint)fVar20 >> 0x18);
  auVar5[8] = SUB41(fVar13,0);
  auVar5[9] = (char)((uint)fVar13 >> 8);
  auVar5[10] = (char)((uint)fVar13 >> 0x10);
  auVar5[0xb] = (char)((uint)fVar13 >> 0x18);
  auVar5[0xc] = SUB41(fVar16,0);
  auVar5[0xd] = (char)((uint)fVar16 >> 8);
  auVar5[0xe] = (char)((uint)fVar16 >> 0x10);
  auVar5[0xf] = (char)((uint)fVar16 >> 0x18);
  auVar24 = auVar24 ^ (auVar24 ^ auVar5) & auVar23;
  fVar44 = auVar24._4_4_;
  auVar19._0_4_ =
       fVar26 * (auVar46._0_4_ +
                fVar28 * (fVar48 + fVar28 * (fVar30 + fVar28 * (fVar45 + fVar28 * (fVar29 - fVar28 *
                                                                                            fVar47))
                                            )));
  auVar19._4_4_ =
       fVar21 * (auVar46._4_4_ +
                fVar31 * (fVar48 + fVar31 * (fVar30 + fVar31 * (fVar45 + fVar31 * (fVar29 - fVar31 *
                                                                                            fVar47))
                                            )));
  auVar19._8_4_ =
       fVar25 * (auVar46._8_4_ +
                fVar32 * (fVar48 + fVar32 * (fVar30 + fVar32 * (fVar45 + fVar32 * (fVar29 - fVar32 *
                                                                                            fVar47))
                                            )));
  auVar19._12_4_ =
       fVar27 * (auVar46._12_4_ +
                fVar33 * (fVar48 + fVar33 * (fVar30 + fVar33 * (fVar45 + fVar33 * (fVar29 - fVar33 *
                                                                                            fVar47))
                                            )));
  fVar26 = *(float *)(lVar12 + 0x7b4);
  *(uint *)(param_1 + 0xac) = uVar2;
  auVar46 = NEON_ext(auVar19,auVar19,8,1);
  auVar17 = NEON_ext(auVar24,auVar24,8,1);
  fVar33 = fVar44 * (float)DAT_041015a8;
  fVar48 = (float)((ulong)DAT_041015a8 >> 0x20) * 0.0;
  fVar13 = auVar17._0_4_;
  fVar16 = auVar46._0_4_;
  fVar29 = auVar19._4_4_ * (float)DAT_04101610;
  fVar45 = (float)((ulong)DAT_04101610 >> 0x20) * 0.0;
  fVar20 = fVar16 * fVar44;
  fVar21 = auVar24._0_4_;
  uVar14 = CONCAT44(fVar26 + *(float *)(lVar12 + 0x7c0) *
                             ((float)uVar1 * 2.3283064e-10 * 2.0 + -1.0),
                    fVar43 + fVar49 * ((float)uVar4 * 2.3283064e-10 * 2.0 + -1.0));
  fVar26 = (float)_UNK_04101d68;
  uVar11 = (ulong)_UNK_04101d68 >> 0x20;
  fVar43 = (float)_DAT_04101d60;
  uVar15 = (ulong)_DAT_04101d60 >> 0x20;
  fVar30 = *(float *)(lVar12 + 0x7b8);
  *(uint *)(param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
  fVar47 = *(float *)(lVar12 + 0x7e0);
  fVar25 = fVar16 * fVar21 * fVar43 + fVar13 * auVar19._4_4_ * auVar19._0_4_;
  fVar27 = fVar13 * fVar21 * (float)uVar15 + fVar16 * auVar19._4_4_ * auVar19._0_4_;
  fVar28 = fVar21 * 0.0 * fVar26 + fVar33 * auVar19._0_4_;
  fVar31 = fVar21 * 0.0 * (float)uVar11 + fVar48 * auVar19._0_4_;
  fVar32 = *(float *)(lVar12 + 0x7e4);
  fVar43 = fVar16 * auVar19._0_4_ * (float)_DAT_04102790 + fVar13 * auVar19._4_4_ * fVar21;
  fVar16 = fVar13 * auVar19._0_4_ * (float)((ulong)_DAT_04102790 >> 0x20) +
           fVar16 * auVar19._4_4_ * fVar21;
  fVar26 = auVar19._0_4_ * 0.0 * (float)_UNK_04102798 + fVar33 * fVar21;
  fVar21 = auVar19._0_4_ * 0.0 * (float)((ulong)_UNK_04102798 >> 0x20) + fVar48 * fVar21;
  fVar33 = *(float *)(lVar12 + 0x7e8);
  uVar15 = (ulong)(uint)(fVar30 + *(float *)(lVar12 + 0x7c4) *
                                  ((float)uVar2 * 2.3283064e-10 * 2.0 + -1.0));
  *(ulong *)(param_1 + 0x2d8) = CONCAT44(fVar45 * fVar47,fVar29 * fVar47);
  *(ulong *)(param_1 + 0x2d0) = CONCAT44(fVar20 * fVar47,fVar13 * fVar44 * fVar47);
  *(float *)(param_1 + 0x2e8) = fVar28 * fVar32;
  *(float *)(param_1 + 0x2ec) = fVar31 * fVar32;
  *(float *)(param_1 + 0x2e0) = fVar25 * fVar32;
  *(float *)(param_1 + 0x2e4) = fVar27 * fVar32;
  *(ulong *)(param_1 + 0x2f8) = CONCAT44(fVar21 * fVar33,fVar26 * fVar33);
  *(ulong *)(param_1 + 0x2f0) = CONCAT44(fVar16 * fVar33,fVar43 * fVar33);
  *(ulong *)(param_1 + 0x308) = uVar15;
  *(undefined8 *)(param_1 + 0x300) = uVar14;
  *(ulong *)(param_1 + 0x318) =
       CONCAT17((char)((uint)fVar45 >> 0x18),
                CONCAT16((char)((uint)fVar45 >> 0x10),
                         CONCAT15((char)((uint)fVar45 >> 8),CONCAT14(SUB41(fVar45,0),fVar29))));
  *(ulong *)(param_1 + 0x310) =
       CONCAT17((char)((uint)fVar20 >> 0x18),
                CONCAT16((char)((uint)fVar20 >> 0x10),
                         CONCAT15((char)((uint)fVar20 >> 8),
                                  CONCAT14(SUB41(fVar20,0),fVar13 * fVar44))));
  *(float *)(param_1 + 0x328) = fVar28;
  *(float *)(param_1 + 0x32c) = fVar31;
  *(float *)(param_1 + 800) = fVar25;
  *(float *)(param_1 + 0x324) = fVar27;
  *(float *)(param_1 + 0x338) = fVar26;
  *(float *)(param_1 + 0x33c) = fVar21;
  *(float *)(param_1 + 0x330) = fVar43;
  *(float *)(param_1 + 0x334) = fVar16;
  *(ulong *)(param_1 + 0x348) = uVar15;
  *(undefined8 *)(param_1 + 0x340) = uVar14;
  return;
}

