
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a6940(float param_1,long param_2,long param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  float fVar18;
  uint uVar23;
  uint uVar24;
  uint uVar26;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar25;
  float fVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar28;
  float fVar29;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar38;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar57;
  undefined1 auVar59 [16];
  undefined8 uVar58;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  int iVar68;
  float fVar69;
  int iVar70;
  float fVar71;
  int iVar72;
  float fVar73;
  int iVar74;
  float fVar75;
  float fVar84;
  undefined8 uVar76;
  undefined8 uVar77;
  ulong uVar78;
  float fVar85;
  float fVar86;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar102 [12];
  undefined1 auVar103 [16];
  
  auVar102 = *(undefined1 (*) [12])(param_4 + 8);
  fVar96 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar97 = *(float *)PTR_Float2Pi_04bcede0;
  fVar99 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar101 = -fVar99;
  fVar98 = *(float *)PTR_FloatPi_04bcedc8;
  fVar100 = -fVar98;
  fVar18 = *(float *)(PTR_SinCoefficients_04bcede8 + 4);
  fVar29 = *(float *)(PTR_SinCoefficients_04bcede8 + 0xc);
  fVar87 = *(float *)PTR_CosCoefficients_04bcedf0;
  fVar95 = *(float *)PTR_SinCoefficients_04bcede8;
  fVar28 = auVar102._0_4_ - (float)(int)(auVar102._0_4_ * fVar96) * fVar97;
  fVar35 = auVar102._4_4_ - (float)(int)(auVar102._4_4_ * fVar96) * fVar97;
  fVar36 = auVar102._8_4_ - (float)(int)(auVar102._8_4_ * fVar96) * fVar97;
  fVar37 = 0.0 - (float)(int)(fVar96 * 0.0) * fVar97;
  fVar65 = -*(float *)(PTR_SinCoefficients_04bcede8 + 8);
  uVar17 = -(uint)(fVar99 < fVar28);
  uVar23 = -(uint)(fVar99 < fVar35);
  uVar24 = -(uint)(fVar99 < fVar36);
  uVar26 = -(uint)(fVar99 < fVar37);
  fVar28 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ (uint)(fVar98 - fVar28)) & uVar17);
  fVar35 = (float)((uint)fVar35 ^ ((uint)fVar35 ^ (uint)(fVar98 - fVar35)) & uVar23);
  fVar36 = (float)((uint)fVar36 ^ ((uint)fVar36 ^ (uint)(fVar98 - fVar36)) & uVar24);
  fVar37 = (float)((uint)fVar37 ^ ((uint)fVar37 ^ (uint)(fVar98 - fVar37)) & uVar26);
  uVar38 = -(uint)(fVar28 < fVar101);
  uVar46 = -(uint)(fVar35 < fVar101);
  uVar47 = -(uint)(fVar36 < fVar101);
  uVar48 = -(uint)(fVar37 < fVar101);
  auVar19[0] = (byte)uVar38 | (byte)uVar17;
  auVar19[1] = (byte)(uVar38 >> 8) | (byte)(uVar17 >> 8);
  auVar19[2] = (byte)(uVar38 >> 0x10) | (byte)(uVar17 >> 0x10);
  auVar19[3] = (byte)(uVar38 >> 0x18) | (byte)(uVar17 >> 0x18);
  auVar19[4] = (byte)uVar46 | (byte)uVar23;
  auVar19[5] = (byte)(uVar46 >> 8) | (byte)(uVar23 >> 8);
  auVar19[6] = (byte)(uVar46 >> 0x10) | (byte)(uVar23 >> 0x10);
  auVar19[7] = (byte)(uVar46 >> 0x18) | (byte)(uVar23 >> 0x18);
  auVar19[8] = (byte)uVar47 | (byte)uVar24;
  auVar19[9] = (byte)(uVar47 >> 8) | (byte)(uVar24 >> 8);
  auVar19[10] = (byte)(uVar47 >> 0x10) | (byte)(uVar24 >> 0x10);
  auVar19[0xb] = (byte)(uVar47 >> 0x18) | (byte)(uVar24 >> 0x18);
  auVar19[0xc] = (byte)uVar48 | (byte)uVar26;
  auVar19[0xd] = (byte)(uVar48 >> 8) | (byte)(uVar26 >> 8);
  auVar19[0xe] = (byte)(uVar48 >> 0x10) | (byte)(uVar26 >> 0x10);
  auVar19[0xf] = (byte)(uVar48 >> 0x18) | (byte)(uVar26 >> 0x18);
  fVar67 = (float)((uint)(fVar100 - fVar28) ^ ((uint)(fVar100 - fVar28) ^ (uint)fVar28) & ~uVar38);
  fVar69 = (float)((uint)(fVar100 - fVar35) ^ ((uint)(fVar100 - fVar35) ^ (uint)fVar35) & ~uVar46);
  fVar71 = (float)((uint)(fVar100 - fVar36) ^ ((uint)(fVar100 - fVar36) ^ (uint)fVar36) & ~uVar47);
  fVar73 = (float)((uint)(fVar100 - fVar37) ^ ((uint)(fVar100 - fVar37) ^ (uint)fVar37) & ~uVar48);
  fVar28 = *(float *)(PTR_CosCoefficients_04bcedf0 + 4);
  fVar35 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0xc);
  fVar75 = fVar67 * fVar67;
  fVar84 = fVar69 * fVar69;
  fVar85 = fVar71 * fVar71;
  fVar86 = fVar73 * fVar73;
  fVar88 = -*(float *)(PTR_CosCoefficients_04bcedf0 + 8);
  fVar66 = -*(float *)(PTR_CosCoefficients_04bcedf0 + 0x10);
  fVar89 = -*(float *)(PTR_SinCoefficients_04bcede8 + 0x10);
  auVar30 = NEON_fmov(0x3f800000,4);
  fVar36 = auVar30._0_4_;
  fVar37 = auVar30._4_4_;
  fVar25 = auVar30._8_4_;
  fVar27 = auVar30._12_4_;
  auVar20._0_4_ =
       fVar36 + fVar75 * (fVar66 + fVar75 * (fVar35 + fVar75 * (fVar88 + fVar75 * (fVar28 - fVar75 *
                                                                                            fVar87))
                                            ));
  auVar20._4_4_ =
       fVar37 + fVar84 * (fVar66 + fVar84 * (fVar35 + fVar84 * (fVar88 + fVar84 * (fVar28 - fVar84 *
                                                                                            fVar87))
                                            ));
  auVar20._8_4_ =
       fVar25 + fVar85 * (fVar66 + fVar85 * (fVar35 + fVar85 * (fVar88 + fVar85 * (fVar28 - fVar85 *
                                                                                            fVar87))
                                            ));
  auVar20._12_4_ =
       fVar27 + fVar86 * (fVar66 + fVar86 * (fVar35 + fVar86 * (fVar88 + fVar86 * (fVar28 - fVar86 *
                                                                                            fVar87))
                                            ));
  fVar67 = fVar67 * (fVar36 + fVar75 * (fVar89 + fVar75 * (fVar29 + fVar75 * (fVar65 + fVar75 * (
                                                  fVar18 - fVar75 * fVar95)))));
  fVar69 = fVar69 * (fVar37 + fVar84 * (fVar89 + fVar84 * (fVar29 + fVar84 * (fVar65 + fVar84 * (
                                                  fVar18 - fVar84 * fVar95)))));
  fVar71 = fVar71 * (fVar25 + fVar85 * (fVar89 + fVar85 * (fVar29 + fVar85 * (fVar65 + fVar85 * (
                                                  fVar18 - fVar85 * fVar95)))));
  fVar73 = fVar73 * (fVar27 + fVar86 * (fVar89 + fVar86 * (fVar29 + fVar86 * (fVar65 + fVar86 * (
                                                  fVar18 - fVar86 * fVar95)))));
  auVar39._0_4_ = -auVar20._0_4_;
  auVar39._4_4_ = -auVar20._4_4_;
  auVar39._8_4_ = -auVar20._8_4_;
  auVar39._12_4_ = -auVar20._12_4_;
  auVar20 = auVar20 ^ (auVar20 ^ auVar39) & auVar19;
  auVar30._4_4_ = fVar69;
  auVar30._0_4_ = fVar67;
  auVar30._8_4_ = fVar71;
  auVar30._12_4_ = fVar73;
  auVar93._4_4_ = fVar69;
  auVar93._0_4_ = fVar67;
  auVar93._8_4_ = fVar71;
  auVar93._12_4_ = fVar73;
  auVar30 = NEON_ext(auVar30,auVar93,8,1);
  fVar35 = auVar20._4_4_;
  auVar93 = NEON_ext(auVar20,auVar20,8,1);
  fVar18 = auVar93._0_4_;
  fVar29 = auVar30._0_4_;
  fVar71 = fVar35 * (float)DAT_041015a8;
  fVar28 = auVar20._0_4_;
  pfVar16 = (float *)(param_3 + (long)param_5 * 0x50);
  fVar73 = fVar18 * fVar35;
  uVar76 = CONCAT44(fVar29 * fVar35,fVar73);
  auVar59._12_4_ = (float)((ulong)DAT_04101610 >> 0x20) * 0.0;
  auVar59._8_4_ = fVar69 * (float)DAT_04101610;
  auVar59._0_8_ = uVar76;
  auVar49._0_4_ = fVar29 * fVar28 * (float)_DAT_04101d60 + fVar18 * fVar69 * fVar67;
  auVar49._4_4_ = fVar18 * fVar28 * (float)((ulong)_DAT_04101d60 >> 0x20) + fVar29 * fVar69 * fVar67
  ;
  auVar49._8_4_ = fVar28 * 0.0 * (float)_UNK_04101d68 + fVar71 * fVar67;
  auVar49._12_4_ =
       fVar28 * 0.0 * (float)((ulong)_UNK_04101d68 >> 0x20) +
       (float)((ulong)DAT_041015a8 >> 0x20) * 0.0 * fVar67;
  fVar35 = fVar29 * fVar67 * (float)_DAT_04102790 + fVar18 * fVar69 * fVar28;
  fVar69 = fVar18 * fVar67 * (float)((ulong)_DAT_04102790 >> 0x20) + fVar29 * fVar69 * fVar28;
  fVar71 = fVar67 * 0.0 * (float)_UNK_04102798 + fVar71 * fVar28;
  pfVar15 = pfVar16 + 0x11;
  fVar18 = *pfVar15;
  fVar29 = (float)((ulong)_DAT_041027a0 >> 0x20);
  fVar28 = (float)((ulong)_UNK_041027a8 >> 0x20);
  fVar67 = (float)((ulong)_DAT_04102140 >> 0x20);
  fVar75 = (float)((ulong)_UNK_04102148 >> 0x20);
  fVar65 = (float)((ulong)_DAT_041024d0 >> 0x20);
  fVar66 = (float)((ulong)_UNK_041024d8 >> 0x20);
  if (fVar18 == 0.0) {
    uVar76 = NEON_ext(uVar76,CONCAT44(fVar69,fVar35),4,1);
    fVar36 = (float)_DAT_041027a0 * fVar73 + (float)_DAT_04102140 * auVar49._4_4_ +
             (float)_DAT_041024d0 * fVar71 + fVar36;
    fVar37 = fVar29 * fVar73 + fVar67 * auVar49._4_4_ + fVar65 * fVar71 + fVar37;
    fVar25 = (float)_UNK_041027a8 * fVar73 + (float)_UNK_04102148 * auVar49._4_4_ +
             (float)_UNK_041024d8 * fVar71 + fVar25;
    fVar27 = fVar28 * fVar73 + fVar75 * auVar49._4_4_ + fVar66 * fVar71 + fVar27;
    auVar30 = NEON_ext(auVar49,auVar49,8,1);
    auVar93 = NEON_ext(auVar59,auVar59,8,1);
    auVar40._0_4_ = (float)uVar76 + auVar49._0_4_;
    fVar18 = (float)((ulong)uVar76 >> 0x20);
    auVar40._4_4_ = fVar18 + auVar93._0_4_;
    auVar40._8_4_ = auVar30._0_4_ + fVar69;
    auVar40._12_4_ = 0;
    auVar50._0_4_ = (float)uVar76 - auVar49._0_4_;
    auVar50._4_4_ = fVar18 - auVar93._0_4_;
    auVar50._8_4_ = auVar30._0_4_ - fVar69;
    auVar50._12_4_ = 0;
    uVar76 = a64_TBL(ZEXT816(0),auVar40,auVar50,DAT_041016d0);
    uVar57 = a64_TBL(ZEXT816(0),auVar40,auVar50,DAT_04101680);
    uVar58 = a64_TBL(ZEXT816(0),auVar40,auVar50,DAT_041016a8);
    auVar60._0_8_ = a64_TBL(ZEXT816(0),auVar40,auVar50,DAT_04101580);
    uVar77 = a64_TBL(ZEXT816(0),auVar40,auVar50,DAT_04101600);
    auVar31._0_4_ = (undefined4)uVar76;
    auVar31._4_4_ = fVar37;
    auVar31._8_8_ = uVar58;
    lVar14 = param_3 + (long)param_5 * 0x50;
    auVar79._0_8_ = a64_TBL(ZEXT816(0),auVar40,auVar50,DAT_041016d8);
    uVar58 = a64_TBL(ZEXT816(0),auVar40,auVar50,DAT_04101570);
    auVar51._4_4_ = fVar37;
    auVar51._0_4_ = fVar37;
    auVar51._8_4_ = fVar37;
    auVar51._12_4_ = fVar37;
    auVar60._12_4_ = (undefined4)((ulong)uVar77 >> 0x20);
    auVar60._8_4_ = fVar25;
    auVar79._8_8_ = uVar58;
    auVar41._4_4_ = fVar36;
    auVar41._0_4_ = fVar36;
    auVar41._8_4_ = fVar36;
    auVar41._12_4_ = fVar36;
    auVar90._0_4_ = -(uint)(fVar36 <= fVar37);
    auVar90._4_4_ = -(uint)(fVar36 <= fVar37);
    auVar90._8_4_ = -(uint)(fVar36 <= fVar37);
    auVar90._12_4_ = -(uint)(fVar36 <= fVar37);
    auVar41 = auVar41 ^ (auVar41 ^ auVar51) & auVar90;
    auVar52._4_4_ = fVar25;
    auVar52._0_4_ = fVar25;
    auVar52._8_4_ = fVar25;
    auVar52._12_4_ = fVar25;
    auVar2._4_4_ = (int)((ulong)uVar76 >> 0x20);
    auVar2._0_4_ = fVar36;
    auVar2._8_4_ = (int)uVar57;
    auVar2._12_4_ = (int)((ulong)uVar57 >> 0x20);
    auVar31 = auVar31 ^ (auVar31 ^ auVar2) & ~auVar90;
    auVar80._0_12_ = auVar79._0_12_;
    auVar80._12_4_ = fVar27;
    iVar68 = -(uint)(auVar41._0_4_ <= fVar25);
    iVar70 = -(uint)(auVar41._4_4_ <= fVar25);
    iVar72 = -(uint)(auVar41._8_4_ <= fVar25);
    iVar74 = -(uint)(auVar41._12_4_ <= fVar25);
    auVar3._4_4_ = iVar70;
    auVar3._0_4_ = iVar68;
    auVar3._8_4_ = iVar72;
    auVar3._12_4_ = iVar74;
    auVar41 = auVar41 ^ (auVar41 ^ auVar52) & auVar3;
    auVar4._4_4_ = iVar70;
    auVar4._0_4_ = iVar68;
    auVar4._8_4_ = iVar72;
    auVar4._12_4_ = iVar74;
    auVar31 = auVar31 ^ (auVar31 ^ auVar60) & auVar4;
    auVar21._0_4_ = -(uint)(auVar41._0_4_ <= fVar27);
    auVar21._4_4_ = -(uint)(auVar41._4_4_ <= fVar27);
    auVar21._8_4_ = -(uint)(auVar41._8_4_ <= fVar27);
    auVar21._12_4_ = -(uint)(auVar41._12_4_ <= fVar27);
    auVar31 = auVar31 ^ (auVar31 ^ auVar80) & auVar21;
    fVar28 = auVar31._0_4_;
    auVar32._0_4_ = fVar28 * fVar28;
    fVar35 = auVar31._4_4_;
    auVar32._4_4_ = fVar35 * fVar35;
    fVar36 = auVar31._8_4_;
    auVar32._8_4_ = fVar36 * fVar36;
    fVar37 = auVar31._12_4_;
    auVar32._12_4_ = fVar37 * fVar37;
    auVar30 = NEON_ext(auVar32,auVar32,8,1);
    fVar29 = auVar30._0_4_ + auVar32._0_4_;
    fVar25 = auVar30._4_4_ + auVar32._4_4_;
    fVar18 = fVar29 + fVar25;
    fVar29 = fVar29 + fVar25;
    auVar33._8_8_ = CONCAT44(fVar29,fVar18);
    auVar33._0_8_ = CONCAT44(fVar29,fVar18);
    auVar30 = NEON_frsqrte(auVar33,4);
    auVar53._0_4_ = auVar30._0_4_ * fVar18;
    auVar53._4_4_ = auVar30._4_4_ * fVar29;
    auVar53._8_4_ = auVar30._8_4_ * fVar18;
    auVar53._12_4_ = auVar30._12_4_ * fVar29;
    auVar93 = NEON_frsqrts(auVar30,auVar53,4);
    auVar42._0_4_ = auVar30._0_4_ * auVar93._0_4_;
    auVar42._4_4_ = auVar30._4_4_ * auVar93._4_4_;
    auVar42._8_4_ = auVar30._8_4_ * auVar93._8_4_;
    auVar42._12_4_ = auVar30._12_4_ * auVar93._12_4_;
    auVar54._0_4_ = fVar18 * auVar42._0_4_;
    auVar54._4_4_ = fVar29 * auVar42._4_4_;
    auVar54._8_4_ = fVar18 * auVar42._8_4_;
    auVar54._12_4_ = fVar29 * auVar42._12_4_;
    iVar68 = -(uint)(fVar18 == 0.0);
    iVar70 = -(uint)(fVar29 == 0.0);
    iVar72 = -(uint)(fVar18 == 0.0);
    iVar74 = -(uint)(fVar29 == 0.0);
    auVar30 = NEON_frsqrts(auVar42,auVar54,4);
    fVar28 = auVar42._0_4_ * auVar30._0_4_ * fVar28;
    fVar35 = auVar42._4_4_ * auVar30._4_4_ * fVar35;
    fVar36 = auVar42._8_4_ * auVar30._8_4_ * fVar36;
    fVar37 = auVar42._12_4_ * auVar30._12_4_ * fVar37;
    *(byte *)(lVar14 + 0x28) = SUB41(fVar36,0) & ~(byte)iVar72;
    *(byte *)(lVar14 + 0x29) = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar72 >> 8);
    *(byte *)(lVar14 + 0x2a) = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
    *(byte *)(lVar14 + 0x2b) = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
    *(byte *)(lVar14 + 0x2c) = SUB41(fVar37,0) & ~(byte)iVar74;
    *(byte *)(lVar14 + 0x2d) = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar74 >> 8);
    *(byte *)(lVar14 + 0x2e) = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
    *(byte *)(lVar14 + 0x2f) = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
    *(byte *)(lVar14 + 0x20) = SUB41(fVar28,0) & ~(byte)iVar68;
    *(byte *)(lVar14 + 0x21) = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar68 >> 8);
    *(byte *)(lVar14 + 0x22) = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
    *(byte *)(lVar14 + 0x23) = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
    *(byte *)(lVar14 + 0x24) = SUB41(fVar35,0) & ~(byte)iVar70;
    *(byte *)(lVar14 + 0x25) = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar70 >> 8);
    *(byte *)(lVar14 + 0x26) = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
    *(byte *)(lVar14 + 0x27) = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
    bVar1 = *(byte *)(param_2 + 0xc);
    goto joined_r0x003a7134;
  }
  uVar76 = NEON_ext(uVar76,CONCAT44(fVar69,fVar35),4,1);
  auVar30 = NEON_ext(auVar59,auVar59,8,1);
  fVar36 = (float)_DAT_041027a0 * fVar73 + (float)_DAT_04102140 * auVar49._4_4_ +
           (float)_DAT_041024d0 * fVar71 + fVar36;
  fVar37 = fVar29 * fVar73 + fVar67 * auVar49._4_4_ + fVar65 * fVar71 + fVar37;
  fVar25 = (float)_UNK_041027a8 * fVar73 + (float)_UNK_04102148 * auVar49._4_4_ +
           (float)_UNK_041024d8 * fVar71 + fVar25;
  fVar27 = fVar28 * fVar73 + fVar75 * auVar49._4_4_ + fVar66 * fVar71 + fVar27;
  auVar93 = NEON_ext(auVar49,auVar49,8,1);
  auVar61._0_4_ = (float)uVar76 + auVar49._0_4_;
  fVar28 = (float)((ulong)uVar76 >> 0x20);
  auVar61._4_4_ = fVar28 + auVar30._0_4_;
  auVar61._8_4_ = auVar93._0_4_ + fVar69;
  auVar61._12_4_ = 0;
  fVar29 = (float)uVar76 - auVar49._0_4_;
  fVar28 = fVar28 - auVar30._0_4_;
  fVar69 = auVar93._0_4_ - fVar69;
  auVar5._4_4_ = fVar28;
  auVar5._0_4_ = fVar29;
  auVar5._8_4_ = fVar69;
  auVar5._12_4_ = 0;
  uVar76 = a64_TBL(ZEXT816(0),auVar61,auVar5,DAT_041016d0);
  auVar6._4_4_ = fVar28;
  auVar6._0_4_ = fVar29;
  auVar6._8_4_ = fVar69;
  auVar6._12_4_ = 0;
  uVar58 = a64_TBL(ZEXT816(0),auVar61,auVar6,DAT_04101680);
  auVar81._8_8_ = uVar58;
  auVar81._0_8_ = uVar76;
  auVar7._4_4_ = fVar28;
  auVar7._0_4_ = fVar29;
  auVar7._8_4_ = fVar69;
  auVar7._12_4_ = 0;
  uVar58 = a64_TBL(ZEXT816(0),auVar61,auVar7,DAT_041016a8);
  auVar82._4_12_ = auVar81._4_12_;
  auVar82._0_4_ = fVar36;
  auVar8._4_4_ = fVar28;
  auVar8._0_4_ = fVar29;
  auVar8._8_4_ = fVar69;
  auVar8._12_4_ = 0;
  auVar55._0_8_ = a64_TBL(ZEXT816(0),auVar61,auVar8,DAT_04101580);
  auVar9._4_4_ = fVar28;
  auVar9._0_4_ = fVar29;
  auVar9._8_4_ = fVar69;
  auVar9._12_4_ = 0;
  uVar57 = a64_TBL(ZEXT816(0),auVar61,auVar9,DAT_04101600);
  auVar43._0_4_ = (undefined4)uVar76;
  auVar43._4_4_ = fVar37;
  auVar43._8_8_ = uVar58;
  lVar14 = param_3 + (long)param_5 * 0x50;
  auVar10._4_4_ = fVar28;
  auVar10._0_4_ = fVar29;
  auVar10._8_4_ = fVar69;
  auVar10._12_4_ = 0;
  auVar91._0_8_ = a64_TBL(ZEXT816(0),auVar61,auVar10,DAT_041016d8);
  uVar58 = *(undefined8 *)(lVar14 + 0x20);
  auVar11._4_4_ = fVar28;
  auVar11._0_4_ = fVar29;
  auVar11._8_4_ = fVar69;
  auVar11._12_4_ = 0;
  uVar76 = a64_TBL(ZEXT816(0),auVar61,auVar11,DAT_04101570);
  auVar55._12_4_ = (undefined4)((ulong)uVar57 >> 0x20);
  auVar55._8_4_ = fVar25;
  auVar91._8_8_ = uVar76;
  auVar62._4_4_ = fVar36;
  auVar62._0_4_ = fVar36;
  auVar62._8_4_ = fVar36;
  auVar62._12_4_ = fVar36;
  auVar94._0_4_ = -(uint)(fVar36 <= fVar37);
  auVar94._4_4_ = -(uint)(fVar36 <= fVar37);
  auVar94._8_4_ = -(uint)(fVar36 <= fVar37);
  auVar94._12_4_ = -(uint)(fVar36 <= fVar37);
  auVar12._4_4_ = fVar37;
  auVar12._0_4_ = fVar37;
  auVar12._8_4_ = fVar37;
  auVar12._12_4_ = fVar37;
  auVar62 = auVar62 ^ (auVar62 ^ auVar12) & auVar94;
  auVar43 = auVar43 ^ (auVar43 ^ auVar82) & ~auVar94;
  auVar92._0_12_ = auVar91._0_12_;
  auVar92._12_4_ = fVar27;
  auVar83._0_4_ = -(uint)(auVar62._0_4_ <= fVar25);
  auVar83._4_4_ = -(uint)(auVar62._4_4_ <= fVar25);
  auVar83._8_4_ = -(uint)(auVar62._8_4_ <= fVar25);
  auVar83._12_4_ = -(uint)(auVar62._12_4_ <= fVar25);
  auVar13._4_4_ = fVar25;
  auVar13._0_4_ = fVar25;
  auVar13._8_4_ = fVar25;
  auVar13._12_4_ = fVar25;
  auVar62 = auVar62 ^ (auVar62 ^ auVar13) & auVar83;
  auVar43 = auVar43 ^ (auVar43 ^ auVar55) & auVar83;
  auVar34._0_4_ = -(uint)(auVar62._0_4_ <= fVar27);
  auVar34._4_4_ = -(uint)(auVar62._4_4_ <= fVar27);
  auVar34._8_4_ = -(uint)(auVar62._8_4_ <= fVar27);
  auVar34._12_4_ = -(uint)(auVar62._12_4_ <= fVar27);
  auVar43 = auVar43 ^ (auVar43 ^ auVar92) & auVar34;
  fVar35 = auVar43._0_4_;
  auVar44._0_4_ = fVar35 * fVar35;
  fVar36 = auVar43._4_4_;
  auVar44._4_4_ = fVar36 * fVar36;
  fVar37 = auVar43._8_4_;
  auVar44._8_4_ = fVar37 * fVar37;
  fVar25 = auVar43._12_4_;
  auVar44._12_4_ = fVar25 * fVar25;
  auVar30 = NEON_ext(auVar44,auVar44,8,1);
  fVar28 = auVar30._0_4_ + auVar44._0_4_;
  fVar27 = auVar30._4_4_ + auVar44._4_4_;
  fVar29 = fVar28 + fVar27;
  fVar28 = fVar28 + fVar27;
  auVar45._8_8_ = CONCAT44(fVar28,fVar29);
  auVar45._0_8_ = CONCAT44(fVar28,fVar29);
  auVar30 = NEON_frsqrte(auVar45,4);
  auVar63._0_4_ = auVar30._0_4_ * fVar29;
  auVar63._4_4_ = auVar30._4_4_ * fVar28;
  auVar63._8_4_ = auVar30._8_4_ * fVar29;
  auVar63._12_4_ = auVar30._12_4_ * fVar28;
  auVar93 = NEON_frsqrts(auVar30,auVar63,4);
  auVar56._0_4_ = auVar30._0_4_ * auVar93._0_4_;
  auVar56._4_4_ = auVar30._4_4_ * auVar93._4_4_;
  auVar56._8_4_ = auVar30._8_4_ * auVar93._8_4_;
  auVar56._12_4_ = auVar30._12_4_ * auVar93._12_4_;
  auVar64._0_4_ = fVar29 * auVar56._0_4_;
  auVar64._4_4_ = fVar28 * auVar56._4_4_;
  auVar64._8_4_ = fVar29 * auVar56._8_4_;
  auVar64._12_4_ = fVar28 * auVar56._12_4_;
  iVar68 = -(uint)(fVar29 == 0.0);
  iVar70 = -(uint)(fVar28 == 0.0);
  iVar72 = -(uint)(fVar29 == 0.0);
  iVar74 = -(uint)(fVar28 == 0.0);
  auVar30 = NEON_frsqrts(auVar56,auVar64,4);
  fVar35 = auVar56._0_4_ * auVar30._0_4_ * fVar35;
  fVar36 = auVar56._4_4_ * auVar30._4_4_ * fVar36;
  fVar37 = auVar56._8_4_ * auVar30._8_4_ * fVar37;
  fVar25 = auVar56._12_4_ * auVar30._12_4_ * fVar25;
  fVar27 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                           CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                    CONCAT11((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                             SUB41(fVar35,0) & ~(byte)iVar68)));
  auVar102._0_8_ =
       CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                CONCAT16((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                         CONCAT15((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                  CONCAT14(SUB41(fVar36,0) & ~(byte)iVar70,fVar27))));
  auVar102[8] = SUB41(fVar37,0) & ~(byte)iVar72;
  auVar102[9] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar72 >> 8);
  auVar102[10] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
  auVar102[0xb] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
  auVar103[0xc] = SUB41(fVar25,0) & ~(byte)iVar74;
  auVar103._0_12_ = auVar102;
  auVar103[0xd] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar74 >> 8);
  auVar103[0xe] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
  auVar103[0xf] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
  fVar35 = (float)uVar58;
  auVar22._0_4_ = fVar35 * fVar27;
  fVar36 = (float)((ulong)uVar58 >> 0x20);
  fVar71 = (float)((ulong)auVar102._0_8_ >> 0x20);
  auVar22._4_4_ = fVar36 * fVar71;
  fVar37 = (float)*(undefined8 *)(lVar14 + 0x28);
  auVar22._8_4_ = fVar37 * auVar102._8_4_;
  fVar25 = (float)((ulong)*(undefined8 *)(lVar14 + 0x28) >> 0x20);
  auVar22._12_4_ = fVar25 * auVar103._12_4_;
  auVar30 = NEON_ext(auVar22,auVar22,8,1);
  fVar28 = auVar30._0_4_ + auVar22._0_4_ + auVar30._4_4_ + auVar22._4_4_;
  fVar29 = fVar28;
  if (fVar28 < 0.0) {
    fVar29 = -fVar28;
  }
  fVar69 = 1.0 - fVar29 * fVar29;
  fVar67 = SQRT(fVar69);
  if (NAN(fVar67)) {
    fVar67 = sqrtf(fVar69);
    if (0.0 <= fVar29) goto LAB_003a6f78;
LAB_003a6e58:
    if (-0.70710677 <= fVar29) {
      fVar67 = -fVar29 / fVar67;
      fVar69 = fVar67 * fVar67;
      fVar69 = fVar99 + fVar67 * (fVar69 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x18) +
                                            fVar69 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 +
                                                                 0x10) +
                                                      fVar69 * ((*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 8) +
                                                  fVar69 * (*(float *)PTR_AtanCoefficients_04bcedd0
                                                            * fVar69 -
                                                           *(float *)(PTR_AtanCoefficients_04bcedd0
                                                                     + 4))) * fVar69 -
                                                  *(float *)(PTR_AtanCoefficients_04bcedd0 + 0xc)))
                                                  * fVar69 -
                                                  *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x14)))
                                            * fVar69 -
                                           *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x1c)) + 1.0);
    }
    else {
      fVar67 = -fVar67 / fVar29;
      fVar69 = fVar67 * fVar67;
      fVar69 = fVar98 - fVar67 * (fVar69 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x18) +
                                            fVar69 * ((*(float *)(PTR_AtanCoefficients_04bcedd0 +
                                                                 0x10) +
                                                      fVar69 * ((*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 8) +
                                                  fVar69 * (*(float *)PTR_AtanCoefficients_04bcedd0
                                                            * fVar69 -
                                                           *(float *)(PTR_AtanCoefficients_04bcedd0
                                                                     + 4))) * fVar69 -
                                                  *(float *)(PTR_AtanCoefficients_04bcedd0 + 0xc)))
                                                  * fVar69 -
                                                  *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x14)))
                                            * fVar69 -
                                           *(float *)(PTR_AtanCoefficients_04bcedd0 + 0x1c)) + 1.0);
    }
  }
  else {
    if (fVar29 < 0.0) goto LAB_003a6e58;
LAB_003a6f78:
    fVar69 = fVar29 / fVar67;
    fVar73 = fVar69 * fVar69;
    fVar67 = fVar67 / fVar29;
    fVar65 = fVar67 * fVar67;
    fVar69 = fVar99 - fVar69 * (fVar73 * (-*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x1c) +
                                         fVar73 * (*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x18)
                                                  + fVar73 * (-*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 0x14) +
                                                  fVar73 * (*(float *)(PTR_AtanCoefficients_04bcedd0
                                                                      + 0x10) +
                                                           fVar73 * (-*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 0xc) +
                                                  fVar73 * (*(float *)(PTR_AtanCoefficients_04bcedd0
                                                                      + 8) +
                                                           fVar73 * (-*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 4) +
                                                  fVar73 * *(float *)PTR_AtanCoefficients_04bcedd0))
                                                  ))))) + 1.0);
    if (0.70710677 < fVar29) {
      fVar69 = fVar67 * (fVar65 * (-*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x1c) +
                                  fVar65 * (*(float *)(PTR_AtanCoefficients_04bcedd0 + 0x18) +
                                           fVar65 * (-*(float *)(PTR_AtanCoefficients_04bcedd0 +
                                                                0x14) +
                                                    fVar65 * (*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 0x10) +
                                                  fVar65 * (-*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 0xc) +
                                                  fVar65 * (*(float *)(PTR_AtanCoefficients_04bcedd0
                                                                      + 8) +
                                                           fVar65 * (-*(float *)(
                                                  PTR_AtanCoefficients_04bcedd0 + 4) +
                                                  fVar65 * *(float *)PTR_AtanCoefficients_04bcedd0))
                                                  ))))) + 1.0);
    }
  }
  fVar95 = -fVar95;
  fVar73 = param_1 / (fVar18 + param_1);
  fVar67 = fVar69 - (float)(int)(fVar96 * fVar69) * fVar97;
  fVar18 = fVar67;
  if (fVar67 < fVar101) {
    fVar18 = fVar100 - fVar67;
  }
  if (fVar99 < fVar67) {
    fVar18 = fVar98 - fVar67;
  }
  fVar65 = fVar18 * fVar18;
  fVar67 = 1.0;
  if (fVar28 < 0.0) {
    fVar67 = -1.0;
  }
  fVar28 = (1.0 - fVar73) * fVar69;
  fVar28 = fVar28 - (float)(int)(fVar28 * fVar96) * fVar97;
  fVar69 = fVar73 * fVar69 - (float)(int)(fVar73 * fVar69 * fVar96) * fVar97;
  uVar78 = CONCAT44(fVar69,fVar28) ^
           (CONCAT44(fVar69,fVar28) ^ CONCAT44(fVar98 - fVar69,fVar98 - fVar28)) &
           CONCAT44(-(uint)(fVar99 < fVar69),-(uint)(fVar99 < fVar28));
  fVar28 = (float)(uVar78 >> 0x20);
  uVar78 = uVar78 ^ (uVar78 ^ CONCAT44(fVar100 - fVar28,fVar100 - (float)uVar78)) &
                    CONCAT44(-(uint)(fVar28 < fVar101),-(uint)((float)uVar78 < fVar101));
  fVar75 = (float)uVar78;
  fVar85 = fVar75 * fVar75;
  fVar84 = (float)(uVar78 >> 0x20);
  fVar86 = fVar84 * fVar84;
  fVar87 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4);
  fVar69 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4) >> 0x20);
  fVar88 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc);
  uVar76 = NEON_fmov(0x3f800000,4);
  fVar66 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc) >> 0x20);
  fVar65 = 1.0 / (fVar18 * (fVar65 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 0xc) +
                                      fVar65 * ((*(float *)(PTR_SinCoefficients_04bcede8 + 4) +
                                                fVar65 * fVar95) * fVar65 -
                                               *(float *)(PTR_SinCoefficients_04bcede8 + 8))) *
                                      fVar65 - *(float *)(PTR_SinCoefficients_04bcede8 + 0x10)) +
                           1.0));
  fVar18 = fVar73 * fVar67;
  fVar28 = 1.0 - fVar73;
  if (fVar29 <= 1.0 - *(float *)PTR_FloatQuaternionEpsilon_04bd1768) {
    fVar18 = fVar65 * fVar67 * fVar84 * ((float)((ulong)uVar76 >> 0x20) +
                                        fVar86 * (fVar66 + fVar86 * (fVar88 + fVar86 * (fVar69 + 
                                                  fVar86 * (fVar87 + fVar86 * fVar95)))));
    fVar28 = fVar65 * fVar75 * ((float)uVar76 +
                               fVar85 * (fVar66 + fVar85 * (fVar88 + fVar85 * (fVar69 + fVar85 * (
                                                  fVar87 + fVar85 * fVar95)))));
  }
  *(float *)(lVar14 + 0x28) = fVar37 * fVar28 + auVar102._8_4_ * fVar18;
  *(float *)(lVar14 + 0x2c) = fVar25 * fVar28 + auVar103._12_4_ * fVar18;
  *(float *)(lVar14 + 0x20) = fVar35 * fVar28 + fVar27 * fVar18;
  *(float *)(lVar14 + 0x24) = fVar36 * fVar28 + fVar71 * fVar18;
  bVar1 = *(byte *)(param_2 + 0xc);
