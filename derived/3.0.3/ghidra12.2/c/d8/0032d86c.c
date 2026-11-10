
void FUN_0032d86c(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4,
                 float *param_5,long param_6,long param_7,int param_8)

{
  unkbyte9 *pVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 *puVar38;
  char *pcVar39;
  long lVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
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
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
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
  undefined1 uVar115;
  ulong uVar116;
  undefined1 auVar117 [12];
  undefined1 auVar118 [12];
  undefined1 in_q6 [16];
  undefined1 auVar119 [16];
  undefined1 in_q7 [16];
  float fVar120;
  float fVar121;
  undefined8 uVar122;
  float fVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar128;
  undefined8 uVar129;
  float fVar135;
  float fVar136;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined8 uVar130;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar137;
  undefined8 uVar138;
  undefined8 uVar141;
  float fVar145;
  float fVar146;
  undefined1 auVar142 [16];
  undefined8 uVar139;
  undefined8 uVar140;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  float fVar147;
  float fVar149;
  undefined8 uVar148;
  undefined8 uVar150;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_24 [4];
  
  uVar99 = in_q7[0xf];
  uVar98 = in_q7[0xe];
  uVar97 = in_q7[0xd];
  uVar96 = in_q7[0xc];
  uVar91 = in_q7[0xb];
  uVar89 = in_q7[10];
  uVar87 = in_q7[9];
  uVar85 = in_q7[8];
  uVar83 = in_q7[7];
  uVar81 = in_q7[6];
  uVar79 = in_q7[5];
  uVar77 = in_q7[4];
  uVar75 = in_q7[3];
  uVar70 = in_q7[2];
  uVar69 = in_q7[1];
  uVar68 = in_q7[0];
  uVar66 = param_3[0xb];
  uVar64 = param_3[10];
  uVar62 = param_3[9];
  uVar60 = param_3[8];
  uVar59 = param_3[7];
  uVar57 = param_3[6];
  uVar55 = param_3[5];
  uVar53 = param_3[4];
  uVar50 = param_3[3];
  uVar48 = param_3[2];
  uVar46 = param_3[1];
  uVar44 = param_3[0];
  pcVar39 = *(char **)(*(long *)(param_6 + 0x240) + 0x270);
  if ((pcVar39[1] != '\0') && (*(char *)(*(long *)(param_6 + 0x78) + 0x276) == '\0')) {
    return;
  }
  lVar40 = (long)param_8;
  fVar120 = *(float *)(param_6 + 0x48);
  fVar121 = *(float *)(*(long *)(param_7 + 0x18) + (long)param_8 * 0x10 + 0xc);
  if (*(int *)(pcVar39 + 0x14) == 0) {
    local_5c._0_4_ = *(float *)(pcVar39 + 0x10);
    cVar6 = pcVar39[1];
  }
  else {
    iVar5 = *(int *)(pcVar39 + 0x20);
    if (iVar5 == 0) {
      local_5c._0_4_ = 0.0;
      cVar6 = pcVar39[1];
    }
    else {
      if (*(int *)(pcVar39 + 0x18) == 0) {
        fVar42 = *(float *)(*(long *)(param_6 + 0xb0) + lVar40 * 0x20 + 0xc);
      }
      else {
        fVar42 = *(float *)(*(long *)(param_6 + 0x1f0) + lVar40 * 0x10);
        uVar44 = SUB41(fVar42,0);
        uVar46 = (undefined1)((uint)fVar42 >> 8);
        uVar48 = (undefined1)((uint)fVar42 >> 0x10);
        uVar50 = (undefined1)((uint)fVar42 >> 0x18);
        uVar53 = 0;
        uVar55 = 0;
        uVar57 = 0;
        uVar59 = 0;
        uVar60 = 0;
        uVar62 = 0;
        uVar64 = 0;
        uVar66 = 0;
        fVar41 = (float)NEON_ucvtf(*(undefined4 *)(pcVar39 + 0x1c));
        param_1 = fmodf(param_1 + (float)*(int *)(pcVar39 + 0x24) * fVar42 * fVar41,
                        (float)*(int *)(pcVar39 + 0x24));
        iVar5 = *(int *)(pcVar39 + 0x20);
        fVar42 = (float)*(int *)(pcVar39 + 0x24);
      }
      local_24[0] = 0;
      local_54 = 0;
      local_5c = 0;
      FUN_0032c0c0(param_1 / fVar42,&local_5c,local_24,pcVar39 + 0x2c,iVar5,
                   *(undefined4 *)(pcVar39 + 0x28));
      cVar6 = pcVar39[1];
    }
  }
  if (cVar6 == '\0') {
    uVar71 = 0;
    uVar72 = 0;
    uVar73 = 0;
    uVar74 = 0;
    uVar76 = 0;
    uVar78 = 0;
    uVar80 = 0;
    uVar82 = 0;
    uVar84 = 0;
    uVar86 = 0;
    uVar88 = 0;
    uVar90 = 0;
    if ((*pcVar39 == '\x01') && (*(char *)(*(long *)(param_6 + 0xa0) + 0x793) == '\x01')) {
      if ((*(long *)(param_6 + 0x210) != 0) && (param_8 <= *(int *)(param_6 + 0x28))) {
        lVar40 = lVar40 * 0x10;
        puVar2 = (undefined4 *)(*(long *)(param_6 + 0x210) + lVar40);
        uVar12 = *puVar2;
        uVar71 = (undefined1)uVar12;
        uVar72 = (undefined1)((uint)uVar12 >> 8);
        uVar73 = (undefined1)((uint)uVar12 >> 0x10);
        uVar74 = (undefined1)((uint)uVar12 >> 0x18);
        puVar3 = (undefined4 *)(*(long *)(param_6 + 0x218) + lVar40);
        puVar4 = (undefined4 *)(*(long *)(param_6 + 0x220) + lVar40);
        uVar12 = *puVar3;
        uVar76 = (undefined1)uVar12;
        uVar78 = (undefined1)((uint)uVar12 >> 8);
        uVar80 = (undefined1)((uint)uVar12 >> 0x10);
        uVar82 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = *puVar4;
        uVar84 = (undefined1)uVar12;
        uVar86 = (undefined1)((uint)uVar12 >> 8);
        uVar88 = (undefined1)((uint)uVar12 >> 0x10);
        uVar90 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = puVar2[2];
        uVar68 = (undefined1)uVar12;
        uVar69 = (undefined1)((uint)uVar12 >> 8);
        uVar70 = (undefined1)((uint)uVar12 >> 0x10);
        uVar75 = (undefined1)((uint)uVar12 >> 0x18);
        uVar96 = 0;
        uVar97 = 0;
        uVar98 = 0;
        uVar99 = 0;
        uVar12 = puVar2[3];
        uVar44 = (undefined1)uVar12;
        uVar46 = (undefined1)((uint)uVar12 >> 8);
        uVar48 = (undefined1)((uint)uVar12 >> 0x10);
        uVar50 = (undefined1)((uint)uVar12 >> 0x18);
        in_q6._0_4_ = puVar2[1];
        uVar12 = puVar3[2];
        uVar77 = (undefined1)uVar12;
        uVar79 = (undefined1)((uint)uVar12 >> 8);
        uVar81 = (undefined1)((uint)uVar12 >> 0x10);
        uVar83 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = puVar3[3];
        uVar53 = (undefined1)uVar12;
        uVar55 = (undefined1)((uint)uVar12 >> 8);
        uVar57 = (undefined1)((uint)uVar12 >> 0x10);
        uVar59 = (undefined1)((uint)uVar12 >> 0x18);
        in_q6._4_4_ = puVar3[1];
        uVar12 = puVar4[3];
        uVar60 = (undefined1)uVar12;
        uVar62 = (undefined1)((uint)uVar12 >> 8);
        uVar64 = (undefined1)((uint)uVar12 >> 0x10);
        uVar66 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = puVar4[2];
        uVar85 = (undefined1)uVar12;
        uVar87 = (undefined1)((uint)uVar12 >> 8);
        uVar89 = (undefined1)((uint)uVar12 >> 0x10);
        uVar91 = (undefined1)((uint)uVar12 >> 0x18);
        in_q6._8_4_ = puVar4[1];
        in_q6._12_4_ = 0;
      }
      uVar122 = a64_TBL(ZEXT816(0),in_q6,DAT_04101580);
      uVar124 = a64_TBL(ZEXT816(0),in_q6,DAT_041015c8);
      auVar27[1] = uVar69;
      auVar27[0] = uVar68;
      auVar27[2] = uVar70;
      auVar27[3] = uVar75;
      auVar27[4] = uVar77;
      auVar27[5] = uVar79;
      auVar27[6] = uVar81;
      auVar27[7] = uVar83;
      auVar27[8] = uVar85;
      auVar27[9] = uVar87;
      auVar27[10] = uVar89;
      auVar27[0xb] = uVar91;
      auVar27[0xc] = uVar96;
      auVar27[0xd] = uVar97;
      auVar27[0xe] = uVar98;
      auVar27[0xf] = uVar99;
      uVar33 = a64_TBL(ZEXT816(0),auVar27,DAT_041015c8);
      auVar28[1] = uVar69;
      auVar28[0] = uVar68;
      auVar28[2] = uVar70;
      auVar28[3] = uVar75;
      auVar28[4] = uVar77;
      auVar28[5] = uVar79;
      auVar28[6] = uVar81;
      auVar28[7] = uVar83;
      auVar28[8] = uVar85;
      auVar28[9] = uVar87;
      auVar28[10] = uVar89;
      auVar28[0xb] = uVar91;
      auVar28[0xc] = uVar96;
      auVar28[0xd] = uVar97;
      auVar28[0xe] = uVar98;
      auVar28[0xf] = uVar99;
      uVar129 = a64_TBL(ZEXT816(0),auVar28,DAT_04101598);
      auVar29[1] = uVar69;
      auVar29[0] = uVar68;
      auVar29[2] = uVar70;
      auVar29[3] = uVar75;
      auVar29[4] = uVar77;
      auVar29[5] = uVar79;
      auVar29[6] = uVar81;
      auVar29[7] = uVar83;
      auVar29[8] = uVar85;
      auVar29[9] = uVar87;
      auVar29[10] = uVar89;
      auVar29[0xb] = uVar91;
      auVar29[0xc] = uVar96;
      auVar29[0xd] = uVar97;
      auVar29[0xe] = uVar98;
      auVar29[0xf] = uVar99;
      uVar138 = a64_TBL(ZEXT816(0),auVar29,DAT_041016a0);
      uVar139 = a64_TBL(ZEXT816(0),in_q6,DAT_041016a0);
      uVar130 = a64_TBL(ZEXT816(0),in_q6,DAT_04101598);
      auVar30[1] = uVar69;
      auVar30[0] = uVar68;
      auVar30[2] = uVar70;
      auVar30[3] = uVar75;
      auVar30[4] = uVar77;
      auVar30[5] = uVar79;
      auVar30[6] = uVar81;
      auVar30[7] = uVar83;
      auVar30[8] = uVar85;
      auVar30[9] = uVar87;
      auVar30[10] = uVar89;
      auVar30[0xb] = uVar91;
      auVar30[0xc] = uVar96;
      auVar30[0xd] = uVar97;
      auVar30[0xe] = uVar98;
      auVar30[0xf] = uVar99;
      uVar140 = a64_TBL(ZEXT816(0),auVar30,DAT_04101580);
      uVar17 = CONCAT13(uVar75,CONCAT12(uVar70,CONCAT11(uVar69,uVar68)));
      uVar12 = CONCAT13(uVar74,CONCAT12(uVar73,CONCAT11(uVar72,uVar71)));
      auVar126._0_4_ =
           ((float)CONCAT13(uVar74,CONCAT12(uVar73,CONCAT11(uVar72,uVar71))) * (float)uVar122 *
            (float)uVar129 -
           (float)uVar130 * (float)CONCAT13(uVar74,CONCAT12(uVar73,CONCAT11(uVar72,uVar71))) *
           (float)uVar140) +
           ((float)CONCAT13(uVar82,CONCAT12(uVar80,CONCAT11(uVar78,uVar76))) *
            (float)((ulong)uVar122 >> 0x20) * (float)((ulong)uVar129 >> 0x20) -
           (float)((ulong)uVar130 >> 0x20) *
           (float)CONCAT13(uVar82,CONCAT12(uVar80,CONCAT11(uVar78,uVar76))) *
           (float)((ulong)uVar140 >> 0x20)) +
           ((float)CONCAT13(uVar90,CONCAT12(uVar88,CONCAT11(uVar86,uVar84))) * (float)uVar124 *
            (float)uVar138 -
           (float)uVar139 * (float)CONCAT13(uVar90,CONCAT12(uVar88,CONCAT11(uVar86,uVar84))) *
           (float)uVar33) +
           ((float)((ulong)uVar124 >> 0x20) * 0.0 * (float)((ulong)uVar138 >> 0x20) -
           (float)((ulong)uVar139 >> 0x20) * 0.0 * (float)((ulong)uVar33 >> 0x20));
      auVar126._4_4_ = auVar126._0_4_;
      auVar126._8_4_ = auVar126._0_4_;
      auVar126._12_4_ = auVar126._0_4_;
      auVar133 = NEON_frecpe(auVar126,4);
      auVar143 = NEON_frecps(auVar133,auVar126,4);
      auVar131._0_4_ = auVar133._0_4_ * auVar143._0_4_;
      auVar131._4_4_ = auVar133._4_4_ * auVar143._4_4_;
      auVar131._8_4_ = auVar133._8_4_ * auVar143._8_4_;
      auVar131._12_4_ = auVar133._12_4_ * auVar143._12_4_;
      auVar133 = NEON_frecps(auVar131,auVar126,4);
      fVar128 = auVar131._0_4_ * auVar133._0_4_;
      fVar135 = auVar131._4_4_ * auVar133._4_4_;
      fVar136 = auVar131._8_4_ * auVar133._8_4_;
      auVar119._4_12_ = in_q6._4_12_;
      auVar119._0_4_ = in_q6._8_4_;
      uVar116 = auVar119._0_8_ & 0xffffffff;
      auVar132._4_4_ = in_q6._0_4_;
      auVar132._0_4_ = uVar12;
      auVar132._8_4_ = uVar17;
      auVar132._12_4_ = 0;
      auVar142._4_4_ = in_q6._4_4_;
      auVar142._0_4_ =
           (int)(CONCAT17(uVar82,CONCAT16(uVar80,CONCAT15(uVar78,CONCAT14(uVar76,uVar12)))) >> 0x20)
      ;
      auVar142._8_4_ =
           (int)(CONCAT17(uVar83,CONCAT16(uVar81,CONCAT15(uVar79,CONCAT14(uVar77,uVar17)))) >> 0x20)
      ;
      auVar142._12_4_ = 0;
      uVar9 = (undefined2)(CONCAT12(uVar86,CONCAT11(uVar84,uVar82)) >> 8);
      uVar68 = (undefined1)uVar116;
      uVar69 = (undefined1)(uVar116 >> 8);
      uVar70 = (undefined1)(uVar116 >> 0x10);
      uVar75 = (undefined1)(uVar116 >> 0x18);
      uVar140 = a64_TBL(ZEXT816(0),auVar142,DAT_04101580);
      uVar130 = a64_TBL(ZEXT816(0),auVar142,DAT_041015c8);
      auVar133[2] = uVar88;
      auVar133._0_2_ = uVar9;
      auVar133[3] = uVar90;
      auVar133[4] = uVar68;
      auVar133[5] = uVar69;
      auVar133[6] = uVar70;
      auVar133[7] = uVar75;
      auVar133[8] = uVar85;
      auVar133[9] = uVar87;
      auVar133[10] = uVar89;
      auVar133[0xb] = uVar91;
      auVar133._12_4_ = 0;
      uVar139 = a64_TBL(ZEXT816(0),auVar133,DAT_041016a0);
      auVar143[2] = uVar88;
      auVar143._0_2_ = uVar9;
      auVar143[3] = uVar90;
      auVar143[4] = uVar68;
      auVar143[5] = uVar69;
      auVar143[6] = uVar70;
      auVar143[7] = uVar75;
      auVar143[8] = uVar85;
      auVar143[9] = uVar87;
      auVar143[10] = uVar89;
      auVar143[0xb] = uVar91;
      auVar143._12_4_ = 0;
      uVar150 = a64_TBL(ZEXT816(0),auVar143,DAT_04101580);
      uVar124 = a64_TBL(ZEXT816(0),auVar132,DAT_04101580);
      auVar10[2] = uVar88;
      auVar10._0_2_ = uVar9;
      auVar10[3] = uVar90;
      auVar10[4] = uVar68;
      auVar10[5] = uVar69;
      auVar10[6] = uVar70;
      auVar10[7] = uVar75;
      auVar10[8] = uVar85;
      auVar10[9] = uVar87;
      auVar10[10] = uVar89;
      auVar10[0xb] = uVar91;
      auVar10._12_4_ = 0;
      uVar138 = a64_TBL(ZEXT816(0),auVar10,DAT_04101598);
      fVar147 = (float)((ulong)uVar138 >> 0x20);
      auVar11[2] = uVar88;
      auVar11._0_2_ = uVar9;
      auVar11[3] = uVar90;
      auVar11[4] = uVar68;
      auVar11[5] = uVar69;
      auVar11[6] = uVar70;
      auVar11[7] = uVar75;
      auVar11[8] = uVar85;
      auVar11[9] = uVar87;
      auVar11[10] = uVar89;
      auVar11[0xb] = uVar91;
      auVar11._12_4_ = 0;
      uVar33 = a64_TBL(ZEXT816(0),auVar11,DAT_041015c8);
      uVar129 = a64_TBL(ZEXT816(0),auVar132,DAT_041015c8);
      uVar122 = a64_TBL(ZEXT816(0),auVar142,DAT_04101598);
      uVar148 = a64_TBL(ZEXT816(0),auVar142,DAT_041016a0);
      uVar125 = a64_TBL(ZEXT816(0),auVar132,DAT_04101598);
      uVar141 = a64_TBL(ZEXT816(0),auVar132,DAT_041016a0);
      fVar43 = (float)((ulong)uVar140 >> 0x20);
      fVar42 = (float)((ulong)uVar122 >> 0x20);
      fVar149 = (float)((ulong)uVar150 >> 0x20);
      fVar123 = (float)((ulong)uVar125 >> 0x20);
      fVar41 = (float)((ulong)uVar124 >> 0x20);
      fVar137 = fVar128 * ((float)uVar140 * (float)uVar138 - (float)uVar122 * (float)uVar150);
      fVar145 = fVar135 * (fVar43 * fVar147 - fVar42 * fVar149);
      fVar146 = fVar136 * ((float)uVar130 * (float)uVar139 - (float)uVar148 * (float)uVar33);
      fVar31 = fVar128 * ((float)uVar150 * (float)uVar125 - (float)uVar138 * (float)uVar124);
      fVar149 = fVar135 * (fVar149 * fVar123 - fVar147 * fVar41);
      fVar32 = fVar136 * ((float)uVar33 * (float)uVar141 - (float)uVar139 * (float)uVar129);
      fVar128 = fVar128 * ((float)uVar122 * (float)uVar124 - (float)uVar125 * (float)uVar140);
      fVar135 = fVar135 * (fVar42 * fVar41 - fVar123 * fVar43);
      fVar136 = fVar136 * ((float)uVar148 * (float)uVar129 - (float)uVar141 * (float)uVar130);
      fVar42 = (float)CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44)));
      fVar41 = (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar53)));
      fVar43 = (float)CONCAT13(uVar66,CONCAT12(uVar64,CONCAT11(uVar62,uVar60)));
      fVar123 = (-fVar137 * fVar42 - fVar31 * fVar41) - fVar128 * fVar43;
      fVar147 = (-fVar145 * fVar42 - fVar149 * fVar41) - fVar135 * fVar43;
      fVar41 = (-fVar146 * fVar42 - fVar32 * fVar41) - fVar136 * fVar43;
      iVar5 = -(uint)(auVar126._0_4_ == 0.0);
      bVar45 = (byte)iVar5;
      bVar47 = (byte)((uint)iVar5 >> 8);
      bVar49 = (byte)((uint)iVar5 >> 0x10);
      bVar51 = (byte)((uint)iVar5 >> 0x18);
      iVar5 = -(uint)(auVar126._0_4_ == 0.0);
      bVar52 = (byte)iVar5;
      bVar54 = (byte)((uint)iVar5 >> 8);
      bVar56 = (byte)((uint)iVar5 >> 0x10);
      bVar58 = (byte)((uint)iVar5 >> 0x18);
      iVar5 = -(uint)(auVar126._0_4_ == 0.0);
      bVar61 = (byte)iVar5;
      bVar63 = (byte)((uint)iVar5 >> 8);
      bVar65 = (byte)((uint)iVar5 >> 0x10);
      bVar67 = (byte)((uint)iVar5 >> 0x18);
      fVar42 = (float)CONCAT13((byte)((uint)fVar137 >> 0x18) & ~bVar51,
                               CONCAT12((byte)((uint)fVar137 >> 0x10) & ~bVar49,
                                        CONCAT11((byte)((uint)fVar137 >> 8) & ~bVar47,
                                                 SUB41(fVar137,0) & ~bVar45)));
      auVar117._0_8_ =
           CONCAT17((byte)((uint)fVar145 >> 0x18) & ~bVar58,
                    CONCAT16((byte)((uint)fVar145 >> 0x10) & ~bVar56,
                             CONCAT15((byte)((uint)fVar145 >> 8) & ~bVar54,
                                      CONCAT14(SUB41(fVar145,0) & ~bVar52,fVar42))));
      auVar117[8] = SUB41(fVar146,0) & ~bVar61;
      auVar117[9] = (byte)((uint)fVar146 >> 8) & ~bVar63;
      auVar117[10] = (byte)((uint)fVar146 >> 0x10) & ~bVar65;
      auVar117[0xb] = (byte)((uint)fVar146 >> 0x18) & ~bVar67;
      fVar43 = (float)*(undefined8 *)(param_6 + 0x440);
      fVar137 = (float)((ulong)*(undefined8 *)(param_6 + 0x440) >> 0x20);
      fVar145 = (float)*(undefined8 *)(param_6 + 0x448);
      fVar42 = fVar42 * fVar43 +
               (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~bVar51,
                               CONCAT12((byte)((uint)fVar31 >> 0x10) & ~bVar49,
                                        CONCAT11((byte)((uint)fVar31 >> 8) & ~bVar47,
                                                 SUB41(fVar31,0) & ~bVar45))) * fVar137 +
               (float)CONCAT13((byte)((uint)fVar128 >> 0x18) & ~bVar51,
                               CONCAT12((byte)((uint)fVar128 >> 0x10) & ~bVar49,
                                        CONCAT11((byte)((uint)fVar128 >> 8) & ~bVar47,
                                                 SUB41(fVar128,0) & ~bVar45))) * fVar145 +
               (float)CONCAT13((byte)((uint)fVar123 >> 0x18) & ~bVar51,
                               CONCAT12((byte)((uint)fVar123 >> 0x10) & ~bVar49,
                                        CONCAT11((byte)((uint)fVar123 >> 8) & ~bVar47,
                                                 SUB41(fVar123,0) & ~bVar45)));
      uVar71 = SUB41(fVar42,0);
      uVar72 = (undefined1)((uint)fVar42 >> 8);
      uVar73 = (undefined1)((uint)fVar42 >> 0x10);
      uVar74 = (undefined1)((uint)fVar42 >> 0x18);
      fVar42 = (float)((ulong)auVar117._0_8_ >> 0x20) * fVar43 +
               (float)CONCAT13((byte)((uint)fVar149 >> 0x18) & ~bVar58,
                               CONCAT12((byte)((uint)fVar149 >> 0x10) & ~bVar56,
                                        CONCAT11((byte)((uint)fVar149 >> 8) & ~bVar54,
                                                 SUB41(fVar149,0) & ~bVar52))) * fVar137 +
               (float)CONCAT13((byte)((uint)fVar135 >> 0x18) & ~bVar58,
                               CONCAT12((byte)((uint)fVar135 >> 0x10) & ~bVar56,
                                        CONCAT11((byte)((uint)fVar135 >> 8) & ~bVar54,
                                                 SUB41(fVar135,0) & ~bVar52))) * fVar145 +
               (float)CONCAT13((byte)((uint)fVar147 >> 0x18) & ~bVar58,
                               CONCAT12((byte)((uint)fVar147 >> 0x10) & ~bVar56,
                                        CONCAT11((byte)((uint)fVar147 >> 8) & ~bVar54,
                                                 SUB41(fVar147,0) & ~bVar52)));
      uVar76 = SUB41(fVar42,0);
      uVar78 = (undefined1)((uint)fVar42 >> 8);
      uVar80 = (undefined1)((uint)fVar42 >> 0x10);
      uVar82 = (undefined1)((uint)fVar42 >> 0x18);
      fVar42 = auVar117._8_4_ * fVar43 +
               (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~bVar67,
                               CONCAT12((byte)((uint)fVar32 >> 0x10) & ~bVar65,
                                        CONCAT11((byte)((uint)fVar32 >> 8) & ~bVar63,
                                                 SUB41(fVar32,0) & ~bVar61))) * fVar137 +
               (float)CONCAT13((byte)((uint)fVar136 >> 0x18) & ~bVar67,
                               CONCAT12((byte)((uint)fVar136 >> 0x10) & ~bVar65,
                                        CONCAT11((byte)((uint)fVar136 >> 8) & ~bVar63,
                                                 SUB41(fVar136,0) & ~bVar61))) * fVar145 +
               (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~bVar67,
                               CONCAT12((byte)((uint)fVar41 >> 0x10) & ~bVar65,
                                        CONCAT11((byte)((uint)fVar41 >> 8) & ~bVar63,
                                                 SUB41(fVar41,0) & ~bVar61)));
      uVar84 = SUB41(fVar42,0);
      uVar86 = (undefined1)((uint)fVar42 >> 8);
      uVar88 = (undefined1)((uint)fVar42 >> 0x10);
      uVar90 = (undefined1)((uint)fVar42 >> 0x18);
    }
    uVar33 = *(undefined8 *)(pcVar39 + 4);
    uVar44 = (undefined1)uVar33;
    uVar46 = (undefined1)((ulong)uVar33 >> 8);
    uVar48 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar50 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar53 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar55 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar57 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar59 = (undefined1)((ulong)uVar33 >> 0x38);
    fVar42 = *(float *)(pcVar39 + 0xc);
    goto LAB_0032dd8c;
  }
  puVar38 = *(undefined8 **)(param_6 + 0x78);
  if (*(char *)((long)puVar38 + 0x276) == '\0') {
    uVar33 = *(undefined8 *)(pcVar39 + 4);
    uVar44 = (undefined1)uVar33;
    uVar46 = (undefined1)((ulong)uVar33 >> 8);
    uVar48 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar50 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar53 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar55 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar57 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar59 = (undefined1)((ulong)uVar33 >> 0x38);
    uVar71 = 0;
    uVar72 = 0;
    uVar73 = 0;
    uVar74 = 0;
    uVar76 = 0;
    uVar78 = 0;
    uVar80 = 0;
    uVar82 = 0;
    uVar84 = 0;
    uVar86 = 0;
    uVar88 = 0;
    uVar90 = 0;
    fVar42 = *(float *)(pcVar39 + 0xc);
    goto LAB_0032dd8c;
  }
  lVar40 = lVar40 * 0x10;
  puVar2 = (undefined4 *)(*(long *)(param_6 + 0x210) + lVar40);
  puVar3 = (undefined4 *)(*(long *)(param_6 + 0x218) + lVar40);
  puVar4 = (undefined4 *)(*(long *)(param_6 + 0x220) + lVar40);
  cVar6 = *(char *)(*(long *)(param_6 + 0xa0) + 0x793);
  if (cVar6 == '\x02') {
    pVar1 = (unkbyte9 *)(param_6 + 0x400);
    uVar33 = *(undefined8 *)(param_6 + 0x408);
    uVar60 = (undefined1)((ulong)uVar33 >> 8);
    uVar62 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar64 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar66 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar68 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar69 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar70 = (undefined1)((ulong)uVar33 >> 0x38);
    uVar33 = *(undefined8 *)pVar1;
    uVar44 = (undefined1)uVar33;
    uVar46 = (undefined1)((ulong)uVar33 >> 8);
    uVar48 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar50 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar53 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar55 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar57 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar59 = (undefined1)((ulong)uVar33 >> 0x38);
    auVar7[9] = uVar60;
    auVar7._0_9_ = *pVar1;
    auVar7[10] = uVar62;
    auVar7[0xb] = uVar64;
    auVar7[0xc] = uVar66;
    auVar7[0xd] = uVar68;
    auVar7[0xe] = uVar69;
    auVar7[0xf] = uVar70;
    auVar8[9] = uVar60;
    auVar8._0_9_ = *pVar1;
    auVar8[10] = uVar62;
    auVar8[0xb] = uVar64;
    auVar8[0xc] = uVar66;
    auVar8[0xd] = uVar68;
    auVar8[0xe] = uVar69;
    auVar8[0xf] = uVar70;
    auVar133 = NEON_ext(auVar7,auVar8,8,1);
    uVar12 = *puVar2;
    uVar68 = (undefined1)uVar12;
    uVar69 = (undefined1)((uint)uVar12 >> 8);
    uVar70 = (undefined1)((uint)uVar12 >> 0x10);
    uVar75 = (undefined1)((uint)uVar12 >> 0x18);
    uVar12 = *puVar3;
    uVar77 = (undefined1)uVar12;
    uVar79 = (undefined1)((uint)uVar12 >> 8);
    uVar81 = (undefined1)((uint)uVar12 >> 0x10);
    uVar83 = (undefined1)((uint)uVar12 >> 0x18);
    uVar12 = *puVar4;
    uVar85 = (undefined1)uVar12;
    uVar87 = (undefined1)((uint)uVar12 >> 8);
    uVar89 = (undefined1)((uint)uVar12 >> 0x10);
    uVar91 = (undefined1)((uint)uVar12 >> 0x18);
    uVar12 = puVar2[2];
    uVar71 = (undefined1)uVar12;
    uVar72 = (undefined1)((uint)uVar12 >> 8);
    uVar73 = (undefined1)((uint)uVar12 >> 0x10);
    uVar74 = (undefined1)((uint)uVar12 >> 0x18);
    uVar12 = puVar3[2];
    uVar108 = (undefined1)uVar12;
    uVar109 = (undefined1)((uint)uVar12 >> 8);
    uVar110 = (undefined1)((uint)uVar12 >> 0x10);
    uVar111 = (undefined1)((uint)uVar12 >> 0x18);
    uVar12 = puVar2[1];
    uVar96 = (undefined1)uVar12;
    uVar97 = (undefined1)((uint)uVar12 >> 8);
    uVar98 = (undefined1)((uint)uVar12 >> 0x10);
    uVar99 = (undefined1)((uint)uVar12 >> 0x18);
    uVar12 = puVar3[1];
    uVar100 = (undefined1)uVar12;
    uVar101 = (undefined1)((uint)uVar12 >> 8);
    uVar102 = (undefined1)((uint)uVar12 >> 0x10);
    uVar103 = (undefined1)((uint)uVar12 >> 0x18);
    uVar60 = auVar133[0];
    uVar62 = auVar133[1];
    uVar64 = auVar133[2];
    uVar66 = auVar133[3];
LAB_0032dc38:
    uVar90 = 0;
    uVar88 = 0;
    uVar86 = 0;
    uVar84 = 0;
    uVar82 = 0;
    uVar80 = 0;
    uVar78 = 0;
    uVar76 = 0;
    uVar95 = 0;
    uVar94 = 0;
    uVar93 = 0;
    uVar92 = 0;
    uVar12 = puVar4[2];
    uVar112 = (undefined1)uVar12;
    uVar113 = (undefined1)((uint)uVar12 >> 8);
    uVar114 = (undefined1)((uint)uVar12 >> 0x10);
    uVar115 = (undefined1)((uint)uVar12 >> 0x18);
    uVar12 = puVar4[1];
    uVar104 = (undefined1)uVar12;
    uVar105 = (undefined1)((uint)uVar12 >> 8);
    uVar106 = (undefined1)((uint)uVar12 >> 0x10);
    uVar107 = (undefined1)((uint)uVar12 >> 0x18);
  }
  else {
    if (cVar6 != '\0') {
      uVar12 = *puVar2;
      uVar68 = (undefined1)uVar12;
      uVar69 = (undefined1)((uint)uVar12 >> 8);
      uVar70 = (undefined1)((uint)uVar12 >> 0x10);
      uVar75 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = *puVar3;
      uVar77 = (undefined1)uVar12;
      uVar79 = (undefined1)((uint)uVar12 >> 8);
      uVar81 = (undefined1)((uint)uVar12 >> 0x10);
      uVar83 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = *puVar4;
      uVar85 = (undefined1)uVar12;
      uVar87 = (undefined1)((uint)uVar12 >> 8);
      uVar89 = (undefined1)((uint)uVar12 >> 0x10);
      uVar91 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = puVar2[2];
      uVar71 = (undefined1)uVar12;
      uVar72 = (undefined1)((uint)uVar12 >> 8);
      uVar73 = (undefined1)((uint)uVar12 >> 0x10);
      uVar74 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = puVar2[3];
      uVar44 = (undefined1)uVar12;
      uVar46 = (undefined1)((uint)uVar12 >> 8);
      uVar48 = (undefined1)((uint)uVar12 >> 0x10);
      uVar50 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = puVar2[1];
      uVar96 = (undefined1)uVar12;
      uVar97 = (undefined1)((uint)uVar12 >> 8);
      uVar98 = (undefined1)((uint)uVar12 >> 0x10);
      uVar99 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = puVar3[2];
      uVar108 = (undefined1)uVar12;
      uVar109 = (undefined1)((uint)uVar12 >> 8);
      uVar110 = (undefined1)((uint)uVar12 >> 0x10);
      uVar111 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = puVar3[3];
      uVar53 = (undefined1)uVar12;
      uVar55 = (undefined1)((uint)uVar12 >> 8);
      uVar57 = (undefined1)((uint)uVar12 >> 0x10);
      uVar59 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = puVar3[1];
      uVar100 = (undefined1)uVar12;
      uVar101 = (undefined1)((uint)uVar12 >> 8);
      uVar102 = (undefined1)((uint)uVar12 >> 0x10);
      uVar103 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = puVar4[3];
      uVar60 = (undefined1)uVar12;
      uVar62 = (undefined1)((uint)uVar12 >> 8);
      uVar64 = (undefined1)((uint)uVar12 >> 0x10);
      uVar66 = (undefined1)((uint)uVar12 >> 0x18);
      goto LAB_0032dc38;
    }
    uVar33 = *(undefined8 *)(param_6 + 0x3d8);
    uVar85 = (undefined1)uVar33;
    uVar87 = (undefined1)((ulong)uVar33 >> 8);
    uVar89 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar91 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar92 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar93 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar94 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar95 = (undefined1)((ulong)uVar33 >> 0x38);
    uVar33 = *(undefined8 *)(param_6 + 0x3d0);
    uVar68 = (undefined1)uVar33;
    uVar69 = (undefined1)((ulong)uVar33 >> 8);
    uVar70 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar75 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar77 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar79 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar81 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar83 = (undefined1)((ulong)uVar33 >> 0x38);
    uVar33 = *(undefined8 *)(param_6 + 1000);
    uVar104 = (undefined1)uVar33;
    uVar105 = (undefined1)((ulong)uVar33 >> 8);
    uVar106 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar107 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar76 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar78 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar80 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar82 = (undefined1)((ulong)uVar33 >> 0x38);
    uVar33 = *(undefined8 *)(param_6 + 0x3e0);
    uVar96 = (undefined1)uVar33;
    uVar97 = (undefined1)((ulong)uVar33 >> 8);
    uVar98 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar99 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar100 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar101 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar102 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar103 = (undefined1)((ulong)uVar33 >> 0x38);
    uVar33 = *(undefined8 *)(param_6 + 0x3f8);
    uVar112 = (undefined1)uVar33;
    uVar113 = (undefined1)((ulong)uVar33 >> 8);
    uVar114 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar115 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar84 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar86 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar88 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar90 = (undefined1)((ulong)uVar33 >> 0x38);
    uVar33 = *(undefined8 *)(param_6 + 0x3f0);
    uVar71 = (undefined1)uVar33;
    uVar72 = (undefined1)((ulong)uVar33 >> 8);
    uVar73 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar74 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar108 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar109 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar110 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar111 = (undefined1)((ulong)uVar33 >> 0x38);
    uVar33 = *(undefined8 *)(param_6 + 0x408);
    uVar60 = (undefined1)uVar33;
    uVar62 = (undefined1)((ulong)uVar33 >> 8);
    uVar64 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar66 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar33 = *(undefined8 *)(param_6 + 0x400);
    uVar44 = (undefined1)uVar33;
    uVar46 = (undefined1)((ulong)uVar33 >> 8);
    uVar48 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar50 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar53 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar55 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar57 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar59 = (undefined1)((ulong)uVar33 >> 0x38);
  }
  auVar13[1] = uVar97;
  auVar13[0] = uVar96;
  auVar13[2] = uVar98;
  auVar13[3] = uVar99;
  auVar13[4] = uVar100;
  auVar13[5] = uVar101;
  auVar13[6] = uVar102;
  auVar13[7] = uVar103;
  auVar13[8] = uVar104;
  auVar13[9] = uVar105;
  auVar13[10] = uVar106;
  auVar13[0xb] = uVar107;
  auVar13[0xc] = uVar76;
  auVar13[0xd] = uVar78;
  auVar13[0xe] = uVar80;
  auVar13[0xf] = uVar82;
  uVar122 = a64_TBL(ZEXT816(0),auVar13,DAT_04101580);
  auVar14[1] = uVar97;
  auVar14[0] = uVar96;
  auVar14[2] = uVar98;
  auVar14[3] = uVar99;
  auVar14[4] = uVar100;
  auVar14[5] = uVar101;
  auVar14[6] = uVar102;
  auVar14[7] = uVar103;
  auVar14[8] = uVar104;
  auVar14[9] = uVar105;
  auVar14[10] = uVar106;
  auVar14[0xb] = uVar107;
  auVar14[0xc] = uVar76;
  auVar14[0xd] = uVar78;
  auVar14[0xe] = uVar80;
  auVar14[0xf] = uVar82;
  uVar124 = a64_TBL(ZEXT816(0),auVar14,DAT_041015c8);
  auVar22[1] = uVar72;
  auVar22[0] = uVar71;
  auVar22[2] = uVar73;
  auVar22[3] = uVar74;
  auVar22[4] = uVar108;
  auVar22[5] = uVar109;
  auVar22[6] = uVar110;
  auVar22[7] = uVar111;
  auVar22[8] = uVar112;
  auVar22[9] = uVar113;
  auVar22[10] = uVar114;
  auVar22[0xb] = uVar115;
  auVar22[0xc] = uVar84;
  auVar22[0xd] = uVar86;
  auVar22[0xe] = uVar88;
  auVar22[0xf] = uVar90;
  uVar33 = a64_TBL(ZEXT816(0),auVar22,DAT_041015c8);
  auVar23[1] = uVar72;
  auVar23[0] = uVar71;
  auVar23[2] = uVar73;
  auVar23[3] = uVar74;
  auVar23[4] = uVar108;
  auVar23[5] = uVar109;
  auVar23[6] = uVar110;
  auVar23[7] = uVar111;
  auVar23[8] = uVar112;
  auVar23[9] = uVar113;
  auVar23[10] = uVar114;
  auVar23[0xb] = uVar115;
  auVar23[0xc] = uVar84;
  auVar23[0xd] = uVar86;
  auVar23[0xe] = uVar88;
  auVar23[0xf] = uVar90;
  uVar129 = a64_TBL(ZEXT816(0),auVar23,DAT_04101598);
  auVar24[1] = uVar72;
  auVar24[0] = uVar71;
  auVar24[2] = uVar73;
  auVar24[3] = uVar74;
  auVar24[4] = uVar108;
  auVar24[5] = uVar109;
  auVar24[6] = uVar110;
  auVar24[7] = uVar111;
  auVar24[8] = uVar112;
  auVar24[9] = uVar113;
  auVar24[10] = uVar114;
  auVar24[0xb] = uVar115;
  auVar24[0xc] = uVar84;
  auVar24[0xd] = uVar86;
  auVar24[0xe] = uVar88;
  auVar24[0xf] = uVar90;
  uVar138 = a64_TBL(ZEXT816(0),auVar24,DAT_041016a0);
  auVar15[1] = uVar97;
  auVar15[0] = uVar96;
  auVar15[2] = uVar98;
  auVar15[3] = uVar99;
  auVar15[4] = uVar100;
  auVar15[5] = uVar101;
  auVar15[6] = uVar102;
  auVar15[7] = uVar103;
  auVar15[8] = uVar104;
  auVar15[9] = uVar105;
  auVar15[10] = uVar106;
  auVar15[0xb] = uVar107;
  auVar15[0xc] = uVar76;
  auVar15[0xd] = uVar78;
  auVar15[0xe] = uVar80;
  auVar15[0xf] = uVar82;
  uVar139 = a64_TBL(ZEXT816(0),auVar15,DAT_041016a0);
  auVar16[1] = uVar97;
  auVar16[0] = uVar96;
  auVar16[2] = uVar98;
  auVar16[3] = uVar99;
  auVar16[4] = uVar100;
  auVar16[5] = uVar101;
  auVar16[6] = uVar102;
  auVar16[7] = uVar103;
  auVar16[8] = uVar104;
  auVar16[9] = uVar105;
  auVar16[10] = uVar106;
  auVar16[0xb] = uVar107;
  auVar16[0xc] = uVar76;
  auVar16[0xd] = uVar78;
  auVar16[0xe] = uVar80;
  auVar16[0xf] = uVar82;
  uVar130 = a64_TBL(ZEXT816(0),auVar16,DAT_04101598);
  auVar25[1] = uVar72;
  auVar25[0] = uVar71;
  auVar25[2] = uVar73;
  auVar25[3] = uVar74;
  auVar25[4] = uVar108;
  auVar25[5] = uVar109;
  auVar25[6] = uVar110;
  auVar25[7] = uVar111;
  auVar25[8] = uVar112;
  auVar25[9] = uVar113;
  auVar25[10] = uVar114;
  auVar25[0xb] = uVar115;
  auVar25[0xc] = uVar84;
  auVar25[0xd] = uVar86;
  auVar25[0xe] = uVar88;
  auVar25[0xf] = uVar90;
  uVar140 = a64_TBL(ZEXT816(0),auVar25,DAT_04101580);
  uVar26 = CONCAT13(uVar74,CONCAT12(uVar73,CONCAT11(uVar72,uVar71)));
  uVar12 = CONCAT13(uVar75,CONCAT12(uVar70,CONCAT11(uVar69,uVar68)));
  uVar71 = 0;
  uVar72 = 0;
  uVar73 = 0;
  uVar74 = 0;
  uVar76 = 0;
  uVar78 = 0;
  uVar80 = 0;
  uVar82 = 0;
  uVar84 = 0;
  uVar86 = 0;
  uVar88 = 0;
  uVar90 = 0;
  auVar127._0_4_ =
       ((float)CONCAT13(uVar75,CONCAT12(uVar70,CONCAT11(uVar69,uVar68))) * (float)uVar122 *
        (float)uVar129 -
       (float)uVar130 * (float)CONCAT13(uVar75,CONCAT12(uVar70,CONCAT11(uVar69,uVar68))) *
       (float)uVar140) +
       ((float)CONCAT13(uVar83,CONCAT12(uVar81,CONCAT11(uVar79,uVar77))) *
        (float)((ulong)uVar122 >> 0x20) * (float)((ulong)uVar129 >> 0x20) -
       (float)((ulong)uVar130 >> 0x20) *
       (float)CONCAT13(uVar83,CONCAT12(uVar81,CONCAT11(uVar79,uVar77))) *
       (float)((ulong)uVar140 >> 0x20)) +
       ((float)CONCAT13(uVar91,CONCAT12(uVar89,CONCAT11(uVar87,uVar85))) * (float)uVar124 *
        (float)uVar138 -
       (float)uVar139 * (float)CONCAT13(uVar91,CONCAT12(uVar89,CONCAT11(uVar87,uVar85))) *
       (float)uVar33) +
       ((float)CONCAT13(uVar95,CONCAT12(uVar94,CONCAT11(uVar93,uVar92))) *
        (float)((ulong)uVar124 >> 0x20) * (float)((ulong)uVar138 >> 0x20) -
       (float)((ulong)uVar139 >> 0x20) *
       (float)CONCAT13(uVar95,CONCAT12(uVar94,CONCAT11(uVar93,uVar92))) *
       (float)((ulong)uVar33 >> 0x20));
  auVar127._4_4_ = auVar127._0_4_;
  auVar127._8_4_ = auVar127._0_4_;
  auVar127._12_4_ = auVar127._0_4_;
  auVar133 = NEON_frecpe(auVar127,4);
  auVar143 = NEON_frecps(auVar133,auVar127,4);
  auVar134._0_4_ = auVar133._0_4_ * auVar143._0_4_;
  auVar134._4_4_ = auVar133._4_4_ * auVar143._4_4_;
  auVar134._8_4_ = auVar133._8_4_ * auVar143._8_4_;
  auVar134._12_4_ = auVar133._12_4_ * auVar143._12_4_;
  auVar133 = NEON_frecps(auVar134,auVar127,4);
  fVar128 = auVar134._0_4_ * auVar133._0_4_;
  fVar135 = auVar134._4_4_ * auVar133._4_4_;
  fVar136 = auVar134._8_4_ * auVar133._8_4_;
  uVar17 = CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)));
  auVar144._4_4_ =
       (int)(CONCAT17(uVar103,CONCAT16(uVar102,CONCAT15(uVar101,CONCAT14(uVar100,uVar17)))) >> 0x20)
  ;
  auVar144._0_4_ =
       (int)(CONCAT17(uVar83,CONCAT16(uVar81,CONCAT15(uVar79,CONCAT14(uVar77,uVar12)))) >> 0x20);
  auVar144._8_4_ =
       (int)(CONCAT17(uVar111,CONCAT16(uVar110,CONCAT15(uVar109,CONCAT14(uVar108,uVar26)))) >> 0x20)
  ;
  auVar144._12_4_ = 0;
  uVar9 = (undefined2)(CONCAT12(uVar87,CONCAT11(uVar85,uVar83)) >> 8);
  uVar124 = a64_TBL(ZEXT816(0),auVar144,DAT_04101580);
  uVar130 = a64_TBL(ZEXT816(0),auVar144,DAT_041015c8);
  auVar18[2] = uVar89;
  auVar18._0_2_ = uVar9;
  auVar18[3] = uVar91;
  auVar18[4] = uVar104;
  auVar18[5] = uVar105;
  auVar18[6] = uVar106;
  auVar18[7] = uVar107;
  auVar18[8] = uVar112;
  auVar18[9] = uVar113;
  auVar18[10] = uVar114;
  auVar18[0xb] = uVar115;
  auVar18._12_4_ = 0;
  uVar148 = a64_TBL(ZEXT816(0),auVar18,DAT_041016a0);
  auVar19[2] = uVar89;
  auVar19._0_2_ = uVar9;
  auVar19[3] = uVar91;
  auVar19[4] = uVar104;
  auVar19[5] = uVar105;
  auVar19[6] = uVar106;
  auVar19[7] = uVar107;
  auVar19[8] = uVar112;
  auVar19[9] = uVar113;
  auVar19[10] = uVar114;
  auVar19[0xb] = uVar115;
  auVar19._12_4_ = 0;
  uVar150 = a64_TBL(ZEXT816(0),auVar19,DAT_04101580);
  auVar34._4_4_ = uVar17;
  auVar34._0_4_ = uVar12;
  auVar34._8_4_ = uVar26;
  auVar34._12_4_ = 0;
  uVar139 = a64_TBL(ZEXT816(0),auVar34,DAT_04101580);
  auVar20[2] = uVar89;
  auVar20._0_2_ = uVar9;
  auVar20[3] = uVar91;
  auVar20[4] = uVar104;
  auVar20[5] = uVar105;
  auVar20[6] = uVar106;
  auVar20[7] = uVar107;
  auVar20[8] = uVar112;
  auVar20[9] = uVar113;
  auVar20[10] = uVar114;
  auVar20[0xb] = uVar115;
  auVar20._12_4_ = 0;
  uVar138 = a64_TBL(ZEXT816(0),auVar20,DAT_04101598);
  fVar147 = (float)((ulong)uVar138 >> 0x20);
  auVar21[2] = uVar89;
  auVar21._0_2_ = uVar9;
  auVar21[3] = uVar91;
  auVar21[4] = uVar104;
  auVar21[5] = uVar105;
  auVar21[6] = uVar106;
  auVar21[7] = uVar107;
  auVar21[8] = uVar112;
  auVar21[9] = uVar113;
  auVar21[10] = uVar114;
  auVar21[0xb] = uVar115;
  auVar21._12_4_ = 0;
  uVar33 = a64_TBL(ZEXT816(0),auVar21,DAT_041015c8);
  auVar35._4_4_ = uVar17;
  auVar35._0_4_ = uVar12;
  auVar35._8_4_ = uVar26;
  auVar35._12_4_ = 0;
  uVar129 = a64_TBL(ZEXT816(0),auVar35,DAT_041015c8);
  uVar122 = a64_TBL(ZEXT816(0),auVar144,DAT_04101598);
  uVar141 = a64_TBL(ZEXT816(0),auVar144,DAT_041016a0);
  auVar36._4_4_ = uVar17;
  auVar36._0_4_ = uVar12;
  auVar36._8_4_ = uVar26;
  auVar36._12_4_ = 0;
  uVar140 = a64_TBL(ZEXT816(0),auVar36,DAT_04101598);
  auVar37._4_4_ = uVar17;
  auVar37._0_4_ = uVar12;
  auVar37._8_4_ = uVar26;
  auVar37._12_4_ = 0;
  uVar125 = a64_TBL(ZEXT816(0),auVar37,DAT_041016a0);
  fVar41 = (float)((ulong)uVar124 >> 0x20);
  fVar42 = (float)((ulong)uVar122 >> 0x20);
  fVar149 = (float)((ulong)uVar150 >> 0x20);
  fVar123 = (float)((ulong)uVar140 >> 0x20);
  fVar43 = (float)((ulong)uVar139 >> 0x20);
  fVar137 = fVar128 * ((float)uVar124 * (float)uVar138 - (float)uVar122 * (float)uVar150);
  fVar145 = fVar135 * (fVar41 * fVar147 - fVar42 * fVar149);
  fVar146 = fVar136 * ((float)uVar130 * (float)uVar148 - (float)uVar141 * (float)uVar33);
  fVar31 = fVar128 * ((float)uVar150 * (float)uVar140 - (float)uVar138 * (float)uVar139);
  fVar149 = fVar135 * (fVar149 * fVar123 - fVar147 * fVar43);
  fVar32 = fVar136 * ((float)uVar33 * (float)uVar125 - (float)uVar148 * (float)uVar129);
  fVar128 = fVar128 * ((float)uVar122 * (float)uVar139 - (float)uVar140 * (float)uVar124);
  fVar135 = fVar135 * (fVar42 * fVar43 - fVar123 * fVar41);
  fVar136 = fVar136 * ((float)uVar141 * (float)uVar129 - (float)uVar125 * (float)uVar130);
  fVar42 = (float)CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44)));
  fVar41 = (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar53)));
  fVar43 = (float)CONCAT13(uVar66,CONCAT12(uVar64,CONCAT11(uVar62,uVar60)));
  fVar123 = (-fVar137 * fVar42 - fVar31 * fVar41) - fVar128 * fVar43;
  fVar147 = (-fVar145 * fVar42 - fVar149 * fVar41) - fVar135 * fVar43;
  fVar41 = (-fVar146 * fVar42 - fVar32 * fVar41) - fVar136 * fVar43;
  iVar5 = -(uint)(auVar127._0_4_ == 0.0);
  bVar45 = (byte)iVar5;
  bVar47 = (byte)((uint)iVar5 >> 8);
  bVar49 = (byte)((uint)iVar5 >> 0x10);
  bVar51 = (byte)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(auVar127._0_4_ == 0.0);
  bVar52 = (byte)iVar5;
  bVar54 = (byte)((uint)iVar5 >> 8);
  bVar56 = (byte)((uint)iVar5 >> 0x10);
  bVar58 = (byte)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(auVar127._0_4_ == 0.0);
  bVar61 = (byte)iVar5;
  bVar63 = (byte)((uint)iVar5 >> 8);
  bVar65 = (byte)((uint)iVar5 >> 0x10);
  bVar67 = (byte)((uint)iVar5 >> 0x18);
  fVar42 = (float)CONCAT13((byte)((uint)fVar137 >> 0x18) & ~bVar51,
                           CONCAT12((byte)((uint)fVar137 >> 0x10) & ~bVar49,
                                    CONCAT11((byte)((uint)fVar137 >> 8) & ~bVar47,
                                             SUB41(fVar137,0) & ~bVar45)));
  auVar118._0_8_ =
       CONCAT17((byte)((uint)fVar145 >> 0x18) & ~bVar58,
                CONCAT16((byte)((uint)fVar145 >> 0x10) & ~bVar56,
                         CONCAT15((byte)((uint)fVar145 >> 8) & ~bVar54,
                                  CONCAT14(SUB41(fVar145,0) & ~bVar52,fVar42))));
  auVar118[8] = SUB41(fVar146,0) & ~bVar61;
  auVar118[9] = (byte)((uint)fVar146 >> 8) & ~bVar63;
  auVar118[10] = (byte)((uint)fVar146 >> 0x10) & ~bVar65;
  auVar118[0xb] = (byte)((uint)fVar146 >> 0x18) & ~bVar67;
  fVar43 = (float)*puVar38;
  fVar137 = (float)((ulong)*puVar38 >> 0x20);
  fVar145 = (float)puVar38[1];
  fVar42 = fVar42 * fVar43 +
           (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~bVar51,
                           CONCAT12((byte)((uint)fVar31 >> 0x10) & ~bVar49,
                                    CONCAT11((byte)((uint)fVar31 >> 8) & ~bVar47,
                                             SUB41(fVar31,0) & ~bVar45))) * fVar137 +
           (float)CONCAT13((byte)((uint)fVar128 >> 0x18) & ~bVar51,
                           CONCAT12((byte)((uint)fVar128 >> 0x10) & ~bVar49,
                                    CONCAT11((byte)((uint)fVar128 >> 8) & ~bVar47,
                                             SUB41(fVar128,0) & ~bVar45))) * fVar145 +
           (float)CONCAT13((byte)((uint)fVar123 >> 0x18) & ~bVar51,
                           CONCAT12((byte)((uint)fVar123 >> 0x10) & ~bVar49,
                                    CONCAT11((byte)((uint)fVar123 >> 8) & ~bVar47,
                                             SUB41(fVar123,0) & ~bVar45)));
  uVar44 = SUB41(fVar42,0);
  uVar46 = (undefined1)((uint)fVar42 >> 8);
  uVar48 = (undefined1)((uint)fVar42 >> 0x10);
  uVar50 = (undefined1)((uint)fVar42 >> 0x18);
  fVar42 = (float)((ulong)auVar118._0_8_ >> 0x20) * fVar43 +
           (float)CONCAT13((byte)((uint)fVar149 >> 0x18) & ~bVar58,
                           CONCAT12((byte)((uint)fVar149 >> 0x10) & ~bVar56,
                                    CONCAT11((byte)((uint)fVar149 >> 8) & ~bVar54,
                                             SUB41(fVar149,0) & ~bVar52))) * fVar137 +
           (float)CONCAT13((byte)((uint)fVar135 >> 0x18) & ~bVar58,
                           CONCAT12((byte)((uint)fVar135 >> 0x10) & ~bVar56,
                                    CONCAT11((byte)((uint)fVar135 >> 8) & ~bVar54,
                                             SUB41(fVar135,0) & ~bVar52))) * fVar145 +
           (float)CONCAT13((byte)((uint)fVar147 >> 0x18) & ~bVar58,
                           CONCAT12((byte)((uint)fVar147 >> 0x10) & ~bVar56,
                                    CONCAT11((byte)((uint)fVar147 >> 8) & ~bVar54,
                                             SUB41(fVar147,0) & ~bVar52)));
  uVar53 = SUB41(fVar42,0);
  uVar55 = (undefined1)((uint)fVar42 >> 8);
  uVar57 = (undefined1)((uint)fVar42 >> 0x10);
  uVar59 = (undefined1)((uint)fVar42 >> 0x18);
  fVar42 = auVar118._8_4_ * fVar43 +
           (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~bVar67,
                           CONCAT12((byte)((uint)fVar32 >> 0x10) & ~bVar65,
                                    CONCAT11((byte)((uint)fVar32 >> 8) & ~bVar63,
                                             SUB41(fVar32,0) & ~bVar61))) * fVar137 +
           (float)CONCAT13((byte)((uint)fVar136 >> 0x18) & ~bVar67,
                           CONCAT12((byte)((uint)fVar136 >> 0x10) & ~bVar65,
                                    CONCAT11((byte)((uint)fVar136 >> 8) & ~bVar63,
                                             SUB41(fVar136,0) & ~bVar61))) * fVar145 +
           (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~bVar67,
                           CONCAT12((byte)((uint)fVar41 >> 0x10) & ~bVar65,
                                    CONCAT11((byte)((uint)fVar41 >> 8) & ~bVar63,
                                             SUB41(fVar41,0) & ~bVar61)));
LAB_0032dd8c:
  fVar120 = fVar120 * fVar121 * (float)local_5c;
  fVar121 = (float)*(undefined8 *)param_5;
  fVar41 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
  *param_5 = fVar121 + fVar120 * (((float)CONCAT13(uVar74,CONCAT12(uVar73,CONCAT11(uVar72,uVar71)))
                                  + (float)CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44)))
                                  ) - fVar121);
  param_5[1] = fVar41 + fVar120 * (((float)CONCAT13(uVar82,CONCAT12(uVar80,CONCAT11(uVar78,uVar76)))
                                   + (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar53))
                                                    )) - fVar41);
  *(ulong *)(param_5 + 2) =
       (ulong)(uint)((float)*(undefined8 *)(param_5 + 2) +
                    fVar120 * (((float)CONCAT13(uVar90,CONCAT12(uVar88,CONCAT11(uVar86,uVar84))) +
                               fVar42) - (float)*(undefined8 *)(param_5 + 2)));
  *(undefined8 *)param_5 = *(undefined8 *)param_5;
  return;
}

