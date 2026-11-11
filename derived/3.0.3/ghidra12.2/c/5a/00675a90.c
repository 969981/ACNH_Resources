
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00675a90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 (*param_5) [16])

{
  uint uVar1;
  uint7 uVar2;
  undefined1 auVar3 [15];
  uint uVar8;
  byte bVar9;
  uint uVar10;
  undefined1 auVar7 [16];
  undefined1 auVar6 [16];
  undefined1 auVar5 [16];
  undefined1 auVar4 [16];
  uint uVar11;
  ulong uVar12;
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar29;
  int iVar33;
  int iVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar35;
  undefined1 auVar32 [16];
  undefined1 in_q6 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar58;
  float fVar59;
  undefined1 in_q7 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  
  auVar22 = *param_5;
  auVar57 = *(undefined1 (*) [16])(*param_5 + 0xc);
  auVar36._2_14_ = in_q6._2_14_;
  auVar36._0_2_ = auVar22._0_2_;
  auVar38._6_10_ = in_q6._6_10_;
  auVar38._0_4_ = auVar36._0_4_;
  auVar38._4_2_ = auVar22._2_2_;
  auVar40._10_6_ = in_q6._10_6_;
  auVar40._0_8_ = auVar38._0_8_;
  auVar40._8_2_ = auVar22._4_2_;
  auVar42._14_2_ = in_q6._14_2_;
  auVar42._0_12_ = auVar40._0_12_;
  auVar42._12_2_ = auVar22._6_2_;
  auVar37._4_12_ = auVar42._4_12_;
  auVar37._0_4_ = auVar38._0_4_ & 0xffff;
  auVar39._8_8_ = auVar42._8_8_;
  auVar39._0_6_ = auVar37._0_6_;
  auVar39._6_2_ = 0;
  auVar41._12_4_ = auVar42._12_4_;
  auVar41._0_10_ = auVar39._0_10_;
  auVar41._10_2_ = 0;
  auVar24._0_14_ = auVar41._0_14_;
  auVar24._14_2_ = 0;
  auVar31._2_14_ = auVar22._2_14_;
  auVar31._0_2_ = auVar22._8_2_;
  auVar54._6_10_ = auVar22._6_10_;
  auVar54._0_4_ = auVar31._0_4_;
  auVar54._4_2_ = auVar22._10_2_;
  auVar5._10_6_ = auVar22._10_6_;
  auVar5._0_8_ = auVar54._0_8_;
  auVar5._8_2_ = auVar22._12_2_;
  auVar7._0_12_ = auVar5._0_12_;
  auVar7._12_2_ = auVar22._14_2_;
  auVar7._14_2_ = auVar22._14_2_;
  auVar44._4_12_ = auVar7._4_12_;
  auVar44._0_4_ = auVar54._0_4_ & 0xffff;
  auVar4._8_8_ = auVar7._8_8_;
  auVar4._0_6_ = auVar44._0_6_;
  auVar4._6_2_ = 0;
  auVar6._12_4_ = auVar7._12_4_;
  auVar6._0_10_ = auVar4._0_10_;
  auVar6._10_2_ = 0;
  auVar46._2_14_ = in_q7._2_14_;
  auVar46._0_2_ = auVar57._0_2_;
  auVar48._6_10_ = in_q7._6_10_;
  auVar48._0_4_ = auVar46._0_4_;
  auVar48._4_2_ = auVar57._2_2_;
  auVar50._10_6_ = in_q7._10_6_;
  auVar50._0_8_ = auVar48._0_8_;
  auVar50._8_2_ = auVar57._4_2_;
  auVar52._14_2_ = in_q7._14_2_;
  auVar52._0_12_ = auVar50._0_12_;
  auVar52._12_2_ = auVar57._6_2_;
  auVar47._4_12_ = auVar52._4_12_;
  auVar47._0_4_ = auVar48._0_4_ & 0xffff;
  auVar49._8_8_ = auVar52._8_8_;
  auVar49._0_6_ = auVar47._0_6_;
  auVar49._6_2_ = 0;
  auVar51._12_4_ = auVar52._12_4_;
  auVar51._0_10_ = auVar49._0_10_;
  auVar51._10_2_ = 0;
  auVar30._0_14_ = auVar51._0_14_;
  auVar30._14_2_ = 0;
  auVar13._2_14_ = auVar57._2_14_;
  auVar13._0_2_ = auVar57._8_2_;
  auVar15._6_10_ = auVar57._6_10_;
  auVar15._0_4_ = auVar13._0_4_;
  auVar15._4_2_ = auVar57._10_2_;
  auVar17._10_6_ = auVar57._10_6_;
  auVar17._0_8_ = auVar15._0_8_;
  auVar17._8_2_ = auVar57._12_2_;
  auVar19._0_12_ = auVar17._0_12_;
  auVar19._12_2_ = auVar57._14_2_;
  auVar19._14_2_ = auVar57._14_2_;
  auVar14._4_12_ = auVar19._4_12_;
  auVar14._0_4_ = auVar15._0_4_ & 0xffff;
  auVar16._8_8_ = auVar19._8_8_;
  auVar16._0_6_ = auVar14._0_6_;
  auVar16._6_2_ = 0;
  auVar18._12_4_ = auVar19._12_4_;
  auVar18._0_10_ = auVar16._0_10_;
  auVar18._10_2_ = 0;
  auVar25._14_2_ = 0;
  auVar25._0_14_ = auVar30._0_14_ ^ auVar18._0_14_;
  auVar30 = auVar30 ^ auVar25 & *(undefined1 (*) [16])(PTR_DAT_04bd68a0 + 0x30);
  auVar27._14_2_ = 0;
  auVar27._0_14_ = auVar24._0_14_ ^ auVar6._0_14_;
  auVar24 = auVar24 ^ auVar27 & *(undefined1 (*) [16])(PTR_DAT_04bd68a0 + 0x30);
  auVar25 = NEON_ext(auVar24,auVar24,0xc,1);
  auVar31 = NEON_ext(auVar30,auVar30,0xc,1);
  auVar26._0_8_ =
       CONCAT26(auVar25._2_2_,CONCAT24(auVar25._0_2_,(uint)(auVar22._0_2_ & 0x7fff))) &
       0x7fff7fffffffffff;
  auVar26._8_2_ = auVar57._0_2_ & 0x7fff;
  auVar26._10_2_ = 0;
  auVar26._12_2_ = auVar31._0_2_ & 0x7fff;
  auVar26._14_2_ = auVar31._2_2_ & 0x7fff;
  auVar43._0_8_ =
       CONCAT26(auVar25._6_2_,CONCAT24(auVar25._4_2_,(uint)auVar22._2_2_)) & 0x7fff7fff7fff7fff;
  auVar43._8_2_ = auVar57._2_2_ & 0x7fff;
  auVar43._10_2_ = 0;
  auVar43._12_2_ = auVar31._4_2_ & 0x7fff;
  auVar43._14_2_ = auVar31._6_2_ & 0x7fff;
  auVar27 = NEON_scvtf(auVar26,4);
  auVar53._0_8_ =
       CONCAT26(auVar25._10_2_,CONCAT24(auVar25._8_2_,(uint)auVar22._4_2_)) & 0x7fff7fff7fff7fff;
  auVar53._8_2_ = auVar57._4_2_ & 0x7fff;
  auVar53._10_2_ = 0;
  auVar53._12_2_ = auVar31._8_2_ & 0x7fff;
  auVar53._14_2_ = auVar31._10_2_ & 0x7fff;
  auVar44 = NEON_scvtf(auVar43,4);
  auVar54 = NEON_scvtf(auVar53,4);
  uVar12 = CONCAT17(auVar25[0xb],
                    (uint7)(CONCAT15(auVar25[9],(uint5)(auVar22[5] & 0x80) << 8) & 0x80ffffffffff))
           & 0x80ffffffffffffff;
  auVar20._0_10_ = CONCAT19(auVar57[5] & 0x80,(unkuint9)uVar12);
  auVar20._10_3_ = 0;
  auVar20[0xd] = auVar31[9] & 0x80;
  auVar20[0xe] = 0;
  auVar20[0xf] = auVar31[0xb] & 0x80;
  auVar28._0_4_ = auVar27._0_4_ * 4.3161006e-05 + -0.70710677;
  auVar28._4_4_ = auVar27._4_4_ * 4.3161006e-05 + -0.70710677;
  auVar28._8_4_ = auVar27._8_4_ * 4.3161006e-05 + -0.70710677;
  auVar28._12_4_ = auVar27._12_4_ * 4.3161006e-05 + -0.70710677;
  auVar56._0_4_ = auVar44._0_4_ * 4.3161006e-05 + -0.70710677;
  auVar56._4_4_ = auVar44._4_4_ * 4.3161006e-05 + -0.70710677;
  auVar56._8_4_ = auVar44._8_4_ * 4.3161006e-05 + -0.70710677;
  auVar56._12_4_ = auVar44._12_4_ * 4.3161006e-05 + -0.70710677;
  auVar21._0_4_ = auVar54._0_4_ * 4.3161006e-05 + -0.70710677;
  auVar21._4_4_ = auVar54._4_4_ * 4.3161006e-05 + -0.70710677;
  auVar21._8_4_ = auVar54._8_4_ * 4.3161006e-05 + -0.70710677;
  auVar21._12_4_ = auVar54._12_4_ * 4.3161006e-05 + -0.70710677;
  auVar23._0_4_ =
       (float)_DAT_0413f320 -
       (auVar21._0_4_ * auVar21._0_4_ +
       auVar28._0_4_ * auVar28._0_4_ + auVar56._0_4_ * auVar56._0_4_);
  auVar23._4_4_ =
       (float)((ulong)_DAT_0413f320 >> 0x20) -
       (auVar21._4_4_ * auVar21._4_4_ +
       auVar28._4_4_ * auVar28._4_4_ + auVar56._4_4_ * auVar56._4_4_);
  auVar23._8_4_ =
       (float)_DAT_0413f328 -
       (auVar21._8_4_ * auVar21._8_4_ +
       auVar28._8_4_ * auVar28._8_4_ + auVar56._8_4_ * auVar56._8_4_);
  auVar23._12_4_ =
       (float)((ulong)_DAT_0413f328 >> 0x20) -
       (auVar21._12_4_ * auVar21._12_4_ +
       auVar28._12_4_ * auVar28._12_4_ + auVar56._12_4_ * auVar56._12_4_);
  auVar27 = NEON_frsqrte(auVar23,4);
  uVar65 = (uint)*(undefined8 *)(PTR_DAT_04bd4c28 + 0x10);
  uVar66 = (uint)((ulong)*(undefined8 *)(PTR_DAT_04bd4c28 + 0x10) >> 0x20);
  uVar67 = (uint)*(undefined8 *)(PTR_DAT_04bd4c28 + 0x18);
  uVar68 = (uint)((ulong)*(undefined8 *)(PTR_DAT_04bd4c28 + 0x18) >> 0x20);
  uVar12 = CONCAT17(~(byte)(-(uint)((uint)(uVar12 >> 0x20) == uVar66) >> 0x18),
                    (uint7)(~(byte)(-(uint)((uint)uVar12 == uVar65) >> 0x18) & 0x80) << 0x18) &
           0x80ffffffffffffff;
  fVar45 = auVar27._0_4_;
  auVar61._0_4_ = fVar45 * fVar45;
  fVar58 = auVar27._4_4_;
  auVar61._4_4_ = fVar58 * fVar58;
  fVar59 = auVar27._8_4_;
  auVar61._8_4_ = fVar59 * fVar59;
  fVar60 = auVar27._12_4_;
  auVar61._12_4_ = fVar60 * fVar60;
  auVar27 = NEON_frsqrts(auVar23,auVar61,4);
  fVar45 = fVar45 * auVar27._0_4_;
  fVar58 = fVar58 * auVar27._4_4_;
  fVar59 = fVar59 * auVar27._8_4_;
  fVar60 = fVar60 * auVar27._12_4_;
  uVar2 = CONCAT16(auVar25[7] >> 6,
                   (uint6)(CONCAT14(auVar25[5] >> 6,(uint)(auVar22[3] >> 6 & 2)) & 0x2ffffffff)) &
          0x2ffffffffffff;
  auVar62._0_4_ = fVar45 * fVar45;
  auVar62._4_4_ = fVar58 * fVar58;
  auVar62._8_4_ = fVar59 * fVar59;
  auVar62._12_4_ = fVar60 * fVar60;
  uVar1 = (uint)(byte)((byte)uVar2 | auVar22[1] >> 7);
  bVar9 = auVar57[3] >> 6 & 2 | (byte)(auVar47._0_4_ >> 8) >> 7;
  auVar3._0_12_ = ZEXT112(bVar9) << 0x40;
  auVar3[0xc] = auVar31[5] >> 6 & 2 | auVar31[1] >> 7;
  auVar3[0xd] = 0;
  auVar3[0xe] = auVar31[7] >> 6 & 2 | auVar31[3] >> 7;
  iVar29 = -(uint)(auVar23._0_4_ == 0.0);
  iVar33 = -(uint)(auVar23._4_4_ == 0.0);
  iVar34 = -(uint)(auVar23._8_4_ == 0.0);
  iVar35 = -(uint)(auVar23._12_4_ == 0.0);
  auVar64._0_4_ = -(uint)((uint)*(undefined8 *)(PTR_DAT_04bd4c28 + 0x20) == uVar1);
  uVar8 = (uint)(uint3)(CONCAT16((byte)(uVar2 >> 0x30) | auVar25[3] >> 7,
                                 (uint6)CONCAT14((byte)(uVar2 >> 0x20) | auVar25[1] >> 7,uVar1)) >>
                       0x20);
  auVar64._4_4_ = -(uint)((uint)((ulong)*(undefined8 *)(PTR_DAT_04bd4c28 + 0x20) >> 0x20) == uVar8);
  uVar10 = (uint)bVar9;
  auVar64._8_4_ = -(uint)((uint)*(undefined8 *)(PTR_DAT_04bd4c28 + 0x28) == uVar10);
  uVar11 = (uint)auVar3._12_3_;
  auVar64._12_4_ =
       -(uint)((uint)((ulong)*(undefined8 *)(PTR_DAT_04bd4c28 + 0x28) >> 0x20) == uVar11);
  auVar25 = NEON_frsqrts(auVar23,auVar62,4);
  auVar63._0_4_ = -(uint)(uVar65 == uVar1);
  auVar63._4_4_ = -(uint)(uVar66 == uVar8);
  auVar63._8_4_ = -(uint)(uVar67 == uVar10);
  auVar63._12_4_ = -(uint)(uVar68 == uVar11);
  fVar45 = auVar25._0_4_ * fVar45 * auVar23._0_4_;
  fVar58 = auVar25._4_4_ * fVar58 * auVar23._4_4_;
  fVar59 = auVar25._8_4_ * fVar59 * auVar23._8_4_;
  fVar60 = auVar25._12_4_ * fVar60 * auVar23._12_4_;
  auVar57[1] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar29 >> 8);
  auVar57[0] = SUB41(fVar45,0) & ~(byte)iVar29;
  auVar57[2] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  auVar57[3] = (byte)(uVar12 >> 0x18) ^ (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18)
  ;
  auVar57[4] = SUB41(fVar58,0) & ~(byte)iVar33;
  auVar57[5] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar33 >> 8);
  auVar57[6] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
  auVar57[7] = (byte)(uVar12 >> 0x38) ^ (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18)
  ;
  auVar57[8] = SUB41(fVar59,0) & ~(byte)iVar34;
  auVar57[9] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar34 >> 8);
  auVar57[10] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
  auVar57[0xb] = ~(byte)(-(uint)((ushort)(auVar20._0_10_ >> 0x40) == uVar67) >> 0x18) & 0x80 ^
                 (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
  auVar57[0xc] = SUB41(fVar60,0) & ~(byte)iVar35;
  auVar57[0xd] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar35 >> 8);
  auVar57[0xe] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  auVar57[0xf] = ~(byte)(-(uint)(auVar20._12_4_ == uVar68) >> 0x18) & 0x80 ^
                 (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  auVar55._0_4_ = -(uint)(*(uint *)(PTR_DAT_04bd4c28 + 0x30) == uVar1);
  auVar55._4_4_ = -(uint)(*(uint *)(PTR_DAT_04bd4c28 + 0x34) == uVar8);
  auVar55._8_4_ = -(uint)(*(uint *)(PTR_DAT_04bd4c28 + 0x38) == uVar10);
  auVar55._12_4_ = -(uint)(*(uint *)(PTR_DAT_04bd4c28 + 0x3c) == uVar11);
  auVar22._0_8_ =
       CONCAT44(-(uint)(*(uint *)(PTR_DAT_04bd4c28 + 0x74) == uVar8),
                -(uint)(*(uint *)(PTR_DAT_04bd4c28 + 0x70) == uVar1));
  auVar22._8_4_ = -(uint)(*(uint *)(PTR_DAT_04bd4c28 + 0x78) == uVar10);
  auVar22._12_4_ = -(uint)(*(uint *)(PTR_DAT_04bd4c28 + 0x7c) == uVar11);
  auVar44 = auVar56 ^ (auVar56 ^ auVar57) & auVar64;
  auVar56 = auVar56 ^ (auVar56 ^ auVar57) & auVar55;
  auVar32._8_8_ = auVar22._8_8_;
  auVar32._0_8_ = auVar22._0_8_;
  auVar31 = auVar28 ^ (auVar28 ^ auVar57) & auVar63;
  auVar25 = auVar21 ^ (auVar21 ^ auVar57) & auVar22;
  auVar27 = NEON_ext(auVar31,auVar31,8,1);
  auVar44 = auVar44 ^ (auVar44 ^ auVar28) & auVar63;
  auVar56 = auVar56 ^ (auVar56 ^ auVar21) & auVar32;
  auVar22 = NEON_ext(auVar25,auVar25,8,1);
  auVar54 = NEON_ext(auVar44,auVar44,8,1);
  auVar57 = NEON_ext(auVar56,auVar56,8,1);
  param_1[1] = CONCAT44(auVar25._0_4_,auVar56._0_4_);
  *param_1 = CONCAT44(auVar44._0_4_,auVar31._0_4_);
  param_2[1] = CONCAT44(auVar25._4_4_,auVar56._4_4_);
  *param_2 = CONCAT44(auVar44._4_4_,auVar31._4_4_);
  param_3[1] = CONCAT44(auVar22._0_4_,auVar57._0_4_);
  *param_3 = CONCAT44(auVar54._0_4_,auVar27._0_4_);
  param_4[1] = CONCAT44(auVar22._4_4_,auVar57._4_4_);
  *param_4 = CONCAT44(auVar54._4_4_,auVar27._4_4_);
  return;
}