joined_r0x003a7134:
  if ((bVar1 & 1) == 0) {
    uVar76 = *(undefined8 *)*(undefined1 (*) [12])(param_4 + 1);
    auVar102 = *(undefined1 (*) [12])(param_4 + 1);
    pfVar16[2] = pfVar16[2] + auVar102._8_4_ * param_1;
    pfVar16[3] = pfVar16[3] + param_1 * 0.0;
    *pfVar16 = *pfVar16 + (float)uVar76 * param_1;
    pfVar16[1] = pfVar16[1] + auVar102._4_4_ * param_1;
    auVar102 = *(undefined1 (*) [12])(param_4 + 4);
    param_3 = param_3 + (long)param_5 * 0x50;
    uVar17 = *(uint *)(param_3 + 0x40);
    fVar18 = *(float *)(param_3 + 0x10) +
             (float)*(undefined8 *)*(undefined1 (*) [12])(param_4 + 4) * param_1;
    fVar29 = *(float *)(param_3 + 0x14) + auVar102._4_4_ * param_1;
    fVar28 = *(float *)(param_3 + 0x18) + auVar102._8_4_ * param_1;
    fVar36 = *(float *)(param_3 + 0x1c) + param_1 * 0.0;
    fVar35 = *pfVar15;
  }
  else {
    fVar18 = powf((float)param_4[1],param_1);
    fVar29 = powf((float)param_4[2],param_1);
    fVar28 = powf((float)param_4[3],param_1);
    fVar35 = *pfVar15;
    if (0.001 <= ABS(fVar35)) {
      fVar36 = *pfVar16;
      fVar37 = pfVar16[1];
      fVar25 = pfVar16[2];
      fVar27 = pfVar16[3];
    }
    else {
      fVar36 = _DAT_041029f0;
      fVar37 = _UNK_041029f4;
      fVar25 = _UNK_041029f8;
      fVar27 = _UNK_041029fc;
    }
    pfVar16[2] = fVar28 * fVar25;
    pfVar16[3] = fVar27 * 0.0;
    *pfVar16 = fVar18 * fVar36;
    pfVar16[1] = fVar29 * fVar37;
    auVar102 = *(undefined1 (*) [12])(param_4 + 4);
    param_3 = param_3 + (long)param_5 * 0x50;
    uVar17 = *(uint *)(param_3 + 0x40);
    fVar18 = *(float *)(param_3 + 0x10) +
             (float)*(undefined8 *)*(undefined1 (*) [12])(param_4 + 4) * param_1;
    fVar29 = *(float *)(param_3 + 0x14) + auVar102._4_4_ * param_1;
    fVar28 = *(float *)(param_3 + 0x18) + auVar102._8_4_ * param_1;
    fVar36 = *(float *)(param_3 + 0x1c) + param_1 * 0.0;
  }
  *(float *)(param_3 + 0x18) = fVar28;
  *(float *)(param_3 + 0x1c) = fVar36;
  *(float *)(param_3 + 0x10) = fVar18;
  *(float *)(param_3 + 0x14) = fVar29;
  *(uint *)(param_3 + 0x40) = uVar17 | *param_4 ^ 0xffffffff;
  *pfVar15 = fVar35 + param_1;
  return;
}

