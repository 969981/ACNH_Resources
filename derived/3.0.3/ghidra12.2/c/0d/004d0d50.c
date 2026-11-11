
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_004d0d50(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  float fVar4;
  undefined1 auVar1 [12];
  float fVar3;
  undefined1 auVar2 [16];
  float fVar5;
  float fVar6;
  byte bVar9;
  ulong uVar7;
  byte bVar10;
  byte bVar11;
  undefined1 auVar8 [12];
  byte bVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  undefined8 uVar15;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [12];
  undefined8 uVar22;
  undefined1 auVar24 [16];
  float fVar27;
  float fVar28;
  float fVar33;
  undefined1 auVar29 [12];
  float fVar32;
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  auVar46 = param_2[3];
  auVar13 = NEON_ext(auVar46,auVar46,8,1);
  auVar2 = NEON_ext(param_2[2],param_2[2],4,1);
  auVar16 = NEON_ext(auVar46,auVar46,0xc,1);
  fVar6 = auVar2._0_4_;
  auVar41._0_4_ = auVar46._0_4_ * fVar6;
  fVar3 = auVar2._4_4_;
  auVar41._4_4_ = auVar46._4_4_ * fVar3;
  fVar4 = auVar2._8_4_;
  auVar41._8_4_ = auVar46._8_4_ * fVar4;
  fVar5 = auVar2._12_4_;
  auVar41._12_4_ = auVar46._12_4_ * fVar5;
  auVar30 = NEON_ext(auVar41,auVar41,8,1);
  auVar57._0_4_ = auVar13._0_4_ * fVar6;
  auVar57._4_4_ = auVar13._4_4_ * fVar3;
  auVar57._8_4_ = auVar13._8_4_ * fVar4;
  auVar57._12_4_ = auVar13._12_4_ * fVar5;
  auVar24 = NEON_ext(auVar57,auVar57,4,1);
  auVar56._0_4_ = auVar16._0_4_ * fVar6;
  auVar56._4_4_ = auVar16._4_4_ * fVar3;
  auVar56._8_4_ = auVar16._8_4_ * fVar4;
  auVar56._12_4_ = auVar16._12_4_ * fVar5;
  auVar16 = NEON_ext(auVar41,auVar41,4,1);
  auVar13 = *param_2;
  auVar41 = param_2[1];
  auVar42 = NEON_ext(auVar41,auVar41,8,1);
  auVar53 = NEON_ext(auVar41,auVar41,0xc,1);
  fVar44 = auVar24._0_4_ - auVar30._0_4_;
  fVar47 = auVar24._4_4_ - auVar30._4_4_;
  fVar49 = auVar24._8_4_ - auVar30._8_4_;
  fVar51 = auVar24._12_4_ - auVar30._12_4_;
  auVar24 = NEON_ext(auVar56,auVar56,8,1);
  fVar35 = auVar57._0_4_ - auVar16._0_4_;
  fVar36 = auVar57._4_4_ - auVar16._4_4_;
  fVar37 = auVar57._8_4_ - auVar16._8_4_;
  fVar38 = auVar57._12_4_ - auVar16._12_4_;
  auVar16 = NEON_ext(auVar41,auVar41,4,1);
  fVar28 = auVar24._0_4_ - auVar56._0_4_;
  fVar32 = auVar24._4_4_ - auVar56._4_4_;
  fVar33 = auVar24._8_4_ - auVar56._8_4_;
  fVar34 = auVar24._12_4_ - auVar56._12_4_;
  fVar20 = auVar53._0_4_ * fVar35 + auVar16._0_4_ * fVar44 + auVar42._0_4_ * fVar28;
  fVar25 = auVar53._4_4_ * fVar36 + auVar16._4_4_ * fVar47 + auVar42._4_4_ * fVar32;
  fVar26 = auVar53._8_4_ * fVar37 + auVar16._8_4_ * fVar49 + auVar42._8_4_ * fVar33;
  fVar27 = auVar53._12_4_ * fVar38 + auVar16._12_4_ * fVar51 + auVar42._12_4_ * fVar34;
  fVar14 = auVar13._0_4_ * fVar20;
  fVar17 = auVar13._4_4_ * fVar25;
  fVar18 = auVar13._8_4_ * fVar26;
  fVar19 = auVar13._12_4_ * fVar27;
  uVar7 = CONCAT17((char)((ulong)_DAT_04c24660 >> 0x38),
                   (uint7)((byte)((ulong)_DAT_04c24660 >> 0x18) & 0x80) << 0x18) &
          0x80ffffffffffffff;
  bVar11 = (byte)((ulong)uRam0000000004c24668 >> 0x18) & 0x80;
  bVar12 = (byte)((ulong)uRam0000000004c24668 >> 0x38) & 0x80;
  bVar9 = (byte)(uVar7 >> 0x18);
  fVar14 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar14 >> 0x18),SUB43(fVar14,0));
  bVar10 = (byte)(uVar7 >> 0x38);
  auVar16._0_8_ =
       CONCAT17(bVar10 ^ (byte)((uint)fVar17 >> 0x18),
                CONCAT16((char)((uint)fVar17 >> 0x10),
                         CONCAT15((char)((uint)fVar17 >> 8),CONCAT14(SUB41(fVar17,0),fVar14))));
  auVar16[8] = SUB41(fVar18,0);
  auVar16[9] = (undefined1)((uint)fVar18 >> 8);
  auVar16[10] = (undefined1)((uint)fVar18 >> 0x10);
  auVar16[0xb] = bVar11 ^ (byte)((uint)fVar18 >> 0x18);
  auVar16[0xc] = SUB41(fVar19,0);
  auVar16[0xd] = (undefined1)((uint)fVar19 >> 8);
  auVar16[0xe] = (undefined1)((uint)fVar19 >> 0x10);
  auVar16[0xf] = bVar12 ^ (byte)((uint)fVar19 >> 0x18);
  auVar57 = NEON_ext(auVar16,auVar16,8,1);
  fVar14 = fVar14 + (float)((ulong)auVar16._0_8_ >> 0x20);
  fVar18 = auVar57._0_4_ + auVar57._4_4_;
  fVar17 = fVar14 + fVar18;
  uVar15 = CONCAT44(fVar14 + fVar18,fVar17);
  if ((float)*param_3 < ABS(fVar17)) {
    auVar16 = NEON_ext(auVar13,auVar13,4,1);
    fVar14 = auVar16._0_4_;
    fVar17 = auVar16._4_4_;
    fVar18 = auVar16._8_4_;
    fVar19 = auVar16._12_4_;
    auVar43._0_4_ = auVar42._0_4_ * fVar14;
    auVar43._4_4_ = auVar42._4_4_ * fVar17;
    auVar43._8_4_ = auVar42._8_4_ * fVar18;
    auVar43._12_4_ = auVar42._12_4_ * fVar19;
    auVar13 = NEON_ext(auVar46,auVar46,4,1);
    auVar54._0_4_ = auVar53._0_4_ * fVar14;
    auVar54._4_4_ = auVar53._4_4_ * fVar17;
    auVar54._8_4_ = auVar53._8_4_ * fVar18;
    auVar54._12_4_ = auVar53._12_4_ * fVar19;
    auVar40._0_4_ = auVar41._0_4_ * fVar14;
    auVar40._4_4_ = auVar41._4_4_ * fVar17;
    auVar40._8_4_ = auVar41._8_4_ * fVar18;
    auVar40._12_4_ = auVar41._12_4_ * fVar19;
    auVar16 = NEON_ext(auVar16,auVar16,4,1);
    fVar21 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar20 >> 0x18),SUB43(fVar20,0));
    auVar23._0_8_ =
         CONCAT17(bVar10 ^ (byte)((uint)fVar25 >> 0x18),
                  CONCAT16((char)((uint)fVar25 >> 0x10),
                           CONCAT15((char)((uint)fVar25 >> 8),CONCAT14(SUB41(fVar25,0),fVar21))));
    auVar23[8] = SUB41(fVar26,0);
    auVar23[9] = (undefined1)((uint)fVar26 >> 8);
    auVar23[10] = (undefined1)((uint)fVar26 >> 0x10);
    auVar23[0xb] = bVar11 ^ (byte)((uint)fVar26 >> 0x18);
    auVar30[0xc] = SUB41(fVar27,0);
    auVar30._0_12_ = auVar23;
    auVar30[0xd] = (undefined1)((uint)fVar27 >> 8);
    auVar30[0xe] = (undefined1)((uint)fVar27 >> 0x10);
    auVar30[0xf] = bVar12 ^ (byte)((uint)fVar27 >> 0x18);
    auVar57 = NEON_ext(auVar16,auVar16,4,1);
    auVar56 = NEON_ext(auVar43,auVar43,4,1);
    auVar46 = NEON_ext(auVar40,auVar40,8,1);
    auVar41 = NEON_ext(auVar40,auVar40,4,1);
    fVar45 = auVar56._0_4_ - auVar46._0_4_;
    fVar48 = auVar56._4_4_ - auVar46._4_4_;
    fVar50 = auVar56._8_4_ - auVar46._8_4_;
    fVar52 = auVar56._12_4_ - auVar46._12_4_;
    auVar46 = NEON_ext(auVar54,auVar54,8,1);
    fVar27 = fVar14 * fVar44 + fVar28 * auVar16._0_4_ + fVar35 * auVar57._0_4_;
    fVar28 = fVar17 * fVar47 + fVar32 * auVar16._4_4_ + fVar36 * auVar57._4_4_;
    fVar32 = fVar18 * fVar49 + fVar33 * auVar16._8_4_ + fVar37 * auVar57._8_4_;
    fVar33 = fVar19 * fVar51 + fVar34 * auVar16._12_4_ + fVar38 * auVar57._12_4_;
    fVar38 = auVar46._0_4_ - auVar54._0_4_;
    fVar44 = auVar46._4_4_ - auVar54._4_4_;
    fVar47 = auVar46._8_4_ - auVar54._8_4_;
    fVar49 = auVar46._12_4_ - auVar54._12_4_;
    auVar16 = NEON_ext(auVar13,auVar13,4,1);
    auVar46 = NEON_ext(auVar2,auVar2,4,1);
    fVar34 = auVar43._0_4_ - auVar41._0_4_;
    fVar35 = auVar43._4_4_ - auVar41._4_4_;
    fVar36 = auVar43._8_4_ - auVar41._8_4_;
    fVar37 = auVar43._12_4_ - auVar41._12_4_;
    auVar2 = NEON_ext(auVar16,auVar16,4,1);
    auVar41 = NEON_ext(auVar46,auVar46,4,1);
    uVar7 = CONCAT17(PTR_DAT_04bd4b68[0xa7],(uint7)(PTR_DAT_04bd4b68[0xa3] & 0x80) << 0x18) &
            0x80ffffffffffffff;
    uVar39 = NEON_frecpe(uVar15,4);
    uVar55 = NEON_frecps(uVar15,uVar39,4);
    fVar25 = (float)uVar39 * (float)uVar55;
    fVar26 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
    fVar14 = auVar2._0_4_ * fVar34 + auVar13._0_4_ * fVar45 + auVar16._0_4_ * fVar38;
    fVar17 = auVar2._4_4_ * fVar35 + auVar13._4_4_ * fVar48 + auVar16._4_4_ * fVar44;
    fVar18 = auVar2._8_4_ * fVar36 + auVar13._8_4_ * fVar50 + auVar16._8_4_ * fVar47;
    fVar20 = auVar2._12_4_ * fVar37 + auVar13._12_4_ * fVar52 + auVar16._12_4_ * fVar49;
    fVar19 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar14 >> 0x18),SUB43(fVar14,0));
    auVar8._0_8_ = CONCAT17(bVar10 ^ (byte)((uint)fVar17 >> 0x18),
                            CONCAT16((char)((uint)fVar17 >> 0x10),
                                     CONCAT15((char)((uint)fVar17 >> 8),
                                              CONCAT14(SUB41(fVar17,0),fVar19))));
    auVar8[8] = SUB41(fVar18,0);
    auVar8[9] = (char)((uint)fVar18 >> 8);
    auVar8[10] = (char)((uint)fVar18 >> 0x10);
    auVar8[0xb] = bVar11 ^ (byte)((uint)fVar18 >> 0x18);
    auVar2[0xc] = SUB41(fVar20,0);
    auVar2._0_12_ = auVar8;
    auVar2[0xd] = (char)((uint)fVar20 >> 8);
    auVar2[0xe] = (char)((uint)fVar20 >> 0x10);
    auVar2[0xf] = bVar12 ^ (byte)((uint)fVar20 >> 0x18);
    fVar14 = auVar41._0_4_ * fVar34 + fVar6 * fVar45 + auVar46._0_4_ * fVar38;
    fVar17 = auVar41._4_4_ * fVar35 + fVar3 * fVar48 + auVar46._4_4_ * fVar44;
    fVar18 = auVar41._8_4_ * fVar36 + fVar4 * fVar50 + auVar46._8_4_ * fVar47;
    fVar6 = auVar41._12_4_ * fVar37 + fVar5 * fVar52 + auVar46._12_4_ * fVar49;
    bVar9 = (byte)(uVar7 >> 0x18);
    fVar14 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar14 >> 0x18),SUB43(fVar14,0));
    bVar10 = (byte)(uVar7 >> 0x38);
    auVar1._0_8_ = CONCAT17(bVar10 ^ (byte)((uint)fVar17 >> 0x18),
                            CONCAT16((char)((uint)fVar17 >> 0x10),
                                     CONCAT15((char)((uint)fVar17 >> 8),
                                              CONCAT14(SUB41(fVar17,0),fVar14))));
    auVar1[8] = SUB41(fVar18,0);
    auVar1[9] = (undefined1)((uint)fVar18 >> 8);
    auVar1[10] = (undefined1)((uint)fVar18 >> 0x10);
    auVar1[0xb] = PTR_DAT_04bd4b68[0xab] & 0x80 ^ (byte)((uint)fVar18 >> 0x18);
    auVar46[0xc] = SUB41(fVar6,0);
    auVar46._0_12_ = auVar1;
    auVar46[0xd] = (undefined1)((uint)fVar6 >> 8);
    auVar46[0xe] = (undefined1)((uint)fVar6 >> 0x10);
    auVar46[0xf] = PTR_DAT_04bd4b68[0xaf] & 0x80 ^ (byte)((uint)fVar6 >> 0x18);
    uVar15 = NEON_frecps(uVar15,CONCAT44(fVar26,fVar25),4);
    fVar25 = fVar25 * (float)uVar15;
    fVar26 = fVar26 * (float)((ulong)uVar15 >> 0x20);
    fVar17 = (float)CONCAT13(bVar9 ^ (byte)((uint)fVar27 >> 0x18),SUB43(fVar27,0));
    auVar29._0_8_ =
         CONCAT17(bVar10 ^ (byte)((uint)fVar28 >> 0x18),
                  CONCAT16((char)((uint)fVar28 >> 0x10),
                           CONCAT15((char)((uint)fVar28 >> 8),CONCAT14(SUB41(fVar28,0),fVar17))));
    auVar29[8] = SUB41(fVar32,0);
    auVar29[9] = (undefined1)((uint)fVar32 >> 8);
    auVar29[10] = (undefined1)((uint)fVar32 >> 0x10);
    auVar29[0xb] = PTR_DAT_04bd4b68[0xab] & 0x80 ^ (byte)((uint)fVar32 >> 0x18);
    auVar53[0xc] = SUB41(fVar33,0);
    auVar53._0_12_ = auVar29;
    auVar53[0xd] = (undefined1)((uint)fVar33 >> 8);
    auVar53[0xe] = (undefined1)((uint)fVar33 >> 0x10);
    auVar53[0xf] = PTR_DAT_04bd4b68[0xaf] & 0x80 ^ (byte)((uint)fVar33 >> 0x18);
    auVar42._0_4_ = fVar25 * fVar21;
    auVar42._4_4_ = fVar26 * (float)((ulong)auVar23._0_8_ >> 0x20);
    auVar42._8_4_ = fVar25 * auVar23._8_4_;
    auVar42._12_4_ = fVar26 * auVar30._12_4_;
    auVar31._0_4_ = fVar25 * fVar17;
    auVar31._4_4_ = fVar26 * (float)((ulong)auVar29._0_8_ >> 0x20);
    auVar31._8_4_ = fVar25 * auVar29._8_4_;
    auVar31._12_4_ = fVar26 * auVar53._12_4_;
    uVar39 = CONCAT44(auVar31._0_4_,auVar42._0_4_);
    auVar24._0_4_ = fVar25 * fVar19;
    auVar24._4_4_ = fVar26 * (float)((ulong)auVar8._0_8_ >> 0x20);
    auVar24._8_4_ = fVar25 * auVar8._8_4_;
    auVar24._12_4_ = fVar26 * auVar2._12_4_;
    uVar55 = CONCAT44(auVar31._4_4_,auVar42._4_4_);
    auVar13._0_4_ = fVar25 * fVar14;
    auVar13._4_4_ = fVar26 * (float)((ulong)auVar1._0_8_ >> 0x20);
    auVar13._8_4_ = fVar25 * auVar1._8_4_;
    auVar13._12_4_ = fVar26 * auVar46._12_4_;
    auVar46 = NEON_ext(auVar42,auVar42,8,1);
    uVar22 = CONCAT44(auVar13._4_4_,auVar24._4_4_);
    auVar2 = NEON_ext(auVar13,auVar13,8,1);
    uVar15 = CONCAT44(auVar13._0_4_,auVar24._0_4_);
    auVar13 = NEON_ext(auVar24,auVar24,8,1);
    auVar41 = NEON_ext(auVar31,auVar31,8,1);
    param_1[1] = uVar15;
    *param_1 = uVar39;
    param_1[3] = uVar22;
    param_1[2] = uVar55;
    param_1[5] = CONCAT44(auVar2._0_4_,auVar13._0_4_);
    param_1[4] = CONCAT44(auVar41._0_4_,auVar46._0_4_);
    param_1[7] = CONCAT44(auVar2._4_4_,auVar13._4_4_);
    param_1[6] = CONCAT44(auVar41._4_4_,auVar46._4_4_);
    return 0;
  }
  return 0x80040200;
}

