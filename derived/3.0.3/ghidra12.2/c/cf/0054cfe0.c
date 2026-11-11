
void FUN_0054cfe0(long param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 (*pauVar1) [12];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined1 auVar10 [12];
  float fVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar14 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar32;
  float fVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar58;
  float fVar59;
  float fVar60;
  uint uVar61;
  float fVar62;
  float fVar63;
  uint uVar64;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar65;
  uint uVar66;
  float fVar67;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  float fVar79;
  float fVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uVar75;
  undefined1 auVar78 [16];
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  undefined8 uVar86;
  float fVar87;
  undefined8 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 uVar91;
  undefined1 auVar92 [16];
  
  fVar85 = *(float *)(param_1 + 0x40);
  fVar54 = *(float *)(param_1 + 0x44);
  fVar52 = *(float *)(param_1 + 0x48);
  fVar59 = *(float *)(param_1 + 0x4c);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x50);
  fVar87 = (float)*(undefined8 *)(param_1 + 0x58);
  fVar50 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  auVar55._0_4_ = param_2[4] - fVar85;
  auVar55._4_4_ = param_2[5] - fVar54;
  auVar55._8_4_ = param_2[6] - fVar52;
  auVar55._12_4_ = param_2[7] - fVar59;
  fVar20 = (float)*(undefined8 *)param_2;
  auVar28._0_4_ = fVar20 - fVar85;
  fVar73 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  auVar28._4_4_ = fVar73 - fVar54;
  fVar80 = (float)*(undefined8 *)(param_2 + 2);
  auVar28._8_4_ = fVar80 - fVar52;
  fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  auVar28._12_4_ = fVar21 - fVar59;
  auVar11._0_4_ = param_2[8] - fVar85;
  auVar11._4_4_ = param_2[9] - fVar54;
  auVar11._8_4_ = param_2[10] - fVar52;
  auVar11._12_4_ = param_2[0xb] - fVar59;
  auVar78._0_4_ = param_2[0xc] - fVar85;
  auVar78._4_4_ = param_2[0xd] - fVar54;
  auVar78._8_4_ = param_2[0xe] - fVar52;
  auVar78._12_4_ = param_2[0xf] - fVar59;
  auVar90 = NEON_ext(auVar78,auVar78,4,1);
  fVar85 = (float)*(undefined8 *)*pauVar1;
  auVar70._0_4_ = auVar28._0_4_ * fVar85;
  fVar54 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar70._4_4_ = auVar28._4_4_ * fVar54;
  auVar70._8_4_ = auVar28._8_4_ * fVar87;
  auVar70._12_4_ = auVar28._12_4_ * fVar50;
  auVar92 = NEON_ext(auVar90,auVar90,8,1);
  auVar23._0_4_ = auVar55._0_4_ * fVar85;
  auVar23._4_4_ = auVar55._4_4_ * fVar54;
  auVar23._8_4_ = auVar55._8_4_ * fVar87;
  auVar23._12_4_ = auVar55._12_4_ * fVar50;
  auVar68._0_4_ = auVar11._0_4_ * fVar85;
  auVar68._4_4_ = auVar11._4_4_ * fVar54;
  auVar68._8_4_ = auVar11._8_4_ * fVar87;
  auVar68._12_4_ = auVar11._12_4_ * fVar50;
  auVar76._0_4_ = auVar78._0_4_ * fVar85;
  auVar76._4_4_ = auVar78._4_4_ * fVar54;
  auVar76._8_4_ = auVar78._8_4_ * fVar87;
  auVar76._12_4_ = auVar78._12_4_ * fVar50;
  auVar3 = NEON_ext(auVar70,auVar70,8,1);
  auVar24 = NEON_ext(auVar23,auVar23,8,1);
  auVar69 = NEON_ext(auVar68,auVar68,8,1);
  auVar77 = NEON_ext(auVar76,auVar76,8,1);
  uVar91 = NEON_rev64(auVar92._0_8_,4);
  auVar92 = NEON_ext(auVar11,auVar11,4,1);
  auVar89 = NEON_ext(auVar92,auVar92,8,1);
  fVar22 = auVar3._0_4_ + auVar70._0_4_ + auVar70._4_4_;
  fVar25 = auVar24._0_4_ + auVar23._0_4_ + auVar23._4_4_;
  fVar2 = auVar69._0_4_ + auVar68._0_4_ + auVar68._4_4_;
  fVar4 = auVar77._0_4_ + auVar76._0_4_ + auVar76._4_4_;
  auVar70 = NEON_ext(auVar28,auVar28,4,1);
  uVar88 = NEON_rev64(auVar89._0_8_,4);
  auVar3 = NEON_ext(auVar70,auVar70,8,1);
  uVar74 = NEON_rev64(auVar3._0_8_,4);
  auVar3._12_4_ = fVar50;
  auVar3._0_12_ = *pauVar1;
  auVar24._12_4_ = fVar50;
  auVar24._0_12_ = *pauVar1;
  auVar3 = NEON_ext(auVar3,auVar24,4,1);
  auVar24 = NEON_ext(auVar3,auVar3,8,1);
  uVar75 = NEON_rev64(auVar24._0_8_,4);
  auVar24 = NEON_ext(auVar55,auVar55,4,1);
  auVar69 = NEON_ext(auVar24,auVar24,8,1);
  uVar86 = NEON_rev64(auVar69._0_8_,4);
  fVar52 = auVar3._0_4_;
  fVar59 = auVar3._4_4_;
  fVar62 = (float)uVar75;
  fVar5 = (float)((ulong)uVar75 >> 0x20);
  fVar26 = auVar28._0_4_ * fVar52 - fVar85 * auVar70._0_4_;
  fVar32 = auVar28._4_4_ * fVar59 - fVar54 * auVar70._4_4_;
  auVar29._0_8_ = CONCAT44(fVar32,fVar26);
  auVar29._8_4_ = auVar28._8_4_ * fVar62 - fVar87 * (float)uVar74;
  auVar29._12_4_ = auVar28._12_4_ * fVar5 - fVar50 * (float)((ulong)uVar74 >> 0x20);
  auVar3 = NEON_ext(auVar29,auVar29,4,1);
  uVar74 = NEON_ext(auVar3._0_8_,auVar29._0_8_,4,1);
  fVar51 = auVar55._0_4_ * fVar52 - fVar85 * auVar24._0_4_;
  fVar58 = auVar55._4_4_ * fVar59 - fVar54 * auVar24._4_4_;
  auVar56._0_8_ = CONCAT44(fVar58,fVar51);
  auVar56._8_4_ = auVar55._8_4_ * fVar62 - fVar87 * (float)uVar86;
  auVar56._12_4_ = auVar55._12_4_ * fVar5 - fVar50 * (float)((ulong)uVar86 >> 0x20);
  auVar24 = NEON_ext(auVar56,auVar56,4,1);
  uVar75 = NEON_ext(auVar24._0_8_,auVar56._0_8_,4,1);
  fVar8 = auVar11._0_4_ * fVar52 - fVar85 * auVar92._0_4_;
  fVar15 = auVar11._4_4_ * fVar59 - fVar54 * auVar92._4_4_;
  auVar12._0_8_ = CONCAT44(fVar15,fVar8);
  auVar12._8_4_ = auVar11._8_4_ * fVar62 - fVar87 * (float)uVar88;
  auVar12._12_4_ = auVar11._12_4_ * fVar5 - fVar50 * (float)((ulong)uVar88 >> 0x20);
  auVar77 = NEON_ext(auVar12,auVar12,4,1);
  fVar6 = auVar78._0_4_ * fVar52 - fVar85 * auVar90._0_4_;
  fVar7 = auVar78._4_4_ * fVar59 - fVar54 * auVar90._4_4_;
  auVar69._0_8_ = CONCAT44(fVar7,fVar6);
  auVar69._8_4_ = auVar78._8_4_ * fVar62 - fVar87 * (float)uVar91;
  auVar69._12_4_ = auVar78._12_4_ * fVar5 - fVar50 * (float)((ulong)uVar91 >> 0x20);
  auVar92 = NEON_ext(auVar69,auVar69,4,1);
  auVar30._0_4_ = fVar85 * (float)uVar74 - fVar52 * auVar3._0_4_;
  auVar30._4_4_ = fVar54 * (float)((ulong)uVar74 >> 0x20) - fVar59 * auVar3._4_4_;
  auVar30._8_4_ = fVar87 * fVar32 - fVar62 * fVar26;
  auVar30._12_4_ = fVar50 * fVar32 - fVar5 * fVar32;
  auVar78 = NEON_ext(auVar30,auVar30,4,1);
  uVar86 = NEON_ext(auVar77._0_8_,auVar12._0_8_,4,1);
  auVar31._0_4_ = fVar85 * (float)uVar75 - fVar52 * auVar24._0_4_;
  auVar31._4_4_ = fVar54 * (float)((ulong)uVar75 >> 0x20) - fVar59 * auVar24._4_4_;
  auVar31._8_4_ = fVar87 * fVar58 - fVar62 * fVar51;
  auVar31._12_4_ = fVar50 * fVar58 - fVar5 * fVar58;
  uVar74 = NEON_ext(auVar92._0_8_,auVar69._0_8_,4,1);
  auVar70 = NEON_ext(auVar31,auVar31,4,1);
  auVar90._0_4_ = fVar85 * (float)uVar86 - fVar52 * auVar77._0_4_;
  auVar90._4_4_ = fVar54 * (float)((ulong)uVar86 >> 0x20) - fVar59 * auVar77._4_4_;
  auVar90._8_4_ = fVar87 * fVar15 - fVar62 * fVar8;
  auVar90._12_4_ = fVar50 * fVar15 - fVar5 * fVar15;
  auVar24 = NEON_ext(auVar90,auVar90,4,1);
  auVar77._0_4_ = fVar85 * (float)uVar74 - fVar52 * auVar92._0_4_;
  auVar77._4_4_ = fVar54 * (float)((ulong)uVar74 >> 0x20) - fVar59 * auVar92._4_4_;
  auVar77._8_4_ = fVar87 * fVar7 - fVar62 * fVar6;
  auVar77._12_4_ = fVar50 * fVar7 - fVar5 * fVar7;
  auVar3 = NEON_ext(auVar77,auVar77,4,1);
  fVar67 = auVar70._0_4_;
  auVar13._0_4_ = fVar67 * fVar67;
  fVar71 = auVar70._4_4_;
  auVar13._4_4_ = fVar71 * fVar71;
  auVar13._8_4_ = auVar31._0_4_ * auVar31._0_4_;
  auVar13._12_4_ = auVar31._4_4_ * auVar31._4_4_;
  fVar72 = auVar78._0_4_;
  auVar92._0_4_ = fVar72 * fVar72;
  fVar79 = auVar78._4_4_;
  auVar92._4_4_ = fVar79 * fVar79;
  auVar92._8_4_ = auVar30._0_4_ * auVar30._0_4_;
  auVar92._12_4_ = auVar30._4_4_ * auVar30._4_4_;
  fVar27 = auVar24._0_4_;
  auVar57._0_4_ = fVar27 * fVar27;
  fVar33 = auVar24._4_4_;
  auVar57._4_4_ = fVar33 * fVar33;
  auVar57._8_4_ = auVar90._0_4_ * auVar90._0_4_;
  auVar57._12_4_ = auVar90._4_4_ * auVar90._4_4_;
  fVar5 = auVar3._0_4_;
  auVar82._0_4_ = fVar5 * fVar5;
  fVar7 = auVar3._4_4_;
  auVar82._4_4_ = fVar7 * fVar7;
  auVar82._8_4_ = auVar77._0_4_ * auVar77._0_4_;
  auVar82._12_4_ = auVar77._4_4_ * auVar77._4_4_;
  auVar3 = NEON_ext(auVar92,auVar92,8,1);
  auVar24 = NEON_ext(auVar13,auVar13,8,1);
  auVar70 = NEON_ext(auVar57,auVar57,8,1);
  auVar78 = NEON_ext(auVar82,auVar82,8,1);
  auVar89._0_4_ = *(float *)PTR_DAT_04bdc020 + auVar3._0_4_ + auVar92._0_4_ + auVar92._4_4_;
  auVar89._4_4_ = *(float *)(PTR_DAT_04bdc020 + 4) + auVar24._0_4_ + auVar13._0_4_ + auVar13._4_4_;
  auVar89._8_4_ = *(float *)(PTR_DAT_04bdc020 + 8) + auVar70._0_4_ + auVar57._0_4_ + auVar57._4_4_;
  auVar89._12_4_ =
       *(float *)(PTR_DAT_04bdc020 + 0xc) + auVar78._0_4_ + auVar82._0_4_ + auVar82._4_4_;
  auVar3 = NEON_frsqrte(auVar89,4);
  iVar9 = -(uint)(auVar89._0_4_ <= 0.0);
  iVar16 = -(uint)(auVar89._4_4_ <= 0.0);
  iVar17 = -(uint)(auVar89._8_4_ <= 0.0);
  iVar18 = -(uint)(auVar89._12_4_ <= 0.0);
  fVar52 = auVar3._0_4_;
  auVar83._0_4_ = fVar52 * fVar52;
  fVar59 = auVar3._4_4_;
  auVar83._4_4_ = fVar59 * fVar59;
  fVar62 = auVar3._8_4_;
  auVar83._8_4_ = fVar62 * fVar62;
  fVar6 = auVar3._12_4_;
  auVar83._12_4_ = fVar6 * fVar6;
  auVar3 = NEON_frsqrts(auVar89,auVar83,4);
  fVar52 = fVar52 * auVar3._0_4_;
  fVar59 = fVar59 * auVar3._4_4_;
  fVar62 = fVar62 * auVar3._8_4_;
  fVar6 = fVar6 * auVar3._12_4_;
  auVar84._0_4_ = fVar52 * fVar52;
  auVar84._4_4_ = fVar59 * fVar59;
  auVar84._8_4_ = fVar62 * fVar62;
  auVar84._12_4_ = fVar6 * fVar6;
  auVar3 = NEON_frsqrts(auVar89,auVar84,4);
  fVar52 = auVar3._0_4_ * fVar52;
  fVar59 = auVar3._4_4_ * fVar59;
  fVar62 = auVar3._8_4_ * fVar62;
  fVar6 = auVar3._12_4_ * fVar6;
  fVar32 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                           CONCAT12((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                    CONCAT11((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                             SUB41(fVar52,0) & ~(byte)iVar9)));
  auVar10._0_8_ =
       CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                CONCAT16((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                         CONCAT15((byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                  CONCAT14(SUB41(fVar59,0) & ~(byte)iVar16,fVar32))));
  auVar10[8] = SUB41(fVar62,0) & ~(byte)iVar17;
  auVar10[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar17 >> 8);
  auVar10[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10);
  auVar10[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18);
  auVar14[0xc] = SUB41(fVar6,0) & ~(byte)iVar18;
  auVar14._0_12_ = auVar10;
  auVar14[0xd] = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar18 >> 8);
  auVar14[0xe] = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
  auVar14[0xf] = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
  fVar51 = (float)((ulong)auVar10._0_8_ >> 0x20);
  fVar58 = auVar10._8_4_;
  fVar19 = auVar14._12_4_;
  fVar53 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x80) * auVar89._0_4_ * fVar32;
  fVar60 = *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x84) * auVar89._4_4_ * fVar51;
  fVar63 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x88) * auVar89._8_4_ * fVar58;
  fVar65 = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x8c) * auVar89._12_4_ * fVar19;
  fVar52 = *(float *)(param_1 + 100);
  fVar59 = *(float *)(param_1 + 0x68);
  fVar62 = *(float *)(param_1 + 0x6c);
  fVar6 = *(float *)(param_1 + 0xa8);
  uVar61 = -(uint)(fVar25 < fVar60);
  uVar64 = -(uint)(fVar2 < fVar63);
  uVar66 = -(uint)(fVar4 < fVar65);
  fVar81 = *(float *)(param_1 + 0xa0);
  fVar8 = (auVar89._0_4_ * fVar32 - fVar22 * fVar6) * fVar81;
  fVar15 = (auVar89._4_4_ * fVar51 - fVar25 * fVar6) * fVar81;
  fVar26 = (auVar89._8_4_ * fVar58 - fVar2 * fVar6) * fVar81;
  fVar6 = (auVar89._12_4_ * fVar19 - fVar4 * fVar6) * fVar81;
  if (fVar22 < fVar53) {
    fVar85 = (float)*(undefined8 *)(param_1 + 0x28);
    fVar54 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
    uVar74 = *(undefined8 *)(param_1 + 0x20);
    uVar35 = (undefined1)uVar74;
    uVar37 = (undefined1)((ulong)uVar74 >> 8);
    uVar39 = (undefined1)((ulong)uVar74 >> 0x10);
    uVar41 = (undefined1)((ulong)uVar74 >> 0x18);
    uVar43 = (undefined1)((ulong)uVar74 >> 0x20);
    uVar45 = (undefined1)((ulong)uVar74 >> 0x28);
    uVar47 = (undefined1)((ulong)uVar74 >> 0x30);
    uVar49 = (undefined1)((ulong)uVar74 >> 0x38);
    fVar20 = fVar20 - (float)uVar74;
    fVar73 = fVar73 - (float)((ulong)uVar74 >> 0x20);
    fVar80 = fVar80 - fVar85;
    fVar8 = fVar20 * fVar20 + fVar73 * fVar73 + fVar80 * fVar80;
    fVar32 = fVar20 * fVar20 + fVar73 * fVar73 + fVar80 * fVar80;
    uVar86 = CONCAT44(fVar32,fVar8);
    uVar74 = NEON_frsqrte(uVar86,4);
    fVar22 = (float)uVar74;
    fVar87 = (float)((ulong)uVar74 >> 0x20);
    uVar74 = NEON_frsqrts(uVar86,CONCAT44(fVar87 * fVar87,fVar22 * fVar22),4);
    fVar22 = fVar22 * (float)uVar74;
    fVar87 = fVar87 * (float)((ulong)uVar74 >> 0x20);
    uVar74 = NEON_frsqrts(uVar86,CONCAT44(fVar87 * fVar87,fVar22 * fVar22),4);
    iVar9 = -(uint)(fVar8 <= 0.0);
    iVar16 = -(uint)(fVar32 <= 0.0);
    fVar22 = (float)uVar74 * fVar22;
    fVar87 = (float)((ulong)uVar74 >> 0x20) * fVar87;
    fVar8 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                            CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                     CONCAT11((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                              SUB41(fVar22,0) & ~(byte)iVar9)));
    uVar88 = CONCAT17((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                      CONCAT16((byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                               CONCAT15((byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                        CONCAT14(SUB41(fVar87,0) & ~(byte)iVar16,fVar8))));
    fVar32 = (float)((ulong)uVar88 >> 0x20);
    uVar74 = CONCAT44(fVar73 * fVar32,fVar20 * fVar8);
    uVar75 = CONCAT44((fVar21 - fVar54) * fVar32,fVar80 * fVar8);
    fVar8 = *(float *)(param_1 + 0x90);
LAB_0054d398:
    fVar32 = (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar45,uVar43))) +
             (float)((ulong)uVar74 >> 0x20) * fVar8;
    param_5[1] = CONCAT44(fVar54 + (float)((ulong)uVar75 >> 0x20) * fVar8,
                          fVar85 + (float)uVar75 * fVar8);
    *param_5 = CONCAT17((char)((uint)fVar32 >> 0x18),
                        CONCAT16((char)((uint)fVar32 >> 0x10),
                                 CONCAT15((char)((uint)fVar32 >> 8),
                                          CONCAT14(SUB41(fVar32,0),
                                                   (float)CONCAT13(uVar41,CONCAT12(uVar39,CONCAT11(
                                                  uVar37,uVar35))) + (float)uVar74 * fVar8))));
    param_6[1] = uVar75;
    *param_6 = uVar74;
    fVar8 = (float)uVar86 * (float)uVar88 - fVar8;
    if ((uVar61 >> 1 & 1) != 0) goto LAB_0054d2a8;
LAB_0054d3bc:
    if ((-(uint)(fVar52 + fVar60 < fVar25) >> 1 & 1) != 0) {
      fVar52 = *(float *)(param_1 + 0x30);
      fVar15 = *(float *)(param_1 + 0x34);
      fVar32 = *(float *)(param_1 + 0x38);
      fVar51 = *(float *)(param_1 + 0x3c);
      fVar85 = (float)*(undefined8 *)(param_2 + 4) - fVar52;
      fVar54 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) - fVar15;
      fVar20 = (float)*(undefined8 *)(param_2 + 6) - fVar32;
      fVar73 = fVar85 * fVar85 + fVar54 * fVar54 + fVar20 * fVar20;
      fVar80 = fVar85 * fVar85 + fVar54 * fVar54 + fVar20 * fVar20;
      uVar74 = CONCAT44(fVar80,fVar73);
      uVar75 = NEON_frsqrte(uVar74,4);
      fVar21 = (float)uVar75;
      fVar22 = (float)((ulong)uVar75 >> 0x20);
      uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar22 * fVar22,fVar21 * fVar21),4);
      fVar21 = fVar21 * (float)uVar75;
      fVar22 = fVar22 * (float)((ulong)uVar75 >> 0x20);
      uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar22 * fVar22,fVar21 * fVar21),4);
      iVar9 = -(uint)(fVar73 <= 0.0);
      iVar16 = -(uint)(fVar80 <= 0.0);
      fVar21 = (float)uVar75 * fVar21;
      fVar22 = (float)((ulong)uVar75 >> 0x20) * fVar22;
      fVar80 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                               CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                        CONCAT11((byte)((uint)fVar21 >> 8) &
                                                 ~(byte)((uint)iVar9 >> 8),
                                                 SUB41(fVar21,0) & ~(byte)iVar9)));
      uVar75 = CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                        CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                 CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                          CONCAT14(SUB41(fVar22,0) & ~(byte)iVar16,fVar80))));
      fVar85 = fVar85 * fVar80;
      uVar35 = SUB41(fVar85,0);
      uVar37 = (undefined1)((uint)fVar85 >> 8);
      uVar39 = (undefined1)((uint)fVar85 >> 0x10);
      uVar41 = (undefined1)((uint)fVar85 >> 0x18);
      fVar73 = (float)((ulong)uVar75 >> 0x20);
      fVar54 = fVar54 * fVar73;
      uVar43 = SUB41(fVar54,0);
      uVar45 = (undefined1)((uint)fVar54 >> 8);
      uVar47 = (undefined1)((uint)fVar54 >> 0x10);
      uVar49 = (undefined1)((uint)fVar54 >> 0x18);
      fVar20 = fVar20 * fVar80;
      fVar73 = ((float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) - fVar51) * fVar73;
      fVar85 = *(float *)(param_1 + 0x94);
      goto LAB_0054d4d0;
    }
    fVar52 = *(float *)(param_1 + 0xa0);
    fVar22 = *(float *)(param_1 + 0xa4);
    fVar85 = fVar67 * fVar51 * fVar52 - *(float *)(param_1 + 0x50) * fVar22;
    fVar54 = fVar71 * fVar51 * fVar52 - *(float *)(param_1 + 0x54) * fVar22;
    fVar20 = auVar31._0_4_ * fVar51 * fVar52 - *(float *)(param_1 + 0x58) * fVar22;
    fVar32 = fVar85 * fVar85 + fVar54 * fVar54 + fVar20 * fVar20;
    fVar80 = fVar85 * fVar85 + fVar54 * fVar54 + fVar20 * fVar20;
    uVar74 = CONCAT44(fVar80,fVar32);
    uVar75 = NEON_frsqrte(uVar74,4);
    fVar73 = (float)uVar75;
    fVar21 = (float)((ulong)uVar75 >> 0x20);
    iVar9 = -(uint)(fVar32 <= 0.0);
    iVar16 = -(uint)(fVar80 <= 0.0);
    uVar74 = NEON_frsqrts(uVar74,CONCAT44(fVar21 * fVar21,fVar73 * fVar73),4);
    fVar73 = fVar73 * (float)uVar74;
    fVar21 = fVar21 * (float)((ulong)uVar74 >> 0x20);
    fVar73 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                             CONCAT12((byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                      CONCAT11((byte)((uint)fVar73 >> 8) & ~(byte)((uint)iVar9 >> 8)
                                               ,SUB41(fVar73,0) & ~(byte)iVar9)));
    fVar80 = (float)(CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                              CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                       CONCAT15((byte)((uint)fVar21 >> 8) &
                                                ~(byte)((uint)iVar16 >> 8),
                                                CONCAT14(SUB41(fVar21,0) & ~(byte)iVar16,fVar73))))
                    >> 0x20);
    fVar54 = fVar54 * fVar80;
    fVar80 = (auVar31._4_4_ * fVar51 * fVar52 - *(float *)(param_1 + 0x5c) * fVar22) * fVar80;
    uVar35 = SUB41(fVar15,0);
    uVar37 = (undefined1)((uint)fVar15 >> 8);
    uVar39 = (undefined1)((uint)fVar15 >> 0x10);
    uVar41 = (undefined1)((uint)fVar15 >> 0x18);
    *(float *)(param_6 + 3) = fVar20 * fVar73;
    *(float *)((long)param_6 + 0x1c) = fVar80;
    *(float *)(param_6 + 2) = fVar85 * fVar73;
    *(float *)((long)param_6 + 0x14) = fVar54;
    fVar52 = param_2[4];
    fVar32 = param_2[5];
    fVar51 = param_2[7];
    *(float *)(param_5 + 3) = param_2[6] - fVar20 * fVar73 * fVar15;
    *(float *)((long)param_5 + 0x1c) = fVar51 - fVar80 * fVar15;
    *(float *)(param_5 + 2) = fVar52 - fVar85 * fVar73 * fVar15;
    *(float *)((long)param_5 + 0x14) = fVar32 - fVar54 * fVar15;
    if ((uVar64 >> 2 & 1) != 0) goto LAB_0054d42c;
