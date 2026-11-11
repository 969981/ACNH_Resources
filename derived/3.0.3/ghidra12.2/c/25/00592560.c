
/* WARNING: Removing unreachable block (ram,0x005934b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00592560(long param_1,long param_2)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  float fVar20;
  float fVar21;
  void *pvVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  byte *pbVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  undefined8 *puVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  uint *puVar39;
  uint *puVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  int iVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  ulong uVar57;
  ulong uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar63;
  undefined8 uVar62;
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar78;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined8 uVar83;
  undefined1 auVar85 [16];
  undefined8 uVar84;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  float fVar102;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar110;
  float fVar114;
  float fVar115;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar116 [16];
  undefined8 uVar117;
  undefined1 auVar118 [16];
  float fVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined1 auVar122 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  ulong local_a8;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  uint local_80;
  
  lVar23 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar23 != 0) {
    FUN_00443a00(lVar23,"TtUpdate All Vertex Frames (N)");
  }
  uVar36 = *(uint *)(param_1 + 0xac);
  local_90 = 0x8000000000000000;
  local_80 = uVar36;
  if (uVar36 == 0) {
    iVar48 = 0;
    local_98 = (void *)0x0;
  }
  else {
    lVar24 = FUN_0043c4e0(DAT_04c6f050);
    lVar23 = DAT_04c6f058;
    if (lVar24 != 0) {
      lVar23 = lVar24;
    }
    uVar26 = (ulong)(int)(uVar36 * 0x10 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar23 + 0x10) < uVar26) {
LAB_00592610:
      local_98 = (void *)FUN_00439510();
    }
    else {
      local_98 = *(void **)(lVar23 + 0x18);
      uVar26 = (long)local_98 + uVar26;
      if (*(ulong *)(lVar23 + 0x20) < uVar26) goto LAB_00592610;
      *(ulong *)(lVar23 + 0x18) = uVar26;
    }
    iVar48 = *(int *)(param_1 + 0xac);
  }
  local_90 = CONCAT44(uVar36,(int)local_90) | 0x8000000000000000;
  local_88 = local_98;
  if ((int)(uVar36 & 0x3fffffff) < iVar48) {
    local_98 = (void *)FUN_00426720(PTR_DAT_048607b8,iVar48,0x10,local_98,0,(long)&local_90 + 4);
    if ((int)local_90 != iVar48) {
LAB_0059269c:
      local_90 = CONCAT44(local_90._4_4_,iVar48);
    }
  }
  else if (iVar48 != 0) goto LAB_0059269c;
  if (0 < (int)*(uint *)(param_1 + 0xac)) {
    memset(local_98,0,(ulong)*(uint *)(param_1 + 0xac) << 4);
  }
  uVar62 = _DAT_0413f328;
  uVar64 = _DAT_0413f320;
  uVar36 = *(uint *)(param_2 + 0x38);
  lVar23 = *(long *)(param_2 + 0x18);
  uVar35 = (ulong)*(byte *)(param_2 + 0x24);
  puVar39 = *(uint **)(param_2 + 0x30);
  uVar26 = (ulong)*(byte *)(param_2 + 0x3c);
  pbVar28 = *(byte **)(param_1 + 0x58);
  if (7 < (int)uVar36) {
    auVar65 = NEON_fmov(0x40e00000,4);
    lVar24 = 0;
    plVar1 = (long *)(param_1 + 0x48);
    puVar40 = puVar39;
    do {
      puVar39 = puVar40 + uVar26 * 2;
      Hint_Prefetch(puVar39,0,0,0);
      Hint_Prefetch(puVar39 + 0x10,0,0,0);
      puVar2 = (uint *)((long)puVar40 + uVar26 * 2);
      puVar3 = (uint *)((long)puVar40 + uVar26 * 3);
      puVar4 = puVar40 + uVar26;
      puVar5 = (uint *)((long)puVar40 + uVar26 * 5);
      puVar6 = (uint *)((long)puVar40 + uVar26 * 6);
      puVar7 = (uint *)((long)puVar40 + uVar26);
      puVar8 = (uint *)((long)puVar40 + uVar26 * 7);
      if (*(char *)(param_2 + 0x3d) == '\0') {
        uVar37 = (ulong)*puVar40;
        uVar38 = (ulong)puVar40[1];
        uVar41 = (ulong)puVar40[2];
        uVar42 = (ulong)*puVar7;
        uVar43 = (ulong)puVar7[1];
        uVar25 = (ulong)puVar7[2];
        uVar27 = (ulong)*puVar2;
        uVar29 = (ulong)puVar2[1];
        uVar30 = (ulong)puVar2[2];
        uVar47 = (ulong)*puVar3;
        uVar50 = (ulong)puVar3[1];
        uVar52 = (ulong)puVar3[2];
        uVar53 = (ulong)*puVar4;
        uVar54 = (ulong)puVar4[1];
        uVar57 = (ulong)puVar4[2];
        uVar49 = (ulong)*puVar5;
        uVar51 = (ulong)puVar5[1];
        uVar46 = (ulong)puVar5[2];
        uVar55 = (ulong)*puVar6;
        uVar58 = (ulong)puVar6[1];
        uVar31 = (ulong)puVar6[2];
        uVar44 = (ulong)*puVar8;
        local_a8 = (ulong)puVar8[1];
        uVar45 = (ulong)puVar8[2];
      }
      else {
        uVar53 = (ulong)(ushort)*puVar4;
        uVar54 = (ulong)*(ushort *)((long)puVar4 + 2);
        uVar57 = (ulong)(ushort)puVar4[1];
        local_a8 = (ulong)*(ushort *)((long)puVar8 + 2);
        uVar37 = (ulong)(ushort)*puVar40;
        uVar38 = (ulong)*(ushort *)((long)puVar40 + 2);
        uVar41 = (ulong)(ushort)puVar40[1];
        uVar42 = (ulong)(ushort)*puVar7;
        uVar43 = (ulong)*(ushort *)((long)puVar7 + 2);
        uVar25 = (ulong)(ushort)puVar7[1];
        uVar27 = (ulong)(ushort)*puVar2;
        uVar29 = (ulong)*(ushort *)((long)puVar2 + 2);
        uVar30 = (ulong)(ushort)puVar2[1];
        uVar47 = (ulong)(ushort)*puVar3;
        uVar50 = (ulong)*(ushort *)((long)puVar3 + 2);
        uVar52 = (ulong)(ushort)puVar3[1];
        uVar49 = (ulong)(ushort)*puVar5;
        uVar51 = (ulong)*(ushort *)((long)puVar5 + 2);
        uVar46 = (ulong)(ushort)puVar5[1];
        uVar55 = (ulong)(ushort)*puVar6;
        uVar58 = (ulong)*(ushort *)((long)puVar6 + 2);
        uVar31 = (ulong)(ushort)puVar6[1];
        uVar44 = (ulong)(ushort)*puVar8;
        uVar45 = (ulong)(ushort)puVar8[1];
      }
      pfVar10 = (float *)(lVar23 + (uVar42 & 0xffff) * uVar35);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      fVar110 = pfVar10[2];
      fVar114 = pfVar10[3];
      puVar33 = (undefined8 *)(lVar23 + (uVar43 & 0xffff) * uVar35);
      uVar121 = puVar33[1];
      uVar120 = *puVar33;
      pfVar10 = (float *)(lVar23 + (uVar25 & 0xffff) * uVar35);
      fVar115 = *pfVar10;
      fVar119 = pfVar10[1];
      fVar20 = pfVar10[2];
      fVar21 = pfVar10[3];
      pfVar10 = (float *)(lVar23 + (uVar27 & 0xffff) * uVar35);
      fVar123 = *pfVar10;
      fVar124 = pfVar10[1];
      fVar125 = pfVar10[2];
      fVar126 = pfVar10[3];
      puVar33 = (undefined8 *)(lVar23 + (uVar29 & 0xffff) * uVar35);
      uVar88 = puVar33[1];
      uVar117 = *puVar33;
      puVar33 = (undefined8 *)(lVar23 + (uVar30 & 0xffff) * uVar35);
      uVar90 = puVar33[1];
      uVar89 = *puVar33;
      pfVar10 = (float *)(lVar23 + (uVar47 & 0xffff) * uVar35);
      pfVar11 = (float *)(lVar23 + (uVar37 & 0xffff) * uVar35);
      puVar33 = (undefined8 *)(lVar23 + (uVar38 & 0xffff) * uVar35);
      uVar84 = puVar33[1];
      uVar83 = *puVar33;
      pfVar12 = (float *)(lVar23 + (uVar41 & 0xffff) * uVar35);
      fVar101 = (float)uVar83 - *pfVar11;
      fVar72 = (float)((ulong)uVar83 >> 0x20) - pfVar11[1];
      uVar66 = (undefined1)((uint)fVar72 >> 8);
      uVar67 = (undefined1)((uint)fVar72 >> 0x10);
      uVar68 = (undefined1)((uint)fVar72 >> 0x18);
      fVar70 = (float)uVar84 - pfVar11[2];
      fVar73 = (float)((ulong)uVar84 >> 0x20) - pfVar11[3];
      pfVar13 = (float *)(lVar23 + (uVar50 & 0xffff) * uVar35);
      auVar118._0_4_ = *pfVar12 - *pfVar11;
      auVar118._4_4_ = pfVar12[1] - pfVar11[1];
      auVar118._8_4_ = pfVar12[2] - pfVar11[2];
      auVar118._12_4_ = pfVar12[3] - pfVar11[3];
      pfVar11 = (float *)(lVar23 + (uVar52 & 0xffff) * uVar35);
      auVar99._0_4_ = *pfVar13 - *pfVar10;
      auVar99._4_4_ = pfVar13[1] - pfVar10[1];
      auVar99._8_4_ = pfVar13[2] - pfVar10[2];
      auVar99._12_4_ = pfVar13[3] - pfVar10[3];
      auVar79[4] = SUB41(fVar72,0);
      auVar79._0_4_ = fVar101;
      auVar79[5] = uVar66;
      auVar79[6] = uVar67;
      auVar79[7] = uVar68;
      auVar79._8_4_ = fVar70;
      auVar79._12_4_ = fVar73;
      auVar80[4] = SUB41(fVar72,0);
      auVar80._0_4_ = fVar101;
      auVar80[5] = uVar66;
      auVar80[6] = uVar67;
      auVar80[7] = uVar68;
      auVar80._8_4_ = fVar70;
      auVar80._12_4_ = fVar73;
      auVar79 = NEON_ext(auVar79,auVar80,4,1);
      pfVar12 = (float *)(lVar23 + (uVar53 & 0xffff) * uVar35);
      auVar97._0_4_ = *pfVar11 - *pfVar10;
      auVar97._4_4_ = pfVar11[1] - pfVar10[1];
      auVar97._8_4_ = pfVar11[2] - pfVar10[2];
      auVar97._12_4_ = pfVar11[3] - pfVar10[3];
      auVar80 = NEON_ext(auVar118,auVar118,4,1);
      pfVar10 = (float *)(lVar23 + (uVar54 & 0xffff) * uVar35);
      pfVar11 = (float *)(lVar23 + (uVar57 & 0xffff) * uVar35);
      auVar85 = NEON_ext(auVar79,auVar79,8,1);
      auVar87 = NEON_ext(auVar80,auVar80,8,1);
      pfVar13 = (float *)(lVar23 + (uVar49 & 0xffff) * uVar35);
      uVar83 = NEON_rev64(auVar85._0_8_,4);
      uVar84 = NEON_rev64(auVar87._0_8_,4);
      auVar96._0_4_ = *pfVar10 - *pfVar12;
      auVar96._4_4_ = pfVar10[1] - pfVar12[1];
      auVar96._8_4_ = pfVar10[2] - pfVar12[2];
      auVar96._12_4_ = pfVar10[3] - pfVar12[3];
      bVar9 = pbVar28[lVar24];
      auVar94._0_4_ = *pfVar11 - *pfVar12;
      auVar94._4_4_ = pfVar11[1] - pfVar12[1];
      auVar94._8_4_ = pfVar11[2] - pfVar12[2];
      auVar94._12_4_ = pfVar11[3] - pfVar12[3];
      auVar111._0_4_ = fVar101 * auVar80._0_4_ - auVar118._0_4_ * auVar79._0_4_;
      auVar111._4_4_ = fVar72 * auVar80._4_4_ - auVar118._4_4_ * auVar79._4_4_;
      auVar111._8_4_ = fVar70 * (float)uVar84 - auVar118._8_4_ * (float)uVar83;
      auVar111._12_4_ =
           fVar73 * (float)((ulong)uVar84 >> 0x20) -
           auVar118._12_4_ * (float)((ulong)uVar83 >> 0x20);
      auVar79 = NEON_ext(auVar111,auVar111,4,1);
      pfVar10 = (float *)(lVar23 + (uVar51 & 0xffff) * uVar35);
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar37 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)(lVar23 + (uVar46 & 0xffff) * uVar35);
      pfVar12 = (float *)(lVar23 + (uVar55 & 0xffff) * uVar35);
      fVar82 = auVar65._0_4_;
      fVar101 = (float)(bVar9 >> 7) * fVar82;
      auVar93._0_4_ = *pfVar10 - *pfVar13;
      auVar93._4_4_ = pfVar10[1] - pfVar13[1];
      auVar93._8_4_ = pfVar10[2] - pfVar13[2];
      auVar93._12_4_ = pfVar10[3] - pfVar13[3];
      pfVar10 = (float *)(lVar23 + (uVar58 & 0xffff) * uVar35);
      auVar91._0_4_ = *pfVar11 - *pfVar13;
      auVar91._4_4_ = pfVar11[1] - pfVar13[1];
      auVar91._8_4_ = pfVar11[2] - pfVar13[2];
      auVar91._12_4_ = pfVar11[3] - pfVar13[3];
      pfVar11 = (float *)(lVar23 + (uVar31 & 0xffff) * uVar35);
      auVar86._0_4_ = *pfVar10 - *pfVar12;
      auVar86._4_4_ = pfVar10[1] - pfVar12[1];
      auVar86._8_4_ = pfVar10[2] - pfVar12[2];
      auVar86._12_4_ = pfVar10[3] - pfVar12[3];
      puVar33 = (undefined8 *)(lVar23 + (uVar44 & 0xffff) * uVar35);
      uVar83 = puVar33[1];
      fVar71 = (float)uVar83;
      fVar74 = (float)((ulong)uVar83 >> 0x20);
      uVar83 = *puVar33;
      fVar59 = (float)uVar64;
      fVar60 = (float)((ulong)uVar64 >> 0x20);
      fVar61 = (float)uVar62;
      fVar63 = (float)((ulong)uVar62 >> 0x20);
      auVar100 = NEON_ext(auVar99,auVar99,4,1);
      pfVar10 = (float *)(lVar23 + (local_a8 & 0xffff) * uVar35);
      fVar102 = auVar79._0_4_ * (fVar59 - fVar101);
      fVar107 = auVar79._4_4_ * (fVar60 - fVar101);
      fVar108 = auVar111._0_4_ * (fVar61 - fVar101);
      fVar109 = auVar111._4_4_ * (fVar63 - fVar101);
      auVar87 = NEON_ext(auVar96,auVar96,4,1);
      auVar81._0_4_ = *pfVar11 - *pfVar12;
      auVar81._4_4_ = pfVar11[1] - pfVar12[1];
      auVar81._8_4_ = pfVar11[2] - pfVar12[2];
      auVar81._12_4_ = pfVar11[3] - pfVar12[3];
      auVar85 = NEON_ext(auVar93,auVar93,4,1);
      pfVar11 = (float *)(lVar23 + (uVar45 & 0xffff) * uVar35);
      fVar101 = (float)uVar83;
      auVar76._0_4_ = *pfVar10 - fVar101;
      fVar72 = (float)((ulong)uVar83 >> 0x20);
      auVar76._4_4_ = pfVar10[1] - fVar72;
      auVar76._8_4_ = pfVar10[2] - fVar71;
      auVar76._12_4_ = pfVar10[3] - fVar74;
      auVar80 = NEON_ext(auVar86,auVar86,4,1);
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar70 = *pfVar10;
      fVar73 = pfVar10[1];
      lVar24 = lVar24 + 1;
      fVar101 = *pfVar11 - fVar101;
      fVar72 = pfVar11[1] - fVar72;
      uVar66 = (undefined1)((uint)fVar72 >> 8);
      uVar67 = (undefined1)((uint)fVar72 >> 0x10);
      uVar68 = (undefined1)((uint)fVar72 >> 0x18);
      fVar71 = pfVar11[2] - fVar71;
      fVar74 = pfVar11[3] - fVar74;
      auVar79 = NEON_ext(auVar76,auVar76,4,1);
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = pfVar10[2] + fVar108;
      pfVar11[3] = pfVar10[3] + fVar109;
      *pfVar11 = fVar70 + fVar102;
      pfVar11[1] = fVar73 + fVar107;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar38 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar70 = *pfVar10;
      fVar73 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar108 + pfVar10[2];
      pfVar11[3] = fVar109 + pfVar10[3];
      *pfVar11 = fVar102 + fVar70;
      pfVar11[1] = fVar107 + fVar73;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar41 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar70 = *pfVar10;
      fVar73 = pfVar10[1];
      auVar112._0_4_ = fVar115 - fVar75;
      auVar112._4_4_ = fVar119 - fVar78;
      auVar112._8_4_ = fVar20 - fVar110;
      auVar112._12_4_ = fVar21 - fVar114;
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar108 + pfVar10[2];
      pfVar11[3] = fVar109 + pfVar10[3];
      *pfVar11 = fVar102 + fVar70;
      pfVar11[1] = fVar107 + fVar73;
      auVar103._0_4_ = (float)uVar120 - fVar75;
      auVar103._4_4_ = (float)((ulong)uVar120 >> 0x20) - fVar78;
      auVar103._8_4_ = (float)uVar121 - fVar110;
      auVar103._12_4_ = (float)((ulong)uVar121 >> 0x20) - fVar114;
      auVar118 = NEON_ext(auVar112,auVar112,4,1);
      auVar122 = NEON_ext(auVar118,auVar118,8,1);
      auVar116 = NEON_ext(auVar103,auVar103,4,1);
      uVar83 = NEON_rev64(auVar122._0_8_,4);
      auVar122 = NEON_ext(auVar116,auVar116,8,1);
      uVar84 = NEON_rev64(auVar122._0_8_,4);
      fVar119 = (float)(bVar9 >> 6 & 1) * fVar82;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar42 & 0xffff) * 2) * 0x10;
      auVar104._0_4_ = auVar103._0_4_ * auVar118._0_4_ - auVar112._0_4_ * auVar116._0_4_;
      auVar104._4_4_ = auVar103._4_4_ * auVar118._4_4_ - auVar112._4_4_ * auVar116._4_4_;
      auVar104._8_4_ = auVar103._8_4_ * (float)uVar83 - auVar112._8_4_ * (float)uVar84;
      auVar104._12_4_ =
           auVar103._12_4_ * (float)((ulong)uVar83 >> 0x20) -
           auVar112._12_4_ * (float)((ulong)uVar84 >> 0x20);
      auVar116 = NEON_ext(auVar104,auVar104,4,1);
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      fVar110 = auVar116._0_4_ * (fVar59 - fVar119);
      fVar114 = auVar116._4_4_ * (fVar60 - fVar119);
      fVar115 = auVar104._0_4_ * (fVar61 - fVar119);
      fVar119 = auVar104._4_4_ * (fVar63 - fVar119);
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar43 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar25 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      auVar113._0_4_ = (float)uVar89 - fVar123;
      auVar113._4_4_ = (float)((ulong)uVar89 >> 0x20) - fVar124;
      auVar113._8_4_ = (float)uVar90 - fVar125;
      auVar113._12_4_ = (float)((ulong)uVar90 >> 0x20) - fVar126;
      auVar122 = NEON_ext(auVar113,auVar113,4,1);
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      auVar105._0_4_ = (float)uVar117 - fVar123;
      auVar105._4_4_ = (float)((ulong)uVar117 >> 0x20) - fVar124;
      auVar105._8_4_ = (float)uVar88 - fVar125;
      auVar105._12_4_ = (float)((ulong)uVar88 >> 0x20) - fVar126;
      auVar118 = NEON_ext(auVar122,auVar122,8,1);
      auVar116 = NEON_ext(auVar105,auVar105,4,1);
      uVar84 = NEON_rev64(auVar118._0_8_,4);
      auVar118 = NEON_ext(auVar116,auVar116,8,1);
      uVar83 = NEON_rev64(auVar118._0_8_,4);
      auVar118 = NEON_ext(auVar100,auVar100,8,1);
      fVar119 = (float)(bVar9 >> 5 & 1) * fVar82;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar27 & 0xffff) * 2) * 0x10;
      auVar106._0_4_ = auVar105._0_4_ * auVar122._0_4_ - auVar113._0_4_ * auVar116._0_4_;
      auVar106._4_4_ = auVar105._4_4_ * auVar122._4_4_ - auVar113._4_4_ * auVar116._4_4_;
      auVar106._8_4_ = auVar105._8_4_ * (float)uVar84 - auVar113._8_4_ * (float)uVar83;
      auVar106._12_4_ =
           auVar105._12_4_ * (float)((ulong)uVar84 >> 0x20) -
           auVar113._12_4_ * (float)((ulong)uVar83 >> 0x20);
      auVar116 = NEON_ext(auVar106,auVar106,4,1);
      uVar83 = NEON_rev64(auVar118._0_8_,4);
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      fVar110 = auVar116._0_4_ * (fVar59 - fVar119);
      fVar114 = auVar116._4_4_ * (fVar60 - fVar119);
      fVar115 = auVar106._0_4_ * (fVar61 - fVar119);
      fVar119 = auVar106._4_4_ * (fVar63 - fVar119);
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar29 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar30 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      auVar118 = NEON_ext(auVar97,auVar97,4,1);
      auVar116 = NEON_ext(auVar87,auVar87,8,1);
      auVar122 = NEON_ext(auVar118,auVar118,8,1);
      uVar117 = NEON_rev64(auVar122._0_8_,4);
      fVar119 = (float)(bVar9 >> 4 & 1) * fVar82;
      uVar84 = NEON_rev64(auVar116._0_8_,4);
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar47 & 0xffff) * 2) * 0x10;
      auVar98._0_4_ = auVar99._0_4_ * auVar118._0_4_ - auVar97._0_4_ * auVar100._0_4_;
      auVar98._4_4_ = auVar99._4_4_ * auVar118._4_4_ - auVar97._4_4_ * auVar100._4_4_;
      auVar98._8_4_ = auVar99._8_4_ * (float)uVar117 - auVar97._8_4_ * (float)uVar83;
      auVar98._12_4_ =
           auVar99._12_4_ * (float)((ulong)uVar117 >> 0x20) -
           auVar97._12_4_ * (float)((ulong)uVar83 >> 0x20);
      auVar100 = NEON_ext(auVar98,auVar98,4,1);
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      fVar110 = auVar100._0_4_ * (fVar59 - fVar119);
      fVar114 = auVar100._4_4_ * (fVar60 - fVar119);
      fVar115 = auVar98._0_4_ * (fVar61 - fVar119);
      fVar119 = auVar98._4_4_ * (fVar63 - fVar119);
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar50 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar52 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      auVar116 = NEON_ext(auVar94,auVar94,4,1);
      auVar100 = NEON_ext(auVar85,auVar85,8,1);
      auVar118 = NEON_ext(auVar116,auVar116,8,1);
      uVar117 = NEON_rev64(auVar118._0_8_,4);
      fVar119 = (float)(bVar9 >> 3 & 1) * fVar82;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar53 & 0xffff) * 2) * 0x10;
      uVar83 = NEON_rev64(auVar100._0_8_,4);
      auVar95._0_4_ = auVar96._0_4_ * auVar116._0_4_ - auVar94._0_4_ * auVar87._0_4_;
      auVar95._4_4_ = auVar96._4_4_ * auVar116._4_4_ - auVar94._4_4_ * auVar87._4_4_;
      auVar95._8_4_ = auVar96._8_4_ * (float)uVar117 - auVar94._8_4_ * (float)uVar84;
      auVar95._12_4_ =
           auVar96._12_4_ * (float)((ulong)uVar117 >> 0x20) -
           auVar94._12_4_ * (float)((ulong)uVar84 >> 0x20);
      auVar87 = NEON_ext(auVar95,auVar95,4,1);
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      fVar110 = auVar87._0_4_ * (fVar59 - fVar119);
      fVar114 = auVar87._4_4_ * (fVar60 - fVar119);
      fVar115 = auVar95._0_4_ * (fVar61 - fVar119);
      fVar119 = auVar95._4_4_ * (fVar63 - fVar119);
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar54 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar57 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      auVar100 = NEON_ext(auVar91,auVar91,4,1);
      auVar87 = NEON_ext(auVar80,auVar80,8,1);
      auVar116 = NEON_ext(auVar100,auVar100,8,1);
      uVar117 = NEON_rev64(auVar116._0_8_,4);
      fVar119 = (float)(bVar9 >> 2 & 1) * fVar82;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar49 & 0xffff) * 2) * 0x10;
      uVar84 = NEON_rev64(auVar87._0_8_,4);
      auVar92._0_4_ = auVar93._0_4_ * auVar100._0_4_ - auVar91._0_4_ * auVar85._0_4_;
      auVar92._4_4_ = auVar93._4_4_ * auVar100._4_4_ - auVar91._4_4_ * auVar85._4_4_;
      auVar92._8_4_ = auVar93._8_4_ * (float)uVar117 - auVar91._8_4_ * (float)uVar83;
      auVar92._12_4_ =
           auVar93._12_4_ * (float)((ulong)uVar117 >> 0x20) -
           auVar91._12_4_ * (float)((ulong)uVar83 >> 0x20);
      auVar85 = NEON_ext(auVar92,auVar92,4,1);
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      fVar110 = auVar85._0_4_ * (fVar59 - fVar119);
      fVar114 = auVar85._4_4_ * (fVar60 - fVar119);
      fVar115 = auVar92._0_4_ * (fVar61 - fVar119);
      fVar119 = auVar92._4_4_ * (fVar63 - fVar119);
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar51 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar46 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      auVar87 = NEON_ext(auVar81,auVar81,4,1);
      auVar85 = NEON_ext(auVar79,auVar79,8,1);
      auVar100 = NEON_ext(auVar87,auVar87,8,1);
      uVar117 = NEON_rev64(auVar100._0_8_,4);
      fVar119 = (float)(bVar9 >> 1 & 1) * fVar82;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar55 & 0xffff) * 2) * 0x10;
      uVar83 = NEON_rev64(auVar85._0_8_,4);
      auVar122._0_4_ = auVar86._0_4_ * auVar87._0_4_ - auVar81._0_4_ * auVar80._0_4_;
      auVar122._4_4_ = auVar86._4_4_ * auVar87._4_4_ - auVar81._4_4_ * auVar80._4_4_;
      auVar122._8_4_ = auVar86._8_4_ * (float)uVar117 - auVar81._8_4_ * (float)uVar84;
      auVar122._12_4_ =
           auVar86._12_4_ * (float)((ulong)uVar117 >> 0x20) -
           auVar81._12_4_ * (float)((ulong)uVar84 >> 0x20);
      auVar80 = NEON_ext(auVar122,auVar122,4,1);
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      fVar110 = auVar80._0_4_ * (fVar59 - fVar119);
      fVar114 = auVar80._4_4_ * (fVar60 - fVar119);
      fVar115 = auVar122._0_4_ * (fVar61 - fVar119);
      fVar119 = auVar122._4_4_ * (fVar63 - fVar119);
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar58 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar31 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar56);
      fVar75 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar56);
      pfVar11[2] = fVar115 + pfVar10[2];
      pfVar11[3] = fVar119 + pfVar10[3];
      *pfVar11 = fVar110 + fVar75;
      pfVar11[1] = fVar114 + fVar78;
      auVar85[4] = SUB41(fVar72,0);
      auVar85._0_4_ = fVar101;
      auVar85[5] = uVar66;
      auVar85[6] = uVar67;
      auVar85[7] = uVar68;
      auVar85._8_4_ = fVar71;
      auVar85._12_4_ = fVar74;
      auVar87[4] = SUB41(fVar72,0);
      auVar87._0_4_ = fVar101;
      auVar87[5] = uVar66;
      auVar87[6] = uVar67;
      auVar87[7] = uVar68;
      auVar87._8_4_ = fVar71;
      auVar87._12_4_ = fVar74;
      auVar80 = NEON_ext(auVar85,auVar87,4,1);
      auVar85 = NEON_ext(auVar80,auVar80,8,1);
      uVar84 = NEON_rev64(auVar85._0_8_,4);
      fVar82 = (float)(bVar9 & 1) * fVar82;
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar44 & 0xffff) * 2) * 0x10;
      fVar101 = auVar76._0_4_ * auVar80._0_4_ - fVar101 * auVar79._0_4_;
      fVar72 = auVar76._4_4_ * auVar80._4_4_ - fVar72 * auVar79._4_4_;
      uVar66 = SUB41(fVar72,0);
      uVar67 = (undefined1)((uint)fVar72 >> 8);
      uVar68 = (undefined1)((uint)fVar72 >> 0x10);
      uVar69 = (undefined1)((uint)fVar72 >> 0x18);
      fVar72 = auVar76._8_4_ * (float)uVar84 - fVar71 * (float)uVar83;
      fVar75 = auVar76._12_4_ * (float)((ulong)uVar84 >> 0x20) -
               fVar74 * (float)((ulong)uVar83 >> 0x20);
      auVar100[4] = uVar66;
      auVar100._0_4_ = fVar101;
      auVar100[5] = uVar67;
      auVar100[6] = uVar68;
      auVar100[7] = uVar69;
      auVar100._8_4_ = fVar72;
      auVar100._12_4_ = fVar75;
      auVar116[4] = uVar66;
      auVar116._0_4_ = fVar101;
      auVar116[5] = uVar67;
      auVar116[6] = uVar68;
      auVar116[7] = uVar69;
      auVar116._8_4_ = fVar72;
      auVar116._12_4_ = fVar75;
      auVar79 = NEON_ext(auVar100,auVar116,4,1);
      puVar33 = (undefined8 *)((long)local_98 + lVar56);
      uVar84 = puVar33[1];
      uVar83 = *puVar33;
      fVar75 = (fVar59 - fVar82) * auVar79._0_4_;
      fVar72 = (fVar60 - fVar82) * auVar79._4_4_;
      fVar78 = (fVar61 - fVar82) * fVar101;
      fVar110 = (fVar63 - fVar82) *
                (float)(CONCAT17(uVar69,CONCAT16(uVar68,CONCAT15(uVar67,CONCAT14(uVar66,fVar101))))
                       >> 0x20);
      fVar101 = fVar72 + (float)((ulong)uVar83 >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + lVar56);
      puVar33[1] = CONCAT44(fVar110 + (float)((ulong)uVar84 >> 0x20),fVar78 + (float)uVar84);
      *puVar33 = CONCAT17((char)((uint)fVar101 >> 0x18),
                          CONCAT16((char)((uint)fVar101 >> 0x10),
                                   CONCAT15((char)((uint)fVar101 >> 8),
                                            CONCAT14(SUB41(fVar101,0),fVar75 + (float)uVar83))));
      lVar56 = (ulong)*(ushort *)(*plVar1 + (local_a8 & 0xffff) * 2) * 0x10;
      puVar33 = (undefined8 *)((long)local_98 + lVar56);
      uVar84 = puVar33[1];
      uVar83 = *puVar33;
      fVar101 = fVar72 + (float)((ulong)uVar83 >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + lVar56);
      puVar33[1] = CONCAT44(fVar110 + (float)((ulong)uVar84 >> 0x20),fVar78 + (float)uVar84);
      *puVar33 = CONCAT17((char)((uint)fVar101 >> 0x18),
                          CONCAT16((char)((uint)fVar101 >> 0x10),
                                   CONCAT15((char)((uint)fVar101 >> 8),
                                            CONCAT14(SUB41(fVar101,0),fVar75 + (float)uVar83))));
      lVar56 = (ulong)*(ushort *)(*plVar1 + (uVar45 & 0xffff) * 2) * 0x10;
      puVar33 = (undefined8 *)((long)local_98 + lVar56);
      uVar84 = puVar33[1];
      uVar83 = *puVar33;
      fVar72 = fVar72 + (float)((ulong)uVar83 >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + lVar56);
      puVar33[1] = CONCAT44(fVar110 + (float)((ulong)uVar84 >> 0x20),fVar78 + (float)uVar84);
      *puVar33 = CONCAT17((char)((uint)fVar72 >> 0x18),
                          CONCAT16((char)((uint)fVar72 >> 0x10),
                                   CONCAT15((char)((uint)fVar72 >> 8),
                                            CONCAT14(SUB41(fVar72,0),fVar75 + (float)uVar83))));
      puVar40 = puVar39;
    } while ((int)lVar24 < (int)uVar36 >> 3);
    pbVar28 = pbVar28 + lVar24;
    uVar64 = _DAT_0413f320;
    uVar62 = _DAT_0413f328;
  }
  _DAT_0413f320 = uVar64;
  _DAT_0413f328 = uVar62;
  if ((uVar36 & 7) != 0) {
    auVar65 = NEON_fmov(0x40e00000,4);
    iVar48 = 0;
    puVar39 = puVar39 + 1;
    do {
      if (*(char *)(param_2 + 0x3d) == '\0') {
        uVar37 = (ulong)puVar39[-1];
        uVar42 = (ulong)*puVar39;
        uVar27 = (ulong)puVar39[1];
      }
      else {
        uVar37 = (ulong)(ushort)puVar39[-1];
        uVar42 = (ulong)*(ushort *)((long)puVar39 + -2);
        uVar27 = (ulong)(ushort)*puVar39;
      }
      puVar33 = (undefined8 *)(lVar23 + (uVar37 & 0xffff) * uVar35);
      uVar83 = puVar33[1];
      fVar75 = (float)uVar83;
      fVar78 = (float)((ulong)uVar83 >> 0x20);
      uVar83 = *puVar33;
      pfVar10 = (float *)(lVar23 + (uVar42 & 0xffff) * uVar35);
      pfVar11 = (float *)(lVar23 + (uVar27 & 0xffff) * uVar35);
      fVar101 = (float)uVar83;
      auVar77._0_4_ = *pfVar10 - fVar101;
      fVar72 = (float)((ulong)uVar83 >> 0x20);
      auVar77._4_4_ = pfVar10[1] - fVar72;
      auVar77._8_4_ = pfVar10[2] - fVar75;
      auVar77._12_4_ = pfVar10[3] - fVar78;
      fVar101 = *pfVar11 - fVar101;
      fVar72 = pfVar11[1] - fVar72;
      uVar66 = (undefined1)((uint)fVar72 >> 8);
      uVar67 = (undefined1)((uint)fVar72 >> 0x10);
      uVar68 = (undefined1)((uint)fVar72 >> 0x18);
      fVar75 = pfVar11[2] - fVar75;
      fVar78 = pfVar11[3] - fVar78;
      auVar79 = NEON_ext(auVar77,auVar77,4,1);
      auVar85 = NEON_ext(auVar79,auVar79,8,1);
      auVar15[4] = SUB41(fVar72,0);
      auVar15._0_4_ = fVar101;
      auVar15[5] = uVar66;
      auVar15[6] = uVar67;
      auVar15[7] = uVar68;
      auVar15._8_4_ = fVar75;
      auVar15._12_4_ = fVar78;
      auVar16[4] = SUB41(fVar72,0);
      auVar16._0_4_ = fVar101;
      auVar16[5] = uVar66;
      auVar16[6] = uVar67;
      auVar16[7] = uVar68;
      auVar16._8_4_ = fVar75;
      auVar16._12_4_ = fVar78;
      auVar80 = NEON_ext(auVar15,auVar16,4,1);
      uVar83 = NEON_rev64(auVar85._0_8_,4);
      auVar85 = NEON_ext(auVar80,auVar80,8,1);
      uVar84 = NEON_rev64(auVar85._0_8_,4);
      lVar24 = (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + (uVar37 & 0xffff) * 2) * 0x10;
      fVar101 = auVar77._0_4_ * auVar80._0_4_ - fVar101 * auVar79._0_4_;
      fVar72 = auVar77._4_4_ * auVar80._4_4_ - fVar72 * auVar79._4_4_;
      uVar66 = SUB41(fVar72,0);
      uVar67 = (undefined1)((uint)fVar72 >> 8);
      uVar68 = (undefined1)((uint)fVar72 >> 0x10);
      uVar69 = (undefined1)((uint)fVar72 >> 0x18);
      fVar72 = auVar77._8_4_ * (float)uVar84 - fVar75 * (float)uVar83;
      fVar75 = auVar77._12_4_ * (float)((ulong)uVar84 >> 0x20) -
               fVar78 * (float)((ulong)uVar83 >> 0x20);
      auVar17[4] = uVar66;
      auVar17._0_4_ = fVar101;
      auVar17[5] = uVar67;
      auVar17[6] = uVar68;
      auVar17[7] = uVar69;
      auVar17._8_4_ = fVar72;
      auVar17._12_4_ = fVar75;
      auVar18[4] = uVar66;
      auVar18._0_4_ = fVar101;
      auVar18[5] = uVar67;
      auVar18[6] = uVar68;
      auVar18[7] = uVar69;
      auVar18._8_4_ = fVar72;
      auVar18._12_4_ = fVar75;
      auVar79 = NEON_ext(auVar17,auVar18,4,1);
      fVar115 = (float)(int)((1 << (ulong)(iVar48 + 7U & 0x1f) & (uint)*pbVar28) >>
                            (ulong)(iVar48 + 7U & 0x1f)) * auVar65._0_4_;
      iVar48 = iVar48 + -1;
      pfVar10 = (float *)((long)local_98 + lVar24);
      fVar78 = *pfVar10;
      fVar110 = pfVar10[1];
      puVar39 = (uint *)((long)puVar39 + uVar26);
      fVar72 = auVar79._0_4_ * ((float)uVar64 - fVar115);
      fVar75 = auVar79._4_4_ * ((float)((ulong)uVar64 >> 0x20) - fVar115);
      fVar114 = fVar101 * ((float)uVar62 - fVar115);
      fVar115 = (float)(CONCAT17(uVar69,CONCAT16(uVar68,CONCAT15(uVar67,CONCAT14(uVar66,fVar101))))
                       >> 0x20) * ((float)((ulong)uVar62 >> 0x20) - fVar115);
      pfVar11 = (float *)((long)local_98 + lVar24);
      pfVar11[2] = pfVar10[2] + fVar114;
      pfVar11[3] = pfVar10[3] + fVar115;
      *pfVar11 = fVar78 + fVar72;
      pfVar11[1] = fVar110 + fVar75;
      lVar24 = (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + (uVar42 & 0xffff) * 2) * 0x10;
      pfVar10 = (float *)((long)local_98 + lVar24);
      fVar101 = *pfVar10;
      fVar78 = pfVar10[1];
      pfVar11 = (float *)((long)local_98 + lVar24);
      pfVar11[2] = fVar114 + pfVar10[2];
      pfVar11[3] = fVar115 + pfVar10[3];
      *pfVar11 = fVar72 + fVar101;
      pfVar11[1] = fVar75 + fVar78;
      lVar24 = (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + (uVar27 & 0xffff) * 2) * 0x10;
      auVar79 = *(undefined1 (*) [16])((long)local_98 + lVar24);
      fVar75 = fVar75 + auVar79._4_4_;
      puVar33 = (undefined8 *)((long)local_98 + lVar24);
      puVar33[1] = CONCAT44(fVar115 + auVar79._12_4_,fVar114 + auVar79._8_4_);
      *puVar33 = CONCAT17((char)((uint)fVar75 >> 0x18),
                          CONCAT16((char)((uint)fVar75 >> 0x10),
                                   CONCAT15((char)((uint)fVar75 >> 8),
                                            CONCAT14(SUB41(fVar75,0),fVar72 + auVar79._0_4_))));
    } while (-(uVar36 & 7) != iVar48);
  }
  uVar36 = *(uint *)(param_1 + 0xac);
  uVar26 = 0;
  uVar34 = uVar36 >> 3;
  if (uVar34 != 0) {
    do {
      uVar35 = -(uVar26 >> 0x1f) & 0xfffffff000000000 | uVar26 << 4;
      uVar34 = uVar34 - 1;
      puVar33 = (undefined8 *)((long)local_98 + uVar35);
      uVar62 = puVar33[1];
      uVar64 = *puVar33;
      fVar101 = (float)uVar64;
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar75 = (float)uVar62;
      fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      uVar64 = CONCAT44(fVar114,fVar78);
      uVar83 = NEON_frsqrte(uVar64,4);
      fVar110 = (float)uVar83;
      fVar115 = (float)((ulong)uVar83 >> 0x20);
      iVar48 = -(uint)(fVar78 <= 0.0);
      iVar19 = -(uint)(fVar114 <= 0.0);
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
      fVar110 = fVar110 * (float)uVar64;
      fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
      fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar48)));
      fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar115 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)
                                                  ))) >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + uVar35);
      puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
      *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
      iVar32 = (int)uVar26;
      uVar26 = -(ulong)(iVar32 + 1U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 1U) << 4;
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      uVar62 = puVar33[1];
      uVar64 = *puVar33;
      fVar101 = (float)uVar64;
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar75 = (float)uVar62;
      fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      uVar64 = CONCAT44(fVar114,fVar78);
      uVar83 = NEON_frsqrte(uVar64,4);
      fVar110 = (float)uVar83;
      fVar115 = (float)((ulong)uVar83 >> 0x20);
      iVar48 = -(uint)(fVar78 <= 0.0);
      iVar19 = -(uint)(fVar114 <= 0.0);
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
      fVar110 = fVar110 * (float)uVar64;
      fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
      fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar48)));
      fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar115 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)
                                                  ))) >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
      *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
      uVar26 = -(ulong)(iVar32 + 2U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 2U) << 4;
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      uVar62 = puVar33[1];
      uVar64 = *puVar33;
      fVar101 = (float)uVar64;
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar75 = (float)uVar62;
      fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      uVar64 = CONCAT44(fVar114,fVar78);
      uVar83 = NEON_frsqrte(uVar64,4);
      fVar110 = (float)uVar83;
      fVar115 = (float)((ulong)uVar83 >> 0x20);
      iVar48 = -(uint)(fVar78 <= 0.0);
      iVar19 = -(uint)(fVar114 <= 0.0);
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
      fVar110 = fVar110 * (float)uVar64;
      fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
      fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar48)));
      fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar115 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)
                                                  ))) >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
      *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
      uVar26 = -(ulong)(iVar32 + 3U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 3U) << 4;
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      uVar62 = puVar33[1];
      uVar64 = *puVar33;
      fVar101 = (float)uVar64;
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar75 = (float)uVar62;
      fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      uVar64 = CONCAT44(fVar114,fVar78);
      uVar83 = NEON_frsqrte(uVar64,4);
      fVar110 = (float)uVar83;
      fVar115 = (float)((ulong)uVar83 >> 0x20);
      iVar48 = -(uint)(fVar78 <= 0.0);
      iVar19 = -(uint)(fVar114 <= 0.0);
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
      fVar110 = fVar110 * (float)uVar64;
      fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
      fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar48)));
      fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar115 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)
                                                  ))) >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
      *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
      uVar26 = -(ulong)(iVar32 + 4U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 4U) << 4;
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      uVar62 = puVar33[1];
      uVar64 = *puVar33;
      fVar101 = (float)uVar64;
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar75 = (float)uVar62;
      fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      uVar64 = CONCAT44(fVar114,fVar78);
      uVar83 = NEON_frsqrte(uVar64,4);
      fVar110 = (float)uVar83;
      fVar115 = (float)((ulong)uVar83 >> 0x20);
      iVar48 = -(uint)(fVar78 <= 0.0);
      iVar19 = -(uint)(fVar114 <= 0.0);
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
      fVar110 = fVar110 * (float)uVar64;
      fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
      fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar48)));
      fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar115 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)
                                                  ))) >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
      *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
      uVar26 = -(ulong)(iVar32 + 5U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 5U) << 4;
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      uVar62 = puVar33[1];
      uVar64 = *puVar33;
      fVar101 = (float)uVar64;
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar75 = (float)uVar62;
      fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      uVar64 = CONCAT44(fVar114,fVar78);
      uVar83 = NEON_frsqrte(uVar64,4);
      fVar110 = (float)uVar83;
      fVar115 = (float)((ulong)uVar83 >> 0x20);
      iVar48 = -(uint)(fVar78 <= 0.0);
      iVar19 = -(uint)(fVar114 <= 0.0);
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
      fVar110 = fVar110 * (float)uVar64;
      fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
      fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar48)));
      fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar115 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)
                                                  ))) >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
      *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
      uVar26 = -(ulong)(iVar32 + 6U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 6U) << 4;
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      uVar62 = puVar33[1];
      uVar64 = *puVar33;
      fVar101 = (float)uVar64;
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar75 = (float)uVar62;
      fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      uVar64 = CONCAT44(fVar114,fVar78);
      uVar83 = NEON_frsqrte(uVar64,4);
      fVar110 = (float)uVar83;
      fVar115 = (float)((ulong)uVar83 >> 0x20);
      iVar48 = -(uint)(fVar78 <= 0.0);
      iVar19 = -(uint)(fVar114 <= 0.0);
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
      fVar110 = fVar110 * (float)uVar64;
      fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
      fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar48)));
      fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar115 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)
                                                  ))) >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
      *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
      uVar35 = -(ulong)(iVar32 + 7U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 7U) << 4;
      puVar33 = (undefined8 *)((long)local_98 + uVar35);
      uVar62 = puVar33[1];
      uVar64 = *puVar33;
      uVar26 = (ulong)(iVar32 + 8);
      fVar101 = (float)uVar64;
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar75 = (float)uVar62;
      fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      uVar64 = CONCAT44(fVar114,fVar78);
      uVar83 = NEON_frsqrte(uVar64,4);
      fVar110 = (float)uVar83;
      fVar115 = (float)((ulong)uVar83 >> 0x20);
      iVar48 = -(uint)(fVar78 <= 0.0);
      iVar19 = -(uint)(fVar114 <= 0.0);
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
      fVar110 = fVar110 * (float)uVar64;
      fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
      fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar48)));
      fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar115 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)
                                                  ))) >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + uVar35);
      puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
      *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
    } while (uVar34 != 0);
    uVar36 = *(uint *)(param_1 + 0xac);
  }
  if ((uVar36 & 7) != 0) {
    uVar35 = -(uVar26 >> 0x1f) & 0xfffffff000000000 | uVar26 << 4;
    puVar33 = (undefined8 *)((long)local_98 + uVar35);
    uVar62 = puVar33[1];
    uVar64 = *puVar33;
    fVar101 = (float)uVar64;
    fVar72 = (float)((ulong)uVar64 >> 0x20);
    fVar75 = (float)uVar62;
    fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
    fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
    uVar64 = CONCAT44(fVar114,fVar78);
    uVar83 = NEON_frsqrte(uVar64,4);
    fVar110 = (float)uVar83;
    fVar115 = (float)((ulong)uVar83 >> 0x20);
    iVar48 = -(uint)(fVar78 <= 0.0);
    iVar19 = -(uint)(fVar114 <= 0.0);
    uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
    fVar110 = fVar110 * (float)uVar64;
    fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
    fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                             CONCAT12((byte)((uint)fVar110 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                      CONCAT11((byte)((uint)fVar110 >> 8) &
                                               ~(byte)((uint)iVar48 >> 8),
                                               SUB41(fVar110,0) & ~(byte)iVar48)));
    fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                               CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                        ~(byte)((uint)iVar19 >> 0x10),
                                        CONCAT15((byte)((uint)fVar115 >> 8) &
                                                 ~(byte)((uint)iVar19 >> 8),
                                                 CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)))
                              ) >> 0x20);
    puVar33 = (undefined8 *)((long)local_98 + uVar35);
    puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
    *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
    if ((*(byte *)(param_1 + 0xac) & 6) != 0) {
      iVar32 = (int)uVar26;
      uVar26 = -(ulong)(iVar32 + 1U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 1U) << 4;
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      uVar62 = puVar33[1];
      uVar64 = *puVar33;
      fVar101 = (float)uVar64;
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar75 = (float)uVar62;
      fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
      uVar64 = CONCAT44(fVar114,fVar78);
      uVar83 = NEON_frsqrte(uVar64,4);
      fVar110 = (float)uVar83;
      fVar115 = (float)((ulong)uVar83 >> 0x20);
      iVar48 = -(uint)(fVar78 <= 0.0);
      iVar19 = -(uint)(fVar114 <= 0.0);
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
      fVar110 = fVar110 * (float)uVar64;
      fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
      fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar48)));
      fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar115 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,fVar78)
                                                  ))) >> 0x20);
      puVar33 = (undefined8 *)((long)local_98 + uVar26);
      puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
      *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
      if (2 < (*(uint *)(param_1 + 0xac) & 7)) {
        uVar26 = -(ulong)(iVar32 + 2U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 2U) << 4;
        puVar33 = (undefined8 *)((long)local_98 + uVar26);
        uVar62 = puVar33[1];
        uVar64 = *puVar33;
        fVar101 = (float)uVar64;
        fVar72 = (float)((ulong)uVar64 >> 0x20);
        fVar75 = (float)uVar62;
        fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
        fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
        uVar64 = CONCAT44(fVar114,fVar78);
        uVar83 = NEON_frsqrte(uVar64,4);
        fVar110 = (float)uVar83;
        fVar115 = (float)((ulong)uVar83 >> 0x20);
        iVar48 = -(uint)(fVar78 <= 0.0);
        iVar19 = -(uint)(fVar114 <= 0.0);
        uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
        fVar110 = fVar110 * (float)uVar64;
        fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
        fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                 CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                          ~(byte)((uint)iVar48 >> 0x10),
                                          CONCAT11((byte)((uint)fVar110 >> 8) &
                                                   ~(byte)((uint)iVar48 >> 8),
                                                   SUB41(fVar110,0) & ~(byte)iVar48)));
        fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                   CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                            ~(byte)((uint)iVar19 >> 0x10),
                                            CONCAT15((byte)((uint)fVar115 >> 8) &
                                                     ~(byte)((uint)iVar19 >> 8),
                                                     CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,
                                                              fVar78)))) >> 0x20);
        puVar33 = (undefined8 *)((long)local_98 + uVar26);
        puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
        *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
        if ((*(byte *)(param_1 + 0xac) >> 2 & 1) != 0) {
          uVar26 = -(ulong)(iVar32 + 3U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 3U) << 4;
          puVar33 = (undefined8 *)((long)local_98 + uVar26);
          uVar62 = puVar33[1];
          uVar64 = *puVar33;
          fVar101 = (float)uVar64;
          fVar72 = (float)((ulong)uVar64 >> 0x20);
          fVar75 = (float)uVar62;
          fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
          fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
          uVar64 = CONCAT44(fVar114,fVar78);
          uVar83 = NEON_frsqrte(uVar64,4);
          fVar110 = (float)uVar83;
          fVar115 = (float)((ulong)uVar83 >> 0x20);
          iVar48 = -(uint)(fVar78 <= 0.0);
          iVar19 = -(uint)(fVar114 <= 0.0);
          uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
          fVar110 = fVar110 * (float)uVar64;
          fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
          fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                   CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                            ~(byte)((uint)iVar48 >> 0x10),
                                            CONCAT11((byte)((uint)fVar110 >> 8) &
                                                     ~(byte)((uint)iVar48 >> 8),
                                                     SUB41(fVar110,0) & ~(byte)iVar48)));
          fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                     CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                              ~(byte)((uint)iVar19 >> 0x10),
                                              CONCAT15((byte)((uint)fVar115 >> 8) &
                                                       ~(byte)((uint)iVar19 >> 8),
                                                       CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,
                                                                fVar78)))) >> 0x20);
          puVar33 = (undefined8 *)((long)local_98 + uVar26);
          puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
          *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
          if (4 < (*(uint *)(param_1 + 0xac) & 7)) {
            uVar26 = -(ulong)(iVar32 + 4U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar32 + 4U) << 4;
            puVar33 = (undefined8 *)((long)local_98 + uVar26);
            uVar62 = puVar33[1];
            uVar64 = *puVar33;
            fVar101 = (float)uVar64;
            fVar72 = (float)((ulong)uVar64 >> 0x20);
            fVar75 = (float)uVar62;
            fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
            fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
            uVar64 = CONCAT44(fVar114,fVar78);
            uVar83 = NEON_frsqrte(uVar64,4);
            fVar110 = (float)uVar83;
            fVar115 = (float)((ulong)uVar83 >> 0x20);
            iVar48 = -(uint)(fVar78 <= 0.0);
            iVar19 = -(uint)(fVar114 <= 0.0);
            uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
            fVar110 = fVar110 * (float)uVar64;
            fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
            fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                     CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                              ~(byte)((uint)iVar48 >> 0x10),
                                              CONCAT11((byte)((uint)fVar110 >> 8) &
                                                       ~(byte)((uint)iVar48 >> 8),
                                                       SUB41(fVar110,0) & ~(byte)iVar48)));
            fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18)
                                       ,CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                                 ~(byte)((uint)iVar19 >> 0x10),
                                                 CONCAT15((byte)((uint)fVar115 >> 8) &
                                                          ~(byte)((uint)iVar19 >> 8),
                                                          CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19,
                                                                   fVar78)))) >> 0x20);
            puVar33 = (undefined8 *)((long)local_98 + uVar26);
            puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
            *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
            if ((~*(uint *)(param_1 + 0xac) & 6) == 0) {
              uVar26 = -(ulong)(iVar32 + 5U >> 0x1f) & 0xfffffff000000000 |
                       (ulong)(iVar32 + 5U) << 4;
              puVar33 = (undefined8 *)((long)local_98 + uVar26);
              uVar62 = puVar33[1];
              uVar64 = *puVar33;
              fVar101 = (float)uVar64;
              fVar72 = (float)((ulong)uVar64 >> 0x20);
              fVar75 = (float)uVar62;
              fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
              fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
              uVar64 = CONCAT44(fVar114,fVar78);
              uVar83 = NEON_frsqrte(uVar64,4);
              fVar110 = (float)uVar83;
              fVar115 = (float)((ulong)uVar83 >> 0x20);
              iVar48 = -(uint)(fVar78 <= 0.0);
              iVar19 = -(uint)(fVar114 <= 0.0);
              uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
              fVar110 = fVar110 * (float)uVar64;
              fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
              fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18)
                                       ,CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                 ~(byte)((uint)iVar48 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar110 >> 8) &
                                                          ~(byte)((uint)iVar48 >> 8),
                                                          SUB41(fVar110,0) & ~(byte)iVar48)));
              fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) &
                                         ~(byte)((uint)iVar19 >> 0x18),
                                         CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                                  ~(byte)((uint)iVar19 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar115 >> 8) &
                                                           ~(byte)((uint)iVar19 >> 8),
                                                           CONCAT14(SUB41(fVar115,0) & ~(byte)iVar19
                                                                    ,fVar78)))) >> 0x20);
              puVar33 = (undefined8 *)((long)local_98 + uVar26);
              puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
              *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
              if ((~*(uint *)(param_1 + 0xac) & 7) == 0) {
                uVar26 = -(ulong)(iVar32 + 6U >> 0x1f) & 0xfffffff000000000 |
                         (ulong)(iVar32 + 6U) << 4;
                puVar33 = (undefined8 *)((long)local_98 + uVar26);
                uVar62 = puVar33[1];
                uVar64 = *puVar33;
                fVar101 = (float)uVar64;
                fVar72 = (float)((ulong)uVar64 >> 0x20);
                fVar75 = (float)uVar62;
                fVar78 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
                fVar114 = fVar101 * fVar101 + fVar72 * fVar72 + fVar75 * fVar75;
                uVar64 = CONCAT44(fVar114,fVar78);
                uVar83 = NEON_frsqrte(uVar64,4);
                fVar110 = (float)uVar83;
                fVar115 = (float)((ulong)uVar83 >> 0x20);
                iVar48 = -(uint)(fVar78 <= 0.0);
                iVar19 = -(uint)(fVar114 <= 0.0);
                uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar115 * fVar115,fVar110 * fVar110),4);
                fVar110 = fVar110 * (float)uVar64;
                fVar115 = fVar115 * (float)((ulong)uVar64 >> 0x20);
                fVar78 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                         ~(byte)((uint)iVar48 >> 0x18),
                                         CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                  ~(byte)((uint)iVar48 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar110 >> 8) &
                                                           ~(byte)((uint)iVar48 >> 8),
                                                           SUB41(fVar110,0) & ~(byte)iVar48)));
                fVar110 = (float)(CONCAT17((byte)((uint)fVar115 >> 0x18) &
                                           ~(byte)((uint)iVar19 >> 0x18),
                                           CONCAT16((byte)((uint)fVar115 >> 0x10) &
                                                    ~(byte)((uint)iVar19 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar115 >> 8) &
                                                             ~(byte)((uint)iVar19 >> 8),
                                                             CONCAT14(SUB41(fVar115,0) &
                                                                      ~(byte)iVar19,fVar78)))) >>
                                 0x20);
                puVar33 = (undefined8 *)((long)local_98 + uVar26);
                puVar33[1] = CONCAT44((float)((ulong)uVar62 >> 0x20) * fVar110,fVar75 * fVar78);
                *puVar33 = CONCAT44(fVar72 * fVar110,fVar101 * fVar78);
              }
            }
          }
        }
      }
    }
  }
  uVar36 = *(uint *)(param_2 + 0x20);
  if (0 < (int)uVar36) {
    puVar33 = *(undefined8 **)(param_2 + 0x40);
    if (uVar36 == 1) {
      lVar23 = 0;
    }
    else {
      bVar9 = *(byte *)(param_2 + 0x4c);
      lVar23 = 0;
      do {
        lVar24 = lVar23 * 2;
        lVar23 = lVar23 + 2;
        puVar14 = (undefined8 *)
                  ((long)local_98 + (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + lVar24) * 0x10);
        uVar64 = *puVar14;
        puVar33[1] = puVar14[1];
        *puVar33 = uVar64;
        puVar14 = (undefined8 *)
                  ((long)local_98 +
                  (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + lVar24 + 2) * 0x10);
        uVar64 = *puVar14;
        puVar33 = (undefined8 *)((long)puVar33 + (ulong)bVar9);
        puVar33[1] = puVar14[1];
        *puVar33 = uVar64;
        puVar33 = (undefined8 *)((long)puVar33 + (ulong)bVar9);
      } while ((ulong)uVar36 - ((ulong)uVar36 & 1) != lVar23);
      if ((uVar36 & 1) == 0) goto LAB_00593524;
    }
    puVar14 = (undefined8 *)
              ((long)local_98 + (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + lVar23 * 2) * 0x10);
    uVar64 = *puVar14;
    puVar33[1] = puVar14[1];
    *puVar33 = uVar64;
  }
LAB_00593524:
  lVar23 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar23 != 0) {
    FUN_00443a70(lVar23,&DAT_04085310);
  }
  uVar36 = local_80;
  pvVar22 = local_88;
  if (local_88 == local_98) {
    local_90 = local_90 & 0xffffffff00000000;
  }
  lVar24 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar23 = DAT_04c6f058;
  if (lVar24 != 0) {
    lVar23 = lVar24;
  }
  uVar26 = (ulong)(int)(uVar36 * 0x10 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar23 + 0x10) < uVar26) || (*(long *)(lVar23 + 0x18) != uVar26 + (long)pvVar22))
     || (*(void **)(lVar23 + 0x28) == pvVar22)) {
    FUN_00439980(lVar23,pvVar22);
    uVar36 = local_90._4_4_;
  }
  else {
    *(void **)(lVar23 + 0x18) = pvVar22;
    uVar36 = local_90._4_4_;
  }
  if ((-1 < (long)local_90) && (local_90 = (ulong)uVar36 << 0x20, local_98 != (void *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_98,0x10,uVar36 & 0x3fffffff);
  }
  return;
}

