
void FUN_0032d588(undefined4 param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
                 undefined4 *param_5,long param_6,long param_7,ulong param_8,long param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  char *pcVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
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
  byte bVar69;
  byte bVar72;
  byte bVar73;
  float fVar70;
  int iVar71;
  byte bVar74;
  byte bVar75;
  byte bVar78;
  byte bVar79;
  float fVar76;
  int iVar77;
  byte bVar80;
  byte bVar81;
  byte bVar83;
  byte bVar84;
  int iVar82;
  byte bVar85;
  float fVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  float fVar92;
  undefined8 uVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar96 [16];
  float fVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  float fVar102;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined1 auVar106 [16];
  float fVar107;
  undefined8 uVar108;
  float fVar109;
  
  pcVar26 = *(char **)(*(long *)(param_6 + 0x240) + 0x268);
  if ((*(int *)(pcVar26 + 0xc) != -1) && (*(int *)(pcVar26 + 0xc) <= *(int *)(param_9 + 4))) {
    return;
  }
  fVar70 = *(float *)(pcVar26 + 4);
  if (pcVar26[1] == '\0') {
    if (*pcVar26 != '\0') {
      if (*pcVar26 != '\x01') {
        return;
      }
      if (fVar70 <= *(float *)((long)param_3 + 4)) {
        return;
      }
      *(float *)((long)param_3 + 4) = fVar70;
      *param_5 = param_1;
      return;
    }
    if (fVar70 <= *(float *)((long)param_3 + 4)) {
      return;
    }
    *(float *)((long)param_3 + 4) = fVar70;
    fVar70 = param_4[1];
    fVar33 = *(float *)(pcVar26 + 8);
    param_4[1] = -(fVar33 * fVar70);
    *param_4 = *(float *)(pcVar26 + 0x10) * (float)*(undefined8 *)param_4;
    param_4[1] = -(fVar33 * fVar70) * *(float *)(pcVar26 + 0x10);
    fVar70 = *(float *)(pcVar26 + 0x10) * (float)*(undefined8 *)(param_4 + 2);
  }
  else {
    if (*(char *)(*(long *)(param_6 + 0xa0) + 0x793) == '\0') {
      fVar36 = (float)*(undefined8 *)(param_6 + 0x3d8);
      fVar97 = (float)((ulong)*(undefined8 *)(param_6 + 0x3d8) >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_6 + 0x3d0);
      fVar35 = (float)((ulong)*(undefined8 *)(param_6 + 0x3d0) >> 0x20);
      uVar21 = *(undefined8 *)(param_6 + 1000);
      uVar45 = (undefined1)uVar21;
      uVar46 = (undefined1)((ulong)uVar21 >> 8);
      uVar47 = (undefined1)((ulong)uVar21 >> 0x10);
      uVar48 = (undefined1)((ulong)uVar21 >> 0x18);
      uVar49 = (undefined1)((ulong)uVar21 >> 0x20);
      uVar50 = (undefined1)((ulong)uVar21 >> 0x28);
      uVar51 = (undefined1)((ulong)uVar21 >> 0x30);
      uVar52 = (undefined1)((ulong)uVar21 >> 0x38);
      uVar21 = *(undefined8 *)(param_6 + 0x3e0);
      uVar37 = (undefined1)uVar21;
      uVar38 = (undefined1)((ulong)uVar21 >> 8);
      uVar39 = (undefined1)((ulong)uVar21 >> 0x10);
      uVar40 = (undefined1)((ulong)uVar21 >> 0x18);
      uVar41 = (undefined1)((ulong)uVar21 >> 0x20);
      uVar42 = (undefined1)((ulong)uVar21 >> 0x28);
      uVar43 = (undefined1)((ulong)uVar21 >> 0x30);
      uVar44 = (undefined1)((ulong)uVar21 >> 0x38);
      uVar21 = *(undefined8 *)(param_6 + 0x3f8);
      uVar61 = (undefined1)uVar21;
      uVar62 = (undefined1)((ulong)uVar21 >> 8);
      uVar63 = (undefined1)((ulong)uVar21 >> 0x10);
      uVar64 = (undefined1)((ulong)uVar21 >> 0x18);
      uVar65 = (undefined1)((ulong)uVar21 >> 0x20);
      uVar66 = (undefined1)((ulong)uVar21 >> 0x28);
      uVar67 = (undefined1)((ulong)uVar21 >> 0x30);
      uVar68 = (undefined1)((ulong)uVar21 >> 0x38);
      uVar21 = *(undefined8 *)(param_6 + 0x3f0);
      uVar53 = (undefined1)uVar21;
      uVar54 = (undefined1)((ulong)uVar21 >> 8);
      uVar55 = (undefined1)((ulong)uVar21 >> 0x10);
      uVar56 = (undefined1)((ulong)uVar21 >> 0x18);
      uVar57 = (undefined1)((ulong)uVar21 >> 0x20);
      uVar58 = (undefined1)((ulong)uVar21 >> 0x28);
      uVar59 = (undefined1)((ulong)uVar21 >> 0x30);
      uVar60 = (undefined1)((ulong)uVar21 >> 0x38);
      fVar86 = (float)((ulong)*(undefined8 *)(param_6 + 0x400) >> 0x20);
    }
    else {
      uVar27 = -(param_8 >> 0x1f & 1) & 0xfffffff000000000 | (param_8 & 0xffffffff) << 4;
      fVar97 = 0.0;
      pfVar1 = (float *)(*(long *)(param_7 + 0x40) + uVar27);
      pfVar2 = (float *)(*(long *)(param_7 + 0x48) + uVar27);
      pfVar3 = (float *)(*(long *)(param_7 + 0x50) + uVar27);
      fVar33 = *pfVar1;
      fVar35 = *pfVar2;
      fVar36 = *pfVar3;
      fVar86 = pfVar1[2];
      uVar53 = SUB41(fVar86,0);
      uVar54 = (undefined1)((uint)fVar86 >> 8);
      uVar55 = (undefined1)((uint)fVar86 >> 0x10);
      uVar56 = (undefined1)((uint)fVar86 >> 0x18);
      uVar65 = 0;
      uVar66 = 0;
      uVar67 = 0;
      uVar68 = 0;
      fVar86 = pfVar1[1];
      uVar37 = SUB41(fVar86,0);
      uVar38 = (undefined1)((uint)fVar86 >> 8);
      uVar39 = (undefined1)((uint)fVar86 >> 0x10);
      uVar40 = (undefined1)((uint)fVar86 >> 0x18);
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
      fVar86 = pfVar2[2];
      uVar57 = SUB41(fVar86,0);
      uVar58 = (undefined1)((uint)fVar86 >> 8);
      uVar59 = (undefined1)((uint)fVar86 >> 0x10);
      uVar60 = (undefined1)((uint)fVar86 >> 0x18);
      fVar86 = pfVar2[3];
      fVar102 = pfVar2[1];
      uVar41 = SUB41(fVar102,0);
      uVar42 = (undefined1)((uint)fVar102 >> 8);
      uVar43 = (undefined1)((uint)fVar102 >> 0x10);
      uVar44 = (undefined1)((uint)fVar102 >> 0x18);
      fVar102 = pfVar3[2];
      uVar61 = SUB41(fVar102,0);
      uVar62 = (undefined1)((uint)fVar102 >> 8);
      uVar63 = (undefined1)((uint)fVar102 >> 0x10);
      uVar64 = (undefined1)((uint)fVar102 >> 0x18);
      fVar102 = pfVar3[1];
      uVar45 = SUB41(fVar102,0);
      uVar46 = (undefined1)((uint)fVar102 >> 8);
      uVar47 = (undefined1)((uint)fVar102 >> 0x10);
      uVar48 = (undefined1)((uint)fVar102 >> 0x18);
    }
    fVar86 = fVar86 + fVar35 * (float)*param_3 +
                      (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) *
                      (float)((ulong)*param_3 >> 0x20) +
                      (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) *
                      (float)param_3[1];
    if (*pcVar26 != '\0') {
      if (*pcVar26 != '\x01') {
        return;
      }
      if (fVar70 <= fVar86) {
        return;
      }
      *param_5 = param_1;
      return;
    }
    if (fVar70 <= fVar86) {
      return;
    }
    fVar70 = (float)*(undefined8 *)param_4;
    fVar34 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    auVar6[1] = uVar38;
    auVar6[0] = uVar37;
    auVar6[2] = uVar39;
    auVar6[3] = uVar40;
    auVar6[4] = uVar41;
    auVar6[5] = uVar42;
    auVar6[6] = uVar43;
    auVar6[7] = uVar44;
    auVar6[8] = uVar45;
    auVar6[9] = uVar46;
    auVar6[10] = uVar47;
    auVar6[0xb] = uVar48;
    auVar6[0xc] = uVar49;
    auVar6[0xd] = uVar50;
    auVar6[0xe] = uVar51;
    auVar6[0xf] = uVar52;
    uVar87 = a64_TBL(ZEXT816(0),auVar6,DAT_04101580);
    auVar7[1] = uVar38;
    auVar7[0] = uVar37;
    auVar7[2] = uVar39;
    auVar7[3] = uVar40;
    auVar7[4] = uVar41;
    auVar7[5] = uVar42;
    auVar7[6] = uVar43;
    auVar7[7] = uVar44;
    auVar7[8] = uVar45;
    auVar7[9] = uVar46;
    auVar7[10] = uVar47;
    auVar7[0xb] = uVar48;
    auVar7[0xc] = uVar49;
    auVar7[0xd] = uVar50;
    auVar7[0xe] = uVar51;
    auVar7[0xf] = uVar52;
    uVar90 = a64_TBL(ZEXT816(0),auVar7,DAT_041015c8);
    auVar12[1] = uVar54;
    auVar12[0] = uVar53;
    auVar12[2] = uVar55;
    auVar12[3] = uVar56;
    auVar12[4] = uVar57;
    auVar12[5] = uVar58;
    auVar12[6] = uVar59;
    auVar12[7] = uVar60;
    auVar12[8] = uVar61;
    auVar12[9] = uVar62;
    auVar12[10] = uVar63;
    auVar12[0xb] = uVar64;
    auVar12[0xc] = uVar65;
    auVar12[0xd] = uVar66;
    auVar12[0xe] = uVar67;
    auVar12[0xf] = uVar68;
    uVar21 = a64_TBL(ZEXT816(0),auVar12,DAT_041015c8);
    fVar76 = (float)*(undefined8 *)(param_4 + 2);
    fVar31 = fVar33 * fVar70 +
             (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) * fVar34 +
             (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) * fVar76;
    fVar32 = fVar36 * fVar70 +
             (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) * fVar34 +
             (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) * fVar76;
    auVar13[1] = uVar54;
    auVar13[0] = uVar53;
    auVar13[2] = uVar55;
    auVar13[3] = uVar56;
    auVar13[4] = uVar57;
    auVar13[5] = uVar58;
    auVar13[6] = uVar59;
    auVar13[7] = uVar60;
    auVar13[8] = uVar61;
    auVar13[9] = uVar62;
    auVar13[10] = uVar63;
    auVar13[0xb] = uVar64;
    auVar13[0xc] = uVar65;
    auVar13[0xd] = uVar66;
    auVar13[0xe] = uVar67;
    auVar13[0xf] = uVar68;
    uVar98 = a64_TBL(ZEXT816(0),auVar13,DAT_04101598);
    auVar14[1] = uVar54;
    auVar14[0] = uVar53;
    auVar14[2] = uVar55;
    auVar14[3] = uVar56;
    auVar14[4] = uVar57;
    auVar14[5] = uVar58;
    auVar14[6] = uVar59;
    auVar14[7] = uVar60;
    auVar14[8] = uVar61;
    auVar14[9] = uVar62;
    auVar14[10] = uVar63;
    auVar14[0xb] = uVar64;
    auVar14[0xc] = uVar65;
    auVar14[0xd] = uVar66;
    auVar14[0xe] = uVar67;
    auVar14[0xf] = uVar68;
    uVar103 = a64_TBL(ZEXT816(0),auVar14,DAT_041016a0);
    auVar8[1] = uVar38;
    auVar8[0] = uVar37;
    auVar8[2] = uVar39;
    auVar8[3] = uVar40;
    auVar8[4] = uVar41;
    auVar8[5] = uVar42;
    auVar8[6] = uVar43;
    auVar8[7] = uVar44;
    auVar8[8] = uVar45;
    auVar8[9] = uVar46;
    auVar8[10] = uVar47;
    auVar8[0xb] = uVar48;
    auVar8[0xc] = uVar49;
    auVar8[0xd] = uVar50;
    auVar8[0xe] = uVar51;
    auVar8[0xf] = uVar52;
    uVar104 = a64_TBL(ZEXT816(0),auVar8,DAT_041016a0);
    auVar9[1] = uVar38;
    auVar9[0] = uVar37;
    auVar9[2] = uVar39;
    auVar9[3] = uVar40;
    auVar9[4] = uVar41;
    auVar9[5] = uVar42;
    auVar9[6] = uVar43;
    auVar9[7] = uVar44;
    auVar9[8] = uVar45;
    auVar9[9] = uVar46;
    auVar9[10] = uVar47;
    auVar9[0xb] = uVar48;
    auVar9[0xc] = uVar49;
    auVar9[0xd] = uVar50;
    auVar9[0xe] = uVar51;
    auVar9[0xf] = uVar52;
    uVar99 = a64_TBL(ZEXT816(0),auVar9,DAT_04101598);
    auVar15[1] = uVar54;
    auVar15[0] = uVar53;
    auVar15[2] = uVar55;
    auVar15[3] = uVar56;
    auVar15[4] = uVar57;
    auVar15[5] = uVar58;
    auVar15[6] = uVar59;
    auVar15[7] = uVar60;
    auVar15[8] = uVar61;
    auVar15[9] = uVar62;
    auVar15[10] = uVar63;
    auVar15[0xb] = uVar64;
    auVar15[0xc] = uVar65;
    auVar15[0xd] = uVar66;
    auVar15[0xe] = uVar67;
    auVar15[0xf] = uVar68;
    uVar105 = a64_TBL(ZEXT816(0),auVar15,DAT_04101580);
    uVar16 = CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53)));
    uVar29 = (undefined4)
             (CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,uVar16)))) >> 0x20);
    uVar30 = (undefined4)
             (CONCAT14(uVar64,CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60)))) >> 8);
    auVar96._0_4_ =
         (fVar33 * (float)uVar87 * (float)uVar98 - (float)uVar99 * fVar33 * (float)uVar105) +
         (fVar35 * (float)((ulong)uVar87 >> 0x20) * (float)((ulong)uVar98 >> 0x20) -
         (float)((ulong)uVar99 >> 0x20) * fVar35 * (float)((ulong)uVar105 >> 0x20)) +
         (fVar36 * (float)uVar90 * (float)uVar103 - (float)uVar104 * fVar36 * (float)uVar21) +
         (fVar97 * (float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar103 >> 0x20) -
         (float)((ulong)uVar104 >> 0x20) * fVar97 * (float)((ulong)uVar21 >> 0x20));
    auVar96._4_4_ = auVar96._0_4_;
    auVar96._8_4_ = auVar96._0_4_;
    auVar96._12_4_ = auVar96._0_4_;
    auVar100 = NEON_frecpe(auVar96,4);
    auVar106 = NEON_frecps(auVar100,auVar96,4);
    auVar101._0_4_ = auVar100._0_4_ * auVar106._0_4_;
    auVar101._4_4_ = auVar100._4_4_ * auVar106._4_4_;
    auVar101._8_4_ = auVar100._8_4_ * auVar106._8_4_;
    auVar101._12_4_ = auVar100._12_4_ * auVar106._12_4_;
    auVar100 = NEON_frecps(auVar101,auVar96,4);
    fVar97 = auVar101._0_4_ * auVar100._0_4_;
    fVar86 = auVar101._4_4_ * auVar100._4_4_;
    fVar102 = auVar101._8_4_ * auVar100._8_4_;
    uVar10 = CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
    uVar28 = (undefined4)
             (CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,uVar10)))) >> 0x20);
    uVar11 = CONCAT13(uVar48,CONCAT12(uVar47,(short)(CONCAT12(uVar46,CONCAT11(uVar45,uVar44)) >> 8))
                     );
    auVar17._4_4_ = uVar28;
    auVar17._0_4_ = fVar35;
    auVar17._8_4_ = uVar29;
    auVar17._12_4_ = 0;
    uVar87 = a64_TBL(ZEXT816(0),auVar17,DAT_04101580);
    auVar18._4_4_ = uVar28;
    auVar18._0_4_ = fVar35;
    auVar18._8_4_ = uVar29;
    auVar18._12_4_ = 0;
    uVar90 = a64_TBL(ZEXT816(0),auVar18,DAT_041015c8);
    auVar100._4_4_ = uVar11;
    auVar100._0_4_ = fVar36;
    auVar100._8_4_ = uVar30;
    auVar100._12_4_ = 0;
    uVar93 = a64_TBL(ZEXT816(0),auVar100,DAT_041016a0);
    auVar106._4_4_ = uVar11;
    auVar106._0_4_ = fVar36;
    auVar106._8_4_ = uVar30;
    auVar106._12_4_ = 0;
    uVar103 = a64_TBL(ZEXT816(0),auVar106,DAT_04101580);
    fVar107 = (float)((ulong)uVar103 >> 0x20);
    auVar19._4_4_ = uVar28;
    auVar19._0_4_ = fVar35;
    auVar19._8_4_ = uVar29;
    auVar19._12_4_ = 0;
    uVar108 = a64_TBL(ZEXT816(0),auVar19,DAT_04101598);
    auVar20._4_4_ = uVar28;
    auVar20._0_4_ = fVar35;
    auVar20._8_4_ = uVar29;
    auVar20._12_4_ = 0;
    uVar99 = a64_TBL(ZEXT816(0),auVar20,DAT_041016a0);
    auVar22._4_4_ = uVar10;
    auVar22._0_4_ = fVar33;
    auVar22._8_4_ = uVar16;
    auVar22._12_4_ = 0;
    uVar91 = a64_TBL(ZEXT816(0),auVar22,DAT_041016a0);
    auVar23._4_4_ = uVar10;
    auVar23._0_4_ = fVar33;
    auVar23._8_4_ = uVar16;
    auVar23._12_4_ = 0;
    uVar104 = a64_TBL(ZEXT816(0),auVar23,DAT_04101580);
    auVar4._4_4_ = uVar11;
    auVar4._0_4_ = fVar36;
    auVar4._8_4_ = uVar30;
    auVar4._12_4_ = 0;
    uVar98 = a64_TBL(ZEXT816(0),auVar4,DAT_04101598);
    auVar5._4_4_ = uVar11;
    auVar5._0_4_ = fVar36;
    auVar5._8_4_ = uVar30;
    auVar5._12_4_ = 0;
    uVar21 = a64_TBL(ZEXT816(0),auVar5,DAT_041015c8);
    auVar24._4_4_ = uVar10;
    auVar24._0_4_ = fVar33;
    auVar24._8_4_ = uVar16;
    auVar24._12_4_ = 0;
    uVar88 = a64_TBL(ZEXT816(0),auVar24,DAT_04101598);
    auVar25._4_4_ = uVar10;
    auVar25._0_4_ = fVar33;
    auVar25._8_4_ = uVar16;
    auVar25._12_4_ = 0;
    uVar105 = a64_TBL(ZEXT816(0),auVar25,DAT_041015c8);
    fVar34 = -*(float *)(pcVar26 + 8) *
             (fVar35 * fVar70 +
              (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) * fVar34 +
             (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) * fVar76);
    fVar70 = (float)((ulong)uVar87 >> 0x20);
    fVar33 = (float)((ulong)uVar98 >> 0x20);
    fVar109 = (float)((ulong)uVar108 >> 0x20);
    fVar89 = (float)((ulong)uVar88 >> 0x20);
    fVar76 = (float)((ulong)uVar104 >> 0x20);
    fVar92 = fVar97 * ((float)uVar87 * (float)uVar98 - (float)uVar108 * (float)uVar103);
    fVar94 = fVar86 * (fVar70 * fVar33 - fVar109 * fVar107);
    fVar95 = fVar102 * ((float)uVar90 * (float)uVar93 - (float)uVar99 * (float)uVar21);
    fVar35 = fVar97 * ((float)uVar103 * (float)uVar88 - (float)uVar98 * (float)uVar104);
    fVar33 = fVar86 * (fVar107 * fVar89 - fVar33 * fVar76);
    fVar36 = fVar102 * ((float)uVar21 * (float)uVar91 - (float)uVar93 * (float)uVar105);
    fVar97 = fVar97 * ((float)uVar108 * (float)uVar104 - (float)uVar88 * (float)uVar87);
    fVar86 = fVar86 * (fVar109 * fVar76 - fVar89 * fVar70);
    fVar102 = fVar102 * ((float)uVar99 * (float)uVar105 - (float)uVar91 * (float)uVar90);
    iVar71 = -(uint)(auVar96._0_4_ == 0.0);
    iVar77 = -(uint)(auVar96._0_4_ == 0.0);
    iVar82 = -(uint)(auVar96._0_4_ == 0.0);
    bVar69 = (byte)iVar71;
    bVar72 = (byte)((uint)iVar71 >> 8);
    bVar73 = (byte)((uint)iVar71 >> 0x10);
    bVar74 = (byte)((uint)iVar71 >> 0x18);
    bVar75 = (byte)iVar77;
    bVar78 = (byte)((uint)iVar77 >> 8);
    bVar79 = (byte)((uint)iVar77 >> 0x10);
    bVar80 = (byte)((uint)iVar77 >> 0x18);
    bVar81 = (byte)iVar82;
    bVar83 = (byte)((uint)iVar82 >> 8);
    bVar84 = (byte)((uint)iVar82 >> 0x10);
    bVar85 = (byte)((uint)iVar82 >> 0x18);
    fVar70 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~bVar74,
                             CONCAT12((byte)((uint)fVar92 >> 0x10) & ~bVar73,
                                      CONCAT11((byte)((uint)fVar92 >> 8) & ~bVar72,
                                               SUB41(fVar92,0) & ~bVar69)));
    *param_4 = *(float *)(pcVar26 + 0x10) *
               (fVar70 * fVar31 +
                (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~bVar74,
                                CONCAT12((byte)((uint)fVar35 >> 0x10) & ~bVar73,
                                         CONCAT11((byte)((uint)fVar35 >> 8) & ~bVar72,
                                                  SUB41(fVar35,0) & ~bVar69))) * fVar34 +
                (float)CONCAT13((byte)((uint)fVar97 >> 0x18) & ~bVar74,
                                CONCAT12((byte)((uint)fVar97 >> 0x10) & ~bVar73,
                                         CONCAT11((byte)((uint)fVar97 >> 8) & ~bVar72,
                                                  SUB41(fVar97,0) & ~bVar69))) * fVar32 + 0.0);
    param_4[1] = *(float *)(pcVar26 + 0x10) *
                 ((float)(CONCAT17((byte)((uint)fVar94 >> 0x18) & ~bVar80,
                                   CONCAT16((byte)((uint)fVar94 >> 0x10) & ~bVar79,
                                            CONCAT15((byte)((uint)fVar94 >> 8) & ~bVar78,
                                                     CONCAT14(SUB41(fVar94,0) & ~bVar75,fVar70))))
                         >> 0x20) * fVar31 +
                  (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~bVar80,
                                  CONCAT12((byte)((uint)fVar33 >> 0x10) & ~bVar79,
                                           CONCAT11((byte)((uint)fVar33 >> 8) & ~bVar78,
                                                    SUB41(fVar33,0) & ~bVar75))) * fVar34 +
                  (float)CONCAT13((byte)((uint)fVar86 >> 0x18) & ~bVar80,
                                  CONCAT12((byte)((uint)fVar86 >> 0x10) & ~bVar79,
                                           CONCAT11((byte)((uint)fVar86 >> 8) & ~bVar78,
                                                    SUB41(fVar86,0) & ~bVar75))) * fVar32 + 0.0);
    fVar70 = *(float *)(pcVar26 + 0x10) *
             ((float)CONCAT13((byte)((uint)fVar95 >> 0x18) & ~bVar85,
                              CONCAT12((byte)((uint)fVar95 >> 0x10) & ~bVar84,
                                       CONCAT11((byte)((uint)fVar95 >> 8) & ~bVar83,
                                                SUB41(fVar95,0) & ~bVar81))) * fVar31 +
              (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~bVar85,
                              CONCAT12((byte)((uint)fVar36 >> 0x10) & ~bVar84,
                                       CONCAT11((byte)((uint)fVar36 >> 8) & ~bVar83,
                                                SUB41(fVar36,0) & ~bVar81))) * fVar34 +
              (float)CONCAT13((byte)((uint)fVar102 >> 0x18) & ~bVar85,
                              CONCAT12((byte)((uint)fVar102 >> 0x10) & ~bVar84,
                                       CONCAT11((byte)((uint)fVar102 >> 8) & ~bVar83,
                                                SUB41(fVar102,0) & ~bVar81))) * fVar32 + 0.0);
  }
  *(ulong *)(param_4 + 2) = (ulong)(uint)fVar70;
  *(undefined8 *)param_4 = *(undefined8 *)param_4;
  *(int *)(param_9 + 4) = *(int *)(param_9 + 4) + 1;
  return;
}

