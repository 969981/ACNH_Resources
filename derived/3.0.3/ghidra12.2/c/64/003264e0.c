
bool FUN_003264e0(float param_1,undefined8 param_2,char *param_3,undefined4 param_4,ulong param_5,
                 byte param_6,byte param_7)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  float *pfVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [12];
  bool bVar17;
  undefined8 uVar18;
  ulong uVar19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  byte bVar46;
  int iVar47;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  int iVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  int iVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  undefined1 auVar48 [16];
  int iVar63;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  byte bVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined4 uVar97;
  float fVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  float fVar111;
  float fVar112;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  char *local_a0;
  byte local_98;
  
  lVar26 = *(long *)(param_3 + 0xa0);
  fVar91 = *(float *)(param_3 + 0x44);
  lVar25 = *(long *)(param_3 + 0x78);
  uVar4 = *(uint *)(lVar26 + 0x83c);
  iVar47 = *(int *)(lVar26 + 0x844);
  local_98 = FUN_0031e094(param_3,param_4);
  if ((local_98 & 1) == 0) {
    if (param_3[1] != '\0') {
      *(float *)(param_3 + 0x4c) = *(float *)(param_3 + 0x4c) + param_1;
    }
  }
  else {
    *(float *)(param_3 + 0x4c) = param_1;
  }
  if (param_3[7] == '\0') {
    local_98 = local_98 & 1;
    fVar92 = (float)uVar4;
    fVar93 = (float)(iVar47 + uVar4);
    iVar47 = *(int *)**(undefined8 **)(param_3 + 0x4d0);
    iVar53 = 0;
    if (iVar47 != 0) {
      iVar53 = (*(int *)(param_3 + 0x9a0) + 1) / iVar47;
    }
    *(int *)(param_3 + 0x9a0) = (*(int *)(param_3 + 0x9a0) + 1) - iVar53 * iVar47;
    local_a0 = param_3;
    uVar18 = FUN_0031bd20(&local_a0);
    *(float *)(param_3 + 0x48) = param_1;
    if (*param_3 == '\0') {
      lVar21 = *(long *)(param_3 + 0x240);
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      if (*(char *)(lVar21 + 1) != '\0') goto LAB_0032661c;
LAB_00326728:
      *(float *)(param_3 + 0x6fc) =
           *(float *)(*(long *)(lVar21 + 0x10) + 0x9a4) * *(float *)(lVar25 + 0x1f8);
      lVar21 = *(long *)(lVar21 + 0x10);
      *(float *)(param_3 + 0x720) = *(float *)(lVar21 + 0x8b0) * *(float *)(lVar25 + 0xf0);
      *(float *)(param_3 + 0x724) = *(float *)(lVar21 + 0x8b4) * *(float *)(lVar25 + 0xf4);
      *(float *)(param_3 + 0x728) = *(float *)(lVar21 + 0x8b8) * *(float *)(lVar25 + 0xf8);
    }
    else {
      if (*(char *)(*(long *)(param_3 + 0xa0) + 0x82c) != '\0') {
        fVar93 = *(float *)(param_3 + 0x5f4);
        fVar92 = (float)NEON_ucvtf(*(undefined4 *)(lVar26 + 0x840));
        fVar92 = fVar93 * (fVar92 / 100.0);
        if (*(char *)(lVar26 + 0x838) != '\0') {
          fVar93 = (float)NEON_ucvtf(*(undefined4 *)(lVar26 + 0x844));
          fVar93 = fVar92 + fVar93;
        }
      }
      lVar21 = *(long *)(param_3 + 0x240);
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      if ((*(char *)(lVar21 + 1) == '\0') || (*(char *)(*(long *)(param_3 + 0xa0) + 0x82c) == '\0'))
      goto LAB_00326728;
LAB_0032661c:
      lVar21 = 0;
      pcVar23 = param_3 + 0x690;
      do {
        pcVar20 = *(char **)(*(long *)(param_3 + 0x240) + lVar21 * 8 + 0x298);
        if (((pcVar20 != (char *)0x0) && (*pcVar20 != '\0')) &&
           ((param_3[lVar21 + 0x738] == '\0' || (pcVar20[1] != '\0')))) {
          uVar18 = FUN_0032c1f0(*(undefined4 *)(param_3 + 0x44),pcVar23);
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
        }
        lVar21 = lVar21 + 1;
        pcVar23 = pcVar23 + 0xc;
      } while (lVar21 != 0xe);
      lVar21 = *(long *)(param_3 + 0x240);
      pcVar23 = *(char **)(lVar21 + 0x2e0);
      if (((pcVar23 != (char *)0x0) && (*pcVar23 != '\0')) &&
         ((param_3[0x741] == '\0' || (pcVar23[1] != '\0')))) {
        *(float *)(param_3 + 0x6fc) = *(float *)(lVar25 + 0x1f8) * *(float *)(param_3 + 0x6fc);
      }
      pcVar23 = *(char **)(lVar21 + 0x2f8);
      if (((pcVar23 != (char *)0x0) && (*pcVar23 != '\0')) &&
         ((param_3[0x744] == '\0' || (pcVar23[1] != '\0')))) {
        *(float *)(param_3 + 0x720) = *(float *)(param_3 + 0x720) * *(float *)(lVar25 + 0xf0);
        *(float *)(param_3 + 0x724) = *(float *)(lVar25 + 0xf4) * *(float *)(param_3 + 0x724);
        *(float *)(param_3 + 0x728) = *(float *)(lVar25 + 0xf8) * *(float *)(param_3 + 0x728);
      }
    }
    plVar27 = (long *)(param_3 + 0x240);
    FUN_0032603c(uVar18,param_3);
    if (fVar91 == 0.0) {
      *(undefined8 *)(param_3 + 0x458) = *(undefined8 *)(param_3 + 0x408);
      *(undefined8 *)(param_3 + 0x450) = *(undefined8 *)(param_3 + 0x400);
    }
    fVar28 = *(float *)(param_3 + 0x44);
    if (fVar28 != 0.0) {
      pauVar1 = (undefined1 (*) [12])(param_3 + 0x3f0);
      uVar97 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x3f8) >> 0x20);
      auVar16 = *pauVar1;
      auVar11._12_4_ = uVar97;
      auVar11._0_12_ = *pauVar1;
      uVar15 = a64_TBL(ZEXT816(0),auVar11,DAT_041015c8);
      pauVar2 = (undefined1 (*) [12])(param_3 + 0x3d0);
      fVar94 = (float)*(undefined8 *)(param_3 + 0x3d8);
      fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 0x3d8) >> 0x20);
      fVar39 = (float)*(undefined8 *)*pauVar2;
      fVar40 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
      pcVar23 = param_3 + 0x3e0;
      uVar18 = *(undefined8 *)(param_3 + 1000);
      uVar75 = (undefined1)uVar18;
      uVar78 = (undefined1)((ulong)uVar18 >> 8);
      uVar81 = (undefined1)((ulong)uVar18 >> 0x10);
      uVar84 = (undefined1)((ulong)uVar18 >> 0x18);
      uVar76 = (undefined1)((ulong)uVar18 >> 0x20);
      uVar79 = (undefined1)((ulong)uVar18 >> 0x28);
      uVar82 = (undefined1)((ulong)uVar18 >> 0x30);
      uVar85 = (undefined1)((ulong)uVar18 >> 0x38);
      auVar101[9] = uVar78;
      auVar101._0_9_ = *(unkbyte9 *)pcVar23;
      auVar101[10] = uVar81;
      auVar101[0xb] = uVar84;
      auVar101[0xc] = uVar76;
      auVar101[0xd] = uVar79;
      auVar101[0xe] = uVar82;
      auVar101[0xf] = uVar85;
      uVar18 = a64_TBL(ZEXT816(0),auVar101,DAT_04101580);
      auVar109[9] = uVar78;
      auVar109._0_9_ = *(unkbyte9 *)pcVar23;
      auVar109[10] = uVar81;
      auVar109[0xb] = uVar84;
      auVar109[0xc] = uVar76;
      auVar109[0xd] = uVar79;
      auVar109[0xe] = uVar82;
      auVar109[0xf] = uVar85;
      uVar42 = a64_TBL(ZEXT816(0),auVar109,DAT_041015c8);
      auVar12._12_4_ = uVar97;
      auVar12._0_12_ = *pauVar1;
      uVar99 = a64_TBL(ZEXT816(0),auVar12,DAT_04101598);
      auVar13._12_4_ = uVar97;
      auVar13._0_12_ = *pauVar1;
      uVar105 = a64_TBL(ZEXT816(0),auVar13,DAT_041016a0);
      auVar5[9] = uVar78;
      auVar5._0_9_ = *(unkbyte9 *)pcVar23;
      auVar5[10] = uVar81;
      auVar5[0xb] = uVar84;
      auVar5[0xc] = uVar76;
      auVar5[0xd] = uVar79;
      auVar5[0xe] = uVar82;
      auVar5[0xf] = uVar85;
      uVar106 = a64_TBL(ZEXT816(0),auVar5,DAT_041016a0);
      auVar6[9] = uVar78;
      auVar6._0_9_ = *(unkbyte9 *)pcVar23;
      auVar6[10] = uVar81;
      auVar6[0xb] = uVar84;
      auVar6[0xc] = uVar76;
      auVar6[0xd] = uVar79;
      auVar6[0xe] = uVar82;
      auVar6[0xf] = uVar85;
      uVar100 = a64_TBL(ZEXT816(0),auVar6,DAT_04101598);
      auVar14._12_4_ = uVar97;
      auVar14._0_12_ = *pauVar1;
      uVar107 = a64_TBL(ZEXT816(0),auVar14,DAT_04101580);
      auVar48._0_4_ =
           (fVar39 * (float)uVar18 * (float)uVar99 - (float)uVar100 * fVar39 * (float)uVar107) +
           (fVar40 * (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar99 >> 0x20) -
           (float)((ulong)uVar100 >> 0x20) * fVar40 * (float)((ulong)uVar107 >> 0x20)) +
           (fVar94 * (float)uVar42 * (float)uVar105 - (float)uVar106 * fVar94 * (float)uVar15) +
           (fVar29 * (float)((ulong)uVar42 >> 0x20) * (float)((ulong)uVar105 >> 0x20) -
           (float)((ulong)uVar106 >> 0x20) * fVar29 * (float)((ulong)uVar15 >> 0x20));
      auVar48._4_4_ = auVar48._0_4_;
      auVar48._8_4_ = auVar48._0_4_;
      auVar48._12_4_ = auVar48._0_4_;
      auVar101 = NEON_frecpe(auVar48,4);
      auVar109 = NEON_frecps(auVar101,auVar48,4);
      auVar102._0_4_ = auVar101._0_4_ * auVar109._0_4_;
      auVar102._4_4_ = auVar101._4_4_ * auVar109._4_4_;
      auVar102._8_4_ = auVar101._8_4_ * auVar109._8_4_;
      auVar102._12_4_ = auVar101._12_4_ * auVar109._12_4_;
      auVar101 = NEON_frecps(auVar102,auVar48,4);
      iVar47 = -(uint)(auVar48._0_4_ == 0.0);
      iVar53 = -(uint)(auVar48._0_4_ == 0.0);
      iVar58 = -(uint)(auVar48._0_4_ == 0.0);
      iVar63 = -(uint)(auVar48._0_4_ == 0.0);
      fVar94 = auVar102._0_4_ * auVar101._0_4_;
      fVar95 = auVar102._4_4_ * auVar101._4_4_;
      fVar96 = auVar102._8_4_ * auVar101._8_4_;
      fVar98 = auVar102._12_4_ * auVar101._12_4_;
      auVar103._4_4_ = (int)*(unkbyte9 *)pcVar23;
      auVar103._0_4_ = SUB124(*pauVar2,0);
      auVar103._8_4_ = SUB124(*pauVar1,0);
      auVar103._12_4_ = 0;
      auVar110._4_4_ = (int)((unkuint9)*(unkbyte9 *)pcVar23 >> 0x20);
      auVar110._0_4_ = SUB124(*pauVar2,4);
      auVar110._8_4_ = SUB124(*pauVar1,4);
      auVar110._12_4_ = 0;
      uVar76 = auVar16[8];
      uVar79 = auVar16[9];
      uVar82 = auVar16[10];
      uVar85 = auVar16[0xb];
      uVar42 = a64_TBL(ZEXT816(0),auVar110,DAT_04101580);
      fVar36 = (float)((ulong)uVar42 >> 0x20);
      uVar99 = a64_TBL(ZEXT816(0),auVar110,DAT_041015c8);
      fVar38 = (float)((ulong)uVar99 >> 0x20);
      uVar97 = SUB124(*pauVar2,8);
      auVar7[4] = uVar75;
      auVar7._0_4_ = uVar97;
      auVar7[5] = uVar78;
      auVar7[6] = uVar81;
      auVar7[7] = uVar84;
      auVar7[8] = uVar76;
      auVar7[9] = uVar79;
      auVar7[10] = uVar82;
      auVar7[0xb] = uVar85;
      auVar7._12_4_ = 0;
      uVar114 = a64_TBL(ZEXT816(0),auVar7,DAT_041016a0);
      auVar8[4] = uVar75;
      auVar8._0_4_ = uVar97;
      auVar8[5] = uVar78;
      auVar8[6] = uVar81;
      auVar8[7] = uVar84;
      auVar8[8] = uVar76;
      auVar8[9] = uVar79;
      auVar8[10] = uVar82;
      auVar8[0xb] = uVar85;
      auVar8._12_4_ = 0;
      uVar115 = a64_TBL(ZEXT816(0),auVar8,DAT_04101580);
      uVar105 = a64_TBL(ZEXT816(0),auVar103,DAT_04101580);
      auVar9[4] = uVar75;
      auVar9._0_4_ = uVar97;
      auVar9[5] = uVar78;
      auVar9[6] = uVar81;
      auVar9[7] = uVar84;
      auVar9[8] = uVar76;
      auVar9[9] = uVar79;
      auVar9[10] = uVar82;
      auVar9[0xb] = uVar85;
      auVar9._12_4_ = 0;
      uVar100 = a64_TBL(ZEXT816(0),auVar9,DAT_04101598);
      fVar33 = (float)((ulong)uVar100 >> 0x20);
      auVar10[4] = uVar75;
      auVar10._0_4_ = uVar97;
      auVar10[5] = uVar78;
      auVar10[6] = uVar81;
      auVar10[7] = uVar84;
      auVar10[8] = uVar76;
      auVar10[9] = uVar79;
      auVar10[10] = uVar82;
      auVar10[0xb] = uVar85;
      auVar10._12_4_ = 0;
      uVar18 = a64_TBL(ZEXT816(0),auVar10,DAT_041015c8);
      uVar106 = a64_TBL(ZEXT816(0),auVar103,DAT_041015c8);
      uVar15 = a64_TBL(ZEXT816(0),auVar110,DAT_04101598);
      uVar108 = a64_TBL(ZEXT816(0),auVar110,DAT_041016a0);
      fVar37 = (float)((ulong)uVar114 >> 0x20);
      uVar107 = a64_TBL(ZEXT816(0),auVar103,DAT_04101598);
      uVar43 = a64_TBL(ZEXT816(0),auVar103,DAT_041016a0);
      fVar39 = (float)((ulong)uVar15 >> 0x20);
      fVar35 = (float)((ulong)uVar115 >> 0x20);
      fVar40 = (float)((ulong)uVar108 >> 0x20);
      fVar41 = (float)((ulong)uVar18 >> 0x20);
      fVar32 = (float)((ulong)uVar107 >> 0x20);
      fVar34 = (float)((ulong)uVar43 >> 0x20);
      fVar29 = (float)((ulong)uVar105 >> 0x20);
      fVar30 = (float)((ulong)uVar106 >> 0x20);
      fVar104 = fVar94 * ((float)uVar42 * (float)uVar100 - (float)uVar15 * (float)uVar115);
      fVar111 = fVar95 * (fVar36 * fVar33 - fVar39 * fVar35);
      fVar112 = fVar96 * ((float)uVar99 * (float)uVar114 - (float)uVar108 * (float)uVar18);
      fVar113 = fVar98 * (fVar38 * fVar37 - fVar40 * fVar41);
      fVar31 = fVar94 * ((float)uVar115 * (float)uVar107 - (float)uVar100 * (float)uVar105);
      fVar33 = fVar95 * (fVar35 * fVar32 - fVar33 * fVar29);
      fVar35 = fVar96 * ((float)uVar18 * (float)uVar43 - (float)uVar114 * (float)uVar106);
      fVar37 = fVar98 * (fVar41 * fVar34 - fVar37 * fVar30);
      fVar94 = fVar94 * ((float)uVar15 * (float)uVar105 - (float)uVar107 * (float)uVar42);
      fVar95 = fVar95 * (fVar39 * fVar29 - fVar32 * fVar36);
      fVar96 = fVar96 * ((float)uVar108 * (float)uVar106 - (float)uVar43 * (float)uVar99);
      fVar98 = fVar98 * (fVar40 * fVar30 - fVar34 * fVar38);
      bVar46 = (byte)iVar47;
      bVar49 = (byte)((uint)iVar47 >> 8);
      bVar50 = (byte)((uint)iVar47 >> 0x10);
      bVar51 = (byte)((uint)iVar47 >> 0x18);
      bVar52 = (byte)iVar53;
      bVar54 = (byte)((uint)iVar53 >> 8);
      bVar55 = (byte)((uint)iVar53 >> 0x10);
      bVar56 = (byte)((uint)iVar53 >> 0x18);
      bVar57 = (byte)iVar58;
      bVar59 = (byte)((uint)iVar58 >> 8);
      bVar60 = (byte)((uint)iVar58 >> 0x10);
      bVar61 = (byte)((uint)iVar58 >> 0x18);
      bVar62 = (byte)iVar63;
      bVar64 = (byte)((uint)iVar63 >> 8);
      bVar65 = (byte)((uint)iVar63 >> 0x10);
      bVar66 = (byte)((uint)iVar63 >> 0x18);
      bVar67 = SUB41(fVar104,0) & ~bVar46;
      bVar68 = (byte)((uint)fVar104 >> 8) & ~bVar49;
      bVar69 = (byte)((uint)fVar104 >> 0x10) & ~bVar50;
      bVar70 = (byte)((uint)fVar104 >> 0x18) & ~bVar51;
      bVar71 = SUB41(fVar111,0) & ~bVar52;
      bVar72 = (byte)((uint)fVar111 >> 8) & ~bVar54;
      bVar73 = (byte)((uint)fVar111 >> 0x10) & ~bVar55;
      bVar74 = (byte)((uint)fVar111 >> 0x18) & ~bVar56;
      bVar77 = SUB41(fVar112,0) & ~bVar57;
      bVar80 = (byte)((uint)fVar112 >> 8) & ~bVar59;
      bVar83 = (byte)((uint)fVar112 >> 0x10) & ~bVar60;
      bVar86 = (byte)((uint)fVar112 >> 0x18) & ~bVar61;
      bVar87 = SUB41(fVar113,0) & ~bVar62;
      bVar88 = (byte)((uint)fVar113 >> 8) & ~bVar64;
      bVar89 = (byte)((uint)fVar113 >> 0x10) & ~bVar65;
      bVar90 = (byte)((uint)fVar113 >> 0x18) & ~bVar66;
      fVar41 = (float)*(undefined8 *)(param_3 + 0x400);
      fVar44 = (float)((ulong)*(undefined8 *)(param_3 + 0x400) >> 0x20);
      fVar32 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~bVar51,
                               CONCAT12((byte)((uint)fVar31 >> 0x10) & ~bVar50,
                                        CONCAT11((byte)((uint)fVar31 >> 8) & ~bVar49,
                                                 SUB41(fVar31,0) & ~bVar46)));
      fVar36 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~bVar61,
                               CONCAT12((byte)((uint)fVar35 >> 0x10) & ~bVar60,
                                        CONCAT11((byte)((uint)fVar35 >> 8) & ~bVar59,
                                                 SUB41(fVar35,0) & ~bVar57)));
      fVar34 = (float)(CONCAT17((byte)((uint)fVar33 >> 0x18) & ~bVar56,
                                CONCAT16((byte)((uint)fVar33 >> 0x10) & ~bVar55,
                                         CONCAT15((byte)((uint)fVar33 >> 8) & ~bVar54,
                                                  CONCAT14(SUB41(fVar33,0) & ~bVar52,fVar32)))) >>
                      0x20);
      fVar38 = (float)(CONCAT17((byte)((uint)fVar37 >> 0x18) & ~bVar66,
                                CONCAT16((byte)((uint)fVar37 >> 0x10) & ~bVar65,
                                         CONCAT15((byte)((uint)fVar37 >> 8) & ~bVar64,
                                                  CONCAT14(SUB41(fVar37,0) & ~bVar62,fVar36)))) >>
                      0x20);
      fVar45 = (float)*(undefined8 *)(param_3 + 0x408);
      fVar39 = (-fVar104 * fVar41 - fVar31 * fVar44) - fVar94 * fVar45;
      fVar31 = (-fVar111 * fVar41 - fVar33 * fVar44) - fVar95 * fVar45;
      fVar40 = (-fVar112 * fVar41 - fVar35 * fVar44) - fVar96 * fVar45;
      fVar35 = (-fVar113 * fVar41 - fVar37 * fVar44) - fVar98 * fVar45;
      fVar29 = (float)CONCAT13((byte)((uint)fVar94 >> 0x18) & ~bVar51,
                               CONCAT12((byte)((uint)fVar94 >> 0x10) & ~bVar50,
                                        CONCAT11((byte)((uint)fVar94 >> 8) & ~bVar49,
                                                 SUB41(fVar94,0) & ~bVar46)));
      fVar96 = (float)CONCAT13((byte)((uint)fVar96 >> 0x18) & ~bVar61,
                               CONCAT12((byte)((uint)fVar96 >> 0x10) & ~bVar60,
                                        CONCAT11((byte)((uint)fVar96 >> 8) & ~bVar59,
                                                 SUB41(fVar96,0) & ~bVar57)));
      fVar95 = (float)(CONCAT17((byte)((uint)fVar95 >> 0x18) & ~bVar56,
                                CONCAT16((byte)((uint)fVar95 >> 0x10) & ~bVar55,
                                         CONCAT15((byte)((uint)fVar95 >> 8) & ~bVar54,
                                                  CONCAT14(SUB41(fVar95,0) & ~bVar52,fVar29)))) >>
                      0x20);
      fVar30 = (float)(CONCAT17((byte)((uint)fVar98 >> 0x18) & ~bVar66,
                                CONCAT16((byte)((uint)fVar98 >> 0x10) & ~bVar65,
                                         CONCAT15((byte)((uint)fVar98 >> 8) & ~bVar64,
                                                  CONCAT14(SUB41(fVar98,0) & ~bVar62,fVar96)))) >>
                      0x20);
      fVar98 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~bVar51,
                               CONCAT12((byte)((uint)fVar39 >> 0x10) & ~bVar50,
                                        CONCAT11((byte)((uint)fVar39 >> 8) & ~bVar49,
                                                 SUB41(fVar39,0) & ~bVar46)));
      fVar33 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~bVar61,
                               CONCAT12((byte)((uint)fVar40 >> 0x10) & ~bVar60,
                                        CONCAT11((byte)((uint)fVar40 >> 8) & ~bVar59,
                                                 SUB41(fVar40,0) & ~bVar57)));
      fVar39 = *(float *)(param_3 + 0x450);
      fVar40 = *(float *)(param_3 + 0x454);
      fVar94 = *(float *)(param_3 + 0x458);
      fVar31 = (float)(CONCAT17((byte)((uint)fVar31 >> 0x18) & ~bVar56,
                                CONCAT16((byte)((uint)fVar31 >> 0x10) & ~bVar55,
                                         CONCAT15((byte)((uint)fVar31 >> 8) & ~bVar54,
                                                  CONCAT14(SUB41(fVar31,0) & ~bVar52,fVar98)))) >>
                      0x20);
      fVar35 = (float)(CONCAT17((byte)((uint)fVar35 >> 0x18) & ~bVar66,
                                CONCAT16((byte)((uint)fVar35 >> 0x10) & ~bVar65,
                                         CONCAT15((byte)((uint)fVar35 >> 8) & ~bVar64,
                                                  CONCAT14(SUB41(fVar35,0) & ~bVar62,fVar33)))) >>
                      0x20);
      *(ulong *)(param_3 + 0x468) =
           CONCAT44(((float)CONCAT13(bVar90,CONCAT12(bVar89,CONCAT11(bVar88,bVar87))) * fVar41 +
                     fVar38 * fVar44 + fVar30 * fVar45 + fVar35) -
                    ((float)CONCAT13(bVar90,CONCAT12(bVar89,CONCAT11(bVar88,bVar87))) * fVar39 +
                     fVar38 * fVar40 + fVar30 * fVar94 + fVar35),
                    ((float)CONCAT13(bVar86,CONCAT12(bVar83,CONCAT11(bVar80,bVar77))) * fVar41 +
                     fVar36 * fVar44 + fVar96 * fVar45 + fVar33) -
                    ((float)CONCAT13(bVar86,CONCAT12(bVar83,CONCAT11(bVar80,bVar77))) * fVar39 +
                     fVar36 * fVar40 + fVar96 * fVar94 + fVar33));
      *(ulong *)(param_3 + 0x460) =
           CONCAT44(((float)CONCAT13(bVar74,CONCAT12(bVar73,CONCAT11(bVar72,bVar71))) * fVar41 +
                     fVar34 * fVar44 + fVar95 * fVar45 + fVar31) -
                    ((float)CONCAT13(bVar74,CONCAT12(bVar73,CONCAT11(bVar72,bVar71))) * fVar39 +
                     fVar34 * fVar40 + fVar95 * fVar94 + fVar31),
                    ((float)CONCAT13(bVar70,CONCAT12(bVar69,CONCAT11(bVar68,bVar67))) * fVar41 +
                     fVar32 * fVar44 + fVar29 * fVar45 + fVar98) -
                    ((float)CONCAT13(bVar70,CONCAT12(bVar69,CONCAT11(bVar68,bVar67))) * fVar39 +
                     fVar32 * fVar40 + fVar29 * fVar94 + fVar98));
    }
    lVar21 = *(long *)(*plVar27 + 0x10);
    if ((((*(char *)(lVar21 + 0x799) != '\0') || (*(char *)(lVar21 + 0x79a) != '\0')) &&
        (*(float *)(param_3 + 0x70) < 1.0)) &&
       ((*(int *)(lVar26 + 0x7ac) < 1 ||
        (fVar39 = *(float *)(param_3 + 0x70) + param_1 / (float)*(int *)(lVar26 + 0x7ac),
        *(float *)(param_3 + 0x70) = fVar39, 1.0 < fVar39)))) {
      param_3[0x70] = '\0';
      param_3[0x71] = '\0';
      param_3[0x72] = -0x80;
      param_3[0x73] = '?';
    }
    if (((param_5 & 1) != 0) || (param_3[0x68c] != '\0')) {
      lVar21 = *(long *)(*plVar27 + 0x10);
      param_6 = *(char *)(lVar26 + 0x798) == '\0' & param_6;
      if (((*(char *)(lVar21 + 0x79b) != '\0') || (*(char *)(lVar21 + 0x79c) != '\0')) &&
         ((*(int *)(lVar26 + 0x7a8) < 1 ||
          (fVar39 = *(float *)(param_3 + 0x6c) - param_1 / (float)*(int *)(lVar26 + 0x7a8),
          *(float *)(param_3 + 0x6c) = fVar39, fVar39 <= 1.1920929e-07)))) {
        param_3[0x6c] = '\0';
        param_3[0x6d] = '\0';
        param_3[0x6e] = '\0';
        param_3[0x6f] = '\0';
        return false;
      }
    }
    iVar47 = *(int *)(param_3 + 0x238);
    if ((iVar47 != *(int *)(param_3 + 0x234)) ||
       (*(int *)(*(long *)(param_3 + 0xb0) + (long)iVar47 * 0x20) != 0)) {
      iVar53 = *(int *)(param_3 + 0x230);
      iVar58 = iVar47;
      do {
        lVar21 = *(long *)(param_3 + 0xb0) + (long)iVar58 * 0x20;
        if (fVar28 - *(float *)(lVar21 + 8) < *(float *)(lVar21 + 0xc)) break;
        iVar47 = iVar47 + 1;
        iVar63 = 0;
        if (iVar53 != 0) {
          iVar63 = (iVar58 + 1) / iVar53;
        }
        *(int *)(param_3 + 0x238) = iVar47;
        iVar58 = (iVar58 + 1) - iVar63 * iVar53;
      } while (iVar58 != *(int *)(param_3 + 0x234));
      iVar58 = 0;
      if (iVar53 != 0) {
        iVar58 = iVar47 / iVar53;
      }
      *(int *)(param_3 + 0x238) = iVar47 - iVar58 * iVar53;
    }
    if (((*param_3 == '\0') && (*(char *)(lVar25 + 0x1e) != '\0')) && (0 < *(int *)(lVar25 + 0x26c))
       ) {
      *(float *)(param_3 + 100) = fVar28;
      iVar47 = *(int *)(*(long *)(param_3 + 0xa0) + 0x84c);
      uVar19 = FUN_0031e3f4(param_3);
      pfVar3 = (float *)(*(long *)(param_3 + 0xa0) + 0x848);
      if ((uVar19 & 1) == 0) {
        pfVar3 = (float *)(param_3 + 0x6cc);
      }
      fVar28 = *pfVar3;
      uVar4 = *(uint *)(param_3 + 0xac);
      *(uint *)(param_3 + 0xac) = uVar4 * 0x41c64e6d + 0x3039;
      if (0 < *(int *)(lVar25 + 0x26c)) {
        lVar24 = 0;
        lVar21 = 0;
        do {
          uVar19 = FUN_0031e3f4(param_3);
          pfVar3 = (float *)(*(long *)(param_3 + 0xa0) + 0x848);
          if ((uVar19 & 1) == 0) {
            pfVar3 = (float *)(param_3 + 0x6cc);
          }
          thunk_FUN_00328260(param_2,param_3 + 1,param_3,
                             (int)((*pfVar3 -
                                   ((float)iVar47 / 100.0) * fVar28 * (float)uVar4 * 2.3283064e-10)
                                   * *(float *)(param_3 + 0x5c) *
                                  *(float *)(*(long *)(lVar25 + 0x260) + lVar24 + 0x58)));
          lVar21 = lVar21 + 1;
          lVar24 = lVar24 + 0x60;
        } while (lVar21 < *(int *)(lVar25 + 0x26c));
      }
    }
    if ((((((param_6 & 1) != 0) && (param_3[3] != '\0')) &&
         ((*param_3 == '\0' || (*(char *)(*(long *)(param_3 + 0xa0) + 0x82c) != '\0')))) &&
        (fVar92 <= fVar91)) &&
       (((*(char *)(lVar26 + 0x838) == '\0' && (*param_3 == '\0')) ||
        ((fVar91 < fVar93 || (param_3[1] == '\0')))))) {
      FUN_00325c10(param_1,param_2,param_3 + 0x50,param_3 + 0x54,param_3 + 0x58,param_3 + 1,param_3)
      ;
    }
    if ((0 < *(int *)(*plVar27 + 0x88)) && (iVar47 = *(int *)(param_3 + 0x28), 0 < iVar47)) {
      lVar22 = 0;
      lVar21 = 0;
      lVar24 = 0x80;
      do {
        if (*(int *)(*(long *)(param_3 + 0xb0) + lVar22) != 0) {
          *(float *)(*(long *)(param_3 + 0xb8) + lVar24) =
               *(float *)(*(long *)(param_3 + 0xb8) + lVar24) + param_1;
          iVar47 = *(int *)(param_3 + 0x28);
        }
        lVar21 = lVar21 + 1;
        lVar24 = lVar24 + 0x158;
        lVar22 = lVar22 + 0x20;
      } while (lVar21 < iVar47);
    }
    if ((*(char *)(lVar26 + 0x792) == '\0') ||
       ((*(char *)(lVar26 + 0x792) == '\x02' & param_7) != 0)) {
      FUN_00326e90(*(undefined8 *)(param_3 + 0x98),param_3);
      uVar18 = FUN_0031be70(param_3);
      if (*(int *)(param_3 + 0x28) < 1) goto LAB_00326b68;
LAB_00326b74:
      FUN_00327be8(*(undefined4 *)(param_3 + 0x48),*(undefined4 *)(param_3 + 0x4c),uVar18,param_3);
    }
    else {
      *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_3 + 0x28);
      uVar18 = FUN_0031be70(param_3);
      if (0 < *(int *)(param_3 + 0x28)) goto LAB_00326b74;
