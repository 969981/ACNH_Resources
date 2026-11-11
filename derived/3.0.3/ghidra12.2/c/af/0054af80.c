
void FUN_0054af80(float param_1,undefined8 param_2,long param_3,undefined1 (*param_4) [16],
                 float *param_5,float *param_6)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  param_1 = 1.0 / param_1;
  *param_5 = 0.0;
  *param_6 = 0.0;
  FUN_00482310(&local_80,param_3 + 0x10,param_3);
  fStack_74 = -fStack_74;
  auVar23._0_4_ = -(float)*(undefined8 *)(param_3 + 0x10);
  auVar23._4_4_ = -(float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar23._8_4_ = -(float)*(undefined8 *)(param_3 + 0x18);
  fVar18 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  auVar23._12_4_ = -fVar18;
  uVar13 = SUB41(auVar23._4_4_,0);
  uVar14 = (undefined1)((uint)auVar23._4_4_ >> 8);
  uVar15 = (undefined1)((uint)auVar23._4_4_ >> 0x10);
  uVar16 = (undefined1)((uint)auVar23._4_4_ >> 0x18);
  auVar24 = NEON_ext(auVar23,auVar23,4,1);
  auVar9 = *(undefined1 (*) [16])(param_3 + 0x20);
  auVar28 = NEON_frecpe(auVar9,4);
  auVar31 = NEON_frecps(auVar9,auVar28,4);
  auVar29._0_4_ = auVar28._0_4_ * auVar31._0_4_;
  auVar29._4_4_ = auVar28._4_4_ * auVar31._4_4_;
  auVar29._8_4_ = auVar28._8_4_ * auVar31._8_4_;
  auVar29._12_4_ = auVar28._12_4_ * auVar31._12_4_;
  auVar9 = NEON_frecps(auVar9,auVar29,4);
  fVar7 = auVar29._0_4_ * auVar9._0_4_;
  fVar11 = auVar29._4_4_ * auVar9._4_4_;
  uStack_60 = CONCAT44(fVar11,fVar7);
  fVar12 = auVar29._8_4_ * auVar9._8_4_;
  auVar9[4] = uVar13;
  auVar9._0_4_ = auVar23._0_4_;
  auVar9[5] = uVar14;
  auVar9[6] = uVar15;
  auVar9[7] = uVar16;
  auVar9._8_4_ = auVar23._8_4_;
  auVar9._12_4_ = fVar18;
  auVar28[4] = uVar13;
  auVar28._0_4_ = auVar23._0_4_;
  auVar28[5] = uVar14;
  auVar28[6] = uVar15;
  auVar28[7] = uVar16;
  auVar28._8_4_ = auVar23._8_4_;
  auVar28._12_4_ = fVar18;
  auVar9 = NEON_ext(auVar9,auVar28,8,1);
  fVar30 = auVar9._4_4_ * auVar9._4_4_;
  uStack_68 = CONCAT44(fVar18,auVar23._8_4_);
  local_70 = CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,auVar23._0_4_))));
  uStack_58 = (ulong)(uint)fVar12;
  fVar26 = fVar30 - (float)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x150);
  auVar9 = *param_4;
  fVar20 = auVar9._0_4_;
  fVar17 = auVar9._4_4_;
  fVar19 = auVar9._8_4_;
  fVar33 = auVar23._0_4_ * fVar20 + auVar23._4_4_ * fVar17 + auVar23._8_4_ * fVar19;
  auVar36 = NEON_ext(auVar9,auVar9,4,1);
  auVar37 = NEON_ext(auVar36,auVar36,8,1);
  auVar31[4] = uVar13;
  auVar31._0_4_ = auVar23._0_4_;
  auVar31[5] = uVar14;
  auVar31[6] = uVar15;
  auVar31[7] = uVar16;
  auVar31._8_4_ = auVar23._8_4_;
  auVar31._12_4_ = fVar18;
  auVar3[4] = uVar13;
  auVar3._0_4_ = auVar23._0_4_;
  auVar3[5] = uVar14;
  auVar3[6] = uVar15;
  auVar3[7] = uVar16;
  auVar3._8_4_ = auVar23._8_4_;
  auVar3._12_4_ = fVar18;
  auVar28 = NEON_ext(auVar31,auVar3,4,1);
  auVar28 = NEON_ext(auVar28,auVar28,8,1);
  uVar34 = NEON_rev64(auVar28._0_8_,4);
  uVar35 = NEON_rev64(auVar37._0_8_,4);
  fVar8 = (float)((ulong)uVar34 >> 0x20);
  auVar32._0_4_ = auVar23._0_4_ * auVar36._0_4_ - auVar24._0_4_ * fVar20;
  auVar32._4_4_ = auVar23._4_4_ * auVar36._4_4_ - auVar24._4_4_ * fVar17;
  auVar32._8_4_ = auVar23._8_4_ * (float)uVar35 - (float)uVar34 * fVar19;
  auVar32._12_4_ = fVar18 * (float)((ulong)uVar35 >> 0x20) - fVar8 * auVar9._12_4_;
  auVar9 = NEON_ext(auVar32,auVar32,4,1);
  fVar27 = fVar20 * fVar26 + auVar23._0_4_ * fVar33 + auVar9._0_4_ * fVar18;
  fVar30 = fVar17 * (fVar30 - (float)((ulong)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x150) >> 0x20)) +
           auVar23._4_4_ *
           (auVar23._0_4_ * fVar20 + auVar23._4_4_ * fVar17 + auVar23._8_4_ * fVar19) +
           auVar9._4_4_ * fVar18;
  fVar26 = fVar19 * fVar26 + auVar23._8_4_ * fVar33 + auVar32._0_4_ * fVar18;
  fVar27 = (fVar27 + fVar27) - local_80;
  fVar30 = (fVar30 + fVar30) - fStack_7c;
  fVar20 = (fVar26 + fVar26) - fStack_78;
  pauVar1 = param_4 + 1;
  fVar21 = (float)*(undefined8 *)(param_4[1] + 8);
  fVar22 = (float)((ulong)*(undefined8 *)(param_4[1] + 8) >> 0x20);
  fVar19 = (float)*(undefined8 *)*pauVar1;
  fVar33 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar37._12_4_ = fVar22;
  auVar37._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar5._12_4_ = fVar22;
  auVar5._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar9 = NEON_ext(auVar37,auVar5,4,1);
  auVar28 = NEON_ext(auVar9,auVar9,8,1);
  uVar35 = NEON_rev64(auVar28._0_8_,4);
  auVar25._0_4_ = auVar23._0_4_ * auVar9._0_4_ - auVar24._0_4_ * fVar19;
  auVar25._4_4_ = auVar23._4_4_ * auVar9._4_4_ - auVar24._4_4_ * fVar33;
  auVar25._8_4_ = auVar23._8_4_ * (float)uVar35 - (float)uVar34 * fVar21;
  auVar25._12_4_ = fVar18 * (float)((ulong)uVar35 >> 0x20) - fVar8 * fVar22;
  auVar9 = NEON_ext(auVar25,auVar25,4,1);
  fVar8 = auVar23._0_4_ * fVar19;
  fVar26 = auVar23._4_4_ * fVar33;
  uVar13 = (undefined1)((uint)fVar26 >> 8);
  uVar14 = (undefined1)((uint)fVar26 >> 0x10);
  uVar15 = (undefined1)((uint)fVar26 >> 0x18);
  fVar17 = fVar18 * fVar22;
  local_a0 = CONCAT44(auVar23._4_4_ * fVar22 + fVar33 * fVar18 + auVar9._4_4_,
                      auVar23._0_4_ * fVar22 + fVar19 * fVar18 + auVar9._0_4_);
  auVar24[4] = SUB41(fVar26,0);
  auVar24._0_4_ = fVar8;
  auVar24[5] = uVar13;
  auVar24[6] = uVar14;
  auVar24[7] = uVar15;
  auVar24._8_4_ = auVar23._8_4_ * fVar21;
  auVar24._12_4_ = fVar17;
  auVar36[4] = SUB41(fVar26,0);
  auVar36._0_4_ = fVar8;
  auVar36[5] = uVar13;
  auVar36[6] = uVar14;
  auVar36[7] = uVar15;
  auVar36._8_4_ = auVar23._8_4_ * fVar21;
  auVar36._12_4_ = fVar17;
  auVar9 = NEON_ext(auVar24,auVar36,8,1);
  uStack_98 = CONCAT44(fVar17 - (fVar8 + fVar26 + auVar9._0_4_),
                       auVar23._8_4_ * fVar22 + fVar21 * fVar18 + auVar25._0_4_);
  auVar10._0_8_ =
       CONCAT44(fVar11 * (float)((ulong)*(undefined8 *)param_4[2] >> 0x20),
                fVar7 * (float)*(undefined8 *)param_4[2]);
  auVar10._8_4_ = fVar12 * (float)*(undefined8 *)(param_4[2] + 8);
  auVar10._12_4_ = (float)((ulong)*(undefined8 *)(param_4[2] + 8) >> 0x20) * 0.0;
  uStack_88 = auVar10._8_8_;
  uStack_90 = auVar10._0_8_;
  local_80 = -local_80;
  fStack_7c = -fStack_7c;
  fStack_78 = -fStack_78;
  lVar6 = FUN_0053b340(param_2);
  if (*(char *)(lVar6 + 8) != '\0') {
    fVar27 = fVar27 * param_1;
    fVar30 = fVar30 * param_1;
    fVar20 = fVar20 * param_1;
    fVar27 = fVar27 * fVar27;
    fVar30 = fVar30 * fVar30;
    fVar20 = fVar20 * fVar20;
    fVar8 = fVar27 + fVar30 + fVar20;
    uVar34 = CONCAT44(fVar27 + fVar30 + fVar20,fVar8);
    uVar35 = NEON_frsqrte(uVar34,4);
    fVar26 = (float)uVar35;
    fVar7 = (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(uVar34,CONCAT44(fVar7 * fVar7,fVar26 * fVar26),4);
    fVar26 = fVar26 * (float)uVar35;
    fVar7 = fVar7 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(uVar34,CONCAT44(fVar7 * fVar7,fVar26 * fVar26),4);
    iVar4 = -(uint)(fVar8 <= 0.0);
    fVar8 = fVar8 * (float)uVar35 * fVar26;
    *param_5 = *(float *)(lVar6 + 0x14);
    fVar8 = (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                            CONCAT12((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                     CONCAT11((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                              SUB41(fVar8,0) & ~(byte)iVar4)));
    if (*(float *)(lVar6 + 0x10) <= fVar8) {
      *param_5 = *(float *)(lVar6 + 0x18);
    }
    else if (*(float *)(lVar6 + 0xc) < fVar8) {
      fVar27 = *(float *)(lVar6 + 0x10) - *(float *)(lVar6 + 0xc);
      fVar26 = (float)FUN_00437310(fVar27);
      fVar7 = 0.0;
      if (DAT_04102f34 < fVar26) {
        fVar7 = 1.0 / fVar27;
      }
      *param_5 = *(float *)(lVar6 + 0x14) +
                 fVar7 * (*(float *)(lVar6 + 0x18) - *(float *)(lVar6 + 0x14)) *
                         (fVar8 - *(float *)(lVar6 + 0xc));
      cVar2 = *(char *)(lVar6 + 0x1c);
      goto joined_r0x0054b1e8;
    }
  }
  cVar2 = *(char *)(lVar6 + 0x1c);
joined_r0x0054b1e8:
  if (cVar2 != '\0') {
    fVar26 = (float)FUN_00437dd0(&local_a0);
    fVar8 = DAT_04102e20;
    *param_6 = *(float *)(lVar6 + 0x28);
    fVar8 = param_1 * fVar26 * fVar8;
    if (*(float *)(lVar6 + 0x24) <= fVar8) {
      *param_6 = *(float *)(lVar6 + 0x2c);
    }
    else if (*(float *)(lVar6 + 0x20) < fVar8) {
      fVar7 = *(float *)(lVar6 + 0x24) - *(float *)(lVar6 + 0x20);
      fVar26 = (float)FUN_00437310(fVar7);
      if (DAT_04102f34 < fVar26) {
        fVar7 = 1.0 / fVar7;
      }
      else {
        fVar7 = 0.0;
      }
      *param_6 = *(float *)(lVar6 + 0x28) +
                 fVar7 * (*(float *)(lVar6 + 0x2c) - *(float *)(lVar6 + 0x28)) *
                         (fVar8 - *(float *)(lVar6 + 0x20));
    }
  }
  return;
}

