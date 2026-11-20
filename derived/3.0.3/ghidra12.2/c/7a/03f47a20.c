
void FUN_03f47a20(uint *param_1,long param_2)

{
  void *__src;
  int *piVar1;
  long lVar2;
  float *pfVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  bool bVar23;
  uint3 uVar24;
  uint3 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  bool bVar29;
  bool bVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  uint *puVar43;
  undefined8 *puVar44;
  long lVar45;
  long lVar46;
  undefined1 uVar47;
  short sVar48;
  float fVar49;
  float fVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
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
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  char cVar80;
  char cVar81;
  float fVar79;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  char cVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined8 uVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  byte bVar98;
  byte bVar100;
  byte bVar101;
  float fVar99;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar109 [16];
  float fVar110;
  undefined1 auVar111 [16];
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  uint uVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined8 uVar134;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 uVar145;
  undefined1 uVar146;
  float fVar147;
  float local_558 [200];
  undefined8 local_238;
  float local_230 [4];
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float local_1dc;
  float local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  
  puVar43 = param_1 + 0x11;
  memset(puVar43,0,800);
  __src = (void *)(param_2 + (long)(int)(param_1[0xe] * param_1[0xc]) * 4);
  if (0 < (int)param_1[0xd]) {
    iVar40 = 0;
    do {
      FUN_03f49810(param_1,__src,iVar40);
      iVar40 = iVar40 + 1;
    } while (iVar40 < (int)param_1[0xd]);
  }
  FUN_03f49a38(puVar43,param_1 + 0x75);
  FUN_03f49a38(param_1 + 0x25,param_1 + 0x89);
  FUN_03f49a38(param_1 + 0x39,param_1 + 0x9d);
  FUN_03f49a38(param_1 + 0x4d,param_1 + 0xb1);
  FUN_03f49a38(param_1 + 0x61,param_1 + 0xc5);
  fVar94 = (float)param_1[1];
  fVar50 = (float)param_1[2];
  fVar49 = (float)param_1[0x1a4];
  uVar35 = *param_1;
  iVar40 = 0;
  lVar38 = 0x500;
  param_1[0x40c] = 0;
  param_1[0x40d] = 0;
  param_1[0x40e] = 0;
  param_1[0x40f] = 0;
  param_1[0x410] = 0;
  param_1[0x411] = 0;
  param_1[0x412] = 0;
  param_1[0x413] = 0;
  param_1[0x414] = 0;
  param_1[0x415] = 0;
  param_1[0x416] = 0;
  param_1[0x417] = 0;
  lVar46 = 0;
  lVar45 = 0;
  do {
    pfVar3 = (float *)((long)param_1 + lVar38);
    fVar123 = pfVar3[0x67];
    fVar126 = pfVar3[0x68];
    fVar116 = (float)param_1[lVar45 + 0x75];
    fVar119 = (float)param_1[lVar45 + 0x76];
    fVar76 = (float)param_1[lVar45 + 0x77];
    fVar121 = (float)param_1[lVar45 + 0x78];
    fVar128 = pfVar3[0x69];
    fVar130 = pfVar3[0x6a];
    fVar79 = (float)param_1[lVar45 + 0xd9];
    fVar87 = (float)param_1[lVar45 + 0xda];
    fVar92 = (float)param_1[lVar45 + 0xdb];
    fVar112 = (float)param_1[lVar45 + 0xdc];
    uVar125 = *(uint *)((long)param_1 + lVar46 + 0xb64);
    if (uVar125 == 0) {
      *(undefined4 *)((long)param_1 + lVar45 + 0x82c) = 0xbf800000;
      *(uint *)((long)param_1 + lVar46 + 0xb64) = uVar35;
      uVar125 = uVar35;
    }
    piVar1 = (int *)((long)param_1 + lVar46 + 0xb50);
    fVar76 = fVar116 * 0.21258622 + fVar119 * 0.7151703 + fVar76 * 0.0722005 + fVar121 * 0.0;
    fVar116 = (fVar76 - (fVar123 * 0.21258622 + fVar126 * 0.7151703 + fVar128 * 0.0722005 +
                        fVar130 * 0.0)) * *(float *)((long)param_1 + lVar45 + 0x82c);
    if (fVar116 <= 0.0) {
      if (fVar116 < fVar94 * -255.0) {
        uVar21 = *(undefined4 *)((long)param_1 + lVar46 + 0xb64);
        *(uint *)((long)param_1 + lVar46 + 0xb64) = uVar35;
        *(undefined4 *)((long)param_1 + lVar46 + 0xb60) = uVar21;
        *(undefined8 *)piVar1 = *(undefined8 *)((long)param_1 + lVar46 + 0xb54);
        *(undefined8 *)((long)param_1 + lVar46 + 0xb58) =
             *(undefined8 *)((long)param_1 + lVar46 + 0xb5c);
        pfVar3[0x67] = (float)param_1[lVar45 + 0x75];
        pfVar3[0x68] = (float)param_1[lVar45 + 0x76];
        pfVar3[0x69] = (float)param_1[lVar45 + 0x77];
        pfVar3[0x6a] = (float)param_1[lVar45 + 0x78];
        *(float *)((long)param_1 + lVar45 + 0x82c) = -*(float *)((long)param_1 + lVar45 + 0x82c);
        uVar125 = *(uint *)((long)param_1 + lVar46 + 0xb64);
      }
    }
    else {
      pfVar3[0x67] = (float)param_1[lVar45 + 0x75];
      pfVar3[0x68] = (float)param_1[lVar45 + 0x76];
      pfVar3[0x69] = (float)param_1[lVar45 + 0x77];
      pfVar3[0x6a] = (float)param_1[lVar45 + 0x78];
      *(uint *)((long)param_1 + lVar46 + 0xb64) = uVar35;
      uVar125 = uVar35;
    }
    iVar39 = *piVar1;
    iVar15 = *(int *)((long)param_1 + lVar46 + 0xb54);
    uVar16 = *(uint *)((long)param_1 + lVar46 + 0xb58);
    fVar116 = *pfVar3;
    fVar119 = pfVar3[1];
    if (iVar39 < 2) {
      iVar39 = 1;
    }
    uVar17 = *(uint *)((long)param_1 + lVar46 + 0xb5c);
    if (iVar15 < 2) {
      iVar15 = 1;
    }
    uVar18 = *(uint *)((long)param_1 + lVar46 + 0xb60);
    iVar39 = iVar39 + -1;
    if ((int)uVar16 < 2) {
      uVar16 = 1;
    }
    iVar19 = *(int *)((long)param_1 + lVar45 + 0xae8);
    fVar79 = fVar79 * 0.21258622 + fVar87 * 0.7151703 + fVar92 * 0.0722005 + fVar112 * 0.0;
    fVar87 = pfVar3[2];
    fVar92 = pfVar3[3];
    *piVar1 = iVar39;
    if ((int)uVar17 < 2) {
      uVar17 = 1;
    }
    *(uint *)((long)param_1 + lVar46 + 0xb58) = uVar16 - 1;
    if ((int)uVar18 < 2) {
      uVar18 = 1;
    }
    *(uint *)((long)param_1 + lVar46 + 0xb5c) = uVar17 - 1;
    if ((int)uVar125 < 2) {
      uVar125 = 1;
    }
    *(uint *)((long)param_1 + lVar46 + 0xb60) = uVar18 - 1;
    *(int *)((long)param_1 + lVar46 + 0xb54) = iVar15 + -1;
    *(uint *)((long)param_1 + lVar46 + 0xb64) = uVar125 - 1;
    iVar20 = *(int *)((long)param_1 + lVar45 + 0xae8);
    iVar7 = iVar20;
    if (iVar15 == 0 || iVar15 + -1 == 0) {
      iVar7 = 0;
    }
    iVar15 = iVar20;
    if (uVar16 < 2) {
      iVar15 = 0;
    }
    iVar8 = iVar20;
    if (uVar17 < 2) {
      iVar8 = 0;
    }
    iVar9 = iVar20;
    if (uVar18 < 2) {
      iVar9 = 0;
    }
    iVar10 = iVar20;
    if (uVar125 < 2) {
      iVar10 = 0;
    }
    fVar112 = fVar49;
    if (fVar79 <= fVar49) {
      fVar112 = fVar79;
    }
    iVar6 = -iVar19;
    if (ABS(fVar76 - fVar112) <
        ABS((fVar116 * 0.21258622 + fVar119 * 0.7151703 + fVar87 * 0.0722005 + fVar92 * 0.0) -
            fVar112)) {
      iVar6 = iVar19;
    }
    if (0 < iVar39) {
      iVar39 = 1;
    }
    param_1[0x40c] = param_1[0x40c] + iVar20 * iVar39;
    param_1[0x40d] = param_1[0x40d] + iVar7;
    param_1[0x40e] = param_1[0x40e] + iVar15;
    param_1[0x40f] = param_1[0x40f] + iVar8;
    param_1[0x410] = param_1[0x410] + iVar9;
    param_1[0x411] = param_1[0x411] + iVar10;
    fVar79 = (float)param_1[lVar45 + 0x76];
    fVar87 = (float)param_1[lVar45 + 0x77];
    fVar92 = (float)param_1[lVar45 + 0x78];
    fVar112 = (float)param_1[lVar45 + 0x75] * 1.6 + fVar79 * -1.6 + fVar87 * -1.6 + fVar92 * 0.0;
    fVar76 = pfVar3[0xe4] * 1.6 + pfVar3[0xe5] * -1.6 + pfVar3[0xe6] * -1.6 + pfVar3[0xe7] * 0.0;
    if (fVar112 <= 0.0) {
      fVar112 = 0.0;
    }
    if (fVar76 <= 0.0) {
      fVar76 = 0.0;
    }
    fVar76 = *(float *)((long)param_1 + lVar45 + 0xa20) * (fVar112 - fVar76);
    if (0.0 < fVar76) {
      pfVar3[0xe4] = (float)param_1[lVar45 + 0x75];
      pfVar3[0xe5] = fVar79;
      pfVar3[0xe6] = fVar87;
      pfVar3[0xe7] = fVar92;
    }
    else if (fVar76 < fVar50 * -255.0) {
      *(undefined8 *)((long)param_1 + lVar46 + 0xda8) =
           *(undefined8 *)((long)param_1 + lVar46 + 0xdac);
      *(undefined8 *)((long)param_1 + lVar46 + 0xdb0) =
           *(undefined8 *)((long)param_1 + lVar46 + 0xdb4);
      uVar21 = *(undefined4 *)((long)param_1 + lVar46 + 0xdbc);
      *(uint *)((long)param_1 + lVar46 + 0xdbc) = uVar35;
      *(undefined4 *)((long)param_1 + lVar46 + 0xdb8) = uVar21;
      pfVar3[0xe4] = (float)param_1[lVar45 + 0x75];
      pfVar3[0xe5] = (float)param_1[lVar45 + 0x76];
      pfVar3[0xe6] = (float)param_1[lVar45 + 0x77];
      pfVar3[0xe7] = (float)param_1[lVar45 + 0x78];
      *(float *)((long)param_1 + lVar45 + 0xa20) = -*(float *)((long)param_1 + lVar45 + 0xa20);
    }
    iVar39 = *(int *)((long)param_1 + lVar46 + 0xda8);
    iVar40 = iVar6 + iVar40;
    lVar41 = lVar45 + 4;
    iVar15 = *(int *)((long)param_1 + lVar46 + 0xdac);
    lVar38 = lVar38 + 0x10;
    uVar125 = *(uint *)((long)param_1 + lVar46 + 0xdb0);
    uVar16 = *(uint *)((long)param_1 + lVar46 + 0xdb4);
    uVar17 = *(uint *)((long)param_1 + lVar46 + 0xdb8);
    if (iVar39 < 2) {
      iVar39 = 1;
    }
    uVar18 = *(uint *)((long)param_1 + lVar46 + 0xdbc);
    if (iVar15 < 2) {
      iVar15 = 1;
    }
    iVar39 = iVar39 + -1;
    if ((int)uVar125 < 2) {
      uVar125 = 1;
    }
    *(int *)((long)param_1 + lVar46 + 0xda8) = iVar39;
    if ((int)uVar16 < 2) {
      uVar16 = 1;
    }
    *(uint *)((long)param_1 + lVar46 + 0xdb0) = uVar125 - 1;
    if ((int)uVar17 < 2) {
      uVar17 = 1;
    }
    *(uint *)((long)param_1 + lVar46 + 0xdb4) = uVar16 - 1;
    if ((int)uVar18 < 2) {
      uVar18 = 1;
    }
    *(uint *)((long)param_1 + lVar46 + 0xdb8) = uVar17 - 1;
    *(int *)((long)param_1 + lVar46 + 0xdac) = iVar15 + -1;
    *(uint *)((long)param_1 + lVar46 + 0xdbc) = uVar18 - 1;
    iVar7 = *(int *)((long)param_1 + lVar45 + 0xae8);
    uVar11 = param_1[0x413];
    uVar12 = param_1[0x414];
    uVar13 = param_1[0x415];
    uVar14 = param_1[0x416];
    iVar19 = iVar7;
    if (iVar15 == 0 || iVar15 + -1 == 0) {
      iVar19 = 0;
    }
    iVar15 = iVar7;
    if (uVar125 < 2) {
      iVar15 = 0;
    }
    iVar20 = iVar7;
    if (uVar16 < 2) {
      iVar20 = 0;
    }
    uVar125 = param_1[0x417];
    param_1[0x413] = uVar11 + iVar19;
    iVar8 = iVar7;
    if (uVar17 < 2) {
      iVar8 = 0;
    }
    param_1[0x414] = uVar12 + iVar15;
    iVar9 = iVar7;
    if (uVar18 < 2) {
      iVar9 = 0;
    }
    if (0 < iVar39) {
      iVar39 = 1;
    }
    uVar16 = param_1[0x412] + iVar7 * iVar39;
    param_1[0x415] = uVar13 + iVar20;
    param_1[0x416] = uVar14 + iVar8;
    param_1[0x417] = uVar125 + iVar9;
    param_1[0x412] = uVar16;
    lVar46 = lVar46 + 0x18;
    lVar45 = lVar41;
  } while (lVar41 != 100);
  fVar94 = (float)(int)uVar16;
  fVar50 = (float)param_1[3] * (float)(int)param_1[0x2d3];
  if (((char)param_1[0x418] == '\0') &&
     ((0 < iVar40 || (uVar35 = param_1[0x1a5], param_1[0x1a5] = uVar35 - 1, (int)uVar35 < 0)))) {
    *(undefined8 *)(param_1 + 0x143) = *(undefined8 *)(param_1 + 0x78);
    param_1[0x142] = param_1[0x77];
    *(undefined8 *)(param_1 + 0x146) = *(undefined8 *)(param_1 + 0x7b);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x75);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x7d);
    param_1[0x145] = param_1[0x7a];
    *(undefined8 *)(param_1 + 0x14d) = *(undefined8 *)(param_1 + 0x82);
    param_1[0x14a] = param_1[0x7f];
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x85);
    param_1[0x14b] = param_1[0x80];
    *(undefined8 *)(param_1 + 0x153) = *(undefined8 *)(param_1 + 0x88);
    param_1[0x14c] = param_1[0x81];
    *(undefined8 *)(param_1 + 0x155) = *(undefined8 *)(param_1 + 0x8a);
    param_1[0x14f] = param_1[0x84];
    param_1[0x152] = param_1[0x87];
    param_1[0x157] = param_1[0x8c];
    param_1[0x158] = param_1[0x8d];
    param_1[0x159] = param_1[0x8e];
    param_1[0x15a] = param_1[0x8f];
    param_1[0x15b] = param_1[0x90];
    param_1[0x15c] = param_1[0x91];
    param_1[0x15d] = param_1[0x92];
    param_1[0x15e] = param_1[0x93];
    param_1[0x15f] = param_1[0x94];
    param_1[0x160] = param_1[0x95];
    param_1[0x161] = param_1[0x96];
    param_1[0x162] = param_1[0x97];
    param_1[0x163] = param_1[0x98];
    param_1[0x164] = param_1[0x99];
    param_1[0x165] = param_1[0x9a];
    param_1[0x166] = param_1[0x9b];
    param_1[0x167] = param_1[0x9c];
    param_1[0x168] = param_1[0x9d];
    param_1[0x169] = param_1[0x9e];
    param_1[0x16a] = param_1[0x9f];
    param_1[0x16b] = param_1[0xa0];
    param_1[0x16c] = param_1[0xa1];
    param_1[0x16d] = param_1[0xa2];
    param_1[0x16e] = param_1[0xa3];
    param_1[0x16f] = param_1[0xa4];
    param_1[0x170] = param_1[0xa5];
    param_1[0x171] = param_1[0xa6];
    param_1[0x172] = param_1[0xa7];
    param_1[0x173] = param_1[0xa8];
    param_1[0x174] = param_1[0xa9];
    param_1[0x175] = param_1[0xaa];
    param_1[0x176] = param_1[0xab];
    param_1[0x177] = param_1[0xac];
    param_1[0x178] = param_1[0xad];
    param_1[0x179] = param_1[0xae];
    param_1[0x17a] = param_1[0xaf];
    param_1[0x17b] = param_1[0xb0];
    param_1[0x17c] = param_1[0xb1];
    param_1[0x17d] = param_1[0xb2];
    param_1[0x17e] = param_1[0xb3];
    param_1[0x17f] = param_1[0xb4];
    param_1[0x180] = param_1[0xb5];
    param_1[0x181] = param_1[0xb6];
    param_1[0x182] = param_1[0xb7];
    param_1[0x183] = param_1[0xb8];
    param_1[0x184] = param_1[0xb9];
    param_1[0x185] = param_1[0xba];
    param_1[0x186] = param_1[0xbb];
    param_1[0x187] = param_1[0xbc];
    param_1[0x188] = param_1[0xbd];
    param_1[0x189] = param_1[0xbe];
    param_1[0x18a] = param_1[0xbf];
    param_1[0x18b] = param_1[0xc0];
    param_1[0x18c] = param_1[0xc1];
    param_1[0x18d] = param_1[0xc2];
    param_1[0x18e] = param_1[0xc3];
    param_1[399] = param_1[0xc4];
    param_1[400] = param_1[0xc5];
    param_1[0x191] = param_1[0xc6];
    param_1[0x192] = param_1[199];
    param_1[0x193] = param_1[200];
    param_1[0x194] = param_1[0xc9];
    param_1[0x195] = param_1[0xca];
    param_1[0x196] = param_1[0xcb];
    param_1[0x197] = param_1[0xcc];
    param_1[0x198] = param_1[0xcd];
    param_1[0x199] = param_1[0xce];
    param_1[0x19a] = param_1[0xcf];
    param_1[0x19b] = param_1[0xd0];
    param_1[0x19c] = param_1[0xd1];
    param_1[0x19d] = param_1[0xd2];
    param_1[0x19e] = param_1[0xd3];
    param_1[0x19f] = param_1[0xd4];
    param_1[0x1a0] = param_1[0xd5];
    param_1[0x1a1] = param_1[0xd6];
    param_1[0x1a2] = param_1[0xd7];
    param_1[0x1a3] = param_1[0xd8];
    param_1[0x1a5] = (int)((float)(int)*param_1 + (float)(int)*param_1);
  }
  param_1[0x400] = (uint)(fVar50 < (float)(int)param_1[0x40c]);
  param_1[0x401] = (uint)(fVar50 < (float)(int)param_1[0x40d]);
  param_1[0x402] = (uint)(fVar50 < (float)(int)param_1[0x40e]);
  param_1[0x403] = (uint)(fVar50 < (float)(int)param_1[0x40f]);
  param_1[0x404] = (uint)(fVar50 < (float)(int)param_1[0x410]);
  param_1[0x405] = (uint)(fVar50 < (float)(int)param_1[0x411]);
  param_1[0x406] = (uint)(fVar50 < fVar94);
  param_1[0x407] = (uint)(fVar50 < (float)(int)(uVar11 + iVar19));
  param_1[0x408] = (uint)(fVar50 < (float)(int)(uVar12 + iVar15));
  param_1[0x409] = (uint)(fVar50 < (float)(int)(uVar13 + iVar20));
  param_1[0x40a] = (uint)(fVar50 < (float)(int)(uVar14 + iVar8));
  param_1[0x40b] = (uint)(fVar50 < (float)(int)(uVar125 + iVar9));
  if (fVar94 <= fVar50) {
    bVar29 = *(char *)((long)param_1 + 0x1062) != '\0';
    uVar125 = param_1[0x419];
    bVar23 = bVar29 && (int)uVar125 < (int)param_1[0x1a6];
    uVar35 = 0;
    if (bVar29 && (int)uVar125 < (int)param_1[0x1a6]) {
      uVar35 = uVar125 + 1;
    }
  }
  else {
    uVar35 = param_1[0x419] + 1;
    bVar23 = true;
  }
  *(bool *)((long)param_1 + 0x1062) = bVar23;
  param_1[0x419] = uVar35;
  if ((float)(int)param_1[0x40c] <= fVar50) {
    bVar30 = *(char *)((long)param_1 + 0x1061) != '\0';
    uVar125 = param_1[0x41a];
    bVar29 = bVar30 && (int)uVar125 < (int)param_1[0x1a6];
    uVar35 = 0;
    if (bVar30 && (int)uVar125 < (int)param_1[0x1a6]) {
      uVar35 = uVar125 + 1;
    }
  }
  else {
    uVar35 = param_1[0x41a] + 1;
    bVar29 = true;
  }
  fVar94 = 0.0;
  *(bool *)((long)param_1 + 0x1061) = bVar29;
  param_1[0x41a] = uVar35;
  *(char *)(param_1 + 0x418) = bVar29 | bVar23;
  if (!(bool)(bVar29 | bVar23)) {
    fVar94 = 1.0 / (float)(int)*param_1;
  }
  fVar50 = 1.0 - fVar94;
  memset(local_558 + 100,0,400);
  lVar38 = 0;
  do {
    fVar49 = *(float *)((long)param_1 + lVar38 + 0x368);
    fVar76 = *(float *)((long)param_1 + lVar38 + 0x36c);
    fVar79 = *(float *)((long)param_1 + lVar38 + 0x370);
    lVar46 = lVar38 + 0x10;
    *(float *)((long)local_558 + lVar38 + 400) = fVar50 * *(float *)((long)param_1 + lVar38 + 0x364)
    ;
    *(float *)((long)local_558 + lVar38 + 0x194) = fVar50 * fVar49;
    *(float *)((long)local_558 + lVar38 + 0x198) = fVar50 * fVar76;
    *(float *)((long)local_558 + lVar38 + 0x19c) = fVar50 * fVar79;
    lVar38 = lVar46;
  } while (lVar46 != 400);
  memset(local_558,0,400);
  lVar38 = 0;
  do {
    fVar50 = *(float *)((long)param_1 + lVar38 + 0x1d8);
    fVar49 = *(float *)((long)param_1 + lVar38 + 0x1dc);
    fVar76 = *(float *)((long)param_1 + lVar38 + 0x1e0);
    lVar46 = lVar38 + 0x10;
    *(float *)((long)local_558 + lVar38) = fVar94 * *(float *)((long)param_1 + lVar38 + 0x1d4);
    *(float *)((long)local_558 + lVar38 + 4) = fVar94 * fVar50;
    *(float *)((long)local_558 + lVar38 + 8) = fVar94 * fVar49;
    *(float *)((long)local_558 + lVar38 + 0xc) = fVar94 * fVar76;
    lVar38 = lVar46;
  } while (lVar46 != 400);
  memset(&local_238,0,400);
  lVar38 = 0;
  do {
    fVar49 = *(float *)((long)local_558 + lVar38 + 400);
    fVar94 = *(float *)((long)local_558 + lVar38);
    fVar79 = *(float *)((long)local_558 + lVar38 + 0x198);
    fVar87 = *(float *)((long)local_558 + lVar38 + 0x19c);
    lVar46 = lVar38 + 0x10;
    fVar50 = *(float *)((long)local_558 + lVar38 + 8);
    fVar76 = *(float *)((long)local_558 + lVar38 + 0xc);
    *(float *)((long)local_230 + lVar38 + -4) =
         *(float *)((long)local_558 + lVar38 + 0x194) + *(float *)((long)local_558 + lVar38 + 4);
    *(float *)((long)local_558 + lVar38 + 800) = fVar49 + fVar94;
    *(float *)((long)local_230 + lVar38) = fVar79 + fVar50;
    *(float *)((long)local_230 + lVar38 + 4) = fVar87 + fVar76;
    lVar38 = lVar46;
  } while (lVar46 != 400);
  param_1[0xdb] = (uint)local_230[0];
  param_1[0xde] = (uint)local_230[3];
  *(undefined8 *)(param_1 + 0xd9) = local_238;
  *(undefined8 *)(param_1 + 0xdf) = uStack_220;
  param_1[0xe3] = (uint)(float)local_210;
  param_1[0xe4] = (uint)local_210._4_4_;
  *(ulong *)(param_1 + 0xdc) = CONCAT44(local_230[2],local_230[1]);
  *(undefined8 *)(param_1 + 0xe1) = local_218;
  param_1[0xe5] = (uint)local_208;
  param_1[0xe8] = (uint)fStack_1fc;
  *(ulong *)(param_1 + 0xe6) = CONCAT44(fStack_200,fStack_204);
  *(undefined8 *)(param_1 + 0xe9) = local_1f8;
  param_1[0xeb] = (uint)local_1f0;
  param_1[0xf0] = (uint)local_1dc;
  *(ulong *)(param_1 + 0xec) = CONCAT44(fStack_1e8,fStack_1ec);
  param_1[0xf1] = (uint)local_1d8;
  param_1[0xf2] = local_1d4;
  *(ulong *)(param_1 + 0xee) = CONCAT44(fStack_1e0,fStack_1e4);
  uVar35 = param_1[10];
  param_1[0xf3] = local_1d0;
  param_1[0xf4] = local_1cc;
  param_1[0xf5] = local_1c8;
  param_1[0xf6] = local_1c4;
  param_1[0xf7] = local_1c0;
  param_1[0xf8] = local_1bc;
  param_1[0xf9] = local_1b8;
  param_1[0xfa] = local_1b4;
  param_1[0xfb] = local_1b0;
  param_1[0xfc] = local_1ac;
  param_1[0xfd] = local_1a8;
  param_1[0xfe] = local_1a4;
  param_1[0xff] = local_1a0;
  param_1[0x100] = local_19c;
  param_1[0x101] = local_198;
  param_1[0x102] = local_194;
  param_1[0x103] = local_190;
  param_1[0x104] = local_18c;
  param_1[0x105] = local_188;
  param_1[0x106] = local_184;
  param_1[0x107] = local_180;
  param_1[0x108] = local_17c;
  param_1[0x109] = local_178;
  param_1[0x10a] = local_174;
  param_1[0x10b] = local_170;
  param_1[0x10c] = local_16c;
  param_1[0x10d] = local_168;
  param_1[0x10e] = local_164;
  param_1[0x10f] = local_160;
  param_1[0x110] = local_15c;
  param_1[0x111] = local_158;
  param_1[0x112] = local_154;
  param_1[0x113] = local_150;
  param_1[0x114] = local_14c;
  param_1[0x115] = local_148;
  param_1[0x116] = local_144;
  param_1[0x117] = local_140;
  param_1[0x118] = local_13c;
  param_1[0x119] = local_138;
  param_1[0x11a] = local_134;
  param_1[0x11b] = local_130;
  param_1[0x11c] = local_12c;
  param_1[0x11d] = local_128;
  param_1[0x11e] = local_124;
  param_1[0x11f] = local_120;
  param_1[0x120] = local_11c;
  param_1[0x121] = local_118;
  param_1[0x122] = local_114;
  param_1[0x123] = local_110;
  param_1[0x124] = local_10c;
  param_1[0x125] = local_108;
  param_1[0x126] = local_104;
  param_1[0x127] = local_100;
  param_1[0x128] = local_fc;
  param_1[0x129] = local_f8;
  param_1[0x12a] = local_f4;
  param_1[299] = local_f0;
  param_1[300] = local_ec;
  param_1[0x12d] = local_e8;
  param_1[0x12e] = local_e4;
  param_1[0x12f] = local_e0;
  param_1[0x130] = local_dc;
  param_1[0x131] = local_d8;
  param_1[0x132] = local_d4;
  param_1[0x133] = local_d0;
  param_1[0x134] = local_cc;
  param_1[0x135] = local_c8;
  param_1[0x136] = local_c4;
  param_1[0x137] = local_c0;
  param_1[0x138] = local_bc;
  param_1[0x139] = local_b8;
  param_1[0x13a] = local_b4;
  param_1[0x13b] = local_b0;
  param_1[0x13c] = local_ac;
  if (uVar35 == 3) {
    uVar47 = 0x80;
    uVar64 = 0x3f;
    if (*(char *)((long)param_1 + 0x1062) == '\0') {
      uVar47 = 0;
      uVar64 = 0;
    }
    iVar40 = 0;
    if ((char)param_1[4] != '\0') {
      iVar40 = (uint)CONCAT11(uVar64,uVar47) << 0x10;
    }
    FUN_03f470e0(iVar40,0,__src,param_1[0xf] * param_1[0xc]);
  }
  else if (uVar35 == 2) {
    uVar47 = 0x80;
    uVar64 = 0x3f;
    if (*(char *)((long)param_1 + 0x1062) == '\0') {
      uVar47 = 0;
      uVar64 = 0;
    }
    fVar94 = 0.0;
    if ((char)param_1[4] != '\0') {
      fVar94 = (float)((uint)CONCAT11(uVar64,uVar47) << 0x10) * 0.53252053 * 256.0;
    }
    if (7 < (int)(param_1[0xf] * param_1[0xc])) {
      uVar33 = 0;
      uVar36 = (ulong)(param_1[0xf] * param_1[0xc] >> 3);
      uVar47 = (undefined1)(int)fVar94;
      do {
        uVar37 = uVar33 & 0xffffffe0;
        uVar36 = uVar36 - 1;
        uVar33 = uVar33 + 0x20;
        puVar4 = (undefined1 *)((long)__src + uVar37);
        auVar137 = NEON_umull(CONCAT17(puVar4[0x1c],
                                       CONCAT16(puVar4[0x18],
                                                CONCAT15(puVar4[0x14],
                                                         CONCAT14(puVar4[0x10],
                                                                  CONCAT13(puVar4[0xc],
                                                                           CONCAT12(puVar4[8],
                                                                                    CONCAT11(puVar4[
                                                  4],*puVar4))))))),
                              CONCAT17(uVar47,CONCAT16(uVar47,CONCAT15(uVar47,CONCAT14(uVar47,
                                                  CONCAT13(uVar47,CONCAT12(uVar47,CONCAT11(uVar47,
                                                  uVar47))))))),1);
        uVar91 = NEON_umax(CONCAT17(puVar4[0x1d],
                                    CONCAT16(puVar4[0x19],
                                             CONCAT15(puVar4[0x15],
                                                      CONCAT14(puVar4[0x11],
                                                               CONCAT13(puVar4[0xd],
                                                                        CONCAT12(puVar4[9],
                                                                                 CONCAT11(puVar4[5],
                                                                                          puVar4[1])
                                                                                )))))),
                           CONCAT17(puVar4[0x1e],
                                    CONCAT16(puVar4[0x1a],
                                             CONCAT15(puVar4[0x16],
                                                      CONCAT14(puVar4[0x12],
                                                               CONCAT13(puVar4[0xe],
                                                                        CONCAT12(puVar4[10],
                                                                                 CONCAT11(puVar4[6],
                                                                                          puVar4[2])
                                                                                )))))),1);
        uVar91 = NEON_uqsub(CONCAT17(auVar137[0xf],
                                     CONCAT16(auVar137[0xd],
                                              CONCAT15(auVar137[0xb],
                                                       CONCAT14(auVar137[9],
                                                                CONCAT13(auVar137[7],
                                                                         CONCAT12(auVar137[5],
                                                                                  CONCAT11(auVar137[
                                                  3],auVar137[1]))))))),uVar91,1);
        cVar80 = (char)((ulong)uVar91 >> 8);
        cVar81 = (char)((ulong)uVar91 >> 0x10);
        cVar82 = (char)((ulong)uVar91 >> 0x18);
        cVar83 = (char)((ulong)uVar91 >> 0x20);
        cVar84 = (char)((ulong)uVar91 >> 0x28);
        cVar85 = (char)((ulong)uVar91 >> 0x30);
        cVar86 = (char)((ulong)uVar91 >> 0x38);
        *puVar4 = *puVar4;
        puVar4[1] = (char)uVar91 + puVar4[1];
        puVar4[2] = (char)uVar91 + puVar4[2];
        puVar4[3] = puVar4[3];
        puVar4[4] = puVar4[4];
        puVar4[5] = cVar80 + puVar4[5];
        puVar4[6] = cVar80 + puVar4[6];
        puVar4[7] = puVar4[7];
        puVar4[8] = puVar4[8];
        puVar4[9] = cVar81 + puVar4[9];
        puVar4[10] = cVar81 + puVar4[10];
        puVar4[0xb] = puVar4[0xb];
        puVar4[0xc] = puVar4[0xc];
        puVar4[0xd] = cVar82 + puVar4[0xd];
        puVar4[0xe] = cVar82 + puVar4[0xe];
        puVar4[0xf] = puVar4[0xf];
        puVar4[0x10] = puVar4[0x10];
        puVar4[0x11] = cVar83 + puVar4[0x11];
        puVar4[0x12] = cVar83 + puVar4[0x12];
        puVar4[0x13] = puVar4[0x13];
        puVar4[0x14] = puVar4[0x14];
        puVar4[0x15] = cVar84 + puVar4[0x15];
        puVar4[0x16] = cVar84 + puVar4[0x16];
        puVar4[0x17] = puVar4[0x17];
        puVar4[0x18] = puVar4[0x18];
        puVar4[0x19] = cVar85 + puVar4[0x19];
        puVar4[0x1a] = cVar85 + puVar4[0x1a];
        puVar4[0x1b] = puVar4[0x1b];
        puVar4[0x1c] = puVar4[0x1c];
        puVar4[0x1d] = cVar86 + puVar4[0x1d];
        puVar4[0x1e] = cVar86 + puVar4[0x1e];
        puVar4[0x1f] = puVar4[0x1f];
      } while (uVar36 != 0);
    }
  }
  else if (uVar35 == 1) {
    FUN_03f471d0(__src,param_1[0xf] * param_1[0xc]);
  }
  memset(puVar43,0,800);
  if (0 < (int)param_1[0xd]) {
    iVar40 = 0;
    do {
      FUN_03f49810(param_1,__src,iVar40);
      iVar40 = iVar40 + 1;
    } while (iVar40 < (int)param_1[0xd]);
  }
  local_1d8 = 0.0;
  fStack_1e0 = 0.0;
  local_1dc = 0.0;
  fStack_1e8 = 0.0;
  fStack_1e4 = 0.0;
  local_1f0 = 0.0;
  fStack_1ec = 0.0;
  local_1f8 = 0;
  fStack_200 = 0.0;
  fStack_1fc = 0.0;
  local_208 = 0.0;
  fStack_204 = 0.0;
  local_210 = 0;
  local_218 = 0;
  uStack_220 = 0;
  local_230[2] = 0.0;
  local_230[3] = 0.0;
  local_230[0] = 0.0;
  local_230[1] = 0.0;
  local_238 = 0;
  if (param_1[6] == 2) {
    FUN_03f49b7c(param_1,puVar43,&local_238,param_1 + 0x140);
    FUN_03f49b7c(param_1,param_1 + 0x25,local_230 + 3,param_1 + 0x154);
    FUN_03f49b7c(param_1,param_1 + 0x39,&local_210,param_1 + 0x168);
    FUN_03f49b7c(param_1,param_1 + 0x4d,&fStack_1fc,param_1 + 0x17c);
    FUN_03f49b7c(param_1,param_1 + 0x61,&fStack_1e8,param_1 + 400);
  }
  else if (param_1[6] == 1) {
    lVar38 = 0;
    puVar44 = &local_238;
    puVar43 = param_1;
    do {
      if (*(char *)((long)param_1 + 0x1061) == '\0') {
        *(undefined1 **)(local_558 + lVar38 * 5 + 200) = &DAT_3f8000003f800000;
        *(undefined1 **)(local_230 + lVar38 * 5) = &DAT_3f8000003f800000;
        local_230[lVar38 * 5 + 2] = 1.0;
      }
      else {
        lVar46 = 0;
        lVar45 = 0x500;
        do {
          fVar94 = (float)puVar43[lVar46 + 0x14];
          puVar43[lVar46 + 0x11] = (uint)((float)puVar43[lVar46 + 0x11] / fVar94);
          puVar43[lVar46 + 0x12] = (uint)((float)puVar43[lVar46 + 0x12] / fVar94);
          fVar76 = (float)puVar43[lVar46 + 0x77];
          fVar50 = (float)puVar43[lVar46 + 0x76];
          puVar43[lVar46 + 0x13] = (uint)((float)puVar43[lVar46 + 0x13] / fVar94);
          puVar43[lVar46 + 0x14] = (uint)(fVar94 / fVar94);
          fVar49 = (float)puVar43[lVar46 + 0x78];
          fVar94 = (float)puVar43[lVar46 + 0x75];
          puVar43[lVar46 + 0x75] = (uint)(fVar94 / fVar49);
          puVar43[lVar46 + 0x76] = (uint)(fVar50 / fVar49);
          puVar43[lVar46 + 0x77] = (uint)(fVar76 / fVar49);
          puVar43[lVar46 + 0x78] = (uint)(fVar49 / fVar49);
          pfVar3 = (float *)((long)puVar43 + lVar45);
          fVar94 = (fVar94 / fVar49) * 0.21258622 + (fVar50 / fVar49) * 0.7151703 +
                   (fVar76 / fVar49) * 0.0722005 + (fVar49 / fVar49) * 0.0;
          if (fVar94 <= 1.0) {
            fVar94 = 1.0;
          }
          fVar94 = (*pfVar3 * 0.21258622 + pfVar3[1] * 0.7151703 + pfVar3[2] * 0.0722005 +
                   pfVar3[3] * 0.0) / fVar94;
          fVar50 = SQRT(fVar94);
          if (NAN(fVar50)) {
            fVar50 = sqrtf(fVar94);
          }
          *(float *)((long)puVar44 + lVar46) = fVar50;
          lVar46 = lVar46 + 4;
          lVar45 = lVar45 + 0x10;
        } while (lVar46 != 0x14);
      }
      lVar38 = lVar38 + 1;
      puVar44 = (undefined8 *)((long)puVar44 + 0x14);
      puVar43 = puVar43 + 0x14;
    } while (lVar38 != 5);
  }
  fVar50 = (float)param_1[9];
  uVar47 = SUB41(local_1dc,0);
  uVar64 = (undefined1)((uint)local_1dc >> 8);
  uVar145 = (undefined1)((uint)local_1dc >> 0x10);
  uVar146 = (undefined1)((uint)local_1dc >> 0x18);
  fVar94 = 1.0;
  if ((float)param_1[0x2a1] + fVar50 <= 1.0) {
    fVar94 = (float)param_1[0x2a1] + fVar50;
  }
  fVar49 = 1.0;
  if (fVar50 + (float)param_1[0x2a2] <= 1.0) {
    fVar49 = fVar50 + (float)param_1[0x2a2];
  }
  param_1[0x2a1] = (uint)fVar94;
  fVar76 = 1.0;
  if (fVar50 + (float)param_1[0x2a3] <= 1.0) {
    fVar76 = fVar50 + (float)param_1[0x2a3];
  }
  param_1[0x2a2] = (uint)fVar49;
  fVar79 = 1.0;
  if (fVar50 + (float)param_1[0x2a4] <= 1.0) {
    fVar79 = fVar50 + (float)param_1[0x2a4];
  }
  param_1[0x2a3] = (uint)fVar76;
  fVar87 = 1.0;
  if (fVar50 + (float)param_1[0x2a5] <= 1.0) {
    fVar87 = fVar50 + (float)param_1[0x2a5];
  }
  param_1[0x2a4] = (uint)fVar79;
  fVar92 = 1.0;
  if (fVar50 + (float)param_1[0x2a6] <= 1.0) {
    fVar92 = fVar50 + (float)param_1[0x2a6];
  }
  fVar112 = fVar50 + (float)param_1[0x2a9];
  param_1[0x2a5] = (uint)fVar87;
  fVar116 = 1.0;
  if (fVar50 + (float)param_1[0x2a7] <= 1.0) {
    fVar116 = fVar50 + (float)param_1[0x2a7];
  }
  param_1[0x2a6] = (uint)fVar92;
  fVar119 = 1.0;
  if (fVar50 + (float)param_1[0x2a8] <= 1.0) {
    fVar119 = fVar50 + (float)param_1[0x2a8];
  }
  fVar121 = fVar50 + (float)param_1[0x2ab];
  param_1[0x2a7] = (uint)fVar116;
  uVar59 = 0;
  uVar61 = 0;
  uVar63 = 0x80;
  uVar66 = 0x3f;
  if (fVar112 <= 1.0) {
    uVar59 = SUB41(fVar112,0);
    uVar61 = (char)((uint)fVar112 >> 8);
    uVar63 = (char)((uint)fVar112 >> 0x10);
    uVar66 = (char)((uint)fVar112 >> 0x18);
  }
  param_1[0x2a8] = (uint)fVar119;
  fVar112 = (float)CONCAT13(uVar66,CONCAT12(uVar63,CONCAT11(uVar61,uVar59)));
  fVar123 = 1.0;
  if (fVar50 + (float)param_1[0x2aa] <= 1.0) {
    fVar123 = fVar50 + (float)param_1[0x2aa];
  }
  uVar59 = 0;
  uVar61 = 0;
  uVar63 = 0x80;
  uVar66 = 0x3f;
  if (fVar121 <= 1.0) {
    uVar59 = SUB41(fVar121,0);
    uVar61 = (char)((uint)fVar121 >> 8);
    uVar63 = (char)((uint)fVar121 >> 0x10);
    uVar66 = (char)((uint)fVar121 >> 0x18);
  }
  fVar121 = 1.0;
  if (fVar50 + (float)param_1[0x2ac] <= 1.0) {
    fVar121 = fVar50 + (float)param_1[0x2ac];
  }
  fVar126 = 1.0;
  if (fVar50 + (float)param_1[0x2ad] <= 1.0) {
    fVar126 = fVar50 + (float)param_1[0x2ad];
  }
  fVar128 = 1.0;
  if (fVar50 + (float)param_1[0x2ae] <= 1.0) {
    fVar128 = fVar50 + (float)param_1[0x2ae];
  }
  fVar130 = 1.0;
  if (fVar50 + (float)param_1[0x2af] <= 1.0) {
    fVar130 = fVar50 + (float)param_1[0x2af];
  }
  uVar67 = (undefined1)((ulong)local_238 >> 0x20);
  uVar69 = (undefined1)((ulong)local_238 >> 0x28);
  uVar71 = (undefined1)((ulong)local_238 >> 0x30);
  uVar73 = (undefined1)((ulong)local_238 >> 0x38);
  uVar58 = SUB41(local_230[0],0);
  uVar60 = (undefined1)((uint)local_230[0] >> 8);
  uVar62 = (undefined1)((uint)local_230[0] >> 0x10);
  uVar65 = (undefined1)((uint)local_230[0] >> 0x18);
  fVar99 = 1.0;
  if (fVar50 + (float)param_1[0x2b0] <= 1.0) {
    fVar99 = fVar50 + (float)param_1[0x2b0];
  }
  fVar95 = 1.0;
  if (fVar50 + (float)param_1[0x2b1] <= 1.0) {
    fVar95 = fVar50 + (float)param_1[0x2b1];
  }
  fVar97 = 1.0;
  if (fVar50 + (float)param_1[0x2b2] <= 1.0) {
    fVar97 = fVar50 + (float)param_1[0x2b2];
  }
  param_1[0x2b1] = (uint)fVar95;
  fVar108 = 1.0;
  if (fVar50 + (float)param_1[0x2b3] <= 1.0) {
    fVar108 = fVar50 + (float)param_1[0x2b3];
  }
  param_1[0x2b2] = (uint)fVar97;
  fVar107 = 1.0;
  if (fVar50 + (float)param_1[0x2b4] <= 1.0) {
    fVar107 = fVar50 + (float)param_1[0x2b4];
  }
  param_1[0x2b3] = (uint)fVar108;
  fVar117 = 1.0;
  if (fVar50 + (float)param_1[0x2b5] <= 1.0) {
    fVar117 = fVar50 + (float)param_1[0x2b5];
  }
  param_1[0x2b4] = (uint)fVar107;
  fVar113 = 1.0;
  if (fVar50 + (float)param_1[0x2b6] <= 1.0) {
    fVar113 = fVar50 + (float)param_1[0x2b6];
  }
  param_1[0x2b5] = (uint)fVar117;
  fVar88 = 1.0;
  if (fVar50 + (float)param_1[0x2b7] <= 1.0) {
    fVar88 = fVar50 + (float)param_1[0x2b7];
  }
  param_1[0x2b6] = (uint)fVar113;
  param_1[0x2b7] = (uint)fVar88;
  fVar89 = 1.0;
  if (fVar50 + (float)param_1[0x2b8] <= 1.0) {
    fVar89 = fVar50 + (float)param_1[0x2b8];
  }
  fVar75 = 1.0;
  if (fVar50 + (float)param_1[0x2b9] <= 1.0) {
    fVar75 = fVar50 + (float)param_1[0x2b9];
  }
  param_1[0x2b8] = (uint)fVar89;
  param_1[0x2b9] = (uint)fVar75;
  uVar68 = SUB41(fVar123,0);
  uVar70 = (undefined1)((uint)fVar123 >> 8);
  uVar72 = (undefined1)((uint)fVar123 >> 0x10);
  uVar74 = (undefined1)((uint)fVar123 >> 0x18);
  if (((char)param_1[4] != '\0') && (*(char *)((long)param_1 + 0x1061) != '\0')) {
    if (param_1[5] == 0) {
      fVar77 = local_230[3];
      fVar93 = uStack_220._4_4_;
      fVar114 = local_1f0;
      fVar115 = local_1f8._4_4_;
      fVar122 = fStack_200;
      fVar124 = fStack_204;
      fVar127 = local_230[1];
      fVar129 = local_208;
      fVar131 = (float)local_210;
      fVar132 = (float)uStack_220;
      fVar147 = fStack_1e0;
      fVar78 = (float)local_218;
      fVar90 = local_218._4_4_;
      fVar133 = local_210._4_4_;
      fVar120 = fStack_1fc;
      fVar118 = (float)local_1f8;
      fVar96 = local_1d8;
      fVar50 = fStack_1e4;
      fVar26 = fStack_1e8;
      fVar28 = (float)local_238;
      fVar27 = local_230[2];
      fVar110 = fStack_1ec;
    }
    else {
      if (param_1[5] != 1) goto LAB_03f49180;
      fVar50 = (float)local_238;
      if ((float)param_1[7] <= (float)local_238) {
        fVar50 = (float)param_1[7];
      }
      fVar26 = local_238._4_4_;
      if (fVar50 <= local_238._4_4_) {
        fVar26 = fVar50;
      }
      fVar50 = local_230[0];
      if (fVar26 <= local_230[0]) {
        fVar50 = fVar26;
      }
      fVar26 = local_230[1];
      if (fVar50 <= local_230[1]) {
        fVar26 = fVar50;
      }
      fVar50 = local_230[2];
      if (fVar26 <= local_230[2]) {
        fVar50 = fVar26;
      }
      fVar26 = local_230[3];
      if (fVar50 <= local_230[3]) {
        fVar26 = fVar50;
      }
      fVar50 = (float)uStack_220;
      if (fVar26 <= (float)uStack_220) {
        fVar50 = fVar26;
      }
      fVar26 = uStack_220._4_4_;
      if (fVar50 <= uStack_220._4_4_) {
        fVar26 = fVar50;
      }
      fVar50 = (float)local_218;
      if (fVar26 <= (float)local_218) {
        fVar50 = fVar26;
      }
      fVar26 = local_218._4_4_;
      if (fVar50 <= local_218._4_4_) {
        fVar26 = fVar50;
      }
      fVar50 = (float)local_210;
      if (fVar26 <= (float)local_210) {
        fVar50 = fVar26;
      }
      fVar26 = local_210._4_4_;
      if (fVar50 <= local_210._4_4_) {
        fVar26 = fVar50;
      }
      fVar50 = local_208;
      if (fVar26 <= local_208) {
        fVar50 = fVar26;
      }
      fVar26 = fStack_204;
      if (fVar50 <= fStack_204) {
        fVar26 = fVar50;
      }
      fVar50 = fStack_200;
      if (fVar26 <= fStack_200) {
        fVar50 = fVar26;
      }
      fVar26 = fStack_1fc;
      if (fVar50 <= fStack_1fc) {
        fVar26 = fVar50;
      }
      fVar50 = (float)local_1f8;
      if (fVar26 <= (float)local_1f8) {
        fVar50 = fVar26;
      }
      fVar26 = local_1f8._4_4_;
      if (fVar50 <= local_1f8._4_4_) {
        fVar26 = fVar50;
      }
      fVar50 = local_1f0;
      if (fVar26 <= local_1f0) {
        fVar50 = fVar26;
      }
      fVar26 = fStack_1ec;
      if (fVar50 <= fStack_1ec) {
        fVar26 = fVar50;
      }
      fVar50 = fStack_1e8;
      if (fVar26 <= fStack_1e8) {
        fVar50 = fVar26;
      }
      fVar26 = fStack_1e4;
      if (fVar50 <= fStack_1e4) {
        fVar26 = fVar50;
      }
      fVar50 = fStack_1e0;
      if (fVar26 <= fStack_1e0) {
        fVar50 = fVar26;
      }
      fVar26 = local_1dc;
      if (fVar50 <= local_1dc) {
        fVar26 = fVar50;
      }
      fVar77 = local_1d8;
      if (fVar26 <= local_1d8) {
        fVar77 = fVar26;
      }
      uVar58 = SUB41(fVar77,0);
      uVar60 = (undefined1)((uint)fVar77 >> 8);
      uVar62 = (undefined1)((uint)fVar77 >> 0x10);
      uVar65 = (undefined1)((uint)fVar77 >> 0x18);
      uVar67 = uVar58;
      uVar69 = uVar60;
      uVar71 = uVar62;
      uVar73 = uVar65;
      fVar93 = fVar77;
      fVar114 = fVar77;
      fVar115 = fVar77;
      fVar122 = fVar77;
      fVar124 = fVar77;
      fVar127 = fVar77;
      fVar129 = fVar77;
      fVar131 = fVar77;
      fVar132 = fVar77;
      uVar47 = uVar58;
      uVar64 = uVar60;
      uVar145 = uVar62;
      uVar146 = uVar65;
      fVar147 = fVar77;
      fVar78 = fVar77;
      fVar90 = fVar77;
      fVar133 = fVar77;
      fVar120 = fVar77;
      fVar118 = fVar77;
      fVar96 = fVar77;
      fVar50 = fVar77;
      fVar26 = fVar77;
      fVar28 = fVar77;
      fVar27 = fVar77;
      fVar110 = fVar77;
    }
    if (fVar94 <= fVar28) {
      fVar28 = fVar94;
    }
    param_1[0x2a1] = (uint)fVar28;
    fVar94 = (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)));
    if (fVar49 <= (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)))) {
      fVar94 = fVar49;
    }
    param_1[0x2a2] = (uint)fVar94;
    fVar94 = (float)CONCAT13(uVar65,CONCAT12(uVar62,CONCAT11(uVar60,uVar58)));
    if (fVar76 <= (float)CONCAT13(uVar65,CONCAT12(uVar62,CONCAT11(uVar60,uVar58)))) {
      fVar94 = fVar76;
    }
    param_1[0x2a3] = (uint)fVar94;
    if (fVar79 <= fVar127) {
      fVar127 = fVar79;
    }
    param_1[0x2a4] = (uint)fVar127;
    if (fVar87 <= fVar27) {
      fVar27 = fVar87;
    }
    param_1[0x2a5] = (uint)fVar27;
    if (fVar92 <= fVar77) {
      fVar77 = fVar92;
    }
    param_1[0x2a6] = (uint)fVar77;
    if (fVar116 <= fVar132) {
      fVar132 = fVar116;
    }
    param_1[0x2a7] = (uint)fVar132;
    if (fVar119 <= fVar93) {
      fVar93 = fVar119;
    }
    if (fVar112 <= fVar78) {
      fVar78 = fVar112;
    }
    param_1[0x2a8] = (uint)fVar93;
    uVar67 = SUB41(fVar90,0);
    uVar69 = (char)((uint)fVar90 >> 8);
    uVar71 = (char)((uint)fVar90 >> 0x10);
    uVar73 = (char)((uint)fVar90 >> 0x18);
    if (fVar123 <= fVar90) {
      uVar67 = uVar68;
      uVar69 = uVar70;
      uVar71 = uVar72;
      uVar73 = uVar74;
    }
    param_1[0x2a9] = (uint)fVar78;
    uVar58 = SUB41(fVar131,0);
    uVar60 = (char)((uint)fVar131 >> 8);
    uVar62 = (char)((uint)fVar131 >> 0x10);
    uVar65 = (char)((uint)fVar131 >> 0x18);
    if ((float)CONCAT13(uVar66,CONCAT12(uVar63,CONCAT11(uVar61,uVar59))) <= fVar131) {
      uVar58 = uVar59;
      uVar60 = uVar61;
      uVar62 = uVar63;
      uVar65 = uVar66;
    }
    param_1[0x2aa] = CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)));
    if (fVar121 <= fVar133) {
      fVar133 = fVar121;
    }
    param_1[0x2ab] = CONCAT13(uVar65,CONCAT12(uVar62,CONCAT11(uVar60,uVar58)));
    if (fVar126 <= fVar129) {
      fVar129 = fVar126;
    }
    param_1[0x2ac] = (uint)fVar133;
    if (fVar128 <= fVar124) {
      fVar124 = fVar128;
    }
    param_1[0x2ad] = (uint)fVar129;
    if (fVar130 <= fVar122) {
      fVar122 = fVar130;
    }
    fVar130 = fVar122;
    param_1[0x2ae] = (uint)fVar124;
    if (fVar99 <= fVar120) {
      fVar120 = fVar99;
    }
    fVar99 = fVar120;
    param_1[0x2af] = (uint)fVar130;
    if (fVar95 <= fVar118) {
      fVar118 = fVar95;
    }
    param_1[0x2b0] = (uint)fVar99;
    param_1[0x2b1] = (uint)fVar118;
    if (fVar97 <= fVar115) {
      fVar115 = fVar97;
    }
    param_1[0x2b2] = (uint)fVar115;
    if (fVar108 <= fVar114) {
      fVar114 = fVar108;
    }
    param_1[0x2b3] = (uint)fVar114;
    if (fVar107 <= fVar110) {
      fVar110 = fVar107;
    }
    param_1[0x2b4] = (uint)fVar110;
    if (fVar117 <= fVar26) {
      fVar26 = fVar117;
    }
    param_1[0x2b5] = (uint)fVar26;
    if (fVar113 <= fVar50) {
      fVar50 = fVar113;
    }
    param_1[0x2b6] = (uint)fVar50;
    if (fVar88 <= fVar147) {
      fVar147 = fVar88;
    }
    param_1[0x2b7] = (uint)fVar147;
    fVar94 = (float)CONCAT13(uVar146,CONCAT12(uVar145,CONCAT11(uVar64,uVar47)));
    if (fVar89 <= (float)CONCAT13(uVar146,CONCAT12(uVar145,CONCAT11(uVar64,uVar47)))) {
      fVar94 = fVar89;
    }
    param_1[0x2b8] = (uint)fVar94;
    if (fVar75 <= fVar96) {
      fVar96 = fVar75;
    }
    param_1[0x2b9] = (uint)fVar96;
    uVar59 = uVar58;
    uVar61 = uVar60;
    uVar63 = uVar62;
    uVar66 = uVar65;
    uVar68 = uVar67;
    uVar70 = uVar69;
    uVar72 = uVar71;
    uVar74 = uVar73;
    fVar112 = fVar78;
    fVar128 = fVar124;
    fVar126 = fVar129;
    fVar121 = fVar133;
  }