LAB_0054d4f4:
    if ((-(uint)(fVar59 + fVar63 < fVar2) >> 2 & 1) != 0) {
      fVar85 = *(float *)(param_1 + 0x30);
      fVar54 = *(float *)(param_1 + 0x34);
      fVar52 = *(float *)(param_1 + 0x38);
      fVar59 = *(float *)(param_1 + 0x3c);
      fVar2 = param_2[8] - fVar85;
      fVar15 = param_2[9] - fVar54;
      fVar32 = param_2[10] - fVar52;
      fVar26 = fVar2 * fVar2 + fVar15 * fVar15 + fVar32 * fVar32;
      fVar51 = fVar2 * fVar2 + fVar15 * fVar15 + fVar32 * fVar32;
      uVar74 = CONCAT44(fVar51,fVar26);
      uVar75 = NEON_frsqrte(uVar74,4);
      fVar58 = (float)uVar75;
      fVar20 = (float)((ulong)uVar75 >> 0x20);
      uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar20 * fVar20,fVar58 * fVar58),4);
      fVar58 = fVar58 * (float)uVar75;
      fVar20 = fVar20 * (float)((ulong)uVar75 >> 0x20);
      uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar20 * fVar20,fVar58 * fVar58),4);
      iVar9 = -(uint)(fVar26 <= 0.0);
      iVar16 = -(uint)(fVar51 <= 0.0);
      fVar58 = (float)uVar75 * fVar58;
      fVar20 = (float)((ulong)uVar75 >> 0x20) * fVar20;
      fVar26 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                               CONCAT12((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                        CONCAT11((byte)((uint)fVar58 >> 8) &
                                                 ~(byte)((uint)iVar9 >> 8),
                                                 SUB41(fVar58,0) & ~(byte)iVar9)));
      uVar75 = CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                        CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                 CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                          CONCAT14(SUB41(fVar20,0) & ~(byte)iVar16,fVar26))));
      fVar2 = fVar2 * fVar26;
      fVar51 = (float)((ulong)uVar75 >> 0x20);
      fVar15 = fVar15 * fVar51;
      fVar32 = fVar32 * fVar26;
      fVar51 = (param_2[0xb] - fVar59) * fVar51;
      fVar26 = *(float *)(param_1 + 0x94);
      goto LAB_0054d604;
    }
    fVar85 = *(float *)(param_1 + 0xa0);
    fVar20 = *(float *)(param_1 + 0xa4);
    fVar59 = fVar27 * fVar58 * fVar85 - *(float *)(param_1 + 0x50) * fVar20;
    fVar2 = fVar33 * fVar58 * fVar85 - *(float *)(param_1 + 0x54) * fVar20;
    fVar15 = auVar90._0_4_ * fVar58 * fVar85 - *(float *)(param_1 + 0x58) * fVar20;
    fVar54 = fVar59 * fVar59 + fVar2 * fVar2 + fVar15 * fVar15;
    fVar32 = fVar59 * fVar59 + fVar2 * fVar2 + fVar15 * fVar15;
    uVar74 = CONCAT44(fVar32,fVar54);
    uVar75 = NEON_frsqrte(uVar74,4);
    fVar52 = (float)uVar75;
    fVar51 = (float)((ulong)uVar75 >> 0x20);
    iVar9 = -(uint)(fVar54 <= 0.0);
    iVar16 = -(uint)(fVar32 <= 0.0);
    uVar74 = NEON_frsqrts(uVar74,CONCAT44(fVar51 * fVar51,fVar52 * fVar52),4);
    fVar52 = fVar52 * (float)uVar74;
    fVar51 = fVar51 * (float)((ulong)uVar74 >> 0x20);
    fVar32 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                             CONCAT12((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                      CONCAT11((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar9 >> 8)
                                               ,SUB41(fVar52,0) & ~(byte)iVar9)));
    fVar51 = (float)(CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                              CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                       CONCAT15((byte)((uint)fVar51 >> 8) &
                                                ~(byte)((uint)iVar16 >> 8),
                                                CONCAT14(SUB41(fVar51,0) & ~(byte)iVar16,fVar32))))
                    >> 0x20);
    fVar2 = fVar2 * fVar51;
    fVar51 = (auVar90._4_4_ * fVar58 * fVar85 - *(float *)(param_1 + 0x5c) * fVar20) * fVar51;
    *(float *)(param_6 + 5) = fVar15 * fVar32;
    *(float *)((long)param_6 + 0x2c) = fVar51;
    *(float *)(param_6 + 4) = fVar59 * fVar32;
    *(float *)((long)param_6 + 0x24) = fVar2;
    fVar85 = param_2[8];
    fVar54 = param_2[9];
    fVar52 = param_2[0xb];
    *(float *)(param_5 + 5) = param_2[10] - fVar15 * fVar32 * fVar26;
    *(float *)((long)param_5 + 0x2c) = fVar52 - fVar51 * fVar26;
    *(float *)(param_5 + 4) = fVar85 - fVar59 * fVar32 * fVar26;
    *(float *)((long)param_5 + 0x24) = fVar54 - fVar2 * fVar26;
    if ((uVar66 >> 3 & 1) == 0) goto LAB_0054d624;
