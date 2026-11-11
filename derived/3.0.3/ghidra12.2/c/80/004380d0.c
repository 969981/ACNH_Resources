
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004380d0(undefined1 (*param_1) [12],undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar9;
  float fVar11;
  undefined1 auVar7 [16];
  float fVar10;
  undefined1 auVar8 [16];
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar16;
  int iVar17;
  undefined1 auVar15 [16];
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  
  fVar4 = (float)*(undefined8 *)(*param_1 + 8);
  fVar5 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  fVar1 = (float)*(undefined8 *)*param_1;
  fVar2 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
  auVar7._12_4_ = fVar5;
  auVar7._0_12_ = *param_1;
  auVar15._12_4_ = fVar5;
  auVar15._0_12_ = *param_1;
  auVar7 = NEON_ext(auVar7,auVar15,8,1);
  fVar9 = auVar7._4_4_ * auVar7._4_4_;
  fVar26 = (float)DAT_0413f410;
  fVar12 = fVar9 - fVar26;
  fVar9 = fVar9 - (float)((ulong)DAT_0413f410 >> 0x20);
  auVar7 = *param_2;
  fVar10 = auVar7._0_4_;
  fVar21 = auVar7._4_4_;
  fVar11 = auVar7._8_4_;
  fVar13 = fVar1 * fVar10 + fVar2 * fVar21 + fVar4 * fVar11;
  fVar16 = fVar1 * fVar10 + fVar2 * fVar21 + fVar4 * fVar11;
  auVar18 = NEON_ext(auVar7,auVar7,4,1);
  auVar25 = NEON_ext(auVar18,auVar18,8,1);
  auVar24._12_4_ = fVar5;
  auVar24._0_12_ = *param_1;
  auVar20._12_4_ = fVar5;
  auVar20._0_12_ = *param_1;
  auVar15 = NEON_ext(auVar24,auVar20,4,1);
  auVar24 = NEON_ext(auVar15,auVar15,8,1);
  uVar22 = NEON_rev64(auVar24._0_8_,4);
  uVar23 = NEON_rev64(auVar25._0_8_,4);
  auVar25._0_4_ = fVar1 * auVar18._0_4_ - fVar10 * auVar15._0_4_;
  auVar25._4_4_ = fVar2 * auVar18._4_4_ - fVar21 * auVar15._4_4_;
  auVar25._8_4_ = fVar4 * (float)uVar23 - fVar11 * (float)uVar22;
  auVar25._12_4_ =
       fVar5 * (float)((ulong)uVar23 >> 0x20) - auVar7._12_4_ * (float)((ulong)uVar22 >> 0x20);
  auVar15 = NEON_ext(auVar25,auVar25,4,1);
  fVar1 = fVar10 * fVar12 + fVar1 * fVar13 + auVar15._0_4_ * fVar5;
  fVar3 = fVar21 * fVar9 + fVar2 * fVar16 + auVar15._4_4_ * fVar5;
  fVar4 = fVar11 * fVar12 + fVar4 * fVar13 + auVar25._0_4_ * fVar5;
  fVar5 = auVar7._12_4_ * fVar9 + fVar5 * fVar16 + auVar25._4_4_ * fVar5;
  fVar1 = fVar1 + fVar1;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar5 = fVar5 + fVar5;
  fVar2 = fVar10 * fVar1 + fVar21 * fVar3 + fVar11 * fVar4;
  if (fVar2 - (float)_DAT_0413f320 <= DAT_04102e44) {
    if (DAT_04102f38 <= (float)_DAT_0413f320 + fVar2) {
      fVar10 = (float)FUN_00437380();
      auVar7 = *param_2;
      auVar18._4_4_ = fVar3;
      auVar18._0_4_ = fVar1;
      auVar18._8_4_ = fVar4;
      auVar18._12_4_ = fVar5;
      auVar15 = NEON_ext(auVar7,auVar7,4,1);
      auVar24 = NEON_ext(auVar18,auVar18,4,1);
      auVar20 = NEON_ext(auVar15,auVar15,8,1);
      auVar25 = NEON_ext(auVar24,auVar24,8,1);
      uVar22 = NEON_rev64(auVar20._0_8_,4);
      uVar23 = NEON_rev64(auVar25._0_8_,4);
      auVar8._0_4_ = auVar24._0_4_ * auVar7._0_4_ - fVar1 * auVar15._0_4_;
      auVar8._4_4_ = auVar24._4_4_ * auVar7._4_4_ - fVar3 * auVar15._4_4_;
      auVar8._8_4_ = (float)uVar23 * auVar7._8_4_ - fVar4 * (float)uVar22;
      auVar8._12_4_ =
           (float)((ulong)uVar23 >> 0x20) * auVar7._12_4_ - fVar5 * (float)((ulong)uVar22 >> 0x20);
      auVar7 = NEON_ext(auVar8,auVar8,4,1);
      fVar9 = auVar7._0_4_;
      fVar21 = auVar7._4_4_;
      fVar1 = fVar9 * fVar9 + fVar21 * fVar21 + auVar8._0_4_ * auVar8._0_4_;
      fVar3 = fVar9 * fVar9 + fVar21 * fVar21 + auVar8._0_4_ * auVar8._0_4_;
      uVar22 = CONCAT44(fVar3,fVar1);
      uVar23 = NEON_frsqrte(uVar22,4);
      fVar2 = (float)uVar23;
      fVar5 = (float)((ulong)uVar23 >> 0x20);
      uVar23 = NEON_frsqrts(uVar22,CONCAT44(fVar5 * fVar5,fVar2 * fVar2),4);
      fVar2 = fVar2 * (float)uVar23;
      fVar5 = fVar5 * (float)((ulong)uVar23 >> 0x20);
      iVar14 = -(uint)(fVar1 <= 0.0);
      iVar17 = -(uint)(fVar3 <= 0.0);
      uVar22 = NEON_frsqrts(uVar22,CONCAT44(fVar5 * fVar5,fVar2 * fVar2),4);
      fVar2 = (float)uVar22 * fVar2;
      fVar5 = (float)((ulong)uVar22 >> 0x20) * fVar5;
      fVar4 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                              CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                       CONCAT11((byte)((uint)fVar2 >> 8) &
                                                ~(byte)((uint)iVar14 >> 8),
                                                SUB41(fVar2,0) & ~(byte)iVar14)));
      fVar10 = fVar10 * fVar26;
      fVar1 = sinf(fVar10);
      fVar3 = cosf(fVar10);
      fVar2 = fVar9 * fVar4 * fVar1;
      fVar10 = fVar21 * (float)(CONCAT17((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18)
                                         ,CONCAT16((byte)((uint)fVar5 >> 0x10) &
                                                   ~(byte)((uint)iVar17 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar5 >> 8) &
                                                            ~(byte)((uint)iVar17 >> 8),
                                                            CONCAT14(SUB41(fVar5,0) & ~(byte)iVar17,
                                                                     fVar4)))) >> 0x20) * fVar1;
      fVar1 = auVar8._0_4_ * fVar4 * fVar1;
    }
    else {
      fVar3 = 0.0;
      auVar19._0_4_ = fVar11 * fVar11;
      auVar19._4_4_ = 0;
      auVar19._8_4_ = fVar10 * fVar10;
      auVar19._12_4_ = 0;
      auVar7 = NEON_ext(auVar19,auVar19,8,1);
      fVar4 = auVar7._0_4_ + auVar7._4_4_;
      uVar6 = -(uint)(fVar10 * fVar10 + fVar21 * fVar21 < auVar19._0_4_ + 0.0 + fVar4);
      fVar1 = (float)((uint)fVar10 & uVar6);
      fVar2 = (float)((uint)-fVar21 ^ ((uint)-fVar21 ^ (uint)-fVar11) & uVar6);
      fVar10 = (float)((uint)fVar10 ^
                      (uint)fVar10 &
                      -(uint)(fVar10 * fVar10 + fVar21 * fVar21 < auVar19._0_4_ + 0.0 + fVar4));
      fVar4 = fVar2 * fVar2 + fVar10 * fVar10 + fVar1 * fVar1;
      fVar9 = fVar2 * fVar2 + fVar10 * fVar10 + fVar1 * fVar1;
      uVar22 = CONCAT44(fVar9,fVar4);
      uVar23 = NEON_frsqrte(uVar22,4);
      fVar5 = (float)uVar23;
      fVar21 = (float)((ulong)uVar23 >> 0x20);
      uVar23 = NEON_frsqrts(uVar22,CONCAT44(fVar21 * fVar21,fVar5 * fVar5),4);
      fVar5 = fVar5 * (float)uVar23;
      fVar21 = fVar21 * (float)((ulong)uVar23 >> 0x20);
      iVar14 = -(uint)(fVar4 <= 0.0);
      iVar17 = -(uint)(fVar9 <= 0.0);
      uVar22 = NEON_frsqrts(uVar22,CONCAT44(fVar21 * fVar21,fVar5 * fVar5),4);
      fVar5 = (float)uVar22 * fVar5;
      fVar21 = (float)((ulong)uVar22 >> 0x20) * fVar21;
      fVar4 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                              CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                       CONCAT11((byte)((uint)fVar5 >> 8) &
                                                ~(byte)((uint)iVar14 >> 8),
                                                SUB41(fVar5,0) & ~(byte)iVar14)));
      fVar2 = fVar2 * fVar4;
      fVar10 = fVar10 * (float)(CONCAT17((byte)((uint)fVar21 >> 0x18) &
                                         ~(byte)((uint)iVar17 >> 0x18),
                                         CONCAT16((byte)((uint)fVar21 >> 0x10) &
                                                  ~(byte)((uint)iVar17 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar21 >> 8) &
                                                           ~(byte)((uint)iVar17 >> 8),
                                                           CONCAT14(SUB41(fVar21,0) & ~(byte)iVar17,
                                                                    fVar4)))) >> 0x20);
      fVar1 = fVar1 * fVar4;
    }
  }
  else {
    fVar2 = (float)DAT_0413f4f0;
    fVar10 = DAT_0413f4f0._4_4_;
    fVar1 = (float)DAT_0413f4f8;
    fVar3 = DAT_0413f4f8._4_4_;
  }
  *(float *)(*param_1 + 8) = fVar1;
  *(float *)param_1[1] = fVar3;
  *(float *)*param_1 = fVar2;
  *(float *)(*param_1 + 4) = fVar10;
  return;
}

