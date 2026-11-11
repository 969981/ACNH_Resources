
void FUN_00593620(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar37;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar73;
  undefined8 uVar71;
  undefined1 auVar72 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar79;
  undefined8 uVar77;
  float fVar80;
  undefined1 auVar78 [16];
  float fVar81;
  float fVar82;
  int iVar83;
  int iVar85;
  undefined1 auVar84 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  undefined8 uVar89;
  float fVar90;
  int iVar91;
  int iVar93;
  undefined1 auVar92 [16];
  undefined8 uVar94;
  undefined8 uVar95;
  undefined1 auVar96 [16];
  undefined8 uVar97;
  undefined1 auVar98 [16];
  int iVar99;
  undefined8 uVar100;
  int iVar102;
  undefined1 auVar101 [16];
  undefined1 auVar103 [16];
  undefined8 uVar104;
  undefined1 auVar105 [16];
  
  lVar8 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar8 != 0) {
    FUN_00443a00(lVar8,"TtUpdate All Vertex Frames (T)");
  }
  uVar3 = *(uint *)(param_2 + 0x20);
  lVar8 = *(long *)(param_2 + 0x18);
  uVar12 = (ulong)*(byte *)(param_2 + 0x24);
  pauVar10 = *(undefined1 (**) [16])(param_2 + 0x40);
  bVar4 = *(byte *)(param_2 + 0x4c);
  puVar16 = *(undefined8 **)(param_2 + 0x58);
  uVar15 = 0;
  uVar13 = (ulong)*(byte *)(param_2 + 100);
  pfVar20 = *(float **)(param_1 + 0x78);
  pfVar18 = *(float **)(param_1 + 0x88);
  if (3 < (int)uVar3) {
    iVar37 = 0;
    lVar9 = ((ulong)bVar4 & 0x3f) * 4;
    pauVar11 = pauVar10;
    puVar17 = puVar16;
    pfVar19 = pfVar18;
    pfVar21 = pfVar20;
    do {
      pauVar10 = (undefined1 (*) [16])(*pauVar11 + lVar9);
      Hint_Prefetch(*pauVar10 + lVar9,0,0,0);
      Hint_Prefetch((long)(*pauVar10 + lVar9) + 0x40,0,0,0);
      lVar23 = *(long *)(param_1 + 0x68);
      uVar22 = uVar15 & 0xffff;
      auVar66 = *(undefined1 (*) [16])(*pauVar11 + bVar4);
      uVar14 = (uint)uVar15;
      auVar96 = *(undefined1 (*) [16])(*pauVar11 + ((ulong)((uint)bVar4 * 2) & 0xfe));
      uVar24 = (ulong)(uVar14 | 1) & 0xffff;
      auVar101 = *(undefined1 (*) [16])(*pauVar11 + ((ulong)((uint)bVar4 * 2 + (uint)bVar4) & 0xff))
      ;
      uVar25 = (ulong)(uVar14 | 2) & 0xffff;
      pfVar20 = (float *)(lVar8 + uVar22 * uVar12);
      pfVar18 = (float *)(lVar8 + uVar24 * uVar12);
      uVar26 = (ulong)(uVar14 | 3) & 0xffff;
      uVar15 = (ulong)(uVar14 + 4);
      pfVar5 = (float *)(lVar8 + uVar25 * uVar12);
      puVar16 = (undefined8 *)(lVar8 + uVar26 * uVar12);
      uVar77 = puVar16[1];
      uVar71 = *puVar16;
      puVar16 = (undefined8 *)(lVar8 + *(ushort *)(lVar23 + uVar22 * 2) * uVar12);
      uVar89 = puVar16[1];
      uVar94 = *puVar16;
      pfVar6 = (float *)(lVar8 + *(ushort *)(lVar23 + uVar24 * 2) * uVar12);
      fVar61 = (float)uVar94 - *pfVar20;
      fVar62 = (float)((ulong)uVar94 >> 0x20) - pfVar20[1];
      fVar63 = (float)uVar89 - pfVar20[2];
      fVar64 = (float)((ulong)uVar89 >> 0x20) - pfVar20[3];
      auVar87 = *pauVar11;
      auVar103 = NEON_ext(auVar66,auVar66,4,1);
      pfVar7 = (float *)(lVar8 + *(ushort *)(lVar23 + uVar25 * 2) * uVar12);
      auVar105 = NEON_ext(auVar103,auVar103,8,1);
      pfVar20 = (float *)(lVar8 + *(ushort *)(lVar23 + uVar26 * 2) * uVar12);
      uVar104 = NEON_rev64(auVar105._0_8_,4);
      Hint_Prefetch(pfVar21 + 8,0,0,0);
      fVar27 = auVar66._0_4_;
      auVar72._0_4_ = fVar27 * (*pfVar6 - *pfVar18);
      fVar28 = auVar66._4_4_;
      auVar72._4_4_ = fVar28 * (pfVar6[1] - pfVar18[1]);
      fVar65 = auVar66._8_4_;
      auVar72._8_4_ = fVar65 * (pfVar6[2] - pfVar18[2]);
      fVar70 = auVar66._12_4_;
      auVar72._12_4_ = fVar70 * (pfVar6[3] - pfVar18[3]);
      Hint_Prefetch(pfVar21 + 0x18,0,0,0);
      Hint_Prefetch(pfVar19 + 8,0,0,0);
      fVar43 = *pfVar20 - (float)uVar71;
      fVar45 = pfVar20[1] - (float)((ulong)uVar71 >> 0x20);
      fVar47 = pfVar20[2] - (float)uVar77;
      fVar48 = pfVar20[3] - (float)((ulong)uVar77 >> 0x20);
      auVar78 = NEON_ext(auVar72,auVar72,8,1);
      fVar76 = auVar87._0_4_;
      fVar53 = fVar76 * fVar61;
      fVar40 = auVar87._4_4_;
      fVar56 = fVar40 * fVar62;
      fVar41 = auVar87._8_4_;
      fVar58 = fVar41 * fVar63;
      fVar42 = auVar87._12_4_;
      fVar60 = fVar42 * fVar64;
      auVar66._4_4_ = fVar56;
      auVar66._0_4_ = fVar53;
      auVar66._8_4_ = fVar58;
      auVar66._12_4_ = fVar60;
      auVar105._4_4_ = fVar56;
      auVar105._0_4_ = fVar53;
      auVar105._8_4_ = fVar58;
      auVar105._12_4_ = fVar60;
      auVar66 = NEON_ext(auVar66,auVar105,8,1);
      fVar58 = auVar96._0_4_;
      auVar84._0_4_ = fVar58 * (*pfVar7 - *pfVar5);
      fVar60 = auVar96._4_4_;
      auVar84._4_4_ = fVar60 * (pfVar7[1] - pfVar5[1]);
      fVar46 = auVar96._8_4_;
      auVar84._8_4_ = fVar46 * (pfVar7[2] - pfVar5[2]);
      fVar30 = auVar96._12_4_;
      auVar84._12_4_ = fVar30 * (pfVar7[3] - pfVar5[3]);
      auVar105 = NEON_ext(auVar84,auVar84,8,1);
      fVar54 = auVar66._0_4_ + fVar53 + fVar56;
      fVar56 = auVar101._0_4_;
      auVar92._0_4_ = fVar56 * fVar43;
      fVar34 = auVar101._4_4_;
      auVar92._4_4_ = fVar34 * fVar45;
      fVar35 = auVar101._8_4_;
      auVar92._8_4_ = fVar35 * fVar47;
      fVar36 = auVar101._12_4_;
      auVar92._12_4_ = fVar36 * fVar48;
      fVar67 = auVar78._0_4_ + auVar72._0_4_ + auVar72._4_4_;
      fVar74 = auVar105._0_4_ + auVar84._0_4_ + auVar84._4_4_;
      auVar66 = NEON_ext(auVar92,auVar92,8,1);
      fVar68 = auVar66._0_4_ + auVar92._0_4_ + auVar92._4_4_;
      fVar61 = fVar61 - fVar76 * fVar54;
      fVar62 = fVar62 - fVar40 * fVar54;
      fVar63 = fVar63 - fVar41 * fVar54;
      Hint_Prefetch(pfVar19 + 0x18,0,0,0);
      fVar55 = (*pfVar6 - *pfVar18) - fVar27 * fVar67;
      fVar57 = (pfVar6[1] - pfVar18[1]) - fVar28 * fVar67;
      fVar59 = (pfVar6[2] - pfVar18[2]) - fVar65 * fVar67;
      puVar16 = (undefined8 *)((long)puVar17 + uVar13 * 4);
      fVar43 = fVar43 - fVar56 * fVar68;
      fVar45 = fVar45 - fVar34 * fVar68;
      fVar47 = fVar47 - fVar35 * fVar68;
      pfVar20 = pfVar21 + 4;
      iVar37 = iVar37 + 1;
      fVar49 = (*pfVar7 - *pfVar5) - fVar58 * fVar74;
      fVar51 = (pfVar7[1] - pfVar5[1]) - fVar60 * fVar74;
      fVar52 = (pfVar7[2] - pfVar5[2]) - fVar46 * fVar74;
      fVar69 = fVar61 * fVar61 + fVar62 * fVar62 + fVar63 * fVar63;
      fVar73 = fVar61 * fVar61 + fVar62 * fVar62 + fVar63 * fVar63;
      uVar71 = CONCAT44(fVar73,fVar69);
      fVar75 = fVar55 * fVar55 + fVar57 * fVar57 + fVar59 * fVar59;
      fVar79 = fVar55 * fVar55 + fVar57 * fVar57 + fVar59 * fVar59;
      uVar77 = CONCAT44(fVar79,fVar75);
      fVar81 = fVar52 * fVar52 + fVar49 * fVar49 + fVar51 * fVar51;
      fVar82 = fVar52 * fVar52 + fVar49 * fVar49 + fVar51 * fVar51;
      uVar94 = CONCAT44(fVar82,fVar81);
      auVar86 = NEON_ext(auVar87,auVar87,4,1);
      fVar53 = *pfVar21;
      auVar66 = NEON_ext(auVar86,auVar86,8,1);
      uVar89 = NEON_frsqrte(uVar71,4);
      uVar97 = NEON_frsqrte(uVar77,4);
      iVar83 = -(uint)(fVar69 <= 0.0);
      iVar85 = -(uint)(fVar73 <= 0.0);
      fVar73 = (float)uVar97;
      fVar80 = (float)((ulong)uVar97 >> 0x20);
      iVar91 = -(uint)(fVar75 <= 0.0);
      iVar93 = -(uint)(fVar79 <= 0.0);
      uVar77 = NEON_frsqrts(uVar77,CONCAT44(fVar80 * fVar80,fVar73 * fVar73),4);
      iVar99 = -(uint)(fVar81 <= 0.0);
      iVar102 = -(uint)(fVar82 <= 0.0);
      uVar97 = NEON_rev64(auVar66._0_8_,4);
      fVar69 = (float)uVar89;
      fVar75 = (float)((ulong)uVar89 >> 0x20);
      uVar71 = NEON_frsqrts(uVar71,CONCAT44(fVar75 * fVar75,fVar69 * fVar69),4);
      uVar89 = NEON_frsqrte(uVar94,4);
      fVar81 = (float)uVar89;
      fVar82 = (float)((ulong)uVar89 >> 0x20);
      fVar69 = fVar69 * (float)uVar71;
      fVar75 = fVar75 * (float)((ulong)uVar71 >> 0x20);
      uVar71 = NEON_frsqrts(uVar94,CONCAT44(fVar82 * fVar82,fVar81 * fVar81),4);
      fVar73 = fVar73 * (float)uVar77;
      fVar80 = fVar80 * (float)((ulong)uVar77 >> 0x20);
      fVar88 = fVar47 * fVar47 + fVar43 * fVar43 + fVar45 * fVar45;
      fVar90 = fVar47 * fVar47 + fVar43 * fVar43 + fVar45 * fVar45;
      uVar77 = CONCAT44(fVar90,fVar88);
      auVar98 = NEON_ext(auVar96,auVar96,4,1);
      fVar81 = fVar81 * (float)uVar71;
      fVar82 = fVar82 * (float)((ulong)uVar71 >> 0x20);
      auVar66 = NEON_ext(auVar98,auVar98,8,1);
      fVar79 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                               CONCAT12((byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar73 >> 8) &
                                                  ~(byte)((uint)iVar91 >> 8),
                                                  SUB41(fVar73,0) & ~(byte)iVar91)));
      uVar71 = NEON_frsqrte(uVar77,4);
      uVar94 = NEON_rev64(auVar66._0_8_,4);
      fVar73 = (float)CONCAT13((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                               CONCAT12((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar69 >> 8) &
                                                  ~(byte)((uint)iVar83 >> 8),
                                                  SUB41(fVar69,0) & ~(byte)iVar83)));
      iVar83 = -(uint)(fVar88 <= 0.0);
      iVar91 = -(uint)(fVar90 <= 0.0);
      fVar88 = (float)uVar71;
      fVar90 = (float)((ulong)uVar71 >> 0x20);
      uVar71 = NEON_frsqrts(uVar77,CONCAT44(fVar90 * fVar90,fVar88 * fVar88),4);
      fVar61 = fVar61 * fVar73;
      fVar69 = (float)(CONCAT17((byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18),
                                CONCAT16((byte)((uint)fVar75 >> 0x10) &
                                         ~(byte)((uint)iVar85 >> 0x10),
                                         CONCAT15((byte)((uint)fVar75 >> 8) &
                                                  ~(byte)((uint)iVar85 >> 8),
                                                  CONCAT14(SUB41(fVar75,0) & ~(byte)iVar85,fVar73)))
                               ) >> 0x20);
      fVar62 = fVar62 * fVar69;
      fVar63 = fVar63 * fVar73;
      fVar69 = (fVar64 - fVar42 * fVar54) * fVar69;
      auVar87._4_4_ = fVar62;
      auVar87._0_4_ = fVar61;
      auVar87._8_4_ = fVar63;
      auVar87._12_4_ = fVar69;
      auVar78._4_4_ = fVar62;
      auVar78._0_4_ = fVar61;
      auVar78._8_4_ = fVar63;
      auVar78._12_4_ = fVar69;
      auVar66 = NEON_ext(auVar87,auVar78,4,1);
      fVar55 = fVar55 * fVar79;
      fVar54 = (float)(CONCAT17((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                CONCAT16((byte)((uint)fVar80 >> 0x10) &
                                         ~(byte)((uint)iVar93 >> 0x10),
                                         CONCAT15((byte)((uint)fVar80 >> 8) &
                                                  ~(byte)((uint)iVar93 >> 8),
                                                  CONCAT14(SUB41(fVar80,0) & ~(byte)iVar93,fVar79)))
                               ) >> 0x20);
      fVar57 = fVar57 * fVar54;
      fVar59 = fVar59 * fVar79;
      fVar54 = ((pfVar6[3] - pfVar18[3]) - fVar70 * fVar67) * fVar54;
      fVar88 = fVar88 * (float)uVar71;
      fVar90 = fVar90 * (float)((ulong)uVar71 >> 0x20);
      fVar64 = (float)CONCAT13((byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18),
                               CONCAT12((byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar81 >> 8) &
                                                  ~(byte)((uint)iVar99 >> 8),
                                                  SUB41(fVar81,0) & ~(byte)iVar99)));
      auVar50._0_4_ = fVar49 * fVar64;
      fVar49 = (float)(CONCAT17((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18),
                                CONCAT16((byte)((uint)fVar82 >> 0x10) &
                                         ~(byte)((uint)iVar102 >> 0x10),
                                         CONCAT15((byte)((uint)fVar82 >> 8) &
                                                  ~(byte)((uint)iVar102 >> 8),
                                                  CONCAT14(SUB41(fVar82,0) & ~(byte)iVar102,fVar64))
                                        )) >> 0x20);
      auVar50._4_4_ = fVar51 * fVar49;
      auVar50._8_4_ = fVar52 * fVar64;
      auVar50._12_4_ = ((pfVar7[3] - pfVar5[3]) - fVar30 * fVar74) * fVar49;
      auVar105 = NEON_ext(auVar66,auVar66,8,1);
      auVar87 = NEON_ext(auVar50,auVar50,4,1);
      uVar71 = NEON_rev64(auVar105._0_8_,4);
      fVar49 = pfVar21[1];
      fVar51 = (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                               CONCAT12((byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar88 >> 8) &
                                                  ~(byte)((uint)iVar83 >> 8),
                                                  SUB41(fVar88,0) & ~(byte)iVar83)));
      auVar78 = NEON_ext(auVar101,auVar101,4,1);
      auVar96._4_4_ = fVar57;
      auVar96._0_4_ = fVar55;
      auVar96._8_4_ = fVar59;
      auVar96._12_4_ = fVar54;
      auVar101._4_4_ = fVar57;
      auVar101._0_4_ = fVar55;
      auVar101._8_4_ = fVar59;
      auVar101._12_4_ = fVar54;
      auVar105 = NEON_ext(auVar96,auVar101,4,1);
      auVar96 = NEON_ext(auVar78,auVar78,8,1);
      auVar101 = NEON_ext(auVar105,auVar105,8,1);
      uVar77 = NEON_rev64(auVar96._0_8_,4);
      auVar44._0_4_ = fVar43 * fVar51;
      fVar43 = (float)(CONCAT17((byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                                CONCAT16((byte)((uint)fVar90 >> 0x10) &
                                         ~(byte)((uint)iVar91 >> 0x10),
                                         CONCAT15((byte)((uint)fVar90 >> 8) &
                                                  ~(byte)((uint)iVar91 >> 8),
                                                  CONCAT14(SUB41(fVar90,0) & ~(byte)iVar91,fVar51)))
                               ) >> 0x20);
      auVar44._4_4_ = fVar45 * fVar43;
      auVar44._8_4_ = fVar47 * fVar51;
      auVar44._12_4_ = (fVar48 - fVar36 * fVar68) * fVar43;
      uVar100 = NEON_rev64(auVar101._0_8_,4);
      auVar96 = NEON_ext(auVar87,auVar87,8,1);
      uVar89 = NEON_rev64(auVar96._0_8_,4);
      puVar1 = (undefined8 *)((long)puVar17 + uVar13 * 3);
      auVar92 = NEON_ext(auVar44,auVar44,4,1);
      auVar96 = NEON_ext(auVar92,auVar92,8,1);
      uVar95 = NEON_rev64(auVar96._0_8_,4);
      auVar38._0_4_ = fVar76 * auVar66._0_4_ - auVar86._0_4_ * fVar61;
      auVar38._4_4_ = fVar40 * auVar66._4_4_ - auVar86._4_4_ * fVar62;
      auVar38._8_4_ = fVar41 * (float)uVar71 - (float)uVar97 * fVar63;
      auVar38._12_4_ =
           fVar42 * (float)((ulong)uVar71 >> 0x20) - (float)((ulong)uVar97 >> 0x20) * fVar69;
      auVar86._0_4_ = fVar27 * auVar105._0_4_ - auVar103._0_4_ * fVar55;
      auVar86._4_4_ = fVar28 * auVar105._4_4_ - auVar103._4_4_ * fVar57;
      auVar86._8_4_ = fVar65 * (float)uVar100 - (float)uVar104 * fVar59;
      auVar86._12_4_ =
           fVar70 * (float)((ulong)uVar100 >> 0x20) - (float)((ulong)uVar104 >> 0x20) * fVar54;
      fVar70 = pfVar21[2];
      fVar76 = pfVar21[3];
      puVar2 = (undefined8 *)((long)puVar17 + uVar13 * 2);
      auVar101 = NEON_ext(auVar86,auVar86,4,1);
      auVar96 = NEON_ext(auVar38,auVar38,4,1);
      auVar103._0_4_ = fVar58 * auVar87._0_4_ - auVar98._0_4_ * auVar50._0_4_;
      auVar103._4_4_ = fVar60 * auVar87._4_4_ - auVar98._4_4_ * auVar50._4_4_;
      auVar103._8_4_ = fVar46 * (float)uVar89 - (float)uVar94 * auVar50._8_4_;
      auVar103._12_4_ =
           fVar30 * (float)((ulong)uVar89 >> 0x20) - (float)((ulong)uVar94 >> 0x20) * auVar50._12_4_
      ;
      fVar27 = *pfVar19;
      auVar105 = NEON_ext(auVar103,auVar103,4,1);
      fVar28 = pfVar19[1];
      pfVar18 = pfVar19 + 4;
      auVar98._0_4_ = fVar56 * auVar92._0_4_ - auVar78._0_4_ * auVar44._0_4_;
      auVar98._4_4_ = fVar34 * auVar92._4_4_ - auVar78._4_4_ * auVar44._4_4_;
      auVar98._8_4_ = fVar35 * (float)uVar95 - (float)uVar77 * auVar44._8_4_;
      auVar98._12_4_ =
           fVar36 * (float)((ulong)uVar95 >> 0x20) - (float)((ulong)uVar77 >> 0x20) * auVar44._12_4_
      ;
      auVar66 = NEON_ext(auVar98,auVar98,4,1);
      fVar65 = pfVar19[2];
      fVar58 = pfVar19[3];
      lVar23 = (long)puVar16 + uVar13 * 4;
      Hint_Prefetch(lVar23,0,0,0);
      Hint_Prefetch(lVar23 + 0x40,0,0,0);
      *puVar17 = CONCAT44(fVar62 * fVar53 + auVar96._4_4_ * fVar27,
                          fVar61 * fVar53 + auVar96._0_4_ * fVar27);
      *(float *)(puVar17 + 1) = fVar63 * fVar53 + auVar38._0_4_ * fVar27;
      *(undefined8 *)((long)puVar17 + uVar13) =
           CONCAT44(fVar57 * fVar49 + auVar101._4_4_ * fVar28,
                    fVar55 * fVar49 + auVar101._0_4_ * fVar28);
      *(float *)((undefined8 *)((long)puVar17 + uVar13) + 1) =
           fVar59 * fVar49 + auVar86._0_4_ * fVar28;
      *puVar2 = CONCAT44(auVar50._4_4_ * fVar70 + auVar105._4_4_ * fVar65,
                         auVar50._0_4_ * fVar70 + auVar105._0_4_ * fVar65);
      *(float *)(puVar2 + 1) = auVar50._8_4_ * fVar70 + auVar103._0_4_ * fVar65;
      *puVar1 = CONCAT44(auVar44._4_4_ * fVar76 + auVar66._4_4_ * fVar58,
                         auVar44._0_4_ * fVar76 + auVar66._0_4_ * fVar58);
      *(float *)(puVar1 + 1) = auVar44._8_4_ * fVar76 + auVar98._0_4_ * fVar58;
      pauVar11 = pauVar10;
      puVar17 = puVar16;
      pfVar19 = pfVar18;
      pfVar21 = pfVar20;
    } while (iVar37 < (int)uVar3 >> 2);
  }
  if ((uVar3 & 3) != 0) {
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 1;
      pfVar21 = (float *)(lVar8 + (uVar15 & 0xffff) * uVar12);
      pfVar5 = (float *)(lVar8 + *(ushort *)(*(long *)(param_1 + 0x68) + (uVar15 & 0xffff) * 2) *
                                 uVar12);
      uVar15 = (ulong)((int)uVar15 + 1);
      auVar66 = *pauVar10;
      pauVar10 = (undefined1 (*) [16])(*pauVar10 + bVar4);
      fVar53 = auVar66._0_4_;
      auVar31._0_4_ = fVar53 * (*pfVar5 - *pfVar21);
      fVar27 = auVar66._4_4_;
      auVar31._4_4_ = fVar27 * (pfVar5[1] - pfVar21[1]);
      fVar28 = auVar66._8_4_;
      auVar31._8_4_ = fVar28 * (pfVar5[2] - pfVar21[2]);
      fVar65 = auVar66._12_4_;
      auVar31._12_4_ = fVar65 * (pfVar5[3] - pfVar21[3]);
      auVar105 = NEON_ext(auVar31,auVar31,8,1);
      fVar70 = auVar31._0_4_ + auVar31._4_4_ + auVar105._0_4_;
      pfVar19 = (float *)(puVar16 + 1);
      auVar33._0_4_ = (*pfVar5 - *pfVar21) - fVar53 * fVar70;
      auVar33._4_4_ = (pfVar5[1] - pfVar21[1]) - fVar27 * fVar70;
      auVar33._8_4_ = (pfVar5[2] - pfVar21[2]) - fVar28 * fVar70;
      auVar33._12_4_ = (pfVar5[3] - pfVar21[3]) - fVar65 * fVar70;
      fVar70 = auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ +
               auVar33._8_4_ * auVar33._8_4_;
      fVar58 = auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ +
               auVar33._8_4_ * auVar33._8_4_;
      uVar71 = CONCAT44(fVar58,fVar70);
      uVar77 = NEON_frsqrte(uVar71,4);
      fVar60 = (float)uVar77;
      fVar46 = (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(uVar71,CONCAT44(fVar46 * fVar46,fVar60 * fVar60),4);
      fVar60 = fVar60 * (float)uVar77;
      fVar46 = fVar46 * (float)((ulong)uVar77 >> 0x20);
      uVar71 = NEON_frsqrts(uVar71,CONCAT44(fVar46 * fVar46,fVar60 * fVar60),4);
      iVar37 = -(uint)(fVar70 <= 0.0);
      iVar83 = -(uint)(fVar58 <= 0.0);
      auVar32._0_8_ = CONCAT44(-(uint)(0.0 < fVar58),-(uint)(0.0 < fVar70));
      auVar32._8_8_ = auVar32._0_8_;
      fVar60 = (float)uVar71 * fVar60;
      fVar46 = (float)((ulong)uVar71 >> 0x20) * fVar46;
      fVar70 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                               CONCAT12((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar60 >> 8) &
                                                  ~(byte)((uint)iVar37 >> 8),
                                                  SUB41(fVar60,0) & ~(byte)iVar37)));
      auVar96 = NEON_ext(auVar66,auVar66,4,1);
      auVar39._0_4_ = auVar33._0_4_ * fVar70;
      fVar58 = (float)(CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                                CONCAT16((byte)((uint)fVar46 >> 0x10) &
                                         ~(byte)((uint)iVar83 >> 0x10),
                                         CONCAT15((byte)((uint)fVar46 >> 8) &
                                                  ~(byte)((uint)iVar83 >> 8),
                                                  CONCAT14(SUB41(fVar46,0) & ~(byte)iVar83,fVar70)))
                               ) >> 0x20);
      auVar39._4_4_ = auVar33._4_4_ * fVar58;
      auVar39._8_4_ = auVar33._8_4_ * fVar70;
      auVar39._12_4_ = auVar33._12_4_ * fVar58;
      auVar33 = auVar33 ^ (auVar33 ^ auVar39) & auVar32;
      auVar66 = NEON_ext(auVar33,auVar33,4,1);
      auVar105 = NEON_ext(auVar96,auVar96,8,1);
      uVar71 = NEON_rev64(auVar105._0_8_,4);
      auVar105 = NEON_ext(auVar66,auVar66,8,1);
      uVar77 = NEON_rev64(auVar105._0_8_,4);
      auVar29._0_4_ = fVar53 * auVar66._0_4_ - auVar96._0_4_ * auVar33._0_4_;
      auVar29._4_4_ = fVar27 * auVar66._4_4_ - auVar96._4_4_ * auVar33._4_4_;
      auVar29._8_4_ = fVar28 * (float)uVar77 - (float)uVar71 * auVar33._8_4_;
      auVar29._12_4_ =
           fVar65 * (float)((ulong)uVar77 >> 0x20) - (float)((ulong)uVar71 >> 0x20) * auVar33._12_4_
      ;
      auVar66 = NEON_ext(auVar29,auVar29,4,1);
      fVar53 = *pfVar20;
      pfVar20 = pfVar20 + 1;
      fVar27 = *pfVar18;
      pfVar18 = pfVar18 + 1;
      *puVar16 = CONCAT44(fVar53 * auVar33._4_4_ + fVar27 * auVar66._4_4_,
                          fVar53 * auVar33._0_4_ + fVar27 * auVar66._0_4_);
      puVar16 = (undefined8 *)((long)puVar16 + uVar13);
      *pfVar19 = fVar53 * auVar33._8_4_ + fVar27 * auVar29._0_4_;
    } while ((uVar14 & 0xff) < (uVar3 & 3));
  }
  lVar8 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar8 == 0) {
    return;
  }
  FUN_00443a70(lVar8,&DAT_04085310);
  return;
}

