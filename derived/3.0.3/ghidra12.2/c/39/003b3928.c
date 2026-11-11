
void FUN_003b3928(long param_1,float *param_2,unkbyte9 *param_3,int param_4,ulong param_5)

{
  float *pfVar1;
  float *pfVar2;
  unkbyte9 *pVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  unkbyte9 Var29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  byte bVar51;
  byte bVar53;
  byte bVar54;
  int iVar52;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  int iVar57;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  int iVar62;
  byte bVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  float fVar75;
  float fVar76;
  undefined1 auVar74 [16];
  float fVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  float fVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined1 auVar90 [12];
  undefined1 auVar91 [16];
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined1 auVar107 [16];
  undefined8 uVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar115 [16];
  undefined1 auVar114 [16];
  undefined1 auVar113 [16];
  undefined1 auVar112 [16];
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  undefined1 uVar124;
  byte bVar125;
  undefined1 uVar126;
  byte bVar127;
  undefined1 uVar128;
  byte bVar129;
  undefined1 uVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  float fVar136;
  undefined8 uVar137;
  undefined1 auVar138 [12];
  float fVar141;
  float fVar142;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined8 uVar143;
  undefined1 auVar144 [12];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined8 uVar147;
  float local_70;
  float fStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  undefined8 uStack_38;
  
  auVar109 = *(undefined1 (*) [16])(param_3 + 2);
  pfVar2 = (float *)(*(long *)(param_1 + 0x20) + (long)param_4 * 0x40);
  lVar32 = ((long)param_4 + (long)param_4 * 2) * 0x20;
  fVar75 = (float)*(undefined8 *)(pfVar2 + 0xc);
  fVar33 = (float)*(undefined8 *)param_3;
  fVar35 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar38 = (float)*(undefined8 *)((long)param_3 + 8);
  fVar40 = (float)((ulong)*(undefined8 *)((long)param_3 + 8) >> 0x20);
  auVar111 = *(undefined1 (*) [16])(pfVar2 + 4);
  fVar76 = (float)((ulong)*(undefined8 *)(pfVar2 + 0xc) >> 0x20);
  fVar41 = (float)*(undefined8 *)(param_3 + 1);
  fVar44 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar66 = (float)*(undefined8 *)((long)param_3 + 0x18);
  fVar67 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x18) >> 0x20);
  fVar34 = auVar111._0_4_;
  fVar37 = auVar111._4_4_;
  fVar77 = (float)*(undefined8 *)(pfVar2 + 0xe);
  fVar50 = auVar109._0_4_;
  fVar136 = auVar109._4_4_;
  fVar141 = auVar109._8_4_;
  fVar142 = auVar109._12_4_;
  fVar39 = auVar111._8_4_;
  fVar14 = fVar35 * fVar34 + fVar44 * fVar37 + fVar136 * fVar39;
  fVar15 = fVar40 * fVar34 + fVar67 * fVar37 + fVar142 * fVar39;
  fVar70 = (float)*(undefined8 *)pfVar2;
  fVar36 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
  fVar68 = (float)*(undefined8 *)(pfVar2 + 8);
  fVar69 = (float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20);
  fVar48 = (float)*(undefined8 *)(pfVar2 + 2);
  local_70 = fVar33 * fVar70 + fVar41 * fVar36 + fVar50 * fVar48;
  fStack_6c = fVar35 * fVar70 + fVar44 * fVar36 + fVar136 * fVar48;
  uStack_68 = CONCAT44(fVar40 * fVar70 + fVar67 * fVar36 + fVar142 * fVar48,
                       fVar38 * fVar70 + fVar66 * fVar36 + fVar141 * fVar48);
  fVar70 = (float)*(undefined8 *)(pfVar2 + 10);
  local_50 = fVar33 * fVar68 + fVar41 * fVar69 + fVar50 * fVar70;
  fStack_4c = fVar35 * fVar68 + fVar44 * fVar69 + fVar136 * fVar70;
  uStack_48 = CONCAT44(fVar40 * fVar68 + fVar67 * fVar69 + fVar142 * fVar70,
                       fVar38 * fVar68 + fVar66 * fVar69 + fVar141 * fVar70);
  fStack_40 = (float)*(undefined8 *)(param_3 + 3) +
              fVar33 * fVar75 + fVar41 * fVar76 + fVar50 * fVar77;
  fStack_3c = (float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20) +
              fVar35 * fVar75 + fVar44 * fVar76 + fVar136 * fVar77;
  uStack_38 = CONCAT44((float)((ulong)*(undefined8 *)((long)param_3 + 0x38) >> 0x20) +
                       fVar40 * fVar75 + fVar67 * fVar76 + fVar142 * fVar77,
                       (float)*(undefined8 *)((long)param_3 + 0x38) +
                       fVar38 * fVar75 + fVar66 * fVar76 + fVar141 * fVar77);
  uStack_58 = CONCAT17((char)((uint)fVar15 >> 0x18),
                       CONCAT16((char)((uint)fVar15 >> 0x10),
                                CONCAT15((char)((uint)fVar15 >> 8),
                                         CONCAT14(SUB41(fVar15,0),
                                                  fVar38 * fVar34 + fVar66 * fVar37 +
                                                  fVar141 * fVar39))));
  uStack_60 = CONCAT17((char)((uint)fVar14 >> 0x18),
                       CONCAT16((char)((uint)fVar14 >> 0x10),
                                CONCAT15((char)((uint)fVar14 >> 8),
                                         CONCAT14(SUB41(fVar14,0),
                                                  fVar33 * fVar34 + fVar41 * fVar37 +
                                                  fVar50 * fVar39))));
  FUN_003b4074(*(uint *)(*(long *)(param_1 + 0x10) + lVar32 + 0x34) & 0x70000,&local_70,param_3,
               pfVar2,*(long *)(param_1 + 0x18) + lVar32 + 0x20);
  uVar31 = DAT_041016a0;
  uVar89 = DAT_041015c8;
  uVar30 = DAT_04101598;
  uVar88 = DAT_04101580;
  auVar5 = *(undefined1 (*) [16])(param_3 + 1);
  pVar3 = param_3 + 2;
  uVar10 = *(undefined8 *)((long)param_3 + 0x28);
  uVar78 = (undefined1)((ulong)uVar10 >> 8);
  uVar79 = (undefined1)((ulong)uVar10 >> 0x10);
  uVar80 = (undefined1)((ulong)uVar10 >> 0x18);
  uVar81 = (undefined1)((ulong)uVar10 >> 0x20);
  uVar82 = (undefined1)((ulong)uVar10 >> 0x28);
  uVar83 = (undefined1)((ulong)uVar10 >> 0x30);
  uVar84 = (undefined1)((ulong)uVar10 >> 0x38);
  Var29 = *pVar3;
  uVar87 = a64_TBL(ZEXT816(0),auVar5,DAT_04101580);
  uVar106 = a64_TBL(ZEXT816(0),auVar5,DAT_041015c8);
  auVar109[9] = uVar78;
  auVar109._0_9_ = *pVar3;
  auVar109[10] = uVar79;
  auVar109[0xb] = uVar80;
  auVar109[0xc] = uVar81;
  auVar109[0xd] = uVar82;
  auVar109[0xe] = uVar83;
  auVar109[0xf] = uVar84;
  uVar73 = a64_TBL(ZEXT816(0),auVar109,DAT_04101598);
  uVar108 = a64_TBL(ZEXT816(0),auVar5,DAT_04101598);
  auVar111[9] = uVar78;
  auVar111._0_9_ = *pVar3;
  auVar111[10] = uVar79;
  auVar111[0xb] = uVar80;
  auVar111[0xc] = uVar81;
  auVar111[0xd] = uVar82;
  auVar111[0xe] = uVar83;
  auVar111[0xf] = uVar84;
  uVar104 = a64_TBL(ZEXT816(0),auVar111,DAT_041016a0);
  uVar71 = a64_TBL(ZEXT816(0),auVar5,DAT_041016a0);
  auVar146[9] = uVar78;
  auVar146._0_9_ = *pVar3;
  auVar146[10] = uVar79;
  auVar146[0xb] = uVar80;
  auVar146[0xc] = uVar81;
  auVar146[0xd] = uVar82;
  auVar146[0xe] = uVar83;
  auVar146[0xf] = uVar84;
  uVar105 = a64_TBL(ZEXT816(0),auVar146,DAT_04101580);
  auVar4[9] = uVar78;
  auVar4._0_9_ = *pVar3;
  auVar4[10] = uVar79;
  auVar4[0xb] = uVar80;
  auVar4[0xc] = uVar81;
  auVar4[0xd] = uVar82;
  auVar4[0xe] = uVar83;
  auVar4[0xf] = uVar84;
  uVar72 = a64_TBL(ZEXT816(0),auVar4,DAT_041015c8);
  fVar14 = (float)*(undefined8 *)param_3;
  fVar15 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar33 = (float)*(undefined8 *)((long)param_3 + 8);
  fVar35 = (float)((ulong)*(undefined8 *)((long)param_3 + 8) >> 0x20);
  fVar14 = (fVar14 * (float)uVar87 * (float)uVar73 - (float)uVar108 * fVar14 * (float)uVar105) +
           (fVar15 * (float)((ulong)uVar87 >> 0x20) * (float)((ulong)uVar73 >> 0x20) -
           (float)((ulong)uVar108 >> 0x20) * fVar15 * (float)((ulong)uVar105 >> 0x20)) +
           (fVar33 * (float)uVar106 * (float)uVar104 - (float)uVar71 * fVar33 * (float)uVar72) +
           (fVar35 * (float)((ulong)uVar106 >> 0x20) * (float)((ulong)uVar104 >> 0x20) -
           (float)((ulong)uVar71 >> 0x20) * fVar35 * (float)((ulong)uVar72 >> 0x20));
  uVar96 = SUB41(fVar14,0);
  uVar97 = (undefined1)((uint)fVar14 >> 8);
  uVar98 = (undefined1)((uint)fVar14 >> 0x10);
  uVar99 = (undefined1)((uint)fVar14 >> 0x18);
  uVar92 = auVar5[4];
  uVar93 = auVar5[5];
  uVar94 = auVar5[6];
  uVar95 = auVar5[7];
  auVar11[4] = uVar96;
  auVar11._0_4_ = fVar14;
  auVar11[5] = uVar97;
  auVar11[6] = uVar98;
  auVar11[7] = uVar99;
  auVar11[8] = uVar96;
  auVar11[9] = uVar97;
  auVar11[10] = uVar98;
  auVar11[0xb] = uVar99;
  auVar11[0xc] = uVar96;
  auVar11[0xd] = uVar97;
  auVar11[0xe] = uVar98;
  auVar11[0xf] = uVar99;
  auVar109 = NEON_frecpe(auVar11,4);
  uVar124 = (undefined1)((unkuint9)Var29 >> 0x20);
  uVar126 = (undefined1)((unkuint9)Var29 >> 0x28);
  uVar128 = (undefined1)((unkuint9)Var29 >> 0x30);
  uVar130 = (undefined1)((unkuint9)Var29 >> 0x38);
  auVar74._4_4_ = auVar5._8_4_;
  auVar74._0_4_ = fVar33;
  auVar74._8_4_ =
       (int)(CONCAT17(uVar80,CONCAT16(uVar79,CONCAT15(uVar78,CONCAT14((char)uVar10,fVar33)))) >>
            0x20);
  auVar74._12_4_ = 0;
  uVar82 = (undefined1)Var29;
  uVar83 = (undefined1)((unkuint9)Var29 >> 8);
  uVar84 = (undefined1)((unkuint9)Var29 >> 0x10);
  uVar85 = (undefined1)((unkuint9)Var29 >> 0x18);
  uVar78 = auVar5[0];
  uVar79 = auVar5[1];
  uVar80 = auVar5[2];
  uVar81 = auVar5[3];
  auVar12[4] = uVar96;
  auVar12._0_4_ = fVar14;
  auVar12[5] = uVar97;
  auVar12[6] = uVar98;
  auVar12[7] = uVar99;
  auVar12[8] = uVar96;
  auVar12[9] = uVar97;
  auVar12[10] = uVar98;
  auVar12[0xb] = uVar99;
  auVar12[0xc] = uVar96;
  auVar12[0xd] = uVar97;
  auVar12[0xe] = uVar98;
  auVar12[0xf] = uVar99;
  auVar111 = NEON_frecps(auVar109,auVar12,4);
  uVar17 = (undefined4)((unkuint9)*param_3 >> 0x20);
  auVar16[4] = uVar92;
  auVar16._0_4_ = uVar17;
  auVar16[5] = uVar93;
  auVar16[6] = uVar94;
  auVar16[7] = uVar95;
  auVar16[8] = uVar124;
  auVar16[9] = uVar126;
  auVar16[10] = uVar128;
  auVar16[0xb] = uVar130;
  auVar16._12_4_ = 0;
  uVar10 = a64_TBL(ZEXT816(0),auVar16,DAT_04101580);
  auVar18[4] = uVar92;
  auVar18._0_4_ = uVar17;
  auVar18[5] = uVar93;
  auVar18[6] = uVar94;
  auVar18[7] = uVar95;
  auVar18[8] = uVar124;
  auVar18[9] = uVar126;
  auVar18[10] = uVar128;
  auVar18[0xb] = uVar130;
  auVar18._12_4_ = 0;
  uVar87 = a64_TBL(ZEXT816(0),auVar18,DAT_041015c8);
  uVar137 = a64_TBL(ZEXT816(0),auVar74,DAT_04101598);
  uVar143 = a64_TBL(ZEXT816(0),auVar74,DAT_041016a0);
  uVar147 = a64_TBL(ZEXT816(0),auVar74,DAT_04101580);
  uVar71 = a64_TBL(ZEXT816(0),auVar74,DAT_041015c8);
  auVar19[4] = uVar92;
  auVar19._0_4_ = uVar17;
  auVar19[5] = uVar93;
  auVar19[6] = uVar94;
  auVar19[7] = uVar95;
  auVar19[8] = uVar124;
  auVar19[9] = uVar126;
  auVar19[10] = uVar128;
  auVar19[0xb] = uVar130;
  auVar19._12_4_ = 0;
  uVar104 = a64_TBL(ZEXT816(0),auVar19,DAT_04101598);
  uVar6 = (undefined4)*param_3;
  auVar5[4] = uVar78;
  auVar5._0_4_ = uVar6;
  auVar5[5] = uVar79;
  auVar5[6] = uVar80;
  auVar5[7] = uVar81;
  auVar5[8] = uVar82;
  auVar5[9] = uVar83;
  auVar5[10] = uVar84;
  auVar5[0xb] = uVar85;
  auVar5._12_4_ = 0;
  uVar72 = a64_TBL(ZEXT816(0),auVar5,DAT_041016a0);
  auVar110._0_4_ = auVar109._0_4_ * auVar111._0_4_;
  auVar110._4_4_ = auVar109._4_4_ * auVar111._4_4_;
  auVar110._8_4_ = auVar109._8_4_ * auVar111._8_4_;
  auVar110._12_4_ = auVar109._12_4_ * auVar111._12_4_;
  auVar20[4] = uVar92;
  auVar20._0_4_ = uVar17;
  auVar20[5] = uVar93;
  auVar20[6] = uVar94;
  auVar20[7] = uVar95;
  auVar20[8] = uVar124;
  auVar20[9] = uVar126;
  auVar20[10] = uVar128;
  auVar20[0xb] = uVar130;
  auVar20._12_4_ = 0;
  uVar105 = a64_TBL(ZEXT816(0),auVar20,DAT_041016a0);
  auVar7[4] = uVar78;
  auVar7._0_4_ = uVar6;
  auVar7[5] = uVar79;
  auVar7[6] = uVar80;
  auVar7[7] = uVar81;
  auVar7[8] = uVar82;
  auVar7[9] = uVar83;
  auVar7[10] = uVar84;
  auVar7[0xb] = uVar85;
  auVar7._12_4_ = 0;
  uVar106 = a64_TBL(ZEXT816(0),auVar7,DAT_04101598);
  auVar8[4] = uVar78;
  auVar8._0_4_ = uVar6;
  auVar8[5] = uVar79;
  auVar8[6] = uVar80;
  auVar8[7] = uVar81;
  auVar8[8] = uVar82;
  auVar8[9] = uVar83;
  auVar8[10] = uVar84;
  auVar8[0xb] = uVar85;
  auVar8._12_4_ = 0;
  uVar108 = a64_TBL(ZEXT816(0),auVar8,DAT_04101580);
  auVar9[4] = uVar78;
  auVar9._0_4_ = uVar6;
  auVar9[5] = uVar79;
  auVar9[6] = uVar80;
  auVar9[7] = uVar81;
  auVar9[8] = uVar82;
  auVar9[9] = uVar83;
  auVar9[10] = uVar84;
  auVar9[0xb] = uVar85;
  auVar9._12_4_ = 0;
  uVar73 = a64_TBL(ZEXT816(0),auVar9,DAT_041015c8);
  fVar33 = (float)((ulong)uVar10 >> 0x20);
  fVar44 = (float)((ulong)uVar137 >> 0x20);
  fVar38 = (float)((ulong)uVar87 >> 0x20);
  fVar67 = (float)((ulong)uVar143 >> 0x20);
  fVar36 = (float)((ulong)uVar104 >> 0x20);
  fVar66 = (float)((ulong)uVar147 >> 0x20);
  fVar48 = (float)((ulong)uVar105 >> 0x20);
  fVar39 = (float)((ulong)uVar71 >> 0x20);
  auVar13[4] = uVar96;
  auVar13._0_4_ = fVar14;
  auVar13[5] = uVar97;
  auVar13[6] = uVar98;
  auVar13[7] = uVar99;
  auVar13[8] = uVar96;
  auVar13[9] = uVar97;
  auVar13[10] = uVar98;
  auVar13[0xb] = uVar99;
  auVar13[0xc] = uVar96;
  auVar13[0xd] = uVar97;
  auVar13[0xe] = uVar98;
  auVar13[0xf] = uVar99;
  auVar109 = NEON_frecps(auVar110,auVar13,4);
  fVar68 = (float)((ulong)uVar106 >> 0x20);
  fVar69 = (float)((ulong)uVar72 >> 0x20);
  fVar34 = (float)((ulong)uVar108 >> 0x20);
  fVar37 = (float)((ulong)uVar73 >> 0x20);
  iVar52 = -(uint)(fVar14 == 0.0);
  bVar51 = (byte)iVar52;
  bVar53 = (byte)((uint)iVar52 >> 8);
  bVar54 = (byte)((uint)iVar52 >> 0x10);
  bVar55 = (byte)((uint)iVar52 >> 0x18);
  iVar52 = -(uint)(fVar14 == 0.0);
  bVar56 = (byte)iVar52;
  bVar58 = (byte)((uint)iVar52 >> 8);
  bVar59 = (byte)((uint)iVar52 >> 0x10);
  bVar60 = (byte)((uint)iVar52 >> 0x18);
  iVar52 = -(uint)(fVar14 == 0.0);
  bVar61 = (byte)iVar52;
  bVar63 = (byte)((uint)iVar52 >> 8);
  bVar64 = (byte)((uint)iVar52 >> 0x10);
  bVar65 = (byte)((uint)iVar52 >> 0x18);
  iVar52 = -(uint)(fVar14 == 0.0);
  bVar100 = (byte)iVar52;
  bVar101 = (byte)((uint)iVar52 >> 8);
  bVar102 = (byte)((uint)iVar52 >> 0x10);
  bVar103 = (byte)((uint)iVar52 >> 0x18);
  fVar70 = auVar110._0_4_ * auVar109._0_4_;
  fVar75 = auVar110._4_4_ * auVar109._4_4_;
  fVar76 = auVar110._8_4_ * auVar109._8_4_;
  fVar77 = auVar110._12_4_ * auVar109._12_4_;
  fVar14 = fVar70 * ((float)uVar10 * (float)uVar137 - (float)uVar104 * (float)uVar147);
  fVar15 = fVar75 * (fVar33 * fVar44 - fVar36 * fVar66);
  fVar35 = fVar76 * ((float)uVar87 * (float)uVar143 - (float)uVar105 * (float)uVar71);
  fVar40 = fVar77 * (fVar38 * fVar67 - fVar48 * fVar39);
  fVar41 = fVar70 * ((float)uVar147 * (float)uVar106 - (float)uVar137 * (float)uVar108);
  fVar44 = fVar75 * (fVar66 * fVar68 - fVar44 * fVar34);
  fVar66 = fVar76 * ((float)uVar71 * (float)uVar72 - (float)uVar143 * (float)uVar73);
  fVar67 = fVar77 * (fVar39 * fVar69 - fVar67 * fVar37);
  fVar39 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~bVar55,
                           CONCAT12((byte)((uint)fVar14 >> 0x10) & ~bVar54,
                                    CONCAT11((byte)((uint)fVar14 >> 8) & ~bVar53,
                                             SUB41(fVar14,0) & ~bVar51)));
  auVar138._0_8_ =
       CONCAT17((byte)((uint)fVar15 >> 0x18) & ~bVar60,
                CONCAT16((byte)((uint)fVar15 >> 0x10) & ~bVar59,
                         CONCAT15((byte)((uint)fVar15 >> 8) & ~bVar58,
                                  CONCAT14(SUB41(fVar15,0) & ~bVar56,fVar39))));
  auVar138[8] = SUB41(fVar35,0) & ~bVar61;
  auVar138[9] = (byte)((uint)fVar35 >> 8) & ~bVar63;
  auVar138[10] = (byte)((uint)fVar35 >> 0x10) & ~bVar64;
  auVar138[0xb] = (byte)((uint)fVar35 >> 0x18) & ~bVar65;
  auVar139[0xc] = SUB41(fVar40,0) & ~bVar100;
  auVar139._0_12_ = auVar138;
  auVar139[0xd] = (byte)((uint)fVar40 >> 8) & ~bVar101;
  auVar139[0xe] = (byte)((uint)fVar40 >> 0x10) & ~bVar102;
  auVar139[0xf] = (byte)((uint)fVar40 >> 0x18) & ~bVar103;
  fVar70 = fVar70 * ((float)uVar104 * (float)uVar108 - (float)uVar106 * (float)uVar10);
  fVar75 = fVar75 * (fVar36 * fVar34 - fVar68 * fVar33);
  fVar76 = fVar76 * ((float)uVar105 * (float)uVar73 - (float)uVar72 * (float)uVar87);
  fVar77 = fVar77 * (fVar48 * fVar37 - fVar69 * fVar38);
  fVar37 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~bVar55,
                           CONCAT12((byte)((uint)fVar41 >> 0x10) & ~bVar54,
                                    CONCAT11((byte)((uint)fVar41 >> 8) & ~bVar53,
                                             SUB41(fVar41,0) & ~bVar51)));
  auVar144._0_8_ =
       CONCAT17((byte)((uint)fVar44 >> 0x18) & ~bVar60,
                CONCAT16((byte)((uint)fVar44 >> 0x10) & ~bVar59,
                         CONCAT15((byte)((uint)fVar44 >> 8) & ~bVar58,
                                  CONCAT14(SUB41(fVar44,0) & ~bVar56,fVar37))));
  auVar144[8] = SUB41(fVar66,0) & ~bVar61;
  auVar144[9] = (byte)((uint)fVar66 >> 8) & ~bVar63;
  auVar144[10] = (byte)((uint)fVar66 >> 0x10) & ~bVar64;
  auVar144[0xb] = (byte)((uint)fVar66 >> 0x18) & ~bVar65;
  auVar145[0xc] = SUB41(fVar67,0) & ~bVar100;
  auVar145._0_12_ = auVar144;
  auVar145[0xd] = (byte)((uint)fVar67 >> 8) & ~bVar101;
  auVar145[0xe] = (byte)((uint)fVar67 >> 0x10) & ~bVar102;
  auVar145[0xf] = (byte)((uint)fVar67 >> 0x18) & ~bVar103;
  fVar68 = (float)*(undefined8 *)(param_3 + 3);
  fVar69 = (float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20);
  fVar36 = (float)*(undefined8 *)((long)param_3 + 0x38);
  fVar14 = (-fVar14 * fVar68 - fVar41 * fVar69) - fVar70 * fVar36;
  fVar33 = (-fVar15 * fVar68 - fVar44 * fVar69) - fVar75 * fVar36;
  fVar38 = (-fVar35 * fVar68 - fVar66 * fVar69) - fVar76 * fVar36;
  fVar41 = (-fVar40 * fVar68 - fVar67 * fVar69) - fVar77 * fVar36;
  bVar116 = SUB41(fVar70,0) & ~bVar51;
  bVar117 = (byte)((uint)fVar70 >> 8) & ~bVar53;
  bVar118 = (byte)((uint)fVar70 >> 0x10) & ~bVar54;
  bVar119 = (byte)((uint)fVar70 >> 0x18) & ~bVar55;
  bVar120 = SUB41(fVar75,0) & ~bVar56;
  bVar121 = (byte)((uint)fVar75 >> 8) & ~bVar58;
  bVar122 = (byte)((uint)fVar75 >> 0x10) & ~bVar59;
  bVar123 = (byte)((uint)fVar75 >> 0x18) & ~bVar60;
  bVar125 = SUB41(fVar76,0) & ~bVar61;
  bVar127 = (byte)((uint)fVar76 >> 8) & ~bVar63;
  bVar129 = (byte)((uint)fVar76 >> 0x10) & ~bVar64;
  bVar131 = (byte)((uint)fVar76 >> 0x18) & ~bVar65;
  bVar132 = SUB41(fVar77,0) & ~bVar100;
  bVar133 = (byte)((uint)fVar77 >> 8) & ~bVar101;
  bVar134 = (byte)((uint)fVar77 >> 0x10) & ~bVar102;
  bVar135 = (byte)((uint)fVar77 >> 0x18) & ~bVar103;
  fVar36 = (float)((ulong)auVar138._0_8_ >> 0x20);
  fVar48 = auVar138._8_4_;
  fVar34 = auVar139._12_4_;
  fVar50 = (float)((ulong)auVar144._0_8_ >> 0x20);
  fVar136 = auVar144._8_4_;
  fVar141 = auVar145._12_4_;
  fVar15 = (float)uStack_68;
  fVar70 = fVar39 * local_70 + fVar37 * fStack_6c +
           (float)CONCAT13(bVar119,CONCAT12(bVar118,CONCAT11(bVar117,bVar116))) * fVar15;
  fVar75 = fVar36 * local_70 + fVar50 * fStack_6c +
           (float)CONCAT13(bVar123,CONCAT12(bVar122,CONCAT11(bVar121,bVar120))) * fVar15;
  fVar76 = fVar48 * local_70 + fVar136 * fStack_6c +
           (float)CONCAT13(bVar131,CONCAT12(bVar129,CONCAT11(bVar127,bVar125))) * fVar15;
  fVar77 = fVar34 * local_70 + fVar141 * fStack_6c +
           (float)CONCAT13(bVar135,CONCAT12(bVar134,CONCAT11(bVar133,bVar132))) * fVar15;
  fVar66 = fVar39 * local_50 + fVar37 * fStack_4c +
           (float)CONCAT13(bVar119,CONCAT12(bVar118,CONCAT11(bVar117,bVar116))) * (float)uStack_48;
  fVar67 = fVar36 * local_50 + fVar50 * fStack_4c +
           (float)CONCAT13(bVar123,CONCAT12(bVar122,CONCAT11(bVar121,bVar120))) * (float)uStack_48;
  fVar68 = fVar48 * local_50 + fVar136 * fStack_4c +
           (float)CONCAT13(bVar131,CONCAT12(bVar129,CONCAT11(bVar127,bVar125))) * (float)uStack_48;
  fVar69 = fVar34 * local_50 + fVar141 * fStack_4c +
           (float)CONCAT13(bVar135,CONCAT12(bVar134,CONCAT11(bVar133,bVar132))) * (float)uStack_48;
  fVar15 = fVar39 * (float)uStack_60 + fVar37 * uStack_60._4_4_ +
           (float)CONCAT13(bVar119,CONCAT12(bVar118,CONCAT11(bVar117,bVar116))) * (float)uStack_58;
  fVar35 = fVar36 * (float)uStack_60 + fVar50 * uStack_60._4_4_ +
           (float)CONCAT13(bVar123,CONCAT12(bVar122,CONCAT11(bVar121,bVar120))) * (float)uStack_58;
  fVar40 = fVar48 * (float)uStack_60 + fVar136 * uStack_60._4_4_ +
           (float)CONCAT13(bVar131,CONCAT12(bVar129,CONCAT11(bVar127,bVar125))) * (float)uStack_58;
  fVar44 = fVar34 * (float)uStack_60 + fVar141 * uStack_60._4_4_ +
           (float)CONCAT13(bVar135,CONCAT12(bVar134,CONCAT11(bVar133,bVar132))) * (float)uStack_58;
  fVar14 = fVar39 * fStack_40 + fVar37 * fStack_3c +
           (float)CONCAT13(bVar119,CONCAT12(bVar118,CONCAT11(bVar117,bVar116))) * (float)uStack_38 +
           (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~bVar55,
                           CONCAT12((byte)((uint)fVar14 >> 0x10) & ~bVar54,
                                    CONCAT11((byte)((uint)fVar14 >> 8) & ~bVar53,
                                             SUB41(fVar14,0) & ~bVar51)));
  fVar33 = fVar36 * fStack_40 + fVar50 * fStack_3c +
           (float)CONCAT13(bVar123,CONCAT12(bVar122,CONCAT11(bVar121,bVar120))) * (float)uStack_38 +
           (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~bVar60,
                           CONCAT12((byte)((uint)fVar33 >> 0x10) & ~bVar59,
                                    CONCAT11((byte)((uint)fVar33 >> 8) & ~bVar58,
                                             SUB41(fVar33,0) & ~bVar56)));
  fVar38 = fVar48 * fStack_40 + fVar136 * fStack_3c +
           (float)CONCAT13(bVar131,CONCAT12(bVar129,CONCAT11(bVar127,bVar125))) * (float)uStack_38 +
           (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~bVar65,
                           CONCAT12((byte)((uint)fVar38 >> 0x10) & ~bVar64,
                                    CONCAT11((byte)((uint)fVar38 >> 8) & ~bVar63,
                                             SUB41(fVar38,0) & ~bVar61)));
  fVar41 = fVar34 * fStack_40 + fVar141 * fStack_3c +
           (float)CONCAT13(bVar135,CONCAT12(bVar134,CONCAT11(bVar133,bVar132))) * (float)uStack_38 +
           (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~bVar103,
                           CONCAT12((byte)((uint)fVar41 >> 0x10) & ~bVar102,
                                    CONCAT11((byte)((uint)fVar41 >> 8) & ~bVar101,
                                             SUB41(fVar41,0) & ~bVar100)));
  param_2[2] = fVar76;
  param_2[3] = fVar77;
  *param_2 = fVar70;
  param_2[1] = fVar75;
  *(ulong *)(param_2 + 6) =
       CONCAT17((char)((uint)fVar44 >> 0x18),
                CONCAT16((char)((uint)fVar44 >> 0x10),
                         CONCAT15((char)((uint)fVar44 >> 8),CONCAT14(SUB41(fVar44,0),fVar40))));
  *(ulong *)(param_2 + 4) =
       CONCAT17((char)((uint)fVar35 >> 0x18),
                CONCAT16((char)((uint)fVar35 >> 0x10),
                         CONCAT15((char)((uint)fVar35 >> 8),CONCAT14(SUB41(fVar35,0),fVar15))));
  *(ulong *)(param_2 + 10) = CONCAT44(fVar69,fVar68);
  *(ulong *)(param_2 + 8) = CONCAT44(fVar67,fVar66);
  *(ulong *)(param_2 + 0xe) =
       CONCAT17((char)((uint)fVar41 >> 0x18),
                CONCAT16((char)((uint)fVar41 >> 0x10),
                         CONCAT15((char)((uint)fVar41 >> 8),CONCAT14(SUB41(fVar41,0),fVar38))));
  *(ulong *)(param_2 + 0xc) =
       CONCAT17((char)((uint)fVar33 >> 0x18),
                CONCAT16((char)((uint)fVar33 >> 0x10),
                         CONCAT15((char)((uint)fVar33 >> 8),CONCAT14(SUB41(fVar33,0),fVar14))));
  if ((param_5 & 1) == 0) {
    fVar36 = *pfVar2;
    fVar48 = pfVar2[1];
    fVar34 = pfVar2[2];
    auVar109 = *(undefined1 (*) [16])(pfVar2 + 4);
    uVar106 = a64_TBL(ZEXT816(0),auVar109,uVar88);
    uVar71 = a64_TBL(ZEXT816(0),auVar109,uVar89);
    pfVar1 = pfVar2 + 8;
    uVar10 = *(undefined8 *)(pfVar2 + 10);
    uVar78 = (undefined1)((ulong)uVar10 >> 8);
    uVar79 = (undefined1)((ulong)uVar10 >> 0x10);
    uVar80 = (undefined1)((ulong)uVar10 >> 0x18);
    uVar81 = (undefined1)((ulong)uVar10 >> 0x20);
    uVar82 = (undefined1)((ulong)uVar10 >> 0x28);
    uVar83 = (undefined1)((ulong)uVar10 >> 0x30);
    uVar84 = (undefined1)((ulong)uVar10 >> 0x38);
    Var29 = *(unkbyte9 *)pfVar1;
    auVar21[9] = uVar78;
    auVar21._0_9_ = *(unkbyte9 *)pfVar1;
    auVar21[10] = uVar79;
    auVar21[0xb] = uVar80;
    auVar21[0xc] = uVar81;
    auVar21[0xd] = uVar82;
    auVar21[0xe] = uVar83;
    auVar21[0xf] = uVar84;
    uVar87 = a64_TBL(ZEXT816(0),auVar21,uVar31);
    auVar22[9] = uVar78;
    auVar22._0_9_ = *(unkbyte9 *)pfVar1;
    auVar22[10] = uVar79;
    auVar22[0xb] = uVar80;
    auVar22[0xc] = uVar81;
    auVar22[0xd] = uVar82;
    auVar22[0xe] = uVar83;
    auVar22[0xf] = uVar84;
    uVar108 = a64_TBL(ZEXT816(0),auVar22,uVar89);
    auVar23[9] = uVar78;
    auVar23._0_9_ = *(unkbyte9 *)pfVar1;
    auVar23[10] = uVar79;
    auVar23[0xb] = uVar80;
    auVar23[0xc] = uVar81;
    auVar23[0xd] = uVar82;
    auVar23[0xe] = uVar83;
    auVar23[0xf] = uVar84;
    uVar72 = a64_TBL(ZEXT816(0),auVar23,uVar30);
    uVar104 = a64_TBL(ZEXT816(0),auVar109,uVar31);
    uVar73 = a64_TBL(ZEXT816(0),auVar109,uVar30);
    auVar24[9] = uVar78;
    auVar24._0_9_ = *(unkbyte9 *)pfVar1;
    auVar24[10] = uVar79;
    auVar24[0xb] = uVar80;
    auVar24[0xc] = uVar81;
    auVar24[0xd] = uVar82;
    auVar24[0xe] = uVar83;
    auVar24[0xf] = uVar84;
    uVar105 = a64_TBL(ZEXT816(0),auVar24,uVar88);
    auVar107._0_4_ =
         (fVar36 * (float)uVar106 * (float)uVar72 - (float)uVar73 * fVar36 * (float)uVar105) +
         (fVar48 * (float)((ulong)uVar106 >> 0x20) * (float)((ulong)uVar72 >> 0x20) -
         (float)((ulong)uVar73 >> 0x20) * fVar48 * (float)((ulong)uVar105 >> 0x20)) +
         (fVar34 * (float)uVar71 * (float)uVar87 - (float)uVar104 * fVar34 * (float)uVar108) +
         (pfVar2[3] * (float)((ulong)uVar71 >> 0x20) * (float)((ulong)uVar87 >> 0x20) -
         (float)((ulong)uVar104 >> 0x20) * pfVar2[3] * (float)((ulong)uVar108 >> 0x20));
    auVar107._4_4_ = auVar107._0_4_;
    auVar107._8_4_ = auVar107._0_4_;
    auVar107._12_4_ = auVar107._0_4_;
    auVar111 = NEON_frecpe(auVar107,4);
    auVar146 = NEON_frecps(auVar111,auVar107,4);
    auVar140._0_4_ = auVar111._0_4_ * auVar146._0_4_;
    auVar140._4_4_ = auVar111._4_4_ * auVar146._4_4_;
    auVar140._8_4_ = auVar111._8_4_ * auVar146._8_4_;
    auVar140._12_4_ = auVar111._12_4_ * auVar146._12_4_;
    auVar111 = NEON_frecps(auVar140,auVar107,4);
    fVar136 = auVar140._0_4_ * auVar111._0_4_;
    fVar141 = auVar140._4_4_ * auVar111._4_4_;
    fVar142 = auVar140._8_4_ * auVar111._8_4_;
    uVar78 = auVar109[4];
    uVar80 = auVar109[5];
    uVar82 = auVar109[6];
    uVar84 = auVar109[7];
    auVar112._4_12_ = auVar109._4_12_;
    auVar112._0_4_ = fVar36;
    auVar114._0_8_ = auVar112._0_8_;
    auVar114._8_4_ = (int)Var29;
    auVar114._12_4_ = auVar109._12_4_;
    auVar113._8_8_ = auVar114._8_8_;
    auVar113._4_4_ = auVar109._0_4_;
    auVar113._0_4_ = fVar36;
    auVar115._0_12_ = auVar113._0_12_;
    auVar115._12_4_ = 0;
    uVar79 = (undefined1)((unkuint9)Var29 >> 0x20);
    uVar81 = (undefined1)((unkuint9)Var29 >> 0x28);
    uVar83 = (undefined1)((unkuint9)Var29 >> 0x30);
    uVar85 = (undefined1)((unkuint9)Var29 >> 0x38);
    auVar91._4_4_ = auVar109._8_4_;
    auVar91._0_4_ = fVar34;
    auVar91._8_4_ = (int)uVar10;
    auVar91._12_4_ = 0;
    auVar25[4] = uVar78;
    auVar25._0_4_ = fVar48;
    auVar25[5] = uVar80;
    auVar25[6] = uVar82;
    auVar25[7] = uVar84;
    auVar25[8] = uVar79;
    auVar25[9] = uVar81;
    auVar25[10] = uVar83;
    auVar25[0xb] = uVar85;
    auVar25._12_4_ = 0;
    uVar87 = a64_TBL(ZEXT816(0),auVar25,uVar88);
    auVar26[4] = uVar78;
    auVar26._0_4_ = fVar48;
    auVar26[5] = uVar80;
    auVar26[6] = uVar82;
    auVar26[7] = uVar84;
    auVar26[8] = uVar79;
    auVar26[9] = uVar81;
    auVar26[10] = uVar83;
    auVar26[0xb] = uVar85;
    auVar26._12_4_ = 0;
    uVar104 = a64_TBL(ZEXT816(0),auVar26,uVar89);
    uVar108 = a64_TBL(ZEXT816(0),auVar91,uVar31);
    uVar137 = a64_TBL(ZEXT816(0),auVar91,uVar88);
    uVar106 = a64_TBL(ZEXT816(0),auVar115,uVar88);
    uVar105 = a64_TBL(ZEXT816(0),auVar91,uVar30);
    uVar88 = a64_TBL(ZEXT816(0),auVar91,uVar89);
    uVar71 = a64_TBL(ZEXT816(0),auVar115,uVar89);
    auVar27[4] = uVar78;
    auVar27._0_4_ = fVar48;
    auVar27[5] = uVar80;
    auVar27[6] = uVar82;
    auVar27[7] = uVar84;
    auVar27[8] = uVar79;
    auVar27[9] = uVar81;
    auVar27[10] = uVar83;
    auVar27[0xb] = uVar85;
    auVar27._12_4_ = 0;
    uVar89 = a64_TBL(ZEXT816(0),auVar27,uVar30);
    auVar28[4] = uVar78;
    auVar28._0_4_ = fVar48;
    auVar28[5] = uVar80;
    auVar28[6] = uVar82;
    auVar28[7] = uVar84;
    auVar28[8] = uVar79;
    auVar28[9] = uVar81;
    auVar28[10] = uVar83;
    auVar28[0xb] = uVar85;
    auVar28._12_4_ = 0;
    uVar10 = a64_TBL(ZEXT816(0),auVar28,uVar31);
    uVar72 = a64_TBL(ZEXT816(0),auVar115,uVar30);
    uVar73 = a64_TBL(ZEXT816(0),auVar115,uVar31);
    fVar43 = (float)((ulong)uVar87 >> 0x20);
    fVar45 = (float)((ulong)uVar105 >> 0x20);
    fVar34 = (float)((ulong)uVar89 >> 0x20);
    fVar46 = (float)((ulong)uVar137 >> 0x20);
    fVar48 = (float)((ulong)uVar72 >> 0x20);
    fVar36 = (float)((ulong)uVar106 >> 0x20);
    fVar37 = fVar136 * ((float)uVar87 * (float)uVar105 - (float)uVar89 * (float)uVar137);
    fVar39 = fVar141 * (fVar43 * fVar45 - fVar34 * fVar46);
    fVar50 = fVar142 * ((float)uVar104 * (float)uVar108 - (float)uVar10 * (float)uVar88);
    fVar42 = fVar136 * ((float)uVar137 * (float)uVar72 - (float)uVar105 * (float)uVar106);
    fVar45 = fVar141 * (fVar46 * fVar48 - fVar45 * fVar36);
    fVar46 = fVar142 * ((float)uVar88 * (float)uVar73 - (float)uVar108 * (float)uVar71);
    fVar136 = fVar136 * ((float)uVar89 * (float)uVar106 - (float)uVar72 * (float)uVar87);
    fVar141 = fVar141 * (fVar34 * fVar36 - fVar48 * fVar43);
    fVar142 = fVar142 * ((float)uVar10 * (float)uVar71 - (float)uVar73 * (float)uVar104);
    iVar52 = -(uint)(auVar107._0_4_ == 0.0);
    iVar57 = -(uint)(auVar107._0_4_ == 0.0);
    iVar62 = -(uint)(auVar107._0_4_ == 0.0);
    bVar51 = (byte)iVar52;
    bVar53 = (byte)((uint)iVar52 >> 8);
    bVar54 = (byte)((uint)iVar52 >> 0x10);
    bVar55 = (byte)((uint)iVar52 >> 0x18);
    bVar56 = (byte)iVar57;
    bVar58 = (byte)((uint)iVar57 >> 8);
    bVar59 = (byte)((uint)iVar57 >> 0x10);
    bVar60 = (byte)((uint)iVar57 >> 0x18);
    bVar61 = (byte)iVar62;
    bVar63 = (byte)((uint)iVar62 >> 8);
    bVar64 = (byte)((uint)iVar62 >> 0x10);
    bVar65 = (byte)((uint)iVar62 >> 0x18);
    fVar86 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~bVar55,
                             CONCAT12((byte)((uint)fVar37 >> 0x10) & ~bVar54,
                                      CONCAT11((byte)((uint)fVar37 >> 8) & ~bVar53,
                                               SUB41(fVar37,0) & ~bVar51)));
    auVar90._0_8_ =
         CONCAT17((byte)((uint)fVar39 >> 0x18) & ~bVar60,
                  CONCAT16((byte)((uint)fVar39 >> 0x10) & ~bVar59,
                           CONCAT15((byte)((uint)fVar39 >> 8) & ~bVar58,
                                    CONCAT14(SUB41(fVar39,0) & ~bVar56,fVar86))));
    auVar90[8] = SUB41(fVar50,0) & ~bVar61;
    auVar90[9] = (byte)((uint)fVar50 >> 8) & ~bVar63;
    auVar90[10] = (byte)((uint)fVar50 >> 0x10) & ~bVar64;
    auVar90[0xb] = (byte)((uint)fVar50 >> 0x18) & ~bVar65;
    fVar36 = (float)*(undefined8 *)(pfVar2 + 0xc);
    fVar48 = (float)((ulong)*(undefined8 *)(pfVar2 + 0xc) >> 0x20);
    fVar43 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~bVar55,
                             CONCAT12((byte)((uint)fVar42 >> 0x10) & ~bVar54,
                                      CONCAT11((byte)((uint)fVar42 >> 8) & ~bVar53,
                                               SUB41(fVar42,0) & ~bVar51)));
    fVar47 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~bVar65,
                             CONCAT12((byte)((uint)fVar46 >> 0x10) & ~bVar64,
                                      CONCAT11((byte)((uint)fVar46 >> 8) & ~bVar63,
                                               SUB41(fVar46,0) & ~bVar61)));
    fVar34 = (float)*(undefined8 *)(pfVar2 + 0xe);
    fVar42 = (-fVar37 * fVar36 - fVar42 * fVar48) - fVar136 * fVar34;
    fVar49 = (-fVar39 * fVar36 - fVar45 * fVar48) - fVar141 * fVar34;
    fVar50 = (-fVar50 * fVar36 - fVar46 * fVar48) - fVar142 * fVar34;
    fVar34 = (float)CONCAT13((byte)((uint)fVar136 >> 0x18) & ~bVar55,
                             CONCAT12((byte)((uint)fVar136 >> 0x10) & ~bVar54,
                                      CONCAT11((byte)((uint)fVar136 >> 8) & ~bVar53,
                                               SUB41(fVar136,0) & ~bVar51)));
    fVar39 = (float)CONCAT13((byte)((uint)fVar142 >> 0x18) & ~bVar65,
                             CONCAT12((byte)((uint)fVar142 >> 0x10) & ~bVar64,
                                      CONCAT11((byte)((uint)fVar142 >> 8) & ~bVar63,
                                               SUB41(fVar142,0) & ~bVar61)));
    fVar37 = (float)(CONCAT17((byte)((uint)fVar141 >> 0x18) & ~bVar60,
                              CONCAT16((byte)((uint)fVar141 >> 0x10) & ~bVar59,
                                       CONCAT15((byte)((uint)fVar141 >> 8) & ~bVar58,
                                                CONCAT14(SUB41(fVar141,0) & ~bVar56,fVar34)))) >>
                    0x20);
    fVar36 = fVar75 * fVar34 + fVar35 * fVar37 + fVar67 * fVar39;
    fVar48 = fVar77 * fVar34 + fVar44 * fVar37 + fVar69 * fVar39;
    fVar136 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~bVar55,
                              CONCAT12((byte)((uint)fVar42 >> 0x10) & ~bVar54,
                                       CONCAT11((byte)((uint)fVar42 >> 8) & ~bVar53,
                                                SUB41(fVar42,0) & ~bVar51)));
    fVar142 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~bVar65,
                              CONCAT12((byte)((uint)fVar50 >> 0x10) & ~bVar64,
                                       CONCAT11((byte)((uint)fVar50 >> 8) & ~bVar63,
                                                SUB41(fVar50,0) & ~bVar61)));
    fVar42 = (float)((ulong)auVar90._0_8_ >> 0x20);
    fVar141 = (float)(CONCAT17((byte)((uint)fVar49 >> 0x18) & ~bVar60,
                               CONCAT16((byte)((uint)fVar49 >> 0x10) & ~bVar59,
                                        CONCAT15((byte)((uint)fVar49 >> 8) & ~bVar58,
                                                 CONCAT14(SUB41(fVar49,0) & ~bVar56,fVar136)))) >>
                     0x20);
    fVar46 = auVar90._8_4_;
    fVar50 = (float)(CONCAT17((byte)((uint)fVar45 >> 0x18) & ~bVar60,
                              CONCAT16((byte)((uint)fVar45 >> 0x10) & ~bVar59,
                                       CONCAT15((byte)((uint)fVar45 >> 8) & ~bVar58,
                                                CONCAT14(SUB41(fVar45,0) & ~bVar56,fVar43)))) >>
                    0x20);
    *(ulong *)(param_2 + 2) =
         CONCAT44(fVar77 * fVar86 + fVar44 * fVar42 + fVar69 * fVar46,
                  fVar76 * fVar86 + fVar40 * fVar42 + fVar68 * fVar46);
    *(ulong *)param_2 =
         CONCAT44(fVar75 * fVar86 + fVar35 * fVar42 + fVar67 * fVar46,
                  fVar70 * fVar86 + fVar15 * fVar42 + fVar66 * fVar46);
    param_2[6] = fVar76 * fVar43 + fVar40 * fVar50 + fVar68 * fVar47;
    param_2[7] = fVar77 * fVar43 + fVar44 * fVar50 + fVar69 * fVar47;
    param_2[4] = fVar70 * fVar43 + fVar15 * fVar50 + fVar66 * fVar47;
    param_2[5] = fVar75 * fVar43 + fVar35 * fVar50 + fVar67 * fVar47;
    *(ulong *)(param_2 + 10) =
         CONCAT17((char)((uint)fVar48 >> 0x18),
                  CONCAT16((char)((uint)fVar48 >> 0x10),
                           CONCAT15((char)((uint)fVar48 >> 8),
                                    CONCAT14(SUB41(fVar48,0),
                                             fVar76 * fVar34 + fVar40 * fVar37 + fVar68 * fVar39))))
    ;
    *(ulong *)(param_2 + 8) =
         CONCAT17((char)((uint)fVar36 >> 0x18),
                  CONCAT16((char)((uint)fVar36 >> 0x10),
                           CONCAT15((char)((uint)fVar36 >> 8),
                                    CONCAT14(SUB41(fVar36,0),
                                             fVar70 * fVar34 + fVar15 * fVar37 + fVar66 * fVar39))))
    ;
    *(ulong *)(param_2 + 0xe) =
         CONCAT44(fVar41 + fVar77 * fVar136 + fVar44 * fVar141 + fVar69 * fVar142,
                  fVar38 + fVar76 * fVar136 + fVar40 * fVar141 + fVar68 * fVar142);
    *(ulong *)(param_2 + 0xc) =
         CONCAT44(fVar33 + fVar75 * fVar136 + fVar35 * fVar141 + fVar67 * fVar142,
                  fVar14 + fVar70 * fVar136 + fVar15 * fVar141 + fVar66 * fVar142);
  }
  return;
}