LAB_0054d560:
    fVar85 = *(float *)(param_1 + 0x20);
    fVar54 = *(float *)(param_1 + 0x24);
    fVar52 = *(float *)(param_1 + 0x28);
    fVar59 = *(float *)(param_1 + 0x2c);
    fVar62 = param_2[0xc] - fVar85;
    fVar2 = param_2[0xd] - fVar54;
    fVar5 = param_2[0xe] - fVar52;
    fVar6 = fVar62 * fVar62 + fVar2 * fVar2 + fVar5 * fVar5;
    fVar4 = fVar62 * fVar62 + fVar2 * fVar2 + fVar5 * fVar5;
    uVar74 = CONCAT44(fVar4,fVar6);
    uVar75 = NEON_frsqrte(uVar74,4);
    fVar7 = (float)uVar75;
    fVar15 = (float)((ulong)uVar75 >> 0x20);
    uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar15 * fVar15,fVar7 * fVar7),4);
    fVar7 = fVar7 * (float)uVar75;
    fVar15 = fVar15 * (float)((ulong)uVar75 >> 0x20);
    uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar15 * fVar15,fVar7 * fVar7),4);
    iVar9 = -(uint)(fVar6 <= 0.0);
    iVar16 = -(uint)(fVar4 <= 0.0);
    fVar7 = (float)uVar75 * fVar7;
    fVar15 = (float)((ulong)uVar75 >> 0x20) * fVar15;
    fVar6 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                            CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                     CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                              SUB41(fVar7,0) & ~(byte)iVar9)));
    uVar75 = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                      CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                               CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                        CONCAT14(SUB41(fVar15,0) & ~(byte)iVar16,fVar6))));
    fVar62 = fVar62 * fVar6;
    fVar4 = (float)((ulong)uVar75 >> 0x20);
    fVar2 = fVar2 * fVar4;
    fVar5 = fVar5 * fVar6;
    fVar4 = (param_2[0xf] - fVar59) * fVar4;
    fVar6 = *(float *)(param_1 + 0x90);
  }
  else {
    if (*(float *)(param_1 + 0x60) + fVar53 < fVar22) {
      fVar85 = (float)*(undefined8 *)(param_1 + 0x38);
      fVar54 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      uVar74 = *(undefined8 *)(param_1 + 0x30);
      uVar35 = (undefined1)uVar74;
      uVar37 = (undefined1)((ulong)uVar74 >> 8);
      uVar39 = (undefined1)((ulong)uVar74 >> 0x10);
      uVar41 = (undefined1)((ulong)uVar74 >> 0x18);
      uVar43 = (undefined1)((ulong)uVar74 >> 0x20);
      uVar45 = (undefined1)((ulong)uVar74 >> 0x28);
      uVar47 = (undefined1)((ulong)uVar74 >> 0x30);
      uVar49 = (undefined1)((ulong)uVar74 >> 0x38);
      fVar20 = fVar20 - (float)uVar74;
      fVar73 = fVar73 - (float)((ulong)uVar74 >> 0x20);
      fVar80 = fVar80 - fVar85;
      fVar8 = fVar20 * fVar20 + fVar73 * fVar73 + fVar80 * fVar80;
      fVar32 = fVar20 * fVar20 + fVar73 * fVar73 + fVar80 * fVar80;
      uVar86 = CONCAT44(fVar32,fVar8);
      uVar74 = NEON_frsqrte(uVar86,4);
      fVar22 = (float)uVar74;
      fVar87 = (float)((ulong)uVar74 >> 0x20);
      uVar74 = NEON_frsqrts(uVar86,CONCAT44(fVar87 * fVar87,fVar22 * fVar22),4);
      fVar22 = fVar22 * (float)uVar74;
      fVar87 = fVar87 * (float)((ulong)uVar74 >> 0x20);
      uVar74 = NEON_frsqrts(uVar86,CONCAT44(fVar87 * fVar87,fVar22 * fVar22),4);
      iVar9 = -(uint)(fVar8 <= 0.0);
      iVar16 = -(uint)(fVar32 <= 0.0);
      fVar22 = (float)uVar74 * fVar22;
      fVar87 = (float)((ulong)uVar74 >> 0x20) * fVar87;
      fVar8 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                              CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                       CONCAT11((byte)((uint)fVar22 >> 8) &
                                                ~(byte)((uint)iVar9 >> 8),
                                                SUB41(fVar22,0) & ~(byte)iVar9)));
      uVar88 = CONCAT17((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                        CONCAT16((byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                 CONCAT15((byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                          CONCAT14(SUB41(fVar87,0) & ~(byte)iVar16,fVar8))));
      fVar32 = (float)((ulong)uVar88 >> 0x20);
      uVar74 = CONCAT44(fVar73 * fVar32,fVar20 * fVar8);
      uVar75 = CONCAT44((fVar21 - fVar54) * fVar32,fVar80 * fVar8);
      fVar8 = *(float *)(param_1 + 0x94);
      goto LAB_0054d398;
    }
    fVar53 = *(float *)(param_1 + 0xa4);
    fVar20 = fVar81 * fVar72 * fVar32 - fVar85 * fVar53;
    fVar21 = fVar81 * fVar79 * fVar32 - fVar54 * fVar53;
    fVar22 = fVar81 * auVar30._0_4_ * fVar32 - fVar87 * fVar53;
    fVar85 = fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22;
    fVar73 = fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22;
    uVar35 = (undefined1)((uint)fVar73 >> 8);
    uVar37 = (undefined1)((uint)fVar73 >> 0x10);
    uVar39 = (undefined1)((uint)fVar73 >> 0x18);
    uVar74 = NEON_frsqrte(CONCAT17(uVar39,CONCAT16(uVar37,CONCAT15(uVar35,CONCAT14(SUB41(fVar73,0),
                                                                                   fVar85)))),4);
    fVar54 = (float)uVar74;
    fVar80 = (float)((ulong)uVar74 >> 0x20);
    iVar9 = -(uint)(fVar85 <= 0.0);
    iVar16 = -(uint)(fVar73 <= 0.0);
    uVar74 = NEON_frsqrts(CONCAT17(uVar39,CONCAT16(uVar37,CONCAT15(uVar35,CONCAT14(SUB41(fVar73,0),
                                                                                   fVar85)))),
                          CONCAT44(fVar80 * fVar80,fVar54 * fVar54),4);
    fVar54 = fVar54 * (float)uVar74;
    fVar80 = fVar80 * (float)((ulong)uVar74 >> 0x20);
    bVar34 = SUB41(fVar54,0) & ~(byte)iVar9;
    bVar36 = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar9 >> 8);
    bVar38 = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
    bVar40 = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
    bVar42 = SUB41(fVar80,0) & ~(byte)iVar16;
    bVar44 = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar16 >> 8);
    bVar46 = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10);
    bVar48 = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18);
    fVar85 = (float)CONCAT13(bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)));
    fVar20 = fVar20 * (float)CONCAT13(bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)));
    fVar21 = fVar21 * (float)CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar44,bVar42)));
    fVar22 = fVar22 * fVar85;
    fVar32 = (fVar81 * auVar30._4_4_ * fVar32 - fVar50 * fVar53) *
             (float)(CONCAT17(bVar48,CONCAT16(bVar46,CONCAT15(bVar44,CONCAT14(bVar42,fVar85)))) >>
                    0x20);
    param_6[1] = CONCAT44(fVar32,fVar22);
    *param_6 = CONCAT17((char)((uint)fVar21 >> 0x18),
                        CONCAT16((char)((uint)fVar21 >> 0x10),
                                 CONCAT15((char)((uint)fVar21 >> 8),CONCAT14(SUB41(fVar21,0),fVar20)
                                         )));
    fVar54 = *param_2;
    fVar85 = param_2[1] - fVar21 * fVar8;
    param_5[1] = CONCAT44(param_2[3] - fVar32 * fVar8,param_2[2] - fVar22 * fVar8);
    *param_5 = CONCAT17((char)((uint)fVar85 >> 0x18),
                        CONCAT16((char)((uint)fVar85 >> 0x10),
                                 CONCAT15((char)((uint)fVar85 >> 8),
                                          CONCAT14(SUB41(fVar85,0),fVar54 - fVar20 * fVar8))));
    if ((uVar61 >> 1 & 1) == 0) goto LAB_0054d3bc;
