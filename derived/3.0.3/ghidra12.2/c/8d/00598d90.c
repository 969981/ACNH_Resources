
void FUN_00598d90(long param_1,long param_2)

{
  ushort *puVar1;
  long lVar2;
  ushort *puVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 (*pauVar7) [12];
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  int iVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar56;
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  float fVar60;
  float fVar61;
  undefined1 auVar59 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  int iVar71;
  int iVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar79;
  undefined8 uVar77;
  float fVar80;
  undefined1 auVar78 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar87;
  undefined8 uVar85;
  undefined1 auVar86 [16];
  float fVar88;
  undefined1 auVar89 [16];
  undefined8 uVar90;
  undefined1 auVar91 [16];
  int iVar92;
  int iVar94;
  undefined1 auVar93 [16];
  float fVar95;
  float fVar96;
  float fVar99;
  float fVar100;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined8 uVar101;
  undefined1 auVar102 [16];
  undefined8 uVar103;
  undefined1 auVar104 [16];
  int iVar105;
  int iVar106;
  undefined1 auVar107 [16];
  undefined8 uVar108;
  undefined1 auVar109 [16];
  
  lVar17 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar17 != 0) {
    FUN_00443a00(lVar17,"TtUpdate Some Vertex Frames (T)");
  }
  uVar4 = *(uint *)(param_1 + 0x70);
  lVar17 = *(long *)(param_2 + 0x18);
  uVar26 = (ulong)*(byte *)(param_2 + 0x24);
  lVar27 = *(long *)(param_2 + 0x40);
  uVar28 = (ulong)*(byte *)(param_2 + 0x4c);
  lVar29 = *(long *)(param_2 + 0x58);
  uVar32 = uVar4 + 3;
  if (-1 < (int)uVar4) {
    uVar32 = uVar4;
  }
  uVar30 = (ulong)*(byte *)(param_2 + 100);
  if ((int)uVar4 < 4) {
    uVar31 = 0;
  }
  else {
    uVar31 = 0;
    iVar50 = (int)uVar32 >> 2;
    lVar33 = 0xc;
    lVar34 = 6;
    do {
      lVar24 = *(long *)(param_1 + 0x58);
      puVar1 = (ushort *)(*(long *)(param_1 + 0x68) + lVar34);
      lVar2 = *(long *)(param_1 + 0x68) + uVar31 * 2;
      lVar25 = *(long *)(param_1 + 0x98) + uVar31 * 2;
      puVar3 = (ushort *)(*(long *)(param_1 + 0x98) + lVar34);
      lVar34 = lVar34 + 8;
      iVar50 = iVar50 + -1;
      uVar22 = (ulong)*(ushort *)(lVar24 + (ulong)puVar1[-3] * 2);
      uVar20 = (ulong)*(ushort *)(lVar24 + (ulong)*(ushort *)(lVar2 + 2) * 2);
      uVar18 = (ulong)*(ushort *)(lVar24 + (ulong)*(ushort *)(lVar2 + 4) * 2);
      uVar35 = (ulong)*(ushort *)(lVar24 + (ulong)*puVar1 * 2);
      puVar19 = (undefined8 *)(lVar17 + *(ushort *)(lVar25 + 4) * uVar26);
      uVar85 = puVar19[1];
      uVar77 = *puVar19;
      pfVar5 = (float *)(lVar17 + puVar3[-3] * uVar26);
      puVar19 = (undefined8 *)(lVar17 + *puVar3 * uVar26);
      uVar101 = puVar19[1];
      uVar90 = *puVar19;
      pfVar6 = (float *)(lVar17 + *(ushort *)(lVar25 + 2) * uVar26);
      lVar25 = uVar31 * 4;
      pauVar7 = (undefined1 (*) [12])(lVar27 + uVar22 * uVar28);
      fVar39 = (float)*(undefined8 *)(*pauVar7 + 8);
      fVar40 = (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
      fVar37 = (float)*(undefined8 *)*pauVar7;
      fVar38 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
      auVar89 = *(undefined1 (*) [16])(lVar27 + uVar20 * uVar28);
      auVar97 = *(undefined1 (*) [16])(lVar27 + uVar18 * uVar28);
      puVar23 = (undefined8 *)(lVar29 + uVar22 * uVar30);
      auVar107 = NEON_ext(auVar89,auVar89,4,1);
      auVar109 = NEON_ext(auVar107,auVar107,8,1);
      pfVar8 = (float *)(lVar17 + uVar22 * uVar26);
      uVar108 = NEON_rev64(auVar109._0_8_,4);
      pfVar9 = (float *)(lVar17 + uVar20 * uVar26);
      puVar21 = (undefined8 *)(lVar29 + uVar20 * uVar30);
      pfVar10 = (float *)(lVar17 + uVar18 * uVar26);
      puVar19 = (undefined8 *)(lVar29 + uVar18 * uVar30);
      auVar93._0_4_ = fVar37 * (*pfVar5 - *pfVar8);
      auVar93._4_4_ = fVar38 * (pfVar5[1] - pfVar8[1]);
      auVar93._8_4_ = fVar39 * (pfVar5[2] - pfVar8[2]);
      auVar93._12_4_ = fVar40 * (pfVar5[3] - pfVar8[3]);
      auVar109 = NEON_ext(auVar93,auVar93,8,1);
      pfVar11 = (float *)(lVar17 + uVar35 * uVar26);
      fVar62 = (float)uVar77 - *pfVar10;
      fVar63 = (float)((ulong)uVar77 >> 0x20) - pfVar10[1];
      fVar64 = (float)uVar85 - pfVar10[2];
      fVar65 = (float)((ulong)uVar85 >> 0x20) - pfVar10[3];
      fVar49 = auVar89._0_4_;
      auVar86._0_4_ = fVar49 * (*pfVar6 - *pfVar9);
      fVar41 = auVar89._4_4_;
      auVar86._4_4_ = fVar41 * (pfVar6[1] - pfVar9[1]);
      fVar42 = auVar89._8_4_;
      auVar86._8_4_ = fVar42 * (pfVar6[2] - pfVar9[2]);
      fVar45 = auVar89._12_4_;
      auVar86._12_4_ = fVar45 * (pfVar6[3] - pfVar9[3]);
      fVar70 = auVar109._0_4_ + auVar93._0_4_ + auVar93._4_4_;
      auVar102 = *(undefined1 (*) [16])(lVar27 + uVar35 * uVar28);
      fVar66 = (float)uVar90 - *pfVar11;
      fVar67 = (float)((ulong)uVar90 >> 0x20) - pfVar11[1];
      fVar68 = (float)uVar101 - pfVar11[2];
      fVar69 = (float)((ulong)uVar101 >> 0x20) - pfVar11[3];
      auVar89 = NEON_ext(auVar86,auVar86,8,1);
      fVar76 = auVar97._0_4_;
      auVar91._0_4_ = fVar76 * fVar62;
      fVar83 = auVar97._4_4_;
      auVar91._4_4_ = fVar83 * fVar63;
      fVar84 = auVar97._8_4_;
      auVar91._8_4_ = fVar84 * fVar64;
      fVar47 = auVar97._12_4_;
      auVar91._12_4_ = fVar47 * fVar65;
      pfVar10 = (float *)(*(long *)(param_1 + 0xa8) + lVar33);
      lVar2 = *(long *)(param_1 + 0xa8) + lVar25;
      auVar109 = NEON_ext(auVar91,auVar91,8,1);
      fVar48 = auVar102._0_4_;
      auVar78._0_4_ = fVar48 * fVar66;
      fVar51 = auVar102._4_4_;
      auVar78._4_4_ = fVar51 * fVar67;
      fVar52 = auVar102._8_4_;
      auVar78._8_4_ = fVar52 * fVar68;
      fVar53 = auVar102._12_4_;
      auVar78._12_4_ = fVar53 * fVar69;
      fVar81 = auVar89._0_4_ + auVar86._0_4_ + auVar86._4_4_;
      fVar88 = auVar109._0_4_ + auVar91._0_4_ + auVar91._4_4_;
      auVar89 = NEON_ext(auVar78,auVar78,8,1);
      fVar73 = auVar89._0_4_ + auVar78._0_4_ + auVar78._4_4_;
      fVar54 = (*pfVar5 - *pfVar8) - fVar37 * fVar70;
      fVar56 = (pfVar5[1] - pfVar8[1]) - fVar38 * fVar70;
      fVar57 = (pfVar5[2] - pfVar8[2]) - fVar39 * fVar70;
      puVar36 = (undefined8 *)(lVar29 + uVar35 * uVar30);
      uVar31 = uVar31 + 4;
      fVar58 = (*pfVar6 - *pfVar9) - fVar49 * fVar81;
      fVar60 = (pfVar6[1] - pfVar9[1]) - fVar41 * fVar81;
      fVar61 = (pfVar6[2] - pfVar9[2]) - fVar42 * fVar81;
      fVar62 = fVar62 - fVar76 * fVar88;
      fVar63 = fVar63 - fVar83 * fVar88;
      fVar64 = fVar64 - fVar84 * fVar88;
      fVar66 = fVar66 - fVar48 * fVar73;
      fVar67 = fVar67 - fVar51 * fVar73;
      fVar68 = fVar68 - fVar52 * fVar73;
      fVar82 = fVar54 * fVar54 + fVar56 * fVar56 + fVar57 * fVar57;
      fVar87 = fVar54 * fVar54 + fVar56 * fVar56 + fVar57 * fVar57;
      uVar85 = CONCAT44(fVar87,fVar82);
      fVar95 = fVar64 * fVar64 + fVar62 * fVar62 + fVar63 * fVar63;
      fVar99 = fVar64 * fVar64 + fVar62 * fVar62 + fVar63 * fVar63;
      uVar101 = CONCAT44(fVar99,fVar95);
      auVar89._12_4_ = fVar40;
      auVar89._0_12_ = *pauVar7;
      auVar109._12_4_ = fVar40;
      auVar109._0_12_ = *pauVar7;
      auVar109 = NEON_ext(auVar89,auVar109,4,1);
      auVar89 = NEON_ext(auVar109,auVar109,8,1);
      fVar74 = fVar58 * fVar58 + fVar60 * fVar60 + fVar61 * fVar61;
      fVar79 = fVar58 * fVar58 + fVar60 * fVar60 + fVar61 * fVar61;
      uVar77 = CONCAT44(fVar79,fVar74);
      uVar90 = NEON_frsqrte(uVar85,4);
      uVar103 = NEON_frsqrte(uVar77,4);
      fVar75 = (float)uVar103;
      fVar80 = (float)((ulong)uVar103 >> 0x20);
      iVar92 = -(uint)(fVar74 <= 0.0);
      iVar94 = -(uint)(fVar79 <= 0.0);
      uVar77 = NEON_frsqrts(uVar77,CONCAT44(fVar80 * fVar80,fVar75 * fVar75),4);
      uVar103 = NEON_rev64(auVar89._0_8_,4);
      iVar71 = -(uint)(fVar82 <= 0.0);
      iVar72 = -(uint)(fVar87 <= 0.0);
      fVar74 = (float)uVar90;
      fVar79 = (float)((ulong)uVar90 >> 0x20);
      uVar85 = NEON_frsqrts(uVar85,CONCAT44(fVar79 * fVar79,fVar74 * fVar74),4);
      uVar90 = NEON_frsqrte(uVar101,4);
      fVar87 = (float)uVar90;
      fVar100 = (float)((ulong)uVar90 >> 0x20);
      iVar105 = -(uint)(fVar95 <= 0.0);
      iVar106 = -(uint)(fVar99 <= 0.0);
      uVar90 = NEON_frsqrts(uVar101,CONCAT44(fVar100 * fVar100,fVar87 * fVar87),4);
      fVar74 = fVar74 * (float)uVar85;
      fVar79 = fVar79 * (float)((ulong)uVar85 >> 0x20);
      fVar75 = fVar75 * (float)uVar77;
      fVar80 = fVar80 * (float)((ulong)uVar77 >> 0x20);
      auVar104 = NEON_ext(auVar97,auVar97,4,1);
      fVar75 = (float)CONCAT13((byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                               CONCAT12((byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar75 >> 8) &
                                                  ~(byte)((uint)iVar92 >> 8),
                                                  SUB41(fVar75,0) & ~(byte)iVar92)));
      fVar74 = (float)CONCAT13((byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                               CONCAT12((byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar74 >> 8) &
                                                  ~(byte)((uint)iVar71 >> 8),
                                                  SUB41(fVar74,0) & ~(byte)iVar71)));
      fVar87 = fVar87 * (float)uVar90;
      fVar100 = fVar100 * (float)((ulong)uVar90 >> 0x20);
      auVar89 = NEON_ext(auVar104,auVar104,8,1);
      uVar90 = NEON_rev64(auVar89._0_8_,4);
      fVar82 = fVar68 * fVar68 + fVar66 * fVar66 + fVar67 * fVar67;
      fVar95 = fVar68 * fVar68 + fVar66 * fVar66 + fVar67 * fVar67;
      uVar77 = CONCAT44(fVar95,fVar82);
      fVar96 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                               CONCAT12((byte)((uint)fVar87 >> 0x10) &
                                        ~(byte)((uint)iVar105 >> 0x10),
                                        CONCAT11((byte)((uint)fVar87 >> 8) &
                                                 ~(byte)((uint)iVar105 >> 8),
                                                 SUB41(fVar87,0) & ~(byte)iVar105)));
      uVar85 = NEON_frsqrte(uVar77,4);
      fVar87 = (float)uVar85;
      fVar99 = (float)((ulong)uVar85 >> 0x20);
      iVar71 = -(uint)(fVar82 <= 0.0);
      iVar92 = -(uint)(fVar95 <= 0.0);
      uVar77 = NEON_frsqrts(uVar77,CONCAT44(fVar99 * fVar99,fVar87 * fVar87),4);
      fVar87 = fVar87 * (float)uVar77;
      fVar99 = fVar99 * (float)((ulong)uVar77 >> 0x20);
      auVar93 = NEON_ext(auVar102,auVar102,4,1);
      auVar55._0_4_ = fVar54 * fVar74;
      fVar54 = (float)(CONCAT17((byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                                CONCAT16((byte)((uint)fVar79 >> 0x10) &
                                         ~(byte)((uint)iVar72 >> 0x10),
                                         CONCAT15((byte)((uint)fVar79 >> 8) &
                                                  ~(byte)((uint)iVar72 >> 8),
                                                  CONCAT14(SUB41(fVar79,0) & ~(byte)iVar72,fVar74)))
                               ) >> 0x20);
      auVar55._4_4_ = fVar56 * fVar54;
      auVar55._8_4_ = fVar57 * fVar74;
      auVar55._12_4_ = ((pfVar5[3] - pfVar8[3]) - fVar40 * fVar70) * fVar54;
      auVar89 = NEON_ext(auVar55,auVar55,4,1);
      auVar59._0_4_ = fVar58 * fVar75;
      fVar54 = (float)(CONCAT17((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18),
                                CONCAT16((byte)((uint)fVar80 >> 0x10) &
                                         ~(byte)((uint)iVar94 >> 0x10),
                                         CONCAT15((byte)((uint)fVar80 >> 8) &
                                                  ~(byte)((uint)iVar94 >> 8),
                                                  CONCAT14(SUB41(fVar80,0) & ~(byte)iVar94,fVar75)))
                               ) >> 0x20);
      auVar59._4_4_ = fVar60 * fVar54;
      auVar59._8_4_ = fVar61 * fVar75;
      auVar59._12_4_ = ((pfVar6[3] - pfVar9[3]) - fVar45 * fVar81) * fVar54;
      auVar102 = NEON_ext(auVar93,auVar93,8,1);
      fVar62 = fVar62 * fVar96;
      fVar54 = (float)(CONCAT17((byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar106 >> 0x18),
                                CONCAT16((byte)((uint)fVar100 >> 0x10) &
                                         ~(byte)((uint)iVar106 >> 0x10),
                                         CONCAT15((byte)((uint)fVar100 >> 8) &
                                                  ~(byte)((uint)iVar106 >> 8),
                                                  CONCAT14(SUB41(fVar100,0) & ~(byte)iVar106,fVar96)
                                                 ))) >> 0x20);
      fVar63 = fVar63 * fVar54;
      fVar64 = fVar64 * fVar96;
      fVar54 = (fVar65 - fVar47 * fVar88) * fVar54;
      auVar97 = NEON_ext(auVar89,auVar89,8,1);
      uVar77 = NEON_rev64(auVar97._0_8_,4);
      fVar58 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                               CONCAT12((byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar87 >> 8) &
                                                  ~(byte)((uint)iVar71 >> 8),
                                                  SUB41(fVar87,0) & ~(byte)iVar71)));
      auVar98._4_4_ = fVar63;
      auVar98._0_4_ = fVar62;
      auVar98._8_4_ = fVar64;
      auVar98._12_4_ = fVar54;
      auVar14._4_4_ = fVar63;
      auVar14._0_4_ = fVar62;
      auVar14._8_4_ = fVar64;
      auVar14._12_4_ = fVar54;
      auVar97 = NEON_ext(auVar98,auVar14,4,1);
      fVar57 = pfVar10[-3];
      uVar85 = NEON_rev64(auVar102._0_8_,4);
      auVar102 = NEON_ext(auVar97,auVar97,8,1);
      fVar37 = fVar37 * auVar89._0_4_ - auVar109._0_4_ * auVar55._0_4_;
      fVar38 = fVar38 * auVar89._4_4_ - auVar109._4_4_ * auVar55._4_4_;
      fVar39 = fVar39 * (float)uVar77 - (float)uVar103 * auVar55._8_4_;
      fVar40 = fVar40 * (float)((ulong)uVar77 >> 0x20) -
               (float)((ulong)uVar103 >> 0x20) * auVar55._12_4_;
      uVar77 = NEON_rev64(auVar102._0_8_,4);
      fVar66 = fVar66 * fVar58;
      fVar56 = (float)(CONCAT17((byte)((uint)fVar99 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                                CONCAT16((byte)((uint)fVar99 >> 0x10) &
                                         ~(byte)((uint)iVar92 >> 0x10),
                                         CONCAT15((byte)((uint)fVar99 >> 8) &
                                                  ~(byte)((uint)iVar92 >> 8),
                                                  CONCAT14(SUB41(fVar99,0) & ~(byte)iVar92,fVar58)))
                               ) >> 0x20);
      fVar67 = fVar67 * fVar56;
      fVar68 = fVar68 * fVar58;
      fVar56 = (fVar69 - fVar53 * fVar73) * fVar56;
      auVar89 = NEON_ext(auVar59,auVar59,4,1);
      auVar109 = NEON_ext(auVar89,auVar89,8,1);
      auVar15._4_4_ = fVar67;
      auVar15._0_4_ = fVar66;
      auVar15._8_4_ = fVar68;
      auVar15._12_4_ = fVar56;
      auVar16._4_4_ = fVar67;
      auVar16._0_4_ = fVar66;
      auVar16._8_4_ = fVar68;
      auVar16._12_4_ = fVar56;
      auVar98 = NEON_ext(auVar15,auVar16,4,1);
      uVar103 = NEON_rev64(auVar109._0_8_,4);
      auVar109 = NEON_ext(auVar98,auVar98,8,1);
      uVar101 = NEON_rev64(auVar109._0_8_,4);
      auVar46._0_4_ = fVar76 * auVar97._0_4_ - auVar104._0_4_ * fVar62;
      auVar46._4_4_ = fVar83 * auVar97._4_4_ - auVar104._4_4_ * fVar63;
      auVar46._8_4_ = fVar84 * (float)uVar77 - (float)uVar90 * fVar64;
      auVar46._12_4_ =
           fVar47 * (float)((ulong)uVar77 >> 0x20) - (float)((ulong)uVar90 >> 0x20) * fVar54;
      fVar76 = *(float *)(lVar2 + 4);
      fVar83 = *(float *)(lVar2 + 8);
      fVar84 = *pfVar10;
      auVar104._0_4_ = fVar49 * auVar89._0_4_ - auVar107._0_4_ * auVar59._0_4_;
      auVar104._4_4_ = fVar41 * auVar89._4_4_ - auVar107._4_4_ * auVar59._4_4_;
      auVar104._8_4_ = fVar42 * (float)uVar103 - (float)uVar108 * auVar59._8_4_;
      auVar104._12_4_ =
           fVar45 * (float)((ulong)uVar103 >> 0x20) -
           (float)((ulong)uVar108 >> 0x20) * auVar59._12_4_;
      auVar97._4_4_ = fVar38;
      auVar97._0_4_ = fVar37;
      auVar97._8_4_ = fVar39;
      auVar97._12_4_ = fVar40;
      auVar102._4_4_ = fVar38;
      auVar102._0_4_ = fVar37;
      auVar102._8_4_ = fVar39;
      auVar102._12_4_ = fVar40;
      auVar97 = NEON_ext(auVar97,auVar102,4,1);
      auVar109 = NEON_ext(auVar46,auVar46,4,1);
      pfVar10 = (float *)(*(long *)(param_1 + 0xb8) + lVar33);
      fVar38 = pfVar10[-3];
      lVar25 = *(long *)(param_1 + 0xb8) + lVar25;
      lVar33 = lVar33 + 0x10;
      auVar89 = NEON_ext(auVar104,auVar104,4,1);
      auVar107._0_4_ = fVar48 * auVar98._0_4_ - auVar93._0_4_ * fVar66;
      auVar107._4_4_ = fVar51 * auVar98._4_4_ - auVar93._4_4_ * fVar67;
      auVar107._8_4_ = fVar52 * (float)uVar101 - (float)uVar85 * fVar68;
      auVar107._12_4_ =
           fVar53 * (float)((ulong)uVar101 >> 0x20) - (float)((ulong)uVar85 >> 0x20) * fVar56;
      auVar102 = NEON_ext(auVar107,auVar107,4,1);
      fVar39 = *(float *)(lVar25 + 4);
      fVar40 = *(float *)(lVar25 + 8);
      fVar49 = *pfVar10;
      *puVar23 = CONCAT44(auVar55._4_4_ * fVar57 + auVar97._4_4_ * fVar38,
                          auVar55._0_4_ * fVar57 + auVar97._0_4_ * fVar38);
      *(float *)(puVar23 + 1) = auVar55._8_4_ * fVar57 + fVar37 * fVar38;
      *puVar21 = CONCAT44(auVar59._4_4_ * fVar76 + auVar89._4_4_ * fVar39,
                          auVar59._0_4_ * fVar76 + auVar89._0_4_ * fVar39);
      *(float *)(puVar21 + 1) = auVar59._8_4_ * fVar76 + auVar104._0_4_ * fVar39;
      *puVar19 = CONCAT44(fVar63 * fVar83 + auVar109._4_4_ * fVar40,
                          fVar62 * fVar83 + auVar109._0_4_ * fVar40);
      *(float *)(puVar19 + 1) = fVar64 * fVar83 + auVar46._0_4_ * fVar40;
      *puVar36 = CONCAT44(fVar67 * fVar84 + auVar102._4_4_ * fVar49,
                          fVar66 * fVar84 + auVar102._0_4_ * fVar49);
      *(float *)(puVar36 + 1) = fVar68 * fVar84 + auVar107._0_4_ * fVar49;
    } while (iVar50 != 0);
    uVar4 = *(uint *)(param_1 + 0x70);
    uVar31 = uVar31 & 0xfffffffc;
  }
  if ((uVar4 & 3) != 0) {
    uVar32 = 0;
    lVar33 = uVar31 << 2;
    lVar34 = uVar31 << 1;
    do {
      uVar32 = uVar32 + 1;
      uVar31 = (ulong)*(ushort *)
                       (*(long *)(param_1 + 0x58) +
                       (ulong)*(ushort *)(*(long *)(param_1 + 0x68) + lVar34) * 2);
      puVar19 = (undefined8 *)(lVar17 + *(ushort *)(*(long *)(param_1 + 0x98) + lVar34) * uVar26);
      uVar85 = puVar19[1];
      uVar77 = *puVar19;
      pfVar10 = (float *)(lVar17 + uVar31 * uVar26);
      fVar37 = (float)uVar77 - *pfVar10;
      fVar38 = (float)((ulong)uVar77 >> 0x20) - pfVar10[1];
      fVar39 = (float)uVar85 - pfVar10[2];
      fVar40 = (float)((ulong)uVar85 >> 0x20) - pfVar10[3];
      puVar19 = (undefined8 *)(lVar29 + uVar31 * uVar30);
      auVar89 = *(undefined1 (*) [16])(lVar27 + uVar31 * uVar28);
      fVar83 = auVar89._0_4_;
      auVar43._0_4_ = fVar83 * fVar37;
      fVar84 = auVar89._4_4_;
      auVar43._4_4_ = fVar84 * fVar38;
      fVar47 = auVar89._8_4_;
      auVar43._8_4_ = fVar47 * fVar39;
      fVar48 = auVar89._12_4_;
      auVar43._12_4_ = fVar48 * fVar40;
      auVar109 = NEON_ext(auVar43,auVar43,8,1);
      fVar41 = auVar43._0_4_ + auVar43._4_4_ + auVar109._0_4_;
      lVar34 = lVar34 + 2;
      fVar37 = fVar37 - fVar83 * fVar41;
      fVar38 = fVar38 - fVar84 * fVar41;
      fVar39 = fVar39 - fVar47 * fVar41;
      fVar49 = fVar37 * fVar37 + fVar38 * fVar38 + fVar39 * fVar39;
      fVar45 = fVar37 * fVar37 + fVar38 * fVar38 + fVar39 * fVar39;
      uVar77 = CONCAT44(fVar45,fVar49);
      uVar85 = NEON_frsqrte(uVar77,4);
      fVar42 = (float)uVar85;
      fVar76 = (float)((ulong)uVar85 >> 0x20);
      iVar50 = -(uint)(fVar49 <= 0.0);
      iVar71 = -(uint)(fVar45 <= 0.0);
      uVar77 = NEON_frsqrts(uVar77,CONCAT44(fVar76 * fVar76,fVar42 * fVar42),4);
      fVar42 = fVar42 * (float)uVar77;
      fVar76 = fVar76 * (float)((ulong)uVar77 >> 0x20);
      fVar42 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                               CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar42 >> 8) &
                                                  ~(byte)((uint)iVar50 >> 8),
                                                  SUB41(fVar42,0) & ~(byte)iVar50)));
      auVar109 = NEON_ext(auVar89,auVar89,4,1);
      auVar89 = NEON_ext(auVar109,auVar109,8,1);
      uVar77 = NEON_rev64(auVar89._0_8_,4);
      fVar37 = fVar37 * fVar42;
      fVar49 = (float)(CONCAT17((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                                CONCAT16((byte)((uint)fVar76 >> 0x10) &
                                         ~(byte)((uint)iVar71 >> 0x10),
                                         CONCAT15((byte)((uint)fVar76 >> 8) &
                                                  ~(byte)((uint)iVar71 >> 8),
                                                  CONCAT14(SUB41(fVar76,0) & ~(byte)iVar71,fVar42)))
                               ) >> 0x20);
      fVar38 = fVar38 * fVar49;
      fVar39 = fVar39 * fVar42;
      fVar49 = (fVar40 - fVar48 * fVar41) * fVar49;
      auVar12._4_4_ = fVar38;
      auVar12._0_4_ = fVar37;
      auVar12._8_4_ = fVar39;
      auVar12._12_4_ = fVar49;
      auVar13._4_4_ = fVar38;
      auVar13._0_4_ = fVar37;
      auVar13._8_4_ = fVar39;
      auVar13._12_4_ = fVar49;
      auVar89 = NEON_ext(auVar12,auVar13,4,1);
      auVar97 = NEON_ext(auVar89,auVar89,8,1);
      uVar85 = NEON_rev64(auVar97._0_8_,4);
      auVar44._0_4_ = fVar83 * auVar89._0_4_ - auVar109._0_4_ * fVar37;
      auVar44._4_4_ = fVar84 * auVar89._4_4_ - auVar109._4_4_ * fVar38;
      auVar44._8_4_ = fVar47 * (float)uVar85 - (float)uVar77 * fVar39;
      auVar44._12_4_ =
           fVar48 * (float)((ulong)uVar85 >> 0x20) - (float)((ulong)uVar77 >> 0x20) * fVar49;
      auVar89 = NEON_ext(auVar44,auVar44,4,1);
      fVar40 = *(float *)(*(long *)(param_1 + 0xa8) + lVar33);
      fVar49 = *(float *)(*(long *)(param_1 + 0xb8) + lVar33);
      lVar33 = lVar33 + 4;
      *puVar19 = CONCAT44(fVar38 * fVar40 + auVar89._4_4_ * fVar49,
                          fVar37 * fVar40 + auVar89._0_4_ * fVar49);
      *(float *)(puVar19 + 1) = fVar39 * fVar40 + auVar44._0_4_ * fVar49;
    } while ((uVar32 & 0xff) < (uVar4 & 3));
  }
  lVar17 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar17 == 0) {
    return;
  }
  FUN_00443a70(lVar17,&DAT_04085310);
  return;
}

