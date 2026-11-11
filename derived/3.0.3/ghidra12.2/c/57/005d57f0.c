
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d57f0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  int iVar44;
  ushort *puVar45;
  ulong uVar46;
  uint uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  float *__s;
  ulong uVar60;
  ulong uVar61;
  undefined2 *puVar62;
  ulong uVar63;
  ulong uVar64;
  byte *pbVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar82;
  float fVar84;
  float fVar85;
  undefined1 auVar69 [16];
  float fVar83;
  float fVar86;
  float fVar87;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar88;
  undefined1 auVar89 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar102;
  int iVar103;
  float fVar104;
  float fVar106;
  int iVar107;
  float fVar108;
  undefined1 auVar105 [16];
  float fVar109;
  float fVar110;
  int iVar111;
  float fVar112;
  float fVar113;
  int iVar114;
  int iVar115;
  float fVar116;
  float fVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  undefined1 auVar120 [16];
  undefined8 uVar121;
  undefined8 uVar122;
  undefined1 auVar123 [16];
  undefined8 uVar124;
  undefined8 uVar125;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar128;
  float fVar129;
  float fVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined1 auVar138 [16];
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined8 uVar144;
  undefined8 uVar145;
  float fVar146;
  undefined8 uVar147;
  undefined8 uVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  undefined8 uVar154;
  undefined8 uVar155;
  undefined8 uVar156;
  undefined8 uVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  
  lVar36 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar36 != 0) {
    FUN_00443a00(lVar36,"TtUpdate Sim Normals");
  }
  lVar36 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  __s = *(float **)(param_2 + 0x40);
  iVar44 = *(int *)(lVar36 + 0x168);
  uVar3 = *(uint *)(lVar36 + 0x48);
  if (0 < (int)uVar3) {
    memset(__s,0,(ulong)uVar3 << 4);
  }
  uVar155 = _DAT_0413f328;
  uVar156 = _DAT_0413f320;
  puVar45 = *(ushort **)(lVar36 + 0x160);
  pbVar65 = *(byte **)(lVar36 + 0x170);
  uVar1 = iVar44 / 3;
  puVar62 = &DAT_04c6f410;
  if (0x17 < iVar44) {
    auVar89 = NEON_fmov(0x40e00000,4);
    lVar36 = 0;
    do {
      uVar49 = (ulong)puVar45[2];
      uVar50 = (ulong)puVar45[5];
      uVar46 = (ulong)*puVar45;
      uVar38 = (ulong)puVar45[3];
      uVar40 = (ulong)puVar45[6];
      uVar51 = (ulong)puVar45[8];
      uVar37 = (ulong)puVar45[0x10];
      uVar64 = (ulong)puVar45[0x13];
      uVar53 = (ulong)puVar45[0x15];
      uVar48 = (ulong)puVar45[1];
      uVar39 = (ulong)puVar45[4];
      uVar52 = (ulong)puVar45[0xb];
      uVar63 = (ulong)puVar45[0x12];
      puVar6 = (undefined8 *)(lVar2 + uVar64 * 0x10);
      uVar131 = *puVar6;
      uVar132 = puVar6[1];
      uVar42 = (ulong)puVar45[9];
      uVar59 = (ulong)puVar45[0xd];
      uVar60 = (ulong)puVar45[0x16];
      pfVar7 = (float *)(lVar2 + uVar48 * 0x10);
      uVar41 = (ulong)puVar45[7];
      puVar6 = (undefined8 *)(lVar2 + uVar46 * 0x10);
      uVar118 = puVar6[1];
      fVar135 = (float)uVar118;
      fVar136 = (float)((ulong)uVar118 >> 0x20);
      uVar118 = *puVar6;
      fVar133 = (float)uVar118;
      fVar134 = (float)((ulong)uVar118 >> 0x20);
      auVar127._0_4_ = *pfVar7 - fVar133;
      auVar127._4_4_ = pfVar7[1] - fVar134;
      auVar127._8_4_ = pfVar7[2] - fVar135;
      auVar127._12_4_ = pfVar7[3] - fVar136;
      uVar56 = (ulong)puVar45[0xf];
      puVar6 = (undefined8 *)(lVar2 + uVar60 * 0x10);
      uVar145 = *puVar6;
      uVar148 = puVar6[1];
      auVar69 = NEON_ext(auVar127,auVar127,4,1);
      auVar120 = NEON_ext(auVar69,auVar69,8,1);
      uVar118 = NEON_rev64(auVar120._0_8_,4);
      pfVar7 = (float *)(lVar2 + uVar49 * 0x10);
      fVar133 = *pfVar7 - fVar133;
      fVar134 = pfVar7[1] - fVar134;
      fVar135 = pfVar7[2] - fVar135;
      fVar136 = pfVar7[3] - fVar136;
      auVar120._4_4_ = fVar134;
      auVar120._0_4_ = fVar133;
      auVar120._8_4_ = fVar135;
      auVar120._12_4_ = fVar136;
      auVar138._4_4_ = fVar134;
      auVar138._0_4_ = fVar133;
      auVar138._8_4_ = fVar135;
      auVar138._12_4_ = fVar136;
      auVar120 = NEON_ext(auVar120,auVar138,4,1);
      auVar138 = NEON_ext(auVar120,auVar120,8,1);
      bVar4 = pbVar65[lVar36];
      lVar36 = lVar36 + 1;
      pfVar7 = (float *)(lVar2 + uVar39 * 0x10);
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[2];
      fVar67 = pfVar7[3];
      uVar119 = NEON_rev64(auVar138._0_8_,4);
      uVar43 = (ulong)puVar45[10];
      pfVar7 = (float *)(lVar2 + uVar38 * 0x10);
      fVar83 = *pfVar7;
      fVar86 = pfVar7[1];
      fVar91 = pfVar7[2];
      fVar10 = pfVar7[3];
      uVar61 = (ulong)puVar45[0xc];
      pfVar7 = (float *)(lVar2 + uVar41 * 0x10);
      fVar11 = *pfVar7;
      fVar12 = pfVar7[1];
      fVar13 = pfVar7[2];
      fVar14 = pfVar7[3];
      pfVar7 = (float *)(lVar2 + uVar40 * 0x10);
      fVar15 = *pfVar7;
      fVar16 = pfVar7[1];
      fVar17 = pfVar7[2];
      fVar18 = pfVar7[3];
      pfVar7 = (float *)(lVar2 + uVar42 * 0x10);
      fVar19 = *pfVar7;
      fVar20 = pfVar7[1];
      fVar104 = pfVar7[2];
      fVar108 = pfVar7[3];
      pfVar7 = (float *)(lVar2 + uVar59 * 0x10);
      fVar21 = *pfVar7;
      fVar22 = pfVar7[1];
      fVar23 = pfVar7[2];
      fVar24 = pfVar7[3];
      uVar58 = (ulong)puVar45[0xe];
      pfVar7 = (float *)(lVar2 + uVar37 * 0x10);
      fVar102 = *pfVar7;
      fVar106 = pfVar7[1];
      fVar110 = pfVar7[2];
      fVar113 = pfVar7[3];
      pfVar7 = (float *)(lVar2 + uVar63 * 0x10);
      fVar143 = *pfVar7;
      fVar128 = pfVar7[1];
      fVar129 = pfVar7[2];
      fVar130 = pfVar7[3];
      uVar57 = (ulong)puVar45[0x11];
      puVar6 = (undefined8 *)(lVar2 + uVar58 * 0x10);
      uVar157 = puVar6[1];
      uVar154 = *puVar6;
      puVar6 = (undefined8 *)(lVar2 + uVar57 * 0x10);
      uVar147 = puVar6[1];
      uVar144 = *puVar6;
      auVar123._0_4_ = auVar127._0_4_ * auVar120._0_4_ - auVar69._0_4_ * fVar133;
      auVar123._4_4_ = auVar127._4_4_ * auVar120._4_4_ - auVar69._4_4_ * fVar134;
      auVar123._8_4_ = auVar127._8_4_ * (float)uVar119 - (float)uVar118 * fVar135;
      auVar123._12_4_ =
           auVar127._12_4_ * (float)((ulong)uVar119 >> 0x20) -
           (float)((ulong)uVar118 >> 0x20) * fVar136;
      fVar92 = auVar89._0_4_;
      fVar90 = (float)(bVar4 >> 7) * fVar92;
      auVar120 = NEON_ext(auVar123,auVar123,4,1);
      pfVar7 = __s + uVar46 * 4;
      fVar133 = *pfVar7;
      fVar134 = pfVar7[1];
      fVar135 = pfVar7[3];
      pfVar8 = (float *)(lVar2 + uVar43 * 0x10);
      fVar136 = *pfVar8;
      fVar137 = pfVar8[1];
      fVar139 = pfVar8[2];
      fVar140 = pfVar8[3];
      pfVar8 = (float *)(lVar2 + uVar61 * 0x10);
      fVar141 = *pfVar8;
      fVar142 = pfVar8[1];
      fVar146 = pfVar8[2];
      fVar149 = pfVar8[3];
      pfVar8 = (float *)(lVar2 + uVar56 * 0x10);
      fVar150 = *pfVar8;
      fVar151 = pfVar8[1];
      fVar152 = pfVar8[2];
      fVar153 = pfVar8[3];
      pfVar8 = (float *)(lVar2 + uVar53 * 0x10);
      fVar25 = *pfVar8;
      fVar26 = pfVar8[1];
      fVar27 = pfVar8[2];
      fVar28 = pfVar8[3];
      pfVar8 = (float *)(lVar2 + uVar50 * 0x10);
      fVar29 = *pfVar8;
      fVar30 = pfVar8[1];
      fVar31 = pfVar8[2];
      fVar32 = pfVar8[3];
      puVar6 = (undefined8 *)(lVar2 + uVar51 * 0x10);
      uVar125 = puVar6[1];
      uVar124 = *puVar6;
      pfVar8 = (float *)(lVar2 + uVar52 * 0x10);
      fVar158 = *pfVar8;
      fVar159 = pfVar8[1];
      fVar160 = pfVar8[2];
      fVar161 = pfVar8[3];
      fVar109 = (float)uVar156;
      fVar112 = (float)((ulong)uVar156 >> 0x20);
      fVar116 = (float)uVar155;
      fVar117 = (float)((ulong)uVar155 >> 0x20);
      uVar54 = (ulong)puVar45[0x14];
      fVar66 = auVar120._0_4_ * (fVar109 - fVar90);
      fVar82 = auVar120._4_4_ * (fVar112 - fVar90);
      fVar85 = auVar123._0_4_ * (fVar116 - fVar90);
      fVar87 = auVar123._4_4_ * (fVar117 - fVar90);
      uVar55 = (ulong)puVar45[0x17];
      puVar45 = puVar45 + 0x18;
      pfVar8 = (float *)(lVar2 + uVar54 * 0x10);
      fVar90 = *pfVar8;
      fVar33 = pfVar8[1];
      fVar34 = pfVar8[2];
      fVar35 = pfVar8[3];
      puVar6 = (undefined8 *)(lVar2 + uVar55 * 0x10);
      uVar119 = puVar6[1];
      uVar118 = *puVar6;
      pfVar8 = __s + uVar46 * 4;
      pfVar8[2] = pfVar7[2] + fVar85;
      pfVar8[3] = fVar135 + fVar87;
      *pfVar8 = fVar133 + fVar66;
      pfVar8[1] = fVar134 + fVar82;
      pfVar7 = __s + uVar48 * 4;
      fVar133 = *pfVar7;
      fVar134 = pfVar7[1];
      fVar135 = pfVar7[3];
      pfVar8 = __s + uVar48 * 4;
      pfVar8[2] = pfVar7[2] + fVar85;
      pfVar8[3] = fVar135 + fVar87;
      *pfVar8 = fVar133 + fVar66;
      pfVar8[1] = fVar134 + fVar82;
      pfVar7 = __s + uVar49 * 4;
      fVar133 = *pfVar7;
      fVar134 = pfVar7[1];
      fVar135 = pfVar7[3];
      auVar93._0_4_ = fVar29 - fVar83;
      auVar93._4_4_ = fVar30 - fVar86;
      auVar93._8_4_ = fVar31 - fVar91;
      auVar93._12_4_ = fVar32 - fVar10;
      pfVar8 = __s + uVar49 * 4;
      pfVar8[2] = pfVar7[2] + fVar85;
      pfVar8[3] = fVar135 + fVar87;
      *pfVar8 = fVar133 + fVar66;
      pfVar8[1] = fVar134 + fVar82;
      auVar69._0_4_ = fVar68 - fVar83;
      auVar69._4_4_ = fVar84 - fVar86;
      auVar69._8_4_ = fVar88 - fVar91;
      auVar69._12_4_ = fVar67 - fVar10;
      auVar138 = NEON_ext(auVar93,auVar93,4,1);
      auVar126 = NEON_ext(auVar138,auVar138,8,1);
      auVar120 = NEON_ext(auVar69,auVar69,4,1);
      auVar123 = NEON_ext(auVar120,auVar120,8,1);
      uVar121 = NEON_rev64(auVar123._0_8_,4);
      uVar122 = NEON_rev64(auVar126._0_8_,4);
      auVar126._0_4_ = auVar69._0_4_ * auVar138._0_4_ - auVar120._0_4_ * auVar93._0_4_;
      auVar126._4_4_ = auVar69._4_4_ * auVar138._4_4_ - auVar120._4_4_ * auVar93._4_4_;
      auVar126._8_4_ = auVar69._8_4_ * (float)uVar122 - (float)uVar121 * auVar93._8_4_;
      auVar126._12_4_ =
           auVar69._12_4_ * (float)((ulong)uVar122 >> 0x20) -
           (float)((ulong)uVar121 >> 0x20) * auVar93._12_4_;
      auVar120 = NEON_ext(auVar126,auVar126,4,1);
      fVar91 = (float)(bVar4 >> 6 & 1) * fVar92;
      pfVar7 = __s + uVar38 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      fVar67 = auVar120._0_4_ * (fVar109 - fVar91);
      fVar83 = auVar120._4_4_ * (fVar112 - fVar91);
      fVar86 = auVar126._0_4_ * (fVar116 - fVar91);
      fVar91 = auVar126._4_4_ * (fVar117 - fVar91);
      pfVar8 = __s + uVar38 * 4;
      pfVar8[2] = pfVar7[2] + fVar86;
      pfVar8[3] = fVar88 + fVar91;
      *pfVar8 = fVar68 + fVar67;
      pfVar8[1] = fVar84 + fVar83;
      pfVar7 = __s + uVar39 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      pfVar8 = __s + uVar39 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar50 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      auVar94._0_4_ = (float)uVar124 - fVar15;
      auVar94._4_4_ = (float)((ulong)uVar124 >> 0x20) - fVar16;
      auVar94._8_4_ = (float)uVar125 - fVar17;
      auVar94._12_4_ = (float)((ulong)uVar125 >> 0x20) - fVar18;
      pfVar8 = __s + uVar50 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      auVar70._0_4_ = fVar11 - fVar15;
      auVar70._4_4_ = fVar12 - fVar16;
      auVar70._8_4_ = fVar13 - fVar17;
      auVar70._12_4_ = fVar14 - fVar18;
      auVar123 = NEON_ext(auVar94,auVar94,4,1);
      auVar138 = NEON_ext(auVar123,auVar123,8,1);
      auVar69 = NEON_ext(auVar70,auVar70,4,1);
      auVar120 = NEON_ext(auVar69,auVar69,8,1);
      uVar121 = NEON_rev64(auVar120._0_8_,4);
      uVar122 = NEON_rev64(auVar138._0_8_,4);
      auVar71._0_4_ = auVar70._0_4_ * auVar123._0_4_ - auVar69._0_4_ * auVar94._0_4_;
      auVar71._4_4_ = auVar70._4_4_ * auVar123._4_4_ - auVar69._4_4_ * auVar94._4_4_;
      auVar71._8_4_ = auVar70._8_4_ * (float)uVar122 - (float)uVar121 * auVar94._8_4_;
      auVar71._12_4_ =
           auVar70._12_4_ * (float)((ulong)uVar122 >> 0x20) -
           (float)((ulong)uVar121 >> 0x20) * auVar94._12_4_;
      auVar120 = NEON_ext(auVar71,auVar71,4,1);
      fVar91 = (float)(bVar4 >> 5 & 1) * fVar92;
      pfVar7 = __s + uVar40 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      fVar67 = auVar120._0_4_ * (fVar109 - fVar91);
      fVar83 = auVar120._4_4_ * (fVar112 - fVar91);
      fVar86 = auVar71._0_4_ * (fVar116 - fVar91);
      fVar91 = auVar71._4_4_ * (fVar117 - fVar91);
      pfVar8 = __s + uVar40 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar41 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      pfVar8 = __s + uVar41 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar51 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      auVar95._0_4_ = fVar158 - fVar19;
      auVar95._4_4_ = fVar159 - fVar20;
      auVar95._8_4_ = fVar160 - fVar104;
      auVar95._12_4_ = fVar161 - fVar108;
      pfVar8 = __s + uVar51 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      auVar72._0_4_ = fVar136 - fVar19;
      auVar72._4_4_ = fVar137 - fVar20;
      auVar72._8_4_ = fVar139 - fVar104;
      auVar72._12_4_ = fVar140 - fVar108;
      auVar138 = NEON_ext(auVar95,auVar95,4,1);
      auVar123 = NEON_ext(auVar138,auVar138,8,1);
      auVar120 = NEON_ext(auVar72,auVar72,4,1);
      auVar69 = NEON_ext(auVar120,auVar120,8,1);
      uVar121 = NEON_rev64(auVar69._0_8_,4);
      uVar122 = NEON_rev64(auVar123._0_8_,4);
      auVar73._0_4_ = auVar72._0_4_ * auVar138._0_4_ - auVar120._0_4_ * auVar95._0_4_;
      auVar73._4_4_ = auVar72._4_4_ * auVar138._4_4_ - auVar120._4_4_ * auVar95._4_4_;
      auVar73._8_4_ = auVar72._8_4_ * (float)uVar122 - (float)uVar121 * auVar95._8_4_;
      auVar73._12_4_ =
           auVar72._12_4_ * (float)((ulong)uVar122 >> 0x20) -
           (float)((ulong)uVar121 >> 0x20) * auVar95._12_4_;
      auVar120 = NEON_ext(auVar73,auVar73,4,1);
      fVar91 = (float)(bVar4 >> 4 & 1) * fVar92;
      pfVar7 = __s + uVar42 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      fVar67 = auVar120._0_4_ * (fVar109 - fVar91);
      fVar83 = auVar120._4_4_ * (fVar112 - fVar91);
      fVar86 = auVar73._0_4_ * (fVar116 - fVar91);
      fVar91 = auVar73._4_4_ * (fVar117 - fVar91);
      pfVar8 = __s + uVar42 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar43 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      pfVar8 = __s + uVar43 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar52 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      auVar96._0_4_ = (float)uVar154 - fVar141;
      auVar96._4_4_ = (float)((ulong)uVar154 >> 0x20) - fVar142;
      auVar96._8_4_ = (float)uVar157 - fVar146;
      auVar96._12_4_ = (float)((ulong)uVar157 >> 0x20) - fVar149;
      pfVar8 = __s + uVar52 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      auVar74._0_4_ = fVar21 - fVar141;
      auVar74._4_4_ = fVar22 - fVar142;
      auVar74._8_4_ = fVar23 - fVar146;
      auVar74._12_4_ = fVar24 - fVar149;
      auVar138 = NEON_ext(auVar96,auVar96,4,1);
      auVar123 = NEON_ext(auVar138,auVar138,8,1);
      auVar120 = NEON_ext(auVar74,auVar74,4,1);
      auVar69 = NEON_ext(auVar120,auVar120,8,1);
      uVar121 = NEON_rev64(auVar69._0_8_,4);
      uVar122 = NEON_rev64(auVar123._0_8_,4);
      auVar75._0_4_ = auVar74._0_4_ * auVar138._0_4_ - auVar120._0_4_ * auVar96._0_4_;
      auVar75._4_4_ = auVar74._4_4_ * auVar138._4_4_ - auVar120._4_4_ * auVar96._4_4_;
      auVar75._8_4_ = auVar74._8_4_ * (float)uVar122 - (float)uVar121 * auVar96._8_4_;
      auVar75._12_4_ =
           auVar74._12_4_ * (float)((ulong)uVar122 >> 0x20) -
           (float)((ulong)uVar121 >> 0x20) * auVar96._12_4_;
      auVar120 = NEON_ext(auVar75,auVar75,4,1);
      fVar91 = (float)(bVar4 >> 3 & 1) * fVar92;
      pfVar7 = __s + uVar61 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      fVar67 = auVar120._0_4_ * (fVar109 - fVar91);
      fVar83 = auVar120._4_4_ * (fVar112 - fVar91);
      fVar86 = auVar75._0_4_ * (fVar116 - fVar91);
      fVar91 = auVar75._4_4_ * (fVar117 - fVar91);
      pfVar8 = __s + uVar61 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar59 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      pfVar8 = __s + uVar59 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar58 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      auVar97._0_4_ = (float)uVar144 - fVar150;
      auVar97._4_4_ = (float)((ulong)uVar144 >> 0x20) - fVar151;
      auVar97._8_4_ = (float)uVar147 - fVar152;
      auVar97._12_4_ = (float)((ulong)uVar147 >> 0x20) - fVar153;
      pfVar8 = __s + uVar58 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      auVar76._0_4_ = fVar102 - fVar150;
      auVar76._4_4_ = fVar106 - fVar151;
      auVar76._8_4_ = fVar110 - fVar152;
      auVar76._12_4_ = fVar113 - fVar153;
      auVar138 = NEON_ext(auVar97,auVar97,4,1);
      auVar123 = NEON_ext(auVar138,auVar138,8,1);
      auVar120 = NEON_ext(auVar76,auVar76,4,1);
      auVar69 = NEON_ext(auVar120,auVar120,8,1);
      uVar121 = NEON_rev64(auVar69._0_8_,4);
      uVar122 = NEON_rev64(auVar123._0_8_,4);
      auVar77._0_4_ = auVar76._0_4_ * auVar138._0_4_ - auVar120._0_4_ * auVar97._0_4_;
      auVar77._4_4_ = auVar76._4_4_ * auVar138._4_4_ - auVar120._4_4_ * auVar97._4_4_;
      auVar77._8_4_ = auVar76._8_4_ * (float)uVar122 - (float)uVar121 * auVar97._8_4_;
      auVar77._12_4_ =
           auVar76._12_4_ * (float)((ulong)uVar122 >> 0x20) -
           (float)((ulong)uVar121 >> 0x20) * auVar97._12_4_;
      auVar120 = NEON_ext(auVar77,auVar77,4,1);
      fVar91 = (float)(bVar4 >> 2 & 1) * fVar92;
      pfVar7 = __s + uVar56 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      fVar67 = auVar120._0_4_ * (fVar109 - fVar91);
      fVar83 = auVar120._4_4_ * (fVar112 - fVar91);
      fVar86 = auVar77._0_4_ * (fVar116 - fVar91);
      fVar91 = auVar77._4_4_ * (fVar117 - fVar91);
      pfVar8 = __s + uVar56 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar37 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      pfVar8 = __s + uVar37 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar57 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      auVar98._0_4_ = fVar90 - fVar143;
      auVar98._4_4_ = fVar33 - fVar128;
      auVar98._8_4_ = fVar34 - fVar129;
      auVar98._12_4_ = fVar35 - fVar130;
      auVar138 = NEON_ext(auVar98,auVar98,4,1);
      pfVar8 = __s + uVar57 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      local_e0 = (float)uVar131;
      fStack_dc = (float)((ulong)uVar131 >> 0x20);
      fStack_d8 = (float)uVar132;
      fStack_d4 = (float)((ulong)uVar132 >> 0x20);
      auVar123 = NEON_ext(auVar138,auVar138,8,1);
      auVar78._0_4_ = local_e0 - fVar143;
      auVar78._4_4_ = fStack_dc - fVar128;
      auVar78._8_4_ = fStack_d8 - fVar129;
      auVar78._12_4_ = fStack_d4 - fVar130;
      auVar120 = NEON_ext(auVar78,auVar78,4,1);
      auVar69 = NEON_ext(auVar120,auVar120,8,1);
      uVar131 = NEON_rev64(auVar69._0_8_,4);
      uVar132 = NEON_rev64(auVar123._0_8_,4);
      auVar79._0_4_ = auVar78._0_4_ * auVar138._0_4_ - auVar120._0_4_ * auVar98._0_4_;
      auVar79._4_4_ = auVar78._4_4_ * auVar138._4_4_ - auVar120._4_4_ * auVar98._4_4_;
      auVar79._8_4_ = auVar78._8_4_ * (float)uVar132 - (float)uVar131 * auVar98._8_4_;
      auVar79._12_4_ =
           auVar78._12_4_ * (float)((ulong)uVar132 >> 0x20) -
           (float)((ulong)uVar131 >> 0x20) * auVar98._12_4_;
      auVar120 = NEON_ext(auVar79,auVar79,4,1);
      fVar91 = (float)(bVar4 >> 1 & 1) * fVar92;
      pfVar7 = __s + uVar63 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      fVar67 = auVar120._0_4_ * (fVar109 - fVar91);
      fVar83 = auVar120._4_4_ * (fVar112 - fVar91);
      fVar86 = auVar79._0_4_ * (fVar116 - fVar91);
      fVar91 = auVar79._4_4_ * (fVar117 - fVar91);
      pfVar8 = __s + uVar63 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar64 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      pfVar8 = __s + uVar64 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar54 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      auVar99._0_4_ = (float)uVar118 - fVar25;
      auVar99._4_4_ = (float)((ulong)uVar118 >> 0x20) - fVar26;
      auVar99._8_4_ = (float)uVar119 - fVar27;
      auVar99._12_4_ = (float)((ulong)uVar119 >> 0x20) - fVar28;
      auVar138 = NEON_ext(auVar99,auVar99,4,1);
      pfVar8 = __s + uVar54 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      local_d0 = (float)uVar145;
      fStack_cc = (float)((ulong)uVar145 >> 0x20);
      fStack_c8 = (float)uVar148;
      fStack_c4 = (float)((ulong)uVar148 >> 0x20);
      auVar123 = NEON_ext(auVar138,auVar138,8,1);
      auVar80._0_4_ = local_d0 - fVar25;
      auVar80._4_4_ = fStack_cc - fVar26;
      auVar80._8_4_ = fStack_c8 - fVar27;
      auVar80._12_4_ = fStack_c4 - fVar28;
      auVar120 = NEON_ext(auVar80,auVar80,4,1);
      auVar69 = NEON_ext(auVar120,auVar120,8,1);
      uVar118 = NEON_rev64(auVar69._0_8_,4);
      uVar119 = NEON_rev64(auVar123._0_8_,4);
      auVar81._0_4_ = auVar80._0_4_ * auVar138._0_4_ - auVar120._0_4_ * auVar99._0_4_;
      auVar81._4_4_ = auVar80._4_4_ * auVar138._4_4_ - auVar120._4_4_ * auVar99._4_4_;
      auVar81._8_4_ = auVar80._8_4_ * (float)uVar119 - (float)uVar118 * auVar99._8_4_;
      auVar81._12_4_ =
           auVar80._12_4_ * (float)((ulong)uVar119 >> 0x20) -
           (float)((ulong)uVar118 >> 0x20) * auVar99._12_4_;
      auVar120 = NEON_ext(auVar81,auVar81,4,1);
      fVar92 = (float)(bVar4 & 1) * fVar92;
      pfVar7 = __s + uVar53 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      fVar67 = (fVar109 - fVar92) * auVar120._0_4_;
      fVar83 = (fVar112 - fVar92) * auVar120._4_4_;
      fVar86 = (fVar116 - fVar92) * auVar81._0_4_;
      fVar91 = (fVar117 - fVar92) * auVar81._4_4_;
      pfVar8 = __s + uVar53 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar60 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      pfVar8 = __s + uVar60 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
      pfVar7 = __s + uVar55 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      pfVar8 = __s + uVar55 * 4;
      pfVar8[2] = fVar86 + pfVar7[2];
      pfVar8[3] = fVar91 + fVar88;
      *pfVar8 = fVar67 + fVar68;
      pfVar8[1] = fVar83 + fVar84;
    } while ((int)lVar36 < (int)uVar1 >> 3);
    pbVar65 = pbVar65 + lVar36;
    puVar62 = (undefined2 *)PTR_DAT_04bd4d90;
  }
  uVar155 = _DAT_0413f328;
  uVar156 = _DAT_0413f320;
  uVar1 = uVar1 & 7;
  if (uVar1 != 0) {
    auVar89 = NEON_fmov(0x40e00000,4);
    uVar47 = 0;
    do {
      uVar37 = (ulong)*puVar45;
      uVar38 = (ulong)puVar45[1];
      uVar39 = (ulong)puVar45[2];
      pfVar7 = (float *)(lVar2 + uVar38 * 0x10);
      pfVar8 = (float *)(lVar2 + uVar37 * 0x10);
      uVar5 = 7 - uVar47;
      pfVar9 = (float *)(lVar2 + uVar39 * 0x10);
      auVar100._0_4_ = *pfVar7 - *pfVar8;
      auVar100._4_4_ = pfVar7[1] - pfVar8[1];
      auVar100._8_4_ = pfVar7[2] - pfVar8[2];
      auVar100._12_4_ = pfVar7[3] - pfVar8[3];
      auVar105._0_4_ = *pfVar9 - *pfVar8;
      auVar105._4_4_ = pfVar9[1] - pfVar8[1];
      auVar105._8_4_ = pfVar9[2] - pfVar8[2];
      auVar105._12_4_ = pfVar9[3] - pfVar8[3];
      auVar120 = NEON_ext(auVar100,auVar100,4,1);
      auVar138 = NEON_ext(auVar105,auVar105,4,1);
      auVar69 = NEON_ext(auVar120,auVar120,8,1);
      auVar123 = NEON_ext(auVar138,auVar138,8,1);
      uVar118 = NEON_rev64(auVar69._0_8_,4);
      uVar119 = NEON_rev64(auVar123._0_8_,4);
      uVar47 = uVar47 + 1 & 0xff;
      puVar45 = puVar45 + 3;
      auVar101._0_4_ = auVar100._0_4_ * auVar138._0_4_ - auVar105._0_4_ * auVar120._0_4_;
      auVar101._4_4_ = auVar100._4_4_ * auVar138._4_4_ - auVar105._4_4_ * auVar120._4_4_;
      auVar101._8_4_ = auVar100._8_4_ * (float)uVar119 - auVar105._8_4_ * (float)uVar118;
      auVar101._12_4_ =
           auVar100._12_4_ * (float)((ulong)uVar119 >> 0x20) -
           auVar105._12_4_ * (float)((ulong)uVar118 >> 0x20);
      auVar120 = NEON_ext(auVar101,auVar101,4,1);
      fVar91 = (float)(int)((1 << (ulong)(uVar5 & 0x1f) & (uint)*pbVar65) >> (ulong)(uVar5 & 0x1f))
               * auVar89._0_4_;
      pfVar7 = __s + uVar37 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      fVar67 = auVar120._0_4_ * ((float)uVar156 - fVar91);
      fVar83 = auVar120._4_4_ * ((float)((ulong)uVar156 >> 0x20) - fVar91);
      fVar86 = auVar101._0_4_ * ((float)uVar155 - fVar91);
      fVar91 = auVar101._4_4_ * ((float)((ulong)uVar155 >> 0x20) - fVar91);
      pfVar8 = __s + uVar37 * 4;
      pfVar8[2] = pfVar7[2] + fVar86;
      pfVar8[3] = fVar88 + fVar91;
      *pfVar8 = fVar68 + fVar67;
      pfVar8[1] = fVar84 + fVar83;
      pfVar7 = __s + uVar38 * 4;
      fVar68 = *pfVar7;
      fVar84 = pfVar7[1];
      fVar88 = pfVar7[3];
      pfVar8 = __s + uVar38 * 4;
      pfVar8[2] = pfVar7[2] + fVar86;
      pfVar8[3] = fVar88 + fVar91;
      *pfVar8 = fVar68 + fVar67;
      pfVar8[1] = fVar84 + fVar83;
      auVar120 = *(undefined1 (*) [16])(__s + uVar39 * 4);
      pfVar7 = __s + uVar39 * 4;
      pfVar7[2] = auVar120._8_4_ + fVar86;
      pfVar7[3] = auVar120._12_4_ + fVar91;
      *pfVar7 = auVar120._0_4_ + fVar67;
      pfVar7[1] = auVar120._4_4_ + fVar83;
    } while (uVar47 < uVar1);
  }
  if (7 < (int)uVar3) {
    iVar44 = 0;
    do {
      fVar68 = *__s;
      fVar84 = __s[1];
      fVar88 = __s[2];
      fVar67 = __s[4];
      fVar83 = __s[5];
      fVar86 = __s[6];
      fVar91 = __s[0x10];
      fVar10 = __s[0x11];
      fVar11 = __s[0x12];
      fVar12 = __s[0x14];
      fVar13 = __s[0x15];
      fVar14 = __s[0x16];
      fVar15 = __s[0x18];
      fVar16 = __s[0x19];
      fVar17 = __s[0x1a];
      fVar18 = __s[0x1c];
      fVar19 = __s[0x1d];
      fVar20 = __s[0x1e];
      fVar104 = __s[8];
      fVar108 = __s[9];
      fVar21 = __s[10];
      fVar22 = __s[0xc];
      fVar23 = __s[0xd];
      fVar24 = __s[0xe];
      fVar134 = fVar91 * fVar91 + fVar10 * fVar10 + fVar11 * fVar11;
      fVar135 = fVar91 * fVar91 + fVar10 * fVar10 + fVar11 * fVar11;
      fVar110 = fVar68 * fVar68 + fVar84 * fVar84 + fVar88 * fVar88;
      fVar113 = fVar68 * fVar68 + fVar84 * fVar84 + fVar88 * fVar88;
      uVar155 = CONCAT44(fVar113,fVar110);
      fVar136 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
      fVar137 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
      uVar131 = CONCAT44(fVar137,fVar136);
      uVar145 = NEON_frsqrte(uVar155,4);
      fVar102 = fVar67 * fVar67 + fVar83 * fVar83 + fVar86 * fVar86;
      fVar106 = fVar67 * fVar67 + fVar83 * fVar83 + fVar86 * fVar86;
      uVar156 = CONCAT44(fVar106,fVar102);
      fVar139 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
      fVar140 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
      uVar132 = CONCAT44(fVar140,fVar139);
      uVar148 = NEON_frsqrte(uVar156,4);
      fVar130 = fVar104 * fVar104 + fVar108 * fVar108 + fVar21 * fVar21;
      fVar133 = fVar104 * fVar104 + fVar108 * fVar108 + fVar21 * fVar21;
      uVar119 = CONCAT44(fVar133,fVar130);
      fVar141 = fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20;
      fVar142 = fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20;
      uVar121 = NEON_frsqrte(uVar119,4);
      fVar128 = fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
      fVar129 = fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
      uVar118 = CONCAT44(fVar129,fVar128);
      uVar122 = NEON_frsqrte(uVar118,4);
      fVar143 = (float)uVar145;
      fVar146 = (float)((ulong)uVar145 >> 0x20);
      uVar155 = NEON_frsqrts(uVar155,CONCAT44(fVar146 * fVar146,fVar143 * fVar143),4);
      iVar111 = -(uint)(fVar110 <= 0.0);
      iVar114 = -(uint)(fVar113 <= 0.0);
      fVar143 = fVar143 * (float)uVar155;
      fVar146 = fVar146 * (float)((ulong)uVar155 >> 0x20);
      fVar113 = (float)uVar148;
      fVar149 = (float)((ulong)uVar148 >> 0x20);
      uVar156 = NEON_frsqrts(uVar156,CONCAT44(fVar149 * fVar149,fVar113 * fVar113),4);
      iVar103 = -(uint)(fVar102 <= 0.0);
      iVar107 = -(uint)(fVar106 <= 0.0);
      fVar113 = fVar113 * (float)uVar156;
      fVar149 = fVar149 * (float)((ulong)uVar156 >> 0x20);
      fVar150 = (float)uVar121;
      fVar151 = (float)((ulong)uVar121 >> 0x20);
      uVar156 = NEON_frsqrts(uVar119,CONCAT44(fVar151 * fVar151,fVar150 * fVar150),4);
      fVar150 = fVar150 * (float)uVar156;
      fVar151 = fVar151 * (float)((ulong)uVar156 >> 0x20);
      fVar152 = (float)uVar122;
      fVar153 = (float)((ulong)uVar122 >> 0x20);
      fVar110 = (float)CONCAT13((byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                                CONCAT12((byte)((uint)fVar143 >> 0x10) &
                                         ~(byte)((uint)iVar111 >> 0x10),
                                         CONCAT11((byte)((uint)fVar143 >> 8) &
                                                  ~(byte)((uint)iVar111 >> 8),
                                                  SUB41(fVar143,0) & ~(byte)iVar111)));
      fVar102 = (float)CONCAT13((byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                                CONCAT12((byte)((uint)fVar113 >> 0x10) &
                                         ~(byte)((uint)iVar103 >> 0x10),
                                         CONCAT11((byte)((uint)fVar113 >> 8) &
                                                  ~(byte)((uint)iVar103 >> 8),
                                                  SUB41(fVar113,0) & ~(byte)iVar103)));
      uVar155 = NEON_frsqrts(uVar118,CONCAT44(fVar153 * fVar153,fVar152 * fVar152),4);
      fVar143 = (float)(CONCAT17((byte)((uint)fVar146 >> 0x18) & ~(byte)((uint)iVar114 >> 0x18),
                                 CONCAT16((byte)((uint)fVar146 >> 0x10) &
                                          ~(byte)((uint)iVar114 >> 0x10),
                                          CONCAT15((byte)((uint)fVar146 >> 8) &
                                                   ~(byte)((uint)iVar114 >> 8),
                                                   CONCAT14(SUB41(fVar146,0) & ~(byte)iVar114,
                                                            fVar110)))) >> 0x20);
      iVar111 = -(uint)(fVar130 <= 0.0);
      iVar114 = -(uint)(fVar133 <= 0.0);
      fVar106 = (float)(CONCAT17((byte)((uint)fVar149 >> 0x18) & ~(byte)((uint)iVar107 >> 0x18),
                                 CONCAT16((byte)((uint)fVar149 >> 0x10) &
                                          ~(byte)((uint)iVar107 >> 0x10),
                                          CONCAT15((byte)((uint)fVar149 >> 8) &
                                                   ~(byte)((uint)iVar107 >> 8),
                                                   CONCAT14(SUB41(fVar149,0) & ~(byte)iVar107,
                                                            fVar102)))) >> 0x20);
      iVar103 = -(uint)(fVar128 <= 0.0);
      iVar107 = -(uint)(fVar129 <= 0.0);
      fVar113 = (float)CONCAT13((byte)((uint)fVar150 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                                CONCAT12((byte)((uint)fVar150 >> 0x10) &
                                         ~(byte)((uint)iVar111 >> 0x10),
                                         CONCAT11((byte)((uint)fVar150 >> 8) &
                                                  ~(byte)((uint)iVar111 >> 8),
                                                  SUB41(fVar150,0) & ~(byte)iVar111)));
      __s[2] = fVar88 * fVar110;
      __s[3] = __s[3] * fVar143;
      *__s = fVar68 * fVar110;
      __s[1] = fVar84 * fVar143;
      __s[6] = fVar86 * fVar102;
      __s[7] = __s[7] * fVar106;
      __s[4] = fVar67 * fVar102;
      __s[5] = fVar83 * fVar106;
      uVar156 = NEON_frsqrte(CONCAT44(fVar135,fVar134),4);
      fVar88 = (float)(CONCAT17((byte)((uint)fVar151 >> 0x18) & ~(byte)((uint)iVar114 >> 0x18),
                                CONCAT16((byte)((uint)fVar151 >> 0x10) &
                                         ~(byte)((uint)iVar114 >> 0x10),
                                         CONCAT15((byte)((uint)fVar151 >> 8) &
                                                  ~(byte)((uint)iVar114 >> 8),
                                                  CONCAT14(SUB41(fVar151,0) & ~(byte)iVar114,fVar113
                                                          )))) >> 0x20);
      fVar152 = fVar152 * (float)uVar155;
      fVar153 = fVar153 * (float)((ulong)uVar155 >> 0x20);
      fVar68 = (float)CONCAT13((byte)((uint)fVar152 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                               CONCAT12((byte)((uint)fVar152 >> 0x10) &
                                        ~(byte)((uint)iVar103 >> 0x10),
                                        CONCAT11((byte)((uint)fVar152 >> 8) &
                                                 ~(byte)((uint)iVar103 >> 8),
                                                 SUB41(fVar152,0) & ~(byte)iVar103)));
      fVar84 = (float)(CONCAT17((byte)((uint)fVar153 >> 0x18) & ~(byte)((uint)iVar107 >> 0x18),
                                CONCAT16((byte)((uint)fVar153 >> 0x10) &
                                         ~(byte)((uint)iVar107 >> 0x10),
                                         CONCAT15((byte)((uint)fVar153 >> 8) &
                                                  ~(byte)((uint)iVar107 >> 8),
                                                  CONCAT14(SUB41(fVar153,0) & ~(byte)iVar107,fVar68)
                                                 ))) >> 0x20);
      uVar155 = NEON_frsqrte(uVar131,4);
      __s[10] = fVar21 * fVar113;
      __s[0xb] = __s[0xb] * fVar88;
      __s[8] = fVar104 * fVar113;
      __s[9] = fVar108 * fVar88;
      __s[0xe] = fVar24 * fVar68;
      __s[0xf] = __s[0xf] * fVar84;
      __s[0xc] = fVar22 * fVar68;
      __s[0xd] = fVar23 * fVar84;
      fVar68 = (float)uVar156;
      fVar84 = (float)((ulong)uVar156 >> 0x20);
      uVar156 = NEON_frsqrts(CONCAT44(fVar135,fVar134),CONCAT44(fVar84 * fVar84,fVar68 * fVar68),4);
      fVar68 = fVar68 * (float)uVar156;
      fVar84 = fVar84 * (float)((ulong)uVar156 >> 0x20);
      fVar104 = (float)uVar155;
      fVar108 = (float)((ulong)uVar155 >> 0x20);
      uVar118 = NEON_frsqrts(uVar131,CONCAT44(fVar108 * fVar108,fVar104 * fVar104),4);
      uVar156 = NEON_frsqrte(uVar132,4);
      uVar155 = NEON_frsqrte(CONCAT44(fVar142,fVar141),4);
      fVar104 = fVar104 * (float)uVar118;
      fVar108 = fVar108 * (float)((ulong)uVar118 >> 0x20);
      fVar88 = (float)uVar156;
      fVar67 = (float)((ulong)uVar156 >> 0x20);
      uVar156 = NEON_frsqrts(uVar132,CONCAT44(fVar67 * fVar67,fVar88 * fVar88),4);
      fVar88 = fVar88 * (float)uVar156;
      fVar67 = fVar67 * (float)((ulong)uVar156 >> 0x20);
      fVar83 = (float)uVar155;
      fVar86 = (float)((ulong)uVar155 >> 0x20);
      uVar156 = NEON_frsqrts(CONCAT44(fVar142,fVar141),CONCAT44(fVar86 * fVar86,fVar83 * fVar83),4);
      fVar83 = fVar83 * (float)uVar156;
      fVar86 = fVar86 * (float)((ulong)uVar156 >> 0x20);
      iVar103 = -(uint)(fVar134 <= 0.0);
      iVar107 = -(uint)(fVar135 <= 0.0);
      fVar68 = (float)CONCAT13((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                               CONCAT12((byte)((uint)fVar68 >> 0x10) &
                                        ~(byte)((uint)iVar103 >> 0x10),
                                        CONCAT11((byte)((uint)fVar68 >> 8) &
                                                 ~(byte)((uint)iVar103 >> 8),
                                                 SUB41(fVar68,0) & ~(byte)iVar103)));
      iVar103 = -(uint)(fVar136 <= 0.0);
      iVar111 = -(uint)(fVar137 <= 0.0);
      fVar104 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                                CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                         ~(byte)((uint)iVar103 >> 0x10),
                                         CONCAT11((byte)((uint)fVar104 >> 8) &
                                                  ~(byte)((uint)iVar103 >> 8),
                                                  SUB41(fVar104,0) & ~(byte)iVar103)));
      iVar103 = -(uint)(fVar139 <= 0.0);
      iVar114 = -(uint)(fVar140 <= 0.0);
      fVar88 = (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                               CONCAT12((byte)((uint)fVar88 >> 0x10) &
                                        ~(byte)((uint)iVar103 >> 0x10),
                                        CONCAT11((byte)((uint)fVar88 >> 8) &
                                                 ~(byte)((uint)iVar103 >> 8),
                                                 SUB41(fVar88,0) & ~(byte)iVar103)));
      iVar103 = -(uint)(fVar141 <= 0.0);
      iVar115 = -(uint)(fVar142 <= 0.0);
      fVar84 = (float)(CONCAT17((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar107 >> 0x18),
                                CONCAT16((byte)((uint)fVar84 >> 0x10) &
                                         ~(byte)((uint)iVar107 >> 0x10),
                                         CONCAT15((byte)((uint)fVar84 >> 8) &
                                                  ~(byte)((uint)iVar107 >> 8),
                                                  CONCAT14(SUB41(fVar84,0) & ~(byte)iVar107,fVar68))
                                        )) >> 0x20);
      fVar83 = (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                               CONCAT12((byte)((uint)fVar83 >> 0x10) &
                                        ~(byte)((uint)iVar103 >> 0x10),
                                        CONCAT11((byte)((uint)fVar83 >> 8) &
                                                 ~(byte)((uint)iVar103 >> 8),
                                                 SUB41(fVar83,0) & ~(byte)iVar103)));
      iVar44 = iVar44 + 1;
      fVar108 = (float)(CONCAT17((byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                                 CONCAT16((byte)((uint)fVar108 >> 0x10) &
                                          ~(byte)((uint)iVar111 >> 0x10),
                                          CONCAT15((byte)((uint)fVar108 >> 8) &
                                                   ~(byte)((uint)iVar111 >> 8),
                                                   CONCAT14(SUB41(fVar108,0) & ~(byte)iVar111,
                                                            fVar104)))) >> 0x20);
      auVar89._0_8_ = CONCAT44(fVar13 * fVar108,fVar12 * fVar104);
      auVar89._8_4_ = fVar14 * fVar104;
      auVar89._12_4_ = __s[0x17] * fVar108;
      fVar67 = (float)(CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar114 >> 0x18),
                                CONCAT16((byte)((uint)fVar67 >> 0x10) &
                                         ~(byte)((uint)iVar114 >> 0x10),
                                         CONCAT15((byte)((uint)fVar67 >> 8) &
                                                  ~(byte)((uint)iVar114 >> 8),
                                                  CONCAT14(SUB41(fVar67,0) & ~(byte)iVar114,fVar88))
                                        )) >> 0x20);
      __s[0x12] = fVar11 * fVar68;
      __s[0x13] = __s[0x13] * fVar84;
      __s[0x10] = fVar91 * fVar68;
      __s[0x11] = fVar10 * fVar84;
      *(long *)(__s + 0x16) = auVar89._8_8_;
      *(undefined8 *)(__s + 0x14) = auVar89._0_8_;
      fVar68 = (float)(CONCAT17((byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar115 >> 0x18),
                                CONCAT16((byte)((uint)fVar86 >> 0x10) &
                                         ~(byte)((uint)iVar115 >> 0x10),
                                         CONCAT15((byte)((uint)fVar86 >> 8) &
                                                  ~(byte)((uint)iVar115 >> 8),
                                                  CONCAT14(SUB41(fVar86,0) & ~(byte)iVar115,fVar83))
                                        )) >> 0x20);
      __s[0x1a] = fVar17 * fVar88;
      __s[0x1b] = __s[0x1b] * fVar67;
      __s[0x18] = fVar15 * fVar88;
      __s[0x19] = fVar16 * fVar67;
      __s[0x1e] = fVar20 * fVar83;
      __s[0x1f] = __s[0x1f] * fVar68;
      __s[0x1c] = fVar18 * fVar83;
      __s[0x1d] = fVar19 * fVar68;
      __s = __s + 0x20;
    } while (iVar44 < (int)uVar3 >> 3);
  }
  iVar44 = (int)uVar3 % 8;
  if (0 < iVar44) {
    do {
      fVar68 = *__s;
      fVar84 = __s[1];
      fVar88 = __s[2];
      iVar44 = iVar44 + -1;
      fVar67 = fVar68 * fVar68 + fVar84 * fVar84 + fVar88 * fVar88;
      fVar86 = fVar68 * fVar68 + fVar84 * fVar84 + fVar88 * fVar88;
      uVar156 = CONCAT44(fVar86,fVar67);
      uVar155 = NEON_frsqrte(uVar156,4);
      fVar83 = (float)uVar155;
      fVar91 = (float)((ulong)uVar155 >> 0x20);
      iVar103 = -(uint)(fVar67 <= 0.0);
      iVar107 = -(uint)(fVar86 <= 0.0);
      uVar156 = NEON_frsqrts(uVar156,CONCAT44(fVar91 * fVar91,fVar83 * fVar83),4);
      fVar83 = fVar83 * (float)uVar156;
      fVar91 = fVar91 * (float)((ulong)uVar156 >> 0x20);
      fVar67 = (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                               CONCAT12((byte)((uint)fVar83 >> 0x10) &
                                        ~(byte)((uint)iVar103 >> 0x10),
                                        CONCAT11((byte)((uint)fVar83 >> 8) &
                                                 ~(byte)((uint)iVar103 >> 8),
                                                 SUB41(fVar83,0) & ~(byte)iVar103)));
      fVar83 = (float)(CONCAT17((byte)((uint)fVar91 >> 0x18) & ~(byte)((uint)iVar107 >> 0x18),
                                CONCAT16((byte)((uint)fVar91 >> 0x10) &
                                         ~(byte)((uint)iVar107 >> 0x10),
                                         CONCAT15((byte)((uint)fVar91 >> 8) &
                                                  ~(byte)((uint)iVar107 >> 8),
                                                  CONCAT14(SUB41(fVar91,0) & ~(byte)iVar107,fVar67))
                                        )) >> 0x20);
      __s[2] = fVar88 * fVar67;
      __s[3] = __s[3] * fVar83;
      *__s = fVar68 * fVar67;
      __s[1] = fVar84 * fVar83;
      __s = __s + 4;
    } while (iVar44 != 0);
  }
  lVar36 = FUN_0043c4e0(*puVar62);
  if (lVar36 == 0) {
    return;
  }
  FUN_00443a70(lVar36,&DAT_04085310);
  return;
}