LAB_0054d2a8:
    fVar52 = *(float *)(param_1 + 0x20);
    fVar15 = *(float *)(param_1 + 0x24);
    fVar32 = *(float *)(param_1 + 0x28);
    fVar51 = *(float *)(param_1 + 0x2c);
    fVar85 = (float)*(undefined8 *)(param_2 + 4) - fVar52;
    fVar54 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) - fVar15;
    fVar20 = (float)*(undefined8 *)(param_2 + 6) - fVar32;
    fVar73 = fVar85 * fVar85 + fVar54 * fVar54 + fVar20 * fVar20;
    fVar80 = fVar85 * fVar85 + fVar54 * fVar54 + fVar20 * fVar20;
    uVar74 = CONCAT44(fVar80,fVar73);
    uVar75 = NEON_frsqrte(uVar74,4);
    fVar21 = (float)uVar75;
    fVar22 = (float)((ulong)uVar75 >> 0x20);
    uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar22 * fVar22,fVar21 * fVar21),4);
    fVar21 = fVar21 * (float)uVar75;
    fVar22 = fVar22 * (float)((ulong)uVar75 >> 0x20);
    uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar22 * fVar22,fVar21 * fVar21),4);
    iVar9 = -(uint)(fVar73 <= 0.0);
    iVar16 = -(uint)(fVar80 <= 0.0);
    fVar21 = (float)uVar75 * fVar21;
    fVar22 = (float)((ulong)uVar75 >> 0x20) * fVar22;
    fVar80 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                             CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                      CONCAT11((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar9 >> 8)
                                               ,SUB41(fVar21,0) & ~(byte)iVar9)));
    uVar75 = CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                      CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                               CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                        CONCAT14(SUB41(fVar22,0) & ~(byte)iVar16,fVar80))));
    fVar85 = fVar85 * fVar80;
    uVar35 = SUB41(fVar85,0);
    uVar37 = (undefined1)((uint)fVar85 >> 8);
    uVar39 = (undefined1)((uint)fVar85 >> 0x10);
    uVar41 = (undefined1)((uint)fVar85 >> 0x18);
    fVar73 = (float)((ulong)uVar75 >> 0x20);
    fVar54 = fVar54 * fVar73;
    uVar43 = SUB41(fVar54,0);
    uVar45 = (undefined1)((uint)fVar54 >> 8);
    uVar47 = (undefined1)((uint)fVar54 >> 0x10);
    uVar49 = (undefined1)((uint)fVar54 >> 0x18);
    fVar20 = fVar20 * fVar80;
    fVar73 = ((float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) - fVar51) * fVar73;
    fVar85 = *(float *)(param_1 + 0x90);
