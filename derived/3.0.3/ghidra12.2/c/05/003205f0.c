
void FUN_003205f0(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,uint param_5)

{
  undefined1 (*pauVar1) [12];
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  undefined2 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar34;
  int iVar35;
  ulong uVar36;
  int iVar37;
  ulong uVar38;
  byte *pbVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
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
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  byte bVar72;
  byte bVar75;
  byte bVar76;
  int iVar73;
  byte bVar77;
  float fVar74;
  byte bVar78;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  float fVar79;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar89;
  byte bVar90;
  int iVar88;
  byte bVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
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
  undefined8 uVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined4 uVar121;
  undefined1 auVar122 [12];
  undefined1 auVar123 [16];
  undefined8 uVar124;
  undefined1 auVar126 [12];
  undefined8 uVar125;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float fVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  undefined8 uVar133;
  float fVar136;
  float fVar137;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar138;
  undefined8 uVar139;
  undefined8 uVar140;
  float fVar141;
  float fVar142;
  undefined8 uVar143;
  undefined8 local_50;
  ulong uStack_48;
  
  uVar38 = (ulong)param_5;
  pbVar39 = *(byte **)(*(long *)(param_3 + 0x240) + 0x280);
  fVar27 = *(float *)(pbVar39 + 0x20);
  uVar40 = SUB41(fVar27,0);
  uVar41 = (undefined1)((uint)fVar27 >> 8);
  uVar42 = (undefined1)((uint)fVar27 >> 0x10);
  uVar43 = (undefined1)((uint)fVar27 >> 0x18);
  if ((pbVar39[1] & 1) != 0) {
    fVar27 = fVar27 * *(float *)(*(long *)(param_4 + 0x20) +
                                (-(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | uVar38 << 4));
    uVar40 = SUB41(fVar27,0);
    uVar41 = (undefined1)((uint)fVar27 >> 8);
    uVar42 = (undefined1)((uint)fVar27 >> 0x10);
    uVar43 = (undefined1)((uint)fVar27 >> 0x18);
  }
  fVar14 = (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40)));
  fVar20 = *(float *)(param_3 + 0x44);
  fVar142 = *(float *)(param_3 + 0x48);
  uVar143 = *(undefined8 *)(pbVar39 + 0x10);
  fVar92 = *(float *)(pbVar39 + 0x1c);
  uVar29 = param_1[1];
  uVar48 = (undefined1)uVar29;
  uVar49 = (undefined1)((ulong)uVar29 >> 8);
  uVar50 = (undefined1)((ulong)uVar29 >> 0x10);
  uVar51 = (undefined1)((ulong)uVar29 >> 0x18);
  uVar28 = *param_1;
  uVar40 = (undefined1)uVar28;
  uVar41 = (undefined1)((ulong)uVar28 >> 8);
  uVar42 = (undefined1)((ulong)uVar28 >> 0x10);
  uVar43 = (undefined1)((ulong)uVar28 >> 0x18);
  uVar44 = (undefined1)((ulong)uVar28 >> 0x20);
  uVar45 = (undefined1)((ulong)uVar28 >> 0x28);
  uVar46 = (undefined1)((ulong)uVar28 >> 0x30);
  uVar47 = (undefined1)((ulong)uVar28 >> 0x38);
  fVar27 = *(float *)(pbVar39 + 0x18);
  if (pbVar39[2] == 0) goto LAB_0032073c;
  uVar36 = -(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | uVar38 << 4;
  puVar2 = (undefined4 *)(*(long *)(param_3 + 0x210) + uVar36);
  puVar3 = (undefined4 *)(*(long *)(param_3 + 0x218) + uVar36);
  pfVar4 = (float *)(*(long *)(param_3 + 0x220) + uVar36);
  cVar7 = *(char *)(*(long *)(param_3 + 0xa0) + 0x793);
  if (cVar7 == '\x02') {
    pauVar1 = (undefined1 (*) [12])(param_3 + 0x400);
    uVar121 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x408) >> 0x20);
    fVar118 = (float)*(undefined8 *)*pauVar1;
    fVar119 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar127._12_4_ = uVar121;
    auVar127._0_12_ = *pauVar1;
    auVar134._12_4_ = uVar121;
    auVar134._0_12_ = *pauVar1;
    auVar127 = NEON_ext(auVar127,auVar134,8,1);
    uVar115 = CONCAT44(*puVar3,*puVar2);
    fVar117 = *pfVar4;
    fVar120 = auVar127._0_4_;
    uVar125 = CONCAT44(puVar3[2],puVar2[2]);
    uVar124 = CONCAT44(puVar3[1],puVar2[1]);
