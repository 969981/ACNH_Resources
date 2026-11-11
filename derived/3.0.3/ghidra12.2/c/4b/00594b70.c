
void FUN_00594b70(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined1 (*pauVar5) [12];
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  float *pfVar32;
  float *pfVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  float *pfVar36;
  long lVar37;
  undefined2 *puVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  ulong uVar41;
  ulong uVar42;
  float fVar43;
  float fVar44;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar52;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar54 [16];
  float fVar53;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar60;
  int iVar61;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar62 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar75;
  undefined1 auVar74 [16];
  float fVar76;
  float fVar78;
  undefined8 uVar77;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar89;
  float fVar90;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar91;
  float fVar92;
  float fVar96;
  float fVar97;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar98 [16];
  int iVar99;
  int iVar102;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar103;
  float fVar106;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar107;
  undefined8 uVar108;
  float fVar110;
  undefined1 auVar109 [16];
  int iVar111;
  int iVar114;
  float fVar115;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar116;
  undefined8 uVar117;
  float fVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  float fVar125;
  float fVar127;
  undefined1 auVar126 [16];
  undefined8 uVar128;
  undefined8 uVar129;
  undefined1 auVar130 [16];
  undefined8 uVar131;
  undefined8 uVar132;
  int iVar134;
  undefined1 auVar133 [16];
  undefined8 uVar135;
  undefined1 auVar136 [16];
  
  lVar20 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar20 != 0) {
    FUN_00443a00(lVar20,"TtUpdate All Vertex Frames (TB)");
  }
  uVar3 = *(uint *)(param_2 + 0x20);
  lVar20 = *(long *)(param_2 + 0x18);
  uVar24 = (ulong)*(byte *)(param_2 + 0x24);
  pauVar39 = *(undefined1 (**) [16])(param_2 + 0x40);
  bVar4 = *(byte *)(param_2 + 0x4c);
  puVar34 = *(undefined8 **)(param_2 + 0x58);
  uVar28 = 0;
  uVar25 = (ulong)*(byte *)(param_2 + 100);
  puVar29 = *(undefined8 **)(param_2 + 0x70);
  uVar26 = (ulong)*(byte *)(param_2 + 0x7c);
  pfVar32 = *(float **)(param_1 + 0x78);
  pfVar36 = *(float **)(param_1 + 0x88);
  pfVar21 = *(float **)(param_1 + 0x98);
  puVar38 = &DAT_04c6f410;
  if (3 < (int)uVar3) {
    iVar61 = 0;
    lVar37 = ((ulong)bVar4 & 0x3f) * 4;
    pfVar22 = pfVar21;
    puVar30 = puVar29;
    pfVar33 = pfVar32;
    puVar35 = puVar34;
    pauVar40 = pauVar39;
    do {
      pauVar39 = (undefined1 (*) [16])(*pauVar40 + lVar37);
      Hint_Prefetch(*pauVar39 + lVar37,0,0,0);
      Hint_Prefetch((long)(*pauVar39 + lVar37) + 0x40,0,0,0);
      lVar31 = *(long *)(param_1 + 0x68);
      pauVar5 = (undefined1 (*) [12])(*pauVar40 + bVar4);
      fVar49 = (float)*(undefined8 *)(*pauVar5 + 8);
      fVar51 = (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
      fVar44 = (float)*(undefined8 *)*pauVar5;
      fVar43 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
      uVar27 = (uint)uVar28;
      auVar123 = *(undefined1 (*) [16])(*pauVar40 + ((ulong)((uint)bVar4 * 2) & 0xfe));
      uVar41 = (ulong)(uVar27 | 1) & 0xffff;
      auVar79 = *(undefined1 (*) [16])(*pauVar40 + ((ulong)((uint)bVar4 * 3) & 0xff));
      uVar42 = (ulong)(uVar27 | 2) & 0xffff;
      pfVar21 = (float *)(lVar20 + (uVar28 & 0xffff) * uVar24);
      pfVar6 = (float *)(lVar20 + uVar41 * uVar24);
      uVar23 = (ulong)(uVar27 | 3) & 0xffff;
      pfVar7 = (float *)(lVar20 + *(ushort *)(lVar31 + uVar23 * 2) * uVar24);
      pfVar8 = (float *)(lVar20 + uVar42 * uVar24);
      pfVar9 = (float *)(lVar20 + uVar23 * uVar24);
      pfVar32 = pfVar33 + 4;
      puVar34 = (undefined8 *)((long)puVar35 + uVar25 * 4);
      pfVar10 = (float *)(lVar20 + *(ushort *)(lVar31 + (uVar28 & 0xffff) * 2) * uVar24);
      puVar1 = (undefined8 *)((long)puVar35 + uVar25 * 3);
      pfVar11 = (float *)(lVar20 + *(ushort *)(lVar31 + uVar41 * 2) * uVar24);
      auVar74 = *pauVar40;
      pfVar12 = (float *)(lVar20 + *(ushort *)(lVar31 + uVar42 * 2) * uVar24);
      Hint_Prefetch(pfVar33 + 8,0,0,0);
      Hint_Prefetch(pfVar33 + 0x18,0,0,0);
      Hint_Prefetch(pfVar36 + 8,0,0,0);
      fVar60 = auVar74._0_4_;
      auVar130._0_4_ = fVar60 * (*pfVar10 - *pfVar21);
      fVar63 = auVar74._4_4_;
      auVar130._4_4_ = fVar63 * (pfVar10[1] - pfVar21[1]);
      fVar64 = auVar74._8_4_;
      auVar130._8_4_ = fVar64 * (pfVar10[2] - pfVar21[2]);
      fVar65 = auVar74._12_4_;
      auVar130._12_4_ = fVar65 * (pfVar10[3] - pfVar21[3]);
      auVar80 = NEON_ext(auVar130,auVar130,8,1);
      auVar86._0_4_ = fVar44 * (*pfVar11 - *pfVar6);
      auVar86._4_4_ = fVar43 * (pfVar11[1] - pfVar6[1]);
      auVar86._8_4_ = fVar49 * (pfVar11[2] - pfVar6[2]);
      auVar86._12_4_ = fVar51 * (pfVar11[3] - pfVar6[3]);
      auVar93 = NEON_ext(auVar86,auVar86,8,1);
      fVar53 = auVar123._0_4_;
      auVar100._0_4_ = fVar53 * (*pfVar12 - *pfVar8);
      fVar47 = auVar123._4_4_;
      auVar100._4_4_ = fVar47 * (pfVar12[1] - pfVar8[1]);
      fVar48 = auVar123._8_4_;
      auVar100._8_4_ = fVar48 * (pfVar12[2] - pfVar8[2]);
      fVar50 = auVar123._12_4_;
      auVar100._12_4_ = fVar50 * (pfVar12[3] - pfVar8[3]);
      auVar104 = NEON_ext(auVar100,auVar100,8,1);
      fVar69 = auVar80._0_4_ + auVar130._0_4_ + auVar130._4_4_;
      fVar52 = auVar79._0_4_;
      auVar136._0_4_ = fVar52 * (*pfVar7 - *pfVar9);
      fVar57 = auVar79._4_4_;
      auVar136._4_4_ = fVar57 * (pfVar7[1] - pfVar9[1]);
      fVar58 = auVar79._8_4_;
      auVar136._8_4_ = fVar58 * (pfVar7[2] - pfVar9[2]);
      fVar59 = auVar79._12_4_;
      auVar136._12_4_ = fVar59 * (pfVar7[3] - pfVar9[3]);
      fVar82 = auVar93._0_4_ + auVar86._0_4_ + auVar86._4_4_;
      fVar91 = auVar104._0_4_ + auVar100._0_4_ + auVar100._4_4_;
      auVar80 = NEON_ext(auVar136,auVar136,8,1);
      fVar83 = auVar80._0_4_ + auVar136._0_4_ + auVar136._4_4_;
      fVar70 = (*pfVar10 - *pfVar21) - fVar60 * fVar69;
      fVar71 = (pfVar10[1] - pfVar21[1]) - fVar63 * fVar69;
      fVar72 = (pfVar10[2] - pfVar21[2]) - fVar64 * fVar69;
      Hint_Prefetch(pfVar36 + 0x18,0,0,0);
      fVar66 = (*pfVar11 - *pfVar6) - fVar44 * fVar82;
      fVar67 = (pfVar11[1] - pfVar6[1]) - fVar43 * fVar82;
      fVar68 = (pfVar11[2] - pfVar6[2]) - fVar49 * fVar82;
      puVar29 = (undefined8 *)((long)puVar30 + uVar26 * 4);
      fVar85 = *pfVar33;
      iVar61 = iVar61 + 1;
      fVar92 = (*pfVar12 - *pfVar8) - fVar53 * fVar91;
      fVar96 = (pfVar12[1] - pfVar8[1]) - fVar47 * fVar91;
      fVar97 = (pfVar12[2] - pfVar8[2]) - fVar48 * fVar91;
      uVar28 = (ulong)(uVar27 + 4);
      fVar84 = (*pfVar7 - *pfVar9) - fVar52 * fVar83;
      fVar89 = (pfVar7[1] - pfVar9[1]) - fVar57 * fVar83;
      fVar90 = (pfVar7[2] - pfVar9[2]) - fVar58 * fVar83;
      fVar73 = fVar70 * fVar70 + fVar71 * fVar71 + fVar72 * fVar72;
      fVar75 = fVar70 * fVar70 + fVar71 * fVar71 + fVar72 * fVar72;
      uVar77 = CONCAT44(fVar75,fVar73);
      fVar76 = fVar66 * fVar66 + fVar67 * fVar67 + fVar68 * fVar68;
      fVar78 = fVar66 * fVar66 + fVar67 * fVar67 + fVar68 * fVar68;
      uVar131 = CONCAT44(fVar78,fVar76);
      fVar103 = fVar97 * fVar97 + fVar92 * fVar92 + fVar96 * fVar96;
      fVar106 = fVar97 * fVar97 + fVar92 * fVar92 + fVar96 * fVar96;
      uVar129 = CONCAT44(fVar106,fVar103);
      uVar108 = NEON_frsqrte(uVar77,4);
      uVar117 = NEON_frsqrte(uVar131,4);
      fVar107 = (float)uVar108;
      fVar110 = (float)((ulong)uVar108 >> 0x20);
      iVar111 = -(uint)(fVar76 <= 0.0);
      iVar114 = -(uint)(fVar78 <= 0.0);
      fVar116 = (float)uVar117;
      fVar118 = (float)((ulong)uVar117 >> 0x20);
      uVar128 = NEON_frsqrts(uVar77,CONCAT44(fVar110 * fVar110,fVar107 * fVar107),4);
      uVar108 = NEON_frsqrte(uVar129,4);
      fVar125 = fVar90 * fVar90 + fVar84 * fVar84 + fVar89 * fVar89;
      fVar127 = fVar90 * fVar90 + fVar84 * fVar84 + fVar89 * fVar89;
      uVar117 = CONCAT44(fVar127,fVar125);
      uVar77 = NEON_frsqrts(uVar131,CONCAT44(fVar118 * fVar118,fVar116 * fVar116),4);
      uVar131 = NEON_frsqrte(uVar117,4);
      fVar76 = (float)uVar108;
      fVar78 = (float)((ulong)uVar108 >> 0x20);
      iVar99 = -(uint)(fVar73 <= 0.0);
      iVar102 = -(uint)(fVar75 <= 0.0);
      fVar107 = fVar107 * (float)uVar128;
      fVar110 = fVar110 * (float)((ulong)uVar128 >> 0x20);
      fVar73 = (float)CONCAT13((byte)((uint)fVar107 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18),
                               CONCAT12((byte)((uint)fVar107 >> 0x10) &
                                        ~(byte)((uint)iVar99 >> 0x10),
                                        CONCAT11((byte)((uint)fVar107 >> 8) &
                                                 ~(byte)((uint)iVar99 >> 8),
                                                 SUB41(fVar107,0) & ~(byte)iVar99)));
      fVar116 = fVar116 * (float)uVar77;
      fVar118 = fVar118 * (float)((ulong)uVar77 >> 0x20);
      fVar107 = (float)uVar131;
      fVar115 = (float)((ulong)uVar131 >> 0x20);
      iVar99 = -(uint)(fVar103 <= 0.0);
      iVar17 = -(uint)(fVar106 <= 0.0);
      uVar77 = NEON_frsqrts(uVar129,CONCAT44(fVar78 * fVar78,fVar76 * fVar76),4);
      fVar75 = (float)CONCAT13((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                               CONCAT12((byte)((uint)fVar116 >> 0x10) &
                                        ~(byte)((uint)iVar111 >> 0x10),
                                        CONCAT11((byte)((uint)fVar116 >> 8) &
                                                 ~(byte)((uint)iVar111 >> 8),
                                                 SUB41(fVar116,0) & ~(byte)iVar111)));
      uVar131 = NEON_frsqrts(uVar117,CONCAT44(fVar115 * fVar115,fVar107 * fVar107),4);
      fVar76 = fVar76 * (float)uVar77;
      fVar78 = fVar78 * (float)((ulong)uVar77 >> 0x20);
      iVar111 = -(uint)(fVar125 <= 0.0);
      iVar134 = -(uint)(fVar127 <= 0.0);
      auVar80 = NEON_ext(auVar123,auVar123,4,1);
      auVar123 = NEON_ext(auVar80,auVar80,8,1);
      auVar113._0_4_ = fVar70 * fVar73;
      fVar70 = (float)(CONCAT17((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18),
                                CONCAT16((byte)((uint)fVar110 >> 0x10) &
                                         ~(byte)((uint)iVar102 >> 0x10),
                                         CONCAT15((byte)((uint)fVar110 >> 8) &
                                                  ~(byte)((uint)iVar102 >> 8),
                                                  CONCAT14(SUB41(fVar110,0) & ~(byte)iVar102,fVar73)
                                                 ))) >> 0x20);
      auVar113._4_4_ = fVar71 * fVar70;
      auVar113._8_4_ = fVar72 * fVar73;
      auVar113._12_4_ = ((pfVar10[3] - pfVar21[3]) - fVar65 * fVar69) * fVar70;
      uVar128 = NEON_rev64(auVar123._0_8_,4);
      auVar101._0_4_ = fVar66 * fVar75;
      fVar66 = (float)(CONCAT17((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar114 >> 0x18),
                                CONCAT16((byte)((uint)fVar118 >> 0x10) &
                                         ~(byte)((uint)iVar114 >> 0x10),
                                         CONCAT15((byte)((uint)fVar118 >> 8) &
                                                  ~(byte)((uint)iVar114 >> 8),
                                                  CONCAT14(SUB41(fVar118,0) & ~(byte)iVar114,fVar75)
                                                 ))) >> 0x20);
      auVar101._4_4_ = fVar67 * fVar66;
      auVar101._8_4_ = fVar68 * fVar75;
      auVar101._12_4_ = ((pfVar11[3] - pfVar6[3]) - fVar51 * fVar82) * fVar66;
      fVar107 = fVar107 * (float)uVar131;
      fVar115 = fVar115 * (float)((ulong)uVar131 >> 0x20);
      fVar66 = (float)CONCAT13((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18),
                               CONCAT12((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar76 >> 8) &
                                                  ~(byte)((uint)iVar99 >> 8),
                                                  SUB41(fVar76,0) & ~(byte)iVar99)));
      fVar68 = (float)CONCAT13((byte)((uint)fVar107 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                               CONCAT12((byte)((uint)fVar107 >> 0x10) &
                                        ~(byte)((uint)iVar111 >> 0x10),
                                        CONCAT11((byte)((uint)fVar107 >> 8) &
                                                 ~(byte)((uint)iVar111 >> 8),
                                                 SUB41(fVar107,0) & ~(byte)iVar111)));
      auVar94._0_4_ = fVar92 * fVar66;
      fVar67 = (float)(CONCAT17((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                                CONCAT16((byte)((uint)fVar78 >> 0x10) &
                                         ~(byte)((uint)iVar17 >> 0x10),
                                         CONCAT15((byte)((uint)fVar78 >> 8) &
                                                  ~(byte)((uint)iVar17 >> 8),
                                                  CONCAT14(SUB41(fVar78,0) & ~(byte)iVar17,fVar66)))
                               ) >> 0x20);
      auVar94._4_4_ = fVar96 * fVar67;
      auVar94._8_4_ = fVar97 * fVar66;
      auVar94._12_4_ = ((pfVar12[3] - pfVar8[3]) - fVar50 * fVar91) * fVar67;
      auVar93 = NEON_ext(auVar113,auVar113,4,1);
      auVar81 = NEON_ext(auVar74,auVar74,4,1);
      auVar87._0_4_ = fVar84 * fVar68;
      fVar66 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar134 >> 0x18),
                                CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                         ~(byte)((uint)iVar134 >> 0x10),
                                         CONCAT15((byte)((uint)fVar115 >> 8) &
                                                  ~(byte)((uint)iVar134 >> 8),
                                                  CONCAT14(SUB41(fVar115,0) & ~(byte)iVar134,fVar68)
                                                 ))) >> 0x20);
      auVar87._4_4_ = fVar89 * fVar66;
      auVar87._8_4_ = fVar90 * fVar68;
      auVar87._12_4_ = ((pfVar7[3] - pfVar9[3]) - fVar59 * fVar83) * fVar66;
      auVar104 = NEON_ext(auVar101,auVar101,4,1);
      auVar123 = NEON_ext(auVar93,auVar93,8,1);
      uVar131 = NEON_rev64(auVar123._0_8_,4);
      auVar123._12_4_ = fVar51;
      auVar123._0_12_ = *pauVar5;
      auVar74._12_4_ = fVar51;
      auVar74._0_12_ = *pauVar5;
      auVar74 = NEON_ext(auVar123,auVar74,4,1);
      auVar126 = NEON_ext(auVar94,auVar94,4,1);
      auVar123 = NEON_ext(auVar79,auVar79,4,1);
      auVar79 = NEON_ext(auVar81,auVar81,8,1);
      auVar124 = NEON_ext(auVar87,auVar87,4,1);
      auVar130 = NEON_ext(auVar104,auVar104,8,1);
      uVar129 = NEON_rev64(auVar130._0_8_,4);
      auVar136 = NEON_ext(auVar74,auVar74,8,1);
      auVar130 = NEON_ext(auVar123,auVar123,8,1);
      auVar133 = NEON_ext(auVar126,auVar126,8,1);
      uVar77 = NEON_rev64(auVar79._0_8_,4);
      auVar79 = NEON_ext(auVar124,auVar124,8,1);
      uVar135 = NEON_rev64(auVar136._0_8_,4);
      uVar132 = NEON_rev64(auVar130._0_8_,4);
      uVar117 = NEON_rev64(auVar133._0_8_,4);
      uVar108 = NEON_rev64(auVar79._0_8_,4);
      fVar72 = (float)((ulong)uVar135 >> 0x20);
      fVar73 = (float)((ulong)uVar128 >> 0x20);
      fVar69 = (float)((ulong)uVar132 >> 0x20);
      fVar75 = (float)((ulong)uVar77 >> 0x20);
      auVar105._0_4_ = fVar60 * auVar93._0_4_ - auVar81._0_4_ * auVar113._0_4_;
      auVar105._4_4_ = fVar63 * auVar93._4_4_ - auVar81._4_4_ * auVar113._4_4_;
      auVar105._8_4_ = fVar64 * (float)uVar131 - (float)uVar77 * auVar113._8_4_;
      auVar105._12_4_ = fVar65 * (float)((ulong)uVar131 >> 0x20) - fVar75 * auVar113._12_4_;
      auVar109._0_4_ = fVar44 * auVar104._0_4_ - auVar74._0_4_ * auVar101._0_4_;
      auVar109._4_4_ = fVar43 * auVar104._4_4_ - auVar74._4_4_ * auVar101._4_4_;
      auVar109._8_4_ = fVar49 * (float)uVar129 - (float)uVar135 * auVar101._8_4_;
      auVar109._12_4_ = fVar51 * (float)((ulong)uVar129 >> 0x20) - fVar72 * auVar101._12_4_;
      auVar112._0_4_ = fVar53 * auVar126._0_4_ - auVar80._0_4_ * auVar94._0_4_;
      auVar112._4_4_ = fVar47 * auVar126._4_4_ - auVar80._4_4_ * auVar94._4_4_;
      auVar112._8_4_ = fVar48 * (float)uVar117 - (float)uVar128 * auVar94._8_4_;
      auVar112._12_4_ = fVar50 * (float)((ulong)uVar117 >> 0x20) - fVar73 * auVar94._12_4_;
      fVar90 = pfVar33[1];
      fVar67 = fVar52 * auVar124._0_4_ - auVar123._0_4_ * auVar87._0_4_;
      fVar66 = fVar57 * auVar124._4_4_ - auVar123._4_4_ * auVar87._4_4_;
      uVar119 = SUB41(fVar66,0);
      uVar120 = (undefined1)((uint)fVar66 >> 8);
      uVar121 = (undefined1)((uint)fVar66 >> 0x10);
      uVar122 = (undefined1)((uint)fVar66 >> 0x18);
      fVar68 = fVar58 * (float)uVar108 - (float)uVar132 * auVar87._8_4_;
      fVar76 = fVar59 * (float)((ulong)uVar108 >> 0x20) - fVar69 * auVar87._12_4_;
      auVar126 = NEON_ext(auVar112,auVar112,4,1);
      fVar71 = pfVar33[2];
      fVar89 = pfVar33[3];
      lVar31 = (long)puVar34 + uVar25 * 4;
      fVar66 = *pfVar36;
      fVar70 = pfVar36[1];
      auVar124 = NEON_ext(auVar105,auVar105,4,1);
      auVar93[4] = uVar119;
      auVar93._0_4_ = fVar67;
      auVar93[5] = uVar120;
      auVar93[6] = uVar121;
      auVar93[7] = uVar122;
      auVar93._8_4_ = fVar68;
      auVar93._12_4_ = fVar76;
      auVar104[4] = uVar119;
      auVar104._0_4_ = fVar67;
      auVar104[5] = uVar120;
      auVar104[6] = uVar121;
      auVar104[7] = uVar122;
      auVar104._8_4_ = fVar68;
      auVar104._12_4_ = fVar76;
      auVar104 = NEON_ext(auVar93,auVar104,4,1);
      auVar79 = NEON_ext(auVar109,auVar109,4,1);
      puVar2 = (undefined8 *)((long)puVar35 + uVar25 * 2);
      fVar68 = pfVar36[2];
      fVar84 = pfVar36[3];
      Hint_Prefetch(lVar31,0,0,0);
      Hint_Prefetch(lVar31 + 0x40,0,0,0);
      fVar82 = auVar113._0_4_ * fVar85 + auVar124._0_4_ * fVar66;
      fVar83 = auVar113._4_4_ * fVar85 + auVar124._4_4_ * fVar66;
      auVar98._0_8_ = CONCAT44(fVar83,fVar82);
      auVar98._8_4_ = auVar113._8_4_ * fVar85 + auVar105._0_4_ * fVar66;
      auVar98._12_4_ = auVar113._12_4_ * fVar85 + auVar105._4_4_ * fVar66;
      fVar66 = auVar101._0_4_ * fVar90 + auVar79._0_4_ * fVar70;
      fVar78 = auVar101._4_4_ * fVar90 + auVar79._4_4_ * fVar70;
      auVar95._0_8_ = CONCAT44(fVar78,fVar66);
      auVar95._8_4_ = auVar101._8_4_ * fVar90 + auVar109._0_4_ * fVar70;
      auVar95._12_4_ = auVar101._12_4_ * fVar90 + auVar109._4_4_ * fVar70;
      fVar85 = auVar94._0_4_ * fVar71 + auVar126._0_4_ * fVar68;
      fVar76 = auVar94._4_4_ * fVar71 + auVar126._4_4_ * fVar68;
      auVar88._0_8_ = CONCAT44(fVar76,fVar85);
      auVar88._8_4_ = auVar94._8_4_ * fVar71 + auVar112._0_4_ * fVar68;
      auVar88._12_4_ = auVar94._12_4_ * fVar71 + auVar112._4_4_ * fVar68;
      auVar113 = NEON_ext(auVar88,auVar88,4,1);
      *puVar35 = auVar98._0_8_;
      *(float *)(puVar35 + 1) = auVar98._8_4_;
      auVar93 = NEON_ext(auVar98,auVar98,4,1);
      fVar70 = auVar87._0_4_ * fVar89 + auVar104._0_4_ * fVar84;
      fVar71 = auVar87._4_4_ * fVar89 + auVar104._4_4_ * fVar84;
      auVar133._0_8_ = CONCAT44(fVar71,fVar70);
      auVar133._8_4_ = auVar87._8_4_ * fVar89 + fVar67 * fVar84;
      auVar133._12_4_ =
           auVar87._12_4_ * fVar89 +
           (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,fVar67)))) >>
                  0x20) * fVar84;
      auVar104 = NEON_ext(auVar95,auVar95,4,1);
      *(undefined8 *)((long)puVar35 + uVar25) = auVar95._0_8_;
      *(float *)((undefined8 *)((long)puVar35 + uVar25) + 1) = auVar95._8_4_;
      auVar79 = NEON_ext(auVar104,auVar104,8,1);
      auVar124 = NEON_ext(auVar93,auVar93,8,1);
      uVar117 = NEON_rev64(auVar124._0_8_,4);
      *puVar2 = auVar88._0_8_;
      *(float *)(puVar2 + 1) = auVar88._8_4_;
      auVar124 = NEON_ext(auVar113,auVar113,8,1);
      uVar131 = NEON_rev64(auVar79._0_8_,4);
      uVar108 = NEON_rev64(auVar124._0_8_,4);
      *puVar1 = auVar133._0_8_;
      auVar130 = NEON_ext(auVar133,auVar133,4,1);
      auVar79 = NEON_ext(auVar130,auVar130,8,1);
      uVar129 = NEON_rev64(auVar79._0_8_,4);
      *(float *)(puVar1 + 1) = auVar133._8_4_;
      lVar31 = (long)puVar29 + uVar26 * 4;
      Hint_Prefetch(lVar31,0,0,0);
      Hint_Prefetch(lVar31 + 0x40,0,0,0);
      Hint_Prefetch(pfVar22 + 8,0,0,0);
      fVar66 = fVar44 * auVar104._0_4_ - auVar74._0_4_ * fVar66;
      fVar67 = fVar43 * auVar104._4_4_ - auVar74._4_4_ * fVar78;
      fVar68 = fVar49 * (float)uVar131 - (float)uVar135 * auVar95._8_4_;
      fVar44 = fVar51 * (float)((ulong)uVar131 >> 0x20) - fVar72 * auVar95._12_4_;
      Hint_Prefetch(pfVar22 + 0x18,0,0,0);
      auVar126._0_4_ = fVar60 * auVar93._0_4_ - auVar81._0_4_ * fVar82;
      auVar126._4_4_ = fVar63 * auVar93._4_4_ - auVar81._4_4_ * fVar83;
      auVar126._8_4_ = fVar64 * (float)uVar117 - (float)uVar77 * auVar98._8_4_;
      auVar126._12_4_ = fVar65 * (float)((ulong)uVar117 >> 0x20) - fVar75 * auVar98._12_4_;
      auVar93 = NEON_ext(auVar126,auVar126,4,1);
      pfVar21 = pfVar22 + 4;
      auVar81._0_4_ = fVar53 * auVar113._0_4_ - auVar80._0_4_ * fVar85;
      auVar81._4_4_ = fVar47 * auVar113._4_4_ - auVar80._4_4_ * fVar76;
      auVar81._8_4_ = fVar48 * (float)uVar108 - (float)uVar128 * auVar88._8_4_;
      auVar81._12_4_ = fVar50 * (float)((ulong)uVar108 >> 0x20) - fVar73 * auVar88._12_4_;
      auVar104 = NEON_ext(auVar81,auVar81,4,1);
      fVar85 = *pfVar22;
      pfVar36 = pfVar36 + 4;
      auVar124._0_4_ = fVar52 * auVar130._0_4_ - auVar123._0_4_ * fVar70;
      auVar124._4_4_ = fVar57 * auVar130._4_4_ - auVar123._4_4_ * fVar71;
      auVar124._8_4_ = fVar58 * (float)uVar129 - (float)uVar132 * auVar133._8_4_;
      auVar124._12_4_ = fVar59 * (float)((ulong)uVar129 >> 0x20) - fVar69 * auVar133._12_4_;
      auVar79._4_4_ = fVar67;
      auVar79._0_4_ = fVar66;
      auVar79._8_4_ = fVar68;
      auVar79._12_4_ = fVar44;
      auVar80._4_4_ = fVar67;
      auVar80._0_4_ = fVar66;
      auVar80._8_4_ = fVar68;
      auVar80._12_4_ = fVar44;
      auVar74 = NEON_ext(auVar79,auVar80,4,1);
      fVar67 = pfVar22[1];
      auVar123 = NEON_ext(auVar124,auVar124,4,1);
      puVar35 = (undefined8 *)((long)puVar30 + uVar26 * 2);
      puVar1 = (undefined8 *)((long)puVar30 + uVar26 * 3);
      fVar68 = pfVar22[2];
      fVar44 = pfVar22[3];
      *puVar30 = CONCAT44(auVar93._4_4_ * fVar85,auVar93._0_4_ * fVar85);
      *(float *)(puVar30 + 1) = auVar126._0_4_ * fVar85;
      *(undefined8 *)((long)puVar30 + uVar26) =
           CONCAT44(auVar74._4_4_ * fVar67,auVar74._0_4_ * fVar67);
      *(float *)((undefined8 *)((long)puVar30 + uVar26) + 1) = fVar66 * fVar67;
      *puVar35 = CONCAT44(auVar104._4_4_ * fVar68,auVar104._0_4_ * fVar68);
      *(float *)(puVar35 + 1) = auVar81._0_4_ * fVar68;
      *puVar1 = CONCAT44(auVar123._4_4_ * fVar44,auVar123._0_4_ * fVar44);
      *(float *)(puVar1 + 1) = auVar124._0_4_ * fVar44;
      pfVar22 = pfVar21;
      puVar30 = puVar29;
      pfVar33 = pfVar32;
      puVar35 = puVar34;
      pauVar40 = pauVar39;
    } while (iVar61 < (int)uVar3 >> 2);
    puVar38 = (undefined2 *)PTR_DAT_04bd4d90;
  }
  if ((uVar3 & 3) != 0) {
    uVar27 = 0;
    do {
      uVar27 = uVar27 + 1;
      puVar30 = (undefined8 *)(lVar20 + (uVar28 & 0xffff) * uVar24);
      uVar131 = puVar30[1];
      uVar77 = *puVar30;
      pfVar22 = (float *)(lVar20 + *(ushort *)(*(long *)(param_1 + 0x68) + (uVar28 & 0xffff) * 2) *
                                   uVar24);
      fVar85 = *pfVar22 - (float)uVar77;
      fVar66 = pfVar22[1] - (float)((ulong)uVar77 >> 0x20);
      fVar49 = pfVar22[2] - (float)uVar131;
      fVar51 = pfVar22[3] - (float)((ulong)uVar131 >> 0x20);
      fVar44 = (float)*(undefined8 *)(*pauVar39 + 8);
      fVar43 = (float)((ulong)*(undefined8 *)(*pauVar39 + 8) >> 0x20);
      puVar19 = *pauVar39;
      puVar18 = *pauVar39;
      fVar67 = (float)*(undefined8 *)*pauVar39;
      fVar68 = (float)((ulong)*(undefined8 *)*pauVar39 >> 0x20);
      pauVar39 = (undefined1 (*) [16])(*pauVar39 + bVar4);
      auVar54._0_4_ = fVar67 * fVar85;
      auVar54._4_4_ = fVar68 * fVar66;
      auVar54._8_4_ = fVar44 * fVar49;
      auVar54._12_4_ = fVar43 * fVar51;
      auVar123 = NEON_ext(auVar54,auVar54,8,1);
      fVar53 = auVar54._0_4_ + auVar54._4_4_ + auVar123._0_4_;
      uVar28 = (ulong)((int)uVar28 + 1);
      auVar56._0_4_ = fVar85 - fVar67 * fVar53;
      auVar56._4_4_ = fVar66 - fVar68 * fVar53;
      auVar56._8_4_ = fVar49 - fVar44 * fVar53;
      auVar56._12_4_ = fVar51 - fVar43 * fVar53;
      fVar85 = auVar56._0_4_ * auVar56._0_4_ + auVar56._4_4_ * auVar56._4_4_ +
               auVar56._8_4_ * auVar56._8_4_;
      fVar66 = auVar56._0_4_ * auVar56._0_4_ + auVar56._4_4_ * auVar56._4_4_ +
               auVar56._8_4_ * auVar56._8_4_;
      uVar77 = CONCAT44(fVar66,fVar85);
      uVar131 = NEON_frsqrte(uVar77,4);
      fVar49 = (float)uVar131;
      fVar51 = (float)((ulong)uVar131 >> 0x20);
      uVar131 = NEON_frsqrts(uVar77,CONCAT44(fVar51 * fVar51,fVar49 * fVar49),4);
      fVar49 = fVar49 * (float)uVar131;
      fVar51 = fVar51 * (float)((ulong)uVar131 >> 0x20);
      uVar77 = NEON_frsqrts(uVar77,CONCAT44(fVar51 * fVar51,fVar49 * fVar49),4);
      iVar61 = -(uint)(fVar85 <= 0.0);
      iVar99 = -(uint)(fVar66 <= 0.0);
      auVar55._0_8_ = CONCAT44(-(uint)(0.0 < fVar66),-(uint)(0.0 < fVar85));
      auVar55._8_8_ = auVar55._0_8_;
      fVar49 = (float)uVar77 * fVar49;
      fVar51 = (float)((ulong)uVar77 >> 0x20) * fVar51;
      fVar85 = (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                               CONCAT12((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar49 >> 8) &
                                                  ~(byte)((uint)iVar61 >> 8),
                                                  SUB41(fVar49,0) & ~(byte)iVar61)));
      auVar13._12_4_ = fVar43;
      auVar13._0_12_ = *(undefined1 (*) [12])puVar18;
      auVar14._12_4_ = fVar43;
      auVar14._0_12_ = *(undefined1 (*) [12])puVar19;
      auVar79 = NEON_ext(auVar13,auVar14,4,1);
      auVar62._0_4_ = auVar56._0_4_ * fVar85;
      fVar66 = (float)(CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18),
                                CONCAT16((byte)((uint)fVar51 >> 0x10) &
                                         ~(byte)((uint)iVar99 >> 0x10),
                                         CONCAT15((byte)((uint)fVar51 >> 8) &
                                                  ~(byte)((uint)iVar99 >> 8),
                                                  CONCAT14(SUB41(fVar51,0) & ~(byte)iVar99,fVar85)))
                               ) >> 0x20);
      auVar62._4_4_ = auVar56._4_4_ * fVar66;
      auVar62._8_4_ = auVar56._8_4_ * fVar85;
      auVar62._12_4_ = auVar56._12_4_ * fVar66;
      auVar56 = auVar56 ^ (auVar56 ^ auVar62) & auVar55;
      auVar123 = NEON_ext(auVar56,auVar56,4,1);
      auVar74 = NEON_ext(auVar79,auVar79,8,1);
      uVar77 = NEON_rev64(auVar74._0_8_,4);
      auVar74 = NEON_ext(auVar123,auVar123,8,1);
      uVar131 = NEON_rev64(auVar74._0_8_,4);
      fVar53 = (float)((ulong)uVar77 >> 0x20);
      auVar45._0_4_ = fVar67 * auVar123._0_4_ - auVar79._0_4_ * auVar56._0_4_;
      auVar45._4_4_ = fVar68 * auVar123._4_4_ - auVar79._4_4_ * auVar56._4_4_;
      auVar45._8_4_ = fVar44 * (float)uVar131 - (float)uVar77 * auVar56._8_4_;
      auVar45._12_4_ = fVar43 * (float)((ulong)uVar131 >> 0x20) - fVar53 * auVar56._12_4_;
      auVar123 = NEON_ext(auVar45,auVar45,4,1);
      fVar85 = *pfVar32;
      pfVar32 = pfVar32 + 1;
      fVar66 = *pfVar36;
      pfVar36 = pfVar36 + 1;
      fVar49 = fVar85 * auVar56._0_4_ + fVar66 * auVar123._0_4_;
      fVar51 = fVar85 * auVar56._4_4_ + fVar66 * auVar123._4_4_;
      auVar46._0_8_ = CONCAT44(fVar51,fVar49);
      auVar46._8_4_ = fVar85 * auVar56._8_4_ + fVar66 * auVar45._0_4_;
      auVar46._12_4_ = fVar85 * auVar56._12_4_ + fVar66 * auVar45._4_4_;
      auVar123 = NEON_ext(auVar46,auVar46,4,1);
      auVar74 = NEON_ext(auVar123,auVar123,8,1);
      uVar131 = NEON_rev64(auVar74._0_8_,4);
      *puVar34 = auVar46._0_8_;
      *(float *)(puVar34 + 1) = auVar46._8_4_;
      pfVar22 = (float *)(puVar29 + 1);
      puVar34 = (undefined8 *)((long)puVar34 + uVar25);
      fVar66 = fVar67 * auVar123._0_4_ - auVar79._0_4_ * fVar49;
      fVar85 = fVar68 * auVar123._4_4_ - auVar79._4_4_ * fVar51;
      fVar67 = fVar44 * (float)uVar131 - (float)uVar77 * auVar46._8_4_;
      fVar68 = fVar43 * (float)((ulong)uVar131 >> 0x20) - fVar53 * auVar46._12_4_;
      auVar15._4_4_ = fVar85;
      auVar15._0_4_ = fVar66;
      auVar15._8_4_ = fVar67;
      auVar15._12_4_ = fVar68;
      auVar16._4_4_ = fVar85;
      auVar16._0_4_ = fVar66;
      auVar16._8_4_ = fVar67;
      auVar16._12_4_ = fVar68;
      auVar123 = NEON_ext(auVar15,auVar16,4,1);
      fVar85 = *pfVar21;
      pfVar21 = pfVar21 + 1;
      *puVar29 = CONCAT44(fVar85 * auVar123._4_4_,fVar85 * auVar123._0_4_);
      puVar29 = (undefined8 *)((long)puVar29 + uVar26);
      *pfVar22 = fVar85 * fVar66;
    } while ((uVar27 & 0xff) < (uVar3 & 3));
  }
  lVar20 = FUN_0043c4e0(*puVar38);
  if (lVar20 == 0) {
    return;
  }
  FUN_00443a70(lVar20,&DAT_04085310);
  return;
}

