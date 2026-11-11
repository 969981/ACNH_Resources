
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005914f0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  float fVar21;
  float fVar22;
  void *pvVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  int iVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  uint *puVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  int iVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  long lVar57;
  ulong uVar58;
  ulong uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar64;
  undefined8 uVar63;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  undefined8 uVar84;
  undefined1 auVar86 [16];
  undefined8 uVar85;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined1 auVar92 [16];
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
  float fVar103;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar111;
  float fVar115;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar117 [16];
  undefined8 uVar118;
  undefined1 auVar119 [16];
  float fVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined1 auVar123 [16];
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  ulong local_a8;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  uint local_80;
  
  lVar24 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar24 != 0) {
    FUN_00443a00(lVar24,"TtUpdate All Vertex Frames (N)");
  }
  uVar36 = *(uint *)(param_1 + 0xac);
  local_90 = 0x8000000000000000;
  local_80 = uVar36;
  if (uVar36 == 0) {
    iVar49 = 0;
    local_98 = (void *)0x0;
  }
  else {
    lVar25 = FUN_0043c4e0(DAT_04c6f050);
    lVar24 = DAT_04c6f058;
    if (lVar25 != 0) {
      lVar24 = lVar25;
    }
    uVar27 = (ulong)(int)(uVar36 * 0x10 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar24 + 0x10) < uVar27) {
LAB_005915a0:
      local_98 = (void *)FUN_00439510();
    }
    else {
      local_98 = *(void **)(lVar24 + 0x18);
      uVar27 = (long)local_98 + uVar27;
      if (*(ulong *)(lVar24 + 0x20) < uVar27) goto LAB_005915a0;
      *(ulong *)(lVar24 + 0x18) = uVar27;
    }
    iVar49 = *(int *)(param_1 + 0xac);
  }
  local_90 = CONCAT44(uVar36,(int)local_90) | 0x8000000000000000;
  local_88 = local_98;
  if ((int)(uVar36 & 0x3fffffff) < iVar49) {
    local_98 = (void *)FUN_00426720(PTR_DAT_048607b8,iVar49,0x10,local_98,0,(long)&local_90 + 4);
    if ((int)local_90 == iVar49) goto LAB_00591630;
  }
  else if (iVar49 == 0) goto LAB_00591630;
  local_90 = CONCAT44(local_90._4_4_,iVar49);