LAB_03f49180:
  fVar50 = (float)param_1[7];
  fVar49 = (float)param_1[8];
  uVar35 = param_1[0xd];
  fVar94 = (float)param_1[0x2a1];
  if ((float)param_1[0x2a1] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2a1] = (uint)fVar94;
  fVar94 = (float)param_1[0x2a2];
  if ((float)param_1[0x2a2] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2a2] = (uint)fVar94;
  fVar94 = (float)param_1[0x2a3];
  if ((float)param_1[0x2a3] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2a3] = (uint)fVar94;
  fVar94 = (float)param_1[0x2a4];
  if ((float)param_1[0x2a4] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2a4] = (uint)fVar94;
  fVar94 = (float)param_1[0x2a5];
  if ((float)param_1[0x2a5] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2a5] = (uint)fVar94;
  fVar94 = (float)param_1[0x2a6];
  if ((float)param_1[0x2a6] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2a6] = (uint)fVar94;
  fVar94 = (float)param_1[0x2a7];
  if ((float)param_1[0x2a7] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2a7] = (uint)fVar94;
  fVar94 = (float)param_1[0x2a8];
  if ((float)param_1[0x2a8] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2a8] = (uint)fVar94;
  if (fVar112 <= fVar49) {
    fVar112 = fVar49;
  }
  if (fVar50 <= fVar112) {
    fVar112 = fVar50;
  }
  param_1[0x2a9] = (uint)fVar112;
  fVar94 = (float)CONCAT13(uVar74,CONCAT12(uVar72,CONCAT11(uVar70,uVar68)));
  if ((float)CONCAT13(uVar74,CONCAT12(uVar72,CONCAT11(uVar70,uVar68))) <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2aa] = (uint)fVar94;
  fVar94 = (float)CONCAT13(uVar66,CONCAT12(uVar63,CONCAT11(uVar61,uVar59)));
  if ((float)CONCAT13(uVar66,CONCAT12(uVar63,CONCAT11(uVar61,uVar59))) <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2ab] = (uint)fVar94;
  if (fVar121 <= fVar49) {
    fVar121 = fVar49;
  }
  if (fVar50 <= fVar121) {
    fVar121 = fVar50;
  }
  param_1[0x2ac] = (uint)fVar121;
  if (fVar126 <= fVar49) {
    fVar126 = fVar49;
  }
  if (fVar50 <= fVar126) {
    fVar126 = fVar50;
  }
  param_1[0x2ad] = (uint)fVar126;
  if (fVar128 <= fVar49) {
    fVar128 = fVar49;
  }
  if (fVar50 <= fVar128) {
    fVar128 = fVar50;
  }
  param_1[0x2ae] = (uint)fVar128;
  if (fVar130 <= fVar49) {
    fVar130 = fVar49;
  }
  if (fVar50 <= fVar130) {
    fVar130 = fVar50;
  }
  param_1[0x2af] = (uint)fVar130;
  if (fVar99 <= fVar49) {
    fVar99 = fVar49;
  }
  if (fVar50 <= fVar99) {
    fVar99 = fVar50;
  }
  param_1[0x2b0] = (uint)fVar99;
  fVar94 = (float)param_1[0x2b1];
  if ((float)param_1[0x2b1] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2b1] = (uint)fVar94;
  fVar94 = (float)param_1[0x2b2];
  if ((float)param_1[0x2b2] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2b2] = (uint)fVar94;
  fVar94 = (float)param_1[0x2b3];
  if ((float)param_1[0x2b3] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2b3] = (uint)fVar94;
  fVar94 = (float)param_1[0x2b4];
  if ((float)param_1[0x2b4] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2b4] = (uint)fVar94;
  fVar94 = (float)param_1[0x2b5];
  if ((float)param_1[0x2b5] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2b5] = (uint)fVar94;
  fVar94 = (float)param_1[0x2b6];
  if ((float)param_1[0x2b6] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2b6] = (uint)fVar94;
  fVar94 = (float)param_1[0x2b7];
  if ((float)param_1[0x2b7] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2b7] = (uint)fVar94;
  fVar94 = (float)param_1[0x2b8];
  if ((float)param_1[0x2b8] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2b8] = (uint)fVar94;
  fVar94 = (float)param_1[0x2b9];
  if ((float)param_1[0x2b9] <= fVar49) {
    fVar94 = fVar49;
  }
  if (fVar50 <= fVar94) {
    fVar94 = fVar50;
  }
  param_1[0x2b9] = (uint)fVar94;
  if (0 < (int)uVar35) {
    iVar40 = 0;
    do {
      iVar15 = iVar40 + 1;
      iVar39 = (int)((float)param_1[0x10] * (float)iVar40 + 0.5);
      if (iVar39 == (int)((float)param_1[0x10] * (float)iVar15 + 0.5)) {
        if (0 < iVar39 && (int)(uVar35 - 1) <= iVar40) goto LAB_03f49468;
      }
      else if (0 < iVar39) {
LAB_03f49468:
        if (param_1[6] == 1) {
          iVar40 = (int)((float)(int)uVar35 * 0.25);
          if (iVar40 != 0) {
            uVar125 = param_1[0xc];
            iVar19 = (iVar39 + -1) * 5;
            lVar46 = (long)(int)((float)(int)uVar125 * 0.25);
            fVar94 = 1.0 / (float)(int)(float)(int)((float)(int)uVar35 * 0.25);
            lVar38 = 0;
            do {
              lVar45 = lVar38 + 1;
              fVar76 = (float)param_1[(long)iVar19 + lVar38 + 0x2a1];
              fVar79 = (float)param_1[(long)iVar19 + lVar38 + 0x2a2];
              lVar41 = 0;
              fVar50 = (float)param_1[(long)(iVar19 + 5) + lVar38 + 0x2a1] - fVar76;
              fVar49 = (float)param_1[(long)(iVar19 + 5) + lVar38 + 0x2a2] - fVar79;
              do {
                uVar35 = param_1[0xc];
                uVar33 = 0;
                lVar42 = 0;
                fVar123 = fVar76 * 256.0;
                fVar121 = (1.0 / (float)(int)(float)(int)((float)(int)uVar125 * 0.25)) *
                          (fVar79 - fVar76) * 256.0;
                fVar87 = fVar121 * 8.0;
                fVar126 = fVar123 + fVar121 * 0.0;
                fVar128 = fVar123 + fVar121 * 2.0;
                fVar92 = fVar123 + fVar121;
                fVar112 = fVar123 + fVar121 * 3.0;
                fVar130 = fVar123 + fVar121 * 4.0;
                fVar116 = fVar123 + fVar121 * 5.0;
                fVar119 = fVar123 + fVar121 * 6.0;
                fVar123 = fVar123 + fVar121 * 7.0;
                do {
                  auVar109._0_8_ = CONCAT44((int)fVar92,(int)fVar126);
                  auVar109._8_4_ = (int)fVar128;
                  auVar109._12_4_ = (int)fVar112;
                  pbVar5 = (byte *)((long)__src +
                                   (uVar33 & 0xffffffe0) +
                                   (lVar38 * lVar46 +
                                   (lVar41 + (iVar39 + -1) * iVar40) * (long)(int)uVar35) * 4);
                  iVar7 = (int)fVar130;
                  iVar20 = (int)fVar116;
                  iVar8 = (int)fVar119;
                  iVar9 = (int)fVar123;
                  fVar126 = fVar87 + fVar126;
                  fVar92 = fVar87 + fVar92;
                  fVar128 = fVar87 + fVar128;
                  fVar112 = fVar87 + fVar112;
                  fVar130 = fVar87 + fVar130;
                  fVar116 = fVar87 + fVar116;
                  fVar119 = fVar87 + fVar119;
                  fVar123 = fVar87 + fVar123;
                  lVar42 = lVar42 + 8;
                  auVar111._8_8_ = auVar109._8_8_;
                  auVar111._0_8_ = NEON_uqxtn(auVar109._0_8_,auVar109,4);
                  uVar33 = uVar33 + 0x20;
                  auVar137[4] = (char)iVar20;
                  auVar137._0_4_ = iVar7;
                  auVar137[5] = (char)((uint)iVar20 >> 8);
                  auVar137[6] = (char)((uint)iVar20 >> 0x10);
                  auVar137[7] = (char)((uint)iVar20 >> 0x18);
                  auVar137._8_2_ = (short)iVar8;
                  auVar137._10_2_ = (short)((uint)iVar8 >> 0x10);
                  auVar137._12_2_ = (short)iVar9;
                  auVar137._14_2_ = (short)((uint)iVar9 >> 0x10);
                  auVar137 = NEON_uqxtn2(auVar111,auVar137,4);
                  sVar48 = auVar137._0_2_;
                  sVar51 = auVar137._2_2_;
                  sVar52 = auVar137._4_2_;
                  sVar53 = auVar137._6_2_;
                  sVar54 = auVar137._8_2_;
                  sVar55 = auVar137._10_2_;
                  sVar56 = auVar137._12_2_;
                  sVar57 = auVar137._14_2_;
                  *pbVar5 = (byte)((ushort)(sVar48 * (ushort)*pbVar5) >> 8);
                  pbVar5[1] = (byte)((ushort)(sVar48 * (ushort)pbVar5[1]) >> 8);
                  pbVar5[2] = (byte)((ushort)(sVar48 * (ushort)pbVar5[2]) >> 8);
                  pbVar5[3] = pbVar5[3];
                  pbVar5[4] = (byte)((ushort)(sVar51 * (ushort)pbVar5[4]) >> 8);
                  pbVar5[5] = (byte)((ushort)(sVar51 * (ushort)pbVar5[5]) >> 8);
                  pbVar5[6] = (byte)((ushort)(sVar51 * (ushort)pbVar5[6]) >> 8);
                  pbVar5[7] = pbVar5[7];
                  pbVar5[8] = (byte)((ushort)(sVar52 * (ushort)pbVar5[8]) >> 8);
                  pbVar5[9] = (byte)((ushort)(sVar52 * (ushort)pbVar5[9]) >> 8);
                  pbVar5[10] = (byte)((ushort)(sVar52 * (ushort)pbVar5[10]) >> 8);
                  pbVar5[0xb] = pbVar5[0xb];
                  pbVar5[0xc] = (byte)((ushort)(sVar53 * (ushort)pbVar5[0xc]) >> 8);
                  pbVar5[0xd] = (byte)((ushort)(sVar53 * (ushort)pbVar5[0xd]) >> 8);
                  pbVar5[0xe] = (byte)((ushort)(sVar53 * (ushort)pbVar5[0xe]) >> 8);
                  pbVar5[0xf] = pbVar5[0xf];
                  pbVar5[0x10] = (byte)((ushort)(sVar54 * (ushort)pbVar5[0x10]) >> 8);
                  pbVar5[0x11] = (byte)((ushort)(sVar54 * (ushort)pbVar5[0x11]) >> 8);
                  pbVar5[0x12] = (byte)((ushort)(sVar54 * (ushort)pbVar5[0x12]) >> 8);
                  pbVar5[0x13] = pbVar5[0x13];
                  pbVar5[0x14] = (byte)((ushort)(sVar55 * (ushort)pbVar5[0x14]) >> 8);
                  pbVar5[0x15] = (byte)((ushort)(sVar55 * (ushort)pbVar5[0x15]) >> 8);
                  pbVar5[0x16] = (byte)((ushort)(sVar55 * (ushort)pbVar5[0x16]) >> 8);
                  pbVar5[0x17] = pbVar5[0x17];
                  pbVar5[0x18] = (byte)((ushort)(sVar56 * (ushort)pbVar5[0x18]) >> 8);
                  pbVar5[0x19] = (byte)((ushort)(sVar56 * (ushort)pbVar5[0x19]) >> 8);
                  pbVar5[0x1a] = (byte)((ushort)(sVar56 * (ushort)pbVar5[0x1a]) >> 8);
                  pbVar5[0x1b] = pbVar5[0x1b];
                  pbVar5[0x1c] = (byte)((ushort)(sVar57 * (ushort)pbVar5[0x1c]) >> 8);
                  pbVar5[0x1d] = (byte)((ushort)(sVar57 * (ushort)pbVar5[0x1d]) >> 8);
                  pbVar5[0x1e] = (byte)((ushort)(sVar57 * (ushort)pbVar5[0x1e]) >> 8);
                  pbVar5[0x1f] = pbVar5[0x1f];
                } while (lVar42 < lVar46);
                fVar76 = fVar94 * fVar50 + fVar76;
                fVar79 = fVar94 * fVar49 + fVar79;
                lVar41 = lVar41 + 1;
              } while (lVar41 != iVar40);
              lVar38 = lVar45;
            } while (lVar45 != 4);
          }
        }
        else if (param_1[6] == 2) {
          iVar40 = (int)((float)(int)uVar35 * 0.25);
          if (iVar40 != 0) {
            uVar125 = param_1[0xc];
            iVar19 = (iVar39 + -1) * 5;
            lVar45 = *(long *)(param_1 + 0x13e);
            lVar38 = 0;
            lVar41 = (long)((iVar39 + -1) * iVar40);
            lVar42 = (long)(int)((float)(int)uVar125 * 0.25);
            fVar94 = 1.0 / (float)(int)(float)(int)((float)(int)uVar35 * 0.25);
            lVar46 = 0;
            do {
              lVar2 = lVar46 + 1;
              fVar50 = (float)param_1[(long)iVar19 + lVar46 + 0x2a1];
              fVar49 = (float)param_1[(long)iVar19 + lVar46 + 0x2a2];
              lVar31 = 0;
              fVar76 = (float)param_1[(long)(iVar19 + 5) + lVar46 + 0x2a1] - fVar50;
              fVar79 = (float)param_1[(long)(iVar19 + 5) + lVar46 + 0x2a2] - fVar49;
              lVar32 = lVar41;
              do {
                fVar126 = fVar50 * 128.0;
                uVar35 = param_1[0xc];
                uVar33 = 0;
                lVar34 = 0;
                fVar128 = (1.0 / (float)(int)(float)(int)((float)(int)uVar125 * 0.25)) *
                          (fVar49 - fVar50) * 128.0;
                fVar92 = fVar126 + fVar128 * 0.0;
                fVar112 = fVar126 + fVar128;
                fVar87 = fVar126 + fVar128 * 5.0;
                fVar123 = fVar126 + fVar128 * 6.0;
                fVar116 = fVar126 + fVar128 * 2.0;
                fVar119 = fVar126 + fVar128 * 3.0;
                fVar121 = fVar126 + fVar128 * 4.0;
                fVar126 = fVar126 + fVar128 * 7.0;
                fVar128 = fVar128 * 8.0;
                do {
                  auVar135._0_8_ = CONCAT44((int)fVar112,(int)fVar92);
                  auVar135._8_4_ = (int)fVar116;
                  auVar135._12_4_ = (int)fVar119;
                  puVar4 = (undefined1 *)(lVar45 + (lVar38 + lVar32 * (int)uVar35) * 4 + uVar33);
                  iVar39 = (int)fVar121;
                  iVar7 = (int)fVar87;
                  iVar20 = (int)fVar123;
                  iVar8 = (int)fVar126;
                  lVar34 = lVar34 + 8;
                  bVar98 = puVar4[3];
                  bVar100 = puVar4[7];
                  bVar101 = puVar4[0xb];
                  bVar102 = puVar4[0xf];
                  bVar103 = puVar4[0x13];
                  bVar104 = puVar4[0x17];
                  bVar105 = puVar4[0x1b];
                  bVar106 = puVar4[0x1f];
                  pbVar5 = (byte *)((long)__src +
                                   (uVar33 & 0xffffffe0) +
                                   (lVar46 * lVar42 + (lVar31 + lVar41) * (long)(int)uVar35) * 4);
                  fVar92 = fVar128 + fVar92;
                  fVar112 = fVar128 + fVar112;
                  fVar116 = fVar128 + fVar116;
                  fVar119 = fVar128 + fVar119;
                  uVar33 = uVar33 + 0x20;
                  auVar136._8_8_ = auVar135._8_8_;
                  auVar136._0_8_ = NEON_uqxtn(auVar135._0_8_,auVar135,4);
                  fVar121 = fVar128 + fVar121;
                  fVar87 = fVar128 + fVar87;
                  fVar123 = fVar128 + fVar123;
                  fVar126 = fVar128 + fVar126;
                  auVar22[4] = (char)iVar7;
                  auVar22._0_4_ = iVar39;
                  auVar22[5] = (char)((uint)iVar7 >> 8);
                  auVar22[6] = (char)((uint)iVar7 >> 0x10);
                  auVar22[7] = (char)((uint)iVar7 >> 0x18);
                  auVar22._8_2_ = (short)iVar20;
                  auVar22._10_2_ = (short)((uint)iVar20 >> 0x10);
                  auVar22._12_2_ = (short)iVar8;
                  auVar22._14_2_ = (short)((uint)iVar8 >> 0x10);
                  auVar137 = NEON_uqxtn2(auVar136,auVar22,4);
                  uVar134 = NEON_uqxtn(auVar137._0_8_,auVar137,2);
                  bVar138 = (byte)((ulong)uVar134 >> 8);
                  bVar139 = (byte)((ulong)uVar134 >> 0x10);
                  bVar140 = (byte)((ulong)uVar134 >> 0x18);
                  bVar141 = (byte)((ulong)uVar134 >> 0x20);
                  bVar142 = (byte)((ulong)uVar134 >> 0x28);
                  bVar143 = (byte)((ulong)uVar134 >> 0x30);
                  bVar144 = (byte)((ulong)uVar134 >> 0x38);
                  uVar91 = CONCAT17(-0x80 - bVar144,
                                    CONCAT16(-0x80 - bVar143,
                                             CONCAT15(-0x80 - bVar142,
                                                      CONCAT14(-0x80 - bVar141,
                                                               CONCAT13(-0x80 - bVar140,
                                                                        CONCAT12(-0x80 - bVar139,
                                                                                 CONCAT11(-0x80 - 
                                                  bVar138,-0x80 - (byte)uVar134)))))));
                  auVar109 = NEON_umull(uVar91,CONCAT17(puVar4[0x1c],
                                                        CONCAT16(puVar4[0x18],
                                                                 CONCAT15(puVar4[0x14],
                                                                          CONCAT14(puVar4[0x10],
                                                                                   CONCAT13(puVar4[
                                                  0xc],CONCAT12(puVar4[8],
                                                                CONCAT11(puVar4[4],*puVar4))))))),1)
                  ;
                  auVar137 = NEON_umull(uVar91,CONCAT17(puVar4[0x1d],
                                                        CONCAT16(puVar4[0x19],
                                                                 CONCAT15(puVar4[0x15],
                                                                          CONCAT14(puVar4[0x11],
                                                                                   CONCAT13(puVar4[
                                                  0xd],CONCAT12(puVar4[9],
                                                                CONCAT11(puVar4[5],puVar4[1]))))))),
                                        1);
                  auVar111 = NEON_umull(uVar91,CONCAT17(puVar4[0x1e],
                                                        CONCAT16(puVar4[0x1a],
                                                                 CONCAT15(puVar4[0x16],
                                                                          CONCAT14(puVar4[0x12],
                                                                                   CONCAT13(puVar4[
                                                  0xe],CONCAT12(puVar4[10],
                                                                CONCAT11(puVar4[6],puVar4[2]))))))),
                                        1);
                  uVar24 = CONCAT12(bVar138,(short)uVar134) & 0xff00ff;
                  uVar25 = CONCAT12(bVar138,(short)uVar134) & 0xff00ff;
                  *pbVar5 = (byte)((ushort)(auVar109._0_2_ + (short)uVar24 * (ushort)*pbVar5) >> 7);
                  pbVar5[1] = (byte)((ushort)(auVar137._0_2_ +
                                             (ushort)(byte)uVar134 * (ushort)pbVar5[1]) >> 7);
                  pbVar5[2] = (byte)((ushort)(auVar111._0_2_ + (short)uVar25 * (ushort)pbVar5[2]) >>
                                    7);
                  pbVar5[3] = bVar98;
                  pbVar5[4] = (byte)((ushort)(auVar109._2_2_ +
                                             (ushort)(byte)(uVar24 >> 0x10) * (ushort)pbVar5[4]) >>
                                    7);
                  pbVar5[5] = (byte)((ushort)(auVar137._2_2_ + (ushort)bVar138 * (ushort)pbVar5[5])
                                    >> 7);
                  pbVar5[6] = (byte)((ushort)(auVar111._2_2_ +
                                             (ushort)(byte)(uVar25 >> 0x10) * (ushort)pbVar5[6]) >>
                                    7);
                  pbVar5[7] = bVar100;
                  pbVar5[8] = (byte)((ushort)(auVar109._4_2_ + (ushort)bVar139 * (ushort)pbVar5[8])
                                    >> 7);
                  pbVar5[9] = (byte)((ushort)(auVar137._4_2_ + (ushort)bVar139 * (ushort)pbVar5[9])
                                    >> 7);
                  pbVar5[10] = (byte)((ushort)(auVar111._4_2_ + (ushort)bVar139 * (ushort)pbVar5[10]
                                              ) >> 7);
                  pbVar5[0xb] = bVar101;
                  pbVar5[0xc] = (byte)((ushort)(auVar109._6_2_ +
                                               (ushort)bVar140 * (ushort)pbVar5[0xc]) >> 7);
                  pbVar5[0xd] = (byte)((ushort)(auVar137._6_2_ +
                                               (ushort)bVar140 * (ushort)pbVar5[0xd]) >> 7);
                  pbVar5[0xe] = (byte)((ushort)(auVar111._6_2_ +
                                               (ushort)bVar140 * (ushort)pbVar5[0xe]) >> 7);
                  pbVar5[0xf] = bVar102;
                  pbVar5[0x10] = (byte)((ushort)(auVar109._8_2_ +
                                                (ushort)bVar141 * (ushort)pbVar5[0x10]) >> 7);
                  pbVar5[0x11] = (byte)((ushort)(auVar137._8_2_ +
                                                (ushort)bVar141 * (ushort)pbVar5[0x11]) >> 7);
                  pbVar5[0x12] = (byte)((ushort)(auVar111._8_2_ +
                                                (ushort)bVar141 * (ushort)pbVar5[0x12]) >> 7);
                  pbVar5[0x13] = bVar103;
                  pbVar5[0x14] = (byte)((ushort)(auVar109._10_2_ +
                                                (ushort)bVar142 * (ushort)pbVar5[0x14]) >> 7);
                  pbVar5[0x15] = (byte)((ushort)(auVar137._10_2_ +
                                                (ushort)bVar142 * (ushort)pbVar5[0x15]) >> 7);
                  pbVar5[0x16] = (byte)((ushort)(auVar111._10_2_ +
                                                (ushort)bVar142 * (ushort)pbVar5[0x16]) >> 7);
                  pbVar5[0x17] = bVar104;
                  pbVar5[0x18] = (byte)((ushort)(auVar109._12_2_ +
                                                (ushort)bVar143 * (ushort)pbVar5[0x18]) >> 7);
                  pbVar5[0x19] = (byte)((ushort)(auVar137._12_2_ +
                                                (ushort)bVar143 * (ushort)pbVar5[0x19]) >> 7);
                  pbVar5[0x1a] = (byte)((ushort)(auVar111._12_2_ +
                                                (ushort)bVar143 * (ushort)pbVar5[0x1a]) >> 7);
                  pbVar5[0x1b] = bVar105;
                  pbVar5[0x1c] = (byte)((ushort)(auVar109._14_2_ +
                                                (ushort)bVar144 * (ushort)pbVar5[0x1c]) >> 7);
                  pbVar5[0x1d] = (byte)((ushort)(auVar137._14_2_ +
                                                (ushort)bVar144 * (ushort)pbVar5[0x1d]) >> 7);
                  pbVar5[0x1e] = (byte)((ushort)(auVar111._14_2_ +
                                                (ushort)bVar144 * (ushort)pbVar5[0x1e]) >> 7);
                  pbVar5[0x1f] = bVar106;
                } while (lVar34 < lVar42);
                fVar50 = fVar94 * fVar76 + fVar50;
                fVar49 = fVar94 * fVar79 + fVar49;
                lVar31 = lVar31 + 1;
                lVar32 = lVar32 + 1;
              } while (lVar31 != iVar40);
              lVar38 = lVar38 + lVar42;
              lVar46 = lVar2;
            } while (lVar2 != 4);
          }
        }
      }
      uVar35 = param_1[0xd];
      iVar40 = iVar15;
    } while (iVar15 < (int)uVar35);
  }
  memcpy(*(void **)(param_1 + 0x13e),__src,(long)(int)param_1[0xb] * (long)(int)uVar35);
  return;
}

