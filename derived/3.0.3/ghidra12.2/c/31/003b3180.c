
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003b3180(long *param_1)

{
  undefined1 (*pauVar1) [12];
  uint *puVar2;
  long lVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  undefined1 auVar70 [16];
  float fVar72;
  undefined1 auVar71 [16];
  float fVar73;
  undefined8 uVar74;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar76 [16];
  undefined8 uVar75;
  undefined1 auVar77 [16];
  uint uVar81;
  undefined8 uVar82;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  
  uVar36 = _UNK_041029f8;
  uVar35 = _DAT_041029f0;
  uVar63 = _UNK_04101d68;
  uVar5 = _DAT_04101d60;
  uVar34 = DAT_041016f0;
  uVar33 = DAT_041016e8;
  uVar32 = DAT_041016b0;
  uVar31 = DAT_041016a8;
  uVar30 = DAT_041016a0;
  uVar29 = DAT_04101640;
  uVar28 = DAT_04101600;
  uVar27 = DAT_041015d8;
  uVar26 = DAT_041015c8;
  uVar25 = DAT_041015a0;
  uVar24 = DAT_04101598;
  uVar23 = DAT_04101590;
  uVar22 = DAT_04101588;
  uVar21 = DAT_04101580;
  uVar74 = DAT_04101568;
  lVar37 = param_1[3];
  uVar4 = *(ushort *)(*param_1 + 0x38);
  if ((*(ushort *)(param_1 + 1) & 0x7000) == 0) {
    if (uVar4 != 0) {
      lVar38 = 0;
      do {
        puVar2 = (uint *)(lVar37 + lVar38);
        lVar3 = *(long *)(*param_1 + 0x10) + lVar38;
        lVar38 = lVar38 + 0x60;
        *puVar2 = *(uint *)(lVar3 + 0x34) & 0xf870000;
        uVar5 = *(undefined8 *)(lVar3 + 0x38);
        *(ulong *)(puVar2 + 6) = (ulong)*(uint *)(lVar3 + 0x40);
        *(undefined8 *)(puVar2 + 4) = uVar5;
        pauVar1 = (undefined1 (*) [12])(lVar3 + 0x44);
        fVar41 = (float)((ulong)*(undefined8 *)(lVar3 + 0x4c) >> 0x20);
        uVar5 = *(undefined8 *)*pauVar1;
        uVar45 = *(undefined8 *)(lVar3 + 0x54);
        uVar81 = *(uint *)(lVar3 + 0x5c);
        auVar51._12_4_ = 0;
        auVar51._0_12_ = *pauVar1;
        uVar62 = a64_TBL(ZEXT816(0),auVar51,uVar26);
        uVar63 = NEON_rev64(uVar5,4);
        fVar52 = (float)((ulong)uVar63 >> 0x20);
        auVar6._12_4_ = 0;
        auVar6._0_12_ = *pauVar1;
        uVar82 = a64_TBL(ZEXT816(0),auVar6,uVar21);
        auVar7._12_4_ = 0;
        auVar7._0_12_ = *pauVar1;
        uVar69 = a64_TBL(ZEXT816(0),auVar7,uVar27);
        auVar8._12_4_ = 0;
        auVar8._0_12_ = *pauVar1;
        uVar75 = a64_TBL(ZEXT816(0),auVar8,uVar30);
        fVar54 = (float)uVar62;
        fVar56 = (float)((ulong)uVar62 >> 0x20);
        auVar9._12_4_ = 0;
        auVar9._0_12_ = *pauVar1;
        uVar62 = a64_TBL(ZEXT816(0),auVar9,uVar24);
        fVar65 = (float)uVar63 * (float)uVar63;
        fVar52 = fVar52 * fVar52;
        fVar68 = (float)uVar69 * (float)uVar69;
        fVar72 = (float)((ulong)uVar69 >> 0x20);
        fVar72 = fVar72 * fVar72;
        fVar64 = (float)uVar75;
        fVar67 = (float)((ulong)uVar75 >> 0x20);
        fVar42 = (float)uVar82 * (float)uVar5;
        fVar59 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar5 >> 0x20);
        fVar43 = fVar54 * (float)*(undefined8 *)(lVar3 + 0x4c);
        fVar58 = (float)uVar62 * fVar41;
        fVar39 = (float)((ulong)uVar62 >> 0x20) * fVar41;
        fVar42 = fVar42 + fVar42;
        fVar59 = fVar59 + fVar59;
        fVar43 = fVar43 + fVar43;
        fVar60 = fVar56 * 0.0 + fVar56 * 0.0;
        fVar58 = fVar58 + fVar58;
        fVar39 = fVar39 + fVar39;
        fVar40 = fVar64 * fVar41 + fVar64 * fVar41;
        fVar41 = fVar67 * fVar41 + fVar67 * fVar41;
        fVar66 = fVar42 + fVar58;
        fVar53 = fVar59 + fVar39;
        fVar55 = fVar43 + fVar40;
        fVar57 = fVar60 + fVar41;
        auVar71._0_4_ = fVar42 - fVar58;
        auVar71._4_4_ = fVar59 - fVar39;
        auVar71._8_4_ = fVar43 - fVar40;
        auVar71._12_4_ = fVar60 - fVar41;
        fVar58 = (float)uVar35 - (fVar68 + fVar68 + fVar65 + fVar65);
        fVar39 = (float)((ulong)uVar35 >> 0x20) - (fVar72 + fVar72 + fVar52 + fVar52);
        fVar40 = (float)uVar36 -
                 (fVar64 * fVar64 + fVar64 * fVar64 + fVar54 * fVar54 + fVar54 * fVar54);
        fVar41 = (float)((ulong)uVar36 >> 0x20) -
                 (fVar67 * fVar67 + fVar67 * fVar67 + fVar56 * fVar56 + fVar56 * fVar56);
        auVar12._4_4_ = fVar53;
        auVar12._0_4_ = fVar66;
        auVar12._8_4_ = fVar55;
        auVar12._12_4_ = fVar57;
        uVar5 = a64_TBL(ZEXT816(0),auVar12,auVar71,uVar31);
        auVar13._4_4_ = fVar53;
        auVar13._0_4_ = fVar66;
        auVar13._8_4_ = fVar55;
        auVar13._12_4_ = fVar57;
        uVar63 = a64_TBL(ZEXT816(0),auVar13,auVar71,uVar23);
        auVar14._4_4_ = fVar53;
        auVar14._0_4_ = fVar66;
        auVar14._8_4_ = fVar55;
        auVar14._12_4_ = fVar57;
        auVar85._0_8_ = a64_TBL(ZEXT816(0),auVar14,auVar71,uVar32);
        uVar61 = (undefined4)((ulong)uVar63 >> 0x20);
        auVar15._4_4_ = fVar53;
        auVar15._0_4_ = fVar66;
        auVar15._8_4_ = fVar55;
        auVar15._12_4_ = fVar57;
        uVar62 = a64_TBL(ZEXT816(0),auVar15,auVar71,uVar29);
        auVar85._8_8_ = uVar62;
        auVar77._12_4_ = fVar41;
        auVar77._8_4_ = fVar40;
        auVar77._4_4_ = fVar39;
        auVar77._0_4_ = fVar58;
        auVar70._4_4_ = fVar39;
        auVar70._0_4_ = fVar58;
        auVar70._8_4_ = fVar40;
        auVar70._12_4_ = fVar41;
        auVar10._8_4_ = (int)uVar63;
        auVar10._0_8_ = uVar5;
        auVar10._12_4_ = uVar61;
        uVar62 = a64_TBL(ZEXT816(0),auVar70,auVar10,uVar34);
        auVar47._4_4_ = fVar39;
        auVar47._0_4_ = fVar58;
        auVar47._8_4_ = fVar40;
        auVar47._12_4_ = fVar41;
        auVar11._8_4_ = (int)uVar63;
        auVar11._0_8_ = uVar5;
        auVar11._12_4_ = uVar61;
        uVar5 = a64_TBL(ZEXT816(0),auVar47,auVar11,uVar74);
        uVar63 = a64_TBL(ZEXT816(0),auVar77,auVar85,uVar28);
        uVar69 = a64_TBL(ZEXT816(0),auVar77,auVar85,uVar33);
        uVar82 = a64_TBL(ZEXT816(0),auVar77,auVar85,uVar25);
        uVar75 = a64_TBL(ZEXT816(0),auVar77,auVar85,uVar22);
        *(undefined8 *)(puVar2 + 10) = uVar69;
        *(undefined8 *)(puVar2 + 8) = uVar63;
        *(undefined8 *)(puVar2 + 0xc) = uVar82;
        *(undefined8 *)(puVar2 + 0xe) = uVar75;
        *(undefined8 *)(puVar2 + 0x12) = uVar5;
        *(undefined8 *)(puVar2 + 0x10) = uVar62;
        *(ulong *)(puVar2 + 0x16) = (ulong)uVar81;
        *(undefined8 *)(puVar2 + 0x14) = uVar45;
      } while ((ulong)uVar4 * 0x60 != lVar38);
    }
  }
  else if (uVar4 != 0) {
    auVar70 = NEON_fmov(0x3f800000,4);
    lVar38 = 0;
    fVar58 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
    fVar39 = *(float *)PTR_Float2Pi_04bcede0;
    fVar40 = *(float *)PTR_FloatPiDivided2_04bcedc0;
    fVar42 = *(float *)PTR_FloatPi_04bcedc8;
    fVar52 = -fVar40;
    fVar53 = -fVar42;
    fVar41 = -*(float *)PTR_SinCoefficients_04bcede8;
    fVar59 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4);
    fVar60 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc);
    fVar68 = (float)DAT_04101610;
    uVar17 = (ulong)DAT_04101610 >> 0x20;
    fVar72 = (float)DAT_041015a8;
    uVar18 = (ulong)DAT_041015a8 >> 0x20;
    fVar67 = (float)_UNK_04102798;
    uVar20 = (ulong)_UNK_04102798 >> 0x20;
    fVar64 = (float)_DAT_04102790;
    uVar19 = (ulong)_DAT_04102790 >> 0x20;
    fVar43 = -*(float *)PTR_CosCoefficients_04bcedf0;
    fVar65 = (float)*(undefined8 *)(PTR_CosCoefficients_04bcedf0 + 4);
    fVar66 = (float)*(undefined8 *)(PTR_CosCoefficients_04bcedf0 + 0xc);
    fVar54 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4) >> 0x20);
    fVar55 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc) >> 0x20);
    fVar56 = -(float)((ulong)*(undefined8 *)(PTR_CosCoefficients_04bcedf0 + 4) >> 0x20);
    fVar57 = -(float)((ulong)*(undefined8 *)(PTR_CosCoefficients_04bcedf0 + 0xc) >> 0x20);
    do {
      puVar2 = (uint *)(lVar37 + lVar38);
      lVar3 = *(long *)(*param_1 + 0x10) + lVar38;
      lVar38 = lVar38 + 0x60;
      *puVar2 = *(uint *)(lVar3 + 0x34) & 0xf870000;
      uVar74 = *(undefined8 *)(lVar3 + 0x38);
      *(ulong *)(puVar2 + 6) = (ulong)*(uint *)(lVar3 + 0x40);
      *(undefined8 *)(puVar2 + 4) = uVar74;
      uVar74 = *(undefined8 *)*(undefined1 (*) [12])(lVar3 + 0x44);
      auVar16 = *(undefined1 (*) [12])(lVar3 + 0x44);
      fVar73 = (float)uVar74;
      fVar73 = fVar73 - (float)(int)(fVar73 * fVar58) * fVar39;
      fVar78 = auVar16._4_4_ - (float)(int)((float)((ulong)uVar74 >> 0x20) * fVar58) * fVar39;
      fVar79 = auVar16._8_4_ - (float)(int)(*(float *)(lVar3 + 0x4c) * fVar58) * fVar39;
      fVar80 = 0.0 - (float)(int)(fVar58 * 0.0) * fVar39;
      uVar81 = -(uint)(fVar40 < fVar73);
      uVar86 = -(uint)(fVar40 < fVar78);
      uVar87 = -(uint)(fVar40 < fVar79);
      uVar88 = -(uint)(fVar40 < fVar80);
      fVar73 = (float)((uint)fVar73 ^ ((uint)fVar73 ^ (uint)(fVar42 - fVar73)) & uVar81);
      fVar78 = (float)((uint)fVar78 ^ ((uint)fVar78 ^ (uint)(fVar42 - fVar78)) & uVar86);
      fVar79 = (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)(fVar42 - fVar79)) & uVar87);
      fVar80 = (float)((uint)fVar80 ^ ((uint)fVar80 ^ (uint)(fVar42 - fVar80)) & uVar88);
      uVar89 = -(uint)(fVar73 < fVar52);
      uVar90 = -(uint)(fVar78 < fVar52);
      uVar91 = -(uint)(fVar79 < fVar52);
      uVar92 = -(uint)(fVar80 < fVar52);
      auVar83[0] = (byte)uVar89 | (byte)uVar81;
      auVar83[1] = (byte)(uVar89 >> 8) | (byte)(uVar81 >> 8);
      auVar83[2] = (byte)(uVar89 >> 0x10) | (byte)(uVar81 >> 0x10);
      auVar83[3] = (byte)(uVar89 >> 0x18) | (byte)(uVar81 >> 0x18);
      auVar83[4] = (byte)uVar90 | (byte)uVar86;
      auVar83[5] = (byte)(uVar90 >> 8) | (byte)(uVar86 >> 8);
      auVar83[6] = (byte)(uVar90 >> 0x10) | (byte)(uVar86 >> 0x10);
      auVar83[7] = (byte)(uVar90 >> 0x18) | (byte)(uVar86 >> 0x18);
      auVar83[8] = (byte)uVar91 | (byte)uVar87;
      auVar83[9] = (byte)(uVar91 >> 8) | (byte)(uVar87 >> 8);
      auVar83[10] = (byte)(uVar91 >> 0x10) | (byte)(uVar87 >> 0x10);
      auVar83[0xb] = (byte)(uVar91 >> 0x18) | (byte)(uVar87 >> 0x18);
      auVar83[0xc] = (byte)uVar92 | (byte)uVar88;
      auVar83[0xd] = (byte)(uVar92 >> 8) | (byte)(uVar88 >> 8);
      auVar83[0xe] = (byte)(uVar92 >> 0x10) | (byte)(uVar88 >> 0x10);
      auVar83[0xf] = (byte)(uVar92 >> 0x18) | (byte)(uVar88 >> 0x18);
      fVar73 = (float)((uint)fVar73 ^ ((uint)fVar73 ^ (uint)(fVar53 - fVar73)) & uVar89);
      fVar78 = (float)((uint)fVar78 ^ ((uint)fVar78 ^ (uint)(fVar53 - fVar78)) & uVar90);
      fVar79 = (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)(fVar53 - fVar79)) & uVar91);
      fVar80 = (float)((uint)fVar80 ^ ((uint)fVar80 ^ (uint)(fVar53 - fVar80)) & uVar92);
      fVar44 = fVar73 * fVar73;
      fVar48 = fVar78 * fVar78;
      fVar49 = fVar79 * fVar79;
      fVar50 = fVar80 * fVar80;
      auVar84._0_4_ =
           auVar70._0_4_ +
           fVar44 * (fVar57 + fVar44 * (fVar66 + fVar44 * (fVar56 + fVar44 * (fVar65 + fVar44 * 
                                                  fVar43))));
      auVar84._4_4_ =
           auVar70._4_4_ +
           fVar48 * (fVar57 + fVar48 * (fVar66 + fVar48 * (fVar56 + fVar48 * (fVar65 + fVar48 * 
                                                  fVar43))));
      auVar84._8_4_ =
           auVar70._8_4_ +
           fVar49 * (fVar57 + fVar49 * (fVar66 + fVar49 * (fVar56 + fVar49 * (fVar65 + fVar49 * 
                                                  fVar43))));
      auVar84._12_4_ =
           auVar70._12_4_ +
           fVar50 * (fVar57 + fVar50 * (fVar66 + fVar50 * (fVar56 + fVar50 * (fVar65 + fVar50 * 
                                                  fVar43))));
      uVar74 = *(undefined8 *)(lVar3 + 0x54);
      uVar81 = *(uint *)(lVar3 + 0x5c);
      auVar76._0_4_ =
           fVar73 * (auVar70._0_4_ +
                    fVar44 * (fVar55 + fVar44 * (fVar60 + fVar44 * (fVar54 + fVar44 * (fVar59 + 
                                                  fVar44 * fVar41)))));
      auVar76._4_4_ =
           fVar78 * (auVar70._4_4_ +
                    fVar48 * (fVar55 + fVar48 * (fVar60 + fVar48 * (fVar54 + fVar48 * (fVar59 + 
                                                  fVar48 * fVar41)))));
      auVar76._8_4_ =
           fVar79 * (auVar70._8_4_ +
                    fVar49 * (fVar55 + fVar49 * (fVar60 + fVar49 * (fVar54 + fVar49 * (fVar59 + 
                                                  fVar49 * fVar41)))));
      auVar76._12_4_ =
           fVar80 * (auVar70._12_4_ +
                    fVar50 * (fVar55 + fVar50 * (fVar60 + fVar50 * (fVar54 + fVar50 * (fVar59 + 
                                                  fVar50 * fVar41)))));
      auVar46._0_4_ = -auVar84._0_4_;
      auVar46._4_4_ = -auVar84._4_4_;
      auVar46._8_4_ = -auVar84._8_4_;
      auVar46._12_4_ = -auVar84._12_4_;
      auVar51 = NEON_ext(auVar76,auVar76,8,1);
      auVar84 = auVar84 ^ (auVar84 ^ auVar46) & auVar83;
      fVar50 = auVar84._4_4_;
      auVar47 = NEON_ext(auVar84,auVar84,8,1);
      fVar44 = auVar47._0_4_;
      fVar48 = auVar51._0_4_;
      fVar73 = fVar50 * fVar72;
      fVar78 = (float)uVar18 * 0.0;
      fVar49 = auVar84._0_4_;
      *(ulong *)(puVar2 + 10) = CONCAT44((float)uVar17 * 0.0,auVar76._4_4_ * fVar68);
      *(ulong *)(puVar2 + 8) = CONCAT44(fVar48 * fVar50,fVar44 * fVar50);
      puVar2[0xe] = (uint)(fVar49 * 0.0 * (float)uVar63 + fVar73 * auVar76._0_4_);
      puVar2[0xf] = (uint)(fVar49 * 0.0 * (float)((ulong)uVar63 >> 0x20) + fVar78 * auVar76._0_4_);
      puVar2[0xc] = (uint)(fVar48 * fVar49 * (float)uVar5 + fVar44 * auVar76._4_4_ * auVar76._0_4_);
      puVar2[0xd] = (uint)(fVar44 * fVar49 * (float)((ulong)uVar5 >> 0x20) +
                          fVar48 * auVar76._4_4_ * auVar76._0_4_);
      puVar2[0x12] = (uint)(auVar76._0_4_ * 0.0 * fVar67 + fVar73 * fVar49);
      puVar2[0x13] = (uint)(auVar76._0_4_ * 0.0 * (float)uVar20 + fVar78 * fVar49);
      puVar2[0x10] = (uint)(fVar48 * auVar76._0_4_ * fVar64 + fVar44 * auVar76._4_4_ * fVar49);
      puVar2[0x11] = (uint)(fVar44 * auVar76._0_4_ * (float)uVar19 + fVar48 * auVar76._4_4_ * fVar49
                           );
      *(ulong *)(puVar2 + 0x16) = (ulong)uVar81;
      *(undefined8 *)(puVar2 + 0x14) = uVar74;
    } while ((ulong)uVar4 * 0x60 != lVar38);
  }
  return;
}

