
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0063e300(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  int iVar5;
  float fVar6;
  undefined1 auVar7 [12];
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar15;
  undefined1 auVar11 [16];
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar28;
  float fVar29;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  float fVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  float fVar41;
  undefined1 auVar30 [16];
  float fVar42;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar50 [16];
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar66;
  undefined8 uVar65;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined8 local_170;
  byte bStack_168;
  undefined7 uStack_167;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [48];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 auStack_70 [48];
  
  lVar4 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar4 != 0) {
    FUN_00443a00(lVar4,"TtExtract Frame Rotation");
  }
  uVar56 = _DAT_0413f528;
  uVar58 = _DAT_0413f520;
  FUN_004385d0(auStack_70);
  local_98 = param_3[1];
  local_88 = param_3[3];
  local_78 = param_3[5];
  local_a0 = *param_3;
  local_90 = param_3[2];
  local_80 = param_3[4];
  FUN_0047f980(&local_a0);
  FUN_0047f770(auStack_d0,&local_a0,param_3);
  FUN_0047fa90(auStack_d0,param_4,&local_e0,0x14);
  fVar48 = ABS((float)local_e0);
  fVar51 = ABS(local_e0._4_4_);
  uVar16 = SUB41(fVar51,0);
  uVar17 = (undefined1)((uint)fVar51 >> 8);
  uVar18 = (undefined1)((uint)fVar51 >> 0x10);
  uVar19 = (undefined1)((uint)fVar51 >> 0x18);
  fVar6 = ABS((float)uStack_d8);
  uVar20 = SUB41(fVar6,0);
  uVar21 = (undefined1)((uint)fVar6 >> 8);
  uVar22 = (undefined1)((uint)fVar6 >> 0x10);
  uVar23 = (undefined1)((uint)fVar6 >> 0x18);
  fVar15 = ABS(uStack_d8._4_4_);
  uVar24 = SUB41(fVar15,0);
  uVar25 = (undefined1)((uint)fVar15 >> 8);
  uVar26 = (undefined1)((uint)fVar15 >> 0x10);
  uVar27 = (undefined1)((uint)fVar15 >> 0x18);
  iVar5 = -(uint)((float)local_e0 == 0.0);
  iVar12 = -(uint)(local_e0._4_4_ == 0.0);
  iVar13 = -(uint)((float)uStack_d8 == 0.0);
  iVar14 = -(uint)(uStack_d8._4_4_ == 0.0);
  auVar30[4] = uVar16;
  auVar30._0_4_ = fVar48;
  auVar30[5] = uVar17;
  auVar30[6] = uVar18;
  auVar30[7] = uVar19;
  auVar30[8] = uVar20;
  auVar30[9] = uVar21;
  auVar30[10] = uVar22;
  auVar30[0xb] = uVar23;
  auVar30[0xc] = uVar24;
  auVar30[0xd] = uVar25;
  auVar30[0xe] = uVar26;
  auVar30[0xf] = uVar27;
  auVar30 = NEON_frsqrte(auVar30,4);
  uStack_d8 = CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,fVar6))));
  local_e0 = CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,fVar48))));
  fVar29 = auVar30._0_4_;
  auVar43._0_4_ = fVar29 * fVar29;
  fVar37 = auVar30._4_4_;
  auVar43._4_4_ = fVar37 * fVar37;
  fVar41 = auVar30._8_4_;
  auVar43._8_4_ = fVar41 * fVar41;
  fVar42 = auVar30._12_4_;
  auVar43._12_4_ = fVar42 * fVar42;
  auVar50[4] = uVar16;
  auVar50._0_4_ = fVar48;
  auVar50[5] = uVar17;
  auVar50[6] = uVar18;
  auVar50[7] = uVar19;
  auVar50[8] = uVar20;
  auVar50[9] = uVar21;
  auVar50[10] = uVar22;
  auVar50[0xb] = uVar23;
  auVar50[0xc] = uVar24;
  auVar50[0xd] = uVar25;
  auVar50[0xe] = uVar26;
  auVar50[0xf] = uVar27;
  auVar30 = NEON_frsqrts(auVar50,auVar43,4);
  fVar29 = fVar29 * auVar30._0_4_;
  fVar37 = fVar37 * auVar30._4_4_;
  fVar41 = fVar41 * auVar30._8_4_;
  fVar42 = fVar42 * auVar30._12_4_;
  auVar44._0_4_ = fVar29 * fVar29;
  auVar44._4_4_ = fVar37 * fVar37;
  auVar44._8_4_ = fVar41 * fVar41;
  auVar44._12_4_ = fVar42 * fVar42;
  auVar60[4] = uVar16;
  auVar60._0_4_ = fVar48;
  auVar60[5] = uVar17;
  auVar60[6] = uVar18;
  auVar60[7] = uVar19;
  auVar60[8] = uVar20;
  auVar60[9] = uVar21;
  auVar60[10] = uVar22;
  auVar60[0xb] = uVar23;
  auVar60[0xc] = uVar24;
  auVar60[0xd] = uVar25;
  auVar60[0xe] = uVar26;
  auVar60[0xf] = uVar27;
  auVar30 = NEON_frsqrts(auVar60,auVar44,4);
  fVar48 = fVar48 * auVar30._0_4_ * fVar29;
  fVar51 = fVar51 * auVar30._4_4_ * fVar37;
  fVar6 = fVar6 * auVar30._8_4_ * fVar41;
  fVar15 = fVar15 * auVar30._12_4_ * fVar42;
  fVar29 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                           CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                    CONCAT11((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                             SUB41(fVar48,0) & ~(byte)iVar5)));
  auVar7._0_8_ = CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                          CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                   CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                            CONCAT14(SUB41(fVar51,0) & ~(byte)iVar12,fVar29))));
  auVar7[8] = SUB41(fVar6,0) & ~(byte)iVar13;
  auVar7[9] = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar13 >> 8);
  auVar7[10] = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
  auVar7[0xb] = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
  auVar8[0xc] = SUB41(fVar15,0) & ~(byte)iVar14;
  auVar8._0_12_ = auVar7;
  auVar8[0xd] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar14 >> 8);
  auVar8[0xe] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
  auVar8[0xf] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
  fVar48 = (float)uVar58;
  fVar29 = fVar48 + fVar29;
  fVar6 = (float)((ulong)uVar58 >> 0x20);
  fVar37 = fVar6 + (float)((ulong)auVar7._0_8_ >> 0x20);
  fVar41 = (float)uVar56 + auVar7._8_4_;
  fVar42 = (float)((ulong)uVar56 >> 0x20) + auVar8._12_4_;
  auVar31._0_8_ =
       CONCAT44((float)((ulong)DAT_0413f4d0 >> 0x20) * fVar37,(float)DAT_0413f4d0 * fVar29);
  auVar31._8_4_ = (float)DAT_0413f4d8 * fVar41;
  auVar31._12_4_ = (float)((ulong)DAT_0413f4d8 >> 0x20) * fVar42;
  fVar51 = (float)((ulong)DAT_0413f4c0 >> 0x20) * fVar37;
  fVar15 = (float)((ulong)DAT_0413f4c8 >> 0x20) * fVar42;
  auVar9._0_8_ = CONCAT44(fVar37 * (float)((ulong)DAT_0413f4e0 >> 0x20),fVar29 * (float)DAT_0413f4e0
                         );
  auVar9._8_4_ = fVar41 * (float)DAT_0413f4e8;
  auVar9._12_4_ = fVar42 * (float)((ulong)DAT_0413f4e8 >> 0x20);
  uStack_108 = CONCAT17((char)((uint)fVar15 >> 0x18),
                        CONCAT16((char)((uint)fVar15 >> 0x10),
                                 CONCAT15((char)((uint)fVar15 >> 8),
                                          CONCAT14(SUB41(fVar15,0),(float)DAT_0413f4c8 * fVar41))));
  local_110 = CONCAT17((char)((uint)fVar51 >> 0x18),
                       CONCAT16((char)((uint)fVar51 >> 0x10),
                                CONCAT15((char)((uint)fVar51 >> 8),
                                         CONCAT14(SUB41(fVar51,0),(float)DAT_0413f4c0 * fVar29))));
  uStack_f8 = auVar31._8_8_;
  uStack_e8 = auVar9._8_8_;
  local_138 = param_4[1];
  local_128 = param_4[3];
  local_118 = param_4[5];
  local_140 = *param_4;
  local_130 = param_4[2];
  local_120 = param_4[4];
  uStack_100 = auVar31._0_8_;
  local_f0 = auVar9._0_8_;
  FUN_0047f980(&local_140);
  FUN_0047f770(&local_170,&local_110,&local_140);
  FUN_0047f770(&local_170,param_4,&local_170);
  auVar61._8_8_ = uStack_158;
  auVar61._0_8_ = local_160;
  auVar3._8_8_ = uStack_148;
  auVar3._0_8_ = uStack_150;
  auVar30 = NEON_ext(auVar3,auVar3,4,1);
  auVar50 = NEON_ext(auVar61,auVar61,4,1);
  auVar61 = NEON_ext(auVar30,auVar30,8,1);
  auVar60 = NEON_ext(auVar50,auVar50,8,1);
  uVar58 = NEON_rev64(auVar60._0_8_,4);
  uVar16 = (undefined1)((uint7)uStack_167 >> 8);
  uVar17 = (undefined1)((uint7)uStack_167 >> 0x10);
  uVar18 = (undefined1)((uint7)uStack_167 >> 0x18);
  uVar19 = (undefined1)((uint7)uStack_167 >> 0x20);
  uVar20 = (undefined1)((uint7)uStack_167 >> 0x28);
  uVar21 = (undefined1)((uint7)uStack_167 >> 0x30);
  auVar1[8] = bStack_168;
  auVar1._0_8_ = local_170;
  auVar68[8] = bStack_168;
  auVar68._0_8_ = local_170;
  uVar59 = NEON_rev64(auVar61._0_8_,4);
  fVar51 = (float)local_170;
  fVar15 = (float)((ulong)local_170 >> 0x20);
  fVar29 = (float)CONCAT71(uStack_167,bStack_168);
  fVar42 = (float)local_160;
  fVar49 = (float)((ulong)local_160 >> 0x20);
  fVar52 = (float)uStack_158;
  fVar41 = (float)((ulong)uVar59 >> 0x20);
  fVar53 = (float)((ulong)uStack_158 >> 0x20);
  fVar55 = (float)uStack_150;
  fVar45 = (float)((ulong)uStack_150 >> 0x20);
  fVar46 = (float)uStack_148;
  fVar47 = (float)((ulong)uStack_148 >> 0x20);
  fVar54 = (float)((ulong)uVar58 >> 0x20);
  fVar37 = (float)((uint7)uStack_167 >> 0x18);
  auVar62._0_4_ = fVar42 * auVar30._0_4_ - fVar55 * auVar50._0_4_;
  auVar62._4_4_ = fVar49 * auVar30._4_4_ - fVar45 * auVar50._4_4_;
  auVar62._8_4_ = fVar52 * (float)uVar59 - fVar46 * (float)uVar58;
  auVar62._12_4_ = fVar53 * fVar41 - fVar47 * fVar54;
  auVar61 = NEON_ext(auVar62,auVar62,4,1);
  auVar68[9] = (char)uStack_167;
  auVar68[10] = uVar16;
  auVar68[0xb] = uVar17;
  auVar68[0xc] = uVar18;
  auVar68[0xd] = uVar19;
  auVar68[0xe] = uVar20;
  auVar68[0xf] = uVar21;
  auVar1[9] = (char)uStack_167;
  auVar1[10] = uVar16;
  auVar1[0xb] = uVar17;
  auVar1[0xc] = uVar18;
  auVar1[0xd] = uVar19;
  auVar1[0xe] = uVar20;
  auVar1[0xf] = uVar21;
  auVar60 = NEON_ext(auVar68,auVar1,4,1);
  auVar68 = NEON_ext(auVar60,auVar60,8,1);
  uVar67 = NEON_rev64(auVar68._0_8_,4);
  fVar63 = fVar51 * auVar61._0_4_;
  fVar66 = fVar15 * auVar61._4_4_;
  fVar57 = (float)((ulong)uVar67 >> 0x20);
  fVar64 = fVar63 + fVar66 + fVar29 * auVar62._0_4_;
  fVar63 = fVar63 + fVar66 + fVar29 * auVar62._0_4_;
  uVar65 = CONCAT44(fVar63,fVar64);
  auVar32._0_4_ = fVar51 * auVar50._0_4_ - fVar42 * auVar60._0_4_;
  auVar32._4_4_ = fVar15 * auVar50._4_4_ - fVar49 * auVar60._4_4_;
  auVar32._8_4_ = fVar29 * (float)uVar58 - fVar52 * (float)uVar67;
  auVar32._12_4_ = fVar37 * fVar54 - fVar53 * fVar57;
  uVar56 = NEON_frecpe(uVar65,4);
  auVar10._0_4_ = fVar55 * auVar60._0_4_ - fVar51 * auVar30._0_4_;
  auVar10._4_4_ = fVar45 * auVar60._4_4_ - fVar15 * auVar30._4_4_;
  auVar10._8_4_ = fVar46 * (float)uVar67 - fVar29 * (float)uVar59;
  auVar10._12_4_ = fVar47 * fVar57 - fVar37 * fVar41;
  auVar50 = NEON_ext(auVar10,auVar10,4,1);
  uVar58 = NEON_frecps(uVar65,uVar56,4);
  auVar30 = NEON_ext(auVar32,auVar32,4,1);
  iVar5 = -(uint)(fVar48 * (ABS(fVar29) + ABS(fVar51) + ABS(fVar15)) *
                  (ABS(fVar52) + ABS(fVar42) + ABS(fVar49)) *
                  (ABS(fVar46) + ABS(fVar55) + ABS(fVar45)) < ABS(fVar64));
  iVar12 = -(uint)(fVar6 * (ABS(fVar29) + ABS(fVar51) + ABS(fVar15)) *
                   (ABS(fVar52) + ABS(fVar42) + ABS(fVar49)) *
                   (ABS(fVar46) + ABS(fVar55) + ABS(fVar45)) < ABS(fVar63));
  fVar48 = (float)uVar56 * (float)uVar58;
  fVar51 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar58 >> 0x20);
  uVar58 = NEON_frecps(uVar65,CONCAT44(fVar51,fVar48),4);
  fVar48 = fVar48 * (float)uVar58;
  fVar51 = fVar51 * (float)((ulong)uVar58 >> 0x20);
  uVar16 = (undefined1)((uint)fVar51 >> 0x10);
  uVar17 = (undefined1)((uint)fVar51 >> 0x18);
  fVar49 = auVar61._0_4_ * fVar48;
  fVar52 = auVar61._4_4_ * fVar51;
  fVar53 = auVar62._0_4_ * fVar48;
  uVar2 = (undefined2)(CONCAT15((char)((uint)fVar51 >> 8),CONCAT14(SUB41(fVar51,0),fVar48)) >> 0x20)
  ;
  fVar55 = auVar62._4_4_ * (float)CONCAT13(uVar17,CONCAT12(uVar16,uVar2));
  fVar29 = auVar50._0_4_ * fVar48;
  fVar37 = auVar50._4_4_ * fVar51;
  fVar41 = auVar10._0_4_ * fVar48;
  fVar42 = auVar10._4_4_ * (float)CONCAT13(uVar17,CONCAT12(uVar16,uVar2));
  fVar6 = auVar30._0_4_ * fVar48;
  fVar51 = auVar30._4_4_ * fVar51;
  fVar48 = auVar32._0_4_ * fVar48;
  fVar15 = auVar32._4_4_ * (float)CONCAT13(uVar17,CONCAT12(uVar16,uVar2));
  bVar28 = (byte)iVar5;
  bVar33 = (byte)((uint)iVar5 >> 8);
  bVar34 = (byte)((uint)iVar5 >> 0x10);
  bVar35 = (byte)((uint)iVar5 >> 0x18);
  bVar36 = (byte)iVar12;
  bVar38 = (byte)((uint)iVar12 >> 8);
  bVar39 = (byte)((uint)iVar12 >> 0x10);
  bVar40 = (byte)((uint)iVar12 >> 0x18);
  bStack_168 = bVar28 & SUB41(fVar53,0);
  uStack_167 = (undefined7)
               (CONCAT17(bVar40 & (byte)((uint)fVar55 >> 0x18),
                         CONCAT16(bVar39 & (byte)((uint)fVar55 >> 0x10),
                                  CONCAT15(bVar38 & (byte)((uint)fVar55 >> 8),
                                           CONCAT14(bVar36 & SUB41(fVar55,0),
                                                    CONCAT13(bVar35 & (byte)((uint)fVar53 >> 0x18),
                                                             CONCAT12(bVar34 & (byte)((uint)fVar53
                                                                                     >> 0x10),
                                                                      CONCAT11(bVar33 & (byte)((uint
                                                  )fVar53 >> 8),bStack_168))))))) >> 8);
  local_170 = CONCAT17(bVar40 & (byte)((uint)fVar52 >> 0x18),
                       CONCAT16(bVar39 & (byte)((uint)fVar52 >> 0x10),
                                CONCAT15(bVar38 & (byte)((uint)fVar52 >> 8),
                                         CONCAT14(bVar36 & SUB41(fVar52,0),
                                                  CONCAT13(bVar35 & (byte)((uint)fVar49 >> 0x18),
                                                           CONCAT12(bVar34 & (byte)((uint)fVar49 >>
                                                                                   0x10),
                                                                    CONCAT11(bVar33 & (byte)((uint)
                                                  fVar49 >> 8),bVar28 & SUB41(fVar49,0))))))));
  auVar11._0_8_ =
       CONCAT17(bVar40 & (byte)((uint)fVar51 >> 0x18),
                CONCAT16(bVar39 & (byte)((uint)fVar51 >> 0x10),
                         CONCAT15(bVar38 & (byte)((uint)fVar51 >> 8),
                                  CONCAT14(bVar36 & SUB41(fVar51,0),
                                           CONCAT13(bVar35 & (byte)((uint)fVar6 >> 0x18),
                                                    CONCAT12(bVar34 & (byte)((uint)fVar6 >> 0x10),
                                                             CONCAT11(bVar33 & (byte)((uint)fVar6 >>
                                                                                     8),
                                                                      bVar28 & SUB41(fVar6,0))))))))
  ;
  auVar11[8] = bVar28 & SUB41(fVar48,0);
  auVar11[9] = bVar33 & (byte)((uint)fVar48 >> 8);
  auVar11[10] = bVar34 & (byte)((uint)fVar48 >> 0x10);
  auVar11[0xb] = bVar35 & (byte)((uint)fVar48 >> 0x18);
  auVar11[0xc] = bVar36 & SUB41(fVar15,0);
  auVar11[0xd] = bVar38 & (byte)((uint)fVar15 >> 8);
  auVar11[0xe] = bVar39 & (byte)((uint)fVar15 >> 0x10);
  auVar11[0xf] = bVar40 & (byte)((uint)fVar15 >> 0x18);
  uStack_158 = CONCAT17(bVar40 & (byte)((uint)fVar42 >> 0x18),
                        CONCAT16(bVar39 & (byte)((uint)fVar42 >> 0x10),
                                 CONCAT15(bVar38 & (byte)((uint)fVar42 >> 8),
                                          CONCAT14(bVar36 & SUB41(fVar42,0),
                                                   CONCAT13(bVar35 & (byte)((uint)fVar41 >> 0x18),
                                                            CONCAT12(bVar34 & (byte)((uint)fVar41 >>
                                                                                    0x10),
                                                                     CONCAT11(bVar33 & (byte)((uint)
                                                  fVar41 >> 8),bVar28 & SUB41(fVar41,0))))))));
  local_160 = CONCAT17(bVar40 & (byte)((uint)fVar37 >> 0x18),
                       CONCAT16(bVar39 & (byte)((uint)fVar37 >> 0x10),
                                CONCAT15(bVar38 & (byte)((uint)fVar37 >> 8),
                                         CONCAT14(bVar36 & SUB41(fVar37,0),
                                                  CONCAT13(bVar35 & (byte)((uint)fVar29 >> 0x18),
                                                           CONCAT12(bVar34 & (byte)((uint)fVar29 >>
                                                                                   0x10),
                                                                    CONCAT11(bVar33 & (byte)((uint)
                                                  fVar29 >> 8),bVar28 & SUB41(fVar29,0))))))));
  uStack_148 = auVar11._8_8_;
  uStack_150 = auVar11._0_8_;
  FUN_0047f770(auStack_70,param_3,&local_170);
  FUN_00438670(param_2,auStack_70);
  FUN_004385e0(auStack_70);
  if (lVar4 != 0) {
    FUN_00443a70(lVar4,&DAT_04085310);
  }
  return;
}

