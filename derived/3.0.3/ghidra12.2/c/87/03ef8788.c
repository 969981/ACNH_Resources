
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03ef8788(long param_1,float *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  
  puVar9 = (undefined8 *)
           **(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x38) +
                      (long)*(short *)(param_1 + 0x30) * 8);
  if (((*PTR_DAT_04bb3490 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb3488);
  if ((uVar7 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  lVar8 = *(long *)(*(long *)puVar9[0x22] + 0x10) +
          (long)(int)*(short *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 2) * 0x60;
  uVar10 = *(undefined8 *)*(undefined1 (*) [12])(lVar8 + 0x44);
  auVar5 = *(undefined1 (*) [12])(lVar8 + 0x44);
  fVar14 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar15 = *(float *)PTR_Float2Pi_04bcede0;
  fVar16 = (float)uVar10;
  auVar11._0_4_ = fVar16 - (float)(int)(fVar16 * fVar14) * fVar15;
  auVar11._4_4_ = auVar5._4_4_ - (float)(int)((float)((ulong)uVar10 >> 0x20) * fVar14) * fVar15;
  auVar11._8_4_ = auVar5._8_4_ - (float)(int)(*(float *)(lVar8 + 0x4c) * fVar14) * fVar15;
  auVar11._12_4_ = 0.0 - (float)(int)(fVar14 * 0.0) * fVar15;
  fVar15 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar33 = *(float *)PTR_FloatPi_04bcedc8;
  fVar16 = -fVar15;
  iVar6 = -(uint)(fVar15 < auVar11._0_4_);
  iVar1 = -(uint)(fVar15 < auVar11._4_4_);
  bVar24 = (byte)((uint)iVar1 >> 8);
  bVar25 = (byte)((uint)iVar1 >> 0x10);
  bVar26 = (byte)((uint)iVar1 >> 0x18);
  iVar2 = -(uint)(fVar15 < auVar11._8_4_);
  bVar27 = (byte)((uint)iVar2 >> 8);
  bVar28 = (byte)((uint)iVar2 >> 0x10);
  bVar29 = (byte)((uint)iVar2 >> 0x18);
  iVar3 = -(uint)(fVar15 < auVar11._12_4_);
  bVar30 = (byte)((uint)iVar3 >> 8);
  bVar31 = (byte)((uint)iVar3 >> 0x10);
  bVar32 = (byte)((uint)iVar3 >> 0x18);
  fVar34 = -fVar33;
  fVar14 = *(float *)(PTR_SinCoefficients_04bcede8 + 4);
  fVar48 = *(float *)(PTR_SinCoefficients_04bcede8 + 0xc);
  auVar43._0_4_ = fVar33 - auVar11._0_4_;
  auVar43._4_4_ = fVar33 - auVar11._4_4_;
  auVar43._8_4_ = fVar33 - auVar11._8_4_;
  auVar43._12_4_ = fVar33 - auVar11._12_4_;
  auVar44[4] = (byte)iVar1;
  auVar44._0_4_ = iVar6;
  auVar44[5] = bVar24;
  auVar44[6] = bVar25;
  auVar44[7] = bVar26;
  auVar44[8] = (byte)iVar2;
  auVar44[9] = bVar27;
  auVar44[10] = bVar28;
  auVar44[0xb] = bVar29;
  auVar44[0xc] = (byte)iVar3;
  auVar44[0xd] = bVar30;
  auVar44[0xe] = bVar31;
  auVar44[0xf] = bVar32;
  auVar11 = auVar11 ^ (auVar11 ^ auVar43) & auVar44;
  fVar40 = *(float *)PTR_SinCoefficients_04bcede8;
  fVar15 = *(float *)(lVar8 + 0x5c);
  auVar17._0_4_ = -(uint)(auVar11._0_4_ < fVar16);
  auVar17._4_4_ = -(uint)(auVar11._4_4_ < fVar16);
  auVar17._8_4_ = -(uint)(auVar11._8_4_ < fVar16);
  auVar17._12_4_ = -(uint)(auVar11._12_4_ < fVar16);
  auVar4._4_4_ = fVar34 - auVar11._4_4_;
  auVar4._0_4_ = fVar34 - auVar11._0_4_;
  auVar4._8_4_ = fVar34 - auVar11._8_4_;
  auVar4._12_4_ = fVar34 - auVar11._12_4_;
  auVar11 = auVar11 ^ (auVar11 ^ auVar4) & auVar17;
  auVar18[0] = (byte)auVar17._0_4_ | (byte)iVar6;
  auVar18[1] = (byte)((uint)auVar17._0_4_ >> 8) | (byte)((uint)iVar6 >> 8);
  auVar18[2] = (byte)((uint)auVar17._0_4_ >> 0x10) | (byte)((uint)iVar6 >> 0x10);
  auVar18[3] = (byte)((uint)auVar17._0_4_ >> 0x18) | (byte)((uint)iVar6 >> 0x18);
  auVar18[4] = (byte)auVar17._4_4_ | (byte)iVar1;
  auVar18[5] = (byte)((uint)auVar17._4_4_ >> 8) | bVar24;
  auVar18[6] = (byte)((uint)auVar17._4_4_ >> 0x10) | bVar25;
  auVar18[7] = (byte)((uint)auVar17._4_4_ >> 0x18) | bVar26;
  auVar18[8] = (byte)auVar17._8_4_ | (byte)iVar2;
  auVar18[9] = (byte)((uint)auVar17._8_4_ >> 8) | bVar27;
  auVar18[10] = (byte)((uint)auVar17._8_4_ >> 0x10) | bVar28;
  auVar18[0xb] = (byte)((uint)auVar17._8_4_ >> 0x18) | bVar29;
  auVar18[0xc] = (byte)auVar17._12_4_ | (byte)iVar3;
  auVar18[0xd] = (byte)((uint)auVar17._12_4_ >> 8) | bVar30;
  auVar18[0xe] = (byte)((uint)auVar17._12_4_ >> 0x10) | bVar31;
  auVar18[0xf] = (byte)((uint)auVar17._12_4_ >> 0x18) | bVar32;
  fVar16 = *(float *)PTR_CosCoefficients_04bcedf0;
  fVar36 = auVar11._0_4_;
  fVar35 = fVar36 * fVar36;
  fVar13 = auVar11._4_4_;
  fVar37 = fVar13 * fVar13;
  fVar46 = auVar11._8_4_;
  fVar38 = fVar46 * fVar46;
  fVar47 = auVar11._12_4_;
  fVar39 = fVar47 * fVar47;
  fVar41 = -*(float *)(PTR_SinCoefficients_04bcede8 + 8);
  fVar42 = -*(float *)(PTR_SinCoefficients_04bcede8 + 0x10);
  auVar44 = NEON_fmov(0x3f800000,4);
  fVar33 = *(float *)(PTR_CosCoefficients_04bcedf0 + 4);
  fVar34 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0xc);
  auVar12._0_4_ =
       fVar36 * (auVar44._0_4_ +
                fVar35 * (fVar42 + fVar35 * (fVar48 + fVar35 * (fVar41 + fVar35 * (fVar14 - fVar35 *
                                                                                            fVar40))
                                            )));
  auVar12._4_4_ =
       fVar13 * (auVar44._4_4_ +
                fVar37 * (fVar42 + fVar37 * (fVar48 + fVar37 * (fVar41 + fVar37 * (fVar14 - fVar37 *
                                                                                            fVar40))
                                            )));
  auVar12._8_4_ =
       fVar46 * (auVar44._8_4_ +
                fVar38 * (fVar42 + fVar38 * (fVar48 + fVar38 * (fVar41 + fVar38 * (fVar14 - fVar38 *
                                                                                            fVar40))
                                            )));
  auVar12._12_4_ =
       fVar47 * (auVar44._12_4_ +
                fVar39 * (fVar42 + fVar39 * (fVar48 + fVar39 * (fVar41 + fVar39 * (fVar14 - fVar39 *
                                                                                            fVar40))
                                            )));
  fVar14 = -*(float *)(PTR_CosCoefficients_04bcedf0 + 8);
  fVar48 = -*(float *)(PTR_CosCoefficients_04bcedf0 + 0x10);
  fVar40 = -auVar12._4_4_;
  auVar19._0_4_ =
       auVar44._0_4_ +
       fVar35 * (fVar48 + fVar35 * (fVar34 + fVar35 * (fVar14 + fVar35 * (fVar33 - fVar35 * fVar16))
                                   ));
  auVar19._4_4_ =
       auVar44._4_4_ +
       fVar37 * (fVar48 + fVar37 * (fVar34 + fVar37 * (fVar14 + fVar37 * (fVar33 - fVar37 * fVar16))
                                   ));
  auVar19._8_4_ =
       auVar44._8_4_ +
       fVar38 * (fVar48 + fVar38 * (fVar34 + fVar38 * (fVar14 + fVar38 * (fVar33 - fVar38 * fVar16))
                                   ));
  auVar19._12_4_ =
       auVar44._12_4_ +
       fVar39 * (fVar48 + fVar39 * (fVar34 + fVar39 * (fVar14 + fVar39 * (fVar33 - fVar39 * fVar16))
                                   ));
  fVar16 = -auVar19._4_4_;
  fVar14 = -auVar19._8_4_;
  fVar48 = -auVar19._12_4_;
  auVar45[4] = SUB41(fVar16,0);
  auVar45._0_4_ = -auVar19._0_4_;
  auVar45[5] = (char)((uint)fVar16 >> 8);
  auVar45[6] = (char)((uint)fVar16 >> 0x10);
  auVar45[7] = (char)((uint)fVar16 >> 0x18);
  auVar45[8] = SUB41(fVar14,0);
  auVar45[9] = (char)((uint)fVar14 >> 8);
  auVar45[10] = (char)((uint)fVar14 >> 0x10);
  auVar45[0xb] = (char)((uint)fVar14 >> 0x18);
  auVar45[0xc] = SUB41(fVar48,0);
  auVar45[0xd] = (char)((uint)fVar48 >> 8);
  auVar45[0xe] = (char)((uint)fVar48 >> 0x10);
  auVar45[0xf] = (char)((uint)fVar48 >> 0x18);
  auVar19 = auVar19 ^ (auVar19 ^ auVar45) & auVar18;
  auVar45 = NEON_ext(auVar12,auVar12,8,1);
  fVar13 = auVar19._4_4_;
  auVar44 = NEON_ext(auVar19,auVar19,8,1);
  fVar33 = auVar44._0_4_;
  fVar34 = auVar45._0_4_;
  fVar16 = fVar13 * (float)DAT_041015a8;
  fVar48 = fVar34 * fVar13;
  fVar36 = auVar19._0_4_;
  fVar47 = fVar34 * fVar36 * (float)_DAT_04101d60 + fVar33 * auVar12._4_4_ * auVar12._0_4_;
  fVar35 = fVar33 * fVar36 * (float)((ulong)_DAT_04101d60 >> 0x20) +
           fVar34 * auVar12._4_4_ * auVar12._0_4_;
  fVar37 = fVar36 * 0.0 * (float)_UNK_04101d68 + fVar16 * auVar12._0_4_;
  uVar10 = *(undefined8 *)(lVar8 + 0x54);
  fVar14 = fVar34 * auVar12._0_4_ * (float)_DAT_04102790 + fVar33 * auVar12._4_4_ * fVar36;
  fVar38 = fVar33 * auVar12._0_4_ * (float)((ulong)_DAT_04102790 >> 0x20) +
           fVar34 * auVar12._4_4_ * fVar36;
  fVar34 = auVar12._0_4_ * 0.0 * (float)_UNK_04102798 + fVar16 * fVar36;
  fVar46 = fVar33 * fVar13 + fVar35;
  fVar16 = (fVar34 + fVar46 + 1.0) * 0.25;
  fVar36 = fVar16 + (fVar35 + fVar34) * -0.5;
  fVar34 = fVar16 + (fVar33 * fVar13 + fVar34) * -0.5;
  fVar33 = fVar16 + fVar46 * -0.5;
  if (fVar16 <= fVar36) {
    if (fVar36 <= fVar34) goto code_r0x03ef8a74;
    if (fVar33 < fVar36) {
      fVar16 = SQRT(fVar36);
      if (NAN(fVar16)) {
        fVar16 = sqrtf(fVar36);
      }
      fVar36 = 0.25 / fVar16;
      fVar34 = fVar40 + fVar14;
      fVar48 = fVar48 + fVar47;
      uVar20 = SUB41(fVar48,0);
      uVar21 = (undefined1)((uint)fVar48 >> 8);
      uVar22 = (undefined1)((uint)fVar48 >> 0x10);
      uVar23 = (undefined1)((uint)fVar48 >> 0x18);
      fVar33 = fVar36 * (fVar37 - fVar38);
      goto LAB_03ef8a64;
    }
  }
  else if (fVar16 <= fVar34) {
code_r0x03ef8a74:
    if (fVar33 < fVar34) {
      fVar16 = SQRT(fVar34);
      uVar20 = SUB41(fVar16,0);
      uVar21 = (undefined1)((uint)fVar16 >> 8);
      uVar22 = (undefined1)((uint)fVar16 >> 0x10);
      uVar23 = (undefined1)((uint)fVar16 >> 0x18);
      if (NAN(fVar16)) {
        fVar16 = sqrtf(fVar34);
        uVar20 = SUB41(fVar16,0);
        uVar21 = (undefined1)((uint)fVar16 >> 8);
        uVar22 = (undefined1)((uint)fVar16 >> 0x10);
        uVar23 = (undefined1)((uint)fVar16 >> 0x18);
      }
      fVar16 = 0.25 / (float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)));
      fVar33 = (fVar14 - fVar40) * fVar16;
      fVar34 = fVar16 * (fVar38 + fVar37);
      fVar16 = (fVar48 + fVar47) * fVar16;
      goto LAB_03ef8adc;
    }
  }
  else if (fVar33 < fVar16) {
    fVar33 = SQRT(fVar16);
    if (NAN(fVar33)) {
      fVar33 = sqrtf(fVar16);
    }
    fVar36 = 0.25 / fVar33;
    fVar14 = fVar14 - fVar40;
    uVar20 = SUB41(fVar14,0);
    uVar21 = (undefined1)((uint)fVar14 >> 8);
    uVar22 = (undefined1)((uint)fVar14 >> 0x10);
    uVar23 = (undefined1)((uint)fVar14 >> 0x18);
    fVar34 = fVar48 - fVar47;
    fVar16 = fVar36 * (fVar37 - fVar38);
LAB_03ef8a64:
    fVar14 = (float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20))) * fVar36;
    uVar20 = SUB41(fVar14,0);
    uVar21 = (undefined1)((uint)fVar14 >> 8);
    uVar22 = (undefined1)((uint)fVar14 >> 0x10);
    uVar23 = (undefined1)((uint)fVar14 >> 0x18);
    fVar34 = fVar34 * fVar36;
    goto LAB_03ef8adc;
  }
  fVar34 = SQRT(fVar33);
  if (NAN(fVar34)) {
    fVar34 = sqrtf(fVar33);
  }
  fVar36 = 0.25 / fVar34;
  fVar33 = (fVar48 - fVar47) * fVar36;
  fVar16 = (fVar40 + fVar14) * fVar36;
  fVar36 = fVar36 * (fVar37 + fVar38);
  uVar20 = SUB41(fVar36,0);
  uVar21 = (undefined1)((uint)fVar36 >> 8);
  uVar22 = (undefined1)((uint)fVar36 >> 0x10);
  uVar23 = (undefined1)((uint)fVar36 >> 0x18);
LAB_03ef8adc:
  *(undefined8 *)(param_2 + 4) = uVar10;
  param_2[6] = fVar15;
  *param_2 = fVar16;
  param_2[1] = (float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)));
  param_2[2] = fVar34;
  param_2[3] = fVar33;
  return;
}