LAB_00326b68:
      if (*(long *)(*plVar27 + 0x348) != 0) goto LAB_00326b74;
    }
    uVar19 = FUN_0031ed2c(param_3 + 0x880);
    if ((uVar19 & 1) == 0) {
      uVar19 = FUN_0031ed2c(param_3 + 0x8c8);
      if ((uVar19 & 1) == 0) goto LAB_00326bac;
LAB_00326bec:
      FUN_0031ee14(param_3 + 0x8c8,*(undefined4 *)(param_3 + 0x9a0));
      uVar19 = FUN_0031ed2c(param_3 + 0x910);
      if ((uVar19 & 1) != 0) goto LAB_00326bbc;
LAB_00326c08:
      uVar19 = FUN_0031ed2c(param_3 + 0x958);
    }
    else {
      FUN_0031ee14(param_3 + 0x880,*(undefined4 *)(param_3 + 0x9a0));
      uVar19 = FUN_0031ed2c(param_3 + 0x8c8);
      if ((uVar19 & 1) != 0) goto LAB_00326bec;
LAB_00326bac:
      uVar19 = FUN_0031ed2c(param_3 + 0x910);
      if ((uVar19 & 1) == 0) goto LAB_00326c08;
LAB_00326bbc:
      FUN_0031ee14(param_3 + 0x910,*(undefined4 *)(param_3 + 0x9a0));
      uVar19 = FUN_0031ed2c(param_3 + 0x958);
    }
    if ((uVar19 & 1) != 0) {
      FUN_0031ee14(param_3 + 0x958,*(undefined4 *)(param_3 + 0x9a0));
    }
    *(undefined8 *)(param_3 + 0x458) = *(undefined8 *)(param_3 + 0x408);
    *(undefined8 *)(param_3 + 0x450) = *(undefined8 *)(param_3 + 0x400);
    *(float *)(param_3 + 0x44) = *(float *)(param_3 + 0x44) + param_1;
    if ((*param_3 == '\0') || (*(char *)(*(long *)(param_3 + 0xa0) + 0x82c) != '\0')) {
      if ((*(char *)(lVar26 + 0x838) == '\0') || (*(char *)(lVar25 + 0x1e) != '\0')) {
        if (((((param_5 & 1) != 0) || (param_3[0x68c] != '\0' || *param_3 != '\0')) &&
            (fVar92 + *(float *)(param_3 + 100) +
             (float)*(int *)(*(long *)(param_3 + 0x240) + 0x420) < fVar91)) ||
           (((*(char *)(lVar25 + 0x1e) != '\0' && (-1 < *(int *)(lVar25 + 0x270))) &&
            (uVar19 = FUN_0031e208(param_3), (uVar19 & 1) != 0)))) goto LAB_0032656c;
      }
      else if (*(char *)(lVar26 + 0x8f0) != '\x01') {
        lVar25 = *plVar27;
        fVar93 = fVar93 + (float)*(int *)(lVar25 + 0x420);
        if ((*(char *)(*(long *)(lVar25 + 0x10) + 0x79b) != '\0') ||
           (*(char *)(*(long *)(lVar25 + 0x10) + 0x79c) != '\0')) {
          fVar92 = (float)NEON_ucvtf(*(undefined4 *)(lVar26 + 0x7a8));
          fVar93 = fVar93 + fVar92;
        }
        iVar47 = *(int *)(lVar25 + 0x340);
        if (0 < iVar47) {
          if (iVar47 == 3) {
            iVar47 = FUN_0033a8c8(param_3);
          }
          else {
            if (iVar47 != 2) goto LAB_00326e7c;
            iVar47 = FUN_003375f8(param_3);
          }
          fVar93 = fVar93 + (float)iVar47;
        }
LAB_00326e7c:
        return fVar91 <= fVar93;
      }
    }
    else if ((param_3[5] == '\x01') &&
            (fVar92 + *(float *)(param_3 + 100) +
             (float)*(int *)(*(long *)(param_3 + 0x240) + 0x420) < fVar91)) goto LAB_0032656c;
    bVar17 = true;
  }
  else {
LAB_0032656c:
    bVar17 = false;
  }
  return bVar17;
}