LAB_00320724:
    auVar126._8_4_ = pfVar4[2];
    auVar126._0_8_ = uVar125;
    auVar122._8_4_ = pfVar4[1];
    auVar122._0_8_ = uVar124;
  }
  else {
    if (cVar7 != '\0') {
      uVar115 = CONCAT44(*puVar3,*puVar2);
      fVar117 = *pfVar4;
      fVar118 = (float)puVar2[3];
      uVar125 = CONCAT44(puVar3[2],puVar2[2]);
      fVar119 = (float)puVar3[3];
      uVar124 = CONCAT44(puVar3[1],puVar2[1]);
      fVar120 = pfVar4[3];
      goto LAB_00320724;
    }
    fVar117 = (float)*(undefined8 *)(param_3 + 0x3d8);
    uVar115 = *(undefined8 *)(param_3 + 0x3d0);
    auVar122 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x3e0),0);
    auVar126 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x3f0),0);
    fVar120 = (float)*(undefined8 *)(param_3 + 0x408);
    fVar118 = (float)*(undefined8 *)(param_3 + 0x400);
    fVar119 = (float)((ulong)*(undefined8 *)(param_3 + 0x400) >> 0x20);
  }
  fVar21 = (float)uVar28;
  fVar74 = (float)((ulong)uVar28 >> 0x20);
  fVar79 = (float)uVar29;
  fVar118 = fVar118 + (float)uVar115 * fVar21 + auVar122._0_4_ * fVar74 + auVar126._0_4_ * fVar79;
  uVar40 = SUB41(fVar118,0);
  uVar41 = (undefined1)((uint)fVar118 >> 8);
  uVar42 = (undefined1)((uint)fVar118 >> 0x10);
  uVar43 = (undefined1)((uint)fVar118 >> 0x18);
  fVar119 = fVar119 + (float)((ulong)uVar115 >> 0x20) * fVar21 + auVar122._4_4_ * fVar74 +
                      auVar126._4_4_ * fVar79;
  uVar44 = SUB41(fVar119,0);
  uVar45 = (undefined1)((uint)fVar119 >> 8);
  uVar46 = (undefined1)((uint)fVar119 >> 0x10);
  uVar47 = (undefined1)((uint)fVar119 >> 0x18);
  fVar120 = fVar120 + fVar117 * fVar21 + auVar122._8_4_ * fVar74 + auVar126._8_4_ * fVar79;
  uVar48 = SUB41(fVar120,0);
  uVar49 = (undefined1)((uint)fVar120 >> 8);
  uVar50 = (undefined1)((uint)fVar120 >> 0x10);
  uVar51 = (undefined1)((uint)fVar120 >> 0x18);
