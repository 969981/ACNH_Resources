
void FUN_0032e0f4(float param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined2 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined3 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar35;
  long in_x4;
  long in_x5;
  float *in_x6;
  uint in_w7;
  ulong uVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined8 uVar96;
  float fVar97;
  float fVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined8 uVar115;
  undefined1 auVar116 [16];
  float fVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  float fVar122;
  float fVar123;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  undefined8 uVar127;
  undefined8 uVar128;
  undefined8 uVar129;
  undefined1 auVar130 [16];
  undefined8 uVar131;
  undefined8 uVar132;
  float fVar133;
  
  fVar71 = *in_x6;
  uVar57 = SUB41(fVar71,0);
  uVar58 = (undefined1)((uint)fVar71 >> 8);
  uVar59 = (undefined1)((uint)fVar71 >> 0x10);
  uVar60 = (undefined1)((uint)fVar71 >> 0x18);
  if (0.0 < in_x6[1]) {
    fVar71 = fVar71 + *(float *)(*(long *)(in_x5 + 0x20) +
                                (-(ulong)(in_w7 >> 0x1f) & 0xfffffff000000000 | (ulong)in_w7 << 4))
                      * -(fVar71 * in_x6[1]);
    uVar57 = SUB41(fVar71,0);
    uVar58 = (undefined1)((uint)fVar71 >> 8);
    uVar59 = (undefined1)((uint)fVar71 >> 0x10);
    uVar60 = (undefined1)((uint)fVar71 >> 0x18);
  }
  uVar36 = -(ulong)(in_w7 >> 0x1f) & 0xfffffff000000000 | (ulong)in_w7 << 4;
  uVar96 = *(undefined8 *)(**(long **)(in_x4 + 0x4d0) + 0x18);
  param_1 = param_1 / (float)(int)in_x6[2];
  uVar37 = 0;
  uVar39 = 0;
  uVar41 = 0x80;
  uVar43 = 0x3f;
  if (param_1 <= 1.0) {
    uVar37 = SUB41(param_1,0);
    uVar39 = (char)((uint)param_1 >> 8);
    uVar41 = (char)((uint)param_1 >> 0x10);
    uVar43 = (char)((uint)param_1 >> 0x18);
  }
  puVar1 = (undefined4 *)(*(long *)(in_x4 + 0x218) + uVar36);
  puVar2 = (undefined4 *)(*(long *)(in_x4 + 0x210) + uVar36);
  puVar3 = (undefined4 *)(*(long *)(in_x4 + 0x220) + uVar36);
  fVar71 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57)));
  if (0 < (int)in_x6[2]) {
    fVar71 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) *
             (float)CONCAT13(uVar43,CONCAT12(uVar41,CONCAT11(uVar39,uVar37)));
  }
  cVar4 = *(char *)(*(long *)(in_x4 + 0xa0) + 0x793);
  if ((cVar4 == '\x02') || (cVar4 != '\0')) {
    uVar65 = 0;
    uVar66 = 0;
    uVar67 = 0;
    uVar68 = 0;
    uVar9 = *puVar2;
    uVar57 = (undefined1)uVar9;
    uVar58 = (undefined1)((uint)uVar9 >> 8);
    uVar59 = (undefined1)((uint)uVar9 >> 0x10);
    uVar60 = (undefined1)((uint)uVar9 >> 0x18);
    uVar9 = *puVar1;
    uVar37 = (undefined1)uVar9;
    uVar39 = (undefined1)((uint)uVar9 >> 8);
    uVar41 = (undefined1)((uint)uVar9 >> 0x10);
    uVar43 = (undefined1)((uint)uVar9 >> 0x18);
    uVar9 = *puVar3;
    uVar61 = (undefined1)uVar9;
    uVar62 = (undefined1)((uint)uVar9 >> 8);
    uVar63 = (undefined1)((uint)uVar9 >> 0x10);
    uVar64 = (undefined1)((uint)uVar9 >> 0x18);
    uVar9 = puVar2[2];
    uVar99 = (undefined1)uVar9;
    uVar100 = (undefined1)((uint)uVar9 >> 8);
    uVar101 = (undefined1)((uint)uVar9 >> 0x10);
    uVar102 = (undefined1)((uint)uVar9 >> 0x18);
    uVar111 = 0;
    uVar112 = 0;
    uVar113 = 0;
    uVar114 = 0;
    uVar9 = puVar1[2];
    uVar103 = (undefined1)uVar9;
    uVar104 = (undefined1)((uint)uVar9 >> 8);
    uVar105 = (undefined1)((uint)uVar9 >> 0x10);
    uVar106 = (undefined1)((uint)uVar9 >> 0x18);
    uVar9 = puVar2[1];
    uVar72 = (undefined1)uVar9;
    uVar73 = (undefined1)((uint)uVar9 >> 8);
    uVar74 = (undefined1)((uint)uVar9 >> 0x10);
    uVar75 = (undefined1)((uint)uVar9 >> 0x18);
    uVar84 = 0;
    uVar85 = 0;
    uVar86 = 0;
    uVar87 = 0;
    uVar9 = puVar1[1];
    uVar76 = (undefined1)uVar9;
    uVar77 = (undefined1)((uint)uVar9 >> 8);
    uVar78 = (undefined1)((uint)uVar9 >> 0x10);
    uVar79 = (undefined1)((uint)uVar9 >> 0x18);
    uVar9 = puVar3[2];
    uVar107 = (undefined1)uVar9;
    uVar108 = (undefined1)((uint)uVar9 >> 8);
    uVar109 = (undefined1)((uint)uVar9 >> 0x10);
    uVar110 = (undefined1)((uint)uVar9 >> 0x18);
    uVar9 = puVar3[1];
    uVar80 = (undefined1)uVar9;
    uVar81 = (undefined1)((uint)uVar9 >> 8);
    uVar82 = (undefined1)((uint)uVar9 >> 0x10);
    uVar83 = (undefined1)((uint)uVar9 >> 0x18);
  }
  else {
    uVar35 = *(undefined8 *)(in_x4 + 0x3d8);
    uVar61 = (undefined1)uVar35;
    uVar62 = (undefined1)((ulong)uVar35 >> 8);
    uVar63 = (undefined1)((ulong)uVar35 >> 0x10);
    uVar64 = (undefined1)((ulong)uVar35 >> 0x18);
    uVar65 = (undefined1)((ulong)uVar35 >> 0x20);
    uVar66 = (undefined1)((ulong)uVar35 >> 0x28);
    uVar67 = (undefined1)((ulong)uVar35 >> 0x30);
    uVar68 = (undefined1)((ulong)uVar35 >> 0x38);
    uVar35 = *(undefined8 *)(in_x4 + 0x3d0);
    uVar57 = (undefined1)uVar35;
    uVar58 = (undefined1)((ulong)uVar35 >> 8);
    uVar59 = (undefined1)((ulong)uVar35 >> 0x10);
    uVar60 = (undefined1)((ulong)uVar35 >> 0x18);
    uVar37 = (undefined1)((ulong)uVar35 >> 0x20);
    uVar39 = (undefined1)((ulong)uVar35 >> 0x28);
    uVar41 = (undefined1)((ulong)uVar35 >> 0x30);
    uVar43 = (undefined1)((ulong)uVar35 >> 0x38);
    uVar35 = *(undefined8 *)(in_x4 + 1000);
    uVar80 = (undefined1)uVar35;
    uVar81 = (undefined1)((ulong)uVar35 >> 8);
    uVar82 = (undefined1)((ulong)uVar35 >> 0x10);
    uVar83 = (undefined1)((ulong)uVar35 >> 0x18);
    uVar84 = (undefined1)((ulong)uVar35 >> 0x20);
    uVar85 = (undefined1)((ulong)uVar35 >> 0x28);
    uVar86 = (undefined1)((ulong)uVar35 >> 0x30);
    uVar87 = (undefined1)((ulong)uVar35 >> 0x38);
    uVar35 = *(undefined8 *)(in_x4 + 0x3e0);
    uVar72 = (undefined1)uVar35;
    uVar73 = (undefined1)((ulong)uVar35 >> 8);
    uVar74 = (undefined1)((ulong)uVar35 >> 0x10);
    uVar75 = (undefined1)((ulong)uVar35 >> 0x18);
    uVar76 = (undefined1)((ulong)uVar35 >> 0x20);
    uVar77 = (undefined1)((ulong)uVar35 >> 0x28);
    uVar78 = (undefined1)((ulong)uVar35 >> 0x30);
    uVar79 = (undefined1)((ulong)uVar35 >> 0x38);
    uVar35 = *(undefined8 *)(in_x4 + 0x3f8);
    uVar107 = (undefined1)uVar35;
    uVar108 = (undefined1)((ulong)uVar35 >> 8);
    uVar109 = (undefined1)((ulong)uVar35 >> 0x10);
    uVar110 = (undefined1)((ulong)uVar35 >> 0x18);
    uVar111 = (undefined1)((ulong)uVar35 >> 0x20);
    uVar112 = (undefined1)((ulong)uVar35 >> 0x28);
    uVar113 = (undefined1)((ulong)uVar35 >> 0x30);
    uVar114 = (undefined1)((ulong)uVar35 >> 0x38);
    uVar35 = *(undefined8 *)(in_x4 + 0x3f0);
    uVar99 = (undefined1)uVar35;
    uVar100 = (undefined1)((ulong)uVar35 >> 8);
    uVar101 = (undefined1)((ulong)uVar35 >> 0x10);
    uVar102 = (undefined1)((ulong)uVar35 >> 0x18);
    uVar103 = (undefined1)((ulong)uVar35 >> 0x20);
    uVar104 = (undefined1)((ulong)uVar35 >> 0x28);
    uVar105 = (undefined1)((ulong)uVar35 >> 0x30);
    uVar106 = (undefined1)((ulong)uVar35 >> 0x38);
  }
  auVar18[1] = uVar100;
  auVar18[0] = uVar99;
  auVar18[2] = uVar101;
  auVar18[3] = uVar102;
  auVar18[4] = uVar103;
  auVar18[5] = uVar104;
  auVar18[6] = uVar105;
  auVar18[7] = uVar106;
  auVar18[8] = uVar107;
  auVar18[9] = uVar108;
  auVar18[10] = uVar109;
  auVar18[0xb] = uVar110;
  auVar18[0xc] = uVar111;
  auVar18[0xd] = uVar112;
  auVar18[0xe] = uVar113;
  auVar18[0xf] = uVar114;
  uVar35 = a64_TBL(ZEXT816(0),auVar18,DAT_041015c8);
  fVar69 = (float)uVar96 * fVar71;
  fVar70 = (float)((ulong)uVar96 >> 0x20) * fVar71;
  fVar71 = *(float *)(**(long **)(in_x4 + 0x4d0) + 0x20) * fVar71;
  auVar10[1] = uVar73;
  auVar10[0] = uVar72;
  auVar10[2] = uVar74;
  auVar10[3] = uVar75;
  auVar10[4] = uVar76;
  auVar10[5] = uVar77;
  auVar10[6] = uVar78;
  auVar10[7] = uVar79;
  auVar10[8] = uVar80;
  auVar10[9] = uVar81;
  auVar10[10] = uVar82;
  auVar10[0xb] = uVar83;
  auVar10[0xc] = uVar84;
  auVar10[0xd] = uVar85;
  auVar10[0xe] = uVar86;
  auVar10[0xf] = uVar87;
  uVar96 = a64_TBL(ZEXT816(0),auVar10,DAT_04101580);
  auVar11[1] = uVar73;
  auVar11[0] = uVar72;
  auVar11[2] = uVar74;
  auVar11[3] = uVar75;
  auVar11[4] = uVar76;
  auVar11[5] = uVar77;
  auVar11[6] = uVar78;
  auVar11[7] = uVar79;
  auVar11[8] = uVar80;
  auVar11[9] = uVar81;
  auVar11[10] = uVar82;
  auVar11[0xb] = uVar83;
  auVar11[0xc] = uVar84;
  auVar11[0xd] = uVar85;
  auVar11[0xe] = uVar86;
  auVar11[0xf] = uVar87;
  uVar115 = a64_TBL(ZEXT816(0),auVar11,DAT_041015c8);
  auVar19[1] = uVar100;
  auVar19[0] = uVar99;
  auVar19[2] = uVar101;
  auVar19[3] = uVar102;
  auVar19[4] = uVar103;
  auVar19[5] = uVar104;
  auVar19[6] = uVar105;
  auVar19[7] = uVar106;
  auVar19[8] = uVar107;
  auVar19[9] = uVar108;
  auVar19[10] = uVar109;
  auVar19[0xb] = uVar110;
  auVar19[0xc] = uVar111;
  auVar19[0xd] = uVar112;
  auVar19[0xe] = uVar113;
  auVar19[0xf] = uVar114;
  uVar118 = a64_TBL(ZEXT816(0),auVar19,DAT_04101598);
  auVar20[1] = uVar100;
  auVar20[0] = uVar99;
  auVar20[2] = uVar101;
  auVar20[3] = uVar102;
  auVar20[4] = uVar103;
  auVar20[5] = uVar104;
  auVar20[6] = uVar105;
  auVar20[7] = uVar106;
  auVar20[8] = uVar107;
  auVar20[9] = uVar108;
  auVar20[10] = uVar109;
  auVar20[0xb] = uVar110;
  auVar20[0xc] = uVar111;
  auVar20[0xd] = uVar112;
  auVar20[0xe] = uVar113;
  auVar20[0xf] = uVar114;
  uVar125 = a64_TBL(ZEXT816(0),auVar20,DAT_041016a0);
  auVar12[1] = uVar73;
  auVar12[0] = uVar72;
  auVar12[2] = uVar74;
  auVar12[3] = uVar75;
  auVar12[4] = uVar76;
  auVar12[5] = uVar77;
  auVar12[6] = uVar78;
  auVar12[7] = uVar79;
  auVar12[8] = uVar80;
  auVar12[9] = uVar81;
  auVar12[10] = uVar82;
  auVar12[0xb] = uVar83;
  auVar12[0xc] = uVar84;
  auVar12[0xd] = uVar85;
  auVar12[0xe] = uVar86;
  auVar12[0xf] = uVar87;
  uVar126 = a64_TBL(ZEXT816(0),auVar12,DAT_041016a0);
  auVar13[1] = uVar73;
  auVar13[0] = uVar72;
  auVar13[2] = uVar74;
  auVar13[3] = uVar75;
  auVar13[4] = uVar76;
  auVar13[5] = uVar77;
  auVar13[6] = uVar78;
  auVar13[7] = uVar79;
  auVar13[8] = uVar80;
  auVar13[9] = uVar81;
  auVar13[10] = uVar82;
  auVar13[0xb] = uVar83;
  auVar13[0xc] = uVar84;
  auVar13[0xd] = uVar85;
  auVar13[0xe] = uVar86;
  auVar13[0xf] = uVar87;
  uVar119 = a64_TBL(ZEXT816(0),auVar13,DAT_04101598);
  auVar21[1] = uVar100;
  auVar21[0] = uVar99;
  auVar21[2] = uVar101;
  auVar21[3] = uVar102;
  auVar21[4] = uVar103;
  auVar21[5] = uVar104;
  auVar21[6] = uVar105;
  auVar21[7] = uVar106;
  auVar21[8] = uVar107;
  auVar21[9] = uVar108;
  auVar21[10] = uVar109;
  auVar21[0xb] = uVar110;
  auVar21[0xc] = uVar111;
  auVar21[0xd] = uVar112;
  auVar21[0xe] = uVar113;
  auVar21[0xf] = uVar114;
  uVar127 = a64_TBL(ZEXT816(0),auVar21,DAT_04101580);
  auVar116._0_4_ =
       ((float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) * (float)uVar96 *
        (float)uVar118 -
       (float)uVar119 * (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) *
       (float)uVar127) +
       ((float)CONCAT13(uVar43,CONCAT12(uVar41,CONCAT11(uVar39,uVar37))) *
        (float)((ulong)uVar96 >> 0x20) * (float)((ulong)uVar118 >> 0x20) -
       (float)((ulong)uVar119 >> 0x20) *
       (float)CONCAT13(uVar43,CONCAT12(uVar41,CONCAT11(uVar39,uVar37))) *
       (float)((ulong)uVar127 >> 0x20)) +
       ((float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) * (float)uVar115 *
        (float)uVar125 -
       (float)uVar126 * (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) *
       (float)uVar35) +
       ((float)CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) *
        (float)((ulong)uVar115 >> 0x20) * (float)((ulong)uVar125 >> 0x20) -
       (float)((ulong)uVar126 >> 0x20) *
       (float)CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) *
       (float)((ulong)uVar35 >> 0x20));
  auVar116._4_4_ = auVar116._0_4_;
  auVar116._8_4_ = auVar116._0_4_;
  auVar116._12_4_ = auVar116._0_4_;
  auVar120 = NEON_frecpe(auVar116,4);
  auVar130 = NEON_frecps(auVar120,auVar116,4);
  auVar121._0_4_ = auVar120._0_4_ * auVar130._0_4_;
  auVar121._4_4_ = auVar120._4_4_ * auVar130._4_4_;
  auVar121._8_4_ = auVar120._8_4_ * auVar130._8_4_;
  auVar121._12_4_ = auVar120._12_4_ * auVar130._12_4_;
  auVar120 = NEON_frecps(auVar121,auVar116,4);
  fVar117 = auVar121._0_4_ * auVar120._0_4_;
  fVar122 = auVar121._4_4_ * auVar120._4_4_;
  fVar123 = auVar121._8_4_ * auVar120._8_4_;
  fVar124 = auVar121._12_4_ * auVar120._12_4_;
  uVar22 = CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)));
  uVar9 = CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57)));
  uVar23 = CONCAT13(uVar75,CONCAT12(uVar74,CONCAT11(uVar73,uVar72)));
  uVar6 = (undefined2)(CONCAT12(uVar62,CONCAT11(uVar61,uVar43)) >> 8);
  uVar25 = (undefined3)(CONCAT16(uVar41,CONCAT15(uVar39,CONCAT14(uVar37,uVar9))) >> 0x20);
  auVar24[3] = uVar43;
  auVar24._0_3_ = uVar25;
  auVar24[4] = uVar76;
  auVar24[5] = uVar77;
  auVar24[6] = uVar78;
  auVar24[7] = uVar79;
  auVar24[8] = uVar103;
  auVar24[9] = uVar104;
  auVar24[10] = uVar105;
  auVar24[0xb] = uVar106;
  auVar24._12_4_ = 0;
  uVar115 = a64_TBL(ZEXT816(0),auVar24,DAT_04101580);
  auVar26[3] = uVar43;
  auVar26._0_3_ = uVar25;
  auVar26[4] = uVar76;
  auVar26[5] = uVar77;
  auVar26[6] = uVar78;
  auVar26[7] = uVar79;
  auVar26[8] = uVar103;
  auVar26[9] = uVar104;
  auVar26[10] = uVar105;
  auVar26[0xb] = uVar106;
  auVar26._12_4_ = 0;
  uVar128 = a64_TBL(ZEXT816(0),auVar26,DAT_041015c8);
  auVar120[2] = uVar63;
  auVar120._0_2_ = uVar6;
  auVar120[3] = uVar64;
  auVar120[4] = uVar80;
  auVar120[5] = uVar81;
  auVar120[6] = uVar82;
  auVar120[7] = uVar83;
  auVar120[8] = uVar107;
  auVar120[9] = uVar108;
  auVar120[10] = uVar109;
  auVar120[0xb] = uVar110;
  auVar120._12_4_ = 0;
  uVar131 = a64_TBL(ZEXT816(0),auVar120,DAT_041016a0);
  auVar130[2] = uVar63;
  auVar130._0_2_ = uVar6;
  auVar130[3] = uVar64;
  auVar130[4] = uVar80;
  auVar130[5] = uVar81;
  auVar130[6] = uVar82;
  auVar130[7] = uVar83;
  auVar130[8] = uVar107;
  auVar130[9] = uVar108;
  auVar130[10] = uVar109;
  auVar130[0xb] = uVar110;
  auVar130._12_4_ = 0;
  uVar132 = a64_TBL(ZEXT816(0),auVar130,DAT_04101580);
  auVar31._4_4_ = uVar23;
  auVar31._0_4_ = uVar9;
  auVar31._8_4_ = uVar22;
  auVar31._12_4_ = 0;
  uVar119 = a64_TBL(ZEXT816(0),auVar31,DAT_04101580);
  auVar7[2] = uVar63;
  auVar7._0_2_ = uVar6;
  auVar7[3] = uVar64;
  auVar7[4] = uVar80;
  auVar7[5] = uVar81;
  auVar7[6] = uVar82;
  auVar7[7] = uVar83;
  auVar7[8] = uVar107;
  auVar7[9] = uVar108;
  auVar7[10] = uVar109;
  auVar7[0xb] = uVar110;
  auVar7._12_4_ = 0;
  uVar129 = a64_TBL(ZEXT816(0),auVar7,DAT_04101598);
  auVar8[2] = uVar63;
  auVar8._0_2_ = uVar6;
  auVar8[3] = uVar64;
  auVar8[4] = uVar80;
  auVar8[5] = uVar81;
  auVar8[6] = uVar82;
  auVar8[7] = uVar83;
  auVar8[8] = uVar107;
  auVar8[9] = uVar108;
  auVar8[10] = uVar109;
  auVar8[0xb] = uVar110;
  auVar8._12_4_ = 0;
  uVar96 = a64_TBL(ZEXT816(0),auVar8,DAT_041015c8);
  auVar32._4_4_ = uVar23;
  auVar32._0_4_ = uVar9;
  auVar32._8_4_ = uVar22;
  auVar32._12_4_ = 0;
  uVar125 = a64_TBL(ZEXT816(0),auVar32,DAT_041015c8);
  auVar27[3] = uVar43;
  auVar27._0_3_ = uVar25;
  auVar27[4] = uVar76;
  auVar27[5] = uVar77;
  auVar27[6] = uVar78;
  auVar27[7] = uVar79;
  auVar27[8] = uVar103;
  auVar27[9] = uVar104;
  auVar27[10] = uVar105;
  auVar27[0xb] = uVar106;
  auVar27._12_4_ = 0;
  uVar35 = a64_TBL(ZEXT816(0),auVar27,DAT_04101598);
  auVar28[3] = uVar43;
  auVar28._0_3_ = uVar25;
  auVar28[4] = uVar76;
  auVar28[5] = uVar77;
  auVar28[6] = uVar78;
  auVar28[7] = uVar79;
  auVar28[8] = uVar103;
  auVar28[9] = uVar104;
  auVar28[10] = uVar105;
  auVar28[0xb] = uVar106;
  auVar28._12_4_ = 0;
  uVar118 = a64_TBL(ZEXT816(0),auVar28,DAT_041016a0);
  auVar33._4_4_ = uVar23;
  auVar33._0_4_ = uVar9;
  auVar33._8_4_ = uVar22;
  auVar33._12_4_ = 0;
  uVar126 = a64_TBL(ZEXT816(0),auVar33,DAT_04101598);
  auVar34._4_4_ = uVar23;
  auVar34._0_4_ = uVar9;
  auVar34._8_4_ = uVar22;
  auVar34._12_4_ = 0;
  uVar127 = a64_TBL(ZEXT816(0),auVar34,DAT_041016a0);
  fVar14 = (float)((ulong)uVar115 >> 0x20);
  fVar93 = (float)((ulong)uVar129 >> 0x20);
  fVar16 = (float)((ulong)uVar128 >> 0x20);
  fVar95 = (float)((ulong)uVar131 >> 0x20);
  fVar15 = (float)((ulong)uVar35 >> 0x20);
  fVar94 = (float)((ulong)uVar132 >> 0x20);
  fVar17 = (float)((ulong)uVar118 >> 0x20);
  fVar133 = (float)((ulong)uVar96 >> 0x20);
  fVar97 = (float)((ulong)uVar126 >> 0x20);
  fVar98 = (float)((ulong)uVar127 >> 0x20);
  fVar89 = (float)((ulong)uVar119 >> 0x20);
  fVar91 = (float)((ulong)uVar125 >> 0x20);
  fVar88 = fVar117 * ((float)uVar115 * (float)uVar129 - (float)uVar35 * (float)uVar132);
  fVar29 = fVar122 * (fVar14 * fVar93 - fVar15 * fVar94);
  fVar90 = fVar123 * ((float)uVar128 * (float)uVar131 - (float)uVar118 * (float)uVar96);
  fVar30 = fVar124 * (fVar16 * fVar95 - fVar17 * fVar133);
  fVar92 = fVar117 * ((float)uVar132 * (float)uVar126 - (float)uVar129 * (float)uVar119);
  fVar93 = fVar122 * (fVar94 * fVar97 - fVar93 * fVar89);
  fVar94 = fVar123 * ((float)uVar96 * (float)uVar127 - (float)uVar131 * (float)uVar125);
  fVar95 = fVar124 * (fVar133 * fVar98 - fVar95 * fVar91);
  fVar117 = fVar117 * ((float)uVar35 * (float)uVar119 - (float)uVar126 * (float)uVar115);
  fVar122 = fVar122 * (fVar15 * fVar89 - fVar97 * fVar14);
  fVar123 = fVar123 * ((float)uVar118 * (float)uVar125 - (float)uVar127 * (float)uVar128);
  fVar124 = fVar124 * (fVar17 * fVar91 - fVar98 * fVar16);
  fVar14 = (fVar88 * -0.0 - fVar92 * 0.0) - fVar117 * 0.0;
  fVar15 = (fVar29 * -0.0 - fVar93 * 0.0) - fVar122 * 0.0;
  fVar16 = (fVar90 * -0.0 - fVar94 * 0.0) - fVar123 * 0.0;
  fVar17 = (fVar30 * -0.0 - fVar95 * 0.0) - fVar124 * 0.0;
  iVar5 = -(uint)(auVar116._0_4_ == 0.0);
  bVar38 = (byte)iVar5;
  bVar40 = (byte)((uint)iVar5 >> 8);
  bVar42 = (byte)((uint)iVar5 >> 0x10);
  bVar44 = (byte)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(auVar116._0_4_ == 0.0);
  bVar45 = (byte)iVar5;
  bVar46 = (byte)((uint)iVar5 >> 8);
  bVar47 = (byte)((uint)iVar5 >> 0x10);
  bVar48 = (byte)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(auVar116._0_4_ == 0.0);
  bVar49 = (byte)iVar5;
  bVar50 = (byte)((uint)iVar5 >> 8);
  bVar51 = (byte)((uint)iVar5 >> 0x10);
  bVar52 = (byte)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(auVar116._0_4_ == 0.0);
  bVar53 = (byte)iVar5;
  bVar54 = (byte)((uint)iVar5 >> 8);
  bVar55 = (byte)((uint)iVar5 >> 0x10);
  bVar56 = (byte)((uint)iVar5 >> 0x18);
  fVar88 = (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & ~bVar44,
                           CONCAT12((byte)((uint)fVar88 >> 0x10) & ~bVar42,
                                    CONCAT11((byte)((uint)fVar88 >> 8) & ~bVar40,
                                             SUB41(fVar88,0) & ~bVar38)));
  fVar90 = (float)CONCAT13((byte)((uint)fVar90 >> 0x18) & ~bVar52,
                           CONCAT12((byte)((uint)fVar90 >> 0x10) & ~bVar51,
                                    CONCAT11((byte)((uint)fVar90 >> 8) & ~bVar50,
                                             SUB41(fVar90,0) & ~bVar49)));
  fVar89 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~bVar44,
                           CONCAT12((byte)((uint)fVar92 >> 0x10) & ~bVar42,
                                    CONCAT11((byte)((uint)fVar92 >> 8) & ~bVar40,
                                             SUB41(fVar92,0) & ~bVar38)));
  fVar91 = (float)CONCAT13((byte)((uint)fVar94 >> 0x18) & ~bVar52,
                           CONCAT12((byte)((uint)fVar94 >> 0x10) & ~bVar51,
                                    CONCAT11((byte)((uint)fVar94 >> 8) & ~bVar50,
                                             SUB41(fVar94,0) & ~bVar49)));
  fVar15 = (float)((ulong)*param_2 >> 0x20) +
           (float)(CONCAT17((byte)((uint)fVar29 >> 0x18) & ~bVar48,
                            CONCAT16((byte)((uint)fVar29 >> 0x10) & ~bVar47,
                                     CONCAT15((byte)((uint)fVar29 >> 8) & ~bVar46,
                                              CONCAT14(SUB41(fVar29,0) & ~bVar45,fVar88)))) >> 0x20)
           * fVar69 +
           (float)(CONCAT17((byte)((uint)fVar93 >> 0x18) & ~bVar48,
                            CONCAT16((byte)((uint)fVar93 >> 0x10) & ~bVar47,
                                     CONCAT15((byte)((uint)fVar93 >> 8) & ~bVar46,
                                              CONCAT14(SUB41(fVar93,0) & ~bVar45,fVar89)))) >> 0x20)
           * fVar70 +
           (float)CONCAT13((byte)((uint)fVar122 >> 0x18) & ~bVar48,
                           CONCAT12((byte)((uint)fVar122 >> 0x10) & ~bVar47,
                                    CONCAT11((byte)((uint)fVar122 >> 8) & ~bVar46,
                                             SUB41(fVar122,0) & ~bVar45))) * fVar71 +
           (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~bVar48,
                           CONCAT12((byte)((uint)fVar15 >> 0x10) & ~bVar47,
                                    CONCAT11((byte)((uint)fVar15 >> 8) & ~bVar46,
                                             SUB41(fVar15,0) & ~bVar45)));
  fVar17 = (float)((ulong)param_2[1] >> 0x20) +
           (float)(CONCAT17((byte)((uint)fVar30 >> 0x18) & ~bVar56,
                            CONCAT16((byte)((uint)fVar30 >> 0x10) & ~bVar55,
                                     CONCAT15((byte)((uint)fVar30 >> 8) & ~bVar54,
                                              CONCAT14(SUB41(fVar30,0) & ~bVar53,fVar90)))) >> 0x20)
           * fVar69 +
           (float)(CONCAT17((byte)((uint)fVar95 >> 0x18) & ~bVar56,
                            CONCAT16((byte)((uint)fVar95 >> 0x10) & ~bVar55,
                                     CONCAT15((byte)((uint)fVar95 >> 8) & ~bVar54,
                                              CONCAT14(SUB41(fVar95,0) & ~bVar53,fVar91)))) >> 0x20)
           * fVar70 +
           (float)CONCAT13((byte)((uint)fVar124 >> 0x18) & ~bVar56,
                           CONCAT12((byte)((uint)fVar124 >> 0x10) & ~bVar55,
                                    CONCAT11((byte)((uint)fVar124 >> 8) & ~bVar54,
                                             SUB41(fVar124,0) & ~bVar53))) * fVar71 +
           (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~bVar56,
                           CONCAT12((byte)((uint)fVar17 >> 0x10) & ~bVar55,
                                    CONCAT11((byte)((uint)fVar17 >> 8) & ~bVar54,
                                             SUB41(fVar17,0) & ~bVar53)));
  param_2[1] = CONCAT17((char)((uint)fVar17 >> 0x18),
                        CONCAT16((char)((uint)fVar17 >> 0x10),
                                 CONCAT15((char)((uint)fVar17 >> 8),
                                          CONCAT14(SUB41(fVar17,0),
                                                   (float)param_2[1] +
                                                   fVar90 * fVar69 + fVar91 * fVar70 +
                                                   (float)CONCAT13((byte)((uint)fVar123 >> 0x18) &
                                                                   ~bVar52,CONCAT12((byte)((uint)
                                                  fVar123 >> 0x10) & ~bVar51,
                                                  CONCAT11((byte)((uint)fVar123 >> 8) & ~bVar50,
                                                           SUB41(fVar123,0) & ~bVar49))) * fVar71 +
                                                  (float)CONCAT13((byte)((uint)fVar16 >> 0x18) &
                                                                  ~bVar52,CONCAT12((byte)((uint)
                                                  fVar16 >> 0x10) & ~bVar51,
                                                  CONCAT11((byte)((uint)fVar16 >> 8) & ~bVar50,
                                                           SUB41(fVar16,0) & ~bVar49)))))));
  *param_2 = CONCAT17((char)((uint)fVar15 >> 0x18),
                      CONCAT16((char)((uint)fVar15 >> 0x10),
                               CONCAT15((char)((uint)fVar15 >> 8),
                                        CONCAT14(SUB41(fVar15,0),
                                                 (float)*param_2 +
                                                 fVar88 * fVar69 + fVar89 * fVar70 +
                                                 (float)CONCAT13((byte)((uint)fVar117 >> 0x18) &
                                                                 ~bVar44,CONCAT12((byte)((uint)
                                                  fVar117 >> 0x10) & ~bVar42,
                                                  CONCAT11((byte)((uint)fVar117 >> 8) & ~bVar40,
                                                           SUB41(fVar117,0) & ~bVar38))) * fVar71 +
                                                 (float)CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                                                 ~bVar44,CONCAT12((byte)((uint)
                                                  fVar14 >> 0x10) & ~bVar42,
                                                  CONCAT11((byte)((uint)fVar14 >> 8) & ~bVar40,
                                                           SUB41(fVar14,0) & ~bVar38)))))));
  return;
}