LAB_00591630:
  if (0 < (int)*(uint *)(param_1 + 0xac)) {
    memset(local_98,0,(ulong)*(uint *)(param_1 + 0xac) << 4);
  }
  uVar63 = _DAT_0413f328;
  uVar65 = _DAT_0413f320;
  uVar36 = *(uint *)(param_2 + 0x38);
  lVar24 = *(long *)(param_2 + 0x18);
  uVar35 = (ulong)*(byte *)(param_2 + 0x24);
  puVar40 = *(uint **)(param_2 + 0x30);
  uVar27 = (ulong)*(byte *)(param_2 + 0x3c);
  pbVar29 = *(byte **)(param_1 + 0x58);
  if (7 < (int)uVar36) {
    auVar66 = NEON_fmov(0x40e00000,4);
    lVar25 = 0;
    plVar1 = (long *)(param_1 + 0x48);
    puVar41 = puVar40;
    do {
      puVar40 = puVar41 + uVar27 * 2;
      Hint_Prefetch(puVar40,0,0,0);
      Hint_Prefetch(puVar40 + 0x10,0,0,0);
      puVar3 = (uint *)((long)puVar41 + uVar27 * 2);
      puVar4 = (uint *)((long)puVar41 + uVar27 * 3);
      puVar5 = puVar41 + uVar27;
      puVar6 = (uint *)((long)puVar41 + uVar27 * 5);
      puVar7 = (uint *)((long)puVar41 + uVar27 * 6);
      puVar8 = (uint *)((long)puVar41 + uVar27);
      puVar9 = (uint *)((long)puVar41 + uVar27 * 7);
      if (*(char *)(param_2 + 0x3d) == '\0') {
        uVar37 = (ulong)*puVar41;
        uVar38 = (ulong)puVar41[1];
        uVar42 = (ulong)puVar41[2];
        uVar43 = (ulong)*puVar8;
        uVar44 = (ulong)puVar8[1];
        uVar26 = (ulong)puVar8[2];
        uVar28 = (ulong)*puVar3;
        uVar30 = (ulong)puVar3[1];
        uVar31 = (ulong)puVar3[2];
        uVar48 = (ulong)*puVar4;
        uVar51 = (ulong)puVar4[1];
        uVar53 = (ulong)puVar4[2];
        uVar54 = (ulong)*puVar5;
        uVar55 = (ulong)puVar5[1];
        uVar58 = (ulong)puVar5[2];
        uVar50 = (ulong)*puVar6;
        uVar52 = (ulong)puVar6[1];
        uVar47 = (ulong)puVar6[2];
        uVar56 = (ulong)*puVar7;
        uVar59 = (ulong)puVar7[1];
        uVar32 = (ulong)puVar7[2];
        uVar45 = (ulong)*puVar9;
        local_a8 = (ulong)puVar9[1];
        uVar46 = (ulong)puVar9[2];
      }
      else {
        uVar54 = (ulong)(ushort)*puVar5;
        uVar55 = (ulong)*(ushort *)((long)puVar5 + 2);
        uVar58 = (ulong)(ushort)puVar5[1];
        local_a8 = (ulong)*(ushort *)((long)puVar9 + 2);
        uVar37 = (ulong)(ushort)*puVar41;
        uVar38 = (ulong)*(ushort *)((long)puVar41 + 2);
        uVar42 = (ulong)(ushort)puVar41[1];
        uVar43 = (ulong)(ushort)*puVar8;
        uVar44 = (ulong)*(ushort *)((long)puVar8 + 2);
        uVar26 = (ulong)(ushort)puVar8[1];
        uVar28 = (ulong)(ushort)*puVar3;
        uVar30 = (ulong)*(ushort *)((long)puVar3 + 2);
        uVar31 = (ulong)(ushort)puVar3[1];
        uVar48 = (ulong)(ushort)*puVar4;
        uVar51 = (ulong)*(ushort *)((long)puVar4 + 2);
        uVar53 = (ulong)(ushort)puVar4[1];
        uVar50 = (ulong)(ushort)*puVar6;
        uVar52 = (ulong)*(ushort *)((long)puVar6 + 2);
        uVar47 = (ulong)(ushort)puVar6[1];
        uVar56 = (ulong)(ushort)*puVar7;
        uVar59 = (ulong)*(ushort *)((long)puVar7 + 2);
        uVar32 = (ulong)(ushort)puVar7[1];
        uVar45 = (ulong)(ushort)*puVar9;
        uVar46 = (ulong)(ushort)puVar9[1];
      }
      pfVar11 = (float *)(lVar24 + (uVar43 & 0xffff) * uVar35);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      fVar111 = pfVar11[2];
      fVar115 = pfVar11[3];
      puVar39 = (undefined8 *)(lVar24 + (uVar44 & 0xffff) * uVar35);
      uVar122 = puVar39[1];
      uVar121 = *puVar39;
      pfVar11 = (float *)(lVar24 + (uVar26 & 0xffff) * uVar35);
      fVar116 = *pfVar11;
      fVar120 = pfVar11[1];
      fVar21 = pfVar11[2];
      fVar22 = pfVar11[3];
      pfVar11 = (float *)(lVar24 + (uVar28 & 0xffff) * uVar35);
      fVar124 = *pfVar11;
      fVar125 = pfVar11[1];
      fVar126 = pfVar11[2];
      fVar127 = pfVar11[3];
      puVar39 = (undefined8 *)(lVar24 + (uVar30 & 0xffff) * uVar35);
      uVar89 = puVar39[1];
      uVar118 = *puVar39;
      puVar39 = (undefined8 *)(lVar24 + (uVar31 & 0xffff) * uVar35);
      uVar91 = puVar39[1];
      uVar90 = *puVar39;
      pfVar11 = (float *)(lVar24 + (uVar48 & 0xffff) * uVar35);
      pfVar12 = (float *)(lVar24 + (uVar37 & 0xffff) * uVar35);
      puVar39 = (undefined8 *)(lVar24 + (uVar38 & 0xffff) * uVar35);
      uVar85 = puVar39[1];
      uVar84 = *puVar39;
      pfVar13 = (float *)(lVar24 + (uVar42 & 0xffff) * uVar35);
      fVar102 = (float)uVar84 - *pfVar12;
      fVar73 = (float)((ulong)uVar84 >> 0x20) - pfVar12[1];
      uVar67 = (undefined1)((uint)fVar73 >> 8);
      uVar68 = (undefined1)((uint)fVar73 >> 0x10);
      uVar69 = (undefined1)((uint)fVar73 >> 0x18);
      fVar71 = (float)uVar85 - pfVar12[2];
      fVar74 = (float)((ulong)uVar85 >> 0x20) - pfVar12[3];
      pfVar14 = (float *)(lVar24 + (uVar51 & 0xffff) * uVar35);
      auVar119._0_4_ = *pfVar13 - *pfVar12;
      auVar119._4_4_ = pfVar13[1] - pfVar12[1];
      auVar119._8_4_ = pfVar13[2] - pfVar12[2];
      auVar119._12_4_ = pfVar13[3] - pfVar12[3];
      pfVar12 = (float *)(lVar24 + (uVar53 & 0xffff) * uVar35);
      auVar100._0_4_ = *pfVar14 - *pfVar11;
      auVar100._4_4_ = pfVar14[1] - pfVar11[1];
      auVar100._8_4_ = pfVar14[2] - pfVar11[2];
      auVar100._12_4_ = pfVar14[3] - pfVar11[3];
      auVar80[4] = SUB41(fVar73,0);
      auVar80._0_4_ = fVar102;
      auVar80[5] = uVar67;
      auVar80[6] = uVar68;
      auVar80[7] = uVar69;
      auVar80._8_4_ = fVar71;
      auVar80._12_4_ = fVar74;
      auVar81[4] = SUB41(fVar73,0);
      auVar81._0_4_ = fVar102;
      auVar81[5] = uVar67;
      auVar81[6] = uVar68;
      auVar81[7] = uVar69;
      auVar81._8_4_ = fVar71;
      auVar81._12_4_ = fVar74;
      auVar80 = NEON_ext(auVar80,auVar81,4,1);
      pfVar13 = (float *)(lVar24 + (uVar54 & 0xffff) * uVar35);
      auVar98._0_4_ = *pfVar12 - *pfVar11;
      auVar98._4_4_ = pfVar12[1] - pfVar11[1];
      auVar98._8_4_ = pfVar12[2] - pfVar11[2];
      auVar98._12_4_ = pfVar12[3] - pfVar11[3];
      auVar81 = NEON_ext(auVar119,auVar119,4,1);
      pfVar11 = (float *)(lVar24 + (uVar55 & 0xffff) * uVar35);
      pfVar12 = (float *)(lVar24 + (uVar58 & 0xffff) * uVar35);
      auVar86 = NEON_ext(auVar80,auVar80,8,1);
      auVar88 = NEON_ext(auVar81,auVar81,8,1);
      pfVar14 = (float *)(lVar24 + (uVar50 & 0xffff) * uVar35);
      uVar84 = NEON_rev64(auVar86._0_8_,4);
      uVar85 = NEON_rev64(auVar88._0_8_,4);
      auVar97._0_4_ = *pfVar11 - *pfVar13;
      auVar97._4_4_ = pfVar11[1] - pfVar13[1];
      auVar97._8_4_ = pfVar11[2] - pfVar13[2];
      auVar97._12_4_ = pfVar11[3] - pfVar13[3];
      bVar10 = pbVar29[lVar25];
      auVar95._0_4_ = *pfVar12 - *pfVar13;
      auVar95._4_4_ = pfVar12[1] - pfVar13[1];
      auVar95._8_4_ = pfVar12[2] - pfVar13[2];
      auVar95._12_4_ = pfVar12[3] - pfVar13[3];
      auVar112._0_4_ = fVar102 * auVar81._0_4_ - auVar119._0_4_ * auVar80._0_4_;
      auVar112._4_4_ = fVar73 * auVar81._4_4_ - auVar119._4_4_ * auVar80._4_4_;
      auVar112._8_4_ = fVar71 * (float)uVar85 - auVar119._8_4_ * (float)uVar84;
      auVar112._12_4_ =
           fVar74 * (float)((ulong)uVar85 >> 0x20) -
           auVar119._12_4_ * (float)((ulong)uVar84 >> 0x20);
      auVar80 = NEON_ext(auVar112,auVar112,4,1);
      pfVar11 = (float *)(lVar24 + (uVar52 & 0xffff) * uVar35);
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar37 & 0xffff) * 2) * 0x10;
      pfVar12 = (float *)(lVar24 + (uVar47 & 0xffff) * uVar35);
      pfVar13 = (float *)(lVar24 + (uVar56 & 0xffff) * uVar35);
      fVar83 = auVar66._0_4_;
      fVar102 = (float)(bVar10 >> 7) * fVar83;
      auVar94._0_4_ = *pfVar11 - *pfVar14;
      auVar94._4_4_ = pfVar11[1] - pfVar14[1];
      auVar94._8_4_ = pfVar11[2] - pfVar14[2];
      auVar94._12_4_ = pfVar11[3] - pfVar14[3];
      pfVar11 = (float *)(lVar24 + (uVar59 & 0xffff) * uVar35);
      auVar92._0_4_ = *pfVar12 - *pfVar14;
      auVar92._4_4_ = pfVar12[1] - pfVar14[1];
      auVar92._8_4_ = pfVar12[2] - pfVar14[2];
      auVar92._12_4_ = pfVar12[3] - pfVar14[3];
      pfVar12 = (float *)(lVar24 + (uVar32 & 0xffff) * uVar35);
      auVar87._0_4_ = *pfVar11 - *pfVar13;
      auVar87._4_4_ = pfVar11[1] - pfVar13[1];
      auVar87._8_4_ = pfVar11[2] - pfVar13[2];
      auVar87._12_4_ = pfVar11[3] - pfVar13[3];
      puVar39 = (undefined8 *)(lVar24 + (uVar45 & 0xffff) * uVar35);
      uVar84 = puVar39[1];
      fVar72 = (float)uVar84;
      fVar75 = (float)((ulong)uVar84 >> 0x20);
      uVar84 = *puVar39;
      fVar60 = (float)uVar65;
      fVar61 = (float)((ulong)uVar65 >> 0x20);
      fVar62 = (float)uVar63;
      fVar64 = (float)((ulong)uVar63 >> 0x20);
      auVar101 = NEON_ext(auVar100,auVar100,4,1);
      pfVar11 = (float *)(lVar24 + (local_a8 & 0xffff) * uVar35);
      fVar103 = auVar80._0_4_ * (fVar60 - fVar102);
      fVar108 = auVar80._4_4_ * (fVar61 - fVar102);
      fVar109 = auVar112._0_4_ * (fVar62 - fVar102);
      fVar110 = auVar112._4_4_ * (fVar64 - fVar102);
      auVar88 = NEON_ext(auVar97,auVar97,4,1);
      auVar82._0_4_ = *pfVar12 - *pfVar13;
      auVar82._4_4_ = pfVar12[1] - pfVar13[1];
      auVar82._8_4_ = pfVar12[2] - pfVar13[2];
      auVar82._12_4_ = pfVar12[3] - pfVar13[3];
      auVar86 = NEON_ext(auVar94,auVar94,4,1);
      pfVar12 = (float *)(lVar24 + (uVar46 & 0xffff) * uVar35);
      fVar102 = (float)uVar84;
      auVar77._0_4_ = *pfVar11 - fVar102;
      fVar73 = (float)((ulong)uVar84 >> 0x20);
      auVar77._4_4_ = pfVar11[1] - fVar73;
      auVar77._8_4_ = pfVar11[2] - fVar72;
      auVar77._12_4_ = pfVar11[3] - fVar75;
      auVar81 = NEON_ext(auVar87,auVar87,4,1);
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar71 = *pfVar11;
      fVar74 = pfVar11[1];
      lVar25 = lVar25 + 1;
      fVar102 = *pfVar12 - fVar102;
      fVar73 = pfVar12[1] - fVar73;
      uVar67 = (undefined1)((uint)fVar73 >> 8);
      uVar68 = (undefined1)((uint)fVar73 >> 0x10);
      uVar69 = (undefined1)((uint)fVar73 >> 0x18);
      fVar72 = pfVar12[2] - fVar72;
      fVar75 = pfVar12[3] - fVar75;
      auVar80 = NEON_ext(auVar77,auVar77,4,1);
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = pfVar11[2] + fVar109;
      pfVar12[3] = pfVar11[3] + fVar110;
      *pfVar12 = fVar71 + fVar103;
      pfVar12[1] = fVar74 + fVar108;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar38 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar71 = *pfVar11;
      fVar74 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar109 + pfVar11[2];
      pfVar12[3] = fVar110 + pfVar11[3];
      *pfVar12 = fVar103 + fVar71;
      pfVar12[1] = fVar108 + fVar74;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar42 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar71 = *pfVar11;
      fVar74 = pfVar11[1];
      auVar113._0_4_ = fVar116 - fVar76;
      auVar113._4_4_ = fVar120 - fVar79;
      auVar113._8_4_ = fVar21 - fVar111;
      auVar113._12_4_ = fVar22 - fVar115;
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar109 + pfVar11[2];
      pfVar12[3] = fVar110 + pfVar11[3];
      *pfVar12 = fVar103 + fVar71;
      pfVar12[1] = fVar108 + fVar74;
      auVar104._0_4_ = (float)uVar121 - fVar76;
      auVar104._4_4_ = (float)((ulong)uVar121 >> 0x20) - fVar79;
      auVar104._8_4_ = (float)uVar122 - fVar111;
      auVar104._12_4_ = (float)((ulong)uVar122 >> 0x20) - fVar115;
      auVar119 = NEON_ext(auVar113,auVar113,4,1);
      auVar123 = NEON_ext(auVar119,auVar119,8,1);
      auVar117 = NEON_ext(auVar104,auVar104,4,1);
      uVar84 = NEON_rev64(auVar123._0_8_,4);
      auVar123 = NEON_ext(auVar117,auVar117,8,1);
      uVar85 = NEON_rev64(auVar123._0_8_,4);
      fVar120 = (float)(bVar10 >> 6 & 1) * fVar83;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar43 & 0xffff) * 2) * 0x10;
      auVar105._0_4_ = auVar104._0_4_ * auVar119._0_4_ - auVar113._0_4_ * auVar117._0_4_;
      auVar105._4_4_ = auVar104._4_4_ * auVar119._4_4_ - auVar113._4_4_ * auVar117._4_4_;
      auVar105._8_4_ = auVar104._8_4_ * (float)uVar84 - auVar113._8_4_ * (float)uVar85;
      auVar105._12_4_ =
           auVar104._12_4_ * (float)((ulong)uVar84 >> 0x20) -
           auVar113._12_4_ * (float)((ulong)uVar85 >> 0x20);
      auVar117 = NEON_ext(auVar105,auVar105,4,1);
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      fVar111 = auVar117._0_4_ * (fVar60 - fVar120);
      fVar115 = auVar117._4_4_ * (fVar61 - fVar120);
      fVar116 = auVar105._0_4_ * (fVar62 - fVar120);
      fVar120 = auVar105._4_4_ * (fVar64 - fVar120);
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar44 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar26 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      auVar114._0_4_ = (float)uVar90 - fVar124;
      auVar114._4_4_ = (float)((ulong)uVar90 >> 0x20) - fVar125;
      auVar114._8_4_ = (float)uVar91 - fVar126;
      auVar114._12_4_ = (float)((ulong)uVar91 >> 0x20) - fVar127;
      auVar123 = NEON_ext(auVar114,auVar114,4,1);
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      auVar106._0_4_ = (float)uVar118 - fVar124;
      auVar106._4_4_ = (float)((ulong)uVar118 >> 0x20) - fVar125;
      auVar106._8_4_ = (float)uVar89 - fVar126;
      auVar106._12_4_ = (float)((ulong)uVar89 >> 0x20) - fVar127;
      auVar119 = NEON_ext(auVar123,auVar123,8,1);
      auVar117 = NEON_ext(auVar106,auVar106,4,1);
      uVar85 = NEON_rev64(auVar119._0_8_,4);
      auVar119 = NEON_ext(auVar117,auVar117,8,1);
      uVar84 = NEON_rev64(auVar119._0_8_,4);
      auVar119 = NEON_ext(auVar101,auVar101,8,1);
      fVar120 = (float)(bVar10 >> 5 & 1) * fVar83;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar28 & 0xffff) * 2) * 0x10;
      auVar107._0_4_ = auVar106._0_4_ * auVar123._0_4_ - auVar114._0_4_ * auVar117._0_4_;
      auVar107._4_4_ = auVar106._4_4_ * auVar123._4_4_ - auVar114._4_4_ * auVar117._4_4_;
      auVar107._8_4_ = auVar106._8_4_ * (float)uVar85 - auVar114._8_4_ * (float)uVar84;
      auVar107._12_4_ =
           auVar106._12_4_ * (float)((ulong)uVar85 >> 0x20) -
           auVar114._12_4_ * (float)((ulong)uVar84 >> 0x20);
      auVar117 = NEON_ext(auVar107,auVar107,4,1);
      uVar84 = NEON_rev64(auVar119._0_8_,4);
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      fVar111 = auVar117._0_4_ * (fVar60 - fVar120);
      fVar115 = auVar117._4_4_ * (fVar61 - fVar120);
      fVar116 = auVar107._0_4_ * (fVar62 - fVar120);
      fVar120 = auVar107._4_4_ * (fVar64 - fVar120);
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar30 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar31 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      auVar119 = NEON_ext(auVar98,auVar98,4,1);
      auVar117 = NEON_ext(auVar88,auVar88,8,1);
      auVar123 = NEON_ext(auVar119,auVar119,8,1);
      uVar118 = NEON_rev64(auVar123._0_8_,4);
      fVar120 = (float)(bVar10 >> 4 & 1) * fVar83;
      uVar85 = NEON_rev64(auVar117._0_8_,4);
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar48 & 0xffff) * 2) * 0x10;
      auVar99._0_4_ = auVar100._0_4_ * auVar119._0_4_ - auVar98._0_4_ * auVar101._0_4_;
      auVar99._4_4_ = auVar100._4_4_ * auVar119._4_4_ - auVar98._4_4_ * auVar101._4_4_;
      auVar99._8_4_ = auVar100._8_4_ * (float)uVar118 - auVar98._8_4_ * (float)uVar84;
      auVar99._12_4_ =
           auVar100._12_4_ * (float)((ulong)uVar118 >> 0x20) -
           auVar98._12_4_ * (float)((ulong)uVar84 >> 0x20);
      auVar101 = NEON_ext(auVar99,auVar99,4,1);
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      fVar111 = auVar101._0_4_ * (fVar60 - fVar120);
      fVar115 = auVar101._4_4_ * (fVar61 - fVar120);
      fVar116 = auVar99._0_4_ * (fVar62 - fVar120);
      fVar120 = auVar99._4_4_ * (fVar64 - fVar120);
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar51 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar53 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      auVar117 = NEON_ext(auVar95,auVar95,4,1);
      auVar101 = NEON_ext(auVar86,auVar86,8,1);
      auVar119 = NEON_ext(auVar117,auVar117,8,1);
      uVar118 = NEON_rev64(auVar119._0_8_,4);
      fVar120 = (float)(bVar10 >> 3 & 1) * fVar83;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar54 & 0xffff) * 2) * 0x10;
      uVar84 = NEON_rev64(auVar101._0_8_,4);
      auVar96._0_4_ = auVar97._0_4_ * auVar117._0_4_ - auVar95._0_4_ * auVar88._0_4_;
      auVar96._4_4_ = auVar97._4_4_ * auVar117._4_4_ - auVar95._4_4_ * auVar88._4_4_;
      auVar96._8_4_ = auVar97._8_4_ * (float)uVar118 - auVar95._8_4_ * (float)uVar85;
      auVar96._12_4_ =
           auVar97._12_4_ * (float)((ulong)uVar118 >> 0x20) -
           auVar95._12_4_ * (float)((ulong)uVar85 >> 0x20);
      auVar88 = NEON_ext(auVar96,auVar96,4,1);
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      fVar111 = auVar88._0_4_ * (fVar60 - fVar120);
      fVar115 = auVar88._4_4_ * (fVar61 - fVar120);
      fVar116 = auVar96._0_4_ * (fVar62 - fVar120);
      fVar120 = auVar96._4_4_ * (fVar64 - fVar120);
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar55 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar58 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      auVar101 = NEON_ext(auVar92,auVar92,4,1);
      auVar88 = NEON_ext(auVar81,auVar81,8,1);
      auVar117 = NEON_ext(auVar101,auVar101,8,1);
      uVar118 = NEON_rev64(auVar117._0_8_,4);
      fVar120 = (float)(bVar10 >> 2 & 1) * fVar83;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar50 & 0xffff) * 2) * 0x10;
      uVar85 = NEON_rev64(auVar88._0_8_,4);
      auVar93._0_4_ = auVar94._0_4_ * auVar101._0_4_ - auVar92._0_4_ * auVar86._0_4_;
      auVar93._4_4_ = auVar94._4_4_ * auVar101._4_4_ - auVar92._4_4_ * auVar86._4_4_;
      auVar93._8_4_ = auVar94._8_4_ * (float)uVar118 - auVar92._8_4_ * (float)uVar84;
      auVar93._12_4_ =
           auVar94._12_4_ * (float)((ulong)uVar118 >> 0x20) -
           auVar92._12_4_ * (float)((ulong)uVar84 >> 0x20);
      auVar86 = NEON_ext(auVar93,auVar93,4,1);
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      fVar111 = auVar86._0_4_ * (fVar60 - fVar120);
      fVar115 = auVar86._4_4_ * (fVar61 - fVar120);
      fVar116 = auVar93._0_4_ * (fVar62 - fVar120);
      fVar120 = auVar93._4_4_ * (fVar64 - fVar120);
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar52 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar47 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      auVar88 = NEON_ext(auVar82,auVar82,4,1);
      auVar86 = NEON_ext(auVar80,auVar80,8,1);
      auVar101 = NEON_ext(auVar88,auVar88,8,1);
      uVar118 = NEON_rev64(auVar101._0_8_,4);
      fVar120 = (float)(bVar10 >> 1 & 1) * fVar83;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar56 & 0xffff) * 2) * 0x10;
      uVar84 = NEON_rev64(auVar86._0_8_,4);
      auVar123._0_4_ = auVar87._0_4_ * auVar88._0_4_ - auVar82._0_4_ * auVar81._0_4_;
      auVar123._4_4_ = auVar87._4_4_ * auVar88._4_4_ - auVar82._4_4_ * auVar81._4_4_;
      auVar123._8_4_ = auVar87._8_4_ * (float)uVar118 - auVar82._8_4_ * (float)uVar85;
      auVar123._12_4_ =
           auVar87._12_4_ * (float)((ulong)uVar118 >> 0x20) -
           auVar82._12_4_ * (float)((ulong)uVar85 >> 0x20);
      auVar81 = NEON_ext(auVar123,auVar123,4,1);
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      fVar111 = auVar81._0_4_ * (fVar60 - fVar120);
      fVar115 = auVar81._4_4_ * (fVar61 - fVar120);
      fVar116 = auVar123._0_4_ * (fVar62 - fVar120);
      fVar120 = auVar123._4_4_ * (fVar64 - fVar120);
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar59 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar32 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar57);
      fVar76 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar57);
      pfVar12[2] = fVar116 + pfVar11[2];
      pfVar12[3] = fVar120 + pfVar11[3];
      *pfVar12 = fVar111 + fVar76;
      pfVar12[1] = fVar115 + fVar79;
      auVar86[4] = SUB41(fVar73,0);
      auVar86._0_4_ = fVar102;
      auVar86[5] = uVar67;
      auVar86[6] = uVar68;
      auVar86[7] = uVar69;
      auVar86._8_4_ = fVar72;
      auVar86._12_4_ = fVar75;
      auVar88[4] = SUB41(fVar73,0);
      auVar88._0_4_ = fVar102;
      auVar88[5] = uVar67;
      auVar88[6] = uVar68;
      auVar88[7] = uVar69;
      auVar88._8_4_ = fVar72;
      auVar88._12_4_ = fVar75;
      auVar81 = NEON_ext(auVar86,auVar88,4,1);
      auVar86 = NEON_ext(auVar81,auVar81,8,1);
      uVar85 = NEON_rev64(auVar86._0_8_,4);
      fVar83 = (float)(bVar10 & 1) * fVar83;
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar45 & 0xffff) * 2) * 0x10;
      fVar102 = auVar77._0_4_ * auVar81._0_4_ - fVar102 * auVar80._0_4_;
      fVar73 = auVar77._4_4_ * auVar81._4_4_ - fVar73 * auVar80._4_4_;
      uVar67 = SUB41(fVar73,0);
      uVar68 = (undefined1)((uint)fVar73 >> 8);
      uVar69 = (undefined1)((uint)fVar73 >> 0x10);
      uVar70 = (undefined1)((uint)fVar73 >> 0x18);
      fVar73 = auVar77._8_4_ * (float)uVar85 - fVar72 * (float)uVar84;
      fVar76 = auVar77._12_4_ * (float)((ulong)uVar85 >> 0x20) -
               fVar75 * (float)((ulong)uVar84 >> 0x20);
      auVar101[4] = uVar67;
      auVar101._0_4_ = fVar102;
      auVar101[5] = uVar68;
      auVar101[6] = uVar69;
      auVar101[7] = uVar70;
      auVar101._8_4_ = fVar73;
      auVar101._12_4_ = fVar76;
      auVar117[4] = uVar67;
      auVar117._0_4_ = fVar102;
      auVar117[5] = uVar68;
      auVar117[6] = uVar69;
      auVar117[7] = uVar70;
      auVar117._8_4_ = fVar73;
      auVar117._12_4_ = fVar76;
      auVar80 = NEON_ext(auVar101,auVar117,4,1);
      puVar39 = (undefined8 *)((long)local_98 + lVar57);
      uVar85 = puVar39[1];
      uVar84 = *puVar39;
      fVar76 = (fVar60 - fVar83) * auVar80._0_4_;
      fVar73 = (fVar61 - fVar83) * auVar80._4_4_;
      fVar79 = (fVar62 - fVar83) * fVar102;
      fVar111 = (fVar64 - fVar83) *
                (float)(CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,fVar102))))
                       >> 0x20);
      fVar102 = fVar73 + (float)((ulong)uVar84 >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + lVar57);
      puVar39[1] = CONCAT44(fVar111 + (float)((ulong)uVar85 >> 0x20),fVar79 + (float)uVar85);
      *puVar39 = CONCAT17((char)((uint)fVar102 >> 0x18),
                          CONCAT16((char)((uint)fVar102 >> 0x10),
                                   CONCAT15((char)((uint)fVar102 >> 8),
                                            CONCAT14(SUB41(fVar102,0),fVar76 + (float)uVar84))));
      lVar57 = (ulong)*(ushort *)(*plVar1 + (local_a8 & 0xffff) * 2) * 0x10;
      puVar39 = (undefined8 *)((long)local_98 + lVar57);
      uVar85 = puVar39[1];
      uVar84 = *puVar39;
      fVar102 = fVar73 + (float)((ulong)uVar84 >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + lVar57);
      puVar39[1] = CONCAT44(fVar111 + (float)((ulong)uVar85 >> 0x20),fVar79 + (float)uVar85);
      *puVar39 = CONCAT17((char)((uint)fVar102 >> 0x18),
                          CONCAT16((char)((uint)fVar102 >> 0x10),
                                   CONCAT15((char)((uint)fVar102 >> 8),
                                            CONCAT14(SUB41(fVar102,0),fVar76 + (float)uVar84))));
      lVar57 = (ulong)*(ushort *)(*plVar1 + (uVar46 & 0xffff) * 2) * 0x10;
      puVar39 = (undefined8 *)((long)local_98 + lVar57);
      uVar85 = puVar39[1];
      uVar84 = *puVar39;
      fVar73 = fVar73 + (float)((ulong)uVar84 >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + lVar57);
      puVar39[1] = CONCAT44(fVar111 + (float)((ulong)uVar85 >> 0x20),fVar79 + (float)uVar85);
      *puVar39 = CONCAT17((char)((uint)fVar73 >> 0x18),
                          CONCAT16((char)((uint)fVar73 >> 0x10),
                                   CONCAT15((char)((uint)fVar73 >> 8),
                                            CONCAT14(SUB41(fVar73,0),fVar76 + (float)uVar84))));
      puVar41 = puVar40;
    } while ((int)lVar25 < (int)uVar36 >> 3);
    pbVar29 = pbVar29 + lVar25;
    uVar65 = _DAT_0413f320;
    uVar63 = _DAT_0413f328;
  }
  _DAT_0413f320 = uVar65;
  _DAT_0413f328 = uVar63;
  if ((uVar36 & 7) != 0) {
    auVar66 = NEON_fmov(0x40e00000,4);
    iVar49 = 0;
    puVar40 = puVar40 + 1;
    do {
      if (*(char *)(param_2 + 0x3d) == '\0') {
        uVar37 = (ulong)puVar40[-1];
        uVar43 = (ulong)*puVar40;
        uVar28 = (ulong)puVar40[1];
      }
      else {
        uVar37 = (ulong)(ushort)puVar40[-1];
        uVar43 = (ulong)*(ushort *)((long)puVar40 + -2);
        uVar28 = (ulong)(ushort)*puVar40;
      }
      puVar39 = (undefined8 *)(lVar24 + (uVar37 & 0xffff) * uVar35);
      uVar84 = puVar39[1];
      fVar76 = (float)uVar84;
      fVar79 = (float)((ulong)uVar84 >> 0x20);
      uVar84 = *puVar39;
      pfVar11 = (float *)(lVar24 + (uVar43 & 0xffff) * uVar35);
      pfVar12 = (float *)(lVar24 + (uVar28 & 0xffff) * uVar35);
      fVar102 = (float)uVar84;
      auVar78._0_4_ = *pfVar11 - fVar102;
      fVar73 = (float)((ulong)uVar84 >> 0x20);
      auVar78._4_4_ = pfVar11[1] - fVar73;
      auVar78._8_4_ = pfVar11[2] - fVar76;
      auVar78._12_4_ = pfVar11[3] - fVar79;
      fVar102 = *pfVar12 - fVar102;
      fVar73 = pfVar12[1] - fVar73;
      uVar67 = (undefined1)((uint)fVar73 >> 8);
      uVar68 = (undefined1)((uint)fVar73 >> 0x10);
      uVar69 = (undefined1)((uint)fVar73 >> 0x18);
      fVar76 = pfVar12[2] - fVar76;
      fVar79 = pfVar12[3] - fVar79;
      auVar80 = NEON_ext(auVar78,auVar78,4,1);
      auVar86 = NEON_ext(auVar80,auVar80,8,1);
      auVar16[4] = SUB41(fVar73,0);
      auVar16._0_4_ = fVar102;
      auVar16[5] = uVar67;
      auVar16[6] = uVar68;
      auVar16[7] = uVar69;
      auVar16._8_4_ = fVar76;
      auVar16._12_4_ = fVar79;
      auVar17[4] = SUB41(fVar73,0);
      auVar17._0_4_ = fVar102;
      auVar17[5] = uVar67;
      auVar17[6] = uVar68;
      auVar17[7] = uVar69;
      auVar17._8_4_ = fVar76;
      auVar17._12_4_ = fVar79;
      auVar81 = NEON_ext(auVar16,auVar17,4,1);
      uVar84 = NEON_rev64(auVar86._0_8_,4);
      auVar86 = NEON_ext(auVar81,auVar81,8,1);
      uVar85 = NEON_rev64(auVar86._0_8_,4);
      lVar25 = (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + (uVar37 & 0xffff) * 2) * 0x10;
      fVar102 = auVar78._0_4_ * auVar81._0_4_ - fVar102 * auVar80._0_4_;
      fVar73 = auVar78._4_4_ * auVar81._4_4_ - fVar73 * auVar80._4_4_;
      uVar67 = SUB41(fVar73,0);
      uVar68 = (undefined1)((uint)fVar73 >> 8);
      uVar69 = (undefined1)((uint)fVar73 >> 0x10);
      uVar70 = (undefined1)((uint)fVar73 >> 0x18);
      fVar73 = auVar78._8_4_ * (float)uVar85 - fVar76 * (float)uVar84;
      fVar76 = auVar78._12_4_ * (float)((ulong)uVar85 >> 0x20) -
               fVar79 * (float)((ulong)uVar84 >> 0x20);
      auVar18[4] = uVar67;
      auVar18._0_4_ = fVar102;
      auVar18[5] = uVar68;
      auVar18[6] = uVar69;
      auVar18[7] = uVar70;
      auVar18._8_4_ = fVar73;
      auVar18._12_4_ = fVar76;
      auVar19[4] = uVar67;
      auVar19._0_4_ = fVar102;
      auVar19[5] = uVar68;
      auVar19[6] = uVar69;
      auVar19[7] = uVar70;
      auVar19._8_4_ = fVar73;
      auVar19._12_4_ = fVar76;
      auVar80 = NEON_ext(auVar18,auVar19,4,1);
      fVar116 = (float)(int)((1 << (ulong)(iVar49 + 7U & 0x1f) & (uint)*pbVar29) >>
                            (ulong)(iVar49 + 7U & 0x1f)) * auVar66._0_4_;
      iVar49 = iVar49 + -1;
      pfVar11 = (float *)((long)local_98 + lVar25);
      fVar79 = *pfVar11;
      fVar111 = pfVar11[1];
      puVar40 = (uint *)((long)puVar40 + uVar27);
      fVar73 = auVar80._0_4_ * ((float)uVar65 - fVar116);
      fVar76 = auVar80._4_4_ * ((float)((ulong)uVar65 >> 0x20) - fVar116);
      fVar115 = fVar102 * ((float)uVar63 - fVar116);
      fVar116 = (float)(CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,fVar102))))
                       >> 0x20) * ((float)((ulong)uVar63 >> 0x20) - fVar116);
      pfVar12 = (float *)((long)local_98 + lVar25);
      pfVar12[2] = pfVar11[2] + fVar115;
      pfVar12[3] = pfVar11[3] + fVar116;
      *pfVar12 = fVar79 + fVar73;
      pfVar12[1] = fVar111 + fVar76;
      lVar25 = (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + (uVar43 & 0xffff) * 2) * 0x10;
      pfVar11 = (float *)((long)local_98 + lVar25);
      fVar102 = *pfVar11;
      fVar79 = pfVar11[1];
      pfVar12 = (float *)((long)local_98 + lVar25);
      pfVar12[2] = fVar115 + pfVar11[2];
      pfVar12[3] = fVar116 + pfVar11[3];
      *pfVar12 = fVar73 + fVar102;
      pfVar12[1] = fVar76 + fVar79;
      lVar25 = (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + (uVar28 & 0xffff) * 2) * 0x10;
      auVar80 = *(undefined1 (*) [16])((long)local_98 + lVar25);
      fVar76 = fVar76 + auVar80._4_4_;
      puVar39 = (undefined8 *)((long)local_98 + lVar25);
      puVar39[1] = CONCAT44(fVar116 + auVar80._12_4_,fVar115 + auVar80._8_4_);
      *puVar39 = CONCAT17((char)((uint)fVar76 >> 0x18),
                          CONCAT16((char)((uint)fVar76 >> 0x10),
                                   CONCAT15((char)((uint)fVar76 >> 8),
                                            CONCAT14(SUB41(fVar76,0),fVar73 + auVar80._0_4_))));
    } while (-(uVar36 & 7) != iVar49);
  }
  uVar36 = *(uint *)(param_1 + 0xac);
  uVar27 = 0;
  uVar34 = uVar36 >> 3;
  if (uVar34 != 0) {
    do {
      uVar35 = -(uVar27 >> 0x1f) & 0xfffffff000000000 | uVar27 << 4;
      uVar34 = uVar34 - 1;
      puVar39 = (undefined8 *)((long)local_98 + uVar35);
      uVar63 = puVar39[1];
      uVar65 = *puVar39;
      fVar102 = (float)uVar65;
      fVar73 = (float)((ulong)uVar65 >> 0x20);
      fVar76 = (float)uVar63;
      fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      uVar65 = CONCAT44(fVar115,fVar79);
      uVar84 = NEON_frsqrte(uVar65,4);
      fVar111 = (float)uVar84;
      fVar116 = (float)((ulong)uVar84 >> 0x20);
      iVar49 = -(uint)(fVar79 <= 0.0);
      iVar20 = -(uint)(fVar115 <= 0.0);
      uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
      fVar111 = fVar111 * (float)uVar65;
      fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
      fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                        ~(byte)((uint)iVar49 >> 0x10),
                                        CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar49 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar49)));
      fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)
                                                  ))) >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + uVar35);
      puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
      *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
      iVar33 = (int)uVar27;
      uVar27 = -(ulong)(iVar33 + 1U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 1U) << 4;
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      uVar63 = puVar39[1];
      uVar65 = *puVar39;
      fVar102 = (float)uVar65;
      fVar73 = (float)((ulong)uVar65 >> 0x20);
      fVar76 = (float)uVar63;
      fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      uVar65 = CONCAT44(fVar115,fVar79);
      uVar84 = NEON_frsqrte(uVar65,4);
      fVar111 = (float)uVar84;
      fVar116 = (float)((ulong)uVar84 >> 0x20);
      iVar49 = -(uint)(fVar79 <= 0.0);
      iVar20 = -(uint)(fVar115 <= 0.0);
      uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
      fVar111 = fVar111 * (float)uVar65;
      fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
      fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                        ~(byte)((uint)iVar49 >> 0x10),
                                        CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar49 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar49)));
      fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)
                                                  ))) >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
      *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
      uVar27 = -(ulong)(iVar33 + 2U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 2U) << 4;
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      uVar63 = puVar39[1];
      uVar65 = *puVar39;
      fVar102 = (float)uVar65;
      fVar73 = (float)((ulong)uVar65 >> 0x20);
      fVar76 = (float)uVar63;
      fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      uVar65 = CONCAT44(fVar115,fVar79);
      uVar84 = NEON_frsqrte(uVar65,4);
      fVar111 = (float)uVar84;
      fVar116 = (float)((ulong)uVar84 >> 0x20);
      iVar49 = -(uint)(fVar79 <= 0.0);
      iVar20 = -(uint)(fVar115 <= 0.0);
      uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
      fVar111 = fVar111 * (float)uVar65;
      fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
      fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                        ~(byte)((uint)iVar49 >> 0x10),
                                        CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar49 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar49)));
      fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)
                                                  ))) >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
      *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
      uVar27 = -(ulong)(iVar33 + 3U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 3U) << 4;
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      uVar63 = puVar39[1];
      uVar65 = *puVar39;
      fVar102 = (float)uVar65;
      fVar73 = (float)((ulong)uVar65 >> 0x20);
      fVar76 = (float)uVar63;
      fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      uVar65 = CONCAT44(fVar115,fVar79);
      uVar84 = NEON_frsqrte(uVar65,4);
      fVar111 = (float)uVar84;
      fVar116 = (float)((ulong)uVar84 >> 0x20);
      iVar49 = -(uint)(fVar79 <= 0.0);
      iVar20 = -(uint)(fVar115 <= 0.0);
      uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
      fVar111 = fVar111 * (float)uVar65;
      fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
      fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                        ~(byte)((uint)iVar49 >> 0x10),
                                        CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar49 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar49)));
      fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)
                                                  ))) >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
      *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
      uVar27 = -(ulong)(iVar33 + 4U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 4U) << 4;
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      uVar63 = puVar39[1];
      uVar65 = *puVar39;
      fVar102 = (float)uVar65;
      fVar73 = (float)((ulong)uVar65 >> 0x20);
      fVar76 = (float)uVar63;
      fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      uVar65 = CONCAT44(fVar115,fVar79);
      uVar84 = NEON_frsqrte(uVar65,4);
      fVar111 = (float)uVar84;
      fVar116 = (float)((ulong)uVar84 >> 0x20);
      iVar49 = -(uint)(fVar79 <= 0.0);
      iVar20 = -(uint)(fVar115 <= 0.0);
      uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
      fVar111 = fVar111 * (float)uVar65;
      fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
      fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                        ~(byte)((uint)iVar49 >> 0x10),
                                        CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar49 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar49)));
      fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)
                                                  ))) >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
      *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
      uVar27 = -(ulong)(iVar33 + 5U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 5U) << 4;
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      uVar63 = puVar39[1];
      uVar65 = *puVar39;
      fVar102 = (float)uVar65;
      fVar73 = (float)((ulong)uVar65 >> 0x20);
      fVar76 = (float)uVar63;
      fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      uVar65 = CONCAT44(fVar115,fVar79);
      uVar84 = NEON_frsqrte(uVar65,4);
      fVar111 = (float)uVar84;
      fVar116 = (float)((ulong)uVar84 >> 0x20);
      iVar49 = -(uint)(fVar79 <= 0.0);
      iVar20 = -(uint)(fVar115 <= 0.0);
      uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
      fVar111 = fVar111 * (float)uVar65;
      fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
      fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                        ~(byte)((uint)iVar49 >> 0x10),
                                        CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar49 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar49)));
      fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)
                                                  ))) >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
      *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
      uVar27 = -(ulong)(iVar33 + 6U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 6U) << 4;
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      uVar63 = puVar39[1];
      uVar65 = *puVar39;
      fVar102 = (float)uVar65;
      fVar73 = (float)((ulong)uVar65 >> 0x20);
      fVar76 = (float)uVar63;
      fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      uVar65 = CONCAT44(fVar115,fVar79);
      uVar84 = NEON_frsqrte(uVar65,4);
      fVar111 = (float)uVar84;
      fVar116 = (float)((ulong)uVar84 >> 0x20);
      iVar49 = -(uint)(fVar79 <= 0.0);
      iVar20 = -(uint)(fVar115 <= 0.0);
      uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
      fVar111 = fVar111 * (float)uVar65;
      fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
      fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                        ~(byte)((uint)iVar49 >> 0x10),
                                        CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar49 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar49)));
      fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)
                                                  ))) >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
      *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
      uVar35 = -(ulong)(iVar33 + 7U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 7U) << 4;
      puVar39 = (undefined8 *)((long)local_98 + uVar35);
      uVar63 = puVar39[1];
      uVar65 = *puVar39;
      uVar27 = (ulong)(iVar33 + 8);
      fVar102 = (float)uVar65;
      fVar73 = (float)((ulong)uVar65 >> 0x20);
      fVar76 = (float)uVar63;
      fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      uVar65 = CONCAT44(fVar115,fVar79);
      uVar84 = NEON_frsqrte(uVar65,4);
      fVar111 = (float)uVar84;
      fVar116 = (float)((ulong)uVar84 >> 0x20);
      iVar49 = -(uint)(fVar79 <= 0.0);
      iVar20 = -(uint)(fVar115 <= 0.0);
      uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
      fVar111 = fVar111 * (float)uVar65;
      fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
      fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                        ~(byte)((uint)iVar49 >> 0x10),
                                        CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar49 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar49)));
      fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)
                                                  ))) >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + uVar35);
      puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
      *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
    } while (uVar34 != 0);
    uVar36 = *(uint *)(param_1 + 0xac);
  }
  if ((uVar36 & 7) != 0) {
    uVar35 = -(uVar27 >> 0x1f) & 0xfffffff000000000 | uVar27 << 4;
    puVar39 = (undefined8 *)((long)local_98 + uVar35);
    uVar63 = puVar39[1];
    uVar65 = *puVar39;
    fVar102 = (float)uVar65;
    fVar73 = (float)((ulong)uVar65 >> 0x20);
    fVar76 = (float)uVar63;
    fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
    fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
    uVar65 = CONCAT44(fVar115,fVar79);
    uVar84 = NEON_frsqrte(uVar65,4);
    fVar111 = (float)uVar84;
    fVar116 = (float)((ulong)uVar84 >> 0x20);
    iVar49 = -(uint)(fVar79 <= 0.0);
    iVar20 = -(uint)(fVar115 <= 0.0);
    uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
    fVar111 = fVar111 * (float)uVar65;
    fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
    fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                             CONCAT12((byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                                      CONCAT11((byte)((uint)fVar111 >> 8) &
                                               ~(byte)((uint)iVar49 >> 8),
                                               SUB41(fVar111,0) & ~(byte)iVar49)));
    fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                               CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                        ~(byte)((uint)iVar20 >> 0x10),
                                        CONCAT15((byte)((uint)fVar116 >> 8) &
                                                 ~(byte)((uint)iVar20 >> 8),
                                                 CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)))
                              ) >> 0x20);
    puVar39 = (undefined8 *)((long)local_98 + uVar35);
    puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
    *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
    if ((*(byte *)(param_1 + 0xac) & 6) != 0) {
      iVar33 = (int)uVar27;
      uVar27 = -(ulong)(iVar33 + 1U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 1U) << 4;
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      uVar63 = puVar39[1];
      uVar65 = *puVar39;
      fVar102 = (float)uVar65;
      fVar73 = (float)((ulong)uVar65 >> 0x20);
      fVar76 = (float)uVar63;
      fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
      uVar65 = CONCAT44(fVar115,fVar79);
      uVar84 = NEON_frsqrte(uVar65,4);
      fVar111 = (float)uVar84;
      fVar116 = (float)((ulong)uVar84 >> 0x20);
      iVar49 = -(uint)(fVar79 <= 0.0);
      iVar20 = -(uint)(fVar115 <= 0.0);
      uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
      fVar111 = fVar111 * (float)uVar65;
      fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
      fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                        ~(byte)((uint)iVar49 >> 0x10),
                                        CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar49 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar49)));
      fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,fVar79)
                                                  ))) >> 0x20);
      puVar39 = (undefined8 *)((long)local_98 + uVar27);
      puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
      *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
      if (2 < (*(uint *)(param_1 + 0xac) & 7)) {
        uVar27 = -(ulong)(iVar33 + 2U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 2U) << 4;
        puVar39 = (undefined8 *)((long)local_98 + uVar27);
        uVar63 = puVar39[1];
        uVar65 = *puVar39;
        fVar102 = (float)uVar65;
        fVar73 = (float)((ulong)uVar65 >> 0x20);
        fVar76 = (float)uVar63;
        fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
        fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
        uVar65 = CONCAT44(fVar115,fVar79);
        uVar84 = NEON_frsqrte(uVar65,4);
        fVar111 = (float)uVar84;
        fVar116 = (float)((ulong)uVar84 >> 0x20);
        iVar49 = -(uint)(fVar79 <= 0.0);
        iVar20 = -(uint)(fVar115 <= 0.0);
        uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
        fVar111 = fVar111 * (float)uVar65;
        fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
        fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                 CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                          ~(byte)((uint)iVar49 >> 0x10),
                                          CONCAT11((byte)((uint)fVar111 >> 8) &
                                                   ~(byte)((uint)iVar49 >> 8),
                                                   SUB41(fVar111,0) & ~(byte)iVar49)));
        fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                   CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                            ~(byte)((uint)iVar20 >> 0x10),
                                            CONCAT15((byte)((uint)fVar116 >> 8) &
                                                     ~(byte)((uint)iVar20 >> 8),
                                                     CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,
                                                              fVar79)))) >> 0x20);
        puVar39 = (undefined8 *)((long)local_98 + uVar27);
        puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
        *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
        if ((*(byte *)(param_1 + 0xac) >> 2 & 1) != 0) {
          uVar27 = -(ulong)(iVar33 + 3U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 3U) << 4;
          puVar39 = (undefined8 *)((long)local_98 + uVar27);
          uVar63 = puVar39[1];
          uVar65 = *puVar39;
          fVar102 = (float)uVar65;
          fVar73 = (float)((ulong)uVar65 >> 0x20);
          fVar76 = (float)uVar63;
          fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
          fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
          uVar65 = CONCAT44(fVar115,fVar79);
          uVar84 = NEON_frsqrte(uVar65,4);
          fVar111 = (float)uVar84;
          fVar116 = (float)((ulong)uVar84 >> 0x20);
          iVar49 = -(uint)(fVar79 <= 0.0);
          iVar20 = -(uint)(fVar115 <= 0.0);
          uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
          fVar111 = fVar111 * (float)uVar65;
          fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
          fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                   CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                            ~(byte)((uint)iVar49 >> 0x10),
                                            CONCAT11((byte)((uint)fVar111 >> 8) &
                                                     ~(byte)((uint)iVar49 >> 8),
                                                     SUB41(fVar111,0) & ~(byte)iVar49)));
          fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                     CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                              ~(byte)((uint)iVar20 >> 0x10),
                                              CONCAT15((byte)((uint)fVar116 >> 8) &
                                                       ~(byte)((uint)iVar20 >> 8),
                                                       CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,
                                                                fVar79)))) >> 0x20);
          puVar39 = (undefined8 *)((long)local_98 + uVar27);
          puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
          *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
          if (4 < (*(uint *)(param_1 + 0xac) & 7)) {
            uVar27 = -(ulong)(iVar33 + 4U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar33 + 4U) << 4;
            puVar39 = (undefined8 *)((long)local_98 + uVar27);
            uVar63 = puVar39[1];
            uVar65 = *puVar39;
            fVar102 = (float)uVar65;
            fVar73 = (float)((ulong)uVar65 >> 0x20);
            fVar76 = (float)uVar63;
            fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
            fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
            uVar65 = CONCAT44(fVar115,fVar79);
            uVar84 = NEON_frsqrte(uVar65,4);
            fVar111 = (float)uVar84;
            fVar116 = (float)((ulong)uVar84 >> 0x20);
            iVar49 = -(uint)(fVar79 <= 0.0);
            iVar20 = -(uint)(fVar115 <= 0.0);
            uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
            fVar111 = fVar111 * (float)uVar65;
            fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
            fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                     CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                              ~(byte)((uint)iVar49 >> 0x10),
                                              CONCAT11((byte)((uint)fVar111 >> 8) &
                                                       ~(byte)((uint)iVar49 >> 8),
                                                       SUB41(fVar111,0) & ~(byte)iVar49)));
            fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18)
                                       ,CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                                 ~(byte)((uint)iVar20 >> 0x10),
                                                 CONCAT15((byte)((uint)fVar116 >> 8) &
                                                          ~(byte)((uint)iVar20 >> 8),
                                                          CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20,
                                                                   fVar79)))) >> 0x20);
            puVar39 = (undefined8 *)((long)local_98 + uVar27);
            puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
            *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
            if ((~*(uint *)(param_1 + 0xac) & 6) == 0) {
              uVar27 = -(ulong)(iVar33 + 5U >> 0x1f) & 0xfffffff000000000 |
                       (ulong)(iVar33 + 5U) << 4;
              puVar39 = (undefined8 *)((long)local_98 + uVar27);
              uVar63 = puVar39[1];
              uVar65 = *puVar39;
              fVar102 = (float)uVar65;
              fVar73 = (float)((ulong)uVar65 >> 0x20);
              fVar76 = (float)uVar63;
              fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
              fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
              uVar65 = CONCAT44(fVar115,fVar79);
              uVar84 = NEON_frsqrte(uVar65,4);
              fVar111 = (float)uVar84;
              fVar116 = (float)((ulong)uVar84 >> 0x20);
              iVar49 = -(uint)(fVar79 <= 0.0);
              iVar20 = -(uint)(fVar115 <= 0.0);
              uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
              fVar111 = fVar111 * (float)uVar65;
              fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
              fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18)
                                       ,CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                                 ~(byte)((uint)iVar49 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar111 >> 8) &
                                                          ~(byte)((uint)iVar49 >> 8),
                                                          SUB41(fVar111,0) & ~(byte)iVar49)));
              fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) &
                                         ~(byte)((uint)iVar20 >> 0x18),
                                         CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                                  ~(byte)((uint)iVar20 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar116 >> 8) &
                                                           ~(byte)((uint)iVar20 >> 8),
                                                           CONCAT14(SUB41(fVar116,0) & ~(byte)iVar20
                                                                    ,fVar79)))) >> 0x20);
              puVar39 = (undefined8 *)((long)local_98 + uVar27);
              puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
              *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
              if ((~*(uint *)(param_1 + 0xac) & 7) == 0) {
                uVar27 = -(ulong)(iVar33 + 6U >> 0x1f) & 0xfffffff000000000 |
                         (ulong)(iVar33 + 6U) << 4;
                puVar39 = (undefined8 *)((long)local_98 + uVar27);
                uVar63 = puVar39[1];
                uVar65 = *puVar39;
                fVar102 = (float)uVar65;
                fVar73 = (float)((ulong)uVar65 >> 0x20);
                fVar76 = (float)uVar63;
                fVar79 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
                fVar115 = fVar102 * fVar102 + fVar73 * fVar73 + fVar76 * fVar76;
                uVar65 = CONCAT44(fVar115,fVar79);
                uVar84 = NEON_frsqrte(uVar65,4);
                fVar111 = (float)uVar84;
                fVar116 = (float)((ulong)uVar84 >> 0x20);
                iVar49 = -(uint)(fVar79 <= 0.0);
                iVar20 = -(uint)(fVar115 <= 0.0);
                uVar65 = NEON_frsqrts(uVar65,CONCAT44(fVar116 * fVar116,fVar111 * fVar111),4);
                fVar111 = fVar111 * (float)uVar65;
                fVar116 = fVar116 * (float)((ulong)uVar65 >> 0x20);
                fVar79 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) &
                                         ~(byte)((uint)iVar49 >> 0x18),
                                         CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                                  ~(byte)((uint)iVar49 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar111 >> 8) &
                                                           ~(byte)((uint)iVar49 >> 8),
                                                           SUB41(fVar111,0) & ~(byte)iVar49)));
                fVar111 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) &
                                           ~(byte)((uint)iVar20 >> 0x18),
                                           CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                                    ~(byte)((uint)iVar20 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar116 >> 8) &
                                                             ~(byte)((uint)iVar20 >> 8),
                                                             CONCAT14(SUB41(fVar116,0) &
                                                                      ~(byte)iVar20,fVar79)))) >>
                                 0x20);
                puVar39 = (undefined8 *)((long)local_98 + uVar27);
                puVar39[1] = CONCAT44((float)((ulong)uVar63 >> 0x20) * fVar111,fVar76 * fVar79);
                *puVar39 = CONCAT44(fVar73 * fVar111,fVar102 * fVar79);
              }
            }
          }
        }
      }
    }
  }
  uVar36 = *(uint *)(param_2 + 0x20);
  if (0 < (int)uVar36) {
    bVar10 = *(byte *)(param_2 + 0x4c);
    puVar39 = *(undefined8 **)(param_2 + 0x40);
    uVar27 = 0;
    do {
      puVar15 = (undefined8 *)
                ((long)local_98 + (ulong)*(ushort *)(*(long *)(param_1 + 0x48) + uVar27 * 2) * 0x10)
      ;
      uVar65 = puVar15[1];
      uVar27 = uVar27 + 1;
      puVar2 = puVar39 + 1;
      *puVar39 = *puVar15;
      puVar39 = (undefined8 *)((long)puVar39 + (ulong)bVar10);
      *(int *)puVar2 = (int)uVar65;
    } while (uVar36 != uVar27);
  }
  lVar24 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar24 != 0) {
    FUN_00443a70(lVar24,&DAT_04085310);
  }
  uVar36 = local_80;
  pvVar23 = local_88;
  if (local_88 == local_98) {
    local_90 = local_90 & 0xffffffff00000000;
  }
  lVar25 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar24 = DAT_04c6f058;
  if (lVar25 != 0) {
    lVar24 = lVar25;
  }
  uVar27 = (ulong)(int)(uVar36 * 0x10 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar24 + 0x10) < uVar27) || (*(long *)(lVar24 + 0x18) != uVar27 + (long)pvVar23))
     || (*(void **)(lVar24 + 0x28) == pvVar23)) {
    FUN_00439980(lVar24,pvVar23);
    uVar36 = local_90._4_4_;
  }
  else {
    *(void **)(lVar24 + 0x18) = pvVar23;
    uVar36 = local_90._4_4_;
  }
  if ((-1 < (long)local_90) && (local_90 = (ulong)uVar36 << 0x20, local_98 != (void *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_98,0x10,uVar36 & 0x3fffffff);
  }
  return;
}