LAB_0032073c:
  fVar118 = fVar14 + (float)*(undefined8 *)(pbVar39 + 4) * fVar20 +
                     (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) * fVar92;
  fVar119 = fVar14 + (float)((ulong)*(undefined8 *)(pbVar39 + 4) >> 0x20) * fVar20 +
                     (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) * fVar92;
  fVar14 = fVar14 + *(float *)(pbVar39 + 0xc) * fVar20 +
                    (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) * fVar92;
  if ((*pbVar39 & 1) == 0) {
    iVar34 = (int)fVar118;
    iVar73 = -iVar34;
    if (-1 < iVar34) {
      iVar73 = iVar34;
    }
    iVar35 = (int)fVar119;
    iVar34 = 0;
    if (DAT_04c61958 != 0) {
      iVar34 = iVar73 / DAT_04c61958;
    }
    iVar37 = (int)fVar14;
    iVar88 = -iVar35;
    if (-1 < iVar35) {
      iVar88 = iVar35;
    }
    iVar35 = -iVar37;
    if (-1 < iVar37) {
      iVar35 = iVar37;
    }
    iVar37 = 0;
    if (DAT_04c61958 != 0) {
      iVar37 = iVar88 / DAT_04c61958;
    }
    iVar8 = 0;
    if (DAT_04c61958 != 0) {
      iVar8 = iVar35 / DAT_04c61958;
    }
    iVar73 = (iVar35 - iVar8 * DAT_04c61958) +
             ((iVar88 - iVar37 * DAT_04c61958) + (iVar73 - iVar34 * DAT_04c61958) * DAT_04c61958) *
             DAT_04c61958;
    pcVar5 = (char *)(DAT_04c61960 + (long)iVar73 + (long)iVar73 * 2);
    local_50 = CONCAT44((float)(int)pcVar5[1] / 127.0,(float)(int)*pcVar5 / 127.0);
    uStack_48 = (ulong)(uint)((float)(int)pcVar5[2] / 127.0);
    bVar72 = pbVar39[2];
  }
  else {
    FUN_00320a28(SUB41(fVar118,0),SUB41(fVar119,0),fVar14,PTR_DAT_04bcee08,&local_50);
    bVar72 = pbVar39[2];
  }
  if (bVar72 == 0) {
    uVar48 = (undefined1)uStack_48;
    uVar49 = (undefined1)(uStack_48 >> 8);
    uVar50 = (undefined1)(uStack_48 >> 0x10);
    uVar51 = (undefined1)(uStack_48 >> 0x18);
    uVar52 = (undefined1)(uStack_48 >> 0x20);
    uVar53 = (undefined1)(uStack_48 >> 0x28);
    uVar54 = (undefined1)(uStack_48 >> 0x30);
    uVar55 = (undefined1)(uStack_48 >> 0x38);
    uVar40 = (undefined1)local_50;
    uVar41 = (undefined1)((ulong)local_50 >> 8);
    uVar42 = (undefined1)((ulong)local_50 >> 0x10);
    uVar43 = (undefined1)((ulong)local_50 >> 0x18);
    uVar44 = (undefined1)((ulong)local_50 >> 0x20);
    uVar45 = (undefined1)((ulong)local_50 >> 0x28);
    uVar46 = (undefined1)((ulong)local_50 >> 0x30);
    uVar47 = (undefined1)((ulong)local_50 >> 0x38);
  }
  else {
    uVar38 = -(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | uVar38 << 4;
    puVar2 = (undefined4 *)(*(long *)(param_3 + 0x210) + uVar38);
    puVar3 = (undefined4 *)(*(long *)(param_3 + 0x218) + uVar38);
    puVar6 = (undefined4 *)(*(long *)(param_3 + 0x220) + uVar38);
    cVar7 = *(char *)(*(long *)(param_3 + 0xa0) + 0x793);
    if ((cVar7 == '\x02') || (cVar7 != '\0')) {
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar121 = *puVar2;
      uVar40 = (undefined1)uVar121;
      uVar41 = (undefined1)((uint)uVar121 >> 8);
      uVar42 = (undefined1)((uint)uVar121 >> 0x10);
      uVar43 = (undefined1)((uint)uVar121 >> 0x18);
      uVar121 = *puVar3;
      uVar44 = (undefined1)uVar121;
      uVar45 = (undefined1)((uint)uVar121 >> 8);
      uVar46 = (undefined1)((uint)uVar121 >> 0x10);
      uVar47 = (undefined1)((uint)uVar121 >> 0x18);
      uVar121 = *puVar6;
      uVar48 = (undefined1)uVar121;
      uVar49 = (undefined1)((uint)uVar121 >> 8);
      uVar50 = (undefined1)((uint)uVar121 >> 0x10);
      uVar51 = (undefined1)((uint)uVar121 >> 0x18);
      uVar121 = puVar2[2];
      uVar99 = (undefined1)uVar121;
      uVar100 = (undefined1)((uint)uVar121 >> 8);
      uVar101 = (undefined1)((uint)uVar121 >> 0x10);
      uVar102 = (undefined1)((uint)uVar121 >> 0x18);
      uVar111 = 0;
      uVar112 = 0;
      uVar113 = 0;
      uVar114 = 0;
      uVar121 = puVar3[2];
      uVar103 = (undefined1)uVar121;
      uVar104 = (undefined1)((uint)uVar121 >> 8);
      uVar105 = (undefined1)((uint)uVar121 >> 0x10);
      uVar106 = (undefined1)((uint)uVar121 >> 0x18);
      uVar121 = puVar2[1];
      uVar56 = (undefined1)uVar121;
      uVar57 = (undefined1)((uint)uVar121 >> 8);
      uVar58 = (undefined1)((uint)uVar121 >> 0x10);
      uVar59 = (undefined1)((uint)uVar121 >> 0x18);
      uVar68 = 0;
      uVar69 = 0;
      uVar70 = 0;
      uVar71 = 0;
      uVar121 = puVar3[1];
      uVar60 = (undefined1)uVar121;
      uVar61 = (undefined1)((uint)uVar121 >> 8);
      uVar62 = (undefined1)((uint)uVar121 >> 0x10);
      uVar63 = (undefined1)((uint)uVar121 >> 0x18);
      uVar121 = puVar6[2];
      uVar107 = (undefined1)uVar121;
      uVar108 = (undefined1)((uint)uVar121 >> 8);
      uVar109 = (undefined1)((uint)uVar121 >> 0x10);
      uVar110 = (undefined1)((uint)uVar121 >> 0x18);
      uVar121 = puVar6[1];
      uVar64 = (undefined1)uVar121;
      uVar65 = (undefined1)((uint)uVar121 >> 8);
      uVar66 = (undefined1)((uint)uVar121 >> 0x10);
      uVar67 = (undefined1)((uint)uVar121 >> 0x18);
    }
    else {
      uVar28 = *(undefined8 *)(param_3 + 0x3d8);
      uVar48 = (undefined1)uVar28;
      uVar49 = (undefined1)((ulong)uVar28 >> 8);
      uVar50 = (undefined1)((ulong)uVar28 >> 0x10);
      uVar51 = (undefined1)((ulong)uVar28 >> 0x18);
      uVar52 = (undefined1)((ulong)uVar28 >> 0x20);
      uVar53 = (undefined1)((ulong)uVar28 >> 0x28);
      uVar54 = (undefined1)((ulong)uVar28 >> 0x30);
      uVar55 = (undefined1)((ulong)uVar28 >> 0x38);
      uVar28 = *(undefined8 *)(param_3 + 0x3d0);
      uVar40 = (undefined1)uVar28;
      uVar41 = (undefined1)((ulong)uVar28 >> 8);
      uVar42 = (undefined1)((ulong)uVar28 >> 0x10);
      uVar43 = (undefined1)((ulong)uVar28 >> 0x18);
      uVar44 = (undefined1)((ulong)uVar28 >> 0x20);
      uVar45 = (undefined1)((ulong)uVar28 >> 0x28);
      uVar46 = (undefined1)((ulong)uVar28 >> 0x30);
      uVar47 = (undefined1)((ulong)uVar28 >> 0x38);
      uVar28 = *(undefined8 *)(param_3 + 1000);
      uVar64 = (undefined1)uVar28;
      uVar65 = (undefined1)((ulong)uVar28 >> 8);
      uVar66 = (undefined1)((ulong)uVar28 >> 0x10);
      uVar67 = (undefined1)((ulong)uVar28 >> 0x18);
      uVar68 = (undefined1)((ulong)uVar28 >> 0x20);
      uVar69 = (undefined1)((ulong)uVar28 >> 0x28);
      uVar70 = (undefined1)((ulong)uVar28 >> 0x30);
      uVar71 = (undefined1)((ulong)uVar28 >> 0x38);
      uVar28 = *(undefined8 *)(param_3 + 0x3e0);
      uVar56 = (undefined1)uVar28;
      uVar57 = (undefined1)((ulong)uVar28 >> 8);
      uVar58 = (undefined1)((ulong)uVar28 >> 0x10);
      uVar59 = (undefined1)((ulong)uVar28 >> 0x18);
      uVar60 = (undefined1)((ulong)uVar28 >> 0x20);
      uVar61 = (undefined1)((ulong)uVar28 >> 0x28);
      uVar62 = (undefined1)((ulong)uVar28 >> 0x30);
      uVar63 = (undefined1)((ulong)uVar28 >> 0x38);
      uVar28 = *(undefined8 *)(param_3 + 0x3f8);
      uVar107 = (undefined1)uVar28;
      uVar108 = (undefined1)((ulong)uVar28 >> 8);
      uVar109 = (undefined1)((ulong)uVar28 >> 0x10);
      uVar110 = (undefined1)((ulong)uVar28 >> 0x18);
      uVar111 = (undefined1)((ulong)uVar28 >> 0x20);
      uVar112 = (undefined1)((ulong)uVar28 >> 0x28);
      uVar113 = (undefined1)((ulong)uVar28 >> 0x30);
      uVar114 = (undefined1)((ulong)uVar28 >> 0x38);
      uVar28 = *(undefined8 *)(param_3 + 0x3f0);
      uVar99 = (undefined1)uVar28;
      uVar100 = (undefined1)((ulong)uVar28 >> 8);
      uVar101 = (undefined1)((ulong)uVar28 >> 0x10);
      uVar102 = (undefined1)((ulong)uVar28 >> 0x18);
      uVar103 = (undefined1)((ulong)uVar28 >> 0x20);
      uVar104 = (undefined1)((ulong)uVar28 >> 0x28);
      uVar105 = (undefined1)((ulong)uVar28 >> 0x30);
      uVar106 = (undefined1)((ulong)uVar28 >> 0x38);
    }
    auVar15[1] = uVar57;
    auVar15[0] = uVar56;
    auVar15[2] = uVar58;
    auVar15[3] = uVar59;
    auVar15[4] = uVar60;
    auVar15[5] = uVar61;
    auVar15[6] = uVar62;
    auVar15[7] = uVar63;
    auVar15[8] = uVar64;
    auVar15[9] = uVar65;
    auVar15[10] = uVar66;
    auVar15[0xb] = uVar67;
    auVar15[0xc] = uVar68;
    auVar15[0xd] = uVar69;
    auVar15[0xe] = uVar70;
    auVar15[0xf] = uVar71;
    uVar115 = a64_TBL(ZEXT816(0),auVar15,DAT_04101580);
    auVar16[1] = uVar57;
    auVar16[0] = uVar56;
    auVar16[2] = uVar58;
    auVar16[3] = uVar59;
    auVar16[4] = uVar60;
    auVar16[5] = uVar61;
    auVar16[6] = uVar62;
    auVar16[7] = uVar63;
    auVar16[8] = uVar64;
    auVar16[9] = uVar65;
    auVar16[10] = uVar66;
    auVar16[0xb] = uVar67;
    auVar16[0xc] = uVar68;
    auVar16[0xd] = uVar69;
    auVar16[0xe] = uVar70;
    auVar16[0xf] = uVar71;
    uVar28 = a64_TBL(ZEXT816(0),auVar16,DAT_041015c8);
    auVar22[1] = uVar100;
    auVar22[0] = uVar99;
    auVar22[2] = uVar101;
    auVar22[3] = uVar102;
    auVar22[4] = uVar103;
    auVar22[5] = uVar104;
    auVar22[6] = uVar105;
    auVar22[7] = uVar106;
    auVar22[8] = uVar107;
    auVar22[9] = uVar108;
    auVar22[10] = uVar109;
    auVar22[0xb] = uVar110;
    auVar22[0xc] = uVar111;
    auVar22[0xd] = uVar112;
    auVar22[0xe] = uVar113;
    auVar22[0xf] = uVar114;
    uVar29 = a64_TBL(ZEXT816(0),auVar22,DAT_041015c8);
    auVar23[1] = uVar100;
    auVar23[0] = uVar99;
    auVar23[2] = uVar101;
    auVar23[3] = uVar102;
    auVar23[4] = uVar103;
    auVar23[5] = uVar104;
    auVar23[6] = uVar105;
    auVar23[7] = uVar106;
    auVar23[8] = uVar107;
    auVar23[9] = uVar108;
    auVar23[10] = uVar109;
    auVar23[0xb] = uVar110;
    auVar23[0xc] = uVar111;
    auVar23[0xd] = uVar112;
    auVar23[0xe] = uVar113;
    auVar23[0xf] = uVar114;
    uVar124 = a64_TBL(ZEXT816(0),auVar23,DAT_04101598);
    auVar24[1] = uVar100;
    auVar24[0] = uVar99;
    auVar24[2] = uVar101;
    auVar24[3] = uVar102;
    auVar24[4] = uVar103;
    auVar24[5] = uVar104;
    auVar24[6] = uVar105;
    auVar24[7] = uVar106;
    auVar24[8] = uVar107;
    auVar24[9] = uVar108;
    auVar24[10] = uVar109;
    auVar24[0xb] = uVar110;
    auVar24[0xc] = uVar111;
    auVar24[0xd] = uVar112;
    auVar24[0xe] = uVar113;
    auVar24[0xf] = uVar114;
    uVar130 = a64_TBL(ZEXT816(0),auVar24,DAT_041016a0);
    auVar17[1] = uVar57;
    auVar17[0] = uVar56;
    auVar17[2] = uVar58;
    auVar17[3] = uVar59;
    auVar17[4] = uVar60;
    auVar17[5] = uVar61;
    auVar17[6] = uVar62;
    auVar17[7] = uVar63;
    auVar17[8] = uVar64;
    auVar17[9] = uVar65;
    auVar17[10] = uVar66;
    auVar17[0xb] = uVar67;
    auVar17[0xc] = uVar68;
    auVar17[0xd] = uVar69;
    auVar17[0xe] = uVar70;
    auVar17[0xf] = uVar71;
    uVar131 = a64_TBL(ZEXT816(0),auVar17,DAT_041016a0);
    auVar18[1] = uVar57;
    auVar18[0] = uVar56;
    auVar18[2] = uVar58;
    auVar18[3] = uVar59;
    auVar18[4] = uVar60;
    auVar18[5] = uVar61;
    auVar18[6] = uVar62;
    auVar18[7] = uVar63;
    auVar18[8] = uVar64;
    auVar18[9] = uVar65;
    auVar18[10] = uVar66;
    auVar18[0xb] = uVar67;
    auVar18[0xc] = uVar68;
    auVar18[0xd] = uVar69;
    auVar18[0xe] = uVar70;
    auVar18[0xf] = uVar71;
    uVar125 = a64_TBL(ZEXT816(0),auVar18,DAT_04101598);
    auVar25[1] = uVar100;
    auVar25[0] = uVar99;
    auVar25[2] = uVar101;
    auVar25[3] = uVar102;
    auVar25[4] = uVar103;
    auVar25[5] = uVar104;
    auVar25[6] = uVar105;
    auVar25[7] = uVar106;
    auVar25[8] = uVar107;
    auVar25[9] = uVar108;
    auVar25[10] = uVar109;
    auVar25[0xb] = uVar110;
    auVar25[0xc] = uVar111;
    auVar25[0xd] = uVar112;
    auVar25[0xe] = uVar113;
    auVar25[0xf] = uVar114;
    uVar132 = a64_TBL(ZEXT816(0),auVar25,DAT_04101580);
    uVar26 = CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)));
    uVar121 = CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40)));
    auVar123._0_4_ =
         ((float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) * (float)uVar115 *
          (float)uVar124 -
         (float)uVar125 * (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) *
         (float)uVar132) +
         ((float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) *
          (float)((ulong)uVar115 >> 0x20) * (float)((ulong)uVar124 >> 0x20) -
         (float)((ulong)uVar125 >> 0x20) *
         (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) *
         (float)((ulong)uVar132 >> 0x20)) +
         ((float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) * (float)uVar28 *
          (float)uVar130 -
         (float)uVar131 * (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) *
         (float)uVar29) +
         ((float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) *
          (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar130 >> 0x20) -
         (float)((ulong)uVar131 >> 0x20) *
         (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) *
         (float)((ulong)uVar29 >> 0x20));
    auVar123._4_4_ = auVar123._0_4_;
    auVar123._8_4_ = auVar123._0_4_;
    auVar123._12_4_ = auVar123._0_4_;
    auVar127 = NEON_frecpe(auVar123,4);
    auVar134 = NEON_frecps(auVar127,auVar123,4);
    auVar128._0_4_ = auVar127._0_4_ * auVar134._0_4_;
    auVar128._4_4_ = auVar127._4_4_ * auVar134._4_4_;
    auVar128._8_4_ = auVar127._8_4_ * auVar134._8_4_;
    auVar128._12_4_ = auVar127._12_4_ * auVar134._12_4_;
    auVar127 = NEON_frecps(auVar128,auVar123,4);
    fVar92 = auVar128._0_4_ * auVar127._0_4_;
    fVar118 = auVar128._4_4_ * auVar127._4_4_;
    fVar119 = auVar128._8_4_ * auVar127._8_4_;
    fVar120 = auVar128._12_4_ * auVar127._12_4_;
    uVar19 = CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56)));
    auVar135._4_4_ =
         (int)(CONCAT17(uVar63,CONCAT16(uVar62,CONCAT15(uVar61,CONCAT14(uVar60,uVar19)))) >> 0x20);
    auVar135._0_4_ =
         (int)(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,uVar121)))) >> 0x20);
    auVar135._8_4_ =
         (int)(CONCAT17(uVar106,CONCAT16(uVar105,CONCAT15(uVar104,CONCAT14(uVar103,uVar26)))) >>
              0x20);
    auVar135._12_4_ = 0;
    uVar9 = (undefined2)(CONCAT12(uVar49,CONCAT11(uVar48,uVar47)) >> 8);
    uVar115 = a64_TBL(ZEXT816(0),auVar135,DAT_04101580);
    uVar125 = a64_TBL(ZEXT816(0),auVar135,DAT_041015c8);
    auVar10[2] = uVar50;
    auVar10._0_2_ = uVar9;
    auVar10[3] = uVar51;
    auVar10[4] = uVar64;
    auVar10[5] = uVar65;
    auVar10[6] = uVar66;
    auVar10[7] = uVar67;
    auVar10[8] = uVar107;
    auVar10[9] = uVar108;
    auVar10[10] = uVar109;
    auVar10[0xb] = uVar110;
    auVar10._12_4_ = 0;
    uVar139 = a64_TBL(ZEXT816(0),auVar10,DAT_041016a0);
    auVar11[2] = uVar50;
    auVar11._0_2_ = uVar9;
    auVar11[3] = uVar51;
    auVar11[4] = uVar64;
    auVar11[5] = uVar65;
    auVar11[6] = uVar66;
    auVar11[7] = uVar67;
    auVar11[8] = uVar107;
    auVar11[9] = uVar108;
    auVar11[10] = uVar109;
    auVar11[0xb] = uVar110;
    auVar11._12_4_ = 0;
    uVar140 = a64_TBL(ZEXT816(0),auVar11,DAT_04101580);
    auVar30._4_4_ = uVar19;
    auVar30._0_4_ = uVar121;
    auVar30._8_4_ = uVar26;
    auVar30._12_4_ = 0;
    uVar131 = a64_TBL(ZEXT816(0),auVar30,DAT_04101580);
    auVar12[2] = uVar50;
    auVar12._0_2_ = uVar9;
    auVar12[3] = uVar51;
    auVar12[4] = uVar64;
    auVar12[5] = uVar65;
    auVar12[6] = uVar66;
    auVar12[7] = uVar67;
    auVar12[8] = uVar107;
    auVar12[9] = uVar108;
    auVar12[10] = uVar109;
    auVar12[0xb] = uVar110;
    auVar12._12_4_ = 0;
    uVar130 = a64_TBL(ZEXT816(0),auVar12,DAT_04101598);
    fVar95 = (float)((ulong)uVar130 >> 0x20);
    auVar13[2] = uVar50;
    auVar13._0_2_ = uVar9;
    auVar13[3] = uVar51;
    auVar13[4] = uVar64;
    auVar13[5] = uVar65;
    auVar13[6] = uVar66;
    auVar13[7] = uVar67;
    auVar13[8] = uVar107;
    auVar13[9] = uVar108;
    auVar13[10] = uVar109;
    auVar13[0xb] = uVar110;
    auVar13._12_4_ = 0;
    uVar28 = a64_TBL(ZEXT816(0),auVar13,DAT_041015c8);
    auVar31._4_4_ = uVar19;
    auVar31._0_4_ = uVar121;
    auVar31._8_4_ = uVar26;
    auVar31._12_4_ = 0;
    uVar132 = a64_TBL(ZEXT816(0),auVar31,DAT_041015c8);
    uVar29 = a64_TBL(ZEXT816(0),auVar135,DAT_04101598);
    uVar133 = a64_TBL(ZEXT816(0),auVar135,DAT_041016a0);
    auVar32._4_4_ = uVar19;
    auVar32._0_4_ = uVar121;
    auVar32._8_4_ = uVar26;
    auVar32._12_4_ = 0;
    uVar116 = a64_TBL(ZEXT816(0),auVar32,DAT_04101598);
    auVar33._4_4_ = uVar19;
    auVar33._0_4_ = uVar121;
    auVar33._8_4_ = uVar26;
    auVar33._12_4_ = 0;
    uVar124 = a64_TBL(ZEXT816(0),auVar33,DAT_041016a0);
    fVar97 = (float)((ulong)uVar124 >> 0x20);
    fVar98 = (float)((ulong)uVar139 >> 0x20);
    fVar117 = (float)((ulong)uVar115 >> 0x20);
    fVar21 = (float)((ulong)uVar125 >> 0x20);
    fVar14 = (float)((ulong)uVar29 >> 0x20);
    fVar96 = (float)((ulong)uVar140 >> 0x20);
    fVar20 = (float)((ulong)uVar133 >> 0x20);
    fVar141 = (float)((ulong)uVar28 >> 0x20);
    fVar94 = (float)((ulong)uVar116 >> 0x20);
    fVar74 = (float)((ulong)uVar131 >> 0x20);
    fVar79 = (float)((ulong)uVar132 >> 0x20);
    iVar73 = -(uint)(auVar123._0_4_ == 0.0);
    iVar34 = -(uint)(auVar123._0_4_ == 0.0);
    iVar35 = -(uint)(auVar123._0_4_ == 0.0);
    iVar88 = -(uint)(auVar123._0_4_ == 0.0);
    fVar129 = fVar92 * ((float)uVar115 * (float)uVar130 - (float)uVar29 * (float)uVar140);
    fVar136 = fVar118 * (fVar117 * fVar95 - fVar14 * fVar96);
    fVar137 = fVar119 * ((float)uVar125 * (float)uVar139 - (float)uVar133 * (float)uVar28);
    fVar138 = fVar120 * (fVar21 * fVar98 - fVar20 * fVar141);
    fVar93 = fVar92 * ((float)uVar140 * (float)uVar116 - (float)uVar130 * (float)uVar131);
    fVar95 = fVar118 * (fVar96 * fVar94 - fVar95 * fVar74);
    fVar96 = fVar119 * ((float)uVar28 * (float)uVar124 - (float)uVar139 * (float)uVar132);
    fVar98 = fVar120 * (fVar141 * fVar97 - fVar98 * fVar79);
    fVar92 = fVar92 * ((float)uVar29 * (float)uVar131 - (float)uVar116 * (float)uVar115);
    fVar118 = fVar118 * (fVar14 * fVar74 - fVar94 * fVar117);
    fVar119 = fVar119 * ((float)uVar133 * (float)uVar132 - (float)uVar124 * (float)uVar125);
    fVar120 = fVar120 * (fVar20 * fVar79 - fVar97 * fVar21);
    bVar72 = (byte)iVar73;
    bVar75 = (byte)((uint)iVar73 >> 8);
    bVar76 = (byte)((uint)iVar73 >> 0x10);
    bVar77 = (byte)((uint)iVar73 >> 0x18);
    bVar78 = (byte)iVar34;
    bVar80 = (byte)((uint)iVar34 >> 8);
    bVar81 = (byte)((uint)iVar34 >> 0x10);
    bVar82 = (byte)((uint)iVar34 >> 0x18);
    bVar83 = (byte)iVar35;
    bVar84 = (byte)((uint)iVar35 >> 8);
    bVar85 = (byte)((uint)iVar35 >> 0x10);
    bVar86 = (byte)((uint)iVar35 >> 0x18);
    bVar87 = (byte)iVar88;
    bVar89 = (byte)((uint)iVar88 >> 8);
    bVar90 = (byte)((uint)iVar88 >> 0x10);
    bVar91 = (byte)((uint)iVar88 >> 0x18);
    fVar94 = (float)CONCAT13((byte)((uint)fVar93 >> 0x18) & ~bVar77,
                             CONCAT12((byte)((uint)fVar93 >> 0x10) & ~bVar76,
                                      CONCAT11((byte)((uint)fVar93 >> 8) & ~bVar75,
                                               SUB41(fVar93,0) & ~bVar72)));
    fVar97 = (float)CONCAT13((byte)((uint)fVar96 >> 0x18) & ~bVar86,
                             CONCAT12((byte)((uint)fVar96 >> 0x10) & ~bVar85,
                                      CONCAT11((byte)((uint)fVar96 >> 8) & ~bVar84,
                                               SUB41(fVar96,0) & ~bVar83)));
    fVar14 = (fVar129 * -0.0 - fVar93 * 0.0) - fVar92 * 0.0;
    fVar20 = (fVar136 * -0.0 - fVar95 * 0.0) - fVar118 * 0.0;
    fVar117 = (fVar137 * -0.0 - fVar96 * 0.0) - fVar119 * 0.0;
    fVar21 = (fVar138 * -0.0 - fVar98 * 0.0) - fVar120 * 0.0;
    fVar74 = (float)local_50;
    fVar79 = (float)((ulong)local_50 >> 0x20);
    fVar93 = (float)uStack_48;
    fVar14 = (float)CONCAT13((byte)((uint)fVar129 >> 0x18) & ~bVar77,
                             CONCAT12((byte)((uint)fVar129 >> 0x10) & ~bVar76,
                                      CONCAT11((byte)((uint)fVar129 >> 8) & ~bVar75,
                                               SUB41(fVar129,0) & ~bVar72))) * fVar74 +
             fVar94 * fVar79 +
             (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~bVar77,
                             CONCAT12((byte)((uint)fVar92 >> 0x10) & ~bVar76,
                                      CONCAT11((byte)((uint)fVar92 >> 8) & ~bVar75,
                                               SUB41(fVar92,0) & ~bVar72))) * fVar93 +
             (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~bVar77,
                             CONCAT12((byte)((uint)fVar14 >> 0x10) & ~bVar76,
                                      CONCAT11((byte)((uint)fVar14 >> 8) & ~bVar75,
                                               SUB41(fVar14,0) & ~bVar72)));
    uVar40 = SUB41(fVar14,0);
    uVar41 = (undefined1)((uint)fVar14 >> 8);
    uVar42 = (undefined1)((uint)fVar14 >> 0x10);
    uVar43 = (undefined1)((uint)fVar14 >> 0x18);
    fVar14 = (float)CONCAT13((byte)((uint)fVar136 >> 0x18) & ~bVar82,
                             CONCAT12((byte)((uint)fVar136 >> 0x10) & ~bVar81,
                                      CONCAT11((byte)((uint)fVar136 >> 8) & ~bVar80,
                                               SUB41(fVar136,0) & ~bVar78))) * fVar74 +
             (float)(CONCAT17((byte)((uint)fVar95 >> 0x18) & ~bVar82,
                              CONCAT16((byte)((uint)fVar95 >> 0x10) & ~bVar81,
                                       CONCAT15((byte)((uint)fVar95 >> 8) & ~bVar80,
                                                CONCAT14(SUB41(fVar95,0) & ~bVar78,fVar94)))) >>
                    0x20) * fVar79 +
             (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & ~bVar82,
                             CONCAT12((byte)((uint)fVar118 >> 0x10) & ~bVar81,
                                      CONCAT11((byte)((uint)fVar118 >> 8) & ~bVar80,
                                               SUB41(fVar118,0) & ~bVar78))) * fVar93 +
             (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~bVar82,
                             CONCAT12((byte)((uint)fVar20 >> 0x10) & ~bVar81,
                                      CONCAT11((byte)((uint)fVar20 >> 8) & ~bVar80,
                                               SUB41(fVar20,0) & ~bVar78)));
    uVar44 = SUB41(fVar14,0);
    uVar45 = (undefined1)((uint)fVar14 >> 8);
    uVar46 = (undefined1)((uint)fVar14 >> 0x10);
    uVar47 = (undefined1)((uint)fVar14 >> 0x18);
    fVar14 = (float)CONCAT13((byte)((uint)fVar137 >> 0x18) & ~bVar86,
                             CONCAT12((byte)((uint)fVar137 >> 0x10) & ~bVar85,
                                      CONCAT11((byte)((uint)fVar137 >> 8) & ~bVar84,
                                               SUB41(fVar137,0) & ~bVar83))) * fVar74 +
             fVar97 * fVar79 +
             (float)CONCAT13((byte)((uint)fVar119 >> 0x18) & ~bVar86,
                             CONCAT12((byte)((uint)fVar119 >> 0x10) & ~bVar85,
                                      CONCAT11((byte)((uint)fVar119 >> 8) & ~bVar84,
                                               SUB41(fVar119,0) & ~bVar83))) * fVar93 +
             (float)CONCAT13((byte)((uint)fVar117 >> 0x18) & ~bVar86,
                             CONCAT12((byte)((uint)fVar117 >> 0x10) & ~bVar85,
                                      CONCAT11((byte)((uint)fVar117 >> 8) & ~bVar84,
                                               SUB41(fVar117,0) & ~bVar83)));
    uVar48 = SUB41(fVar14,0);
    uVar49 = (undefined1)((uint)fVar14 >> 8);
    uVar50 = (undefined1)((uint)fVar14 >> 0x10);
    uVar51 = (undefined1)((uint)fVar14 >> 0x18);
    fVar14 = (float)CONCAT13((byte)((uint)fVar138 >> 0x18) & ~bVar91,
                             CONCAT12((byte)((uint)fVar138 >> 0x10) & ~bVar90,
                                      CONCAT11((byte)((uint)fVar138 >> 8) & ~bVar89,
                                               SUB41(fVar138,0) & ~bVar87))) * fVar74 +
             (float)(CONCAT17((byte)((uint)fVar98 >> 0x18) & ~bVar91,
                              CONCAT16((byte)((uint)fVar98 >> 0x10) & ~bVar90,
                                       CONCAT15((byte)((uint)fVar98 >> 8) & ~bVar89,
                                                CONCAT14(SUB41(fVar98,0) & ~bVar87,fVar97)))) >>
                    0x20) * fVar79 +
             (float)CONCAT13((byte)((uint)fVar120 >> 0x18) & ~bVar91,
                             CONCAT12((byte)((uint)fVar120 >> 0x10) & ~bVar90,
                                      CONCAT11((byte)((uint)fVar120 >> 8) & ~bVar89,
                                               SUB41(fVar120,0) & ~bVar87))) * fVar93 +
             (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~bVar91,
                             CONCAT12((byte)((uint)fVar21 >> 0x10) & ~bVar90,
                                      CONCAT11((byte)((uint)fVar21 >> 8) & ~bVar89,
                                               SUB41(fVar21,0) & ~bVar87)));
    uVar52 = SUB41(fVar14,0);
    uVar53 = (undefined1)((uint)fVar14 >> 8);
    uVar54 = (undefined1)((uint)fVar14 >> 0x10);
    uVar55 = (undefined1)((uint)fVar14 >> 0x18);
  }
  fVar14 = (float)((ulong)*param_2 >> 0x20) +
           (float)((ulong)uVar143 >> 0x20) *
           (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) * fVar142;
  fVar20 = (float)((ulong)param_2[1] >> 0x20) +
           (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) * 0.0 * fVar142;
  param_2[1] = CONCAT17((char)((uint)fVar20 >> 0x18),
                        CONCAT16((char)((uint)fVar20 >> 0x10),
                                 CONCAT15((char)((uint)fVar20 >> 8),
                                          CONCAT14(SUB41(fVar20,0),
                                                   (float)param_2[1] +
                                                   fVar27 * (float)CONCAT13(uVar51,CONCAT12(uVar50,
                                                  CONCAT11(uVar49,uVar48))) * fVar142))));
  *param_2 = CONCAT17((char)((uint)fVar14 >> 0x18),
                      CONCAT16((char)((uint)fVar14 >> 0x10),
                               CONCAT15((char)((uint)fVar14 >> 8),
                                        CONCAT14(SUB41(fVar14,0),
                                                 (float)*param_2 +
                                                 (float)uVar143 *
                                                 (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(
                                                  uVar41,uVar40))) * fVar142))));
  return;
}

