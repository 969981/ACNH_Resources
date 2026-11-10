
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00346560(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,long param_5)

{
  undefined1 (*pauVar1) [12];
  char cVar2;
  int iVar3;
  unkbyte9 *pVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined2 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined5 uVar42;
  float *pfVar43;
  long lVar44;
  long lVar45;
  float *pfVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  byte bVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  byte bVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  float fVar92;
  float fVar93;
  undefined8 uVar94;
  float fVar96;
  float fVar97;
  undefined1 auVar95 [16];
  float fVar98;
  float fVar99;
  undefined8 uVar100;
  float fVar105;
  undefined8 uVar101;
  undefined8 uVar102;
  float fVar106;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar112;
  undefined8 uVar110;
  undefined8 uVar111;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  float fVar123;
  undefined4 uVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined8 uVar134;
  float fVar135;
  float fVar136;
  undefined8 uVar137;
  float fVar138;
  undefined8 uVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined8 uVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  if (param_3 != 3) {
    lVar44 = *(long *)(*(long *)(param_2 + 0x240) + (ulong)param_3 * 8 + 0x350);
    if (lVar44 != 0) {
      pfVar46 = *(float **)(*(long *)(param_2 + 0x240) + 0x348);
      FUN_00348260(param_1,*(undefined8 *)(lVar44 + 8),0x1ff);
      fVar17 = pfVar46[0xd];
      fVar13 = pfVar46[0xe];
      fVar132 = pfVar46[0xb];
      fVar14 = pfVar46[0xc];
      fVar128 = **(float **)(param_2 + 0x4a8);
      fVar129 = pfVar46[4];
      fVar130 = pfVar46[5];
      fVar131 = pfVar46[6];
      if (pfVar46[0xf] == 0.0) {
        fVar16 = pfVar46[0x11];
        uStack_e8 = (ulong)(uint)pfVar46[0x12];
        local_f0 = CONCAT17((char)((uint)fVar16 >> 0x18),
                            CONCAT16((char)((uint)fVar16 >> 0x10),
                                     CONCAT15((char)((uint)fVar16 >> 8),
                                              *(undefined5 *)(pfVar46 + 0x10))));
        FUN_00330278(&local_e0,&local_f0);
        fVar16 = (float)local_e0;
        fVar106 = (float)_DAT_04102200;
        fVar92 = (float)((ulong)_DAT_04102200 >> 0x20);
        fVar93 = (float)_UNK_04102208;
        fVar115 = (float)((ulong)_UNK_04102208 >> 0x20);
        fVar171 = (float)_UNK_041023d8;
        fVar123 = (float)((ulong)_UNK_041023d8 >> 0x20);
        fVar97 = (float)_DAT_041023d0;
        fVar169 = (float)((ulong)_DAT_041023d0 >> 0x20);
        fVar98 = (float)uStack_d0;
        fVar49 = (float)((ulong)local_e0 >> 0x20);
        fVar105 = (float)_DAT_04102880;
        fVar26 = (float)((ulong)_DAT_04102880 >> 0x20);
        fVar113 = (float)_UNK_04102888;
        fVar109 = (float)((ulong)_UNK_04102888 >> 0x20);
        fVar19 = (float)((ulong)uStack_d0 >> 0x20);
        fVar96 = (float)uStack_d8;
        fVar20 = (float)uStack_c8;
        fVar47 = (float)((ulong)uStack_d8 >> 0x20);
        fVar133 = (float)DAT_04102210;
        fVar125 = (float)((ulong)DAT_04102210 >> 0x20);
        fVar126 = (float)DAT_04102218;
        fVar127 = (float)((ulong)DAT_04102218 >> 0x20);
        fVar22 = (float)local_c0;
        fVar23 = (float)((ulong)local_c0 >> 0x20);
        fVar21 = (float)((ulong)uStack_c8 >> 0x20);
        fVar99 = (float)uStack_b8;
        fVar24 = (float)((ulong)uStack_b8 >> 0x20);
        fVar108 = fVar106 * fVar16 + fVar105 * fVar49 + fVar97 * fVar96 + fVar133 * fVar47 + 0.0;
        fVar112 = fVar92 * fVar16 + fVar26 * fVar49 + fVar169 * fVar96 + fVar125 * fVar47 + 0.0;
        fVar114 = fVar93 * fVar16 + fVar113 * fVar49 + fVar171 * fVar96 + fVar126 * fVar47 + 0.0;
        fVar117 = fVar115 * fVar16 + fVar109 * fVar49 + fVar123 * fVar96 + fVar127 * fVar47 + 0.0;
        fVar116 = fVar106 * fVar98 + fVar105 * fVar19 + fVar97 * fVar20 + fVar133 * fVar21 + 0.0;
        fVar118 = fVar92 * fVar98 + fVar26 * fVar19 + fVar169 * fVar20 + fVar125 * fVar21 + 0.0;
        fVar107 = fVar93 * fVar98 + fVar113 * fVar19 + fVar171 * fVar20 + fVar126 * fVar21 + 0.0;
        fVar31 = fVar115 * fVar98 + fVar109 * fVar19 + fVar123 * fVar20 + fVar127 * fVar21 + 0.0;
        pauVar1 = (undefined1 (*) [12])(param_2 + 0x3f0);
        uVar124 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x3f8) >> 0x20);
        fVar168 = (float)*(undefined8 *)*pauVar1;
        fVar170 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        fVar98 = fVar106 * fVar22 + fVar105 * fVar23 + fVar97 * fVar99 + fVar133 * fVar24 + 0.0;
        fVar19 = fVar92 * fVar22 + fVar26 * fVar23 + fVar169 * fVar99 + fVar125 * fVar24 + 0.0;
        fVar21 = fVar93 * fVar22 + fVar113 * fVar23 + fVar171 * fVar99 + fVar126 * fVar24 + 0.0;
        fVar23 = fVar115 * fVar22 + fVar109 * fVar23 + fVar123 * fVar99 + fVar127 * fVar24 + 0.0;
        auVar41 = *(undefined1 (*) [12])(pfVar46 + 8);
        fVar16 = auVar41._0_4_ +
                 fVar106 * fStack_b0 + fVar105 * fStack_ac + fVar97 * fStack_a8 +
                 fVar133 * fStack_a4;
        fVar49 = auVar41._4_4_ +
                 fVar92 * fStack_b0 + fVar26 * fStack_ac + fVar169 * fStack_a8 + fVar125 * fStack_a4
        ;
        fVar96 = auVar41._8_4_ +
                 fVar93 * fStack_b0 + fVar113 * fStack_ac + fVar171 * fStack_a8 +
                 fVar126 * fStack_a4;
        fVar47 = fVar115 * fStack_b0 + fVar109 * fStack_ac + fVar123 * fStack_a8 +
                 fVar127 * fStack_a4 + 0.0;
        auVar5 = *(undefined1 (*) [16])(param_2 + 0x3d0);
        pVar4 = (unkbyte9 *)(param_2 + 0x3e0);
        uVar100 = *(undefined8 *)(param_2 + 1000);
        uVar57 = (undefined1)((ulong)uVar100 >> 8);
        uVar59 = (undefined1)((ulong)uVar100 >> 0x10);
        uVar61 = (undefined1)((ulong)uVar100 >> 0x18);
        uVar63 = (undefined1)((ulong)uVar100 >> 0x20);
        uVar67 = (undefined1)((ulong)uVar100 >> 0x28);
        uVar69 = (undefined1)((ulong)uVar100 >> 0x30);
        uVar72 = (undefined1)((ulong)uVar100 >> 0x38);
        auVar103 = NEON_ext(auVar5,auVar5,8,1);
        fVar92 = auVar103._0_4_;
        auVar103[9] = uVar57;
        auVar103._0_9_ = *pVar4;
        auVar103[10] = uVar59;
        auVar103[0xb] = uVar61;
        auVar103[0xc] = uVar63;
        auVar103[0xd] = uVar67;
        auVar103[0xe] = uVar69;
        auVar103[0xf] = uVar72;
        auVar104[9] = uVar57;
        auVar104._0_9_ = *pVar4;
        auVar104[10] = uVar59;
        auVar104[0xb] = uVar61;
        auVar104[0xc] = uVar63;
        auVar104[0xd] = uVar67;
        auVar104[0xe] = uVar69;
        auVar104[0xf] = uVar72;
        auVar103 = NEON_ext(auVar103,auVar104,8,1);
        auVar32._12_4_ = uVar124;
        auVar32._0_12_ = *pauVar1;
        auVar33._12_4_ = uVar124;
        auVar33._0_12_ = *pauVar1;
        auVar104 = NEON_ext(auVar32,auVar33,8,1);
        fVar93 = auVar104._0_4_;
        uVar100 = NEON_fmov(0x3f800000,4);
        fVar171 = (float)*(undefined8 *)(param_2 + 0x408);
        fVar109 = auVar5._0_4_;
        fVar106 = auVar5._4_4_;
        fVar26 = (float)*(undefined8 *)pVar4;
        fVar105 = (float)((ulong)*(undefined8 *)pVar4 >> 0x20);
        fVar113 = auVar103._0_4_;
        fVar97 = (float)*(undefined8 *)(param_2 + 0x400);
        fVar169 = (float)((ulong)*(undefined8 *)(param_2 + 0x400) >> 0x20);
        fVar123 = (float)((ulong)uVar100 >> 0x20);
        uVar110 = CONCAT44(fVar106 * fVar98 + fVar105 * fVar19 + fVar170 * fVar21 + fVar169 * fVar23
                           ,fVar109 * fVar98 + fVar26 * fVar19 + fVar168 * fVar21 + fVar97 * fVar23)
        ;
        fVar115 = fVar92 * fVar98 + fVar113 * fVar19 + fVar93 * fVar21 + fVar171 * fVar23;
        uStack_f8 = CONCAT44(fVar108 * 0.0 + fVar112 * 0.0 + fVar114 * 0.0 + fVar123 * fVar117,
                             fVar92 * fVar108 + fVar113 * fVar112 + fVar93 * fVar114 +
                             fVar171 * fVar117);
        local_100 = CONCAT44(fVar106 * fVar108 + fVar105 * fVar112 + fVar170 * fVar114 +
                             fVar169 * fVar117,
                             fVar109 * fVar108 + fVar26 * fVar112 + fVar168 * fVar114 +
                             fVar97 * fVar117);
        fVar20 = fVar106 * fVar16 + fVar105 * fVar49 + fVar170 * fVar96 + fVar169 * fVar47;
        fVar22 = fVar92 * fVar16 + fVar113 * fVar49 + fVar93 * fVar96 + fVar171 * fVar47;
        fVar24 = fVar16 * 0.0 + fVar49 * 0.0 + fVar96 * 0.0 + fVar123 * fVar47;
        fVar99 = fVar109 * fVar116 + fVar26 * fVar118 + fVar168 * fVar107 + fVar97 * fVar31;
        fVar105 = fVar106 * fVar116 + fVar105 * fVar118 + fVar170 * fVar107 + fVar169 * fVar31;
        fVar106 = fVar92 * fVar116 + fVar113 * fVar118 + fVar93 * fVar107 + fVar171 * fVar31;
        fVar107 = fVar116 * 0.0 + fVar118 * 0.0 + fVar107 * 0.0 + fVar123 * fVar31;
        uStack_128 = SUB41(fVar22,0);
        uStack_127 = (undefined7)
                     (CONCAT17((char)((uint)fVar24 >> 0x18),
                               CONCAT16((char)((uint)fVar24 >> 0x10),
                                        CONCAT15((char)((uint)fVar24 >> 8),
                                                 CONCAT14(SUB41(fVar24,0),fVar22)))) >> 8);
        uVar100 = CONCAT17((char)((uint)fVar20 >> 0x18),
                           CONCAT16((char)((uint)fVar20 >> 0x10),
                                    CONCAT15((char)((uint)fVar20 >> 8),
                                             CONCAT14(SUB41(fVar20,0),
                                                      fVar109 * fVar16 + fVar26 * fVar49 +
                                                      fVar168 * fVar96 + fVar97 * fVar47))));
        uStack_118 = SUB41(fVar115,0);
        uStack_117 = (undefined7)
                     (CONCAT44(fVar98 * 0.0 + fVar19 * 0.0 + fVar21 * 0.0 + fVar123 * fVar23,fVar115
                              ) >> 8);
        fVar16 = pfVar46[3];
      }
      else {
        lVar45 = *(long *)(param_5 + 8);
        fVar20 = (float)DAT_04102210;
        fVar98 = *(float *)(lVar45 + 0x1d0) + fVar20;
        fVar22 = (float)((ulong)DAT_04102210 >> 0x20);
        fVar19 = *(float *)(lVar45 + 0x1d4) + fVar22;
        fVar99 = (float)DAT_04102218;
        fVar16 = *(float *)(lVar45 + 0x1d8) + fVar99;
        fVar105 = (float)((ulong)DAT_04102218 >> 0x20);
        fVar49 = fVar105 + 0.0;
        uVar100 = CONCAT17((char)((uint)fVar49 >> 0x18),
                           CONCAT16((char)((uint)fVar49 >> 0x10),
                                    CONCAT15((char)((uint)fVar49 >> 8),
                                             CONCAT14(SUB41(fVar49,0),fVar16))));
        uStack_128 = SUB41(fVar16,0);
        uStack_127 = (undefined7)((ulong)uVar100 >> 8);
        fVar16 = pfVar46[0x11];
        uStack_e8 = (ulong)(uint)pfVar46[0x12];
        local_f0 = CONCAT17((char)((uint)fVar16 >> 0x18),
                            CONCAT16((char)((uint)fVar16 >> 0x10),
                                     CONCAT15((char)((uint)fVar16 >> 8),
                                              *(undefined5 *)(pfVar46 + 0x10))));
        FUN_00330278(&local_e0,&local_f0);
        fVar16 = (float)_DAT_04102200;
        fVar49 = (float)((ulong)_DAT_04102200 >> 0x20);
        fVar96 = (float)_UNK_04102208;
        fVar47 = (float)((ulong)_UNK_04102208 >> 0x20);
        fVar21 = (float)_DAT_04102880;
        fVar23 = (float)((ulong)_DAT_04102880 >> 0x20);
        fVar24 = (float)_UNK_04102888;
        fVar26 = (float)((ulong)_UNK_04102888 >> 0x20);
        fVar171 = (float)uStack_b8;
        fVar123 = (float)((ulong)uStack_b8 >> 0x20);
        fVar168 = (float)local_c0;
        fVar170 = (float)((ulong)local_c0 >> 0x20);
        fVar93 = (float)uStack_d0;
        fVar115 = (float)((ulong)uStack_d0 >> 0x20);
        fVar113 = (float)_DAT_041023d0;
        fVar109 = (float)((ulong)_DAT_041023d0 >> 0x20);
        fVar116 = (float)_UNK_041023d8;
        fVar118 = (float)((ulong)_UNK_041023d8 >> 0x20);
        fVar108 = (float)uStack_c8;
        fVar112 = (float)((ulong)uStack_c8 >> 0x20);
        fVar169 = pfVar46[8];
        fVar135 = pfVar46[9];
        fVar136 = pfVar46[10];
        fVar106 = fVar16 * (float)local_e0 + fVar21 * local_e0._4_4_ + fVar113 * (float)uStack_d8 +
                  fVar20 * uStack_d8._4_4_ + 0.0;
        fVar107 = fVar49 * (float)local_e0 + fVar23 * local_e0._4_4_ + fVar109 * (float)uStack_d8 +
                  fVar22 * uStack_d8._4_4_ + 0.0;
        fVar31 = fVar96 * (float)local_e0 + fVar24 * local_e0._4_4_ + fVar116 * (float)uStack_d8 +
                 fVar99 * uStack_d8._4_4_ + 0.0;
        fVar92 = fVar47 * (float)local_e0 + fVar26 * local_e0._4_4_ + fVar118 * (float)uStack_d8 +
                 fVar105 * uStack_d8._4_4_ + 0.0;
        fVar133 = fVar16 * fVar93 + fVar21 * fVar115 + fVar113 * fVar108 + fVar20 * fVar112 + 0.0;
        fVar125 = fVar49 * fVar93 + fVar23 * fVar115 + fVar109 * fVar108 + fVar22 * fVar112 + 0.0;
        fVar126 = fVar96 * fVar93 + fVar24 * fVar115 + fVar116 * fVar108 + fVar99 * fVar112 + 0.0;
        fVar127 = fVar47 * fVar93 + fVar26 * fVar115 + fVar118 * fVar108 + fVar105 * fVar112 + 0.0;
        fVar114 = fVar16 * fVar168 + fVar21 * fVar170 + fVar113 * fVar171 + fVar20 * fVar123 + 0.0;
        fVar117 = fVar49 * fVar168 + fVar23 * fVar170 + fVar109 * fVar171 + fVar22 * fVar123 + 0.0;
        fVar97 = fVar96 * fVar168 + fVar24 * fVar170 + fVar116 * fVar171 + fVar99 * fVar123 + 0.0;
        fVar168 = fVar47 * fVar168 + fVar26 * fVar170 + fVar118 * fVar171 + fVar105 * fVar123 + 0.0;
        fVar171 = (float)CONCAT71(uStack_127,uStack_128);
        fVar123 = (float)((ulong)uVar100 >> 0x20);
        fVar170 = (float)(CONCAT17((char)((uint)fVar19 >> 0x18),
                                   CONCAT16((char)((uint)fVar19 >> 0x10),
                                            CONCAT15((char)((uint)fVar19 >> 8),
                                                     CONCAT14(SUB41(fVar19,0),fVar98)))) >> 0x20);
        fVar93 = fVar16 * fStack_b0 + fVar21 * fStack_ac + fVar113 * fStack_a8 + fVar20 * fStack_a4
                 + fVar135 * *(float *)(lVar45 + 0x184) + *(float *)(lVar45 + 0x180) * fVar169 +
                   *(float *)(lVar45 + 0x188) * fVar136;
        fVar115 = fVar49 * fStack_b0 + fVar23 * fStack_ac + fVar109 * fStack_a8 + fVar22 * fStack_a4
                  + fVar135 * *(float *)(lVar45 + 0x194) + *(float *)(lVar45 + 400) * fVar169 +
                    *(float *)(lVar45 + 0x198) * fVar136;
        fVar108 = fVar96 * fStack_b0 + fVar24 * fStack_ac + fVar116 * fStack_a8 + fVar99 * fStack_a4
                  + fVar135 * *(float *)(lVar45 + 0x1a4) + *(float *)(lVar45 + 0x1a0) * fVar169 +
                    *(float *)(lVar45 + 0x1a8) * fVar136;
        fVar112 = fVar47 * fStack_b0 + fVar26 * fStack_ac + fVar118 * fStack_a8 +
                  fVar105 * fStack_a4 + 0.0;
        local_100 = CONCAT44(fVar49 * fVar106 + fVar23 * fVar107 + fVar109 * fVar31 +
                             fVar170 * fVar92,
                             fVar16 * fVar106 + fVar21 * fVar107 + fVar113 * fVar31 +
                             fVar98 * fVar92);
        uStack_f8 = CONCAT44(fVar47 * fVar106 + fVar26 * fVar107 + fVar118 * fVar31 +
                             fVar123 * fVar92,
                             fVar96 * fVar106 + fVar24 * fVar107 + fVar116 * fVar31 +
                             fVar171 * fVar92);
        fVar19 = fVar49 * fVar114 + fVar23 * fVar117 + fVar109 * fVar97 + fVar170 * fVar168;
        fVar20 = fVar96 * fVar114 + fVar24 * fVar117 + fVar116 * fVar97 + fVar171 * fVar168;
        fVar22 = fVar47 * fVar114 + fVar26 * fVar117 + fVar118 * fVar97 + fVar123 * fVar168;
        fVar99 = fVar16 * fVar133 + fVar21 * fVar125 + fVar113 * fVar126 + fVar98 * fVar127;
        fVar105 = fVar49 * fVar133 + fVar23 * fVar125 + fVar109 * fVar126 + fVar170 * fVar127;
        fVar106 = fVar96 * fVar133 + fVar24 * fVar125 + fVar116 * fVar126 + fVar171 * fVar127;
        fVar107 = fVar47 * fVar133 + fVar26 * fVar125 + fVar118 * fVar126 + fVar123 * fVar127;
        fVar49 = fVar49 * fVar93 + fVar23 * fVar115 + fVar109 * fVar108 + fVar170 * fVar112;
        fVar96 = fVar96 * fVar93 + fVar24 * fVar115 + fVar116 * fVar108 + fVar171 * fVar112;
        fVar47 = fVar47 * fVar93 + fVar26 * fVar115 + fVar118 * fVar108 + fVar123 * fVar112;
        uStack_118 = SUB41(fVar20,0);
        uStack_117 = (undefined7)
                     (CONCAT17((char)((uint)fVar22 >> 0x18),
                               CONCAT16((char)((uint)fVar22 >> 0x10),
                                        CONCAT15((char)((uint)fVar22 >> 8),
                                                 CONCAT14(SUB41(fVar22,0),fVar20)))) >> 8);
        uVar110 = CONCAT17((char)((uint)fVar19 >> 0x18),
                           CONCAT16((char)((uint)fVar19 >> 0x10),
                                    CONCAT15((char)((uint)fVar19 >> 8),
                                             CONCAT14(SUB41(fVar19,0),
                                                      fVar16 * fVar114 + fVar21 * fVar117 +
                                                      fVar113 * fVar97 + fVar98 * fVar168))));
        uStack_128 = SUB41(fVar96,0);
        uStack_127 = (undefined7)
                     (CONCAT17((char)((uint)fVar47 >> 0x18),
                               CONCAT16((char)((uint)fVar47 >> 0x10),
                                        CONCAT15((char)((uint)fVar47 >> 8),
                                                 CONCAT14(SUB41(fVar47,0),fVar96)))) >> 8);
        uVar100 = CONCAT17((char)((uint)fVar49 >> 0x18),
                           CONCAT16((char)((uint)fVar49 >> 0x10),
                                    CONCAT15((char)((uint)fVar49 >> 8),
                                             CONCAT14(SUB41(fVar49,0),
                                                      fVar16 * fVar93 + fVar21 * fVar115 +
                                                      fVar113 * fVar108 + fVar98 * fVar112))));
        fVar16 = pfVar46[3];
      }
      iVar3 = (int)(fVar16 + 1.0);
      if (0 < iVar3) {
        uVar67 = (undefined1)((uint7)uStack_117 >> 0x10);
        uVar69 = (undefined1)((uint7)uStack_117 >> 0x18);
        uVar74 = (undefined1)((uint7)uStack_117 >> 0x20);
        uVar78 = (undefined1)((uint7)uStack_117 >> 0x28);
        uVar82 = (undefined1)((uint7)uStack_117 >> 0x30);
        fVar125 = 0.0;
        fVar162 = (float)uStack_f8;
        fVar165 = (float)((ulong)uStack_f8 >> 0x20);
        fVar154 = (float)((ulong)local_100 >> 0x20);
        fVar126 = 0.0;
        fVar127 = 0.0;
        uVar86 = (undefined1)uVar110;
        uVar87 = (undefined1)((ulong)uVar110 >> 8);
        uVar88 = (undefined1)((ulong)uVar110 >> 0x10);
        uVar89 = (undefined1)((ulong)uVar110 >> 0x18);
        uVar90 = (undefined1)((ulong)uStack_f8 >> 0x30);
        uVar91 = (undefined1)((ulong)uStack_f8 >> 0x38);
        uVar72 = (undefined1)((uint7)uStack_127 >> 0x18);
        uVar75 = (undefined1)((uint7)uStack_127 >> 0x20);
        uVar79 = (undefined1)((uint7)uStack_127 >> 0x28);
        uVar83 = (undefined1)((uint7)uStack_127 >> 0x30);
        uVar52 = (undefined4)((ulong)uVar100 >> 0x20);
        uVar124 = CONCAT13((char)((uint7)uStack_127 >> 0x10),
                           CONCAT12((char)((uint7)uStack_127 >> 8),
                                    CONCAT11((char)uStack_127,uStack_128)));
        uVar57 = SUB41(fVar99,0);
        uVar59 = (undefined1)((uint)fVar99 >> 8);
        uVar61 = (undefined1)((uint)fVar99 >> 0x10);
        uVar63 = (undefined1)((uint)fVar99 >> 0x18);
        uVar70 = (undefined1)uVar100;
        uVar76 = (undefined1)((ulong)uVar100 >> 8);
        uVar80 = (undefined1)((ulong)uVar100 >> 0x10);
        uVar84 = (undefined1)((ulong)uVar100 >> 0x18);
        uVar42 = CONCAT14((char)((ulong)local_100 >> 0x38),
                          CONCAT13((char)((ulong)local_100 >> 0x30),
                                   CONCAT12((char)((ulong)local_100 >> 0x28),
                                            CONCAT11((char)((ulong)local_100 >> 0x20),uVar89))));
        uVar50 = (undefined4)((uint5)uVar42 >> 8);
        uVar51 = (undefined4)
                 (CONCAT18((char)((ulong)uVar110 >> 0x38),
                           CONCAT17((char)((ulong)uVar110 >> 0x30),
                                    CONCAT16((char)((ulong)uVar110 >> 0x28),
                                             CONCAT15((char)((ulong)uVar110 >> 0x20),uVar42)))) >>
                 0x28);
        uVar48 = (undefined4)
                 (CONCAT17(uVar67,CONCAT16((char)((uint7)uStack_117 >> 8),
                                           CONCAT15((char)uStack_117,CONCAT14(uStack_118,fVar162))))
                 >> 0x20);
        uVar119 = SUB41(fVar107,0);
        uVar120 = (undefined1)((uint)fVar107 >> 8);
        uVar121 = (undefined1)((uint)fVar107 >> 0x10);
        uVar122 = (undefined1)((uint)fVar107 >> 0x18);
        fVar16 = (float)local_100;
        uVar18 = NEON_rev64(CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,fVar16))
                                                    )),4);
        auVar5[4] = uVar57;
        auVar5._0_4_ = fVar16;
        auVar5[5] = uVar59;
        auVar5[6] = uVar61;
        auVar5[7] = uVar63;
        auVar5[8] = uVar86;
        auVar5[9] = uVar87;
        auVar5[10] = uVar88;
        auVar5[0xb] = uVar89;
        auVar5[0xc] = uVar70;
        auVar5[0xd] = uVar76;
        auVar5[0xe] = uVar80;
        auVar5[0xf] = uVar84;
        uVar101 = a64_TBL(ZEXT816(0),auVar5,DAT_041016f8);
        auVar34._4_4_ = fVar105;
        auVar34._0_4_ = uVar50;
        auVar34._8_4_ = uVar51;
        auVar34._12_4_ = uVar52;
        uVar137 = a64_TBL(ZEXT816(0),auVar34,DAT_04101618);
        auVar6[4] = uVar57;
        auVar6._0_4_ = fVar16;
        auVar6[5] = uVar59;
        auVar6[6] = uVar61;
        auVar6[7] = uVar63;
        auVar6[8] = uVar86;
        auVar6[9] = uVar87;
        auVar6[10] = uVar88;
        auVar6[0xb] = uVar89;
        auVar6[0xc] = uVar70;
        auVar6[0xd] = uVar76;
        auVar6[0xe] = uVar80;
        auVar6[0xf] = uVar84;
        uVar25 = a64_TBL(ZEXT816(0),auVar6,DAT_041015d8);
        auVar7[4] = uVar57;
        auVar7._0_4_ = fVar16;
        auVar7[5] = uVar59;
        auVar7[6] = uVar61;
        auVar7[7] = uVar63;
        auVar7[8] = uVar86;
        auVar7[9] = uVar87;
        auVar7[10] = uVar88;
        auVar7[0xb] = uVar89;
        auVar7[0xc] = uVar70;
        auVar7[0xd] = uVar76;
        auVar7[0xe] = uVar80;
        auVar7[0xf] = uVar84;
        uVar94 = a64_TBL(ZEXT816(0),auVar7,DAT_04101618);
        uVar102 = NEON_rev64(CONCAT44(fVar105,uVar50),4);
        auVar35._4_4_ = fVar105;
        auVar35._0_4_ = uVar50;
        auVar35._8_4_ = uVar51;
        auVar35._12_4_ = uVar52;
        uVar111 = a64_TBL(ZEXT816(0),auVar35,DAT_041015d8);
        auVar36._4_4_ = fVar105;
        auVar36._0_4_ = uVar50;
        auVar36._8_4_ = uVar51;
        auVar36._12_4_ = uVar52;
        uVar37 = a64_TBL(ZEXT816(0),auVar36,DAT_041016f8);
        fVar170 = (float)uVar37;
        fVar171 = (float)((ulong)uVar37 >> 0x20);
        uVar37 = NEON_rev64(CONCAT44(fVar106,fVar162),4);
        fVar123 = (float)uVar37;
        fVar133 = (float)((ulong)uVar37 >> 0x20);
        auVar38._4_4_ = fVar106;
        auVar38._0_4_ = fVar162;
        auVar38._8_4_ = uVar48;
        auVar38._12_4_ = uVar124;
        uVar134 = a64_TBL(ZEXT816(0),auVar38,DAT_041015d8);
        auVar39._4_4_ = fVar106;
        auVar39._0_4_ = fVar162;
        auVar39._8_4_ = uVar48;
        auVar39._12_4_ = uVar124;
        uVar139 = a64_TBL(ZEXT816(0),auVar39,DAT_04101618);
        auVar40._4_4_ = fVar106;
        auVar40._0_4_ = fVar162;
        auVar40._8_4_ = uVar48;
        auVar40._12_4_ = uVar124;
        uVar37 = a64_TBL(ZEXT816(0),auVar40,DAT_041016f8);
        fVar141 = (float)uVar37;
        fVar143 = (float)((ulong)uVar37 >> 0x20);
        uVar28 = (undefined2)
                 (CONCAT12((char)((ulong)uStack_f8 >> 0x28),
                           CONCAT11((char)((ulong)uStack_f8 >> 0x20),uVar67)) >> 8);
        auVar27[2] = uVar90;
        auVar27._0_2_ = uVar28;
        auVar27[3] = uVar91;
        auVar27[4] = uVar119;
        auVar27[5] = uVar120;
        auVar27[6] = uVar121;
        auVar27[7] = uVar122;
        auVar27[8] = uVar69;
        auVar27[9] = uVar74;
        auVar27[10] = uVar78;
        auVar27[0xb] = uVar82;
        auVar27[0xc] = uVar72;
        auVar27[0xd] = uVar75;
        auVar27[0xe] = uVar79;
        auVar27[0xf] = uVar83;
        uVar148 = a64_TBL(ZEXT816(0),auVar27,DAT_04101618);
        fVar92 = (float)uVar94;
        fVar47 = (float)uVar111;
        fVar115 = (float)((ulong)uVar94 >> 0x20);
        fVar98 = (float)((ulong)uVar111 >> 0x20);
        fVar112 = (float)uVar101;
        fVar117 = (float)((ulong)uVar101 >> 0x20);
        auVar29[2] = uVar90;
        auVar29._0_2_ = uVar28;
        auVar29[3] = uVar91;
        auVar29[4] = uVar119;
        auVar29[5] = uVar120;
        auVar29[6] = uVar121;
        auVar29[7] = uVar122;
        auVar29[8] = uVar69;
        auVar29[9] = uVar74;
        auVar29[10] = uVar78;
        auVar29[0xb] = uVar82;
        auVar29[0xc] = uVar72;
        auVar29[0xd] = uVar75;
        auVar29[0xe] = uVar79;
        auVar29[0xf] = uVar83;
        uVar37 = a64_TBL(ZEXT816(0),auVar29,DAT_041015d8);
        fVar142 = (float)uVar37;
        fVar144 = (float)((ulong)uVar37 >> 0x20);
        uVar94 = NEON_rev64(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  CONCAT13(uVar91,CONCAT12(uVar90,uVar28)))))),4);
        auVar30[2] = uVar90;
        auVar30._0_2_ = uVar28;
        auVar30[3] = uVar91;
        auVar30[4] = uVar119;
        auVar30[5] = uVar120;
        auVar30[6] = uVar121;
        auVar30[7] = uVar122;
        auVar30[8] = uVar69;
        auVar30[9] = uVar74;
        auVar30[10] = uVar78;
        auVar30[0xb] = uVar82;
        auVar30[0xc] = uVar72;
        auVar30[0xd] = uVar75;
        auVar30[0xe] = uVar79;
        auVar30[0xf] = uVar83;
        uVar37 = a64_TBL(ZEXT816(0),auVar30,DAT_041016f8);
        fVar138 = (float)uVar139;
        fVar140 = (float)((ulong)uVar139 >> 0x20);
        fVar135 = (float)uVar134;
        fVar147 = (float)uVar148;
        fVar136 = (float)((ulong)uVar134 >> 0x20);
        fVar149 = (float)((ulong)uVar148 >> 0x20);
        fVar150 = (float)uVar37;
        fVar151 = (float)((ulong)uVar37 >> 0x20);
        fVar145 = (float)uVar94;
        fVar146 = (float)((ulong)uVar94 >> 0x20);
        fVar109 = fVar135 * fVar147 - fVar138 * fVar142;
        fVar116 = fVar136 * fVar149 - fVar140 * fVar144;
        fVar118 = fVar106 * fVar150 - fVar141 * fVar107;
        fVar31 = fVar106 * fVar151 - fVar143 * fVar107;
        fVar152 = fVar123 * fVar147 - fVar145 * fVar138;
        fVar153 = fVar133 * fVar149 - fVar146 * fVar140;
        fVar155 = fVar162 * fVar150 - fVar165 * fVar141;
        fVar156 = fVar162 * fVar151 - fVar165 * fVar143;
        fVar158 = fVar123 * fVar142 - fVar145 * fVar135;
        fVar160 = fVar133 * fVar144 - fVar146 * fVar136;
        fVar163 = fVar162 * fVar107 - fVar165 * fVar106;
        fVar166 = fVar162 * fVar107 - fVar165 * fVar106;
        fVar49 = (float)uVar102;
        fVar96 = (float)((ulong)uVar102 >> 0x20);
        fVar19 = (float)uVar18;
        fVar20 = (float)((ulong)uVar18 >> 0x20);
        fVar26 = (float)uVar25;
        fVar113 = (float)((ulong)uVar25 >> 0x20);
        fVar168 = (float)uVar137;
        fVar169 = (float)((ulong)uVar137 >> 0x20);
        fVar159 = fVar26 * fVar168 - fVar92 * fVar47;
        fVar161 = fVar113 * fVar169 - fVar115 * fVar98;
        fVar164 = fVar99 * fVar170 - fVar112 * fVar105;
        fVar167 = fVar99 * fVar171 - fVar117 * fVar105;
        fVar93 = fVar19 * fVar168 - fVar92 * fVar49;
        fVar108 = fVar20 * fVar169 - fVar115 * fVar96;
        fVar114 = fVar16 * fVar170 - fVar112 * fVar154;
        fVar97 = fVar16 * fVar171 - fVar117 * fVar154;
        fVar21 = fVar19 * fVar47 - fVar49 * fVar26;
        fVar22 = fVar20 * fVar98 - fVar96 * fVar113;
        fVar23 = fVar16 * fVar105 - fVar154 * fVar99;
        fVar24 = fVar16 * fVar105 - fVar154 * fVar99;
        fVar168 = ((fVar49 * fVar109 - fVar152 * fVar47) + fVar158 * fVar168) * (float)_DAT_04102220
        ;
        fVar172 = (float)((ulong)_DAT_04102220 >> 0x20);
        fVar169 = ((fVar96 * fVar116 - fVar153 * fVar98) + fVar160 * fVar169) * fVar172;
        fVar170 = ((fVar154 * fVar118 - fVar155 * fVar105) + fVar163 * fVar170) *
                  (float)_UNK_04102228;
        fVar173 = (float)((ulong)_UNK_04102228 >> 0x20);
        fVar171 = ((fVar154 * fVar31 - fVar156 * fVar105) + fVar166 * fVar171) * fVar173;
        fVar154 = (float)((ulong)_DAT_04102140 >> 0x20);
        fVar157 = (float)((ulong)_UNK_04102148 >> 0x20);
        fVar49 = fVar16 * fVar168;
        fVar96 = fVar99 * fVar169;
        uVar57 = (undefined1)((uint)fVar96 >> 8);
        uVar59 = (undefined1)((uint)fVar96 >> 0x10);
        uVar61 = (undefined1)((uint)fVar96 >> 0x18);
        fVar47 = (float)uVar110 * fVar170;
        uVar63 = (undefined1)((uint)fVar47 >> 8);
        uVar67 = (undefined1)((uint)fVar47 >> 0x10);
        uVar69 = (undefined1)((uint)fVar47 >> 0x18);
        fVar98 = (float)uVar100 * fVar171;
        uVar72 = (undefined1)((uint)fVar98 >> 8);
        uVar70 = (undefined1)((uint)fVar98 >> 0x10);
        uVar74 = (undefined1)((uint)fVar98 >> 0x18);
        auVar8[4] = SUB41(fVar96,0);
        auVar8._0_4_ = fVar49;
        auVar8[5] = uVar57;
        auVar8[6] = uVar59;
        auVar8[7] = uVar61;
        auVar8[8] = SUB41(fVar47,0);
        auVar8[9] = uVar63;
        auVar8[10] = uVar67;
        auVar8[0xb] = uVar69;
        auVar8[0xc] = SUB41(fVar98,0);
        auVar8[0xd] = uVar72;
        auVar8[0xe] = uVar70;
        auVar8[0xf] = uVar74;
        auVar9[4] = SUB41(fVar96,0);
        auVar9._0_4_ = fVar49;
        auVar9[5] = uVar57;
        auVar9[6] = uVar59;
        auVar9[7] = uVar61;
        auVar9[8] = SUB41(fVar47,0);
        auVar9[9] = uVar63;
        auVar9[10] = uVar67;
        auVar9[0xb] = uVar69;
        auVar9[0xc] = SUB41(fVar98,0);
        auVar9[0xd] = uVar72;
        auVar9[0xe] = uVar70;
        auVar9[0xf] = uVar74;
        auVar103 = NEON_ext(auVar8,auVar9,8,1);
        fVar49 = auVar103._0_4_ + fVar49;
        fVar96 = auVar103._4_4_ + fVar96;
        fVar47 = fVar49 + fVar96;
        fVar49 = fVar49 + fVar96;
        uVar57 = SUB41(fVar49,0);
        uVar59 = (undefined1)((uint)fVar49 >> 8);
        uVar61 = (undefined1)((uint)fVar49 >> 0x10);
        uVar63 = (undefined1)((uint)fVar49 >> 0x18);
        uVar67 = SUB41(fVar47,0);
        uVar69 = (undefined1)((uint)fVar47 >> 8);
        uVar72 = (undefined1)((uint)fVar47 >> 0x10);
        uVar70 = (undefined1)((uint)fVar47 >> 0x18);
        auVar10[4] = uVar57;
        auVar10._0_4_ = fVar47;
        auVar10[5] = uVar59;
        auVar10[6] = uVar61;
        auVar10[7] = uVar63;
        auVar10[8] = uVar67;
        auVar10[9] = uVar69;
        auVar10[10] = uVar72;
        auVar10[0xb] = uVar70;
        auVar10[0xc] = uVar57;
        auVar10[0xd] = uVar59;
        auVar10[0xe] = uVar61;
        auVar10[0xf] = uVar63;
        auVar103 = NEON_frecpe(auVar10,4);
        auVar11[4] = uVar57;
        auVar11._0_4_ = fVar47;
        auVar11[5] = uVar59;
        auVar11[6] = uVar61;
        auVar11[7] = uVar63;
        auVar11[8] = uVar67;
        auVar11[9] = uVar69;
        auVar11[10] = uVar72;
        auVar11[0xb] = uVar70;
        auVar11[0xc] = uVar57;
        auVar11[0xd] = uVar59;
        auVar11[0xe] = uVar61;
        auVar11[0xf] = uVar63;
        auVar104 = NEON_frecps(auVar103,auVar11,4);
        auVar95._0_4_ = auVar103._0_4_ * auVar104._0_4_;
        auVar95._4_4_ = auVar103._4_4_ * auVar104._4_4_;
        auVar95._8_4_ = auVar103._8_4_ * auVar104._8_4_;
        auVar95._12_4_ = auVar103._12_4_ * auVar104._12_4_;
        auVar12[4] = uVar57;
        auVar12._0_4_ = fVar47;
        auVar12[5] = uVar59;
        auVar12[6] = uVar61;
        auVar12[7] = uVar63;
        auVar12[8] = uVar67;
        auVar12[9] = uVar69;
        auVar12[10] = uVar72;
        auVar12[0xb] = uVar70;
        auVar12[0xc] = uVar57;
        auVar12[0xd] = uVar59;
        auVar12[0xe] = uVar61;
        auVar12[0xf] = uVar63;
        auVar103 = NEON_frecps(auVar95,auVar12,4);
        iVar15 = -(uint)(fVar47 == 0.0);
        bVar53 = (byte)iVar15;
        bVar54 = (byte)((uint)iVar15 >> 8);
        bVar55 = (byte)((uint)iVar15 >> 0x10);
        bVar56 = (byte)((uint)iVar15 >> 0x18);
        iVar15 = -(uint)(fVar49 == 0.0);
        bVar58 = (byte)iVar15;
        bVar60 = (byte)((uint)iVar15 >> 8);
        bVar62 = (byte)((uint)iVar15 >> 0x10);
        bVar64 = (byte)((uint)iVar15 >> 0x18);
        iVar15 = -(uint)(fVar47 == 0.0);
        bVar65 = (byte)iVar15;
        bVar66 = (byte)((uint)iVar15 >> 8);
        bVar68 = (byte)((uint)iVar15 >> 0x10);
        bVar71 = (byte)((uint)iVar15 >> 0x18);
        iVar15 = -(uint)((float)CONCAT13(uVar63,CONCAT12(uVar61,(short)(CONCAT15(uVar59,CONCAT14(
                                                  uVar57,fVar47)) >> 0x20))) == 0.0);
        bVar73 = (byte)iVar15;
        bVar77 = (byte)((uint)iVar15 >> 8);
        bVar81 = (byte)((uint)iVar15 >> 0x10);
        bVar85 = (byte)((uint)iVar15 >> 0x18);
        fVar49 = auVar95._0_4_ * auVar103._0_4_;
        fVar96 = auVar95._4_4_ * auVar103._4_4_;
        fVar47 = auVar95._8_4_ * auVar103._8_4_;
        fVar98 = auVar95._12_4_ * auVar103._12_4_;
        fVar168 = fVar49 * fVar168;
        fVar169 = fVar96 * fVar169;
        fVar170 = fVar47 * fVar170;
        fVar171 = fVar98 * fVar171;
        fVar109 = fVar49 * ((fVar19 * fVar109 - fVar152 * fVar26) + fVar158 * fVar92) *
                           (float)_DAT_04102140;
        fVar113 = fVar96 * ((fVar20 * fVar116 - fVar153 * fVar113) + fVar160 * fVar115) * fVar154;
        fVar116 = fVar47 * ((fVar16 * fVar118 - fVar155 * fVar99) + fVar163 * fVar112) *
                           (float)_UNK_04102148;
        fVar118 = fVar98 * ((fVar16 * fVar31 - fVar156 * fVar99) + fVar166 * fVar117) * fVar157;
        fVar16 = ((fVar145 * fVar159 - fVar93 * fVar142) + fVar21 * fVar147) * (float)_DAT_04102220
                 * fVar49;
        fVar19 = ((fVar146 * fVar161 - fVar108 * fVar144) + fVar22 * fVar149) * fVar172 * fVar96;
        fVar20 = ((fVar165 * fVar164 - fVar114 * fVar107) + fVar23 * fVar150) * (float)_UNK_04102228
                 * fVar47;
        fVar26 = ((fVar165 * fVar167 - fVar97 * fVar107) + fVar24 * fVar151) * fVar173 * fVar98;
        fVar49 = ((fVar123 * fVar159 - fVar93 * fVar135) + fVar21 * fVar138) * (float)_DAT_04102140
                 * fVar49;
        fVar96 = ((fVar133 * fVar161 - fVar108 * fVar136) + fVar22 * fVar140) * fVar154 * fVar96;
        fVar47 = ((fVar162 * fVar164 - fVar114 * fVar106) + fVar23 * fVar141) * (float)_UNK_04102148
                 * fVar47;
        fVar98 = ((fVar162 * fVar167 - fVar97 * fVar106) + fVar24 * fVar143) * fVar157 * fVar98;
        do {
          local_e0 = 0;
          uStack_d8 = 0;
          pfVar43 = (float *)FUN_00346e50(*(undefined8 *)(param_5 + 0x28),&local_e0,0xc0);
          if (pfVar43 == (float *)0x0) {
            return 1;
          }
          *pfVar43 = fVar127;
          pfVar43[1] = fVar126;
          pfVar43[2] = fVar125;
          fVar21 = pfVar46[0xf];
          pfVar43[7] = 0.0;
          pfVar43[0x28] = (float)(int)fVar132;
          pfVar43[0x29] = fVar128;
          pfVar43[0x2a] = 0.0;
          pfVar43[0x2b] = 0.0;
          pfVar43[0x2c] = fVar129;
          pfVar43[0x2d] = fVar130;
          pfVar43[0x2e] = fVar131;
          pfVar43[0x2f] = 0.0;
          pfVar43[4] = fVar14;
          pfVar43[3] = fVar21;
          pfVar43[5] = fVar17;
          pfVar43[6] = fVar13;
          *(undefined8 *)(pfVar43 + 10) = uStack_f8;
          *(undefined8 *)(pfVar43 + 8) = local_100;
          *(ulong *)(pfVar43 + 0xe) = CONCAT44(fVar107,fVar106);
          *(ulong *)(pfVar43 + 0xc) = CONCAT44(fVar105,fVar99);
          *(ulong *)(pfVar43 + 0x12) = CONCAT71(uStack_117,uStack_118);
          *(undefined8 *)(pfVar43 + 0x10) = uVar110;
          *(ulong *)(pfVar43 + 0x16) = CONCAT71(uStack_127,uStack_128);
          *(undefined8 *)(pfVar43 + 0x14) = uVar100;
          *(ulong *)(pfVar43 + 0x1a) =
               CONCAT17((byte)((uint)fVar171 >> 0x18) & ~bVar85,
                        CONCAT16((byte)((uint)fVar171 >> 0x10) & ~bVar81,
                                 CONCAT15((byte)((uint)fVar171 >> 8) & ~bVar77,
                                          CONCAT14(SUB41(fVar171,0) & ~bVar73,
                                                   CONCAT13((byte)((uint)fVar170 >> 0x18) & ~bVar71,
                                                            CONCAT12((byte)((uint)fVar170 >> 0x10) &
                                                                     ~bVar68,CONCAT11((byte)((uint)
                                                  fVar170 >> 8) & ~bVar66,SUB41(fVar170,0) & ~bVar65
                                                  )))))));
          *(ulong *)(pfVar43 + 0x18) =
               CONCAT17((byte)((uint)fVar169 >> 0x18) & ~bVar64,
                        CONCAT16((byte)((uint)fVar169 >> 0x10) & ~bVar62,
                                 CONCAT15((byte)((uint)fVar169 >> 8) & ~bVar60,
                                          CONCAT14(SUB41(fVar169,0) & ~bVar58,
                                                   CONCAT13((byte)((uint)fVar168 >> 0x18) & ~bVar56,
                                                            CONCAT12((byte)((uint)fVar168 >> 0x10) &
                                                                     ~bVar55,CONCAT11((byte)((uint)
                                                  fVar168 >> 8) & ~bVar54,SUB41(fVar168,0) & ~bVar53
                                                  )))))));
          *(ulong *)(pfVar43 + 0x1e) =
               CONCAT17((byte)((uint)fVar118 >> 0x18) & ~bVar85,
                        CONCAT16((byte)((uint)fVar118 >> 0x10) & ~bVar81,
                                 CONCAT15((byte)((uint)fVar118 >> 8) & ~bVar77,
                                          CONCAT14(SUB41(fVar118,0) & ~bVar73,
                                                   CONCAT13((byte)((uint)fVar116 >> 0x18) & ~bVar71,
                                                            CONCAT12((byte)((uint)fVar116 >> 0x10) &
                                                                     ~bVar68,CONCAT11((byte)((uint)
                                                  fVar116 >> 8) & ~bVar66,SUB41(fVar116,0) & ~bVar65
                                                  )))))));
          *(ulong *)(pfVar43 + 0x1c) =
               CONCAT17((byte)((uint)fVar113 >> 0x18) & ~bVar64,
                        CONCAT16((byte)((uint)fVar113 >> 0x10) & ~bVar62,
                                 CONCAT15((byte)((uint)fVar113 >> 8) & ~bVar60,
                                          CONCAT14(SUB41(fVar113,0) & ~bVar58,
                                                   CONCAT13((byte)((uint)fVar109 >> 0x18) & ~bVar56,
                                                            CONCAT12((byte)((uint)fVar109 >> 0x10) &
                                                                     ~bVar55,CONCAT11((byte)((uint)
                                                  fVar109 >> 8) & ~bVar54,SUB41(fVar109,0) & ~bVar53
                                                  )))))));
          *(ulong *)(pfVar43 + 0x22) =
               CONCAT17((byte)((uint)fVar26 >> 0x18) & ~bVar85,
                        CONCAT16((byte)((uint)fVar26 >> 0x10) & ~bVar81,
                                 CONCAT15((byte)((uint)fVar26 >> 8) & ~bVar77,
                                          CONCAT14(SUB41(fVar26,0) & ~bVar73,
                                                   CONCAT13((byte)((uint)fVar20 >> 0x18) & ~bVar71,
                                                            CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                                                     ~bVar68,CONCAT11((byte)((uint)
                                                  fVar20 >> 8) & ~bVar66,SUB41(fVar20,0) & ~bVar65))
                                                  )))));
          *(ulong *)(pfVar43 + 0x20) =
               CONCAT17((byte)((uint)fVar19 >> 0x18) & ~bVar64,
                        CONCAT16((byte)((uint)fVar19 >> 0x10) & ~bVar62,
                                 CONCAT15((byte)((uint)fVar19 >> 8) & ~bVar60,
                                          CONCAT14(SUB41(fVar19,0) & ~bVar58,
                                                   CONCAT13((byte)((uint)fVar16 >> 0x18) & ~bVar56,
                                                            CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                                                     ~bVar55,CONCAT11((byte)((uint)
                                                  fVar16 >> 8) & ~bVar54,SUB41(fVar16,0) & ~bVar53))
                                                  )))));
          *(ulong *)(pfVar43 + 0x26) =
               CONCAT17((byte)((uint)fVar98 >> 0x18) & ~bVar85,
                        CONCAT16((byte)((uint)fVar98 >> 0x10) & ~bVar81,
                                 CONCAT15((byte)((uint)fVar98 >> 8) & ~bVar77,
                                          CONCAT14(SUB41(fVar98,0) & ~bVar73,
                                                   CONCAT13((byte)((uint)fVar47 >> 0x18) & ~bVar71,
                                                            CONCAT12((byte)((uint)fVar47 >> 0x10) &
                                                                     ~bVar68,CONCAT11((byte)((uint)
                                                  fVar47 >> 8) & ~bVar66,SUB41(fVar47,0) & ~bVar65))
                                                  )))));
          *(ulong *)(pfVar43 + 0x24) =
               CONCAT17((byte)((uint)fVar96 >> 0x18) & ~bVar64,
                        CONCAT16((byte)((uint)fVar96 >> 0x10) & ~bVar62,
                                 CONCAT15((byte)((uint)fVar96 >> 8) & ~bVar60,
                                          CONCAT14(SUB41(fVar96,0) & ~bVar58,
                                                   CONCAT13((byte)((uint)fVar49 >> 0x18) & ~bVar56,
                                                            CONCAT12((byte)((uint)fVar49 >> 0x10) &
                                                                     ~bVar55,CONCAT11((byte)((uint)
                                                  fVar49 >> 8) & ~bVar54,SUB41(fVar49,0) & ~bVar53))
                                                  )))));
          cVar2 = *(char *)(lVar44 + 0x7f);
          if (*(char *)(lVar44 + 0x42) != -1) {
            FUN_00348cdc(param_1,(long)*(char *)(lVar44 + 0x42),0,&local_e0,0xc0);
          }
          if (cVar2 != -1) {
            FUN_00348cdc(param_1,(int)cVar2,4,&local_e0,0xc0);
          }
          FUN_0031f9b0(*(undefined8 *)(param_2 + 0x98),param_1,param_2,lVar44,param_4,param_5);
          iVar3 = iVar3 + -1;
          fVar126 = fVar126 + pfVar46[1];
          fVar127 = fVar127 + *pfVar46;
          fVar125 = fVar125 + pfVar46[2];
        } while (iVar3 != 0);
      }
      return 1;
    }
  }
  FUN_0032c600(**(long **)(param_2 + 0x4d0) + 0x14,param_2,0x80);
  return 0;
}

