
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005971f0(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  undefined8 *puVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  void *pvVar53;
  long lVar54;
  long lVar55;
  ulong uVar56;
  int iVar57;
  uint uVar58;
  ushort *puVar59;
  ulong uVar60;
  uint uVar61;
  undefined8 *puVar62;
  long lVar63;
  long lVar64;
  byte *pbVar65;
  int iVar66;
  undefined2 *puVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar72;
  undefined8 uVar71;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 uVar91;
  undefined1 auVar92 [16];
  undefined8 uVar93;
  undefined8 uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar114;
  float fVar115;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar116;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar123;
  float fVar124;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar127;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined1 auVar128 [16];
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  uint local_98;
  
  lVar54 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar54 != 0) {
    FUN_00443a00(lVar54,"TtUpdate Some Vertex Frames (N)");
  }
  uVar61 = *(uint *)(param_1 + 0xdc);
  local_a8 = 0x8000000000000000;
  local_98 = uVar61;
  if (uVar61 == 0) {
    iVar66 = 0;
    local_b0 = (void *)0x0;
  }
  else {
    lVar55 = FUN_0043c4e0(DAT_04c6f050);
    lVar54 = DAT_04c6f058;
    if (lVar55 != 0) {
      lVar54 = lVar55;
    }
    uVar56 = (ulong)(int)(uVar61 * 0x10 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar54 + 0x10) < uVar56) {
LAB_005972a8:
      local_b0 = (void *)FUN_00439510();
    }
    else {
      local_b0 = *(void **)(lVar54 + 0x18);
      uVar56 = (long)local_b0 + uVar56;
      if (*(ulong *)(lVar54 + 0x20) < uVar56) goto LAB_005972a8;
      *(ulong *)(lVar54 + 0x18) = uVar56;
    }
    iVar66 = *(int *)(param_1 + 0xdc);
  }
  local_a8 = CONCAT44(uVar61,(int)local_a8) | 0x8000000000000000;
  local_a0 = local_b0;
  if ((int)(uVar61 & 0x3fffffff) < iVar66) {
    local_b0 = (void *)FUN_00426720(PTR_DAT_048607b8,iVar66,0x10,local_b0,0,(long)&local_a8 + 4);
    if ((int)local_a8 == iVar66) goto LAB_00597338;
  }
  else if (iVar66 == 0) goto LAB_00597338;
  local_a8 = CONCAT44(local_a8._4_4_,iVar66);
