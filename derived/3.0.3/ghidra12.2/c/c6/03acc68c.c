
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03acc68c(float param_1,float param_2,long param_3,undefined8 *param_4,int param_5,
                 int *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  bool bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined8 uVar23;
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  int iVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  int iVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined4 uStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float local_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float local_1d4 [16];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  float local_188;
  float local_184;
  undefined8 local_180;
  undefined8 local_178;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  uVar11 = *(undefined8 *)(param_3 + 0x1a0);
  uVar17 = *(undefined8 *)(param_3 + 0x1a8);
  uVar12 = *(undefined8 *)(param_3 + 0x1b0);
  uVar1 = *(undefined8 *)(param_3 + 0x1b8);
  uVar16 = *(undefined8 *)*(undefined1 (*) [12])(param_3 + 0x180);
  auVar3 = *(undefined1 (*) [12])(param_3 + 0x180);
  local_260 = (float)uVar16;
  fStack_25c = (float)((ulong)uVar16 >> 0x20);
  fStack_258 = (float)*(undefined8 *)(param_3 + 0x188);
  fStack_254 = (float)((ulong)*(undefined8 *)(param_3 + 0x188) >> 0x20);
  fVar7 = fStack_254;
  uVar16 = *(undefined8 *)(param_3 + 400);
  uVar2 = *(undefined8 *)(param_3 + 0x198);
  local_250 = uVar16;
  uStack_248 = uVar2;
  local_240 = uVar11;
  uStack_238 = uVar17;
  local_230 = uVar12;
  uStack_228 = uVar1;
  if (param_5 == 0) {
    fVar21 = *(float *)(param_4 + 5);
    fVar6 = *(float *)(param_4 + 4);
    fVar18 = *(float *)((long)param_4 + 0x24);
    fVar54 = -fVar18;
    fVar55 = -fVar6;
    fVar53 = -fVar21;
    fVar6 = SQRT(fVar18 * fVar18 + fVar6 * fVar6 + fVar21 * fVar21);
    if (0.0 < fVar6) {
      fVar6 = 1.0 / fVar6;
      fVar55 = fVar6 * fVar55;
      fVar54 = fVar6 * fVar54;
      fVar53 = fVar6 * fVar53;
    }
    auVar20._12_4_ = fStack_254;
    auVar20._0_12_ = auVar3;
    uVar13 = *(undefined8 *)(param_3 + 0x158);
    uVar8 = *(undefined8 *)(param_3 + 0x150);
    local_c0 = param_4[2];
    uStack_b8 = param_4[3];
    local_b0 = param_4[4];
    uStack_a8 = param_4[5];
    local_d0 = *param_4;
    uStack_c8 = param_4[1];
    uVar14 = *(undefined8 *)(param_3 + 0x168);
    uVar9 = *(undefined8 *)(param_3 + 0x160);
    uVar15 = *(undefined8 *)(param_3 + 0x178);
    uVar10 = *(undefined8 *)(param_3 + 0x170);
    uVar23 = uVar12;
    fVar18 = (float)FUN_03acfde0(param_3 + 0x78,&local_d0);
    fVar82 = auVar20._0_4_;
    fVar6 = (float)uVar23;
    FUN_007535b4(&local_110,param_4);
    fVar21 = *(float *)(param_3 + 0x15c) +
             fVar54 * *(float *)(param_3 + 0x154) + fVar55 * *(float *)(param_3 + 0x150) +
             fVar53 * *(float *)(param_3 + 0x158);
    fVar19 = *(float *)(param_3 + 0x16c) +
             fVar54 * *(float *)(param_3 + 0x164) + fVar55 * *(float *)(param_3 + 0x160) +
             fVar53 * *(float *)(param_3 + 0x168);
    fVar22 = *(float *)(param_3 + 0x17c) +
             fVar54 * *(float *)(param_3 + 0x174) + fVar55 * *(float *)(param_3 + 0x170) +
             fVar53 * *(float *)(param_3 + 0x178);
    fVar24 = uStack_228._4_4_ +
             fVar19 * local_230._4_4_ + fVar21 * (float)local_230 + fVar22 * (float)uStack_228;
    fVar31 = fStack_254 / fVar24 +
             fVar19 * (fStack_25c / fVar24) + fVar21 * (local_260 / fVar24) +
             fVar22 * (fStack_258 / fVar24);
    fVar38 = uStack_248._4_4_ / fVar24 +
             fVar19 * (local_250._4_4_ / fVar24) + fVar21 * ((float)local_250 / fVar24) +
             fVar22 * ((float)uStack_248 / fVar24);
    fVar21 = uStack_238._4_4_ / fVar24 +
             fVar19 * (local_240._4_4_ / fVar24) + fVar21 * ((float)local_240 / fVar24) +
             fVar22 * ((float)uStack_238 / fVar24);
    fVar19 = fVar38 * 0.0 + fVar31 * 0.0 + fVar21 * 0.0 + 1.0;
    fVar24 = 1.0 / fVar19;
    fVar19 = 0.0 / fVar19;
    fVar22 = fVar19 + fVar38 * fVar19 + fVar31 * fVar24 + fVar21 * fVar19;
    fVar19 = fVar19 + fVar38 * fVar24 + fVar31 * fVar19 + fVar21 * fVar19;
    fVar21 = SQRT(fVar22 * fVar22 + 0.0 + fVar19 * fVar19);
    if (0.0 < fVar21) {
      fVar21 = 1.0 / fVar21;
      fStack_1d8 = fVar21 * 0.0 + 0.0;
      fStack_1dc = fVar22 * fVar21 + 0.0;
      local_1d4[0] = fVar19 * fVar21 + 0.0;
      fVar24 = auVar3._0_4_ * 0.0;
      fVar31 = auVar3._4_4_ * 0.0;
      fVar38 = auVar3._8_4_ * 0.0;
      fVar46 = fVar7 * 0.0;
      fVar21 = (float)uVar16;
      fVar19 = (float)((ulong)uVar16 >> 0x20);
      fVar22 = (float)uVar2;
      fVar49 = (float)((ulong)uVar2 >> 0x20);
      fVar39 = fVar24 + fVar21 * 0.0;
      fVar41 = fVar31 + fVar19 * 0.0;
      fVar44 = fVar38 + fVar22 * 0.0;
      fVar47 = fVar46 + fVar49 * 0.0;
      fVar50 = (float)uVar11;
      fVar52 = (float)((ulong)uVar11 >> 0x20);
      fVar90 = (float)uVar17;
      fVar51 = (float)((ulong)uVar17 >> 0x20);
      fVar40 = (float)uVar12;
      fVar42 = (float)((ulong)uVar12 >> 0x20);
      fVar45 = (float)uVar1;
      fVar57 = (float)((ulong)uVar1 >> 0x20);
      fVar84 = auVar3._0_4_ + fVar21 * 0.0 + fVar50 * 0.0 + fVar40 * 0.0;
      fVar86 = auVar3._4_4_ + fVar19 * 0.0 + fVar52 * 0.0 + fVar42 * 0.0;
      fVar87 = auVar3._8_4_ + fVar22 * 0.0 + fVar90 * 0.0 + fVar45 * 0.0;
      fVar21 = fVar21 + fVar24 + fVar50 * 0.0 + fVar40 * 0.0;
      fVar19 = fVar19 + fVar31 + fVar52 * 0.0 + fVar42 * 0.0;
      fVar22 = fVar22 + fVar38 + fVar90 * 0.0 + fVar45 * 0.0;
      fVar24 = fVar50 + fVar39 + fVar40 * 0.0;
      fVar33 = fVar52 + fVar41 + fVar42 * 0.0;
      fVar35 = fVar90 + fVar44 + fVar45 * 0.0;
      fVar38 = local_110._4_4_;
      fVar31 = (float)local_110;
      fVar40 = fVar40 + fVar39 + fVar50 * 0.0;
      fVar42 = fVar42 + fVar41 + fVar52 * 0.0;
      fVar45 = fVar45 + fVar44 + fVar90 * 0.0;
      fVar50 = local_100._4_4_;
      fVar44 = (float)local_100;
      fVar43 = local_f0._4_4_;
      fVar48 = (float)local_f0;
      fVar28 = (float)uVar8;
      fVar59 = (float)((ulong)uVar8 >> 0x20);
      fVar61 = (float)uVar13;
      fVar56 = (float)((ulong)uVar13 >> 0x20);
      fVar58 = (float)uVar9;
      fVar62 = (float)((ulong)uVar9 >> 0x20);
      fVar64 = (float)uVar14;
      fVar66 = (float)((ulong)uVar14 >> 0x20);
      fStack_200 = (float)*(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      fStack_1fc = (float)((ulong)*(undefined8 *)(PTR_DAT_04bb2f80 + 0x18) >> 0x20);
      local_1f8 = (float)*(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      fStack_1f4 = (float)((ulong)*(undefined8 *)(PTR_DAT_04bb2f80 + 0x20) >> 0x20);
      uVar11 = *(undefined8 *)PTR_DAT_04bb2f80;
      fVar60 = (float)uVar10;
      fVar63 = (float)((ulong)uVar10 >> 0x20);
      fVar65 = (float)uVar15;
      fVar67 = (float)((ulong)uVar15 >> 0x20);
      fStack_210 = (float)*(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      fStack_20c = (float)((ulong)*(undefined8 *)(PTR_DAT_04bb2f80 + 8) >> 0x20);
      fStack_208 = (float)*(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      fStack_204 = (float)((ulong)*(undefined8 *)(PTR_DAT_04bb2f80 + 0x10) >> 0x20);
      fVar39 = (float)uStack_108;
      fVar41 = uStack_108._4_4_;
      fVar52 = (float)local_f8;
      fVar90 = local_f8._4_4_;
      fVar32 = fVar28 * fVar84 + fVar58 * fVar86 + fVar60 * fVar87 + 0.0;
      fVar34 = fVar59 * fVar84 + fVar62 * fVar86 + fVar63 * fVar87 + 0.0;
      fVar36 = fVar61 * fVar84 + fVar64 * fVar86 + fVar65 * fVar87 + 0.0;
      fVar37 = fVar7 + fVar49 * 0.0 + fVar51 * 0.0 + fVar57 * 0.0 +
               fVar56 * fVar84 + fVar66 * fVar86 + fVar67 * fVar87;
      fVar84 = fVar28 * fVar21 + fVar58 * fVar19 + fVar60 * fVar22 + 0.0;
      fVar87 = fVar59 * fVar21 + fVar62 * fVar19 + fVar63 * fVar22 + 0.0;
      fVar26 = fVar61 * fVar21 + fVar64 * fVar19 + fVar65 * fVar22 + 0.0;
      fVar29 = fVar49 + fVar46 + fVar51 * 0.0 + fVar57 * 0.0 +
               fVar56 * fVar21 + fVar66 * fVar19 + fVar67 * fVar22;
      fVar49 = (float)uStack_e8;
      fVar46 = uStack_e8._4_4_;
      fStack_1f0 = (float)*(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      fStack_1ec = (float)((ulong)*(undefined8 *)(PTR_DAT_04bb2f80 + 0x28) >> 0x20);
      fStack_1e8 = 0.0;
      local_1e4 = 0.0;
      fStack_1e0 = 0.0;
      local_1d4[3] = 0.0;
      local_220 = PTR_DAT_04bb41a0 + 0x10;
      fVar86 = fVar28 * fVar24 + fVar58 * fVar33 + fVar60 * fVar35 + 0.0;
      fVar25 = fVar59 * fVar24 + fVar62 * fVar33 + fVar63 * fVar35 + 0.0;
      fVar27 = fVar61 * fVar24 + fVar64 * fVar33 + fVar65 * fVar35 + 0.0;
      fVar30 = fVar51 + fVar47 + fVar57 * 0.0 + fVar56 * fVar24 + fVar66 * fVar33 + fVar67 * fVar35;
      uStack_218._0_2_ = (undefined2)uVar11;
      uStack_218._2_2_ = (undefined2)((ulong)uVar11 >> 0x10);
      fStack_214 = (float)((ulong)uVar11 >> 0x20);
      local_1d4[1] = 0.0;
      local_1d4[2] = 1.0;
      fVar33 = fVar28 * fVar40 + fVar58 * fVar42 + fVar60 * fVar45 + 0.0;
      fVar35 = fVar59 * fVar40 + fVar62 * fVar42 + fVar63 * fVar45 + 0.0;
      fVar28 = fVar61 * fVar40 + fVar64 * fVar42 + fVar65 * fVar45 + 0.0;
      fVar40 = fVar57 + fVar47 + fVar51 * 0.0 + fVar56 * fVar40 + fVar66 * fVar42 + fVar67 * fVar45;
      FUN_038e4634(&local_220,&uStack_218);
      fVar24 = fStack_254;
      fVar22 = fStack_258;
      fVar19 = fStack_25c;
      fVar21 = local_260;
      fVar7 = (float)CONCAT22(uStack_218._2_2_,(undefined2)uStack_218);
      local_128 = 0x7f7fffff7f7fffff;
      local_120 = 0xff7fffff7f7fffff;
      fVar56 = (float)_DAT_04102200;
      fVar58 = (float)((ulong)_DAT_04102200 >> 0x20);
      fVar60 = (float)_UNK_04102208;
      fVar62 = (float)((ulong)_UNK_04102208 >> 0x20);
      fVar64 = (float)_DAT_041023d0;
      fVar67 = (float)((ulong)_DAT_041023d0 >> 0x20);
      fVar70 = (float)_UNK_041023d8;
      fVar73 = (float)((ulong)_UNK_041023d8 >> 0x20);
      fVar76 = (float)_DAT_04102880;
      fVar78 = (float)((ulong)_DAT_04102880 >> 0x20);
      fVar79 = (float)_UNK_04102888;
      fVar80 = (float)((ulong)_UNK_04102888 >> 0x20);
      local_f0 = CONCAT44(fVar34 * local_1f8 + fVar25 * fStack_1f4 + fVar87 * fStack_1f0 +
                          fVar35 * fStack_1ec,
                          fVar32 * local_1f8 + fVar86 * fStack_1f4 + fVar84 * fStack_1f0 +
                          fVar33 * fStack_1ec);
      uStack_e8 = CONCAT44(fVar37 * local_1f8 + fVar30 * fStack_1f4 + fVar29 * fStack_1f0 +
                           fVar40 * fStack_1ec,
                           fVar36 * local_1f8 + fVar27 * fStack_1f4 + fVar26 * fStack_1f0 +
                           fVar28 * fStack_1ec);
      local_110 = CONCAT44(fVar34 * fVar7 + fVar25 * fStack_214 + fVar87 * fStack_210 +
                           fVar35 * fStack_20c,
                           fVar32 * fVar7 + fVar86 * fStack_214 + fVar84 * fStack_210 +
                           fVar33 * fStack_20c);
      uStack_108 = CONCAT44(fVar37 * fVar7 + fVar30 * fStack_214 + fVar29 * fStack_210 +
                            fVar40 * fStack_20c,
                            fVar36 * fVar7 + fVar27 * fStack_214 + fVar26 * fStack_210 +
                            fVar28 * fStack_20c);
      local_118 = 0xff7fffffff7fffff;
      local_100 = CONCAT44(fVar34 * fStack_208 + fVar25 * fStack_204 + fVar87 * fStack_200 +
                           fVar35 * fStack_1fc,
                           fVar32 * fStack_208 + fVar86 * fStack_204 + fVar84 * fStack_200 +
                           fVar33 * fStack_1fc);
      local_f8 = CONCAT44(fVar37 * fStack_208 + fVar30 * fStack_204 + fVar29 * fStack_200 +
                          fVar40 * fStack_1fc,
                          fVar36 * fStack_208 + fVar27 * fStack_204 + fVar26 * fStack_200 +
                          fVar28 * fStack_1fc);
      fVar65 = (float)DAT_04102210;
      fVar68 = (float)((ulong)DAT_04102210 >> 0x20);
      fVar71 = (float)DAT_04102218;
      fVar74 = (float)((ulong)DAT_04102218 >> 0x20);
      fVar84 = fVar56 * fVar7 + fVar64 * fStack_214 + fVar76 * fStack_210 + fVar65 * fStack_20c;
      fVar86 = fVar58 * fVar7 + fVar67 * fStack_214 + fVar78 * fStack_210 + fVar68 * fStack_20c;
      fVar87 = fVar60 * fVar7 + fVar70 * fStack_214 + fVar79 * fStack_210 + fVar71 * fStack_20c;
      fVar25 = fVar62 * fVar7 + fVar73 * fStack_214 + fVar80 * fStack_210 + fVar74 * fStack_20c;
      fVar26 = fVar56 * fStack_208 + fVar64 * fStack_204 + fVar76 * fStack_200 + fVar65 * fStack_1fc
      ;
      fVar27 = fVar58 * fStack_208 + fVar67 * fStack_204 + fVar78 * fStack_200 + fVar68 * fStack_1fc
      ;
      fVar29 = fVar60 * fStack_208 + fVar70 * fStack_204 + fVar79 * fStack_200 + fVar71 * fStack_1fc
      ;
      fVar51 = fVar62 * fStack_208 + fVar73 * fStack_204 + fVar80 * fStack_200 + fVar74 * fStack_1fc
      ;
      fVar57 = fVar56 * local_1f8 + fVar64 * fStack_1f4 + fVar76 * fStack_1f0 + fVar65 * fStack_1ec;
      fVar59 = fVar58 * local_1f8 + fVar67 * fStack_1f4 + fVar78 * fStack_1f0 + fVar68 * fStack_1ec;
      fVar61 = fVar60 * local_1f8 + fVar70 * fStack_1f4 + fVar79 * fStack_1f0 + fVar71 * fStack_1ec;
      fVar63 = fVar62 * local_1f8 + fVar73 * fStack_1f4 + fVar80 * fStack_1f0 + fVar74 * fStack_1ec;
      *(ulong *)(param_3 + 0x208) = CONCAT44(fStack_20c,fStack_210);
      *(ulong *)(param_3 + 0x200) = CONCAT44(fStack_214,fVar7);
      *(float *)(param_3 + 0x218) = fStack_200;
      *(float *)(param_3 + 0x21c) = fStack_1fc;
      *(float *)(param_3 + 0x210) = fStack_208;
      *(float *)(param_3 + 0x214) = fStack_204;
      *(ulong *)(param_3 + 0x228) = CONCAT44(fStack_1ec,fStack_1f0);
      *(ulong *)(param_3 + 0x220) = CONCAT44(fStack_1f4,local_1f8);
      fVar66 = (float)local_250;
      fVar69 = (float)((ulong)local_250 >> 0x20);
      fVar72 = (float)uStack_248;
      fVar75 = (float)((ulong)uStack_248 >> 0x20);
      fVar37 = (float)local_240;
      fVar42 = (float)((ulong)local_240 >> 0x20);
      fVar45 = (float)uStack_238;
      fVar47 = (float)((ulong)uStack_238 >> 0x20);
      fVar30 = (float)local_230;
      fVar32 = (float)((ulong)local_230 >> 0x20);
      fVar34 = (float)uStack_228;
      fVar36 = (float)((ulong)uStack_228 >> 0x20);
      local_220 = (undefined *)
                  CONCAT44(fStack_25c * fVar84 + fVar69 * fVar86 + fVar42 * fVar87 + fVar32 * fVar25
                           ,local_260 * fVar84 + fVar66 * fVar86 + fVar37 * fVar87 + fVar30 * fVar25
                          );
      uStack_218 = fStack_258 * fVar84 + fVar72 * fVar86 + fVar45 * fVar87 + fVar34 * fVar25;
      fStack_214 = fStack_254 * fVar84 + fVar75 * fVar86 + fVar47 * fVar87 + fVar36 * fVar25;
      fStack_210 = local_260 * fVar26 + fVar66 * fVar27 + fVar37 * fVar29 + fVar30 * fVar51;
      fStack_20c = fStack_25c * fVar26 + fVar69 * fVar27 + fVar42 * fVar29 + fVar32 * fVar51;
      fStack_208 = fStack_258 * fVar26 + fVar72 * fVar27 + fVar45 * fVar29 + fVar34 * fVar51;
      fStack_204 = fStack_254 * fVar26 + fVar75 * fVar27 + fVar47 * fVar29 + fVar36 * fVar51;
      fStack_200 = local_260 * fVar57 + fVar66 * fVar59 + fVar37 * fVar61 + fVar30 * fVar63;
      fStack_1fc = fStack_25c * fVar57 + fVar69 * fVar59 + fVar42 * fVar61 + fVar32 * fVar63;
      local_1f8 = fStack_258 * fVar57 + fVar72 * fVar59 + fVar45 * fVar61 + fVar34 * fVar63;
      fStack_1f4 = fStack_254 * fVar57 + fVar75 * fVar59 + fVar47 * fVar61 + fVar36 * fVar63;
      fVar7 = fVar30 + local_260 * 0.0 + fVar66 * 0.0 + fVar37 * 0.0;
      fVar26 = fVar32 + fStack_25c * 0.0 + fVar69 * 0.0 + fVar42 * 0.0;
      fVar27 = fVar34 + fStack_258 * 0.0 + fVar72 * 0.0 + fVar45 * 0.0;
      fVar29 = fVar36 + fStack_254 * 0.0 + fVar75 * 0.0 + fVar47 * 0.0;
      fStack_1f0 = fVar7;
      fStack_1ec = fVar26;
      fStack_1e8 = fVar27;
      local_1e4 = fVar29;
      uStack_e0 = CONCAT44(fVar35,fVar33);
      uStack_d8 = CONCAT44(fVar40,fVar28);
      FUN_03ad1050(param_3 + 0x78,&local_128,&local_220,param_3 + 0x150);
      uVar16 = *(undefined8 *)(param_3 + 0x208);
      uVar11 = *(undefined8 *)(param_3 + 0x200);
      fVar28 = *(float *)(param_3 + 0x154);
      fVar35 = *(float *)(param_3 + 0x150);
      fVar40 = *(float *)(param_3 + 0x158);
      uVar17 = *(undefined8 *)(param_3 + 0x218);
      uVar12 = *(undefined8 *)(param_3 + 0x210);
      fVar51 = *(float *)(param_3 + 0x160);
      fVar61 = *(float *)(param_3 + 0x164);
      fVar84 = *(float *)(param_3 + 0x15c);
      fVar59 = *(float *)(param_3 + 0x168);
      fVar57 = *(float *)(param_3 + 0x174);
      fVar86 = *(float *)(param_3 + 0x16c);
      fVar33 = *(float *)(param_3 + 0x170);
      fVar87 = *(float *)(param_3 + 0x178);
      fVar25 = *(float *)(param_3 + 0x17c);
      FUN_038e6ab4(&local_168,&local_110);
      fVar88 = fVar54 * local_158 + fVar55 * local_168 + fVar53 * local_148 + local_138 * 0.0;
      fVar85 = fVar54 * local_154 + fVar55 * local_164 + fVar53 * local_144 + local_134 * 0.0;
      fVar89 = fVar54 * local_150 + fVar55 * local_160 + fVar53 * local_140 + local_130 * 0.0;
      fVar63 = SQRT(fVar85 * fVar85 + fVar88 * fVar88 + fVar89 * fVar89);
      if (0.0 < fVar63) {
        fVar83 = 1.0 / fVar63;
        fVar85 = fVar85 * fVar83;
        fVar90 = fVar90 + fVar82 * fVar50 + fVar18 * fVar44 + fVar6 * fVar52;
        fVar41 = fVar41 + fVar82 * fVar38 + fVar18 * fVar31 + fVar6 * fVar39;
        fVar46 = fVar46 + fVar82 * fVar43 + fVar18 * fVar48 + fVar6 * fVar49;
        fVar6 = (float)uVar11;
        fVar18 = (float)((ulong)uVar11 >> 0x20);
        fVar82 = (float)uVar16;
        fVar31 = (float)((ulong)uVar16 >> 0x20);
        fVar38 = fVar56 * fVar6 + fVar64 * fVar18 + fVar76 * fVar82 + fVar65 * fVar31;
        fVar39 = fVar58 * fVar6 + fVar67 * fVar18 + fVar78 * fVar82 + fVar68 * fVar31;
        fVar44 = fVar60 * fVar6 + fVar70 * fVar18 + fVar79 * fVar82 + fVar71 * fVar31;
        fVar6 = fVar62 * fVar6 + fVar73 * fVar18 + fVar80 * fVar82 + fVar74 * fVar31;
        fVar86 = fVar86 + fVar90 * fVar61 + fVar41 * fVar51 + fVar46 * fVar59;
        fVar84 = fVar84 + fVar90 * fVar28 + fVar41 * fVar35 + fVar46 * fVar40;
        fVar25 = fVar25 + fVar90 * fVar57 + fVar41 * fVar33 + fVar46 * fVar87;
        fVar29 = fVar29 + fVar86 * fVar26 + fVar84 * fVar7 + fVar25 * fVar27;
        fVar6 = (fVar24 * fVar38 + fVar75 * fVar39 + fVar47 * fVar44 + fVar36 * fVar6) / fVar29 +
                fVar86 * ((fVar19 * fVar38 + fVar69 * fVar39 + fVar42 * fVar44 + fVar32 * fVar6) /
                         fVar29) +
                fVar84 * ((fVar21 * fVar38 + fVar66 * fVar39 + fVar37 * fVar44 + fVar30 * fVar6) /
                         fVar29) +
                fVar25 * ((fVar22 * fVar38 + fVar72 * fVar39 + fVar45 * fVar44 + fVar34 * fVar6) /
                         fVar29);
        fVar7 = -fVar85;
        if (0.0 <= fVar85) {
          fVar7 = fVar85;
        }
        if (fVar7 <= 1.1920929e-07) {
          fVar54 = (float)uVar12;
          fVar55 = (float)((ulong)uVar12 >> 0x20);
          fVar82 = (float)uVar17;
          fVar31 = (float)((ulong)uVar17 >> 0x20);
          fVar7 = fVar56 * fVar54 + fVar64 * fVar55 + fVar76 * fVar82 + fVar65 * fVar31;
          fVar18 = fVar58 * fVar54 + fVar67 * fVar55 + fVar78 * fVar82 + fVar68 * fVar31;
          fVar53 = fVar60 * fVar54 + fVar70 * fVar55 + fVar79 * fVar82 + fVar71 * fVar31;
          fVar54 = fVar62 * fVar54 + fVar73 * fVar55 + fVar80 * fVar82 + fVar74 * fVar31;
          fVar7 = (fVar24 * fVar7 + fVar75 * fVar18 + fVar47 * fVar53 + fVar36 * fVar54) / fVar29 +
                  fVar86 * ((fVar19 * fVar7 + fVar69 * fVar18 + fVar42 * fVar53 + fVar32 * fVar54) /
                           fVar29) +
                  fVar84 * ((fVar21 * fVar7 + fVar66 * fVar18 + fVar37 * fVar53 + fVar30 * fVar54) /
                           fVar29) +
                  fVar25 * ((fVar22 * fVar7 + fVar72 * fVar18 + fVar45 * fVar53 + fVar34 * fVar54) /
                           fVar29);
        }
        else {
          fVar18 = (fVar53 * fVar46) / fVar63 +
                   (fVar55 * fVar41) / fVar63 + (fVar54 * fVar90) / fVar63;
          fVar7 = -fVar6;
          if (0.0 <= fVar6) {
            fVar7 = fVar6;
          }
          if (fVar7 <= 1.1920929e-07) {
            fVar7 = fVar18 / fVar85 - (fVar89 * fVar83 * local_118._4_4_) / fVar85;
          }
          else {
            fVar7 = fVar18 / fVar85 -
                    fVar6 * ((fVar89 * fVar83 * (local_118._4_4_ / fVar6)) / fVar85 +
                            (fVar88 * fVar83) / fVar85);
          }
        }
        fVar18 = local_134 * fVar7 + fVar6 * local_138;
        fVar21 = local_12c + fVar18 + local_118._4_4_ * local_130;
        local_12c = local_12c + fVar18 + (float)local_120 * local_130;
        fVar82 = *(float *)((long)param_4 + 0x2c) +
                 *(float *)((long)param_4 + 0x24) *
                 (local_14c / fVar21 +
                 fVar7 * (local_154 / fVar21) + fVar6 * (local_158 / fVar21) +
                 local_118._4_4_ * (local_150 / fVar21)) +
                 (local_15c / fVar21 +
                 fVar7 * (local_164 / fVar21) + fVar6 * (local_168 / fVar21) +
                 local_118._4_4_ * (local_160 / fVar21)) * *(float *)(param_4 + 4) +
                 (local_13c / fVar21 +
                 fVar7 * (local_144 / fVar21) + fVar6 * (local_148 / fVar21) +
                 local_118._4_4_ * (local_140 / fVar21)) * *(float *)(param_4 + 5);
        fVar54 = *(float *)((long)param_4 + 0x2c) +
                 *(float *)((long)param_4 + 0x24) *
                 (local_14c / local_12c +
                 fVar7 * (local_154 / local_12c) + fVar6 * (local_158 / local_12c) +
                 (float)local_120 * (local_150 / local_12c)) +
                 (local_15c / local_12c +
                 fVar7 * (local_164 / local_12c) + fVar6 * (local_168 / local_12c) +
                 (float)local_120 * (local_160 / local_12c)) * *(float *)(param_4 + 4) +
                 (local_13c / local_12c +
                 fVar7 * (local_144 / local_12c) + fVar6 * (local_148 / local_12c) +
                 (float)local_120 * (local_140 / local_12c)) * *(float *)(param_4 + 5);
        fVar53 = -fVar82;
        fVar55 = -fVar54;
        fVar18 = (float)local_120;
        fVar21 = fVar55;
        if (fVar54 <= fVar82) {
          fVar18 = local_118._4_4_;
          fVar21 = fVar53;
          fVar53 = fVar55;
        }
        if ((fVar53 != fVar21) && (0.0 < fVar53 * fVar21)) {
          fVar54 = -param_1;
          if (0.0 <= param_1) {
            fVar54 = param_1;
          }
          fVar54 = fVar54 + *(float *)(param_3 + 0x13c);
          fVar55 = fVar21;
          if (fVar21 <= fVar54) {
            fVar55 = fVar54;
          }
          fVar54 = 0.0;
          if (0.0 <= fVar55) {
            fVar54 = fVar55;
          }
          fVar55 = -param_2;
          if (0.0 <= param_2) {
            fVar55 = param_2;
          }
          fVar55 = *(float *)(param_3 + 0x14c) - fVar55;
          fVar82 = fVar53;
          if (fVar55 <= fVar53) {
            fVar82 = fVar55;
          }
          fVar55 = 0.0;
          if (0.0 <= fVar82) {
            fVar55 = fVar82;
          }
          fVar54 = fVar54 * fVar55;
          if (0.0 <= fVar54) {
            fVar82 = local_118._4_4_ - (float)local_120;
            fVar55 = SQRT(fVar54);
            if (NAN(fVar55)) {
              fVar55 = sqrtf(fVar54);
            }
            local_188 = (fVar82 / (fVar53 - fVar21)) * (fVar21 + fVar55);
            local_194 = *(undefined4 *)PTR_DAT_04bd0ea8;
            fVar6 = -fVar6;
            fVar53 = -fVar18 - local_188;
            fVar7 = -fVar7;
            local_190 = *(undefined4 *)PTR_DAT_04bd0eb0;
            local_184 = fVar82 + local_188;
            local_18c = DAT_05ae77d4;
            local_178 = 0x3f800000bf800000;
            local_220 = PTR_DAT_04bd0ec8 + 0x10;
            local_180 = 0xbf8000003f800000;
            uStack_218._0_2_ = 0x101;
            FUN_038e5cd4(&local_220,&fStack_214);
            uStack_218._0_2_ = 0x100;
            (**(code **)(local_220 + 0x60))(&local_220,local_1d4,&fStack_214,local_194);
            auVar20 = NEON_fmov(0xbf800000,4);
            fVar18 = fStack_214 * 0.0 + fStack_204 * 0.0;
            fVar21 = fStack_210 * 0.0 + fStack_200 * 0.0;
            fVar54 = fStack_20c * 0.0 + fStack_1fc * 0.0;
            fVar24 = fStack_208 * 0.0 + local_1f8 * 0.0;
            fVar55 = fStack_214 + fStack_204 * 0.0 + fStack_1f4 * 0.0 + local_1e4 * 0.0;
            fVar82 = fStack_210 + fStack_200 * 0.0 + fStack_1f0 * 0.0 + fStack_1e0 * 0.0;
            fVar19 = fStack_20c + fStack_1fc * 0.0 + fStack_1ec * 0.0 + fStack_1dc * 0.0;
            fVar22 = fStack_208 + local_1f8 * 0.0 + fStack_1e8 * 0.0 + fStack_1d8 * 0.0;
            fVar31 = fStack_204 + fStack_214 * 0.0 + fStack_1f4 * 0.0 + local_1e4 * 0.0;
            fVar50 = fStack_200 + fStack_210 * 0.0 + fStack_1f0 * 0.0 + fStack_1e0 * 0.0;
            fVar52 = fStack_1fc + fStack_20c * 0.0 + fStack_1ec * 0.0 + fStack_1dc * 0.0;
            fVar90 = local_1f8 + fStack_208 * 0.0 + fStack_1e8 * 0.0 + fStack_1d8 * 0.0;
            fVar48 = fVar18 + auVar20._0_4_ * fStack_1f4 + local_1e4 * 0.0;
            fVar49 = fVar21 + auVar20._4_4_ * fStack_1f0 + fStack_1e0 * 0.0;
            fVar84 = fVar54 + auVar20._8_4_ * fStack_1ec + fStack_1dc * 0.0;
            fVar33 = fVar24 + auVar20._12_4_ * fStack_1e8 + fStack_1d8 * 0.0;
            fVar38 = local_1e4 + fVar18 + fStack_1f4 * 0.0;
            fVar39 = fStack_1e0 + fVar21 + fStack_1f0 * 0.0;
            fVar41 = fStack_1dc + fVar54 + fStack_1ec * 0.0;
            fVar44 = fStack_1d8 + fVar24 + fStack_1e8 * 0.0;
            fVar18 = fVar55 * 1.0 + fVar82 * 0.0 + fVar19 * 0.0 + fVar65 * fVar22;
            fVar21 = fVar55 * 0.0 + fVar82 * 1.0 + fVar19 * 0.0 + fVar68 * fVar22;
            fVar54 = fVar55 * 0.0 + fVar82 * 0.0 + fVar19 * 1.0 + fVar71 * fVar22;
            fVar82 = fVar6 * fVar55 + fVar7 * fVar82 + fVar53 * fVar19 + fVar74 * fVar22;
            fVar19 = fVar31 * 1.0 + fVar50 * 0.0 + fVar52 * 0.0 + fVar65 * fVar90;
            fVar22 = fVar31 * 0.0 + fVar50 * 1.0 + fVar52 * 0.0 + fVar68 * fVar90;
            fVar24 = fVar31 * 0.0 + fVar50 * 0.0 + fVar52 * 1.0 + fVar71 * fVar90;
            fVar31 = fVar6 * fVar31 + fVar7 * fVar50 + fVar53 * fVar52 + fVar74 * fVar90;
            *(ulong *)(param_3 + 0x238) = CONCAT44(fVar82,fVar54);
            *(ulong *)(param_3 + 0x230) = CONCAT44(fVar21,fVar18);
            fVar90 = fVar38 * 1.0 + fVar39 * 0.0 + fVar41 * 0.0 + fVar65 * fVar44;
            fVar43 = fVar38 * 0.0 + fVar39 * 1.0 + fVar41 * 0.0 + fVar68 * fVar44;
            fVar46 = fVar38 * 0.0 + fVar39 * 0.0 + fVar41 * 1.0 + fVar71 * fVar44;
            fVar86 = fVar6 * fVar38 + fVar7 * fVar39 + fVar53 * fVar41 + fVar74 * fVar44;
            fVar38 = fVar48 * 1.0 + fVar49 * 0.0 + fVar84 * 0.0 + fVar65 * fVar33;
            fVar39 = fVar48 * 0.0 + fVar49 * 1.0 + fVar84 * 0.0 + fVar68 * fVar33;
            fVar41 = fVar48 * 0.0 + fVar49 * 0.0 + fVar84 * 1.0 + fVar71 * fVar33;
            fVar44 = fVar6 * fVar48 + fVar7 * fVar49 + fVar53 * fVar84 + fVar74 * fVar33;
            fVar6 = fVar18 * 0.0 + fVar19 * 0.0;
            fVar48 = fVar21 * 0.0 + fVar22 * 0.0;
            fVar49 = fVar54 * 0.0 + fVar24 * 0.0;
            fVar84 = fVar82 * 0.0 + fVar31 * 0.0;
            *(ulong *)(param_3 + 0x268) = CONCAT44(fVar86,fVar46);
            *(ulong *)(param_3 + 0x260) = CONCAT44(fVar43,fVar90);
            fVar7 = fVar18 + fVar19 * 0.0 + fVar38 * 0.0 + fVar90 * 0.0;
            fVar53 = fVar21 + fVar22 * 0.0 + fVar39 * 0.0 + fVar43 * 0.0;
            fVar55 = fVar54 + fVar24 * 0.0 + fVar41 * 0.0 + fVar46 * 0.0;
            fVar33 = fVar19 + fVar18 * 0.0 + fVar38 * 0.0 + fVar90 * 0.0;
            fVar87 = fVar22 + fVar21 * 0.0 + fVar39 * 0.0 + fVar43 * 0.0;
            fVar25 = fVar24 + fVar54 * 0.0 + fVar41 * 0.0 + fVar46 * 0.0;
            fVar54 = fVar38 + fVar6 + fVar90 * 0.0;
            fVar50 = fVar39 + fVar48 + fVar43 * 0.0;
            fVar52 = fVar41 + fVar49 + fVar46 * 0.0;
            fVar90 = fVar90 + fVar6 + fVar38 * 0.0;
            fVar43 = fVar43 + fVar48 + fVar39 * 0.0;
            fVar46 = fVar46 + fVar49 + fVar41 * 0.0;
            fVar26 = (float)*(undefined8 *)(param_3 + 0x200);
            fVar27 = (float)((ulong)*(undefined8 *)(param_3 + 0x200) >> 0x20);
            fVar29 = (float)*(undefined8 *)(param_3 + 0x208);
            fVar35 = (float)((ulong)*(undefined8 *)(param_3 + 0x208) >> 0x20);
            fVar28 = (float)*(undefined8 *)(param_3 + 0x210);
            fVar30 = (float)((ulong)*(undefined8 *)(param_3 + 0x210) >> 0x20);
            fVar40 = (float)*(undefined8 *)(param_3 + 0x218);
            fVar32 = (float)((ulong)*(undefined8 *)(param_3 + 0x218) >> 0x20);
            *(float *)(param_3 + 0x248) = fVar24;
            *(float *)(param_3 + 0x24c) = fVar31;
            *(float *)(param_3 + 0x240) = fVar19;
            *(float *)(param_3 + 0x244) = fVar22;
            *(ulong *)(param_3 + 600) = CONCAT44(fVar44,fVar41);
            *(ulong *)(param_3 + 0x250) = CONCAT44(fVar39,fVar38);
            fVar19 = (float)*(undefined8 *)(param_3 + 0x220);
            fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x220) >> 0x20);
            fVar24 = (float)*(undefined8 *)(param_3 + 0x228);
            fVar34 = (float)((ulong)*(undefined8 *)(param_3 + 0x228) >> 0x20);
            fVar38 = fVar26 * fVar90 + fVar28 * fVar43 + fVar19 * fVar46 + 0.0;
            fVar39 = fVar27 * fVar90 + fVar30 * fVar43 + fVar22 * fVar46 + 0.0;
            fVar41 = fVar29 * fVar90 + fVar40 * fVar43 + fVar24 * fVar46 + 0.0;
            fVar90 = fVar86 + fVar84 + fVar44 * 0.0 +
                     fVar35 * fVar90 + fVar32 * fVar43 + fVar34 * fVar46;
            fVar6 = fVar26 * fVar7 + fVar28 * fVar53 + fVar19 * fVar55 + 0.0;
            fVar18 = fVar27 * fVar7 + fVar30 * fVar53 + fVar22 * fVar55 + 0.0;
            fVar21 = fVar29 * fVar7 + fVar40 * fVar53 + fVar24 * fVar55 + 0.0;
            fVar7 = fVar82 + fVar31 * 0.0 + fVar44 * 0.0 + fVar86 * 0.0 +
                    fVar35 * fVar7 + fVar32 * fVar53 + fVar34 * fVar55;
            fVar48 = fVar26 * fVar33 + fVar28 * fVar87 + fVar19 * fVar25 + 0.0;
            fVar43 = fVar27 * fVar33 + fVar30 * fVar87 + fVar22 * fVar25 + 0.0;
            fVar49 = fVar29 * fVar33 + fVar40 * fVar87 + fVar24 * fVar25 + 0.0;
            fVar82 = fVar31 + fVar82 * 0.0 + fVar44 * 0.0 + fVar86 * 0.0 +
                     fVar35 * fVar33 + fVar32 * fVar87 + fVar34 * fVar25;
            fVar19 = fVar26 * fVar54 + fVar28 * fVar50 + fVar19 * fVar52 + 0.0;
            fVar22 = fVar27 * fVar54 + fVar30 * fVar50 + fVar22 * fVar52 + 0.0;
            fVar24 = fVar29 * fVar54 + fVar40 * fVar50 + fVar24 * fVar52 + 0.0;
            fVar31 = fVar44 + fVar84 + fVar86 * 0.0 +
                     fVar35 * fVar54 + fVar32 * fVar50 + fVar34 * fVar52;
            fVar53 = fVar56 * fVar6 + fVar64 * fVar18 + fVar76 * fVar21 + fVar65 * fVar7;
            fVar54 = fVar58 * fVar6 + fVar67 * fVar18 + fVar78 * fVar21 + fVar68 * fVar7;
            fVar55 = fVar60 * fVar6 + fVar70 * fVar18 + fVar79 * fVar21 + fVar71 * fVar7;
            fVar7 = fVar62 * fVar6 + fVar73 * fVar18 + fVar80 * fVar21 + fVar74 * fVar7;
            fVar6 = fVar56 * fVar48 + fVar64 * fVar43 + fVar76 * fVar49 + fVar65 * fVar82;
            fVar18 = fVar58 * fVar48 + fVar67 * fVar43 + fVar78 * fVar49 + fVar68 * fVar82;
            fVar21 = fVar60 * fVar48 + fVar70 * fVar43 + fVar79 * fVar49 + fVar71 * fVar82;
            fVar82 = fVar62 * fVar48 + fVar73 * fVar43 + fVar80 * fVar49 + fVar74 * fVar82;
            fVar44 = fVar56 * fVar19 + fVar64 * fVar22 + fVar76 * fVar24 + fVar65 * fVar31;
            fVar50 = fVar58 * fVar19 + fVar67 * fVar22 + fVar78 * fVar24 + fVar68 * fVar31;
            fVar52 = fVar60 * fVar19 + fVar70 * fVar22 + fVar79 * fVar24 + fVar71 * fVar31;
            fVar48 = fVar62 * fVar19 + fVar73 * fVar22 + fVar80 * fVar24 + fVar74 * fVar31;
            fVar49 = fVar56 * fVar38 + fVar64 * fVar39 + fVar76 * fVar41 + fVar65 * fVar90;
            fVar46 = fVar58 * fVar38 + fVar67 * fVar39 + fVar78 * fVar41 + fVar68 * fVar90;
            fVar84 = fVar60 * fVar38 + fVar70 * fVar39 + fVar79 * fVar41 + fVar71 * fVar90;
            fVar86 = fVar62 * fVar38 + fVar73 * fVar39 + fVar80 * fVar41 + fVar74 * fVar90;
            fVar27 = (float)local_250;
            fVar35 = (float)((ulong)local_250 >> 0x20);
            fVar30 = (float)uStack_248;
            fVar32 = (float)((ulong)uStack_248 >> 0x20);
            fVar19 = local_260 * fVar6;
            fVar22 = fStack_25c * fVar6;
            fVar24 = fStack_258 * fVar6;
            fVar6 = fStack_254 * fVar6;
            fVar31 = local_260 * fVar44;
            fVar38 = fStack_25c * fVar44;
            fVar39 = fStack_258 * fVar44;
            fVar44 = fStack_254 * fVar44;
            fVar41 = local_260 * fVar49;
            fVar90 = fStack_25c * fVar49;
            fVar43 = fStack_258 * fVar49;
            fVar49 = fStack_254 * fVar49;
            fVar33 = (float)local_240;
            fVar87 = (float)((ulong)local_240 >> 0x20);
            fVar25 = (float)uStack_238;
            fVar26 = (float)((ulong)uStack_238 >> 0x20);
            fVar29 = (float)local_230;
            fVar28 = (float)((ulong)local_230 >> 0x20);
            fVar40 = (float)uStack_228;
            fVar34 = (float)((ulong)uStack_228 >> 0x20);
            local_260 = local_260 * fVar53 + fVar27 * fVar54 + fVar33 * fVar55 + fVar29 * fVar7;
            fStack_25c = fStack_25c * fVar53 + fVar35 * fVar54 + fVar87 * fVar55 + fVar28 * fVar7;
            fStack_258 = fStack_258 * fVar53 + fVar30 * fVar54 + fVar25 * fVar55 + fVar40 * fVar7;
            fStack_254 = fStack_254 * fVar53 + fVar32 * fVar54 + fVar26 * fVar55 + fVar34 * fVar7;
            local_250 = CONCAT44(fVar38 + fVar35 * fVar50 + fVar87 * fVar52 + fVar28 * fVar48,
                                 fVar31 + fVar27 * fVar50 + fVar33 * fVar52 + fVar29 * fVar48);
            uStack_248 = CONCAT44(fVar44 + fVar32 * fVar50 + fVar26 * fVar52 + fVar34 * fVar48,
                                  fVar39 + fVar30 * fVar50 + fVar25 * fVar52 + fVar40 * fVar48);
            local_240 = CONCAT44(fVar22 + fVar35 * fVar18 + fVar87 * fVar21 + fVar28 * fVar82,
                                 fVar19 + fVar27 * fVar18 + fVar33 * fVar21 + fVar29 * fVar82);
            uStack_238 = CONCAT44(fVar6 + fVar32 * fVar18 + fVar26 * fVar21 + fVar34 * fVar82,
                                  fVar24 + fVar30 * fVar18 + fVar25 * fVar21 + fVar40 * fVar82);
            local_230 = CONCAT44(fVar90 + fVar35 * fVar46 + fVar87 * fVar84 + fVar28 * fVar86,
                                 fVar41 + fVar27 * fVar46 + fVar33 * fVar84 + fVar29 * fVar86);
            uStack_228 = CONCAT44(fVar49 + fVar32 * fVar46 + fVar26 * fVar84 + fVar34 * fVar86,
                                  fVar43 + fVar30 * fVar46 + fVar25 * fVar84 + fVar40 * fVar86);
          }
        }
      }
    }
  }
  fStack_210 = -3.4028235e+38;
  fStack_20c = -3.4028235e+38;
  local_220 = (undefined *)0x7f7fffff7f7fffff;
  uStack_218._0_2_ = 0xffff;
  uStack_218._2_2_ = 0x7f7f;
  fStack_214 = -3.4028235e+38;
  FUN_03ad1050(param_3 + 0x78,&local_220,&local_260,param_3 + 0x150);
  if ((((float)local_220 <= fStack_214) && (local_220._4_4_ <= fStack_210)) &&
     (fVar7 = (float)CONCAT22(uStack_218._2_2_,(undefined2)uStack_218), fVar7 <= fStack_20c)) {
    fVar18 = fStack_214 - (float)local_220;
    fVar6 = fStack_210 - local_220._4_4_;
    bVar4 = *(char *)(param_3 + 0x5bc) != '\0';
    if (param_5 == 2 && bVar4) {
      fStack_214 = ((float)local_220 + fStack_214) * 0.5;
      fVar21 = *(float *)(param_3 + 0x124) * 0.5;
      fStack_210 = (local_220._4_4_ + fStack_210) * 0.5;
      fVar55 = fStack_214 - fVar21;
      fStack_214 = fStack_214 + fVar21;
      fVar53 = fStack_210 - fVar21;
      fStack_210 = fStack_210 + fVar21;
      fVar54 = fStack_214 - fVar55;
      fVar82 = ((float)local_220 - fVar55) / fVar54;
      fVar21 = fStack_210 - fVar53;
      fVar24 = fVar18 / fVar54;
      fVar19 = (local_220._4_4_ - fVar53) / fVar21;
      fVar22 = fVar6 / fVar21;
    }
    else {
      fVar24 = 1.0;
      fVar82 = 0.0;
      fVar19 = 0.0;
      fVar22 = 1.0;
      fVar21 = fVar6;
      fVar53 = local_220._4_4_;
      fVar54 = fVar18;
      fVar55 = (float)local_220;
    }
    iVar77 = *param_6;
    iVar81 = param_6[1];
    *(float *)(param_3 + 0x5c0) = fVar82;
    *(float *)(param_3 + 0x5c4) = fVar19;
    *(float *)(param_3 + 0x5c8) = fVar24;
    *(float *)(param_3 + 0x5cc) = fVar22;
    fVar82 = 2.0 / fVar54;
    fVar54 = -fStack_214 / fVar54 - fVar55 / fVar54;
    fVar55 = 2.0 / fVar21;
    fVar18 = fStack_20c - fVar7;
    fVar6 = -fStack_210 / fVar21 - fVar53 / fVar21;
    fVar7 = -fStack_20c / fVar18 - fVar7 / fVar18;
    fVar18 = 2.0 / fVar18;
    if (param_5 == 2 && bVar4) {
      fVar54 = (float)iVar77 * 0.5 * fVar54;
      fVar6 = (float)iVar81 * 0.5 * fVar6;
      uVar5 = 0;
      if (fVar54 != (float)(int)fVar54) {
        uVar5 = (uint)(fVar54 < 0.0);
      }
      fVar54 = (float)(int)((int)fVar54 - uVar5) / ((float)iVar77 * 0.5);
      uVar5 = 0;
      if (fVar6 != (float)(int)fVar6) {
        uVar5 = (uint)(fVar6 < 0.0);
      }
      fVar6 = (float)(int)((int)fVar6 - uVar5) / ((float)iVar81 * 0.5);
    }
    fVar21 = (float)local_250;
    fVar19 = (float)((ulong)local_250 >> 0x20);
    fVar24 = (float)uStack_248;
    fVar38 = (float)((ulong)uStack_248 >> 0x20);
    fVar41 = local_260 * 0.0 + fVar21 * 0.0;
    fVar44 = fStack_25c * 0.0 + fVar19 * 0.0;
    fVar50 = fStack_258 * 0.0 + fVar24 * 0.0;
    fVar52 = fStack_254 * 0.0 + fVar38 * 0.0;
    *(undefined8 *)(param_3 + 0x278) = *(undefined8 *)(param_3 + 0x158);
    *(undefined8 *)(param_3 + 0x270) = *(undefined8 *)(param_3 + 0x150);
    *(undefined8 *)(param_3 + 0x288) = *(undefined8 *)(param_3 + 0x168);
    *(undefined8 *)(param_3 + 0x280) = *(undefined8 *)(param_3 + 0x160);
    fVar53 = (float)local_240;
    fVar22 = (float)((ulong)local_240 >> 0x20);
    fVar31 = (float)uStack_238;
    fVar39 = (float)((ulong)uStack_238 >> 0x20);
    fVar90 = (float)local_230;
    fVar48 = (float)((ulong)local_230 >> 0x20);
    fVar43 = (float)uStack_228;
    fVar49 = (float)((ulong)uStack_228 >> 0x20);
    *(undefined8 *)(param_3 + 0x298) = *(undefined8 *)(param_3 + 0x178);
    *(undefined8 *)(param_3 + 0x290) = *(undefined8 *)(param_3 + 0x170);
    *(ulong *)(param_3 + 0x2a8) =
         CONCAT44(fStack_254 * fVar82 + fVar38 * 0.0 + fVar39 * 0.0 + fVar49 * fVar54,
                  fStack_258 * fVar82 + fVar24 * 0.0 + fVar31 * 0.0 + fVar43 * fVar54);
    *(ulong *)(param_3 + 0x2a0) =
         CONCAT44(fStack_25c * fVar82 + fVar19 * 0.0 + fVar22 * 0.0 + fVar48 * fVar54,
                  local_260 * fVar82 + fVar21 * 0.0 + fVar53 * 0.0 + fVar90 * fVar54);
    *(ulong *)(param_3 + 0x2b8) =
         CONCAT44(fStack_254 * 0.0 + fVar38 * fVar55 + fVar39 * 0.0 + fVar49 * fVar6,
                  fStack_258 * 0.0 + fVar24 * fVar55 + fVar31 * 0.0 + fVar43 * fVar6);
    *(ulong *)(param_3 + 0x2b0) =
         CONCAT44(fStack_25c * 0.0 + fVar19 * fVar55 + fVar22 * 0.0 + fVar48 * fVar6,
                  local_260 * 0.0 + fVar21 * fVar55 + fVar53 * 0.0 + fVar90 * fVar6);
    *(ulong *)(param_3 + 0x2c8) =
         CONCAT44(fVar52 + fVar39 * fVar18 + fVar49 * fVar7,
                  fVar50 + fVar31 * fVar18 + fVar43 * fVar7);
    *(ulong *)(param_3 + 0x2c0) =
         CONCAT44(fVar44 + fVar22 * fVar18 + fVar48 * fVar7,
                  fVar41 + fVar53 * fVar18 + fVar90 * fVar7);
    *(ulong *)(param_3 + 0x2d8) =
         CONCAT44(fVar49 + fVar52 + fVar39 * 0.0,fVar43 + fVar50 + fVar31 * 0.0);
    *(ulong *)(param_3 + 0x2d0) =
         CONCAT44(fVar48 + fVar44 + fVar22 * 0.0,fVar90 + fVar41 + fVar53 * 0.0);
  }
  return;
}