LAB_0054d4d0:
    *(float *)(param_5 + 3) = fVar32 + fVar20 * fVar85;
    *(float *)((long)param_5 + 0x1c) = fVar51 + fVar73 * fVar85;
    *(float *)(param_5 + 2) =
         fVar52 + (float)CONCAT13(uVar41,CONCAT12(uVar39,CONCAT11(uVar37,uVar35))) * fVar85;
    *(float *)((long)param_5 + 0x14) =
         fVar15 + (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar45,uVar43))) * fVar85;
    param_6[3] = CONCAT44(fVar73,fVar20);
    param_6[2] = CONCAT17(uVar49,CONCAT16(uVar47,CONCAT15(uVar45,CONCAT14(uVar43,CONCAT13(uVar41,
                                                  CONCAT12(uVar39,CONCAT11(uVar37,uVar35)))))));
    fVar85 = (float)uVar74 * (float)uVar75 - fVar85;
    uVar35 = SUB41(fVar85,0);
    uVar37 = (undefined1)((uint)fVar85 >> 8);
    uVar39 = (undefined1)((uint)fVar85 >> 0x10);
    uVar41 = (undefined1)((uint)fVar85 >> 0x18);
    if ((uVar64 >> 2 & 1) == 0) goto LAB_0054d4f4;
