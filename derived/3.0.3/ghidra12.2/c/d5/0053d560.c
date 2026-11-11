
void FUN_0053d560(float param_1,long param_2,long param_3,long param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  byte bVar13;
  float fVar14;
  byte bVar15;
  ulong uVar10;
  undefined1 auVar11 [12];
  float fVar16;
  float fVar17;
  undefined1 auVar12 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  undefined8 uVar23;
  int iVar27;
  undefined1 auVar24 [16];
  float fVar26;
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_00438670(param_2 + 0x20,param_4);
  uVar9 = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(param_2 + 0x50) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  auVar24 = *(undefined1 (*) [16])(param_4 + 0x30);
  *(ulong *)(param_2 + 0x68) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20) - auVar24._12_4_,
                (float)*(undefined8 *)(param_3 + 0x38) - auVar24._8_4_);
  *(ulong *)(param_2 + 0x60) =
       CONCAT44((float)((ulong)uVar9 >> 0x20) - auVar24._4_4_,(float)uVar9 - auVar24._0_4_);
  FUN_00438440(&local_50,param_3);
  FUN_00438440(&local_60,param_2 + 0x20);
  fVar6 = (float)uStack_48;
  fVar7 = (float)((ulong)uStack_48 >> 0x20);
  fVar4 = (float)local_50;
  fVar5 = (float)((ulong)local_50 >> 0x20);
  if ((param_5 & 1) == 0) {
    auVar24._4_4_ = fStack_5c;
    auVar24._0_4_ = local_60;
    auVar24._8_4_ = fStack_58;
    auVar24._12_4_ = fStack_54;
  }
  else {
    auVar18._0_4_ = fVar4 * fVar4;
    auVar18._4_4_ = fVar5 * fVar5;
    auVar18._8_4_ = fVar6 * fVar6;
    auVar18._12_4_ = fVar7 * fVar7;
    auVar24 = NEON_ext(auVar18,auVar18,8,1);
    fVar3 = auVar24._0_4_ + auVar24._4_4_;
    uVar9 = CONCAT44(auVar18._0_4_ + auVar18._4_4_ + fVar3,auVar18._0_4_ + auVar18._4_4_ + fVar3);
    uVar23 = NEON_frsqrte(uVar9,4);
    fVar3 = (float)uVar23;
    fVar26 = (float)((ulong)uVar23 >> 0x20);
    uVar23 = NEON_frsqrts(uVar9,CONCAT44(fVar26 * fVar26,fVar3 * fVar3),4);
    fVar3 = fVar3 * (float)uVar23;
    fVar26 = fVar26 * (float)((ulong)uVar23 >> 0x20);
    uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar26 * fVar26,fVar3 * fVar3),4);
    fVar3 = (float)uVar9 * fVar3;
    fVar26 = (float)((ulong)uVar9 >> 0x20) * fVar26;
    auVar25._0_4_ = local_60 * local_60;
    auVar25._4_4_ = fStack_5c * fStack_5c;
    auVar25._8_4_ = fStack_58 * fStack_58;
    auVar25._12_4_ = fStack_54 * fStack_54;
    fVar4 = fVar4 * fVar3;
    fVar5 = fVar5 * fVar26;
    fVar6 = fVar6 * fVar3;
    fVar7 = fVar7 * fVar26;
    auVar24 = NEON_ext(auVar25,auVar25,8,1);
    fVar3 = auVar24._0_4_ + auVar24._4_4_;
    uVar9 = CONCAT44(auVar25._0_4_ + auVar25._4_4_ + fVar3,auVar25._0_4_ + auVar25._4_4_ + fVar3);
    uVar23 = NEON_frsqrte(uVar9,4);
    fVar3 = (float)uVar23;
    fVar26 = (float)((ulong)uVar23 >> 0x20);
    uVar23 = NEON_frsqrts(uVar9,CONCAT44(fVar26 * fVar26,fVar3 * fVar3),4);
    fVar3 = fVar3 * (float)uVar23;
    fVar26 = fVar26 * (float)((ulong)uVar23 >> 0x20);
    uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar26 * fVar26,fVar3 * fVar3),4);
    fVar3 = (float)uVar9 * fVar3;
    fVar26 = (float)((ulong)uVar9 >> 0x20) * fVar26;
    auVar24._0_4_ = local_60 * fVar3;
    auVar24._4_4_ = fStack_5c * fVar26;
    auVar24._8_4_ = fStack_58 * fVar3;
    auVar24._12_4_ = fStack_54 * fVar26;
    uStack_48 = CONCAT44(fVar7,fVar6);
    local_50 = CONCAT44(fVar5,fVar4);
    local_60 = auVar24._0_4_;
    fStack_5c = auVar24._4_4_;
    fStack_58 = auVar24._8_4_;
    fStack_54 = auVar24._12_4_;
  }
  auVar18 = NEON_ext(auVar24,auVar24,4,1);
  auVar28._4_4_ = fVar5;
  auVar28._0_4_ = fVar4;
  auVar28._8_4_ = fVar6;
  auVar28._12_4_ = fVar7;
  auVar29._4_4_ = fVar5;
  auVar29._0_4_ = fVar4;
  auVar29._8_4_ = fVar6;
  auVar29._12_4_ = fVar7;
  auVar25 = NEON_ext(auVar28,auVar29,4,1);
  auVar28 = NEON_ext(auVar18,auVar18,8,1);
  auVar29 = NEON_ext(auVar25,auVar25,8,1);
  uVar9 = NEON_rev64(auVar28._0_8_,4);
  uVar23 = NEON_rev64(auVar29._0_8_,4);
  fVar8 = auVar24._0_4_;
  fVar14 = auVar24._4_4_;
  fVar16 = auVar24._8_4_;
  fVar17 = auVar24._12_4_;
  auVar19._0_4_ = fVar8 * auVar25._0_4_ - fVar4 * auVar18._0_4_;
  auVar19._4_4_ = fVar14 * auVar25._4_4_ - fVar5 * auVar18._4_4_;
  auVar19._8_4_ = fVar16 * (float)uVar23 - fVar6 * (float)uVar9;
  auVar19._12_4_ = fVar17 * (float)((ulong)uVar23 >> 0x20) - fVar7 * (float)((ulong)uVar9 >> 0x20);
  auVar18 = NEON_ext(auVar19,auVar19,4,1);
  fVar3 = fVar4 * fVar8;
  fVar26 = fVar5 * fVar14;
  auVar1._4_4_ = fVar26;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar6 * fVar16;
  auVar1._12_4_ = fVar7 * fVar17;
  auVar2._4_4_ = fVar26;
  auVar2._0_4_ = fVar3;
  auVar2._8_4_ = fVar6 * fVar16;
  auVar2._12_4_ = fVar7 * fVar17;
  auVar24 = NEON_ext(auVar1,auVar2,8,1);
  auVar20._0_8_ =
       CONCAT44(fVar5 * fVar17 + (auVar18._4_4_ - fVar14 * fVar7),
                fVar4 * fVar17 + (auVar18._0_4_ - fVar8 * fVar7));
  auVar20._8_4_ = fVar6 * fVar17 + (auVar19._0_4_ - fVar16 * fVar7);
  auVar20._12_4_ = fVar3 + fVar26 + auVar24._0_4_ + auVar24._4_4_;
  uStack_68 = auVar20._8_8_;
  local_70 = auVar20._0_8_;
  fVar4 = (float)FUN_00437dd0(&local_70);
  if (0.0 < fVar4) {
    auVar21._0_4_ = (float)local_70 * (float)local_70;
    auVar21._4_4_ = local_70._4_4_ * local_70._4_4_;
    auVar21._8_4_ = (float)uStack_68 * (float)uStack_68;
    auVar21._12_4_ = uStack_68._4_4_ * uStack_68._4_4_;
    auVar24 = NEON_ext(auVar21,auVar21,8,1);
    if (DAT_0413f520 < auVar21._0_4_ + auVar21._4_4_ + auVar24._0_4_) {
      fVar5 = auVar21._0_4_ + auVar21._4_4_ + auVar21._8_4_;
      fVar7 = auVar21._0_4_ + auVar21._4_4_ + auVar21._8_4_;
      uVar9 = CONCAT44(fVar7,fVar5);
      uVar23 = NEON_frsqrte(uVar9,4);
      fVar6 = (float)uVar23;
      fVar3 = (float)((ulong)uVar23 >> 0x20);
      uVar23 = NEON_frsqrts(uVar9,CONCAT44(fVar3 * fVar3,fVar6 * fVar6),4);
      fVar6 = fVar6 * (float)uVar23;
      fVar3 = fVar3 * (float)((ulong)uVar23 >> 0x20);
      iVar22 = -(uint)(fVar5 <= 0.0);
      iVar27 = -(uint)(fVar7 <= 0.0);
      uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar3 * fVar3,fVar6 * fVar6),4);
      fVar6 = (float)uVar9 * fVar6;
      fVar3 = (float)((ulong)uVar9 >> 0x20) * fVar3;
      fVar5 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                              CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                       CONCAT11((byte)((uint)fVar6 >> 8) &
                                                ~(byte)((uint)iVar22 >> 8),
                                                SUB41(fVar6,0) & ~(byte)iVar22)));
      fVar4 = fVar4 / param_1;
      fVar6 = (float)(CONCAT17((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                               CONCAT16((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                        CONCAT15((byte)((uint)fVar3 >> 8) &
                                                 ~(byte)((uint)iVar27 >> 8),
                                                 CONCAT14(SUB41(fVar3,0) & ~(byte)iVar27,fVar5))))
                     >> 0x20);
      local_70._4_4_ = local_70._4_4_ * fVar6;
      uStack_68._0_4_ = (float)uStack_68 * fVar5;
      fVar6 = uStack_68._4_4_ * fVar6;
      bVar13 = (byte)(-(uint)(uStack_68._4_4_ < 0.0) >> 0x18);
      bVar15 = (byte)(-(uint)(uStack_68._4_4_ < 0.0) >> 0x18);
      uVar10 = CONCAT17(bVar15,(uint7)(bVar13 & 0x80) << 0x18) & 0x80ffffffffffffff;
      fVar5 = (float)CONCAT13((byte)(uVar10 >> 0x18) ^
                              (byte)((uint)((float)local_70 * fVar5) >> 0x18),
                              SUB43((float)local_70 * fVar5,0));
      auVar11._0_8_ =
           CONCAT17((byte)(uVar10 >> 0x38) ^ (byte)((uint)local_70._4_4_ >> 0x18),
                    CONCAT16((char)((uint)local_70._4_4_ >> 0x10),
                             CONCAT15((char)((uint)local_70._4_4_ >> 8),
                                      CONCAT14(SUB41(local_70._4_4_,0),fVar5))));
      auVar11[8] = SUB41((float)uStack_68,0);
      auVar11[9] = (char)((uint)(float)uStack_68 >> 8);
      auVar11[10] = (char)((uint)(float)uStack_68 >> 0x10);
      auVar11[0xb] = bVar13 & 0x80 ^ (byte)((uint)(float)uStack_68 >> 0x18);
      auVar12[0xc] = SUB41(fVar6,0);
      auVar12._0_12_ = auVar11;
      auVar12[0xd] = (char)((uint)fVar6 >> 8);
      auVar12[0xe] = (char)((uint)fVar6 >> 0x10);
      auVar12[0xf] = bVar15 & 0x80 ^ (byte)((uint)fVar6 >> 0x18);
      *(ulong *)(param_2 + 0x78) = CONCAT44(auVar12._12_4_ * fVar4,auVar11._8_4_ * fVar4);
      *(ulong *)(param_2 + 0x70) =
           CONCAT44((float)((ulong)auVar11._0_8_ >> 0x20) * fVar4,fVar5 * fVar4);
      goto LAB_0053d744;
    }
  }
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
LAB_0053d744:
  param_1 = 1.0 / param_1;
  *(ulong *)(param_2 + 0x68) =
       CONCAT44(*(float *)(param_2 + 0x6c) * param_1,*(float *)(param_2 + 0x68) * param_1);
  *(ulong *)(param_2 + 0x60) =
       CONCAT44(*(float *)(param_2 + 100) * param_1,*(float *)(param_2 + 0x60) * param_1);
  return;
}