LAB_00597338:
  if (0 < (int)*(uint *)(param_1 + 0xdc)) {
    memset(local_b0,0,(ulong)*(uint *)(param_1 + 0xdc) << 4);
  }
  uVar71 = _DAT_0413f328;
  uVar73 = _DAT_0413f320;
  iVar66 = *(int *)(param_1 + 0x50);
  lVar54 = *(long *)(param_2 + 0x18);
  uVar56 = (ulong)*(byte *)(param_2 + 0x24);
  pbVar65 = *(byte **)(param_1 + 0x88);
  puVar59 = *(ushort **)(param_1 + 0x48);
  puVar67 = &DAT_04c6f410;
  if (7 < iVar66) {
    auVar74 = NEON_fmov(0x40e00000,4);
    lVar55 = 0;
    do {
      Hint_Prefetch(puVar59 + 0x18,0,0,0);
      Hint_Prefetch(puVar59 + 0x38,0,0,0);
      uVar2 = puVar59[1];
      lVar64 = *(long *)(param_1 + 0x58);
      uVar3 = puVar59[2];
      uVar4 = puVar59[3];
      uVar5 = puVar59[4];
      uVar6 = puVar59[5];
      uVar7 = puVar59[7];
      uVar8 = puVar59[8];
      uVar9 = puVar59[9];
      bVar1 = pbVar65[lVar55];
      uVar10 = puVar59[6];
      uVar11 = puVar59[10];
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar2 * 2) * uVar56);
      uVar12 = puVar59[0xb];
      pfVar26 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)*puVar59 * 2) * uVar56);
      uVar13 = puVar59[0xd];
      auVar120._0_4_ = *pfVar25 - *pfVar26;
      auVar120._4_4_ = pfVar25[1] - pfVar26[1];
      auVar120._8_4_ = pfVar25[2] - pfVar26[2];
      auVar120._12_4_ = pfVar25[3] - pfVar26[3];
      uVar14 = puVar59[0xc];
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar4 * 2) * uVar56);
      fVar127 = *pfVar25;
      fVar129 = pfVar25[1];
      fVar130 = pfVar25[2];
      fVar131 = pfVar25[3];
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar6 * 2) * uVar56);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      fVar118 = pfVar25[2];
      fVar119 = pfVar25[3];
      uVar15 = puVar59[0x10];
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar5 * 2) * uVar56);
      fVar123 = *pfVar25;
      fVar124 = pfVar25[1];
      fVar37 = pfVar25[2];
      fVar38 = pfVar25[3];
      uVar16 = puVar59[0xe];
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar10 * 2) * uVar56);
      fVar39 = *pfVar25;
      fVar40 = pfVar25[1];
      fVar41 = pfVar25[2];
      fVar42 = pfVar25[3];
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar8 * 2) * uVar56);
      fVar43 = *pfVar25;
      fVar44 = pfVar25[1];
      fVar45 = pfVar25[2];
      fVar46 = pfVar25[3];
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar9 * 2) * uVar56);
      pfVar27 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar11 * 2) * uVar56);
      uVar17 = puVar59[0x11];
      auVar105._0_4_ = *pfVar27 - *pfVar25;
      auVar105._4_4_ = pfVar27[1] - pfVar25[1];
      auVar105._8_4_ = pfVar27[2] - pfVar25[2];
      auVar105._12_4_ = pfVar27[3] - pfVar25[3];
      pfVar27 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar14 * 2) * uVar56);
      pfVar28 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar7 * 2) * uVar56);
      fVar47 = *pfVar28;
      fVar48 = pfVar28[1];
      fVar49 = pfVar28[2];
      fVar50 = pfVar28[3];
      uVar18 = puVar59[0xf];
      pfVar28 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar13 * 2) * uVar56);
      auVar101._0_4_ = *pfVar28 - *pfVar27;
      auVar101._4_4_ = pfVar28[1] - pfVar27[1];
      auVar101._8_4_ = pfVar28[2] - pfVar27[2];
      auVar101._12_4_ = pfVar28[3] - pfVar27[3];
      uVar19 = puVar59[0x12];
      pfVar28 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar3 * 2) * uVar56);
      auVar108._0_4_ = *pfVar28 - *pfVar26;
      auVar108._4_4_ = pfVar28[1] - pfVar26[1];
      auVar108._8_4_ = pfVar28[2] - pfVar26[2];
      auVar108._12_4_ = pfVar28[3] - pfVar26[3];
      auVar125 = NEON_ext(auVar120,auVar120,4,1);
      auVar92 = NEON_ext(auVar108,auVar108,4,1);
      auVar95 = NEON_ext(auVar125,auVar125,8,1);
      auVar96 = NEON_ext(auVar92,auVar92,8,1);
      uVar93 = NEON_rev64(auVar95._0_8_,4);
      uVar20 = puVar59[0x13];
      pfVar26 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar15 * 2) * uVar56);
      uVar21 = puVar59[0x14];
      pfVar28 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar16 * 2) * uVar56);
      auVar100._0_4_ = *pfVar28 - *pfVar27;
      auVar100._4_4_ = pfVar28[1] - pfVar27[1];
      auVar100._8_4_ = pfVar28[2] - pfVar27[2];
      auVar100._12_4_ = pfVar28[3] - pfVar27[3];
      auVar102 = NEON_ext(auVar101,auVar101,4,1);
      pfVar27 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar17 * 2) * uVar56);
      pfVar28 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar12 * 2) * uVar56);
      auVar103._0_4_ = *pfVar28 - *pfVar25;
      auVar103._4_4_ = pfVar28[1] - pfVar25[1];
      auVar103._8_4_ = pfVar28[2] - pfVar25[2];
      auVar103._12_4_ = pfVar28[3] - pfVar25[3];
      auVar106 = NEON_ext(auVar105,auVar105,4,1);
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar19 * 2) * uVar56);
      uVar22 = puVar59[0x15];
      pfVar28 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar18 * 2) * uVar56);
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)*puVar59 * 2) * 0x10;
      auVar98._0_4_ = *pfVar26 - *pfVar28;
      auVar98._4_4_ = pfVar26[1] - pfVar28[1];
      auVar98._8_4_ = pfVar26[2] - pfVar28[2];
      auVar98._12_4_ = pfVar26[3] - pfVar28[3];
      auVar97._0_4_ = *pfVar27 - *pfVar28;
      auVar97._4_4_ = pfVar27[1] - pfVar28[1];
      auVar97._8_4_ = pfVar27[2] - pfVar28[2];
      auVar97._12_4_ = pfVar27[3] - pfVar28[3];
      auVar99 = NEON_ext(auVar98,auVar98,4,1);
      pfVar26 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar21 * 2) * uVar56);
      pfVar27 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar20 * 2) * uVar56);
      uVar23 = puVar59[0x16];
      auVar90._0_4_ = *pfVar27 - *pfVar25;
      auVar90._4_4_ = pfVar27[1] - pfVar25[1];
      auVar90._8_4_ = pfVar27[2] - pfVar25[2];
      auVar90._12_4_ = pfVar27[3] - pfVar25[3];
      auVar89._0_4_ = *pfVar26 - *pfVar25;
      auVar89._4_4_ = pfVar26[1] - pfVar25[1];
      auVar89._8_4_ = pfVar26[2] - pfVar25[2];
      auVar89._12_4_ = pfVar26[3] - pfVar25[3];
      auVar95 = NEON_ext(auVar90,auVar90,4,1);
      uVar94 = NEON_rev64(auVar96._0_8_,4);
      puVar29 = (undefined8 *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar22 * 2) * uVar56);
      uVar91 = puVar29[1];
      fVar79 = (float)uVar91;
      fVar81 = (float)((ulong)uVar91 >> 0x20);
      uVar91 = *puVar29;
      auVar109._0_4_ = auVar120._0_4_ * auVar92._0_4_ - auVar108._0_4_ * auVar125._0_4_;
      auVar109._4_4_ = auVar120._4_4_ * auVar92._4_4_ - auVar108._4_4_ * auVar125._4_4_;
      auVar109._8_4_ = auVar120._8_4_ * (float)uVar94 - auVar108._8_4_ * (float)uVar93;
      auVar109._12_4_ =
           auVar120._12_4_ * (float)((ulong)uVar94 >> 0x20) -
           auVar108._12_4_ * (float)((ulong)uVar93 >> 0x20);
      auVar92 = NEON_ext(auVar109,auVar109,4,1);
      fVar84 = auVar74._0_4_;
      fVar117 = (float)(bVar1 >> 7) * fVar84;
      puVar29 = (undefined8 *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar23 * 2) * uVar56);
      uVar94 = puVar29[1];
      uVar93 = *puVar29;
      uVar24 = puVar59[0x17];
      fVar68 = (float)uVar73;
      fVar69 = (float)((ulong)uVar73 >> 0x20);
      fVar70 = (float)uVar71;
      fVar72 = (float)((ulong)uVar71 >> 0x20);
      fVar107 = auVar92._0_4_ * (fVar68 - fVar117);
      fVar114 = auVar92._4_4_ * (fVar69 - fVar117);
      fVar115 = auVar109._0_4_ * (fVar70 - fVar117);
      fVar116 = auVar109._4_4_ * (fVar72 - fVar117);
      fVar117 = (float)uVar91;
      fVar83 = (float)uVar93 - fVar117;
      fVar80 = (float)((ulong)uVar91 >> 0x20);
      fVar85 = (float)((ulong)uVar93 >> 0x20) - fVar80;
      fVar86 = (float)uVar94 - fVar79;
      fVar88 = (float)((ulong)uVar94 >> 0x20) - fVar81;
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar64 + (ulong)uVar24 * 2) * uVar56);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      fVar51 = *pfVar26;
      fVar52 = pfVar26[1];
      fVar117 = *pfVar25 - fVar117;
      fVar80 = pfVar25[1] - fVar80;
      uVar75 = (undefined1)((uint)fVar80 >> 8);
      uVar76 = (undefined1)((uint)fVar80 >> 0x10);
      uVar77 = (undefined1)((uint)fVar80 >> 0x18);
      fVar79 = pfVar25[2] - fVar79;
      fVar81 = pfVar25[3] - fVar81;
      auVar126._4_4_ = fVar85;
      auVar126._0_4_ = fVar83;
      auVar126._8_4_ = fVar86;
      auVar126._12_4_ = fVar88;
      auVar128._4_4_ = fVar85;
      auVar128._0_4_ = fVar83;
      auVar128._8_4_ = fVar86;
      auVar128._12_4_ = fVar88;
      auVar96 = NEON_ext(auVar126,auVar128,4,1);
      pfVar25 = (float *)((long)local_b0 + lVar63);
      pfVar25[2] = pfVar26[2] + fVar115;
      pfVar25[3] = pfVar26[3] + fVar116;
      *pfVar25 = fVar51 + fVar107;
      pfVar25[1] = fVar52 + fVar114;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar2 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar51 = *pfVar25;
      fVar52 = pfVar25[1];
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar115 + pfVar25[2];
      pfVar26[3] = fVar116 + pfVar25[3];
      *pfVar26 = fVar107 + fVar51;
      pfVar26[1] = fVar114 + fVar52;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar3 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar51 = *pfVar25;
      fVar52 = pfVar25[1];
      auVar121._0_4_ = fVar82 - fVar127;
      auVar121._4_4_ = fVar87 - fVar129;
      auVar121._8_4_ = fVar118 - fVar130;
      auVar121._12_4_ = fVar119 - fVar131;
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar115 + pfVar25[2];
      pfVar26[3] = fVar116 + pfVar25[3];
      *pfVar26 = fVar107 + fVar51;
      pfVar26[1] = fVar114 + fVar52;
      auVar110._0_4_ = fVar123 - fVar127;
      auVar110._4_4_ = fVar124 - fVar129;
      auVar110._8_4_ = fVar37 - fVar130;
      auVar110._12_4_ = fVar38 - fVar131;
      auVar128 = NEON_ext(auVar121,auVar121,4,1);
      auVar125 = NEON_ext(auVar128,auVar128,8,1);
      auVar126 = NEON_ext(auVar110,auVar110,4,1);
      auVar92 = NEON_ext(auVar126,auVar126,8,1);
      uVar91 = NEON_rev64(auVar92._0_8_,4);
      uVar93 = NEON_rev64(auVar125._0_8_,4);
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar4 * 2) * 0x10;
      auVar111._0_4_ = auVar110._0_4_ * auVar128._0_4_ - auVar121._0_4_ * auVar126._0_4_;
      auVar111._4_4_ = auVar110._4_4_ * auVar128._4_4_ - auVar121._4_4_ * auVar126._4_4_;
      auVar111._8_4_ = auVar110._8_4_ * (float)uVar93 - auVar121._8_4_ * (float)uVar91;
      auVar111._12_4_ =
           auVar110._12_4_ * (float)((ulong)uVar93 >> 0x20) -
           auVar121._12_4_ * (float)((ulong)uVar91 >> 0x20);
      auVar92 = NEON_ext(auVar111,auVar111,4,1);
      fVar118 = (float)(bVar1 >> 6 & 1) * fVar84;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      fVar119 = auVar92._0_4_ * (fVar68 - fVar118);
      fVar123 = auVar92._4_4_ * (fVar69 - fVar118);
      fVar124 = auVar111._0_4_ * (fVar70 - fVar118);
      fVar118 = auVar111._4_4_ * (fVar72 - fVar118);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar5 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar6 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      auVar122._0_4_ = fVar43 - fVar39;
      auVar122._4_4_ = fVar44 - fVar40;
      auVar122._8_4_ = fVar45 - fVar41;
      auVar122._12_4_ = fVar46 - fVar42;
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      auVar112._0_4_ = fVar47 - fVar39;
      auVar112._4_4_ = fVar48 - fVar40;
      auVar112._8_4_ = fVar49 - fVar41;
      auVar112._12_4_ = fVar50 - fVar42;
      auVar125 = NEON_ext(auVar122,auVar122,4,1);
      auVar128 = NEON_ext(auVar125,auVar125,8,1);
      auVar92 = NEON_ext(auVar112,auVar112,4,1);
      auVar126 = NEON_ext(auVar92,auVar92,8,1);
      uVar91 = NEON_rev64(auVar126._0_8_,4);
      uVar93 = NEON_rev64(auVar128._0_8_,4);
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar10 * 2) * 0x10;
      auVar113._0_4_ = auVar112._0_4_ * auVar125._0_4_ - auVar122._0_4_ * auVar92._0_4_;
      auVar113._4_4_ = auVar112._4_4_ * auVar125._4_4_ - auVar122._4_4_ * auVar92._4_4_;
      auVar113._8_4_ = auVar112._8_4_ * (float)uVar93 - auVar122._8_4_ * (float)uVar91;
      auVar113._12_4_ =
           auVar112._12_4_ * (float)((ulong)uVar93 >> 0x20) -
           auVar122._12_4_ * (float)((ulong)uVar91 >> 0x20);
      auVar92 = NEON_ext(auVar113,auVar113,4,1);
      fVar118 = (float)(bVar1 >> 5 & 1) * fVar84;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      fVar119 = auVar92._0_4_ * (fVar68 - fVar118);
      fVar123 = auVar92._4_4_ * (fVar69 - fVar118);
      fVar124 = auVar113._0_4_ * (fVar70 - fVar118);
      fVar118 = auVar113._4_4_ * (fVar72 - fVar118);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar7 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar8 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      auVar92 = NEON_ext(auVar106,auVar106,8,1);
      uVar91 = NEON_rev64(auVar92._0_8_,4);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      auVar92 = NEON_ext(auVar103,auVar103,4,1);
      auVar125 = NEON_ext(auVar92,auVar92,8,1);
      uVar93 = NEON_rev64(auVar125._0_8_,4);
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar9 * 2) * 0x10;
      auVar104._0_4_ = auVar105._0_4_ * auVar92._0_4_ - auVar103._0_4_ * auVar106._0_4_;
      auVar104._4_4_ = auVar105._4_4_ * auVar92._4_4_ - auVar103._4_4_ * auVar106._4_4_;
      auVar104._8_4_ = auVar105._8_4_ * (float)uVar93 - auVar103._8_4_ * (float)uVar91;
      auVar104._12_4_ =
           auVar105._12_4_ * (float)((ulong)uVar93 >> 0x20) -
           auVar103._12_4_ * (float)((ulong)uVar91 >> 0x20);
      auVar92 = NEON_ext(auVar104,auVar104,4,1);
      fVar118 = (float)(bVar1 >> 4 & 1) * fVar84;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      fVar119 = auVar92._0_4_ * (fVar68 - fVar118);
      fVar123 = auVar92._4_4_ * (fVar69 - fVar118);
      fVar124 = auVar104._0_4_ * (fVar70 - fVar118);
      fVar118 = auVar104._4_4_ * (fVar72 - fVar118);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar11 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar12 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      auVar92 = NEON_ext(auVar102,auVar102,8,1);
      uVar91 = NEON_rev64(auVar92._0_8_,4);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      auVar92 = NEON_ext(auVar100,auVar100,4,1);
      auVar125 = NEON_ext(auVar92,auVar92,8,1);
      uVar93 = NEON_rev64(auVar125._0_8_,4);
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar14 * 2) * 0x10;
      auVar106._0_4_ = auVar101._0_4_ * auVar92._0_4_ - auVar100._0_4_ * auVar102._0_4_;
      auVar106._4_4_ = auVar101._4_4_ * auVar92._4_4_ - auVar100._4_4_ * auVar102._4_4_;
      auVar106._8_4_ = auVar101._8_4_ * (float)uVar93 - auVar100._8_4_ * (float)uVar91;
      auVar106._12_4_ =
           auVar101._12_4_ * (float)((ulong)uVar93 >> 0x20) -
           auVar100._12_4_ * (float)((ulong)uVar91 >> 0x20);
      auVar92 = NEON_ext(auVar106,auVar106,4,1);
      fVar118 = (float)(bVar1 >> 3 & 1) * fVar84;
      puVar59 = puVar59 + 0x18;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      fVar119 = auVar92._0_4_ * (fVar68 - fVar118);
      fVar123 = auVar92._4_4_ * (fVar69 - fVar118);
      fVar124 = auVar106._0_4_ * (fVar70 - fVar118);
      fVar118 = auVar106._4_4_ * (fVar72 - fVar118);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar13 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar16 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      auVar92 = NEON_ext(auVar99,auVar99,8,1);
      uVar91 = NEON_rev64(auVar92._0_8_,4);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      auVar92 = NEON_ext(auVar97,auVar97,4,1);
      auVar125 = NEON_ext(auVar92,auVar92,8,1);
      uVar93 = NEON_rev64(auVar125._0_8_,4);
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar18 * 2) * 0x10;
      auVar102._0_4_ = auVar98._0_4_ * auVar92._0_4_ - auVar97._0_4_ * auVar99._0_4_;
      auVar102._4_4_ = auVar98._4_4_ * auVar92._4_4_ - auVar97._4_4_ * auVar99._4_4_;
      auVar102._8_4_ = auVar98._8_4_ * (float)uVar93 - auVar97._8_4_ * (float)uVar91;
      auVar102._12_4_ =
           auVar98._12_4_ * (float)((ulong)uVar93 >> 0x20) -
           auVar97._12_4_ * (float)((ulong)uVar91 >> 0x20);
      auVar92 = NEON_ext(auVar102,auVar102,4,1);
      fVar118 = (float)(bVar1 >> 2 & 1) * fVar84;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      fVar119 = auVar92._0_4_ * (fVar68 - fVar118);
      fVar123 = auVar92._4_4_ * (fVar69 - fVar118);
      fVar124 = auVar102._0_4_ * (fVar70 - fVar118);
      fVar118 = auVar102._4_4_ * (fVar72 - fVar118);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar15 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar17 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      auVar92 = NEON_ext(auVar95,auVar95,8,1);
      uVar91 = NEON_rev64(auVar92._0_8_,4);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      auVar92 = NEON_ext(auVar89,auVar89,4,1);
      auVar125 = NEON_ext(auVar92,auVar92,8,1);
      uVar93 = NEON_rev64(auVar125._0_8_,4);
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar19 * 2) * 0x10;
      auVar99._0_4_ = auVar90._0_4_ * auVar92._0_4_ - auVar89._0_4_ * auVar95._0_4_;
      auVar99._4_4_ = auVar90._4_4_ * auVar92._4_4_ - auVar89._4_4_ * auVar95._4_4_;
      auVar99._8_4_ = auVar90._8_4_ * (float)uVar93 - auVar89._8_4_ * (float)uVar91;
      auVar99._12_4_ =
           auVar90._12_4_ * (float)((ulong)uVar93 >> 0x20) -
           auVar89._12_4_ * (float)((ulong)uVar91 >> 0x20);
      auVar95 = NEON_ext(auVar99,auVar99,4,1);
      fVar118 = (float)(bVar1 >> 1 & 1) * fVar84;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      fVar119 = auVar95._0_4_ * (fVar68 - fVar118);
      fVar123 = auVar95._4_4_ * (fVar69 - fVar118);
      fVar124 = auVar99._0_4_ * (fVar70 - fVar118);
      fVar118 = auVar99._4_4_ * (fVar72 - fVar118);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar20 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar21 * 2) * 0x10;
      pfVar25 = (float *)((long)local_b0 + lVar63);
      fVar82 = *pfVar25;
      fVar87 = pfVar25[1];
      auVar95 = NEON_ext(auVar96,auVar96,8,1);
      uVar91 = NEON_rev64(auVar95._0_8_,4);
      pfVar26 = (float *)((long)local_b0 + lVar63);
      pfVar26[2] = fVar124 + pfVar25[2];
      pfVar26[3] = fVar118 + pfVar25[3];
      *pfVar26 = fVar119 + fVar82;
      pfVar26[1] = fVar123 + fVar87;
      auVar95[4] = SUB41(fVar80,0);
      auVar95._0_4_ = fVar117;
      auVar95[5] = uVar75;
      auVar95[6] = uVar76;
      auVar95[7] = uVar77;
      auVar95._8_4_ = fVar79;
      auVar95._12_4_ = fVar81;
      auVar92[4] = SUB41(fVar80,0);
      auVar92._0_4_ = fVar117;
      auVar92[5] = uVar75;
      auVar92[6] = uVar76;
      auVar92[7] = uVar77;
      auVar92._8_4_ = fVar79;
      auVar92._12_4_ = fVar81;
      auVar95 = NEON_ext(auVar95,auVar92,4,1);
      auVar92 = NEON_ext(auVar95,auVar95,8,1);
      uVar93 = NEON_rev64(auVar92._0_8_,4);
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar22 * 2) * 0x10;
      fVar117 = fVar83 * auVar95._0_4_ - fVar117 * auVar96._0_4_;
      fVar80 = fVar85 * auVar95._4_4_ - fVar80 * auVar96._4_4_;
      uVar75 = SUB41(fVar80,0);
      uVar76 = (undefined1)((uint)fVar80 >> 8);
      uVar77 = (undefined1)((uint)fVar80 >> 0x10);
      uVar78 = (undefined1)((uint)fVar80 >> 0x18);
      fVar80 = fVar86 * (float)uVar93 - fVar79 * (float)uVar91;
      fVar82 = fVar88 * (float)((ulong)uVar93 >> 0x20) - fVar81 * (float)((ulong)uVar91 >> 0x20);
      auVar96[4] = uVar75;
      auVar96._0_4_ = fVar117;
      auVar96[5] = uVar76;
      auVar96[6] = uVar77;
      auVar96[7] = uVar78;
      auVar96._8_4_ = fVar80;
      auVar96._12_4_ = fVar82;
      auVar125[4] = uVar75;
      auVar125._0_4_ = fVar117;
      auVar125[5] = uVar76;
      auVar125[6] = uVar77;
      auVar125[7] = uVar78;
      auVar125._8_4_ = fVar80;
      auVar125._12_4_ = fVar82;
      auVar95 = NEON_ext(auVar96,auVar125,4,1);
      fVar84 = (float)(bVar1 & 1) * fVar84;
      puVar29 = (undefined8 *)((long)local_b0 + lVar63);
      uVar93 = puVar29[1];
      uVar91 = *puVar29;
      fVar82 = (fVar68 - fVar84) * auVar95._0_4_;
      fVar80 = (fVar69 - fVar84) * auVar95._4_4_;
      fVar87 = (fVar70 - fVar84) * fVar117;
      fVar118 = (fVar72 - fVar84) *
                (float)(CONCAT17(uVar78,CONCAT16(uVar77,CONCAT15(uVar76,CONCAT14(uVar75,fVar117))))
                       >> 0x20);
      fVar117 = fVar80 + (float)((ulong)uVar91 >> 0x20);
      puVar29 = (undefined8 *)((long)local_b0 + lVar63);
      puVar29[1] = CONCAT44(fVar118 + (float)((ulong)uVar93 >> 0x20),fVar87 + (float)uVar93);
      *puVar29 = CONCAT17((char)((uint)fVar117 >> 0x18),
                          CONCAT16((char)((uint)fVar117 >> 0x10),
                                   CONCAT15((char)((uint)fVar117 >> 8),
                                            CONCAT14(SUB41(fVar117,0),fVar82 + (float)uVar91))));
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar23 * 2) * 0x10;
      puVar29 = (undefined8 *)((long)local_b0 + lVar63);
      uVar93 = puVar29[1];
      uVar91 = *puVar29;
      fVar117 = fVar80 + (float)((ulong)uVar91 >> 0x20);
      puVar29 = (undefined8 *)((long)local_b0 + lVar63);
      puVar29[1] = CONCAT44(fVar118 + (float)((ulong)uVar93 >> 0x20),fVar87 + (float)uVar93);
      *puVar29 = CONCAT17((char)((uint)fVar117 >> 0x18),
                          CONCAT16((char)((uint)fVar117 >> 0x10),
                                   CONCAT15((char)((uint)fVar117 >> 8),
                                            CONCAT14(SUB41(fVar117,0),fVar82 + (float)uVar91))));
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar24 * 2) * 0x10;
      puVar29 = (undefined8 *)((long)local_b0 + lVar63);
      uVar93 = puVar29[1];
      uVar91 = *puVar29;
      fVar80 = fVar80 + (float)((ulong)uVar91 >> 0x20);
      puVar29 = (undefined8 *)((long)local_b0 + lVar63);
      puVar29[1] = CONCAT44(fVar118 + (float)((ulong)uVar93 >> 0x20),fVar87 + (float)uVar93);
      *puVar29 = CONCAT17((char)((uint)fVar80 >> 0x18),
                          CONCAT16((char)((uint)fVar80 >> 0x10),
                                   CONCAT15((char)((uint)fVar80 >> 8),
                                            CONCAT14(SUB41(fVar80,0),fVar82 + (float)uVar91))));
      lVar55 = lVar55 + 1;
    } while ((int)lVar55 < iVar66 >> 3);
    iVar66 = *(int *)(param_1 + 0x50);
    pbVar65 = pbVar65 + lVar55;
    puVar67 = (undefined2 *)PTR_DAT_04bd4d90;
  }
  uVar71 = _DAT_0413f328;
  uVar73 = _DAT_0413f320;
  if (0 < iVar66 % 8) {
    auVar74 = NEON_fmov(0x40e00000,4);
    uVar61 = 0;
    do {
      uVar2 = *puVar59;
      lVar55 = *(long *)(param_1 + 0x58);
      uVar3 = puVar59[1];
      uVar4 = puVar59[2];
      puVar59 = puVar59 + 3;
      puVar29 = (undefined8 *)(lVar54 + *(ushort *)(lVar55 + (ulong)uVar2 * 2) * uVar56);
      uVar91 = puVar29[1];
      fVar82 = (float)uVar91;
      fVar87 = (float)((ulong)uVar91 >> 0x20);
      uVar91 = *puVar29;
      pfVar25 = (float *)(lVar54 + *(ushort *)(lVar55 + (ulong)uVar4 * 2) * uVar56);
      puVar29 = (undefined8 *)(lVar54 + *(ushort *)(lVar55 + (ulong)uVar3 * 2) * uVar56);
      uVar94 = puVar29[1];
      uVar93 = *puVar29;
      uVar58 = 7 - uVar61;
      uVar61 = uVar61 + 1 & 0xff;
      fVar117 = (float)uVar91;
      fVar118 = (float)uVar93 - fVar117;
      fVar80 = (float)((ulong)uVar91 >> 0x20);
      fVar119 = (float)((ulong)uVar93 >> 0x20) - fVar80;
      fVar123 = (float)uVar94 - fVar82;
      fVar124 = (float)((ulong)uVar94 >> 0x20) - fVar87;
      fVar117 = *pfVar25 - fVar117;
      fVar80 = pfVar25[1] - fVar80;
      uVar75 = (undefined1)((uint)fVar80 >> 8);
      uVar76 = (undefined1)((uint)fVar80 >> 0x10);
      uVar77 = (undefined1)((uint)fVar80 >> 0x18);
      fVar82 = pfVar25[2] - fVar82;
      fVar87 = pfVar25[3] - fVar87;
      auVar35._4_4_ = fVar119;
      auVar35._0_4_ = fVar118;
      auVar35._8_4_ = fVar123;
      auVar35._12_4_ = fVar124;
      auVar36._4_4_ = fVar119;
      auVar36._0_4_ = fVar118;
      auVar36._8_4_ = fVar123;
      auVar36._12_4_ = fVar124;
      auVar95 = NEON_ext(auVar35,auVar36,4,1);
      auVar30[4] = SUB41(fVar80,0);
      auVar30._0_4_ = fVar117;
      auVar30[5] = uVar75;
      auVar30[6] = uVar76;
      auVar30[7] = uVar77;
      auVar30._8_4_ = fVar82;
      auVar30._12_4_ = fVar87;
      auVar31[4] = SUB41(fVar80,0);
      auVar31._0_4_ = fVar117;
      auVar31[5] = uVar75;
      auVar31[6] = uVar76;
      auVar31[7] = uVar77;
      auVar31._8_4_ = fVar82;
      auVar31._12_4_ = fVar87;
      auVar92 = NEON_ext(auVar30,auVar31,4,1);
      auVar96 = NEON_ext(auVar95,auVar95,8,1);
      auVar125 = NEON_ext(auVar92,auVar92,8,1);
      uVar91 = NEON_rev64(auVar96._0_8_,4);
      uVar93 = NEON_rev64(auVar125._0_8_,4);
      lVar55 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar2 * 2) * 0x10;
      fVar117 = fVar118 * auVar92._0_4_ - fVar117 * auVar95._0_4_;
      fVar80 = fVar119 * auVar92._4_4_ - fVar80 * auVar95._4_4_;
      uVar75 = SUB41(fVar80,0);
      uVar76 = (undefined1)((uint)fVar80 >> 8);
      uVar77 = (undefined1)((uint)fVar80 >> 0x10);
      uVar78 = (undefined1)((uint)fVar80 >> 0x18);
      fVar80 = fVar123 * (float)uVar93 - fVar82 * (float)uVar91;
      fVar82 = fVar124 * (float)((ulong)uVar93 >> 0x20) - fVar87 * (float)((ulong)uVar91 >> 0x20);
      auVar32[4] = uVar75;
      auVar32._0_4_ = fVar117;
      auVar32[5] = uVar76;
      auVar32[6] = uVar77;
      auVar32[7] = uVar78;
      auVar32._8_4_ = fVar80;
      auVar32._12_4_ = fVar82;
      auVar33[4] = uVar75;
      auVar33._0_4_ = fVar117;
      auVar33[5] = uVar76;
      auVar33[6] = uVar77;
      auVar33[7] = uVar78;
      auVar33._8_4_ = fVar80;
      auVar33._12_4_ = fVar82;
      auVar95 = NEON_ext(auVar32,auVar33,4,1);
      fVar118 = (float)(int)((1 << (ulong)(uVar58 & 0x1f) & (uint)*pbVar65) >>
                            (ulong)(uVar58 & 0x1f)) * auVar74._0_4_;
      puVar29 = (undefined8 *)((long)local_b0 + lVar55);
      uVar93 = puVar29[1];
      uVar91 = *puVar29;
      fVar80 = auVar95._0_4_ * ((float)uVar73 - fVar118);
      fVar82 = auVar95._4_4_ * ((float)((ulong)uVar73 >> 0x20) - fVar118);
      fVar87 = fVar117 * ((float)uVar71 - fVar118);
      fVar117 = (float)(CONCAT17(uVar78,CONCAT16(uVar77,CONCAT15(uVar76,CONCAT14(uVar75,fVar117))))
                       >> 0x20) * ((float)((ulong)uVar71 >> 0x20) - fVar118);
      puVar29 = (undefined8 *)((long)local_b0 + lVar55);
      puVar29[1] = CONCAT44((float)((ulong)uVar93 >> 0x20) + fVar117,(float)uVar93 + fVar87);
      *puVar29 = CONCAT44((float)((ulong)uVar91 >> 0x20) + fVar82,(float)uVar91 + fVar80);
      lVar55 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar3 * 2) * 0x10;
      puVar29 = (undefined8 *)((long)local_b0 + lVar55);
      uVar93 = puVar29[1];
      uVar91 = *puVar29;
      puVar29 = (undefined8 *)((long)local_b0 + lVar55);
      puVar29[1] = CONCAT44(fVar117 + (float)((ulong)uVar93 >> 0x20),fVar87 + (float)uVar93);
      *puVar29 = CONCAT44(fVar82 + (float)((ulong)uVar91 >> 0x20),fVar80 + (float)uVar91);
      lVar55 = (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + (ulong)uVar4 * 2) * 0x10;
      puVar29 = (undefined8 *)((long)local_b0 + lVar55);
      uVar93 = puVar29[1];
      uVar91 = *puVar29;
      fVar82 = fVar82 + (float)((ulong)uVar91 >> 0x20);
      puVar29 = (undefined8 *)((long)local_b0 + lVar55);
      puVar29[1] = CONCAT44(fVar117 + (float)((ulong)uVar93 >> 0x20),fVar87 + (float)uVar93);
      *puVar29 = CONCAT17((char)((uint)fVar82 >> 0x18),
                          CONCAT16((char)((uint)fVar82 >> 0x10),
                                   CONCAT15((char)((uint)fVar82 >> 8),
                                            CONCAT14(SUB41(fVar82,0),fVar80 + (float)uVar91))));
    } while ((int)uVar61 < iVar66 % 8);
  }
  uVar61 = *(uint *)(param_1 + 0xdc);
  uVar56 = 0;
  uVar58 = uVar61 >> 2;
  if (uVar58 != 0) {
    do {
      uVar60 = -(uVar56 >> 0x1f) & 0xfffffff000000000 | uVar56 << 4;
      uVar58 = uVar58 - 1;
      puVar29 = (undefined8 *)((long)local_b0 + uVar60);
      uVar71 = puVar29[1];
      uVar73 = *puVar29;
      fVar117 = (float)uVar73;
      fVar80 = (float)((ulong)uVar73 >> 0x20);
      fVar82 = (float)uVar71;
      fVar87 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      fVar119 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      uVar91 = CONCAT44(fVar119,fVar87);
      uVar73 = NEON_frsqrte(uVar91,4);
      fVar118 = (float)uVar73;
      fVar123 = (float)((ulong)uVar73 >> 0x20);
      iVar66 = -(uint)(fVar87 <= 0.0);
      iVar34 = -(uint)(fVar119 <= 0.0);
      uVar73 = NEON_frsqrts(uVar91,CONCAT44(fVar123 * fVar123,fVar118 * fVar118),4);
      fVar118 = fVar118 * (float)uVar73;
      fVar123 = fVar123 * (float)((ulong)uVar73 >> 0x20);
      fVar87 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                               CONCAT12((byte)((uint)fVar118 >> 0x10) &
                                        ~(byte)((uint)iVar66 >> 0x10),
                                        CONCAT11((byte)((uint)fVar118 >> 8) &
                                                 ~(byte)((uint)iVar66 >> 8),
                                                 SUB41(fVar118,0) & ~(byte)iVar66)));
      fVar118 = (float)(CONCAT17((byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                 CONCAT16((byte)((uint)fVar123 >> 0x10) &
                                          ~(byte)((uint)iVar34 >> 0x10),
                                          CONCAT15((byte)((uint)fVar123 >> 8) &
                                                   ~(byte)((uint)iVar34 >> 8),
                                                   CONCAT14(SUB41(fVar123,0) & ~(byte)iVar34,fVar87)
                                                  ))) >> 0x20);
      puVar29 = (undefined8 *)((long)local_b0 + uVar60);
      puVar29[1] = CONCAT44((float)((ulong)uVar71 >> 0x20) * fVar118,fVar82 * fVar87);
      *puVar29 = CONCAT44(fVar80 * fVar118,fVar117 * fVar87);
      iVar57 = (int)uVar56;
      uVar56 = -(ulong)(iVar57 + 1U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar57 + 1U) << 4;
      puVar29 = (undefined8 *)((long)local_b0 + uVar56);
      uVar71 = puVar29[1];
      uVar73 = *puVar29;
      fVar117 = (float)uVar73;
      fVar80 = (float)((ulong)uVar73 >> 0x20);
      fVar82 = (float)uVar71;
      fVar87 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      fVar119 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      uVar91 = CONCAT44(fVar119,fVar87);
      uVar73 = NEON_frsqrte(uVar91,4);
      fVar118 = (float)uVar73;
      fVar123 = (float)((ulong)uVar73 >> 0x20);
      iVar66 = -(uint)(fVar87 <= 0.0);
      iVar34 = -(uint)(fVar119 <= 0.0);
      uVar73 = NEON_frsqrts(uVar91,CONCAT44(fVar123 * fVar123,fVar118 * fVar118),4);
      fVar118 = fVar118 * (float)uVar73;
      fVar123 = fVar123 * (float)((ulong)uVar73 >> 0x20);
      fVar87 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                               CONCAT12((byte)((uint)fVar118 >> 0x10) &
                                        ~(byte)((uint)iVar66 >> 0x10),
                                        CONCAT11((byte)((uint)fVar118 >> 8) &
                                                 ~(byte)((uint)iVar66 >> 8),
                                                 SUB41(fVar118,0) & ~(byte)iVar66)));
      fVar118 = (float)(CONCAT17((byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                 CONCAT16((byte)((uint)fVar123 >> 0x10) &
                                          ~(byte)((uint)iVar34 >> 0x10),
                                          CONCAT15((byte)((uint)fVar123 >> 8) &
                                                   ~(byte)((uint)iVar34 >> 8),
                                                   CONCAT14(SUB41(fVar123,0) & ~(byte)iVar34,fVar87)
                                                  ))) >> 0x20);
      puVar29 = (undefined8 *)((long)local_b0 + uVar56);
      puVar29[1] = CONCAT44((float)((ulong)uVar71 >> 0x20) * fVar118,fVar82 * fVar87);
      *puVar29 = CONCAT44(fVar80 * fVar118,fVar117 * fVar87);
      uVar56 = -(ulong)(iVar57 + 2U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar57 + 2U) << 4;
      puVar29 = (undefined8 *)((long)local_b0 + uVar56);
      uVar71 = puVar29[1];
      uVar73 = *puVar29;
      fVar117 = (float)uVar73;
      fVar80 = (float)((ulong)uVar73 >> 0x20);
      fVar82 = (float)uVar71;
      fVar87 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      fVar119 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      uVar91 = CONCAT44(fVar119,fVar87);
      uVar73 = NEON_frsqrte(uVar91,4);
      fVar118 = (float)uVar73;
      fVar123 = (float)((ulong)uVar73 >> 0x20);
      iVar66 = -(uint)(fVar87 <= 0.0);
      iVar34 = -(uint)(fVar119 <= 0.0);
      uVar73 = NEON_frsqrts(uVar91,CONCAT44(fVar123 * fVar123,fVar118 * fVar118),4);
      fVar118 = fVar118 * (float)uVar73;
      fVar123 = fVar123 * (float)((ulong)uVar73 >> 0x20);
      fVar87 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                               CONCAT12((byte)((uint)fVar118 >> 0x10) &
                                        ~(byte)((uint)iVar66 >> 0x10),
                                        CONCAT11((byte)((uint)fVar118 >> 8) &
                                                 ~(byte)((uint)iVar66 >> 8),
                                                 SUB41(fVar118,0) & ~(byte)iVar66)));
      fVar118 = (float)(CONCAT17((byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                 CONCAT16((byte)((uint)fVar123 >> 0x10) &
                                          ~(byte)((uint)iVar34 >> 0x10),
                                          CONCAT15((byte)((uint)fVar123 >> 8) &
                                                   ~(byte)((uint)iVar34 >> 8),
                                                   CONCAT14(SUB41(fVar123,0) & ~(byte)iVar34,fVar87)
                                                  ))) >> 0x20);
      puVar29 = (undefined8 *)((long)local_b0 + uVar56);
      puVar29[1] = CONCAT44((float)((ulong)uVar71 >> 0x20) * fVar118,fVar82 * fVar87);
      *puVar29 = CONCAT44(fVar80 * fVar118,fVar117 * fVar87);
      uVar60 = -(ulong)(iVar57 + 3U >> 0x1f) & 0xfffffff000000000 | (ulong)(iVar57 + 3U) << 4;
      puVar29 = (undefined8 *)((long)local_b0 + uVar60);
      uVar71 = puVar29[1];
      uVar73 = *puVar29;
      uVar56 = (ulong)(iVar57 + 4);
      fVar117 = (float)uVar73;
      fVar80 = (float)((ulong)uVar73 >> 0x20);
      fVar82 = (float)uVar71;
      fVar87 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      fVar119 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      uVar91 = CONCAT44(fVar119,fVar87);
      uVar73 = NEON_frsqrte(uVar91,4);
      fVar118 = (float)uVar73;
      fVar123 = (float)((ulong)uVar73 >> 0x20);
      iVar66 = -(uint)(fVar87 <= 0.0);
      iVar34 = -(uint)(fVar119 <= 0.0);
      uVar73 = NEON_frsqrts(uVar91,CONCAT44(fVar123 * fVar123,fVar118 * fVar118),4);
      fVar118 = fVar118 * (float)uVar73;
      fVar123 = fVar123 * (float)((ulong)uVar73 >> 0x20);
      fVar87 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                               CONCAT12((byte)((uint)fVar118 >> 0x10) &
                                        ~(byte)((uint)iVar66 >> 0x10),
                                        CONCAT11((byte)((uint)fVar118 >> 8) &
                                                 ~(byte)((uint)iVar66 >> 8),
                                                 SUB41(fVar118,0) & ~(byte)iVar66)));
      fVar118 = (float)(CONCAT17((byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                 CONCAT16((byte)((uint)fVar123 >> 0x10) &
                                          ~(byte)((uint)iVar34 >> 0x10),
                                          CONCAT15((byte)((uint)fVar123 >> 8) &
                                                   ~(byte)((uint)iVar34 >> 8),
                                                   CONCAT14(SUB41(fVar123,0) & ~(byte)iVar34,fVar87)
                                                  ))) >> 0x20);
      puVar29 = (undefined8 *)((long)local_b0 + uVar60);
      puVar29[1] = CONCAT44((float)((ulong)uVar71 >> 0x20) * fVar118,fVar82 * fVar87);
      *puVar29 = CONCAT44(fVar80 * fVar118,fVar117 * fVar87);
    } while (uVar58 != 0);
    uVar61 = *(uint *)(param_1 + 0xdc);
  }
  if ((uVar61 & 3) != 0) {
    uVar60 = -(uVar56 >> 0x1f) & 0xfffffff000000000 | uVar56 << 4;
    puVar29 = (undefined8 *)((long)local_b0 + uVar60);
    uVar71 = puVar29[1];
    uVar73 = *puVar29;
    fVar117 = (float)uVar73;
    fVar80 = (float)((ulong)uVar73 >> 0x20);
    fVar82 = (float)uVar71;
    fVar87 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
    fVar119 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
    uVar91 = CONCAT44(fVar119,fVar87);
    uVar73 = NEON_frsqrte(uVar91,4);
    fVar118 = (float)uVar73;
    fVar123 = (float)((ulong)uVar73 >> 0x20);
    iVar66 = -(uint)(fVar87 <= 0.0);
    iVar34 = -(uint)(fVar119 <= 0.0);
    uVar73 = NEON_frsqrts(uVar91,CONCAT44(fVar123 * fVar123,fVar118 * fVar118),4);
    fVar118 = fVar118 * (float)uVar73;
    fVar123 = fVar123 * (float)((ulong)uVar73 >> 0x20);
    fVar87 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                             CONCAT12((byte)((uint)fVar118 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                      CONCAT11((byte)((uint)fVar118 >> 8) &
                                               ~(byte)((uint)iVar66 >> 8),
                                               SUB41(fVar118,0) & ~(byte)iVar66)));
    fVar118 = (float)(CONCAT17((byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                               CONCAT16((byte)((uint)fVar123 >> 0x10) &
                                        ~(byte)((uint)iVar34 >> 0x10),
                                        CONCAT15((byte)((uint)fVar123 >> 8) &
                                                 ~(byte)((uint)iVar34 >> 8),
                                                 CONCAT14(SUB41(fVar123,0) & ~(byte)iVar34,fVar87)))
                              ) >> 0x20);
    puVar29 = (undefined8 *)((long)local_b0 + uVar60);
    puVar29[1] = CONCAT44((float)((ulong)uVar71 >> 0x20) * fVar118,fVar82 * fVar87);
    *puVar29 = CONCAT44(fVar80 * fVar118,fVar117 * fVar87);
    if ((*(byte *)(param_1 + 0xdc) >> 1 & 1) != 0) {
      uVar61 = (int)uVar56 + 1;
      uVar60 = -(ulong)(uVar61 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar61 << 4;
      puVar29 = (undefined8 *)((long)local_b0 + uVar60);
      uVar71 = puVar29[1];
      uVar73 = *puVar29;
      fVar117 = (float)uVar73;
      fVar80 = (float)((ulong)uVar73 >> 0x20);
      fVar82 = (float)uVar71;
      fVar87 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      fVar119 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
      uVar91 = CONCAT44(fVar119,fVar87);
      uVar73 = NEON_frsqrte(uVar91,4);
      fVar118 = (float)uVar73;
      fVar123 = (float)((ulong)uVar73 >> 0x20);
      iVar66 = -(uint)(fVar87 <= 0.0);
      iVar34 = -(uint)(fVar119 <= 0.0);
      uVar73 = NEON_frsqrts(uVar91,CONCAT44(fVar123 * fVar123,fVar118 * fVar118),4);
      fVar118 = fVar118 * (float)uVar73;
      fVar123 = fVar123 * (float)((ulong)uVar73 >> 0x20);
      fVar87 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                               CONCAT12((byte)((uint)fVar118 >> 0x10) &
                                        ~(byte)((uint)iVar66 >> 0x10),
                                        CONCAT11((byte)((uint)fVar118 >> 8) &
                                                 ~(byte)((uint)iVar66 >> 8),
                                                 SUB41(fVar118,0) & ~(byte)iVar66)));
      fVar118 = (float)(CONCAT17((byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                 CONCAT16((byte)((uint)fVar123 >> 0x10) &
                                          ~(byte)((uint)iVar34 >> 0x10),
                                          CONCAT15((byte)((uint)fVar123 >> 8) &
                                                   ~(byte)((uint)iVar34 >> 8),
                                                   CONCAT14(SUB41(fVar123,0) & ~(byte)iVar34,fVar87)
                                                  ))) >> 0x20);
      puVar29 = (undefined8 *)((long)local_b0 + uVar60);
      puVar29[1] = CONCAT44((float)((ulong)uVar71 >> 0x20) * fVar118,fVar82 * fVar87);
      *puVar29 = CONCAT44(fVar80 * fVar118,fVar117 * fVar87);
      if ((~*(uint *)(param_1 + 0xdc) & 3) == 0) {
        uVar61 = (int)uVar56 + 2;
        uVar56 = -(ulong)(uVar61 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar61 << 4;
        puVar29 = (undefined8 *)((long)local_b0 + uVar56);
        uVar71 = puVar29[1];
        uVar73 = *puVar29;
        fVar117 = (float)uVar73;
        fVar80 = (float)((ulong)uVar73 >> 0x20);
        fVar82 = (float)uVar71;
        fVar87 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
        fVar119 = fVar117 * fVar117 + fVar80 * fVar80 + fVar82 * fVar82;
        uVar91 = CONCAT44(fVar119,fVar87);
        uVar73 = NEON_frsqrte(uVar91,4);
        fVar118 = (float)uVar73;
        fVar123 = (float)((ulong)uVar73 >> 0x20);
        iVar66 = -(uint)(fVar87 <= 0.0);
        iVar34 = -(uint)(fVar119 <= 0.0);
        uVar73 = NEON_frsqrts(uVar91,CONCAT44(fVar123 * fVar123,fVar118 * fVar118),4);
        fVar118 = fVar118 * (float)uVar73;
        fVar123 = fVar123 * (float)((ulong)uVar73 >> 0x20);
        fVar87 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                                 CONCAT12((byte)((uint)fVar118 >> 0x10) &
                                          ~(byte)((uint)iVar66 >> 0x10),
                                          CONCAT11((byte)((uint)fVar118 >> 8) &
                                                   ~(byte)((uint)iVar66 >> 8),
                                                   SUB41(fVar118,0) & ~(byte)iVar66)));
        fVar118 = (float)(CONCAT17((byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                   CONCAT16((byte)((uint)fVar123 >> 0x10) &
                                            ~(byte)((uint)iVar34 >> 0x10),
                                            CONCAT15((byte)((uint)fVar123 >> 8) &
                                                     ~(byte)((uint)iVar34 >> 8),
                                                     CONCAT14(SUB41(fVar123,0) & ~(byte)iVar34,
                                                              fVar87)))) >> 0x20);
        puVar29 = (undefined8 *)((long)local_b0 + uVar56);
        puVar29[1] = CONCAT44((float)((ulong)uVar71 >> 0x20) * fVar118,fVar82 * fVar87);
        *puVar29 = CONCAT44(fVar80 * fVar118,fVar117 * fVar87);
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar55 = *(long *)(param_2 + 0x40);
    bVar1 = *(byte *)(param_2 + 0x4c);
    lVar54 = 0;
    do {
      lVar63 = lVar54 * 2;
      lVar54 = lVar54 + 1;
      lVar63 = (ulong)*(ushort *)(*(long *)(param_1 + 0x68) + lVar63) * 2;
      puVar62 = (undefined8 *)
                (lVar55 + (ulong)*(ushort *)(*(long *)(param_1 + 0x58) + lVar63) * (ulong)bVar1);
      puVar29 = (undefined8 *)
                ((long)local_b0 + (ulong)*(ushort *)(*(long *)(param_1 + 0x78) + lVar63) * 0x10);
      uVar73 = puVar29[1];
      *puVar62 = *puVar29;
      *(int *)(puVar62 + 1) = (int)uVar73;
    } while (lVar54 < *(int *)(param_1 + 0x70));
  }
  lVar54 = FUN_0043c4e0(*puVar67);
  if (lVar54 != 0) {
    FUN_00443a70(lVar54,&DAT_04085310);
  }
  uVar61 = local_98;
  pvVar53 = local_a0;
  if (local_a0 == local_b0) {
    local_a8 = local_a8 & 0xffffffff00000000;
  }
  lVar55 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar54 = DAT_04c6f058;
  if (lVar55 != 0) {
    lVar54 = lVar55;
  }
  uVar56 = (ulong)(int)(uVar61 * 0x10 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar54 + 0x10) < uVar56) || (*(long *)(lVar54 + 0x18) != uVar56 + (long)pvVar53))
     || (*(void **)(lVar54 + 0x28) == pvVar53)) {
    FUN_00439980(lVar54,pvVar53);
    uVar61 = local_a8._4_4_;
  }
  else {
    *(void **)(lVar54 + 0x18) = pvVar53;
    uVar61 = local_a8._4_4_;
  }
  if ((-1 < (long)local_a8) && (local_a8 = (ulong)uVar61 << 0x20, local_b0 != (void *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_b0,0x10,uVar61 & 0x3fffffff);
  }
  return;
}