LAB_0054d42c:
    fVar85 = *(float *)(param_1 + 0x20);
    fVar54 = *(float *)(param_1 + 0x24);
    fVar52 = *(float *)(param_1 + 0x28);
    fVar59 = *(float *)(param_1 + 0x2c);
    fVar2 = param_2[8] - fVar85;
    fVar15 = param_2[9] - fVar54;
    fVar32 = param_2[10] - fVar52;
    fVar26 = fVar2 * fVar2 + fVar15 * fVar15 + fVar32 * fVar32;
    fVar51 = fVar2 * fVar2 + fVar15 * fVar15 + fVar32 * fVar32;
    uVar74 = CONCAT44(fVar51,fVar26);
    uVar75 = NEON_frsqrte(uVar74,4);
    fVar58 = (float)uVar75;
    fVar20 = (float)((ulong)uVar75 >> 0x20);
    uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar20 * fVar20,fVar58 * fVar58),4);
    fVar58 = fVar58 * (float)uVar75;
    fVar20 = fVar20 * (float)((ulong)uVar75 >> 0x20);
    uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar20 * fVar20,fVar58 * fVar58),4);
    iVar9 = -(uint)(fVar26 <= 0.0);
    iVar16 = -(uint)(fVar51 <= 0.0);
    fVar58 = (float)uVar75 * fVar58;
    fVar20 = (float)((ulong)uVar75 >> 0x20) * fVar20;
    fVar26 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                             CONCAT12((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                      CONCAT11((byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar9 >> 8)
                                               ,SUB41(fVar58,0) & ~(byte)iVar9)));
    uVar75 = CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                      CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                               CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                        CONCAT14(SUB41(fVar20,0) & ~(byte)iVar16,fVar26))));
    fVar2 = fVar2 * fVar26;
    fVar51 = (float)((ulong)uVar75 >> 0x20);
    fVar15 = fVar15 * fVar51;
    fVar32 = fVar32 * fVar26;
    fVar51 = (param_2[0xb] - fVar59) * fVar51;
    fVar26 = *(float *)(param_1 + 0x90);
