
void FUN_0059a230(long param_1,long param_2)

{
  ushort *puVar1;
  long lVar2;
  ushort *puVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined1 (*pauVar14) [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  long lVar40;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar53;
  float fVar56;
  float fVar57;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  float fVar58;
  float fVar59;
  int iVar60;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float fVar73;
  float fVar74;
  undefined1 auVar72 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar82;
  float fVar83;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar84;
  float fVar85;
  float fVar89;
  float fVar90;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar91;
  float fVar93;
  float fVar94;
  undefined1 auVar92 [16];
  float fVar95;
  int iVar96;
  int iVar100;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  int iVar101;
  int iVar105;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  int iVar106;
  int iVar108;
  undefined1 auVar107 [16];
  int iVar109;
  int iVar111;
  undefined1 auVar110 [16];
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  float fVar120;
  float fVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  float fVar125;
  undefined1 auVar124 [16];
  float fVar126;
  float fVar127;
  float fVar129;
  float fVar130;
  undefined1 auVar128 [16];
  float fVar131;
  float fVar134;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined8 uVar135;
  undefined8 uVar136;
  undefined8 uVar137;
  undefined1 auVar138 [16];
  undefined8 uVar139;
  
  lVar19 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar19 != 0) {
    FUN_00443a00(lVar19,"TtUpdate Some Vertex Frames (TB)");
  }
  uVar5 = *(uint *)(param_1 + 0x70);
  lVar19 = *(long *)(param_2 + 0x18);
  uVar31 = (ulong)*(byte *)(param_2 + 0x24);
  lVar32 = *(long *)(param_2 + 0x40);
  uVar33 = (ulong)*(byte *)(param_2 + 0x4c);
  lVar34 = *(long *)(param_2 + 0x58);
  uVar39 = uVar5 + 3;
  if (-1 < (int)uVar5) {
    uVar39 = uVar5;
  }
  uVar35 = (ulong)*(byte *)(param_2 + 100);
  lVar36 = *(long *)(param_2 + 0x70);
  uVar37 = (ulong)*(byte *)(param_2 + 0x7c);
  if ((int)uVar5 < 4) {
    uVar38 = 0;
  }
  else {
    uVar38 = 0;
    iVar60 = (int)uVar39 >> 2;
    lVar40 = 0xc;
    lVar20 = 6;
    do {
      lVar30 = *(long *)(param_1 + 0x58);
      puVar1 = (ushort *)(*(long *)(param_1 + 0x68) + lVar20);
      lVar2 = *(long *)(param_1 + 0x68) + uVar38 * 2;
      lVar27 = *(long *)(param_1 + 0x98) + uVar38 * 2;
      puVar3 = (ushort *)(*(long *)(param_1 + 0x98) + lVar20);
      lVar20 = lVar20 + 8;
      iVar60 = iVar60 + -1;
      uVar25 = (ulong)*(ushort *)(lVar30 + (ulong)puVar1[-3] * 2);
      uVar23 = (ulong)*(ushort *)(lVar30 + (ulong)*(ushort *)(lVar2 + 2) * 2);
      uVar22 = (ulong)*(ushort *)(lVar30 + (ulong)*(ushort *)(lVar2 + 4) * 2);
      uVar21 = (ulong)*(ushort *)(lVar30 + (ulong)*puVar1 * 2);
      pfVar6 = (float *)(lVar19 + *(ushort *)(lVar27 + 4) * uVar31);
      pfVar7 = (float *)(lVar19 + puVar3[-3] * uVar31);
      pfVar8 = (float *)(lVar19 + *puVar3 * uVar31);
      pfVar9 = (float *)(lVar19 + *(ushort *)(lVar27 + 2) * uVar31);
      pfVar4 = (float *)(*(long *)(param_1 + 0xa8) + lVar40);
      auVar124 = *(undefined1 (*) [16])(lVar32 + uVar25 * uVar33);
      auVar138 = *(undefined1 (*) [16])(lVar32 + uVar23 * uVar33);
      auVar65 = *(undefined1 (*) [16])(lVar32 + uVar22 * uVar33);
      pfVar10 = (float *)(lVar19 + uVar25 * uVar31);
      pfVar11 = (float *)(lVar19 + uVar23 * uVar31);
      pfVar12 = (float *)(lVar19 + uVar22 * uVar31);
      pfVar13 = (float *)(lVar19 + uVar21 * uVar31);
      pauVar14 = (undefined1 (*) [12])(lVar32 + uVar21 * uVar33);
      fVar49 = (float)*(undefined8 *)(*pauVar14 + 8);
      fVar50 = (float)((ulong)*(undefined8 *)(*pauVar14 + 8) >> 0x20);
      fVar45 = (float)*(undefined8 *)*pauVar14;
      fVar48 = (float)((ulong)*(undefined8 *)*pauVar14 >> 0x20);
      lVar27 = uVar38 * 4;
      fVar47 = auVar138._0_4_;
      auVar86._0_4_ = fVar47 * (*pfVar9 - *pfVar11);
      fVar53 = auVar138._4_4_;
      auVar86._4_4_ = fVar53 * (pfVar9[1] - pfVar11[1]);
      fVar56 = auVar138._8_4_;
      auVar86._8_4_ = fVar56 * (pfVar9[2] - pfVar11[2]);
      fVar57 = auVar138._12_4_;
      auVar86._12_4_ = fVar57 * (pfVar9[3] - pfVar11[3]);
      uVar38 = uVar38 + 4;
      auVar97 = NEON_ext(auVar86,auVar86,8,1);
      fVar54 = auVar124._0_4_;
      auVar72._0_4_ = fVar54 * (*pfVar7 - *pfVar10);
      fVar55 = auVar124._4_4_;
      auVar72._4_4_ = fVar55 * (pfVar7[1] - pfVar10[1]);
      fVar44 = auVar124._8_4_;
      auVar72._8_4_ = fVar44 * (pfVar7[2] - pfVar10[2]);
      fVar46 = auVar124._12_4_;
      auVar72._12_4_ = fVar46 * (pfVar7[3] - pfVar10[3]);
      auVar78 = NEON_ext(auVar72,auVar72,8,1);
      fVar58 = auVar65._0_4_;
      auVar102._0_4_ = fVar58 * (*pfVar6 - *pfVar12);
      fVar62 = auVar65._4_4_;
      auVar102._4_4_ = fVar62 * (pfVar6[1] - pfVar12[1]);
      fVar63 = auVar65._8_4_;
      auVar102._8_4_ = fVar63 * (pfVar6[2] - pfVar12[2]);
      fVar64 = auVar65._12_4_;
      auVar102._12_4_ = fVar64 * (pfVar6[3] - pfVar12[3]);
      auVar107 = NEON_ext(auVar102,auVar102,8,1);
      fVar70 = auVar78._0_4_ + auVar72._0_4_ + auVar72._4_4_;
      auVar79._0_4_ = fVar45 * (*pfVar8 - *pfVar13);
      auVar79._4_4_ = fVar48 * (pfVar8[1] - pfVar13[1]);
      auVar79._8_4_ = fVar49 * (pfVar8[2] - pfVar13[2]);
      auVar79._12_4_ = fVar50 * (pfVar8[3] - pfVar13[3]);
      fVar84 = auVar97._0_4_ + auVar86._0_4_ + auVar86._4_4_;
      fVar95 = auVar107._0_4_ + auVar102._0_4_ + auVar102._4_4_;
      auVar78 = NEON_ext(auVar79,auVar79,8,1);
      fVar75 = auVar78._0_4_ + auVar79._0_4_ + auVar79._4_4_;
      lVar2 = *(long *)(param_1 + 0xa8) + lVar27;
      fVar85 = (*pfVar9 - *pfVar11) - fVar47 * fVar84;
      fVar89 = (pfVar9[1] - pfVar11[1]) - fVar53 * fVar84;
      fVar90 = (pfVar9[2] - pfVar11[2]) - fVar56 * fVar84;
      fVar76 = (*pfVar7 - *pfVar10) - fVar54 * fVar70;
      fVar82 = (pfVar7[1] - pfVar10[1]) - fVar55 * fVar70;
      fVar83 = (pfVar7[2] - pfVar10[2]) - fVar44 * fVar70;
      fVar71 = (*pfVar6 - *pfVar12) - fVar58 * fVar95;
      fVar73 = (pfVar6[1] - pfVar12[1]) - fVar62 * fVar95;
      fVar74 = (pfVar6[2] - pfVar12[2]) - fVar63 * fVar95;
      fVar66 = fVar76 * fVar76 + fVar82 * fVar82 + fVar83 * fVar83;
      fVar67 = fVar76 * fVar76 + fVar82 * fVar82 + fVar83 * fVar83;
      uVar123 = CONCAT44(fVar67,fVar66);
      fVar91 = (*pfVar8 - *pfVar13) - fVar45 * fVar75;
      fVar93 = (pfVar8[1] - pfVar13[1]) - fVar48 * fVar75;
      fVar94 = (pfVar8[2] - pfVar13[2]) - fVar49 * fVar75;
      fVar126 = fVar85 * fVar85 + fVar89 * fVar89 + fVar90 * fVar90;
      fVar129 = fVar85 * fVar85 + fVar89 * fVar89 + fVar90 * fVar90;
      uVar136 = CONCAT44(fVar129,fVar126);
      fVar131 = fVar74 * fVar74 + fVar71 * fVar71 + fVar73 * fVar73;
      fVar134 = fVar74 * fVar74 + fVar71 * fVar71 + fVar73 * fVar73;
      uVar135 = CONCAT44(fVar134,fVar131);
      uVar122 = NEON_frsqrte(uVar123,4);
      uVar68 = NEON_frsqrte(uVar136,4);
      fVar121 = (float)uVar122;
      fVar125 = (float)((ulong)uVar122 >> 0x20);
      fVar127 = (float)uVar68;
      fVar130 = (float)((ulong)uVar68 >> 0x20);
      fVar77 = fVar94 * fVar94 + fVar91 * fVar91 + fVar93 * fVar93;
      fVar120 = fVar94 * fVar94 + fVar91 * fVar91 + fVar93 * fVar93;
      uVar112 = (undefined1)((uint)fVar120 >> 8);
      uVar113 = (undefined1)((uint)fVar120 >> 0x10);
      uVar114 = (undefined1)((uint)fVar120 >> 0x18);
      uVar122 = NEON_frsqrts(uVar123,CONCAT44(fVar125 * fVar125,fVar121 * fVar121),4);
      iVar101 = -(uint)(fVar126 <= 0.0);
      iVar105 = -(uint)(fVar129 <= 0.0);
      uVar68 = NEON_frsqrts(uVar136,CONCAT44(fVar130 * fVar130,fVar127 * fVar127),4);
      uVar136 = NEON_frsqrte(CONCAT17(uVar114,CONCAT16(uVar113,CONCAT15(uVar112,CONCAT14(SUB41(
                                                  fVar120,0),fVar77)))),4);
      uVar123 = NEON_frsqrte(uVar135,4);
      fVar121 = fVar121 * (float)uVar122;
      fVar125 = fVar125 * (float)((ulong)uVar122 >> 0x20);
      fVar126 = (float)uVar136;
      fVar129 = (float)((ulong)uVar136 >> 0x20);
      fVar59 = (float)uVar123;
      fVar43 = (float)((ulong)uVar123 >> 0x20);
      iVar109 = -(uint)(fVar77 <= 0.0);
      iVar111 = -(uint)(fVar120 <= 0.0);
      uVar123 = NEON_frsqrts(CONCAT17(uVar114,CONCAT16(uVar113,CONCAT15(uVar112,CONCAT14(SUB41(
                                                  fVar120,0),fVar77)))),
                             CONCAT44(fVar129 * fVar129,fVar126 * fVar126),4);
      iVar96 = -(uint)(fVar66 <= 0.0);
      iVar100 = -(uint)(fVar67 <= 0.0);
      iVar106 = -(uint)(fVar131 <= 0.0);
      iVar108 = -(uint)(fVar134 <= 0.0);
      uVar122 = NEON_frsqrts(uVar135,CONCAT44(fVar43 * fVar43,fVar59 * fVar59),4);
      fVar127 = fVar127 * (float)uVar68;
      fVar130 = fVar130 * (float)((ulong)uVar68 >> 0x20);
      fVar77 = (float)CONCAT13((byte)((uint)fVar121 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                               CONCAT12((byte)((uint)fVar121 >> 0x10) &
                                        ~(byte)((uint)iVar96 >> 0x10),
                                        CONCAT11((byte)((uint)fVar121 >> 8) &
                                                 ~(byte)((uint)iVar96 >> 8),
                                                 SUB41(fVar121,0) & ~(byte)iVar96)));
      fVar66 = (float)CONCAT13((byte)((uint)fVar127 >> 0x18) & ~(byte)((uint)iVar101 >> 0x18),
                               CONCAT12((byte)((uint)fVar127 >> 0x10) &
                                        ~(byte)((uint)iVar101 >> 0x10),
                                        CONCAT11((byte)((uint)fVar127 >> 8) &
                                                 ~(byte)((uint)iVar101 >> 8),
                                                 SUB41(fVar127,0) & ~(byte)iVar101)));
      fVar59 = fVar59 * (float)uVar122;
      fVar43 = fVar43 * (float)((ulong)uVar122 >> 0x20);
      fVar59 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar106 >> 0x18),
                               CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                        ~(byte)((uint)iVar106 >> 0x10),
                                        CONCAT11((byte)((uint)fVar59 >> 8) &
                                                 ~(byte)((uint)iVar106 >> 8),
                                                 SUB41(fVar59,0) & ~(byte)iVar106)));
      auVar98._0_4_ = fVar76 * fVar77;
      fVar120 = (float)(CONCAT17((byte)((uint)fVar125 >> 0x18) & ~(byte)((uint)iVar100 >> 0x18),
                                 CONCAT16((byte)((uint)fVar125 >> 0x10) &
                                          ~(byte)((uint)iVar100 >> 0x10),
                                          CONCAT15((byte)((uint)fVar125 >> 8) &
                                                   ~(byte)((uint)iVar100 >> 8),
                                                   CONCAT14(SUB41(fVar125,0) & ~(byte)iVar100,fVar77
                                                           )))) >> 0x20);
      auVar98._4_4_ = fVar82 * fVar120;
      auVar98._8_4_ = fVar83 * fVar77;
      auVar98._12_4_ = ((pfVar7[3] - pfVar10[3]) - fVar46 * fVar70) * fVar120;
      auVar69 = NEON_ext(auVar65,auVar65,4,1);
      auVar87._0_4_ = fVar85 * fVar66;
      fVar77 = (float)(CONCAT17((byte)((uint)fVar130 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                                CONCAT16((byte)((uint)fVar130 >> 0x10) &
                                         ~(byte)((uint)iVar105 >> 0x10),
                                         CONCAT15((byte)((uint)fVar130 >> 8) &
                                                  ~(byte)((uint)iVar105 >> 8),
                                                  CONCAT14(SUB41(fVar130,0) & ~(byte)iVar105,fVar66)
                                                 ))) >> 0x20);
      auVar87._4_4_ = fVar89 * fVar77;
      auVar87._8_4_ = fVar90 * fVar66;
      auVar87._12_4_ = ((pfVar9[3] - pfVar11[3]) - fVar57 * fVar84) * fVar77;
      fVar126 = fVar126 * (float)uVar123;
      fVar129 = fVar129 * (float)((ulong)uVar123 >> 0x20);
      fVar77 = (float)CONCAT13((byte)((uint)fVar126 >> 0x18) & ~(byte)((uint)iVar109 >> 0x18),
                               CONCAT12((byte)((uint)fVar126 >> 0x10) &
                                        ~(byte)((uint)iVar109 >> 0x10),
                                        CONCAT11((byte)((uint)fVar126 >> 8) &
                                                 ~(byte)((uint)iVar109 >> 8),
                                                 SUB41(fVar126,0) & ~(byte)iVar109)));
      auVar78 = NEON_ext(auVar69,auVar69,8,1);
      auVar97 = NEON_ext(auVar98,auVar98,4,1);
      auVar65 = NEON_ext(auVar124,auVar124,4,1);
      uVar136 = NEON_rev64(auVar78._0_8_,4);
      auVar78 = NEON_ext(auVar65,auVar65,8,1);
      auVar124 = NEON_ext(auVar97,auVar97,8,1);
      uVar123 = NEON_rev64(auVar124._0_8_,4);
      auVar80._0_4_ = fVar91 * fVar77;
      fVar126 = (float)(CONCAT17((byte)((uint)fVar129 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                                 CONCAT16((byte)((uint)fVar129 >> 0x10) &
                                          ~(byte)((uint)iVar111 >> 0x10),
                                          CONCAT15((byte)((uint)fVar129 >> 8) &
                                                   ~(byte)((uint)iVar111 >> 8),
                                                   CONCAT14(SUB41(fVar129,0) & ~(byte)iVar111,fVar77
                                                           )))) >> 0x20);
      auVar80._4_4_ = fVar93 * fVar126;
      auVar80._8_4_ = fVar94 * fVar77;
      auVar80._12_4_ = ((pfVar8[3] - pfVar13[3]) - fVar50 * fVar75) * fVar126;
      auVar107 = NEON_ext(auVar87,auVar87,4,1);
      auVar92._0_4_ = fVar71 * fVar59;
      fVar77 = (float)(CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18),
                                CONCAT16((byte)((uint)fVar43 >> 0x10) &
                                         ~(byte)((uint)iVar108 >> 0x10),
                                         CONCAT15((byte)((uint)fVar43 >> 8) &
                                                  ~(byte)((uint)iVar108 >> 8),
                                                  CONCAT14(SUB41(fVar43,0) & ~(byte)iVar108,fVar59))
                                        )) >> 0x20);
      auVar92._4_4_ = fVar73 * fVar77;
      auVar92._8_4_ = fVar74 * fVar59;
      auVar92._12_4_ = ((pfVar6[3] - pfVar12[3]) - fVar64 * fVar95) * fVar77;
      auVar128 = NEON_ext(auVar92,auVar92,4,1);
      auVar132 = NEON_ext(auVar107,auVar107,8,1);
      uVar139 = NEON_rev64(auVar78._0_8_,4);
      auVar78 = NEON_ext(auVar138,auVar138,4,1);
      auVar124._12_4_ = fVar50;
      auVar124._0_12_ = *pauVar14;
      auVar138._12_4_ = fVar50;
      auVar138._0_12_ = *pauVar14;
      auVar72 = NEON_ext(auVar124,auVar138,4,1);
      auVar138 = NEON_ext(auVar78,auVar78,8,1);
      auVar124 = NEON_ext(auVar72,auVar72,8,1);
      uVar137 = NEON_rev64(auVar138._0_8_,4);
      auVar138 = NEON_ext(auVar80,auVar80,4,1);
      uVar68 = NEON_rev64(auVar132._0_8_,4);
      fVar59 = (float)((ulong)uVar139 >> 0x20);
      auVar132 = NEON_ext(auVar128,auVar128,8,1);
      uVar135 = NEON_rev64(auVar124._0_8_,4);
      auVar124 = NEON_ext(auVar138,auVar138,8,1);
      uVar122 = NEON_rev64(auVar132._0_8_,4);
      auVar103._0_4_ = fVar54 * auVar97._0_4_ - auVar65._0_4_ * auVar98._0_4_;
      auVar103._4_4_ = fVar55 * auVar97._4_4_ - auVar65._4_4_ * auVar98._4_4_;
      auVar103._8_4_ = fVar44 * (float)uVar123 - (float)uVar139 * auVar98._8_4_;
      auVar103._12_4_ = fVar46 * (float)((ulong)uVar123 >> 0x20) - fVar59 * auVar98._12_4_;
      fVar127 = pfVar4[-3];
      fVar43 = (float)((ulong)uVar137 >> 0x20);
      uVar123 = NEON_rev64(auVar124._0_8_,4);
      fVar66 = (float)((ulong)uVar136 >> 0x20);
      auVar133 = NEON_ext(auVar103,auVar103,4,1);
      fVar67 = (float)((ulong)uVar135 >> 0x20);
      auVar110._0_4_ = fVar47 * auVar107._0_4_ - auVar78._0_4_ * auVar87._0_4_;
      auVar110._4_4_ = fVar53 * auVar107._4_4_ - auVar78._4_4_ * auVar87._4_4_;
      auVar110._8_4_ = fVar56 * (float)uVar68 - (float)uVar137 * auVar87._8_4_;
      auVar110._12_4_ = fVar57 * (float)((ulong)uVar68 >> 0x20) - fVar43 * auVar87._12_4_;
      auVar124 = NEON_ext(auVar110,auVar110,4,1);
      fVar77 = fVar58 * auVar128._0_4_ - auVar69._0_4_ * auVar92._0_4_;
      fVar126 = fVar62 * auVar128._4_4_ - auVar69._4_4_ * auVar92._4_4_;
      uVar112 = SUB41(fVar126,0);
      uVar113 = (undefined1)((uint)fVar126 >> 8);
      uVar114 = (undefined1)((uint)fVar126 >> 0x10);
      uVar115 = (undefined1)((uint)fVar126 >> 0x18);
      fVar130 = fVar63 * (float)uVar122 - (float)uVar136 * auVar92._8_4_;
      fVar70 = fVar64 * (float)((ulong)uVar122 >> 0x20) - fVar66 * auVar92._12_4_;
      fVar129 = fVar45 * auVar138._0_4_ - auVar72._0_4_ * auVar80._0_4_;
      fVar126 = fVar48 * auVar138._4_4_ - auVar72._4_4_ * auVar80._4_4_;
      uVar116 = SUB41(fVar126,0);
      uVar117 = (undefined1)((uint)fVar126 >> 8);
      uVar118 = (undefined1)((uint)fVar126 >> 0x10);
      uVar119 = (undefined1)((uint)fVar126 >> 0x18);
      fVar126 = fVar49 * (float)uVar123 - (float)uVar135 * auVar80._8_4_;
      fVar120 = fVar50 * (float)((ulong)uVar123 >> 0x20) - fVar67 * auVar80._12_4_;
      auVar128[4] = uVar116;
      auVar128._0_4_ = fVar129;
      auVar128[5] = uVar117;
      auVar128[6] = uVar118;
      auVar128[7] = uVar119;
      auVar128._8_4_ = fVar126;
      auVar128._12_4_ = fVar120;
      auVar132[4] = uVar116;
      auVar132._0_4_ = fVar129;
      auVar132[5] = uVar117;
      auVar132[6] = uVar118;
      auVar132[7] = uVar119;
      auVar132._8_4_ = fVar126;
      auVar132._12_4_ = fVar120;
      auVar128 = NEON_ext(auVar128,auVar132,4,1);
      fVar75 = *(float *)(lVar2 + 4);
      fVar76 = *(float *)(lVar2 + 8);
      fVar82 = *pfVar4;
      pfVar4 = (float *)(*(long *)(param_1 + 0xb8) + lVar40);
      fVar120 = pfVar4[-3];
      lVar2 = *(long *)(param_1 + 0xb8) + lVar27;
      auVar97[4] = uVar112;
      auVar97._0_4_ = fVar77;
      auVar97[5] = uVar113;
      auVar97[6] = uVar114;
      auVar97[7] = uVar115;
      auVar97._8_4_ = fVar130;
      auVar97._12_4_ = fVar70;
      auVar107[4] = uVar112;
      auVar107._0_4_ = fVar77;
      auVar107[5] = uVar113;
      auVar107[6] = uVar114;
      auVar107[7] = uVar115;
      auVar107._8_4_ = fVar130;
      auVar107._12_4_ = fVar70;
      auVar138 = NEON_ext(auVar97,auVar107,4,1);
      fVar130 = *(float *)(lVar2 + 4);
      fVar126 = *(float *)(lVar2 + 8);
      puVar28 = (undefined8 *)(lVar34 + uVar25 * uVar35);
      puVar26 = (undefined8 *)(lVar36 + uVar25 * uVar37);
      fVar70 = auVar98._0_4_ * fVar127 + auVar133._0_4_ * fVar120;
      fVar71 = auVar98._4_4_ * fVar127 + auVar133._4_4_ * fVar120;
      auVar99._0_8_ = CONCAT44(fVar71,fVar70);
      auVar99._8_4_ = auVar98._8_4_ * fVar127 + auVar103._0_4_ * fVar120;
      auVar99._12_4_ = auVar98._12_4_ * fVar127 + auVar103._4_4_ * fVar120;
      fVar120 = *pfVar4;
      fVar73 = auVar87._0_4_ * fVar75 + auVar124._0_4_ * fVar130;
      fVar74 = auVar87._4_4_ * fVar75 + auVar124._4_4_ * fVar130;
      auVar104._0_8_ = CONCAT44(fVar74,fVar73);
      auVar104._8_4_ = auVar87._8_4_ * fVar75 + auVar110._0_4_ * fVar130;
      auVar104._12_4_ = auVar87._12_4_ * fVar75 + auVar110._4_4_ * fVar130;
      auVar107 = NEON_ext(auVar104,auVar104,4,1);
      *puVar28 = auVar99._0_8_;
      *(float *)(puVar28 + 1) = auVar99._8_4_;
      puVar28 = (undefined8 *)(lVar34 + uVar23 * uVar35);
      fVar127 = auVar92._0_4_ * fVar76 + auVar138._0_4_ * fVar126;
      fVar130 = auVar92._4_4_ * fVar76 + auVar138._4_4_ * fVar126;
      auVar88._0_8_ = CONCAT44(fVar130,fVar127);
      auVar88._8_4_ = auVar92._8_4_ * fVar76 + fVar77 * fVar126;
      auVar88._12_4_ =
           auVar92._12_4_ * fVar76 +
           (float)(CONCAT17(uVar115,CONCAT16(uVar114,CONCAT15(uVar113,CONCAT14(uVar112,fVar77)))) >>
                  0x20) * fVar126;
      *puVar28 = auVar104._0_8_;
      puVar29 = (undefined8 *)(lVar34 + uVar22 * uVar35);
      auVar124 = NEON_ext(auVar99,auVar99,4,1);
      *(float *)(puVar28 + 1) = auVar104._8_4_;
      auVar138 = NEON_ext(auVar124,auVar124,8,1);
      uVar123 = NEON_rev64(auVar138._0_8_,4);
      auVar138 = NEON_ext(auVar107,auVar107,8,1);
      puVar28 = (undefined8 *)(lVar34 + uVar21 * uVar35);
      fVar77 = auVar80._0_4_ * fVar82 + auVar128._0_4_ * fVar120;
      fVar126 = auVar80._4_4_ * fVar82 + auVar128._4_4_ * fVar120;
      auVar81._0_8_ = CONCAT44(fVar126,fVar77);
      auVar81._8_4_ = auVar80._8_4_ * fVar82 + fVar129 * fVar120;
      auVar81._12_4_ =
           auVar80._12_4_ * fVar82 +
           (float)(CONCAT17(uVar119,CONCAT16(uVar118,CONCAT15(uVar117,CONCAT14(uVar116,fVar129))))
                  >> 0x20) * fVar120;
      puVar24 = (undefined8 *)(lVar36 + uVar23 * uVar37);
      uVar122 = NEON_rev64(auVar138._0_8_,4);
      *puVar29 = auVar88._0_8_;
      *(float *)(puVar29 + 1) = auVar88._8_4_;
      auVar138 = NEON_ext(auVar88,auVar88,4,1);
      auVar97 = NEON_ext(auVar138,auVar138,8,1);
      uVar68 = NEON_rev64(auVar97._0_8_,4);
      auVar133._0_4_ = fVar54 * auVar124._0_4_ - auVar65._0_4_ * fVar70;
      auVar133._4_4_ = fVar55 * auVar124._4_4_ - auVar65._4_4_ * fVar71;
      auVar133._8_4_ = fVar44 * (float)uVar123 - (float)uVar139 * auVar99._8_4_;
      auVar133._12_4_ = fVar46 * (float)((ulong)uVar123 >> 0x20) - fVar59 * auVar99._12_4_;
      *puVar28 = auVar81._0_8_;
      auVar65 = NEON_ext(auVar81,auVar81,4,1);
      auVar124 = NEON_ext(auVar65,auVar65,8,1);
      uVar123 = NEON_rev64(auVar124._0_8_,4);
      auVar61._0_4_ = fVar58 * auVar138._0_4_ - auVar69._0_4_ * fVar127;
      auVar61._4_4_ = fVar62 * auVar138._4_4_ - auVar69._4_4_ * fVar130;
      auVar61._8_4_ = fVar63 * (float)uVar68 - (float)uVar136 * auVar88._8_4_;
      auVar61._12_4_ = fVar64 * (float)((ulong)uVar68 >> 0x20) - fVar66 * auVar88._12_4_;
      *(float *)(puVar28 + 1) = auVar81._8_4_;
      auVar124 = NEON_ext(auVar133,auVar133,4,1);
      auVar97 = NEON_ext(auVar61,auVar61,4,1);
      auVar69._0_4_ = fVar47 * auVar107._0_4_ - auVar78._0_4_ * fVar73;
      auVar69._4_4_ = fVar53 * auVar107._4_4_ - auVar78._4_4_ * fVar74;
      auVar69._8_4_ = fVar56 * (float)uVar122 - (float)uVar137 * auVar104._8_4_;
      auVar69._12_4_ = fVar57 * (float)((ulong)uVar122 >> 0x20) - fVar43 * auVar104._12_4_;
      auVar138 = NEON_ext(auVar69,auVar69,4,1);
      fVar77 = fVar45 * auVar65._0_4_ - auVar72._0_4_ * fVar77;
      fVar126 = fVar48 * auVar65._4_4_ - auVar72._4_4_ * fVar126;
      fVar120 = fVar49 * (float)uVar123 - (float)uVar135 * auVar81._8_4_;
      fVar129 = fVar50 * (float)((ulong)uVar123 >> 0x20) - fVar67 * auVar81._12_4_;
      auVar65._4_4_ = fVar126;
      auVar65._0_4_ = fVar77;
      auVar65._8_4_ = fVar120;
      auVar65._12_4_ = fVar129;
      auVar78._4_4_ = fVar126;
      auVar78._0_4_ = fVar77;
      auVar78._8_4_ = fVar120;
      auVar78._12_4_ = fVar129;
      auVar65 = NEON_ext(auVar65,auVar78,4,1);
      pfVar4 = (float *)(*(long *)(param_1 + 200) + lVar40);
      fVar120 = pfVar4[-3];
      lVar27 = *(long *)(param_1 + 200) + lVar27;
      fVar59 = *pfVar4;
      fVar126 = *(float *)(lVar27 + 4);
      fVar129 = *(float *)(lVar27 + 8);
      puVar29 = (undefined8 *)(lVar36 + uVar22 * uVar37);
      puVar28 = (undefined8 *)(lVar36 + uVar21 * uVar37);
      lVar40 = lVar40 + 0x10;
      *puVar26 = CONCAT44(auVar124._4_4_ * fVar120,auVar124._0_4_ * fVar120);
      *(float *)(puVar26 + 1) = auVar133._0_4_ * fVar120;
      *puVar24 = CONCAT44(auVar138._4_4_ * fVar126,auVar138._0_4_ * fVar126);
      *(float *)(puVar24 + 1) = auVar69._0_4_ * fVar126;
      *puVar29 = CONCAT44(auVar97._4_4_ * fVar129,auVar97._0_4_ * fVar129);
      *(float *)(puVar29 + 1) = auVar61._0_4_ * fVar129;
      *puVar28 = CONCAT44(auVar65._4_4_ * fVar59,auVar65._0_4_ * fVar59);
      *(float *)(puVar28 + 1) = fVar77 * fVar59;
    } while (iVar60 != 0);
    uVar5 = *(uint *)(param_1 + 0x70);
    uVar38 = uVar38 & 0xfffffffc;
  }
  if ((uVar5 & 3) != 0) {
    uVar39 = 0;
    lVar40 = uVar38 << 2;
    lVar20 = uVar38 << 1;
    do {
      uVar39 = uVar39 + 1;
      puVar1 = (ushort *)(*(long *)(param_1 + 0x98) + lVar20);
      uVar38 = (ulong)*(ushort *)
                       (*(long *)(param_1 + 0x58) +
                       (ulong)*(ushort *)(*(long *)(param_1 + 0x68) + lVar20) * 2);
      lVar20 = lVar20 + 2;
      pfVar4 = (float *)(lVar19 + *puVar1 * uVar31);
      pfVar6 = (float *)(lVar19 + uVar38 * uVar31);
      pauVar14 = (undefined1 (*) [12])(lVar32 + uVar38 * uVar33);
      fVar120 = (float)*(undefined8 *)(*pauVar14 + 8);
      fVar129 = (float)((ulong)*(undefined8 *)(*pauVar14 + 8) >> 0x20);
      fVar77 = (float)*(undefined8 *)*pauVar14;
      fVar126 = (float)((ulong)*(undefined8 *)*pauVar14 >> 0x20);
      auVar51._0_4_ = fVar77 * (*pfVar4 - *pfVar6);
      auVar51._4_4_ = fVar126 * (pfVar4[1] - pfVar6[1]);
      auVar51._8_4_ = fVar120 * (pfVar4[2] - pfVar6[2]);
      auVar51._12_4_ = fVar129 * (pfVar4[3] - pfVar6[3]);
      auVar124 = NEON_ext(auVar51,auVar51,8,1);
      fVar48 = auVar51._0_4_ + auVar51._4_4_ + auVar124._0_4_;
      fVar59 = (*pfVar4 - *pfVar6) - fVar77 * fVar48;
      fVar43 = (pfVar4[1] - pfVar6[1]) - fVar126 * fVar48;
      fVar45 = (pfVar4[2] - pfVar6[2]) - fVar120 * fVar48;
      fVar49 = fVar59 * fVar59 + fVar43 * fVar43 + fVar45 * fVar45;
      fVar54 = fVar59 * fVar59 + fVar43 * fVar43 + fVar45 * fVar45;
      uVar123 = CONCAT44(fVar54,fVar49);
      uVar68 = NEON_frsqrte(uVar123,4);
      fVar50 = (float)uVar68;
      fVar55 = (float)((ulong)uVar68 >> 0x20);
      iVar60 = -(uint)(fVar49 <= 0.0);
      iVar96 = -(uint)(fVar54 <= 0.0);
      uVar123 = NEON_frsqrts(uVar123,CONCAT44(fVar55 * fVar55,fVar50 * fVar50),4);
      fVar50 = fVar50 * (float)uVar123;
      fVar55 = fVar55 * (float)((ulong)uVar123 >> 0x20);
      fVar49 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18),
                               CONCAT12((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar50 >> 8) &
                                                  ~(byte)((uint)iVar60 >> 8),
                                                  SUB41(fVar50,0) & ~(byte)iVar60)));
      auVar15._12_4_ = fVar129;
      auVar15._0_12_ = *pauVar14;
      auVar16._12_4_ = fVar129;
      auVar16._0_12_ = *pauVar14;
      auVar138 = NEON_ext(auVar15,auVar16,4,1);
      auVar124 = NEON_ext(auVar138,auVar138,8,1);
      uVar123 = NEON_rev64(auVar124._0_8_,4);
      auVar41._0_4_ = fVar59 * fVar49;
      fVar59 = (float)(CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                                CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                         ~(byte)((uint)iVar96 >> 0x10),
                                         CONCAT15((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar96 >> 8),
                                                  CONCAT14(SUB41(fVar55,0) & ~(byte)iVar96,fVar49)))
                               ) >> 0x20);
      auVar41._4_4_ = fVar43 * fVar59;
      auVar41._8_4_ = fVar45 * fVar49;
      auVar41._12_4_ = ((pfVar4[3] - pfVar6[3]) - fVar129 * fVar48) * fVar59;
      auVar124 = NEON_ext(auVar41,auVar41,4,1);
      auVar65 = NEON_ext(auVar124,auVar124,8,1);
      uVar68 = NEON_rev64(auVar65._0_8_,4);
      fVar49 = *(float *)(*(long *)(param_1 + 0xa8) + lVar40);
      fVar48 = (float)((ulong)uVar123 >> 0x20);
      auVar52._0_4_ = fVar77 * auVar124._0_4_ - auVar138._0_4_ * auVar41._0_4_;
      auVar52._4_4_ = fVar126 * auVar124._4_4_ - auVar138._4_4_ * auVar41._4_4_;
      auVar52._8_4_ = fVar120 * (float)uVar68 - (float)uVar123 * auVar41._8_4_;
      auVar52._12_4_ = fVar129 * (float)((ulong)uVar68 >> 0x20) - fVar48 * auVar41._12_4_;
      auVar124 = NEON_ext(auVar52,auVar52,4,1);
      fVar45 = *(float *)(*(long *)(param_1 + 0xb8) + lVar40);
      puVar29 = (undefined8 *)(lVar34 + uVar38 * uVar35);
      puVar28 = (undefined8 *)(lVar36 + uVar38 * uVar37);
      fVar59 = auVar41._0_4_ * fVar49 + auVar124._0_4_ * fVar45;
      fVar43 = auVar41._4_4_ * fVar49 + auVar124._4_4_ * fVar45;
      auVar42._0_8_ = CONCAT44(fVar43,fVar59);
      auVar42._8_4_ = auVar41._8_4_ * fVar49 + auVar52._0_4_ * fVar45;
      auVar42._12_4_ = auVar41._12_4_ * fVar49 + auVar52._4_4_ * fVar45;
      auVar124 = NEON_ext(auVar42,auVar42,4,1);
      auVar65 = NEON_ext(auVar124,auVar124,8,1);
      *puVar29 = auVar42._0_8_;
      *(float *)(puVar29 + 1) = auVar42._8_4_;
      uVar68 = NEON_rev64(auVar65._0_8_,4);
      fVar77 = fVar77 * auVar124._0_4_ - auVar138._0_4_ * fVar59;
      fVar126 = fVar126 * auVar124._4_4_ - auVar138._4_4_ * fVar43;
      fVar120 = fVar120 * (float)uVar68 - (float)uVar123 * auVar42._8_4_;
      fVar129 = fVar129 * (float)((ulong)uVar68 >> 0x20) - fVar48 * auVar42._12_4_;
      auVar17._4_4_ = fVar126;
      auVar17._0_4_ = fVar77;
      auVar17._8_4_ = fVar120;
      auVar17._12_4_ = fVar129;
      auVar18._4_4_ = fVar126;
      auVar18._0_4_ = fVar77;
      auVar18._8_4_ = fVar120;
      auVar18._12_4_ = fVar129;
      auVar124 = NEON_ext(auVar17,auVar18,4,1);
      fVar126 = *(float *)(*(long *)(param_1 + 200) + lVar40);
      lVar40 = lVar40 + 4;
      *puVar28 = CONCAT44(auVar124._4_4_ * fVar126,auVar124._0_4_ * fVar126);
      *(float *)(puVar28 + 1) = fVar77 * fVar126;
    } while ((uVar39 & 0xff) < (uVar5 & 3));
  }
  lVar19 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar19 == 0) {
    return;
  }
  FUN_00443a70(lVar19,&DAT_04085310);
  return;
}