LAB_0054d604:
    *(float *)(param_5 + 5) = fVar52 + fVar32 * fVar26;
    *(float *)((long)param_5 + 0x2c) = fVar59 + fVar51 * fVar26;
    *(float *)(param_5 + 4) = fVar85 + fVar2 * fVar26;
    *(float *)((long)param_5 + 0x24) = fVar54 + fVar15 * fVar26;
    *(float *)(param_6 + 5) = fVar32;
    *(float *)((long)param_6 + 0x2c) = fVar51;
    *(float *)(param_6 + 4) = fVar2;
    *(float *)((long)param_6 + 0x24) = fVar15;
    fVar26 = (float)uVar74 * (float)uVar75 - fVar26;
    if ((uVar66 >> 3 & 1) != 0) goto LAB_0054d560;
LAB_0054d624:
    if ((-(uint)(fVar62 + fVar65 < fVar4) >> 3 & 1) == 0) {
      fVar85 = *(float *)(param_1 + 0xa0);
      fVar15 = *(float *)(param_1 + 0xa4);
      fVar59 = fVar5 * fVar19 * fVar85 - *(float *)(param_1 + 0x50) * fVar15;
      fVar62 = fVar7 * fVar19 * fVar85 - *(float *)(param_1 + 0x54) * fVar15;
      fVar2 = auVar77._0_4_ * fVar19 * fVar85 - *(float *)(param_1 + 0x58) * fVar15;
      fVar54 = fVar59 * fVar59 + fVar62 * fVar62 + fVar2 * fVar2;
      fVar5 = fVar59 * fVar59 + fVar62 * fVar62 + fVar2 * fVar2;
      uVar74 = CONCAT44(fVar5,fVar54);
      uVar75 = NEON_frsqrte(uVar74,4);
      fVar52 = (float)uVar75;
      fVar4 = (float)((ulong)uVar75 >> 0x20);
      iVar9 = -(uint)(fVar54 <= 0.0);
      iVar16 = -(uint)(fVar5 <= 0.0);
      uVar74 = NEON_frsqrts(uVar74,CONCAT44(fVar4 * fVar4,fVar52 * fVar52),4);
      fVar52 = fVar52 * (float)uVar74;
      fVar4 = fVar4 * (float)((ulong)uVar74 >> 0x20);
      fVar5 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                              CONCAT12((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                       CONCAT11((byte)((uint)fVar52 >> 8) &
                                                ~(byte)((uint)iVar9 >> 8),
                                                SUB41(fVar52,0) & ~(byte)iVar9)));
      fVar4 = (float)(CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                               CONCAT16((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                        CONCAT15((byte)((uint)fVar4 >> 8) &
                                                 ~(byte)((uint)iVar16 >> 8),
                                                 CONCAT14(SUB41(fVar4,0) & ~(byte)iVar16,fVar5))))
                     >> 0x20);
      fVar62 = fVar62 * fVar4;
      fVar4 = (auVar77._4_4_ * fVar19 * fVar85 - *(float *)(param_1 + 0x5c) * fVar15) * fVar4;
      *(float *)(param_6 + 7) = fVar2 * fVar5;
      *(float *)((long)param_6 + 0x3c) = fVar4;
      *(float *)(param_6 + 6) = fVar59 * fVar5;
      *(float *)((long)param_6 + 0x34) = fVar62;
      fVar85 = param_2[0xc];
      fVar54 = param_2[0xd];
      fVar52 = param_2[0xf];
      *(float *)(param_5 + 7) = param_2[0xe] - fVar2 * fVar5 * fVar6;
      *(float *)((long)param_5 + 0x3c) = fVar52 - fVar4 * fVar6;
      *(float *)(param_5 + 6) = fVar85 - fVar59 * fVar5 * fVar6;
      *(float *)((long)param_5 + 0x34) = fVar54 - fVar62 * fVar6;
      goto LAB_0054d6fc;
    }
    fVar85 = *(float *)(param_1 + 0x30);
    fVar54 = *(float *)(param_1 + 0x34);
    fVar52 = *(float *)(param_1 + 0x38);
    fVar59 = *(float *)(param_1 + 0x3c);
    fVar62 = param_2[0xc] - fVar85;
    fVar2 = param_2[0xd] - fVar54;
    fVar5 = param_2[0xe] - fVar52;
    fVar6 = fVar62 * fVar62 + fVar2 * fVar2 + fVar5 * fVar5;
    fVar4 = fVar62 * fVar62 + fVar2 * fVar2 + fVar5 * fVar5;
    uVar74 = CONCAT44(fVar4,fVar6);
    uVar75 = NEON_frsqrte(uVar74,4);
    fVar7 = (float)uVar75;
    fVar15 = (float)((ulong)uVar75 >> 0x20);
    uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar15 * fVar15,fVar7 * fVar7),4);
    fVar7 = fVar7 * (float)uVar75;
    fVar15 = fVar15 * (float)((ulong)uVar75 >> 0x20);
    uVar75 = NEON_frsqrts(uVar74,CONCAT44(fVar15 * fVar15,fVar7 * fVar7),4);
    iVar9 = -(uint)(fVar6 <= 0.0);
    iVar16 = -(uint)(fVar4 <= 0.0);
    fVar7 = (float)uVar75 * fVar7;
    fVar15 = (float)((ulong)uVar75 >> 0x20) * fVar15;
    fVar6 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                            CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                     CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                              SUB41(fVar7,0) & ~(byte)iVar9)));
    uVar75 = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                      CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                               CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                        CONCAT14(SUB41(fVar15,0) & ~(byte)iVar16,fVar6))));
    fVar62 = fVar62 * fVar6;
    fVar4 = (float)((ulong)uVar75 >> 0x20);
    fVar2 = fVar2 * fVar4;
    fVar5 = fVar5 * fVar6;
    fVar4 = (param_2[0xf] - fVar59) * fVar4;
    fVar6 = *(float *)(param_1 + 0x94);
  }
  *(float *)(param_5 + 7) = fVar52 + fVar5 * fVar6;
  *(float *)((long)param_5 + 0x3c) = fVar59 + fVar4 * fVar6;
  *(float *)(param_5 + 6) = fVar85 + fVar62 * fVar6;
  *(float *)((long)param_5 + 0x34) = fVar54 + fVar2 * fVar6;
  *(float *)(param_6 + 7) = fVar5;
  *(float *)((long)param_6 + 0x3c) = fVar4;
  *(float *)(param_6 + 6) = fVar62;
  *(float *)((long)param_6 + 0x34) = fVar2;
  fVar6 = (float)uVar74 * (float)uVar75 - fVar6;
LAB_0054d6fc:
  param_7[1] = CONCAT44(fVar6,fVar26);
  *param_7 = CONCAT44(CONCAT13(uVar41,CONCAT12(uVar39,CONCAT11(uVar37,uVar35))),fVar8);
  return;
}

