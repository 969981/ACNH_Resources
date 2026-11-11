
void FUN_0053e9e0(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  byte *extraout_x1;
  byte *pbVar27;
  byte *extraout_x1_00;
  byte *extraout_x1_01;
  byte *extraout_x1_02;
  byte *extraout_x1_03;
  byte *extraout_x1_04;
  byte *extraout_x1_05;
  byte *extraout_x1_06;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  ushort *puVar32;
  int iVar33;
  byte bVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte bVar37;
  byte bVar38;
  ulong uVar39;
  long lVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  byte bVar43;
  undefined8 *puVar44;
  undefined2 *puVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
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
  float fVar66;
  undefined8 uVar65;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  
  puVar45 = &DAT_04c6f410;
  lVar24 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar24 != 0) {
    FUN_00443a00(lVar24,"TtSkin");
  }
  bVar20 = false;
  if ((*(char *)(param_1 + 0x88) != '\0') && (bVar20 = false, *(long *)(param_3 + 0x18) != 0)) {
    bVar20 = *(long *)(param_5 + 0x18) != 0;
  }
  bVar21 = false;
  if ((*(char *)(param_1 + 0x89) != '\0') && (bVar21 = false, *(long *)(param_3 + 0x40) != 0)) {
    bVar21 = *(long *)(param_5 + 0x40) != 0;
  }
  bVar22 = false;
  if ((*(char *)(param_1 + 0x8a) != '\0') && (bVar22 = false, *(long *)(param_3 + 0x58) != 0)) {
    bVar22 = *(long *)(param_5 + 0x58) != 0;
  }
  bVar23 = false;
  if ((*(char *)(param_1 + 0x8b) != '\0') && (bVar23 = false, *(long *)(param_3 + 0x70) != 0)) {
    bVar23 = *(long *)(param_5 + 0x70) != 0;
  }
  if ((*(byte *)(param_3 + 0x28) & 1) == 0) {
    bVar43 = 0;
    if ((*(byte *)(param_3 + 0x50) & 1) != 0) goto LAB_0053ead0;
LAB_0053eb10:
    bVar34 = 0;
    if ((*(byte *)(param_3 + 0x68) & 1) == 0) goto LAB_0053eb1c;
LAB_0053eae0:
    bVar37 = *(byte *)(param_5 + 0x68) & 1;
    if ((*(byte *)(param_3 + 0x80) & 1) != 0) goto LAB_0053eaf4;
LAB_0053eb2c:
    bVar38 = 0;
  }
  else {
    bVar43 = *(byte *)(param_5 + 0x28) & 1;
    if ((*(byte *)(param_3 + 0x50) & 1) == 0) goto LAB_0053eb10;
LAB_0053ead0:
    bVar34 = *(byte *)(param_5 + 0x50) & 1;
    if ((*(byte *)(param_3 + 0x68) & 1) != 0) goto LAB_0053eae0;
LAB_0053eb1c:
    bVar37 = 0;
    if ((*(byte *)(param_3 + 0x80) & 1) == 0) goto LAB_0053eb2c;
LAB_0053eaf4:
    bVar38 = *(byte *)(param_5 + 0x80) & 1;
  }
  uVar15 = *(ushort *)(param_1 + 0x9a);
  uVar16 = *(ushort *)(param_1 + 0x98);
  param_2[2] = *(long *)(param_1 + 0x48);
  param_2[3] = *(long *)(param_1 + 0x58);
  lVar40 = *(long *)(param_3 + 0x20);
  uVar39 = (ulong)*(ushort *)(param_1 + 0x98);
  param_2[7] = *(long *)(param_3 + 0x18);
  param_2[8] = lVar40;
  lVar40 = *(long *)(param_3 + 0x28);
  lVar10 = *(long *)(param_3 + 0x30);
  lVar28 = *(long *)(param_3 + 0x40);
  iVar33 = ((uint)uVar15 - (uint)uVar16) + 1;
  param_2[0xb] = *(long *)(param_3 + 0x38);
  param_2[0xc] = lVar28;
  bVar22 = (bool)(bVar20 & bVar21 & bVar22);
  param_2[9] = lVar40;
  param_2[10] = lVar10;
  lVar40 = *(long *)(param_3 + 0x48);
  lVar10 = *(long *)(param_3 + 0x50);
  lVar28 = *(long *)(param_3 + 0x60);
  param_2[0xf] = *(long *)(param_3 + 0x58);
  param_2[0x10] = lVar28;
  param_2[0xd] = lVar40;
  param_2[0xe] = lVar10;
  lVar28 = *(long *)(param_3 + 0x78);
  lVar40 = *(long *)(param_3 + 0x68);
  lVar10 = *(long *)(param_3 + 0x70);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x80);
  param_2[0x12] = lVar10;
  param_2[0x13] = lVar28;
  param_2[0x11] = lVar40;
  lVar40 = *(long *)(param_3 + 0x90);
  param_2[0x17] = *(long *)(param_3 + 0x98);
  param_2[0x16] = lVar40;
  lVar40 = *(long *)(param_3 + 0xa0);
  param_2[0x19] = *(long *)(param_3 + 0xa8);
  param_2[0x18] = lVar40;
  lVar40 = *(long *)(param_3 + 0xb0);
  param_2[0x1b] = *(long *)(param_3 + 0xb8);
  param_2[0x1a] = lVar40;
  lVar40 = *(long *)(param_3 + 0xc0);
  param_2[0x1d] = *(long *)(param_3 + 200);
  param_2[0x1c] = lVar40;
  lVar40 = *(long *)(param_3 + 0xd0);
  param_2[0x1f] = *(long *)(param_3 + 0xd8);
  param_2[0x1e] = lVar40;
  lVar40 = *(long *)(param_3 + 0xe0);
  param_2[0x21] = *(long *)(param_3 + 0xe8);
  param_2[0x20] = lVar40;
  lVar40 = *(long *)(param_3 + 0xf0);
  param_2[0x23] = *(long *)(param_3 + 0xf8);
  param_2[0x22] = lVar40;
  lVar40 = *(long *)(param_3 + 0x100);
  param_2[0x25] = *(long *)(param_3 + 0x108);
  param_2[0x24] = lVar40;
  *(undefined4 *)(param_2 + 0x26) = *(undefined4 *)(param_3 + 0x110);
  param_2[7] = *(long *)(param_3 + 0x18) + *(byte *)(param_3 + 0x24) * uVar39;
  param_2[0xc] = *(long *)(param_3 + 0x40) + *(byte *)(param_3 + 0x4c) * uVar39;
  param_2[0xf] = *(long *)(param_3 + 0x58) + *(byte *)(param_3 + 100) * uVar39;
  lVar40 = *(long *)(param_3 + 0x70);
  bVar11 = *(byte *)(param_3 + 0x7c);
  *(int *)(param_2 + 8) = iVar33;
  *(int *)(param_2 + 0xd) = iVar33;
  *(int *)(param_2 + 0x10) = iVar33;
  *(int *)(param_2 + 0x13) = iVar33;
  param_2[0x12] = lVar40 + bVar11 * uVar39;
  lVar40 = *(long *)(param_5 + 0x20);
  uVar39 = (ulong)*(ushort *)(param_1 + 0x98);
  param_2[0x2b] = *(long *)(param_5 + 0x18);
  param_2[0x2c] = lVar40;
  lVar40 = *(long *)(param_5 + 0x28);
  lVar10 = *(long *)(param_5 + 0x30);
  lVar28 = *(long *)(param_5 + 0x40);
  param_2[0x2f] = *(long *)(param_5 + 0x38);
  param_2[0x30] = lVar28;
  param_2[0x2d] = lVar40;
  param_2[0x2e] = lVar10;
  lVar40 = *(long *)(param_5 + 0x48);
  lVar10 = *(long *)(param_5 + 0x50);
  lVar28 = *(long *)(param_5 + 0x60);
  param_2[0x33] = *(long *)(param_5 + 0x58);
  param_2[0x34] = lVar28;
  param_2[0x31] = lVar40;
  param_2[0x32] = lVar10;
  lVar28 = *(long *)(param_5 + 0x78);
  lVar40 = *(long *)(param_5 + 0x68);
  lVar10 = *(long *)(param_5 + 0x70);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_5 + 0x80);
  param_2[0x36] = lVar10;
  param_2[0x37] = lVar28;
  param_2[0x35] = lVar40;
  lVar40 = *(long *)(param_5 + 0x90);
  param_2[0x3b] = *(long *)(param_5 + 0x98);
  param_2[0x3a] = lVar40;
  lVar40 = *(long *)(param_5 + 0xa0);
  param_2[0x3d] = *(long *)(param_5 + 0xa8);
  param_2[0x3c] = lVar40;
  lVar40 = *(long *)(param_5 + 0xb0);
  param_2[0x3f] = *(long *)(param_5 + 0xb8);
  param_2[0x3e] = lVar40;
  lVar40 = *(long *)(param_5 + 0xc0);
  param_2[0x41] = *(long *)(param_5 + 200);
  param_2[0x40] = lVar40;
  lVar40 = *(long *)(param_5 + 0xd0);
  param_2[0x43] = *(long *)(param_5 + 0xd8);
  param_2[0x42] = lVar40;
  lVar40 = *(long *)(param_5 + 0xe0);
  param_2[0x45] = *(long *)(param_5 + 0xe8);
  param_2[0x44] = lVar40;
  lVar40 = *(long *)(param_5 + 0xf0);
  param_2[0x47] = *(long *)(param_5 + 0xf8);
  param_2[0x46] = lVar40;
  lVar40 = *(long *)(param_5 + 0x100);
  param_2[0x49] = *(long *)(param_5 + 0x108);
  param_2[0x48] = lVar40;
  *(undefined4 *)(param_2 + 0x4a) = *(undefined4 *)(param_5 + 0x110);
  param_2[0x2b] = *(long *)(param_5 + 0x18) + *(byte *)(param_5 + 0x24) * uVar39;
  param_2[0x30] = *(long *)(param_5 + 0x40) + *(byte *)(param_5 + 0x4c) * uVar39;
  param_2[0x33] = *(long *)(param_5 + 0x58) + *(byte *)(param_5 + 100) * uVar39;
  lVar40 = *(long *)(param_5 + 0x70);
  bVar11 = *(byte *)(param_5 + 0x7c);
  *(int *)(param_2 + 0x2c) = iVar33;
  *(int *)(param_2 + 0x31) = iVar33;
  *(int *)(param_2 + 0x34) = iVar33;
  *(int *)(param_2 + 0x37) = iVar33;
  param_2[0x36] = lVar40 + bVar11 * uVar39;
  if ((bool)(bVar22 & bVar23)) {
    if ((bVar43 & bVar34) == 1) {
      if ((bVar37 & bVar38) == 1) {
        lVar40 = FUN_0043c4e0(DAT_04c6f410);
        if (lVar40 != 0) {
          FUN_00443a00(lVar40,"TtSkinBatch");
        }
        fVar19 = DAT_04102ed4;
        pbVar27 = (byte *)(param_2[2] + (ulong)*(ushort *)param_2[3] * 2);
        Hint_Prefetch(pbVar27,0,0,0);
        lVar40 = *param_2;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x40,0,0,0);
        Hint_Prefetch(lVar40 + 0x80,0,0,0);
        Hint_Prefetch(lVar40 + 0xc0,0,0,0);
        iVar33 = (int)param_2[8];
        if (iVar33 != 0) {
          bVar43 = *(byte *)((long)param_2 + 0x1bc);
          bVar34 = *(byte *)((long)param_2 + 0x9c);
          bVar37 = *(byte *)((long)param_2 + 0x1a4);
          bVar38 = *(byte *)((long)param_2 + 0x84);
          bVar11 = *(byte *)((long)param_2 + 0x18c);
          bVar12 = *(byte *)((long)param_2 + 0x6c);
          bVar13 = *(byte *)((long)param_2 + 0x164);
          bVar14 = *(byte *)((long)param_2 + 0x44);
          puVar32 = (ushort *)param_2[3] + 2;
          puVar25 = (undefined8 *)param_2[0x36];
          puVar26 = (undefined8 *)param_2[0x12];
          puVar29 = (undefined8 *)param_2[0x33];
          puVar30 = (undefined8 *)param_2[0xf];
          puVar31 = (undefined8 *)param_2[0x30];
          puVar42 = (undefined8 *)param_2[0xc];
          puVar44 = (undefined8 *)param_2[0x2b];
          puVar41 = (undefined8 *)param_2[7];
          do {
            lVar10 = (long)puVar41 + (ulong)bVar14 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            lVar28 = (long)puVar42 + (ulong)bVar12 * 4;
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar30 + (ulong)bVar38 * 4;
            Hint_Prefetch(lVar28,0,0,0);
            Hint_Prefetch(lVar28 + 0x40,0,0,0);
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar26 + (ulong)bVar34 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar44 + (ulong)bVar13 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar31 + (ulong)bVar11 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar29 + (ulong)bVar37 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar25 + (ulong)bVar43 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            uVar18 = (uint)puVar32[-1] - (uint)puVar32[-2];
            Hint_Prefetch(puVar32,0,0,0);
            pbVar35 = pbVar27;
            if ((uint)puVar32[-2] <= (uint)puVar32[-1] && uVar18 != 0) {
              Hint_Prefetch(pbVar27 + (ulong)(ushort)uVar18 * 2,0,0,0);
              switch(uVar18 & 0xffff) {
              case 1:
                pbVar35 = pbVar27 + 2;
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                uVar49 = puVar2[1];
                uVar48 = *puVar2;
                uVar65 = puVar2[3];
                uVar50 = puVar2[2];
                uVar72 = puVar2[5];
                uVar51 = puVar2[4];
                uVar73 = puVar2[7];
                uVar71 = puVar2[6];
                break;
              case 2:
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[1]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[3]);
                fVar47 = fVar47 * fVar19;
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                pbVar35 = pbVar27 + 4;
                fVar46 = fVar46 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar46,
                                  (float)*puVar2 * fVar47 + (float)*puVar3 * fVar46);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar46,
                                  (float)puVar2[1] * fVar47 + (float)puVar3[1] * fVar46);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar46,
                                  (float)puVar2[2] * fVar47 + (float)puVar3[2] * fVar46);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar46,
                                  (float)puVar2[3] * fVar47 + (float)puVar3[3] * fVar46);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar46,
                                  (float)puVar2[4] * fVar47 + (float)puVar3[4] * fVar46);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar46,
                                  (float)puVar2[5] * fVar47 + (float)puVar3[5] * fVar46);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar46,
                                  (float)puVar2[6] * fVar47 + (float)puVar3[6] * fVar46);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar46,
                                  (float)puVar2[7] * fVar47 + (float)puVar3[7] * fVar46);
                break;
              case 3:
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                pbVar35 = pbVar27 + 6;
                fVar46 = fVar46 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53,
                                  (float)*puVar2 * fVar47 + (float)*puVar3 * fVar46 +
                                  (float)*puVar4 * fVar53);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53,
                                  (float)puVar2[1] * fVar47 + (float)puVar3[1] * fVar46 +
                                  (float)puVar4[1] * fVar53);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53,
                                  (float)puVar2[2] * fVar47 + (float)puVar3[2] * fVar46 +
                                  (float)puVar4[2] * fVar53);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53,
                                  (float)puVar2[3] * fVar47 + (float)puVar3[3] * fVar46 +
                                  (float)puVar4[3] * fVar53);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53,
                                  (float)puVar2[4] * fVar47 + (float)puVar3[4] * fVar46 +
                                  (float)puVar4[4] * fVar53);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53,
                                  (float)puVar2[5] * fVar47 + (float)puVar3[5] * fVar46 +
                                  (float)puVar4[5] * fVar53);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53,
                                  (float)puVar2[6] * fVar47 + (float)puVar3[6] * fVar46 +
                                  (float)puVar4[6] * fVar53);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53,
                                  (float)puVar2[7] * fVar47 + (float)puVar3[7] * fVar46 +
                                  (float)puVar4[7] * fVar53);
                break;
              case 4:
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar46 = fVar46 * fVar19;
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                pbVar35 = pbVar27 + 8;
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                fVar56 = fVar56 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56,
                                  (float)*puVar2 * fVar47 + (float)*puVar3 * fVar46 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56,
                                  (float)puVar2[1] * fVar47 + (float)puVar3[1] * fVar46 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56,
                                  (float)puVar2[2] * fVar47 + (float)puVar3[2] * fVar46 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56,
                                  (float)puVar2[3] * fVar47 + (float)puVar3[3] * fVar46 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar56,
                                  (float)puVar2[4] * fVar47 + (float)puVar3[4] * fVar46 +
                                  (float)puVar4[4] * fVar53 + (float)puVar5[4] * fVar56);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar56,
                                  (float)puVar2[5] * fVar47 + (float)puVar3[5] * fVar46 +
                                  (float)puVar4[5] * fVar53 + (float)puVar5[5] * fVar56);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56,
                                  (float)puVar2[6] * fVar47 + (float)puVar3[6] * fVar46 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56,
                                  (float)puVar2[7] * fVar47 + (float)puVar3[7] * fVar46 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56);
                break;
              case 5:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                pfVar1 = (float *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                pbVar35 = pbVar27 + 10;
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                fVar56 = fVar56 * fVar19;
                fVar64 = fVar64 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 + pfVar1[1] * fVar64,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  *pfVar1 * fVar64);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  pfVar1[2] * fVar64);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar64);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 6) * fVar64);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + (float)puVar5[4] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar64);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + (float)puVar5[5] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 10) * fVar64);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x34) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + *(float *)(puVar5 + 6) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x3c) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + *(float *)(puVar5 + 7) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64);
                break;
              case 6:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
                fVar53 = fVar53 * fVar19;
                pbVar35 = pbVar27 + 0xc;
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                fVar56 = fVar56 * fVar19;
                fVar64 = fVar64 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
                fVar69 = fVar69 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar6 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar7 >> 0x20) * fVar69,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  (float)*puVar6 * fVar64 + (float)*puVar7 * fVar69);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[1] >> 0x20) * fVar69,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  (float)puVar6[1] * fVar64 + (float)puVar7[1] * fVar69);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[2] >> 0x20) * fVar69,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56 +
                                  (float)puVar6[2] * fVar64 + (float)puVar7[2] * fVar69);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[3] >> 0x20) * fVar69,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56 +
                                  (float)puVar6[3] * fVar64 + (float)puVar7[3] * fVar69);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x24) * fVar56 +
                                  (float)((ulong)puVar6[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[4] >> 0x20) * fVar69,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + *(float *)(puVar5 + 4) * fVar56 +
                                  (float)puVar6[4] * fVar64 + (float)puVar7[4] * fVar69);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x2c) * fVar56 +
                                  (float)((ulong)puVar6[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[5] >> 0x20) * fVar69,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + *(float *)(puVar5 + 5) * fVar56 +
                                  (float)puVar6[5] * fVar64 + (float)puVar7[5] * fVar69);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[6] >> 0x20) * fVar69,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56 +
                                  (float)puVar6[6] * fVar64 + (float)puVar7[6] * fVar69);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[7] >> 0x20) * fVar69,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56 +
                                  (float)puVar6[7] * fVar64 + (float)puVar7[7] * fVar69);
                break;
              case 7:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                fVar47 = fVar47 * fVar19;
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                fVar74 = (float)NEON_ucvtf((uint)pbVar27[0xd]);
                puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
                puVar8 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xc] * 0x40);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
                pbVar35 = pbVar27 + 0xe;
                fVar64 = fVar64 * fVar19;
                fVar69 = fVar69 * fVar19;
                fVar74 = fVar74 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar6 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar7 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar8 >> 0x20) * fVar74,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  (float)*puVar6 * fVar64 + (float)*puVar7 * fVar69 +
                                  (float)*puVar8 * fVar74);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[1] >> 0x20) * fVar74,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  (float)puVar6[1] * fVar64 + (float)puVar7[1] * fVar69 +
                                  (float)puVar8[1] * fVar74);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x14) * fVar56 +
                                  (float)((ulong)puVar6[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[2] >> 0x20) * fVar74,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + *(float *)(puVar5 + 2) * fVar56 +
                                  (float)puVar6[2] * fVar64 + (float)puVar7[2] * fVar69 +
                                  (float)puVar8[2] * fVar74);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x1c) * fVar56 +
                                  (float)((ulong)puVar6[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[3] >> 0x20) * fVar74,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + *(float *)(puVar5 + 3) * fVar56 +
                                  (float)puVar6[3] * fVar64 + (float)puVar7[3] * fVar69 +
                                  (float)puVar8[3] * fVar74);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[4] >> 0x20) * fVar74,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + (float)puVar5[4] * fVar56 +
                                  (float)puVar6[4] * fVar64 + (float)puVar7[4] * fVar69 +
                                  (float)puVar8[4] * fVar74);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[5] >> 0x20) * fVar74,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + (float)puVar5[5] * fVar56 +
                                  (float)puVar6[5] * fVar64 + (float)puVar7[5] * fVar69 +
                                  (float)puVar8[5] * fVar74);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[6] >> 0x20) * fVar74,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56 +
                                  (float)puVar6[6] * fVar64 + (float)puVar7[6] * fVar69 +
                                  (float)puVar8[6] * fVar74);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[7] >> 0x20) * fVar74,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56 +
                                  (float)puVar6[7] * fVar64 + (float)puVar7[7] * fVar69 +
                                  (float)puVar8[7] * fVar74);
                break;
              case 8:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                fVar47 = fVar47 * fVar19;
                fVar53 = fVar53 * fVar19;
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                puVar8 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xc] * 0x40);
                fVar56 = fVar56 * fVar19;
                puVar9 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xe] * 0x40);
                fVar64 = fVar64 * fVar19;
                fVar74 = (float)NEON_ucvtf((uint)pbVar27[0xd]);
                fVar76 = (float)NEON_ucvtf((uint)pbVar27[0xf]);
                fVar69 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
                fVar76 = fVar76 * fVar19;
                pbVar35 = pbVar27 + 0x10;
                fVar69 = fVar69 * fVar19;
                fVar74 = fVar74 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar6 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar7 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar8 >> 0x20) * fVar74 +
                                  (float)((ulong)*puVar9 >> 0x20) * fVar76,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  (float)*puVar6 * fVar64 + (float)*puVar7 * fVar69 +
                                  (float)*puVar8 * fVar74 + (float)*puVar9 * fVar76);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[1] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[1] >> 0x20) * fVar76,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  (float)puVar6[1] * fVar64 + (float)puVar7[1] * fVar69 +
                                  (float)puVar8[1] * fVar74 + (float)puVar9[1] * fVar76);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[2] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[2] >> 0x20) * fVar76,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56 +
                                  (float)puVar6[2] * fVar64 + (float)puVar7[2] * fVar69 +
                                  (float)puVar8[2] * fVar74 + (float)puVar9[2] * fVar76);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[3] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[3] >> 0x20) * fVar76,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56 +
                                  (float)puVar6[3] * fVar64 + (float)puVar7[3] * fVar69 +
                                  (float)puVar8[3] * fVar74 + (float)puVar9[3] * fVar76);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x24) * fVar56 +
                                  (float)((ulong)puVar6[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[4] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[4] >> 0x20) * fVar76,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + *(float *)(puVar5 + 4) * fVar56 +
                                  (float)puVar6[4] * fVar64 + (float)puVar7[4] * fVar69 +
                                  (float)puVar8[4] * fVar74 + (float)puVar9[4] * fVar76);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x2c) * fVar56 +
                                  (float)((ulong)puVar6[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[5] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[5] >> 0x20) * fVar76,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + *(float *)(puVar5 + 5) * fVar56 +
                                  (float)puVar6[5] * fVar64 + (float)puVar7[5] * fVar69 +
                                  (float)puVar8[5] * fVar74 + (float)puVar9[5] * fVar76);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[6] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[6] >> 0x20) * fVar76,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56 +
                                  (float)puVar6[6] * fVar64 + (float)puVar7[6] * fVar69 +
                                  (float)puVar8[6] * fVar74 + (float)puVar9[6] * fVar76);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[7] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[7] >> 0x20) * fVar76,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56 +
                                  (float)puVar6[7] * fVar64 + (float)puVar7[7] * fVar69 +
                                  (float)puVar8[7] * fVar74 + (float)puVar9[7] * fVar76);
                break;
              default:
                uVar71 = 0;
                uVar73 = 0;
                uVar49 = 0;
                uVar48 = 0;
                uVar65 = 0;
                uVar50 = 0;
                uVar72 = 0;
                uVar51 = 0;
              }
              fVar56 = (float)*puVar41;
              fVar74 = (float)uVar48;
              fVar76 = (float)((ulong)uVar48 >> 0x20);
              fVar70 = (float)uVar49;
              fVar75 = (float)((ulong)uVar49 >> 0x20);
              fVar64 = (float)((ulong)*puVar41 >> 0x20);
              fVar77 = (float)uVar50;
              fVar52 = (float)((ulong)uVar50 >> 0x20);
              fVar54 = (float)uVar65;
              fVar55 = (float)((ulong)uVar65 >> 0x20);
              fVar69 = (float)puVar41[1];
              fVar63 = (float)uVar51;
              fVar66 = (float)((ulong)uVar51 >> 0x20);
              fVar67 = (float)uVar72;
              fVar68 = (float)((ulong)uVar72 >> 0x20);
              fVar46 = (float)*puVar42;
              fVar47 = (float)((ulong)*puVar42 >> 0x20);
              fVar60 = (float)*puVar30;
              fVar61 = (float)((ulong)*puVar30 >> 0x20);
              fVar57 = (float)*puVar26;
              fVar58 = (float)((ulong)*puVar26 >> 0x20);
              fVar53 = (float)puVar42[1];
              fVar62 = (float)puVar30[1];
              fVar59 = (float)puVar26[1];
              puVar44[1] = CONCAT44(fVar68 * fVar69 +
                                    fVar55 * fVar64 +
                                    fVar75 * fVar56 + (float)((ulong)uVar73 >> 0x20),
                                    fVar67 * fVar69 +
                                    fVar54 * fVar64 + fVar70 * fVar56 + (float)uVar73);
              *puVar44 = CONCAT44(fVar66 * fVar69 +
                                  fVar52 * fVar64 + fVar76 * fVar56 + (float)((ulong)uVar71 >> 0x20)
                                  ,fVar63 * fVar69 +
                                   fVar77 * fVar64 + fVar74 * fVar56 + (float)uVar71);
              puVar31[1] = CONCAT44(fVar68 * fVar53 + fVar75 * fVar46 + fVar55 * fVar47,
                                    fVar67 * fVar53 + fVar70 * fVar46 + fVar54 * fVar47);
              *puVar31 = CONCAT44(fVar66 * fVar53 + fVar76 * fVar46 + fVar52 * fVar47,
                                  fVar63 * fVar53 + fVar74 * fVar46 + fVar77 * fVar47);
              puVar29[1] = CONCAT44(fVar68 * fVar62 + fVar75 * fVar60 + fVar55 * fVar61,
                                    fVar67 * fVar62 + fVar70 * fVar60 + fVar54 * fVar61);
              *puVar29 = CONCAT44(fVar66 * fVar62 + fVar76 * fVar60 + fVar52 * fVar61,
                                  fVar63 * fVar62 + fVar74 * fVar60 + fVar77 * fVar61);
              puVar25[1] = CONCAT44(fVar68 * fVar59 + fVar75 * fVar57 + fVar55 * fVar58,
                                    fVar67 * fVar59 + fVar70 * fVar57 + fVar54 * fVar58);
              *puVar25 = CONCAT44(fVar66 * fVar59 + fVar76 * fVar57 + fVar52 * fVar58,
                                  fVar63 * fVar59 + fVar74 * fVar57 + fVar77 * fVar58);
            }
            puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar14);
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar12);
            puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar38);
            puVar44 = (undefined8 *)((long)puVar44 + (ulong)bVar13);
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)bVar11);
            puVar29 = (undefined8 *)((long)puVar29 + (ulong)bVar37);
            puVar25 = (undefined8 *)((long)puVar25 + (ulong)bVar43);
            puVar32 = puVar32 + 1;
            iVar33 = iVar33 + -1;
            puVar26 = (undefined8 *)((long)puVar26 + (ulong)bVar34);
            pbVar27 = pbVar35;
          } while (iVar33 != 0);
        }
      }
      else if (((*(byte *)(param_3 + 0x68) & 1) == 0) || ((*(byte *)(param_3 + 0x80) & 1) == 0)) {
        lVar40 = FUN_0043c4e0(DAT_04c6f410);
        if (lVar40 != 0) {
          FUN_00443a00(lVar40,"TtSkinBatch");
        }
        fVar19 = DAT_04102ed4;
        pbVar27 = (byte *)(param_2[2] + (ulong)*(ushort *)param_2[3] * 2);
        Hint_Prefetch(pbVar27,0,0,0);
        lVar40 = *param_2;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x40,0,0,0);
        Hint_Prefetch(lVar40 + 0x80,0,0,0);
        Hint_Prefetch(lVar40 + 0xc0,0,0,0);
        iVar33 = (int)param_2[8];
        if (iVar33 != 0) {
          bVar43 = *(byte *)((long)param_2 + 0x1bc);
          bVar34 = *(byte *)((long)param_2 + 0x9c);
          bVar37 = *(byte *)((long)param_2 + 0x1a4);
          bVar38 = *(byte *)((long)param_2 + 0x84);
          bVar11 = *(byte *)((long)param_2 + 0x18c);
          bVar12 = *(byte *)((long)param_2 + 0x6c);
          bVar13 = *(byte *)((long)param_2 + 0x164);
          bVar14 = *(byte *)((long)param_2 + 0x44);
          puVar32 = (ushort *)param_2[3] + 2;
          puVar25 = (undefined8 *)param_2[0x36];
          puVar26 = (undefined8 *)param_2[0x12];
          puVar29 = (undefined8 *)param_2[0x33];
          puVar30 = (undefined8 *)param_2[0xf];
          puVar31 = (undefined8 *)param_2[0x30];
          puVar42 = (undefined8 *)param_2[0xc];
          puVar44 = (undefined8 *)param_2[0x2b];
          puVar41 = (undefined8 *)param_2[7];
          do {
            lVar10 = (long)puVar41 + (ulong)bVar14 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            lVar28 = (long)puVar42 + (ulong)bVar12 * 4;
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar30 + (ulong)bVar38 * 4;
            Hint_Prefetch(lVar28,0,0,0);
            Hint_Prefetch(lVar28 + 0x40,0,0,0);
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar26 + (ulong)bVar34 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar44 + (ulong)bVar13 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar31 + (ulong)bVar11 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar29 + (ulong)bVar37 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar25 + (ulong)bVar43 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            uVar18 = (uint)puVar32[-1] - (uint)puVar32[-2];
            Hint_Prefetch(puVar32,0,0,0);
            pbVar35 = pbVar27;
            if ((uint)puVar32[-2] <= (uint)puVar32[-1] && uVar18 != 0) {
              Hint_Prefetch(pbVar27 + (ulong)(ushort)uVar18 * 2,0,0,0);
              switch(uVar18 & 0xffff) {
              case 1:
                pbVar35 = pbVar27 + 2;
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                uVar49 = puVar2[1];
                uVar48 = *puVar2;
                uVar65 = puVar2[3];
                uVar50 = puVar2[2];
                uVar72 = puVar2[5];
                uVar51 = puVar2[4];
                uVar73 = puVar2[7];
                uVar71 = puVar2[6];
                break;
              case 2:
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[1]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[3]);
                fVar47 = fVar47 * fVar19;
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                pbVar35 = pbVar27 + 4;
                fVar46 = fVar46 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar46,
                                  (float)*puVar2 * fVar47 + (float)*puVar3 * fVar46);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar46,
                                  (float)puVar2[1] * fVar47 + (float)puVar3[1] * fVar46);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar46,
                                  (float)puVar2[2] * fVar47 + (float)puVar3[2] * fVar46);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar46,
                                  (float)puVar2[3] * fVar47 + (float)puVar3[3] * fVar46);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar46,
                                  (float)puVar2[4] * fVar47 + (float)puVar3[4] * fVar46);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar46,
                                  (float)puVar2[5] * fVar47 + (float)puVar3[5] * fVar46);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar46,
                                  (float)puVar2[6] * fVar47 + (float)puVar3[6] * fVar46);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar46,
                                  (float)puVar2[7] * fVar47 + (float)puVar3[7] * fVar46);
                break;
              case 3:
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                pbVar35 = pbVar27 + 6;
                fVar46 = fVar46 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53,
                                  (float)*puVar2 * fVar47 + (float)*puVar3 * fVar46 +
                                  (float)*puVar4 * fVar53);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53,
                                  (float)puVar2[1] * fVar47 + (float)puVar3[1] * fVar46 +
                                  (float)puVar4[1] * fVar53);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53,
                                  (float)puVar2[2] * fVar47 + (float)puVar3[2] * fVar46 +
                                  (float)puVar4[2] * fVar53);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53,
                                  (float)puVar2[3] * fVar47 + (float)puVar3[3] * fVar46 +
                                  (float)puVar4[3] * fVar53);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53,
                                  (float)puVar2[4] * fVar47 + (float)puVar3[4] * fVar46 +
                                  (float)puVar4[4] * fVar53);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53,
                                  (float)puVar2[5] * fVar47 + (float)puVar3[5] * fVar46 +
                                  (float)puVar4[5] * fVar53);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53,
                                  (float)puVar2[6] * fVar47 + (float)puVar3[6] * fVar46 +
                                  (float)puVar4[6] * fVar53);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53,
                                  (float)puVar2[7] * fVar47 + (float)puVar3[7] * fVar46 +
                                  (float)puVar4[7] * fVar53);
                break;
              case 4:
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar46 = fVar46 * fVar19;
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                pbVar35 = pbVar27 + 8;
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                fVar56 = fVar56 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56,
                                  (float)*puVar2 * fVar47 + (float)*puVar3 * fVar46 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56,
                                  (float)puVar2[1] * fVar47 + (float)puVar3[1] * fVar46 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56,
                                  (float)puVar2[2] * fVar47 + (float)puVar3[2] * fVar46 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56,
                                  (float)puVar2[3] * fVar47 + (float)puVar3[3] * fVar46 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar56,
                                  (float)puVar2[4] * fVar47 + (float)puVar3[4] * fVar46 +
                                  (float)puVar4[4] * fVar53 + (float)puVar5[4] * fVar56);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar56,
                                  (float)puVar2[5] * fVar47 + (float)puVar3[5] * fVar46 +
                                  (float)puVar4[5] * fVar53 + (float)puVar5[5] * fVar56);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56,
                                  (float)puVar2[6] * fVar47 + (float)puVar3[6] * fVar46 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56,
                                  (float)puVar2[7] * fVar47 + (float)puVar3[7] * fVar46 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56);
                break;
              case 5:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                pfVar1 = (float *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                pbVar35 = pbVar27 + 10;
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                fVar56 = fVar56 * fVar19;
                fVar64 = fVar64 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 + pfVar1[1] * fVar64,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  *pfVar1 * fVar64);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  pfVar1[2] * fVar64);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar64);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 6) * fVar64);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + (float)puVar5[4] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar64);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + (float)puVar5[5] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 10) * fVar64);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x34) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + *(float *)(puVar5 + 6) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x3c) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + *(float *)(puVar5 + 7) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64);
                break;
              case 6:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
                fVar53 = fVar53 * fVar19;
                pbVar35 = pbVar27 + 0xc;
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                fVar56 = fVar56 * fVar19;
                fVar64 = fVar64 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
                fVar69 = fVar69 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar6 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar7 >> 0x20) * fVar69,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  (float)*puVar6 * fVar64 + (float)*puVar7 * fVar69);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[1] >> 0x20) * fVar69,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  (float)puVar6[1] * fVar64 + (float)puVar7[1] * fVar69);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[2] >> 0x20) * fVar69,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56 +
                                  (float)puVar6[2] * fVar64 + (float)puVar7[2] * fVar69);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[3] >> 0x20) * fVar69,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56 +
                                  (float)puVar6[3] * fVar64 + (float)puVar7[3] * fVar69);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x24) * fVar56 +
                                  (float)((ulong)puVar6[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[4] >> 0x20) * fVar69,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + *(float *)(puVar5 + 4) * fVar56 +
                                  (float)puVar6[4] * fVar64 + (float)puVar7[4] * fVar69);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x2c) * fVar56 +
                                  (float)((ulong)puVar6[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[5] >> 0x20) * fVar69,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + *(float *)(puVar5 + 5) * fVar56 +
                                  (float)puVar6[5] * fVar64 + (float)puVar7[5] * fVar69);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[6] >> 0x20) * fVar69,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56 +
                                  (float)puVar6[6] * fVar64 + (float)puVar7[6] * fVar69);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[7] >> 0x20) * fVar69,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56 +
                                  (float)puVar6[7] * fVar64 + (float)puVar7[7] * fVar69);
                break;
              case 7:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                fVar47 = fVar47 * fVar19;
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                fVar74 = (float)NEON_ucvtf((uint)pbVar27[0xd]);
                puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
                puVar8 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xc] * 0x40);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
                pbVar35 = pbVar27 + 0xe;
                fVar64 = fVar64 * fVar19;
                fVar69 = fVar69 * fVar19;
                fVar74 = fVar74 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar6 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar7 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar8 >> 0x20) * fVar74,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  (float)*puVar6 * fVar64 + (float)*puVar7 * fVar69 +
                                  (float)*puVar8 * fVar74);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[1] >> 0x20) * fVar74,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  (float)puVar6[1] * fVar64 + (float)puVar7[1] * fVar69 +
                                  (float)puVar8[1] * fVar74);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x14) * fVar56 +
                                  (float)((ulong)puVar6[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[2] >> 0x20) * fVar74,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + *(float *)(puVar5 + 2) * fVar56 +
                                  (float)puVar6[2] * fVar64 + (float)puVar7[2] * fVar69 +
                                  (float)puVar8[2] * fVar74);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x1c) * fVar56 +
                                  (float)((ulong)puVar6[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[3] >> 0x20) * fVar74,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + *(float *)(puVar5 + 3) * fVar56 +
                                  (float)puVar6[3] * fVar64 + (float)puVar7[3] * fVar69 +
                                  (float)puVar8[3] * fVar74);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[4] >> 0x20) * fVar74,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + (float)puVar5[4] * fVar56 +
                                  (float)puVar6[4] * fVar64 + (float)puVar7[4] * fVar69 +
                                  (float)puVar8[4] * fVar74);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[5] >> 0x20) * fVar74,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + (float)puVar5[5] * fVar56 +
                                  (float)puVar6[5] * fVar64 + (float)puVar7[5] * fVar69 +
                                  (float)puVar8[5] * fVar74);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[6] >> 0x20) * fVar74,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56 +
                                  (float)puVar6[6] * fVar64 + (float)puVar7[6] * fVar69 +
                                  (float)puVar8[6] * fVar74);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[7] >> 0x20) * fVar74,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56 +
                                  (float)puVar6[7] * fVar64 + (float)puVar7[7] * fVar69 +
                                  (float)puVar8[7] * fVar74);
                break;
              case 8:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                fVar47 = fVar47 * fVar19;
                fVar53 = fVar53 * fVar19;
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                puVar8 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xc] * 0x40);
                fVar56 = fVar56 * fVar19;
                puVar9 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xe] * 0x40);
                fVar64 = fVar64 * fVar19;
                fVar74 = (float)NEON_ucvtf((uint)pbVar27[0xd]);
                fVar76 = (float)NEON_ucvtf((uint)pbVar27[0xf]);
                fVar69 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
                fVar76 = fVar76 * fVar19;
                pbVar35 = pbVar27 + 0x10;
                fVar69 = fVar69 * fVar19;
                fVar74 = fVar74 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar6 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar7 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar8 >> 0x20) * fVar74 +
                                  (float)((ulong)*puVar9 >> 0x20) * fVar76,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  (float)*puVar6 * fVar64 + (float)*puVar7 * fVar69 +
                                  (float)*puVar8 * fVar74 + (float)*puVar9 * fVar76);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[1] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[1] >> 0x20) * fVar76,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  (float)puVar6[1] * fVar64 + (float)puVar7[1] * fVar69 +
                                  (float)puVar8[1] * fVar74 + (float)puVar9[1] * fVar76);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[2] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[2] >> 0x20) * fVar76,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56 +
                                  (float)puVar6[2] * fVar64 + (float)puVar7[2] * fVar69 +
                                  (float)puVar8[2] * fVar74 + (float)puVar9[2] * fVar76);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[3] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[3] >> 0x20) * fVar76,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56 +
                                  (float)puVar6[3] * fVar64 + (float)puVar7[3] * fVar69 +
                                  (float)puVar8[3] * fVar74 + (float)puVar9[3] * fVar76);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x24) * fVar56 +
                                  (float)((ulong)puVar6[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[4] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[4] >> 0x20) * fVar76,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + *(float *)(puVar5 + 4) * fVar56 +
                                  (float)puVar6[4] * fVar64 + (float)puVar7[4] * fVar69 +
                                  (float)puVar8[4] * fVar74 + (float)puVar9[4] * fVar76);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x2c) * fVar56 +
                                  (float)((ulong)puVar6[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[5] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[5] >> 0x20) * fVar76,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + *(float *)(puVar5 + 5) * fVar56 +
                                  (float)puVar6[5] * fVar64 + (float)puVar7[5] * fVar69 +
                                  (float)puVar8[5] * fVar74 + (float)puVar9[5] * fVar76);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[6] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[6] >> 0x20) * fVar76,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56 +
                                  (float)puVar6[6] * fVar64 + (float)puVar7[6] * fVar69 +
                                  (float)puVar8[6] * fVar74 + (float)puVar9[6] * fVar76);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[7] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[7] >> 0x20) * fVar76,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56 +
                                  (float)puVar6[7] * fVar64 + (float)puVar7[7] * fVar69 +
                                  (float)puVar8[7] * fVar74 + (float)puVar9[7] * fVar76);
                break;
              default:
                uVar71 = 0;
                uVar73 = 0;
                uVar49 = 0;
                uVar48 = 0;
                uVar65 = 0;
                uVar50 = 0;
                uVar72 = 0;
                uVar51 = 0;
              }
              fVar56 = (float)*puVar41;
              fVar74 = (float)uVar48;
              fVar76 = (float)((ulong)uVar48 >> 0x20);
              fVar70 = (float)uVar49;
              fVar75 = (float)((ulong)uVar49 >> 0x20);
              fVar64 = (float)((ulong)*puVar41 >> 0x20);
              fVar77 = (float)uVar50;
              fVar52 = (float)((ulong)uVar50 >> 0x20);
              fVar54 = (float)uVar65;
              fVar55 = (float)((ulong)uVar65 >> 0x20);
              fVar69 = (float)puVar41[1];
              fVar63 = (float)uVar51;
              fVar66 = (float)((ulong)uVar51 >> 0x20);
              fVar67 = (float)uVar72;
              fVar68 = (float)((ulong)uVar72 >> 0x20);
              fVar46 = (float)*puVar42;
              fVar47 = (float)((ulong)*puVar42 >> 0x20);
              fVar60 = (float)*puVar30;
              fVar61 = (float)((ulong)*puVar30 >> 0x20);
              fVar57 = (float)*puVar26;
              fVar58 = (float)((ulong)*puVar26 >> 0x20);
              fVar53 = (float)puVar42[1];
              fVar62 = (float)puVar30[1];
              fVar59 = (float)puVar26[1];
              puVar44[1] = CONCAT44(fVar68 * fVar69 +
                                    fVar55 * fVar64 +
                                    fVar75 * fVar56 + (float)((ulong)uVar73 >> 0x20),
                                    fVar67 * fVar69 +
                                    fVar54 * fVar64 + fVar70 * fVar56 + (float)uVar73);
              *puVar44 = CONCAT44(fVar66 * fVar69 +
                                  fVar52 * fVar64 + fVar76 * fVar56 + (float)((ulong)uVar71 >> 0x20)
                                  ,fVar63 * fVar69 +
                                   fVar77 * fVar64 + fVar74 * fVar56 + (float)uVar71);
              puVar31[1] = CONCAT44(fVar68 * fVar53 + fVar75 * fVar46 + fVar55 * fVar47,
                                    fVar67 * fVar53 + fVar70 * fVar46 + fVar54 * fVar47);
              *puVar31 = CONCAT44(fVar66 * fVar53 + fVar76 * fVar46 + fVar52 * fVar47,
                                  fVar63 * fVar53 + fVar74 * fVar46 + fVar77 * fVar47);
              *puVar29 = CONCAT44(fVar66 * fVar62 + fVar76 * fVar60 + fVar52 * fVar61,
                                  fVar63 * fVar62 + fVar74 * fVar60 + fVar77 * fVar61);
              *(float *)(puVar29 + 1) = fVar67 * fVar62 + fVar70 * fVar60 + fVar54 * fVar61;
              *puVar25 = CONCAT44(fVar66 * fVar59 + fVar76 * fVar57 + fVar52 * fVar58,
                                  fVar63 * fVar59 + fVar74 * fVar57 + fVar77 * fVar58);
              *(float *)(puVar25 + 1) = fVar67 * fVar59 + fVar70 * fVar57 + fVar54 * fVar58;
            }
            puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar14);
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar12);
            puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar38);
            puVar44 = (undefined8 *)((long)puVar44 + (ulong)bVar13);
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)bVar11);
            puVar29 = (undefined8 *)((long)puVar29 + (ulong)bVar37);
            puVar25 = (undefined8 *)((long)puVar25 + (ulong)bVar43);
            puVar32 = puVar32 + 1;
            iVar33 = iVar33 + -1;
            puVar26 = (undefined8 *)((long)puVar26 + (ulong)bVar34);
            pbVar27 = pbVar35;
          } while (iVar33 != 0);
        }
      }
      else {
        lVar40 = FUN_0043c4e0(DAT_04c6f410);
        if (lVar40 != 0) {
          FUN_00443a00(lVar40,"TtSkinBatch");
        }
        fVar19 = DAT_04102ed4;
        pbVar27 = (byte *)(param_2[2] + (ulong)*(ushort *)param_2[3] * 2);
        Hint_Prefetch(pbVar27,0,0,0);
        lVar40 = *param_2;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x40,0,0,0);
        Hint_Prefetch(lVar40 + 0x80,0,0,0);
        Hint_Prefetch(lVar40 + 0xc0,0,0,0);
        iVar33 = (int)param_2[8];
        if (iVar33 != 0) {
          bVar43 = *(byte *)((long)param_2 + 0x1bc);
          bVar34 = *(byte *)((long)param_2 + 0x9c);
          bVar37 = *(byte *)((long)param_2 + 0x1a4);
          bVar38 = *(byte *)((long)param_2 + 0x84);
          bVar11 = *(byte *)((long)param_2 + 0x18c);
          bVar12 = *(byte *)((long)param_2 + 0x6c);
          bVar13 = *(byte *)((long)param_2 + 0x164);
          bVar14 = *(byte *)((long)param_2 + 0x44);
          puVar32 = (ushort *)param_2[3] + 2;
          puVar25 = (undefined8 *)param_2[0x36];
          puVar26 = (undefined8 *)param_2[0x12];
          puVar29 = (undefined8 *)param_2[0x33];
          puVar30 = (undefined8 *)param_2[0xf];
          puVar31 = (undefined8 *)param_2[0x30];
          puVar42 = (undefined8 *)param_2[0xc];
          puVar44 = (undefined8 *)param_2[0x2b];
          puVar41 = (undefined8 *)param_2[7];
          do {
            lVar10 = (long)puVar41 + (ulong)bVar14 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            lVar28 = (long)puVar42 + (ulong)bVar12 * 4;
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar30 + (ulong)bVar38 * 4;
            Hint_Prefetch(lVar28,0,0,0);
            Hint_Prefetch(lVar28 + 0x40,0,0,0);
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar26 + (ulong)bVar34 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar44 + (ulong)bVar13 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar31 + (ulong)bVar11 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar29 + (ulong)bVar37 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar25 + (ulong)bVar43 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            uVar18 = (uint)puVar32[-1] - (uint)puVar32[-2];
            Hint_Prefetch(puVar32,0,0,0);
            pbVar35 = pbVar27;
            if ((uint)puVar32[-2] <= (uint)puVar32[-1] && uVar18 != 0) {
              Hint_Prefetch(pbVar27 + (ulong)(ushort)uVar18 * 2,0,0,0);
              switch(uVar18 & 0xffff) {
              case 1:
                pbVar35 = pbVar27 + 2;
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                uVar49 = puVar2[1];
                uVar48 = *puVar2;
                uVar65 = puVar2[3];
                uVar50 = puVar2[2];
                uVar72 = puVar2[5];
                uVar51 = puVar2[4];
                uVar73 = puVar2[7];
                uVar71 = puVar2[6];
                break;
              case 2:
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[1]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[3]);
                fVar47 = fVar47 * fVar19;
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                pbVar35 = pbVar27 + 4;
                fVar46 = fVar46 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar46,
                                  (float)*puVar2 * fVar47 + (float)*puVar3 * fVar46);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar46,
                                  (float)puVar2[1] * fVar47 + (float)puVar3[1] * fVar46);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar46,
                                  (float)puVar2[2] * fVar47 + (float)puVar3[2] * fVar46);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar46,
                                  (float)puVar2[3] * fVar47 + (float)puVar3[3] * fVar46);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar46,
                                  (float)puVar2[4] * fVar47 + (float)puVar3[4] * fVar46);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar46,
                                  (float)puVar2[5] * fVar47 + (float)puVar3[5] * fVar46);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar46,
                                  (float)puVar2[6] * fVar47 + (float)puVar3[6] * fVar46);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar46,
                                  (float)puVar2[7] * fVar47 + (float)puVar3[7] * fVar46);
                break;
              case 3:
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                pbVar35 = pbVar27 + 6;
                fVar46 = fVar46 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53,
                                  (float)*puVar2 * fVar47 + (float)*puVar3 * fVar46 +
                                  (float)*puVar4 * fVar53);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53,
                                  (float)puVar2[1] * fVar47 + (float)puVar3[1] * fVar46 +
                                  (float)puVar4[1] * fVar53);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53,
                                  (float)puVar2[2] * fVar47 + (float)puVar3[2] * fVar46 +
                                  (float)puVar4[2] * fVar53);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53,
                                  (float)puVar2[3] * fVar47 + (float)puVar3[3] * fVar46 +
                                  (float)puVar4[3] * fVar53);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53,
                                  (float)puVar2[4] * fVar47 + (float)puVar3[4] * fVar46 +
                                  (float)puVar4[4] * fVar53);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53,
                                  (float)puVar2[5] * fVar47 + (float)puVar3[5] * fVar46 +
                                  (float)puVar4[5] * fVar53);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53,
                                  (float)puVar2[6] * fVar47 + (float)puVar3[6] * fVar46 +
                                  (float)puVar4[6] * fVar53);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53,
                                  (float)puVar2[7] * fVar47 + (float)puVar3[7] * fVar46 +
                                  (float)puVar4[7] * fVar53);
                break;
              case 4:
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar46 = fVar46 * fVar19;
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                pbVar35 = pbVar27 + 8;
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                fVar56 = fVar56 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56,
                                  (float)*puVar2 * fVar47 + (float)*puVar3 * fVar46 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56,
                                  (float)puVar2[1] * fVar47 + (float)puVar3[1] * fVar46 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56,
                                  (float)puVar2[2] * fVar47 + (float)puVar3[2] * fVar46 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56,
                                  (float)puVar2[3] * fVar47 + (float)puVar3[3] * fVar46 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar56,
                                  (float)puVar2[4] * fVar47 + (float)puVar3[4] * fVar46 +
                                  (float)puVar4[4] * fVar53 + (float)puVar5[4] * fVar56);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar56,
                                  (float)puVar2[5] * fVar47 + (float)puVar3[5] * fVar46 +
                                  (float)puVar4[5] * fVar53 + (float)puVar5[5] * fVar56);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56,
                                  (float)puVar2[6] * fVar47 + (float)puVar3[6] * fVar46 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56,
                                  (float)puVar2[7] * fVar47 + (float)puVar3[7] * fVar46 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56);
                break;
              case 5:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                pfVar1 = (float *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                pbVar35 = pbVar27 + 10;
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                fVar56 = fVar56 * fVar19;
                fVar64 = fVar64 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 + pfVar1[1] * fVar64,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  *pfVar1 * fVar64);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  pfVar1[2] * fVar64);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar64);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 6) * fVar64);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + (float)puVar5[4] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar64);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + (float)puVar5[5] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 10) * fVar64);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x34) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + *(float *)(puVar5 + 6) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x3c) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + *(float *)(puVar5 + 7) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64);
                break;
              case 6:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
                fVar53 = fVar53 * fVar19;
                pbVar35 = pbVar27 + 0xc;
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                fVar56 = fVar56 * fVar19;
                fVar64 = fVar64 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
                fVar69 = fVar69 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar6 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar7 >> 0x20) * fVar69,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  (float)*puVar6 * fVar64 + (float)*puVar7 * fVar69);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[1] >> 0x20) * fVar69,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  (float)puVar6[1] * fVar64 + (float)puVar7[1] * fVar69);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[2] >> 0x20) * fVar69,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56 +
                                  (float)puVar6[2] * fVar64 + (float)puVar7[2] * fVar69);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[3] >> 0x20) * fVar69,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56 +
                                  (float)puVar6[3] * fVar64 + (float)puVar7[3] * fVar69);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x24) * fVar56 +
                                  (float)((ulong)puVar6[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[4] >> 0x20) * fVar69,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + *(float *)(puVar5 + 4) * fVar56 +
                                  (float)puVar6[4] * fVar64 + (float)puVar7[4] * fVar69);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x2c) * fVar56 +
                                  (float)((ulong)puVar6[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[5] >> 0x20) * fVar69,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + *(float *)(puVar5 + 5) * fVar56 +
                                  (float)puVar6[5] * fVar64 + (float)puVar7[5] * fVar69);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[6] >> 0x20) * fVar69,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56 +
                                  (float)puVar6[6] * fVar64 + (float)puVar7[6] * fVar69);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[7] >> 0x20) * fVar69,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56 +
                                  (float)puVar6[7] * fVar64 + (float)puVar7[7] * fVar69);
                break;
              case 7:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                fVar47 = fVar47 * fVar19;
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                fVar74 = (float)NEON_ucvtf((uint)pbVar27[0xd]);
                puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
                puVar8 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xc] * 0x40);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
                pbVar35 = pbVar27 + 0xe;
                fVar64 = fVar64 * fVar19;
                fVar69 = fVar69 * fVar19;
                fVar74 = fVar74 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar6 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar7 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar8 >> 0x20) * fVar74,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  (float)*puVar6 * fVar64 + (float)*puVar7 * fVar69 +
                                  (float)*puVar8 * fVar74);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[1] >> 0x20) * fVar74,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  (float)puVar6[1] * fVar64 + (float)puVar7[1] * fVar69 +
                                  (float)puVar8[1] * fVar74);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x14) * fVar56 +
                                  (float)((ulong)puVar6[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[2] >> 0x20) * fVar74,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + *(float *)(puVar5 + 2) * fVar56 +
                                  (float)puVar6[2] * fVar64 + (float)puVar7[2] * fVar69 +
                                  (float)puVar8[2] * fVar74);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x1c) * fVar56 +
                                  (float)((ulong)puVar6[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[3] >> 0x20) * fVar74,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + *(float *)(puVar5 + 3) * fVar56 +
                                  (float)puVar6[3] * fVar64 + (float)puVar7[3] * fVar69 +
                                  (float)puVar8[3] * fVar74);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[4] >> 0x20) * fVar74,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + (float)puVar5[4] * fVar56 +
                                  (float)puVar6[4] * fVar64 + (float)puVar7[4] * fVar69 +
                                  (float)puVar8[4] * fVar74);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[5] >> 0x20) * fVar74,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + (float)puVar5[5] * fVar56 +
                                  (float)puVar6[5] * fVar64 + (float)puVar7[5] * fVar69 +
                                  (float)puVar8[5] * fVar74);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[6] >> 0x20) * fVar74,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56 +
                                  (float)puVar6[6] * fVar64 + (float)puVar7[6] * fVar69 +
                                  (float)puVar8[6] * fVar74);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[7] >> 0x20) * fVar74,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56 +
                                  (float)puVar6[7] * fVar64 + (float)puVar7[7] * fVar69 +
                                  (float)puVar8[7] * fVar74);
                break;
              case 8:
                fVar46 = (float)NEON_ucvtf((uint)pbVar27[1]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar47 = (float)NEON_ucvtf((uint)pbVar27[3]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
                fVar53 = (float)NEON_ucvtf((uint)pbVar27[5]);
                fVar47 = fVar47 * fVar19;
                fVar53 = fVar53 * fVar19;
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
                puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar27[7]);
                puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
                fVar64 = (float)NEON_ucvtf((uint)pbVar27[9]);
                puVar8 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xc] * 0x40);
                fVar56 = fVar56 * fVar19;
                puVar9 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xe] * 0x40);
                fVar64 = fVar64 * fVar19;
                fVar74 = (float)NEON_ucvtf((uint)pbVar27[0xd]);
                fVar76 = (float)NEON_ucvtf((uint)pbVar27[0xf]);
                fVar69 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
                fVar76 = fVar76 * fVar19;
                pbVar35 = pbVar27 + 0x10;
                fVar69 = fVar69 * fVar19;
                fVar74 = fVar74 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar6 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar7 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar8 >> 0x20) * fVar74 +
                                  (float)((ulong)*puVar9 >> 0x20) * fVar76,
                                  (float)*puVar2 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar4 * fVar53 + (float)*puVar5 * fVar56 +
                                  (float)*puVar6 * fVar64 + (float)*puVar7 * fVar69 +
                                  (float)*puVar8 * fVar74 + (float)*puVar9 * fVar76);
                uVar49 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[1] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[1] >> 0x20) * fVar76,
                                  (float)puVar2[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar4[1] * fVar53 + (float)puVar5[1] * fVar56 +
                                  (float)puVar6[1] * fVar64 + (float)puVar7[1] * fVar69 +
                                  (float)puVar8[1] * fVar74 + (float)puVar9[1] * fVar76);
                uVar50 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[2] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[2] >> 0x20) * fVar76,
                                  (float)puVar2[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar4[2] * fVar53 + (float)puVar5[2] * fVar56 +
                                  (float)puVar6[2] * fVar64 + (float)puVar7[2] * fVar69 +
                                  (float)puVar8[2] * fVar74 + (float)puVar9[2] * fVar76);
                uVar65 = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[3] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[3] >> 0x20) * fVar76,
                                  (float)puVar2[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar4[3] * fVar53 + (float)puVar5[3] * fVar56 +
                                  (float)puVar6[3] * fVar64 + (float)puVar7[3] * fVar69 +
                                  (float)puVar8[3] * fVar74 + (float)puVar9[3] * fVar76);
                uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x24) * fVar56 +
                                  (float)((ulong)puVar6[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[4] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[4] >> 0x20) * fVar76,
                                  (float)puVar2[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar4[4] * fVar53 + *(float *)(puVar5 + 4) * fVar56 +
                                  (float)puVar6[4] * fVar64 + (float)puVar7[4] * fVar69 +
                                  (float)puVar8[4] * fVar74 + (float)puVar9[4] * fVar76);
                uVar72 = CONCAT44((float)((ulong)puVar2[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar5 + 0x2c) * fVar56 +
                                  (float)((ulong)puVar6[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[5] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[5] >> 0x20) * fVar76,
                                  (float)puVar2[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar4[5] * fVar53 + *(float *)(puVar5 + 5) * fVar56 +
                                  (float)puVar6[5] * fVar64 + (float)puVar7[5] * fVar69 +
                                  (float)puVar8[5] * fVar74 + (float)puVar9[5] * fVar76);
                uVar71 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[6] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[6] >> 0x20) * fVar76,
                                  (float)puVar2[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar4[6] * fVar53 + (float)puVar5[6] * fVar56 +
                                  (float)puVar6[6] * fVar64 + (float)puVar7[6] * fVar69 +
                                  (float)puVar8[6] * fVar74 + (float)puVar9[6] * fVar76);
                uVar73 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar6[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar7[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar8[7] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar9[7] >> 0x20) * fVar76,
                                  (float)puVar2[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar4[7] * fVar53 + (float)puVar5[7] * fVar56 +
                                  (float)puVar6[7] * fVar64 + (float)puVar7[7] * fVar69 +
                                  (float)puVar8[7] * fVar74 + (float)puVar9[7] * fVar76);
                break;
              default:
                uVar71 = 0;
                uVar73 = 0;
                uVar49 = 0;
                uVar48 = 0;
                uVar65 = 0;
                uVar50 = 0;
                uVar72 = 0;
                uVar51 = 0;
              }
              fVar56 = (float)*puVar41;
              fVar74 = (float)uVar48;
              fVar76 = (float)((ulong)uVar48 >> 0x20);
              fVar70 = (float)uVar49;
              fVar75 = (float)((ulong)uVar49 >> 0x20);
              fVar64 = (float)((ulong)*puVar41 >> 0x20);
              fVar77 = (float)uVar50;
              fVar52 = (float)((ulong)uVar50 >> 0x20);
              fVar54 = (float)uVar65;
              fVar55 = (float)((ulong)uVar65 >> 0x20);
              fVar69 = (float)puVar41[1];
              fVar63 = (float)uVar51;
              fVar66 = (float)((ulong)uVar51 >> 0x20);
              fVar67 = (float)uVar72;
              fVar68 = (float)((ulong)uVar72 >> 0x20);
              fVar46 = (float)*puVar42;
              fVar47 = (float)((ulong)*puVar42 >> 0x20);
              fVar60 = (float)*puVar30;
              fVar61 = (float)((ulong)*puVar30 >> 0x20);
              fVar57 = (float)*puVar26;
              fVar58 = (float)((ulong)*puVar26 >> 0x20);
              fVar53 = (float)puVar42[1];
              fVar62 = (float)puVar30[1];
              fVar59 = (float)puVar26[1];
              puVar44[1] = CONCAT44(fVar68 * fVar69 +
                                    fVar55 * fVar64 +
                                    fVar75 * fVar56 + (float)((ulong)uVar73 >> 0x20),
                                    fVar67 * fVar69 +
                                    fVar54 * fVar64 + fVar70 * fVar56 + (float)uVar73);
              *puVar44 = CONCAT44(fVar66 * fVar69 +
                                  fVar52 * fVar64 + fVar76 * fVar56 + (float)((ulong)uVar71 >> 0x20)
                                  ,fVar63 * fVar69 +
                                   fVar77 * fVar64 + fVar74 * fVar56 + (float)uVar71);
              puVar31[1] = CONCAT44(fVar68 * fVar53 + fVar75 * fVar46 + fVar55 * fVar47,
                                    fVar67 * fVar53 + fVar70 * fVar46 + fVar54 * fVar47);
              *puVar31 = CONCAT44(fVar66 * fVar53 + fVar76 * fVar46 + fVar52 * fVar47,
                                  fVar63 * fVar53 + fVar74 * fVar46 + fVar77 * fVar47);
              *puVar29 = CONCAT44(fVar66 * fVar62 + fVar76 * fVar60 + fVar52 * fVar61,
                                  fVar63 * fVar62 + fVar74 * fVar60 + fVar77 * fVar61);
              *(float *)(puVar29 + 1) = fVar67 * fVar62 + fVar70 * fVar60 + fVar54 * fVar61;
              *puVar25 = CONCAT44(fVar66 * fVar59 + fVar76 * fVar57 + fVar52 * fVar58,
                                  fVar63 * fVar59 + fVar74 * fVar57 + fVar77 * fVar58);
              *(float *)(puVar25 + 1) = fVar67 * fVar59 + fVar70 * fVar57 + fVar54 * fVar58;
            }
            puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar14);
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar12);
            puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar38);
            puVar44 = (undefined8 *)((long)puVar44 + (ulong)bVar13);
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)bVar11);
            puVar29 = (undefined8 *)((long)puVar29 + (ulong)bVar37);
            puVar25 = (undefined8 *)((long)puVar25 + (ulong)bVar43);
            puVar32 = puVar32 + 1;
            iVar33 = iVar33 + -1;
            puVar26 = (undefined8 *)((long)puVar26 + (ulong)bVar34);
            pbVar27 = pbVar35;
          } while (iVar33 != 0);
        }
      }
    }
    else {
      lVar40 = FUN_0043c4e0(DAT_04c6f410);
      if (lVar40 != 0) {
        FUN_00443a00(lVar40,"TtSkinBatch");
      }
      fVar19 = DAT_04102ed4;
      pbVar27 = (byte *)(param_2[2] + (ulong)*(ushort *)param_2[3] * 2);
      Hint_Prefetch(pbVar27,0,0,0);
      lVar40 = *param_2;
      Hint_Prefetch(lVar40,0,0,0);
      Hint_Prefetch(lVar40 + 0x40,0,0,0);
      Hint_Prefetch(lVar40 + 0x80,0,0,0);
      Hint_Prefetch(lVar40 + 0xc0,0,0,0);
      iVar33 = (int)param_2[8];
      if (iVar33 != 0) {
        bVar43 = *(byte *)((long)param_2 + 0x1bc);
        bVar34 = *(byte *)((long)param_2 + 0x9c);
        bVar37 = *(byte *)((long)param_2 + 0x1a4);
        bVar38 = *(byte *)((long)param_2 + 0x84);
        bVar11 = *(byte *)((long)param_2 + 0x18c);
        bVar12 = *(byte *)((long)param_2 + 0x6c);
        bVar13 = *(byte *)((long)param_2 + 0x164);
        bVar14 = *(byte *)((long)param_2 + 0x44);
        puVar32 = (ushort *)param_2[3] + 2;
        puVar25 = (undefined8 *)param_2[0x36];
        puVar26 = (undefined8 *)param_2[0x12];
        puVar29 = (undefined8 *)param_2[0x33];
        puVar30 = (undefined8 *)param_2[0xf];
        puVar31 = (undefined8 *)param_2[0x30];
        puVar42 = (undefined8 *)param_2[0xc];
        puVar44 = (undefined8 *)param_2[0x2b];
        puVar41 = (undefined8 *)param_2[7];
        do {
          lVar10 = (long)puVar41 + (ulong)bVar14 * 4;
          Hint_Prefetch(lVar10,0,0,0);
          lVar28 = (long)puVar42 + (ulong)bVar12 * 4;
          Hint_Prefetch(lVar10 + 0x40,0,0,0);
          lVar10 = (long)puVar30 + (ulong)bVar38 * 4;
          Hint_Prefetch(lVar28,0,0,0);
          Hint_Prefetch(lVar28 + 0x40,0,0,0);
          Hint_Prefetch(lVar10,0,0,0);
          Hint_Prefetch(lVar10 + 0x40,0,0,0);
          lVar10 = (long)puVar26 + (ulong)bVar34 * 4;
          Hint_Prefetch(lVar10,0,0,0);
          Hint_Prefetch(lVar10 + 0x40,0,0,0);
          lVar10 = (long)puVar44 + (ulong)bVar13 * 4;
          Hint_Prefetch(lVar10,0,0,0);
          Hint_Prefetch(lVar10 + 0x40,0,0,0);
          lVar10 = (long)puVar31 + (ulong)bVar11 * 4;
          Hint_Prefetch(lVar10,0,0,0);
          Hint_Prefetch(lVar10 + 0x40,0,0,0);
          lVar10 = (long)puVar29 + (ulong)bVar37 * 4;
          Hint_Prefetch(lVar10,0,0,0);
          Hint_Prefetch(lVar10 + 0x40,0,0,0);
          lVar10 = (long)puVar25 + (ulong)bVar43 * 4;
          Hint_Prefetch(lVar10,0,0,0);
          Hint_Prefetch(lVar10 + 0x40,0,0,0);
          uVar18 = (uint)puVar32[-1] - (uint)puVar32[-2];
          Hint_Prefetch(puVar32,0,0,0);
          pbVar35 = pbVar27;
          if ((uint)puVar32[-2] <= (uint)puVar32[-1] && uVar18 != 0) {
            Hint_Prefetch(pbVar27 + (ulong)(ushort)uVar18 * 2,0,0,0);
            uVar49 = puVar30[1];
            uVar48 = puVar26[1];
            switch(uVar18 & 0xffff) {
            case 1:
              pbVar35 = pbVar27 + 2;
              puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
              fVar46 = (float)puVar2[1];
              uVar50 = *puVar2;
              fVar47 = (float)puVar2[3];
              uVar65 = puVar2[2];
              fVar53 = (float)puVar2[5];
              uVar51 = puVar2[4];
              fVar56 = (float)puVar2[7];
              uVar72 = puVar2[6];
              break;
            case 2:
              fVar64 = (float)NEON_ucvtf((uint)pbVar27[1]);
              puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
              fVar56 = (float)NEON_ucvtf((uint)pbVar27[3]);
              fVar64 = fVar64 * fVar19;
              puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
              pbVar35 = pbVar27 + 4;
              fVar56 = fVar56 * fVar19;
              uVar50 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar64 +
                                (float)((ulong)*puVar3 >> 0x20) * fVar56,
                                (float)*puVar2 * fVar64 + (float)*puVar3 * fVar56);
              fVar46 = (float)puVar2[1] * fVar64 + (float)puVar3[1] * fVar56;
              uVar65 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar64 +
                                (float)((ulong)puVar3[2] >> 0x20) * fVar56,
                                (float)puVar2[2] * fVar64 + (float)puVar3[2] * fVar56);
              fVar47 = (float)puVar2[3] * fVar64 + (float)puVar3[3] * fVar56;
              uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar64 +
                                (float)((ulong)puVar3[4] >> 0x20) * fVar56,
                                (float)puVar2[4] * fVar64 + (float)puVar3[4] * fVar56);
              fVar53 = (float)puVar2[5] * fVar64 + (float)puVar3[5] * fVar56;
              uVar72 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar64 +
                                (float)((ulong)puVar3[6] >> 0x20) * fVar56,
                                (float)puVar2[6] * fVar64 + (float)puVar3[6] * fVar56);
              fVar56 = (float)puVar2[7] * fVar64 + (float)puVar3[7] * fVar56;
              break;
            case 3:
              fVar64 = (float)NEON_ucvtf((uint)pbVar27[1]);
              fVar56 = (float)NEON_ucvtf((uint)pbVar27[3]);
              puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
              fVar64 = fVar64 * fVar19;
              fVar69 = (float)NEON_ucvtf((uint)pbVar27[5]);
              puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
              puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
              pbVar35 = pbVar27 + 6;
              fVar56 = fVar56 * fVar19;
              fVar69 = fVar69 * fVar19;
              uVar50 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar64 +
                                (float)((ulong)*puVar3 >> 0x20) * fVar56 +
                                (float)((ulong)*puVar4 >> 0x20) * fVar69,
                                (float)*puVar2 * fVar64 + (float)*puVar3 * fVar56 +
                                (float)*puVar4 * fVar69);
              fVar46 = (float)puVar2[1] * fVar64 + (float)puVar3[1] * fVar56 +
                       (float)puVar4[1] * fVar69;
              uVar65 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar64 +
                                (float)((ulong)puVar3[2] >> 0x20) * fVar56 +
                                (float)((ulong)puVar4[2] >> 0x20) * fVar69,
                                (float)puVar2[2] * fVar64 + (float)puVar3[2] * fVar56 +
                                (float)puVar4[2] * fVar69);
              fVar47 = (float)puVar2[3] * fVar64 + (float)puVar3[3] * fVar56 +
                       (float)puVar4[3] * fVar69;
              uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar64 +
                                (float)((ulong)puVar3[4] >> 0x20) * fVar56 +
                                (float)((ulong)puVar4[4] >> 0x20) * fVar69,
                                (float)puVar2[4] * fVar64 + (float)puVar3[4] * fVar56 +
                                (float)puVar4[4] * fVar69);
              fVar53 = (float)puVar2[5] * fVar64 + (float)puVar3[5] * fVar56 +
                       (float)puVar4[5] * fVar69;
              uVar72 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar64 +
                                (float)((ulong)puVar3[6] >> 0x20) * fVar56 +
                                (float)((ulong)puVar4[6] >> 0x20) * fVar69,
                                (float)puVar2[6] * fVar64 + (float)puVar3[6] * fVar56 +
                                (float)puVar4[6] * fVar69);
              fVar56 = (float)puVar2[7] * fVar64 + (float)puVar3[7] * fVar56 +
                       (float)puVar4[7] * fVar69;
              break;
            case 4:
              puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
              fVar64 = (float)NEON_ucvtf((uint)pbVar27[1]);
              fVar56 = (float)NEON_ucvtf((uint)pbVar27[3]);
              puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
              fVar64 = fVar64 * fVar19;
              fVar56 = fVar56 * fVar19;
              puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
              fVar69 = (float)NEON_ucvtf((uint)pbVar27[5]);
              puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
              pbVar35 = pbVar27 + 8;
              fVar74 = (float)NEON_ucvtf((uint)pbVar27[7]);
              fVar74 = fVar74 * fVar19;
              fVar69 = fVar69 * fVar19;
              uVar50 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar64 +
                                (float)((ulong)*puVar3 >> 0x20) * fVar56 +
                                (float)((ulong)*puVar4 >> 0x20) * fVar69 +
                                (float)((ulong)*puVar5 >> 0x20) * fVar74,
                                (float)*puVar2 * fVar64 + (float)*puVar3 * fVar56 +
                                (float)*puVar4 * fVar69 + (float)*puVar5 * fVar74);
              fVar46 = (float)puVar2[1] * fVar64 + (float)puVar3[1] * fVar56 +
                       (float)puVar4[1] * fVar69 + (float)puVar5[1] * fVar74;
              uVar65 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar64 +
                                (float)((ulong)puVar3[2] >> 0x20) * fVar56 +
                                (float)((ulong)puVar4[2] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[2] >> 0x20) * fVar74,
                                (float)puVar2[2] * fVar64 + (float)puVar3[2] * fVar56 +
                                (float)puVar4[2] * fVar69 + (float)puVar5[2] * fVar74);
              fVar47 = (float)puVar2[3] * fVar64 + (float)puVar3[3] * fVar56 +
                       (float)puVar4[3] * fVar69 + (float)puVar5[3] * fVar74;
              uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar64 +
                                (float)((ulong)puVar3[4] >> 0x20) * fVar56 +
                                (float)((ulong)puVar4[4] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[4] >> 0x20) * fVar74,
                                (float)puVar2[4] * fVar64 + (float)puVar3[4] * fVar56 +
                                (float)puVar4[4] * fVar69 + (float)puVar5[4] * fVar74);
              fVar53 = (float)puVar2[5] * fVar64 + (float)puVar3[5] * fVar56 +
                       (float)puVar4[5] * fVar69 + (float)puVar5[5] * fVar74;
              uVar72 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar64 +
                                (float)((ulong)puVar3[6] >> 0x20) * fVar56 +
                                (float)((ulong)puVar4[6] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[6] >> 0x20) * fVar74,
                                (float)puVar2[6] * fVar64 + (float)puVar3[6] * fVar56 +
                                (float)puVar4[6] * fVar69 + (float)puVar5[6] * fVar74);
              fVar56 = (float)puVar2[7] * fVar64 + (float)puVar3[7] * fVar56 +
                       (float)puVar4[7] * fVar69 + (float)puVar5[7] * fVar74;
              break;
            case 5:
              fVar56 = (float)NEON_ucvtf((uint)pbVar27[1]);
              fVar64 = (float)NEON_ucvtf((uint)pbVar27[3]);
              puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
              fVar56 = fVar56 * fVar19;
              fVar69 = (float)NEON_ucvtf((uint)pbVar27[5]);
              puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
              puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
              puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
              fVar64 = fVar64 * fVar19;
              pfVar1 = (float *)(lVar40 + (ulong)pbVar27[8] * 0x40);
              fVar74 = (float)NEON_ucvtf((uint)pbVar27[7]);
              pbVar35 = pbVar27 + 10;
              fVar69 = fVar69 * fVar19;
              fVar76 = (float)NEON_ucvtf((uint)pbVar27[9]);
              fVar74 = fVar74 * fVar19;
              fVar76 = fVar76 * fVar19;
              uVar50 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar56 +
                                (float)((ulong)*puVar3 >> 0x20) * fVar64 +
                                (float)((ulong)*puVar4 >> 0x20) * fVar69 +
                                (float)((ulong)*puVar5 >> 0x20) * fVar74 + pfVar1[1] * fVar76,
                                (float)*puVar2 * fVar56 + (float)*puVar3 * fVar64 +
                                (float)*puVar4 * fVar69 + (float)*puVar5 * fVar74 + *pfVar1 * fVar76
                               );
              fVar46 = (float)puVar2[1] * fVar56 + (float)puVar3[1] * fVar64 +
                       (float)puVar4[1] * fVar69 + (float)puVar5[1] * fVar74 + pfVar1[2] * fVar76;
              uVar65 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[2] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[2] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[2] >> 0x20) * fVar74 +
                                (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar76,
                                (float)puVar2[2] * fVar56 + (float)puVar3[2] * fVar64 +
                                (float)puVar4[2] * fVar69 + (float)puVar5[2] * fVar74 +
                                (float)*(undefined8 *)(pfVar1 + 4) * fVar76);
              fVar47 = (float)puVar2[3] * fVar56 + (float)puVar3[3] * fVar64 +
                       (float)puVar4[3] * fVar69 + (float)puVar5[3] * fVar74 +
                       (float)*(undefined8 *)(pfVar1 + 6) * fVar76;
              uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[4] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[4] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[4] >> 0x20) * fVar74 +
                                (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar76,
                                (float)puVar2[4] * fVar56 + (float)puVar3[4] * fVar64 +
                                (float)puVar4[4] * fVar69 + (float)puVar5[4] * fVar74 +
                                (float)*(undefined8 *)(pfVar1 + 8) * fVar76);
              fVar53 = (float)puVar2[5] * fVar56 + (float)puVar3[5] * fVar64 +
                       (float)puVar4[5] * fVar69 + (float)puVar5[5] * fVar74 +
                       (float)*(undefined8 *)(pfVar1 + 10) * fVar76;
              uVar72 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[6] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[6] >> 0x20) * fVar69 +
                                *(float *)((long)puVar5 + 0x34) * fVar74 +
                                (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar76,
                                (float)puVar2[6] * fVar56 + (float)puVar3[6] * fVar64 +
                                (float)puVar4[6] * fVar69 + *(float *)(puVar5 + 6) * fVar74 +
                                (float)*(undefined8 *)(pfVar1 + 0xc) * fVar76);
              fVar56 = (float)puVar2[7] * fVar56 + (float)puVar3[7] * fVar64 +
                       (float)puVar4[7] * fVar69 + *(float *)(puVar5 + 7) * fVar74 +
                       (float)*(undefined8 *)(pfVar1 + 0xe) * fVar76;
              break;
            case 6:
              fVar56 = (float)NEON_ucvtf((uint)pbVar27[1]);
              fVar64 = (float)NEON_ucvtf((uint)pbVar27[3]);
              puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
              fVar56 = fVar56 * fVar19;
              fVar69 = (float)NEON_ucvtf((uint)pbVar27[5]);
              puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
              puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
              puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
              fVar64 = fVar64 * fVar19;
              puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
              fVar74 = (float)NEON_ucvtf((uint)pbVar27[7]);
              puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
              fVar69 = fVar69 * fVar19;
              pbVar35 = pbVar27 + 0xc;
              fVar76 = (float)NEON_ucvtf((uint)pbVar27[9]);
              fVar74 = fVar74 * fVar19;
              fVar76 = fVar76 * fVar19;
              fVar70 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
              fVar70 = fVar70 * fVar19;
              uVar50 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar56 +
                                (float)((ulong)*puVar3 >> 0x20) * fVar64 +
                                (float)((ulong)*puVar4 >> 0x20) * fVar69 +
                                (float)((ulong)*puVar5 >> 0x20) * fVar74 +
                                (float)((ulong)*puVar6 >> 0x20) * fVar76 +
                                (float)((ulong)*puVar7 >> 0x20) * fVar70,
                                (float)*puVar2 * fVar56 + (float)*puVar3 * fVar64 +
                                (float)*puVar4 * fVar69 + (float)*puVar5 * fVar74 +
                                (float)*puVar6 * fVar76 + (float)*puVar7 * fVar70);
              fVar46 = (float)puVar2[1] * fVar56 + (float)puVar3[1] * fVar64 +
                       (float)puVar4[1] * fVar69 + (float)puVar5[1] * fVar74 +
                       (float)puVar6[1] * fVar76 + (float)puVar7[1] * fVar70;
              uVar65 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[2] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[2] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[2] >> 0x20) * fVar74 +
                                (float)((ulong)puVar6[2] >> 0x20) * fVar76 +
                                (float)((ulong)puVar7[2] >> 0x20) * fVar70,
                                (float)puVar2[2] * fVar56 + (float)puVar3[2] * fVar64 +
                                (float)puVar4[2] * fVar69 + (float)puVar5[2] * fVar74 +
                                (float)puVar6[2] * fVar76 + (float)puVar7[2] * fVar70);
              fVar47 = (float)puVar2[3] * fVar56 + (float)puVar3[3] * fVar64 +
                       (float)puVar4[3] * fVar69 + (float)puVar5[3] * fVar74 +
                       (float)puVar6[3] * fVar76 + (float)puVar7[3] * fVar70;
              uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[4] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[4] >> 0x20) * fVar69 +
                                *(float *)((long)puVar5 + 0x24) * fVar74 +
                                (float)((ulong)puVar6[4] >> 0x20) * fVar76 +
                                (float)((ulong)puVar7[4] >> 0x20) * fVar70,
                                (float)puVar2[4] * fVar56 + (float)puVar3[4] * fVar64 +
                                (float)puVar4[4] * fVar69 + *(float *)(puVar5 + 4) * fVar74 +
                                (float)puVar6[4] * fVar76 + (float)puVar7[4] * fVar70);
              fVar53 = (float)puVar2[5] * fVar56 + (float)puVar3[5] * fVar64 +
                       (float)puVar4[5] * fVar69 + *(float *)(puVar5 + 5) * fVar74 +
                       (float)puVar6[5] * fVar76 + (float)puVar7[5] * fVar70;
              uVar72 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[6] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[6] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[6] >> 0x20) * fVar74 +
                                (float)((ulong)puVar6[6] >> 0x20) * fVar76 +
                                (float)((ulong)puVar7[6] >> 0x20) * fVar70,
                                (float)puVar2[6] * fVar56 + (float)puVar3[6] * fVar64 +
                                (float)puVar4[6] * fVar69 + (float)puVar5[6] * fVar74 +
                                (float)puVar6[6] * fVar76 + (float)puVar7[6] * fVar70);
              fVar56 = (float)puVar2[7] * fVar56 + (float)puVar3[7] * fVar64 +
                       (float)puVar4[7] * fVar69 + (float)puVar5[7] * fVar74 +
                       (float)puVar6[7] * fVar76 + (float)puVar7[7] * fVar70;
              break;
            case 7:
              fVar56 = (float)NEON_ucvtf((uint)pbVar27[1]);
              puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
              fVar56 = fVar56 * fVar19;
              fVar64 = (float)NEON_ucvtf((uint)pbVar27[3]);
              fVar69 = (float)NEON_ucvtf((uint)pbVar27[5]);
              fVar64 = fVar64 * fVar19;
              puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
              fVar74 = (float)NEON_ucvtf((uint)pbVar27[7]);
              puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
              puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
              fVar75 = (float)NEON_ucvtf((uint)pbVar27[0xd]);
              puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
              fVar69 = fVar69 * fVar19;
              fVar76 = (float)NEON_ucvtf((uint)pbVar27[9]);
              puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
              puVar8 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xc] * 0x40);
              fVar74 = fVar74 * fVar19;
              fVar70 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
              pbVar35 = pbVar27 + 0xe;
              fVar76 = fVar76 * fVar19;
              fVar70 = fVar70 * fVar19;
              fVar75 = fVar75 * fVar19;
              uVar50 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar56 +
                                (float)((ulong)*puVar3 >> 0x20) * fVar64 +
                                (float)((ulong)*puVar4 >> 0x20) * fVar69 +
                                (float)((ulong)*puVar5 >> 0x20) * fVar74 +
                                (float)((ulong)*puVar6 >> 0x20) * fVar76 +
                                (float)((ulong)*puVar7 >> 0x20) * fVar70 +
                                (float)((ulong)*puVar8 >> 0x20) * fVar75,
                                (float)*puVar2 * fVar56 + (float)*puVar3 * fVar64 +
                                (float)*puVar4 * fVar69 + (float)*puVar5 * fVar74 +
                                (float)*puVar6 * fVar76 + (float)*puVar7 * fVar70 +
                                (float)*puVar8 * fVar75);
              fVar46 = (float)puVar2[1] * fVar56 + (float)puVar3[1] * fVar64 +
                       (float)puVar4[1] * fVar69 + (float)puVar5[1] * fVar74 +
                       (float)puVar6[1] * fVar76 + (float)puVar7[1] * fVar70 +
                       (float)puVar8[1] * fVar75;
              uVar65 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[2] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[2] >> 0x20) * fVar69 +
                                *(float *)((long)puVar5 + 0x14) * fVar74 +
                                (float)((ulong)puVar6[2] >> 0x20) * fVar76 +
                                (float)((ulong)puVar7[2] >> 0x20) * fVar70 +
                                (float)((ulong)puVar8[2] >> 0x20) * fVar75,
                                (float)puVar2[2] * fVar56 + (float)puVar3[2] * fVar64 +
                                (float)puVar4[2] * fVar69 + *(float *)(puVar5 + 2) * fVar74 +
                                (float)puVar6[2] * fVar76 + (float)puVar7[2] * fVar70 +
                                (float)puVar8[2] * fVar75);
              fVar47 = (float)puVar2[3] * fVar56 + (float)puVar3[3] * fVar64 +
                       (float)puVar4[3] * fVar69 + *(float *)(puVar5 + 3) * fVar74 +
                       (float)puVar6[3] * fVar76 + (float)puVar7[3] * fVar70 +
                       (float)puVar8[3] * fVar75;
              uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[4] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[4] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[4] >> 0x20) * fVar74 +
                                (float)((ulong)puVar6[4] >> 0x20) * fVar76 +
                                (float)((ulong)puVar7[4] >> 0x20) * fVar70 +
                                (float)((ulong)puVar8[4] >> 0x20) * fVar75,
                                (float)puVar2[4] * fVar56 + (float)puVar3[4] * fVar64 +
                                (float)puVar4[4] * fVar69 + (float)puVar5[4] * fVar74 +
                                (float)puVar6[4] * fVar76 + (float)puVar7[4] * fVar70 +
                                (float)puVar8[4] * fVar75);
              fVar53 = (float)puVar2[5] * fVar56 + (float)puVar3[5] * fVar64 +
                       (float)puVar4[5] * fVar69 + (float)puVar5[5] * fVar74 +
                       (float)puVar6[5] * fVar76 + (float)puVar7[5] * fVar70 +
                       (float)puVar8[5] * fVar75;
              uVar72 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[6] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[6] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[6] >> 0x20) * fVar74 +
                                (float)((ulong)puVar6[6] >> 0x20) * fVar76 +
                                (float)((ulong)puVar7[6] >> 0x20) * fVar70 +
                                (float)((ulong)puVar8[6] >> 0x20) * fVar75,
                                (float)puVar2[6] * fVar56 + (float)puVar3[6] * fVar64 +
                                (float)puVar4[6] * fVar69 + (float)puVar5[6] * fVar74 +
                                (float)puVar6[6] * fVar76 + (float)puVar7[6] * fVar70 +
                                (float)puVar8[6] * fVar75);
              fVar56 = (float)puVar2[7] * fVar56 + (float)puVar3[7] * fVar64 +
                       (float)puVar4[7] * fVar69 + (float)puVar5[7] * fVar74 +
                       (float)puVar6[7] * fVar76 + (float)puVar7[7] * fVar70 +
                       (float)puVar8[7] * fVar75;
              break;
            case 8:
              fVar56 = (float)NEON_ucvtf((uint)pbVar27[1]);
              puVar2 = (undefined8 *)(lVar40 + (ulong)*pbVar27 * 0x40);
              fVar56 = fVar56 * fVar19;
              fVar64 = (float)NEON_ucvtf((uint)pbVar27[3]);
              puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar27[2] * 0x40);
              fVar69 = (float)NEON_ucvtf((uint)pbVar27[5]);
              fVar64 = fVar64 * fVar19;
              fVar69 = fVar69 * fVar19;
              puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar27[4] * 0x40);
              puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar27[6] * 0x40);
              puVar6 = (undefined8 *)(lVar40 + (ulong)pbVar27[8] * 0x40);
              fVar74 = (float)NEON_ucvtf((uint)pbVar27[7]);
              puVar7 = (undefined8 *)(lVar40 + (ulong)pbVar27[10] * 0x40);
              fVar76 = (float)NEON_ucvtf((uint)pbVar27[9]);
              puVar8 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xc] * 0x40);
              fVar74 = fVar74 * fVar19;
              puVar9 = (undefined8 *)(lVar40 + (ulong)pbVar27[0xe] * 0x40);
              fVar76 = fVar76 * fVar19;
              fVar75 = (float)NEON_ucvtf((uint)pbVar27[0xd]);
              fVar77 = (float)NEON_ucvtf((uint)pbVar27[0xf]);
              fVar70 = (float)NEON_ucvtf((uint)pbVar27[0xb]);
              fVar77 = fVar77 * fVar19;
              pbVar35 = pbVar27 + 0x10;
              fVar70 = fVar70 * fVar19;
              fVar75 = fVar75 * fVar19;
              uVar50 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar56 +
                                (float)((ulong)*puVar3 >> 0x20) * fVar64 +
                                (float)((ulong)*puVar4 >> 0x20) * fVar69 +
                                (float)((ulong)*puVar5 >> 0x20) * fVar74 +
                                (float)((ulong)*puVar6 >> 0x20) * fVar76 +
                                (float)((ulong)*puVar7 >> 0x20) * fVar70 +
                                (float)((ulong)*puVar8 >> 0x20) * fVar75 +
                                (float)((ulong)*puVar9 >> 0x20) * fVar77,
                                (float)*puVar2 * fVar56 + (float)*puVar3 * fVar64 +
                                (float)*puVar4 * fVar69 + (float)*puVar5 * fVar74 +
                                (float)*puVar6 * fVar76 + (float)*puVar7 * fVar70 +
                                (float)*puVar8 * fVar75 + (float)*puVar9 * fVar77);
              fVar46 = (float)puVar2[1] * fVar56 + (float)puVar3[1] * fVar64 +
                       (float)puVar4[1] * fVar69 + (float)puVar5[1] * fVar74 +
                       (float)puVar6[1] * fVar76 + (float)puVar7[1] * fVar70 +
                       (float)puVar8[1] * fVar75 + (float)puVar9[1] * fVar77;
              uVar65 = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[2] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[2] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[2] >> 0x20) * fVar74 +
                                (float)((ulong)puVar6[2] >> 0x20) * fVar76 +
                                (float)((ulong)puVar7[2] >> 0x20) * fVar70 +
                                (float)((ulong)puVar8[2] >> 0x20) * fVar75 +
                                (float)((ulong)puVar9[2] >> 0x20) * fVar77,
                                (float)puVar2[2] * fVar56 + (float)puVar3[2] * fVar64 +
                                (float)puVar4[2] * fVar69 + (float)puVar5[2] * fVar74 +
                                (float)puVar6[2] * fVar76 + (float)puVar7[2] * fVar70 +
                                (float)puVar8[2] * fVar75 + (float)puVar9[2] * fVar77);
              fVar47 = (float)puVar2[3] * fVar56 + (float)puVar3[3] * fVar64 +
                       (float)puVar4[3] * fVar69 + (float)puVar5[3] * fVar74 +
                       (float)puVar6[3] * fVar76 + (float)puVar7[3] * fVar70 +
                       (float)puVar8[3] * fVar75 + (float)puVar9[3] * fVar77;
              uVar51 = CONCAT44((float)((ulong)puVar2[4] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[4] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[4] >> 0x20) * fVar69 +
                                *(float *)((long)puVar5 + 0x24) * fVar74 +
                                (float)((ulong)puVar6[4] >> 0x20) * fVar76 +
                                (float)((ulong)puVar7[4] >> 0x20) * fVar70 +
                                (float)((ulong)puVar8[4] >> 0x20) * fVar75 +
                                (float)((ulong)puVar9[4] >> 0x20) * fVar77,
                                (float)puVar2[4] * fVar56 + (float)puVar3[4] * fVar64 +
                                (float)puVar4[4] * fVar69 + *(float *)(puVar5 + 4) * fVar74 +
                                (float)puVar6[4] * fVar76 + (float)puVar7[4] * fVar70 +
                                (float)puVar8[4] * fVar75 + (float)puVar9[4] * fVar77);
              fVar53 = (float)puVar2[5] * fVar56 + (float)puVar3[5] * fVar64 +
                       (float)puVar4[5] * fVar69 + *(float *)(puVar5 + 5) * fVar74 +
                       (float)puVar6[5] * fVar76 + (float)puVar7[5] * fVar70 +
                       (float)puVar8[5] * fVar75 + (float)puVar9[5] * fVar77;
              uVar72 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) * fVar56 +
                                (float)((ulong)puVar3[6] >> 0x20) * fVar64 +
                                (float)((ulong)puVar4[6] >> 0x20) * fVar69 +
                                (float)((ulong)puVar5[6] >> 0x20) * fVar74 +
                                (float)((ulong)puVar6[6] >> 0x20) * fVar76 +
                                (float)((ulong)puVar7[6] >> 0x20) * fVar70 +
                                (float)((ulong)puVar8[6] >> 0x20) * fVar75 +
                                (float)((ulong)puVar9[6] >> 0x20) * fVar77,
                                (float)puVar2[6] * fVar56 + (float)puVar3[6] * fVar64 +
                                (float)puVar4[6] * fVar69 + (float)puVar5[6] * fVar74 +
                                (float)puVar6[6] * fVar76 + (float)puVar7[6] * fVar70 +
                                (float)puVar8[6] * fVar75 + (float)puVar9[6] * fVar77);
              fVar56 = (float)puVar2[7] * fVar56 + (float)puVar3[7] * fVar64 +
                       (float)puVar4[7] * fVar69 + (float)puVar5[7] * fVar74 +
                       (float)puVar6[7] * fVar76 + (float)puVar7[7] * fVar70 +
                       (float)puVar8[7] * fVar75 + (float)puVar9[7] * fVar77;
              break;
            default:
              uVar72 = 0;
              fVar56 = 0.0;
              fVar46 = 0.0;
              uVar50 = 0;
              fVar47 = 0.0;
              uVar65 = 0;
              fVar53 = 0.0;
              uVar51 = 0;
            }
            fVar76 = (float)*puVar41;
            fVar77 = (float)uVar50;
            fVar52 = (float)((ulong)uVar50 >> 0x20);
            fVar70 = (float)((ulong)*puVar41 >> 0x20);
            fVar54 = (float)uVar65;
            fVar55 = (float)((ulong)uVar65 >> 0x20);
            fVar75 = (float)puVar41[1];
            fVar62 = (float)uVar51;
            fVar63 = (float)((ulong)uVar51 >> 0x20);
            fVar64 = (float)*puVar42;
            fVar69 = (float)((ulong)*puVar42 >> 0x20);
            fVar74 = (float)puVar42[1];
            fVar59 = (float)*puVar30;
            fVar60 = (float)((ulong)*puVar30 >> 0x20);
            fVar57 = (float)*puVar26;
            fVar58 = (float)((ulong)*puVar26 >> 0x20);
            *puVar44 = CONCAT44(fVar63 * fVar75 +
                                fVar55 * fVar70 + fVar52 * fVar76 + (float)((ulong)uVar72 >> 0x20),
                                fVar62 * fVar75 + fVar54 * fVar70 + fVar77 * fVar76 + (float)uVar72)
            ;
            fVar61 = (float)uVar49;
            *(float *)(puVar44 + 1) = fVar53 * fVar75 + fVar47 * fVar70 + fVar46 * fVar76 + fVar56;
            fVar56 = (float)uVar48;
            *puVar31 = CONCAT44(fVar63 * fVar74 + fVar52 * fVar64 + fVar55 * fVar69,
                                fVar62 * fVar74 + fVar77 * fVar64 + fVar54 * fVar69);
            *(float *)(puVar31 + 1) = fVar53 * fVar74 + fVar46 * fVar64 + fVar47 * fVar69;
            *puVar29 = CONCAT44(fVar63 * fVar61 + fVar52 * fVar59 + fVar55 * fVar60,
                                fVar62 * fVar61 + fVar77 * fVar59 + fVar54 * fVar60);
            *(float *)(puVar29 + 1) = fVar53 * fVar61 + fVar46 * fVar59 + fVar47 * fVar60;
            *puVar25 = CONCAT44(fVar63 * fVar56 + fVar52 * fVar57 + fVar55 * fVar58,
                                fVar62 * fVar56 + fVar77 * fVar57 + fVar54 * fVar58);
            *(float *)(puVar25 + 1) = fVar53 * fVar56 + fVar46 * fVar57 + fVar47 * fVar58;
          }
          puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar14);
          puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar12);
          puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar38);
          puVar44 = (undefined8 *)((long)puVar44 + (ulong)bVar13);
          puVar31 = (undefined8 *)((long)puVar31 + (ulong)bVar11);
          puVar29 = (undefined8 *)((long)puVar29 + (ulong)bVar37);
          puVar25 = (undefined8 *)((long)puVar25 + (ulong)bVar43);
          puVar32 = puVar32 + 1;
          iVar33 = iVar33 + -1;
          puVar26 = (undefined8 *)((long)puVar26 + (ulong)bVar34);
          pbVar27 = pbVar35;
        } while (iVar33 != 0);
      }
    }
    lVar40 = FUN_0043c4e0(DAT_04c6f410);
  }
  else {
    if (bVar22) {
      auVar78 = FUN_0043c4e0(DAT_04c6f410);
      pbVar27 = auVar78._8_8_;
      lVar40 = auVar78._0_8_;
      if ((bVar43 & bVar34 & bVar37) == 1) {
        if (lVar40 != 0) {
          FUN_00443a00(lVar40,"TtSkinBatch");
          pbVar27 = extraout_x1;
        }
        fVar19 = DAT_04102ed4;
        puVar32 = (ushort *)param_2[3];
        pbVar35 = (byte *)(param_2[2] + (ulong)*puVar32 * 2);
        Hint_Prefetch(pbVar35,0,0,0);
        lVar40 = *param_2;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x40,0,0,0);
        Hint_Prefetch(lVar40 + 0x80,0,0,0);
        Hint_Prefetch(lVar40 + 0xc0,0,0,0);
        iVar33 = (int)param_2[8];
        if (iVar33 != 0) {
          bVar43 = *(byte *)((long)param_2 + 0x1a4);
          bVar34 = *(byte *)((long)param_2 + 0x84);
          bVar37 = *(byte *)((long)param_2 + 0x18c);
          bVar38 = *(byte *)((long)param_2 + 0x6c);
          bVar11 = *(byte *)((long)param_2 + 0x164);
          bVar12 = *(byte *)((long)param_2 + 0x44);
          puVar31 = (undefined8 *)param_2[0x33];
          puVar30 = (undefined8 *)param_2[0xf];
          pbVar27 = (byte *)param_2[0x30];
          puVar42 = (undefined8 *)param_2[0xc];
          puVar44 = (undefined8 *)param_2[0x2b];
          puVar41 = (undefined8 *)param_2[7];
          do {
            lVar10 = (long)puVar41 + (ulong)bVar12 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            lVar28 = (long)puVar42 + (ulong)bVar38 * 4;
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar30 + (ulong)bVar34 * 4;
            Hint_Prefetch(lVar28,0,0,0);
            Hint_Prefetch(lVar28 + 0x40,0,0,0);
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar44 + (ulong)bVar11 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4,0,0,0);
            Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4 + 0x40,0,0,0);
            lVar10 = (long)puVar31 + (ulong)bVar43 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            uVar18 = (uint)puVar32[1] - (uint)*puVar32;
            Hint_Prefetch(puVar32 + 2,0,0,0);
            pbVar36 = pbVar35;
            if ((uint)*puVar32 <= (uint)puVar32[1] && uVar18 != 0) {
              Hint_Prefetch(pbVar35 + (ulong)(ushort)uVar18 * 2,0,0,0);
              switch(uVar18 & 0xffff) {
              case 1:
                pbVar36 = pbVar35 + 2;
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                uVar49 = puVar29[1];
                uVar48 = *puVar29;
                uVar65 = puVar29[3];
                uVar50 = puVar29[2];
                uVar72 = puVar29[5];
                uVar51 = puVar29[4];
                uVar73 = puVar29[7];
                uVar71 = puVar29[6];
                break;
              case 2:
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                fVar47 = fVar47 * fVar19;
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                pbVar36 = pbVar35 + 4;
                fVar46 = fVar46 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar46,
                                  (float)*puVar29 * fVar47 + (float)*puVar25 * fVar46);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar46,
                                  (float)puVar29[1] * fVar47 + (float)puVar25[1] * fVar46);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar46,
                                  (float)puVar29[2] * fVar47 + (float)puVar25[2] * fVar46);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar46,
                                  (float)puVar29[3] * fVar47 + (float)puVar25[3] * fVar46);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar46,
                                  (float)puVar29[4] * fVar47 + (float)puVar25[4] * fVar46);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar46,
                                  (float)puVar29[5] * fVar47 + (float)puVar25[5] * fVar46);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar46,
                                  (float)puVar29[6] * fVar47 + (float)puVar25[6] * fVar46);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar46,
                                  (float)puVar29[7] * fVar47 + (float)puVar25[7] * fVar46);
                break;
              case 3:
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                pbVar36 = pbVar35 + 6;
                fVar46 = fVar46 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53,
                                  (float)*puVar29 * fVar47 + (float)*puVar25 * fVar46 +
                                  (float)*puVar26 * fVar53);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53,
                                  (float)puVar29[1] * fVar47 + (float)puVar25[1] * fVar46 +
                                  (float)puVar26[1] * fVar53);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53,
                                  (float)puVar29[2] * fVar47 + (float)puVar25[2] * fVar46 +
                                  (float)puVar26[2] * fVar53);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53,
                                  (float)puVar29[3] * fVar47 + (float)puVar25[3] * fVar46 +
                                  (float)puVar26[3] * fVar53);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53,
                                  (float)puVar29[4] * fVar47 + (float)puVar25[4] * fVar46 +
                                  (float)puVar26[4] * fVar53);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53,
                                  (float)puVar29[5] * fVar47 + (float)puVar25[5] * fVar46 +
                                  (float)puVar26[5] * fVar53);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53,
                                  (float)puVar29[6] * fVar47 + (float)puVar25[6] * fVar46 +
                                  (float)puVar26[6] * fVar53);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53,
                                  (float)puVar29[7] * fVar47 + (float)puVar25[7] * fVar46 +
                                  (float)puVar26[7] * fVar53);
                break;
              case 4:
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar46 = fVar46 * fVar19;
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                pbVar36 = pbVar35 + 8;
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                fVar56 = fVar56 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar56,
                                  (float)*puVar29 * fVar47 + (float)*puVar25 * fVar46 +
                                  (float)*puVar26 * fVar53 + (float)*puVar2 * fVar56);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar56,
                                  (float)puVar29[1] * fVar47 + (float)puVar25[1] * fVar46 +
                                  (float)puVar26[1] * fVar53 + (float)puVar2[1] * fVar56);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar56,
                                  (float)puVar29[2] * fVar47 + (float)puVar25[2] * fVar46 +
                                  (float)puVar26[2] * fVar53 + (float)puVar2[2] * fVar56);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar56,
                                  (float)puVar29[3] * fVar47 + (float)puVar25[3] * fVar46 +
                                  (float)puVar26[3] * fVar53 + (float)puVar2[3] * fVar56);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar56,
                                  (float)puVar29[4] * fVar47 + (float)puVar25[4] * fVar46 +
                                  (float)puVar26[4] * fVar53 + (float)puVar2[4] * fVar56);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar56,
                                  (float)puVar29[5] * fVar47 + (float)puVar25[5] * fVar46 +
                                  (float)puVar26[5] * fVar53 + (float)puVar2[5] * fVar56);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar56,
                                  (float)puVar29[6] * fVar47 + (float)puVar25[6] * fVar46 +
                                  (float)puVar26[6] * fVar53 + (float)puVar2[6] * fVar56);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar56,
                                  (float)puVar29[7] * fVar47 + (float)puVar25[7] * fVar46 +
                                  (float)puVar26[7] * fVar53 + (float)puVar2[7] * fVar56);
                break;
              case 5:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                pbVar36 = pbVar35 + 10;
                fVar56 = fVar56 * fVar19;
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar64 = fVar64 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar64,
                                  (float)*puVar29 * fVar46 + (float)*puVar25 * fVar47 +
                                  (float)*puVar26 * fVar53 + (float)*puVar2 * fVar56 +
                                  (float)*puVar3 * fVar64);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar64,
                                  (float)puVar29[1] * fVar46 + (float)puVar25[1] * fVar47 +
                                  (float)puVar26[1] * fVar53 + (float)puVar2[1] * fVar56 +
                                  (float)puVar3[1] * fVar64);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                  *(float *)((long)puVar3 + 0x14) * fVar64,
                                  (float)puVar29[2] * fVar46 + (float)puVar25[2] * fVar47 +
                                  (float)puVar26[2] * fVar53 + (float)puVar2[2] * fVar56 +
                                  *(float *)(puVar3 + 2) * fVar64);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar56 +
                                  *(float *)((long)puVar3 + 0x1c) * fVar64,
                                  (float)puVar29[3] * fVar46 + (float)puVar25[3] * fVar47 +
                                  (float)puVar26[3] * fVar53 + (float)puVar2[3] * fVar56 +
                                  *(float *)(puVar3 + 3) * fVar64);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar64,
                                  (float)puVar29[4] * fVar46 + (float)puVar25[4] * fVar47 +
                                  (float)puVar26[4] * fVar53 + (float)puVar2[4] * fVar56 +
                                  (float)puVar3[4] * fVar64);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar64,
                                  (float)puVar29[5] * fVar46 + (float)puVar25[5] * fVar47 +
                                  (float)puVar26[5] * fVar53 + (float)puVar2[5] * fVar56 +
                                  (float)puVar3[5] * fVar64);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar64,
                                  (float)puVar29[6] * fVar46 + (float)puVar25[6] * fVar47 +
                                  (float)puVar26[6] * fVar53 + (float)puVar2[6] * fVar56 +
                                  (float)puVar3[6] * fVar64);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar64,
                                  (float)puVar29[7] * fVar46 + (float)puVar25[7] * fVar47 +
                                  (float)puVar26[7] * fVar53 + (float)puVar2[7] * fVar56 +
                                  (float)puVar3[7] * fVar64);
                break;
              case 6:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                pbVar36 = pbVar35 + 0xc;
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                fVar64 = fVar64 * fVar19;
                fVar69 = fVar69 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar56 + pfVar1[1] * fVar64 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar69,
                                  (float)*puVar29 * fVar46 + (float)*puVar25 * fVar47 +
                                  (float)*puVar26 * fVar53 + (float)*puVar2 * fVar56 +
                                  *pfVar1 * fVar64 + (float)*puVar3 * fVar69);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar69,
                                  (float)puVar29[1] * fVar46 + (float)puVar25[1] * fVar47 +
                                  (float)puVar26[1] * fVar53 + (float)puVar2[1] * fVar56 +
                                  pfVar1[2] * fVar64 + (float)puVar3[1] * fVar69);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar69,
                                  (float)puVar29[2] * fVar46 + (float)puVar25[2] * fVar47 +
                                  (float)puVar26[2] * fVar53 + (float)puVar2[2] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar64 +
                                  (float)puVar3[2] * fVar69);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar69,
                                  (float)puVar29[3] * fVar46 + (float)puVar25[3] * fVar47 +
                                  (float)puVar26[3] * fVar53 + (float)puVar2[3] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 6) * fVar64 +
                                  (float)puVar3[3] * fVar69);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar69,
                                  (float)puVar29[4] * fVar46 + (float)puVar25[4] * fVar47 +
                                  (float)puVar26[4] * fVar53 + (float)puVar2[4] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar64 +
                                  (float)puVar3[4] * fVar69);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar69,
                                  (float)puVar29[5] * fVar46 + (float)puVar25[5] * fVar47 +
                                  (float)puVar26[5] * fVar53 + (float)puVar2[5] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 10) * fVar64 +
                                  (float)puVar3[5] * fVar69);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar2 + 0x34) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar69,
                                  (float)puVar29[6] * fVar46 + (float)puVar25[6] * fVar47 +
                                  (float)puVar26[6] * fVar53 + *(float *)(puVar2 + 6) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64 +
                                  (float)puVar3[6] * fVar69);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar2 + 0x3c) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar69,
                                  (float)puVar29[7] * fVar46 + (float)puVar25[7] * fVar47 +
                                  (float)puVar26[7] * fVar53 + *(float *)(puVar2 + 7) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64 +
                                  (float)puVar3[7] * fVar69);
                puVar45 = (undefined2 *)PTR_DAT_04bd4d90;
                break;
              case 7:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                fVar53 = fVar53 * fVar19;
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                fVar56 = fVar56 * fVar19;
                pbVar36 = pbVar35 + 0xe;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                fVar64 = fVar64 * fVar19;
                fVar69 = fVar69 * fVar19;
                fVar74 = fVar74 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar74,
                                  (float)*puVar29 * fVar46 + (float)*puVar25 * fVar47 +
                                  (float)*puVar26 * fVar53 + (float)*puVar2 * fVar56 +
                                  (float)*puVar3 * fVar64 + (float)*puVar4 * fVar69 +
                                  (float)*puVar5 * fVar74);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar74,
                                  (float)puVar29[1] * fVar46 + (float)puVar25[1] * fVar47 +
                                  (float)puVar26[1] * fVar53 + (float)puVar2[1] * fVar56 +
                                  (float)puVar3[1] * fVar64 + (float)puVar4[1] * fVar69 +
                                  (float)puVar5[1] * fVar74);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar74,
                                  (float)puVar29[2] * fVar46 + (float)puVar25[2] * fVar47 +
                                  (float)puVar26[2] * fVar53 + (float)puVar2[2] * fVar56 +
                                  (float)puVar3[2] * fVar64 + (float)puVar4[2] * fVar69 +
                                  (float)puVar5[2] * fVar74);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar74,
                                  (float)puVar29[3] * fVar46 + (float)puVar25[3] * fVar47 +
                                  (float)puVar26[3] * fVar53 + (float)puVar2[3] * fVar56 +
                                  (float)puVar3[3] * fVar64 + (float)puVar4[3] * fVar69 +
                                  (float)puVar5[3] * fVar74);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar2 + 0x24) * fVar56 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar74,
                                  (float)puVar29[4] * fVar46 + (float)puVar25[4] * fVar47 +
                                  (float)puVar26[4] * fVar53 + *(float *)(puVar2 + 4) * fVar56 +
                                  (float)puVar3[4] * fVar64 + (float)puVar4[4] * fVar69 +
                                  (float)puVar5[4] * fVar74);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar2 + 0x2c) * fVar56 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar74,
                                  (float)puVar29[5] * fVar46 + (float)puVar25[5] * fVar47 +
                                  (float)puVar26[5] * fVar53 + *(float *)(puVar2 + 5) * fVar56 +
                                  (float)puVar3[5] * fVar64 + (float)puVar4[5] * fVar69 +
                                  (float)puVar5[5] * fVar74);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar74,
                                  (float)puVar29[6] * fVar46 + (float)puVar25[6] * fVar47 +
                                  (float)puVar26[6] * fVar53 + (float)puVar2[6] * fVar56 +
                                  (float)puVar3[6] * fVar64 + (float)puVar4[6] * fVar69 +
                                  (float)puVar5[6] * fVar74);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar74,
                                  (float)puVar29[7] * fVar46 + (float)puVar25[7] * fVar47 +
                                  (float)puVar26[7] * fVar53 + (float)puVar2[7] * fVar56 +
                                  (float)puVar3[7] * fVar64 + (float)puVar4[7] * fVar69 +
                                  (float)puVar5[7] * fVar74);
                puVar45 = &DAT_04c6f410;
                break;
              case 8:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                fVar53 = fVar53 * fVar19;
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar56 = fVar56 * fVar19;
                fVar64 = fVar64 * fVar19;
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                fVar76 = (float)NEON_ucvtf((uint)pbVar35[0xf]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                fVar69 = fVar69 * fVar19;
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xe] * 0x40);
                fVar74 = fVar74 * fVar19;
                pbVar36 = pbVar35 + 0x10;
                fVar76 = fVar76 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar56 + pfVar1[1] * fVar64 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar74 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar76,
                                  (float)*puVar29 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar25 * fVar53 + (float)*puVar26 * fVar56 +
                                  *pfVar1 * fVar64 + (float)*puVar2 * fVar69 +
                                  (float)*puVar4 * fVar74 + (float)*puVar5 * fVar76);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar76,
                                  (float)puVar29[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar25[1] * fVar53 + (float)puVar26[1] * fVar56 +
                                  pfVar1[2] * fVar64 + (float)puVar2[1] * fVar69 +
                                  (float)puVar4[1] * fVar74 + (float)puVar5[1] * fVar76);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar76,
                                  (float)puVar29[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar25[2] * fVar53 + (float)puVar26[2] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar64 +
                                  (float)puVar2[2] * fVar69 + (float)puVar4[2] * fVar74 +
                                  (float)puVar5[2] * fVar76);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar76,
                                  (float)puVar29[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar25[3] * fVar53 + (float)puVar26[3] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 6) * fVar64 +
                                  (float)puVar2[3] * fVar69 + (float)puVar4[3] * fVar74 +
                                  (float)puVar5[3] * fVar76);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar76,
                                  (float)puVar29[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar25[4] * fVar53 + (float)puVar26[4] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar64 +
                                  (float)puVar2[4] * fVar69 + (float)puVar4[4] * fVar74 +
                                  (float)puVar5[4] * fVar76);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar76,
                                  (float)puVar29[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar25[5] * fVar53 + (float)puVar26[5] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 10) * fVar64 +
                                  (float)puVar2[5] * fVar69 + (float)puVar4[5] * fVar74 +
                                  (float)puVar5[5] * fVar76);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar26 + 0x34) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar76,
                                  (float)puVar29[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar25[6] * fVar53 + *(float *)(puVar26 + 6) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64 +
                                  (float)puVar2[6] * fVar69 + (float)puVar4[6] * fVar74 +
                                  (float)puVar5[6] * fVar76);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar26 + 0x3c) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar76,
                                  (float)puVar29[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar25[7] * fVar53 + *(float *)(puVar26 + 7) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64 +
                                  (float)puVar2[7] * fVar69 + (float)puVar4[7] * fVar74 +
                                  (float)puVar5[7] * fVar76);
                puVar45 = (undefined2 *)PTR_DAT_04bd4d90;
                break;
              default:
                uVar71 = 0;
                uVar73 = 0;
                uVar49 = 0;
                uVar48 = 0;
                uVar65 = 0;
                uVar50 = 0;
                uVar72 = 0;
                uVar51 = 0;
              }
              fVar56 = (float)*puVar41;
              fVar74 = (float)uVar48;
              fVar76 = (float)((ulong)uVar48 >> 0x20);
              fVar70 = (float)uVar49;
              fVar75 = (float)((ulong)uVar49 >> 0x20);
              fVar64 = (float)((ulong)*puVar41 >> 0x20);
              fVar77 = (float)uVar50;
              fVar52 = (float)((ulong)uVar50 >> 0x20);
              fVar54 = (float)uVar65;
              fVar55 = (float)((ulong)uVar65 >> 0x20);
              fVar69 = (float)puVar41[1];
              fVar57 = (float)uVar51;
              fVar58 = (float)((ulong)uVar51 >> 0x20);
              fVar59 = (float)uVar72;
              fVar60 = (float)((ulong)uVar72 >> 0x20);
              fVar46 = (float)*puVar42;
              fVar47 = (float)((ulong)*puVar42 >> 0x20);
              fVar61 = (float)*puVar30;
              fVar62 = (float)((ulong)*puVar30 >> 0x20);
              fVar53 = (float)puVar42[1];
              fVar63 = (float)puVar30[1];
              puVar44[1] = CONCAT44(fVar60 * fVar69 +
                                    fVar55 * fVar64 +
                                    fVar75 * fVar56 + (float)((ulong)uVar73 >> 0x20),
                                    fVar59 * fVar69 +
                                    fVar54 * fVar64 + fVar70 * fVar56 + (float)uVar73);
              *puVar44 = CONCAT44(fVar58 * fVar69 +
                                  fVar52 * fVar64 + fVar76 * fVar56 + (float)((ulong)uVar71 >> 0x20)
                                  ,fVar57 * fVar69 +
                                   fVar77 * fVar64 + fVar74 * fVar56 + (float)uVar71);
              *(ulong *)(pbVar27 + 8) =
                   CONCAT44(fVar60 * fVar53 + fVar75 * fVar46 + fVar55 * fVar47,
                            fVar59 * fVar53 + fVar70 * fVar46 + fVar54 * fVar47);
              *(ulong *)pbVar27 =
                   CONCAT44(fVar58 * fVar53 + fVar76 * fVar46 + fVar52 * fVar47,
                            fVar57 * fVar53 + fVar74 * fVar46 + fVar77 * fVar47);
              puVar31[1] = CONCAT44(fVar60 * fVar63 + fVar75 * fVar61 + fVar55 * fVar62,
                                    fVar59 * fVar63 + fVar70 * fVar61 + fVar54 * fVar62);
              *puVar31 = CONCAT44(fVar58 * fVar63 + fVar76 * fVar61 + fVar52 * fVar62,
                                  fVar57 * fVar63 + fVar74 * fVar61 + fVar77 * fVar62);
            }
            puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar12);
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar38);
            puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar34);
            puVar44 = (undefined8 *)((long)puVar44 + (ulong)bVar11);
            pbVar27 = pbVar27 + bVar37;
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)bVar43);
            iVar33 = iVar33 + -1;
            puVar32 = puVar32 + 1;
            pbVar35 = pbVar36;
          } while (iVar33 != 0);
        }
      }
      else if ((bVar43 & bVar34) == 0) {
        if (lVar40 != 0) {
          FUN_00443a00(lVar40,"TtSkinBatch");
          pbVar27 = extraout_x1_04;
        }
        fVar19 = DAT_04102ed4;
        puVar32 = (ushort *)param_2[3];
        pbVar35 = (byte *)(param_2[2] + (ulong)*puVar32 * 2);
        Hint_Prefetch(pbVar35,0,0,0);
        lVar40 = *param_2;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x40,0,0,0);
        Hint_Prefetch(lVar40 + 0x80,0,0,0);
        Hint_Prefetch(lVar40 + 0xc0,0,0,0);
        iVar33 = (int)param_2[8];
        if (iVar33 != 0) {
          bVar43 = *(byte *)((long)param_2 + 0x1a4);
          bVar34 = *(byte *)((long)param_2 + 0x84);
          bVar37 = *(byte *)((long)param_2 + 0x18c);
          bVar38 = *(byte *)((long)param_2 + 0x6c);
          bVar11 = *(byte *)((long)param_2 + 0x164);
          bVar12 = *(byte *)((long)param_2 + 0x44);
          puVar31 = (undefined8 *)param_2[0x33];
          puVar30 = (undefined8 *)param_2[0xf];
          pbVar27 = (byte *)param_2[0x30];
          puVar42 = (undefined8 *)param_2[0xc];
          puVar44 = (undefined8 *)param_2[0x2b];
          puVar41 = (undefined8 *)param_2[7];
          do {
            lVar10 = (long)puVar41 + (ulong)bVar12 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            lVar28 = (long)puVar42 + (ulong)bVar38 * 4;
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar30 + (ulong)bVar34 * 4;
            Hint_Prefetch(lVar28,0,0,0);
            Hint_Prefetch(lVar28 + 0x40,0,0,0);
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar44 + (ulong)bVar11 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4,0,0,0);
            Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4 + 0x40,0,0,0);
            lVar10 = (long)puVar31 + (ulong)bVar43 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            uVar18 = (uint)puVar32[1] - (uint)*puVar32;
            Hint_Prefetch(puVar32 + 2,0,0,0);
            pbVar36 = pbVar35;
            if ((uint)*puVar32 <= (uint)puVar32[1] && uVar18 != 0) {
              Hint_Prefetch(pbVar35 + (ulong)(ushort)uVar18 * 2,0,0,0);
              switch(uVar18 & 0xffff) {
              case 1:
                pbVar36 = pbVar35 + 2;
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = (float)puVar29[1];
                uVar48 = *puVar29;
                fVar47 = (float)puVar29[3];
                uVar49 = puVar29[2];
                fVar53 = (float)puVar29[5];
                uVar50 = puVar29[4];
                fVar56 = (float)puVar29[7];
                uVar65 = puVar29[6];
                break;
              case 2:
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[1]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[3]);
                fVar64 = fVar64 * fVar19;
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                pbVar36 = pbVar35 + 4;
                fVar56 = fVar56 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar56,
                                  (float)*puVar29 * fVar64 + (float)*puVar25 * fVar56);
                fVar46 = (float)puVar29[1] * fVar64 + (float)puVar25[1] * fVar56;
                uVar49 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar56,
                                  (float)puVar29[2] * fVar64 + (float)puVar25[2] * fVar56);
                fVar47 = (float)puVar29[3] * fVar64 + (float)puVar25[3] * fVar56;
                uVar50 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar56,
                                  (float)puVar29[4] * fVar64 + (float)puVar25[4] * fVar56);
                fVar53 = (float)puVar29[5] * fVar64 + (float)puVar25[5] * fVar56;
                uVar65 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar56,
                                  (float)puVar29[6] * fVar64 + (float)puVar25[6] * fVar56);
                fVar56 = (float)puVar29[7] * fVar64 + (float)puVar25[7] * fVar56;
                break;
              case 3:
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar64 = fVar64 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                pbVar36 = pbVar35 + 6;
                fVar56 = fVar56 * fVar19;
                fVar69 = fVar69 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar69,
                                  (float)*puVar29 * fVar64 + (float)*puVar25 * fVar56 +
                                  (float)*puVar26 * fVar69);
                fVar46 = (float)puVar29[1] * fVar64 + (float)puVar25[1] * fVar56 +
                         (float)puVar26[1] * fVar69;
                uVar49 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar69,
                                  (float)puVar29[2] * fVar64 + (float)puVar25[2] * fVar56 +
                                  (float)puVar26[2] * fVar69);
                fVar47 = (float)puVar29[3] * fVar64 + (float)puVar25[3] * fVar56 +
                         (float)puVar26[3] * fVar69;
                uVar50 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar69,
                                  (float)puVar29[4] * fVar64 + (float)puVar25[4] * fVar56 +
                                  (float)puVar26[4] * fVar69);
                fVar53 = (float)puVar29[5] * fVar64 + (float)puVar25[5] * fVar56 +
                         (float)puVar26[5] * fVar69;
                uVar65 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar69,
                                  (float)puVar29[6] * fVar64 + (float)puVar25[6] * fVar56 +
                                  (float)puVar26[6] * fVar69);
                fVar56 = (float)puVar29[7] * fVar64 + (float)puVar25[7] * fVar56 +
                         (float)puVar26[7] * fVar69;
                break;
              case 4:
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                fVar64 = fVar64 * fVar19;
                fVar56 = fVar56 * fVar19;
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                pbVar36 = pbVar35 + 8;
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                fVar74 = fVar74 * fVar19;
                fVar69 = fVar69 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar74,
                                  (float)*puVar29 * fVar64 + (float)*puVar25 * fVar56 +
                                  (float)*puVar26 * fVar69 + (float)*puVar2 * fVar74);
                fVar46 = (float)puVar29[1] * fVar64 + (float)puVar25[1] * fVar56 +
                         (float)puVar26[1] * fVar69 + (float)puVar2[1] * fVar74;
                uVar49 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar74,
                                  (float)puVar29[2] * fVar64 + (float)puVar25[2] * fVar56 +
                                  (float)puVar26[2] * fVar69 + (float)puVar2[2] * fVar74);
                fVar47 = (float)puVar29[3] * fVar64 + (float)puVar25[3] * fVar56 +
                         (float)puVar26[3] * fVar69 + (float)puVar2[3] * fVar74;
                uVar50 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar74,
                                  (float)puVar29[4] * fVar64 + (float)puVar25[4] * fVar56 +
                                  (float)puVar26[4] * fVar69 + (float)puVar2[4] * fVar74);
                fVar53 = (float)puVar29[5] * fVar64 + (float)puVar25[5] * fVar56 +
                         (float)puVar26[5] * fVar69 + (float)puVar2[5] * fVar74;
                uVar65 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar74,
                                  (float)puVar29[6] * fVar64 + (float)puVar25[6] * fVar56 +
                                  (float)puVar26[6] * fVar69 + (float)puVar2[6] * fVar74);
                fVar56 = (float)puVar29[7] * fVar64 + (float)puVar25[7] * fVar56 +
                         (float)puVar26[7] * fVar69 + (float)puVar2[7] * fVar74;
                break;
              case 5:
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar64 = fVar64 * fVar19;
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                pbVar36 = pbVar35 + 10;
                fVar74 = fVar74 * fVar19;
                fVar69 = fVar69 * fVar19;
                fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar76 = fVar76 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar74 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar76,
                                  (float)*puVar29 * fVar56 + (float)*puVar25 * fVar64 +
                                  (float)*puVar26 * fVar69 + (float)*puVar2 * fVar74 +
                                  (float)*puVar3 * fVar76);
                fVar46 = (float)puVar29[1] * fVar56 + (float)puVar25[1] * fVar64 +
                         (float)puVar26[1] * fVar69 + (float)puVar2[1] * fVar74 +
                         (float)puVar3[1] * fVar76;
                uVar49 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar74 +
                                  *(float *)((long)puVar3 + 0x14) * fVar76,
                                  (float)puVar29[2] * fVar56 + (float)puVar25[2] * fVar64 +
                                  (float)puVar26[2] * fVar69 + (float)puVar2[2] * fVar74 +
                                  *(float *)(puVar3 + 2) * fVar76);
                fVar47 = (float)puVar29[3] * fVar56 + (float)puVar25[3] * fVar64 +
                         (float)puVar26[3] * fVar69 + (float)puVar2[3] * fVar74 +
                         *(float *)(puVar3 + 3) * fVar76;
                uVar50 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar76,
                                  (float)puVar29[4] * fVar56 + (float)puVar25[4] * fVar64 +
                                  (float)puVar26[4] * fVar69 + (float)puVar2[4] * fVar74 +
                                  (float)puVar3[4] * fVar76);
                fVar53 = (float)puVar29[5] * fVar56 + (float)puVar25[5] * fVar64 +
                         (float)puVar26[5] * fVar69 + (float)puVar2[5] * fVar74 +
                         (float)puVar3[5] * fVar76;
                uVar65 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar76,
                                  (float)puVar29[6] * fVar56 + (float)puVar25[6] * fVar64 +
                                  (float)puVar26[6] * fVar69 + (float)puVar2[6] * fVar74 +
                                  (float)puVar3[6] * fVar76);
                fVar56 = (float)puVar29[7] * fVar56 + (float)puVar25[7] * fVar64 +
                         (float)puVar26[7] * fVar69 + (float)puVar2[7] * fVar74 +
                         (float)puVar3[7] * fVar76;
                break;
              case 6:
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar64 = fVar64 * fVar19;
                pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                pbVar36 = pbVar35 + 0xc;
                fVar69 = fVar69 * fVar19;
                fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar74 = fVar74 * fVar19;
                fVar70 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                fVar76 = fVar76 * fVar19;
                fVar70 = fVar70 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar74 + pfVar1[1] * fVar76 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar70,
                                  (float)*puVar29 * fVar56 + (float)*puVar25 * fVar64 +
                                  (float)*puVar26 * fVar69 + (float)*puVar2 * fVar74 +
                                  *pfVar1 * fVar76 + (float)*puVar3 * fVar70);
                fVar46 = (float)puVar29[1] * fVar56 + (float)puVar25[1] * fVar64 +
                         (float)puVar26[1] * fVar69 + (float)puVar2[1] * fVar74 + pfVar1[2] * fVar76
                         + (float)puVar3[1] * fVar70;
                uVar49 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar74 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar76 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar70,
                                  (float)puVar29[2] * fVar56 + (float)puVar25[2] * fVar64 +
                                  (float)puVar26[2] * fVar69 + (float)puVar2[2] * fVar74 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar76 +
                                  (float)puVar3[2] * fVar70);
                fVar47 = (float)puVar29[3] * fVar56 + (float)puVar25[3] * fVar64 +
                         (float)puVar26[3] * fVar69 + (float)puVar2[3] * fVar74 +
                         (float)*(undefined8 *)(pfVar1 + 6) * fVar76 + (float)puVar3[3] * fVar70;
                uVar50 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar74 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar76 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar70,
                                  (float)puVar29[4] * fVar56 + (float)puVar25[4] * fVar64 +
                                  (float)puVar26[4] * fVar69 + (float)puVar2[4] * fVar74 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar76 +
                                  (float)puVar3[4] * fVar70);
                fVar53 = (float)puVar29[5] * fVar56 + (float)puVar25[5] * fVar64 +
                         (float)puVar26[5] * fVar69 + (float)puVar2[5] * fVar74 +
                         (float)*(undefined8 *)(pfVar1 + 10) * fVar76 + (float)puVar3[5] * fVar70;
                uVar65 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar69 +
                                  *(float *)((long)puVar2 + 0x34) * fVar74 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar76 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar70,
                                  (float)puVar29[6] * fVar56 + (float)puVar25[6] * fVar64 +
                                  (float)puVar26[6] * fVar69 + *(float *)(puVar2 + 6) * fVar74 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar76 +
                                  (float)puVar3[6] * fVar70);
                fVar56 = (float)puVar29[7] * fVar56 + (float)puVar25[7] * fVar64 +
                         (float)puVar26[7] * fVar69 + *(float *)(puVar2 + 7) * fVar74 +
                         (float)*(undefined8 *)(pfVar1 + 0xe) * fVar76 + (float)puVar3[7] * fVar70;
                puVar45 = (undefined2 *)PTR_DAT_04bd4d90;
                break;
              case 7:
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar64 = fVar64 * fVar19;
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                fVar69 = fVar69 * fVar19;
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                fVar74 = fVar74 * fVar19;
                pbVar36 = pbVar35 + 0xe;
                fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar70 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                fVar75 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                fVar76 = fVar76 * fVar19;
                fVar70 = fVar70 * fVar19;
                fVar75 = fVar75 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar74 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar76 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar70 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar75,
                                  (float)*puVar29 * fVar56 + (float)*puVar25 * fVar64 +
                                  (float)*puVar26 * fVar69 + (float)*puVar2 * fVar74 +
                                  (float)*puVar3 * fVar76 + (float)*puVar4 * fVar70 +
                                  (float)*puVar5 * fVar75);
                fVar46 = (float)puVar29[1] * fVar56 + (float)puVar25[1] * fVar64 +
                         (float)puVar26[1] * fVar69 + (float)puVar2[1] * fVar74 +
                         (float)puVar3[1] * fVar76 + (float)puVar4[1] * fVar70 +
                         (float)puVar5[1] * fVar75;
                uVar49 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar76 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar70 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar75,
                                  (float)puVar29[2] * fVar56 + (float)puVar25[2] * fVar64 +
                                  (float)puVar26[2] * fVar69 + (float)puVar2[2] * fVar74 +
                                  (float)puVar3[2] * fVar76 + (float)puVar4[2] * fVar70 +
                                  (float)puVar5[2] * fVar75);
                fVar47 = (float)puVar29[3] * fVar56 + (float)puVar25[3] * fVar64 +
                         (float)puVar26[3] * fVar69 + (float)puVar2[3] * fVar74 +
                         (float)puVar3[3] * fVar76 + (float)puVar4[3] * fVar70 +
                         (float)puVar5[3] * fVar75;
                uVar50 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar69 +
                                  *(float *)((long)puVar2 + 0x24) * fVar74 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar76 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar70 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar75,
                                  (float)puVar29[4] * fVar56 + (float)puVar25[4] * fVar64 +
                                  (float)puVar26[4] * fVar69 + *(float *)(puVar2 + 4) * fVar74 +
                                  (float)puVar3[4] * fVar76 + (float)puVar4[4] * fVar70 +
                                  (float)puVar5[4] * fVar75);
                fVar53 = (float)puVar29[5] * fVar56 + (float)puVar25[5] * fVar64 +
                         (float)puVar26[5] * fVar69 + *(float *)(puVar2 + 5) * fVar74 +
                         (float)puVar3[5] * fVar76 + (float)puVar4[5] * fVar70 +
                         (float)puVar5[5] * fVar75;
                uVar65 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar76 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar70 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar75,
                                  (float)puVar29[6] * fVar56 + (float)puVar25[6] * fVar64 +
                                  (float)puVar26[6] * fVar69 + (float)puVar2[6] * fVar74 +
                                  (float)puVar3[6] * fVar76 + (float)puVar4[6] * fVar70 +
                                  (float)puVar5[6] * fVar75);
                fVar56 = (float)puVar29[7] * fVar56 + (float)puVar25[7] * fVar64 +
                         (float)puVar26[7] * fVar69 + (float)puVar2[7] * fVar74 +
                         (float)puVar3[7] * fVar76 + (float)puVar4[7] * fVar70 +
                         (float)puVar5[7] * fVar75;
                puVar45 = &DAT_04c6f410;
                break;
              case 8:
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                fVar69 = fVar69 * fVar19;
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar74 = fVar74 * fVar19;
                fVar76 = fVar76 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar70 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar75 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                fVar77 = (float)NEON_ucvtf((uint)pbVar35[0xf]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                fVar64 = fVar64 * fVar19;
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                fVar70 = fVar70 * fVar19;
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xe] * 0x40);
                fVar75 = fVar75 * fVar19;
                pbVar36 = pbVar35 + 0x10;
                fVar77 = fVar77 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar74 + pfVar1[1] * fVar76 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar70 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar75 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar77,
                                  (float)*puVar29 * fVar56 + (float)*puVar3 * fVar64 +
                                  (float)*puVar25 * fVar69 + (float)*puVar26 * fVar74 +
                                  *pfVar1 * fVar76 + (float)*puVar2 * fVar70 +
                                  (float)*puVar4 * fVar75 + (float)*puVar5 * fVar77);
                fVar46 = (float)puVar29[1] * fVar56 + (float)puVar3[1] * fVar64 +
                         (float)puVar25[1] * fVar69 + (float)puVar26[1] * fVar74 +
                         pfVar1[2] * fVar76 + (float)puVar2[1] * fVar70 + (float)puVar4[1] * fVar75
                         + (float)puVar5[1] * fVar77;
                uVar49 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar74 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar76 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar70 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar75 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar77,
                                  (float)puVar29[2] * fVar56 + (float)puVar3[2] * fVar64 +
                                  (float)puVar25[2] * fVar69 + (float)puVar26[2] * fVar74 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar76 +
                                  (float)puVar2[2] * fVar70 + (float)puVar4[2] * fVar75 +
                                  (float)puVar5[2] * fVar77);
                fVar47 = (float)puVar29[3] * fVar56 + (float)puVar3[3] * fVar64 +
                         (float)puVar25[3] * fVar69 + (float)puVar26[3] * fVar74 +
                         (float)*(undefined8 *)(pfVar1 + 6) * fVar76 + (float)puVar2[3] * fVar70 +
                         (float)puVar4[3] * fVar75 + (float)puVar5[3] * fVar77;
                uVar50 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar74 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar76 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar70 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar75 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar77,
                                  (float)puVar29[4] * fVar56 + (float)puVar3[4] * fVar64 +
                                  (float)puVar25[4] * fVar69 + (float)puVar26[4] * fVar74 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar76 +
                                  (float)puVar2[4] * fVar70 + (float)puVar4[4] * fVar75 +
                                  (float)puVar5[4] * fVar77);
                fVar53 = (float)puVar29[5] * fVar56 + (float)puVar3[5] * fVar64 +
                         (float)puVar25[5] * fVar69 + (float)puVar26[5] * fVar74 +
                         (float)*(undefined8 *)(pfVar1 + 10) * fVar76 + (float)puVar2[5] * fVar70 +
                         (float)puVar4[5] * fVar75 + (float)puVar5[5] * fVar77;
                uVar65 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar69 +
                                  *(float *)((long)puVar26 + 0x34) * fVar74 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar76 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar70 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar75 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar77,
                                  (float)puVar29[6] * fVar56 + (float)puVar3[6] * fVar64 +
                                  (float)puVar25[6] * fVar69 + *(float *)(puVar26 + 6) * fVar74 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar76 +
                                  (float)puVar2[6] * fVar70 + (float)puVar4[6] * fVar75 +
                                  (float)puVar5[6] * fVar77);
                fVar56 = (float)puVar29[7] * fVar56 + (float)puVar3[7] * fVar64 +
                         (float)puVar25[7] * fVar69 + *(float *)(puVar26 + 7) * fVar74 +
                         (float)*(undefined8 *)(pfVar1 + 0xe) * fVar76 + (float)puVar2[7] * fVar70 +
                         (float)puVar4[7] * fVar75 + (float)puVar5[7] * fVar77;
                puVar45 = (undefined2 *)PTR_DAT_04bd4d90;
                break;
              default:
                uVar65 = 0;
                fVar56 = 0.0;
                fVar46 = 0.0;
                uVar48 = 0;
                fVar47 = 0.0;
                uVar49 = 0;
                fVar53 = 0.0;
                uVar50 = 0;
              }
              fVar76 = (float)*puVar41;
              fVar77 = (float)uVar48;
              fVar52 = (float)((ulong)uVar48 >> 0x20);
              fVar70 = (float)((ulong)*puVar41 >> 0x20);
              fVar54 = (float)uVar49;
              fVar55 = (float)((ulong)uVar49 >> 0x20);
              fVar75 = (float)puVar41[1];
              fVar57 = (float)uVar50;
              fVar58 = (float)((ulong)uVar50 >> 0x20);
              fVar64 = (float)*puVar42;
              fVar69 = (float)((ulong)*puVar42 >> 0x20);
              fVar59 = (float)*puVar30;
              fVar60 = (float)((ulong)*puVar30 >> 0x20);
              fVar74 = (float)puVar42[1];
              fVar61 = (float)puVar30[1];
              *puVar44 = CONCAT44(fVar58 * fVar75 +
                                  fVar55 * fVar70 + fVar52 * fVar76 + (float)((ulong)uVar65 >> 0x20)
                                  ,fVar57 * fVar75 +
                                   fVar54 * fVar70 + fVar77 * fVar76 + (float)uVar65);
              *(float *)(puVar44 + 1) = fVar53 * fVar75 + fVar47 * fVar70 + fVar46 * fVar76 + fVar56
              ;
              *(ulong *)pbVar27 =
                   CONCAT44(fVar58 * fVar74 + fVar52 * fVar64 + fVar55 * fVar69,
                            fVar57 * fVar74 + fVar77 * fVar64 + fVar54 * fVar69);
              *(float *)(pbVar27 + 8) = fVar53 * fVar74 + fVar46 * fVar64 + fVar47 * fVar69;
              *puVar31 = CONCAT44(fVar58 * fVar61 + fVar52 * fVar59 + fVar55 * fVar60,
                                  fVar57 * fVar61 + fVar77 * fVar59 + fVar54 * fVar60);
              *(float *)(puVar31 + 1) = fVar53 * fVar61 + fVar46 * fVar59 + fVar47 * fVar60;
            }
            puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar12);
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar38);
            puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar34);
            puVar44 = (undefined8 *)((long)puVar44 + (ulong)bVar11);
            pbVar27 = pbVar27 + bVar37;
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)bVar43);
            iVar33 = iVar33 + -1;
            puVar32 = puVar32 + 1;
            pbVar35 = pbVar36;
          } while (iVar33 != 0);
        }
      }
      else {
        if (lVar40 != 0) {
          FUN_00443a00(lVar40,"TtSkinBatch");
          pbVar27 = extraout_x1_01;
        }
        fVar19 = DAT_04102ed4;
        puVar32 = (ushort *)param_2[3];
        pbVar35 = (byte *)(param_2[2] + (ulong)*puVar32 * 2);
        Hint_Prefetch(pbVar35,0,0,0);
        lVar40 = *param_2;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x40,0,0,0);
        Hint_Prefetch(lVar40 + 0x80,0,0,0);
        Hint_Prefetch(lVar40 + 0xc0,0,0,0);
        iVar33 = (int)param_2[8];
        if (iVar33 != 0) {
          bVar43 = *(byte *)((long)param_2 + 0x1a4);
          bVar34 = *(byte *)((long)param_2 + 0x84);
          bVar37 = *(byte *)((long)param_2 + 0x18c);
          bVar38 = *(byte *)((long)param_2 + 0x6c);
          bVar11 = *(byte *)((long)param_2 + 0x164);
          bVar12 = *(byte *)((long)param_2 + 0x44);
          puVar31 = (undefined8 *)param_2[0x33];
          puVar30 = (undefined8 *)param_2[0xf];
          pbVar27 = (byte *)param_2[0x30];
          puVar42 = (undefined8 *)param_2[0xc];
          puVar44 = (undefined8 *)param_2[0x2b];
          puVar41 = (undefined8 *)param_2[7];
          do {
            lVar10 = (long)puVar41 + (ulong)bVar12 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            lVar28 = (long)puVar42 + (ulong)bVar38 * 4;
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar30 + (ulong)bVar34 * 4;
            Hint_Prefetch(lVar28,0,0,0);
            Hint_Prefetch(lVar28 + 0x40,0,0,0);
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar44 + (ulong)bVar11 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4,0,0,0);
            Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4 + 0x40,0,0,0);
            lVar10 = (long)puVar31 + (ulong)bVar43 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            uVar18 = (uint)puVar32[1] - (uint)*puVar32;
            Hint_Prefetch(puVar32 + 2,0,0,0);
            pbVar36 = pbVar35;
            if ((uint)*puVar32 <= (uint)puVar32[1] && uVar18 != 0) {
              Hint_Prefetch(pbVar35 + (ulong)(ushort)uVar18 * 2,0,0,0);
              switch(uVar18 & 0xffff) {
              case 1:
                pbVar36 = pbVar35 + 2;
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                uVar49 = puVar29[1];
                uVar48 = *puVar29;
                uVar65 = puVar29[3];
                uVar50 = puVar29[2];
                uVar72 = puVar29[5];
                uVar51 = puVar29[4];
                uVar73 = puVar29[7];
                uVar71 = puVar29[6];
                break;
              case 2:
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                fVar47 = fVar47 * fVar19;
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                pbVar36 = pbVar35 + 4;
                fVar46 = fVar46 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar46,
                                  (float)*puVar29 * fVar47 + (float)*puVar25 * fVar46);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar46,
                                  (float)puVar29[1] * fVar47 + (float)puVar25[1] * fVar46);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar46,
                                  (float)puVar29[2] * fVar47 + (float)puVar25[2] * fVar46);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar46,
                                  (float)puVar29[3] * fVar47 + (float)puVar25[3] * fVar46);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar46,
                                  (float)puVar29[4] * fVar47 + (float)puVar25[4] * fVar46);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar46,
                                  (float)puVar29[5] * fVar47 + (float)puVar25[5] * fVar46);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar46,
                                  (float)puVar29[6] * fVar47 + (float)puVar25[6] * fVar46);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar46,
                                  (float)puVar29[7] * fVar47 + (float)puVar25[7] * fVar46);
                break;
              case 3:
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                pbVar36 = pbVar35 + 6;
                fVar46 = fVar46 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53,
                                  (float)*puVar29 * fVar47 + (float)*puVar25 * fVar46 +
                                  (float)*puVar26 * fVar53);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53,
                                  (float)puVar29[1] * fVar47 + (float)puVar25[1] * fVar46 +
                                  (float)puVar26[1] * fVar53);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53,
                                  (float)puVar29[2] * fVar47 + (float)puVar25[2] * fVar46 +
                                  (float)puVar26[2] * fVar53);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53,
                                  (float)puVar29[3] * fVar47 + (float)puVar25[3] * fVar46 +
                                  (float)puVar26[3] * fVar53);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53,
                                  (float)puVar29[4] * fVar47 + (float)puVar25[4] * fVar46 +
                                  (float)puVar26[4] * fVar53);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53,
                                  (float)puVar29[5] * fVar47 + (float)puVar25[5] * fVar46 +
                                  (float)puVar26[5] * fVar53);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53,
                                  (float)puVar29[6] * fVar47 + (float)puVar25[6] * fVar46 +
                                  (float)puVar26[6] * fVar53);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53,
                                  (float)puVar29[7] * fVar47 + (float)puVar25[7] * fVar46 +
                                  (float)puVar26[7] * fVar53);
                break;
              case 4:
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar46 = fVar46 * fVar19;
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                pbVar36 = pbVar35 + 8;
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                fVar56 = fVar56 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar56,
                                  (float)*puVar29 * fVar47 + (float)*puVar25 * fVar46 +
                                  (float)*puVar26 * fVar53 + (float)*puVar2 * fVar56);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar56,
                                  (float)puVar29[1] * fVar47 + (float)puVar25[1] * fVar46 +
                                  (float)puVar26[1] * fVar53 + (float)puVar2[1] * fVar56);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar56,
                                  (float)puVar29[2] * fVar47 + (float)puVar25[2] * fVar46 +
                                  (float)puVar26[2] * fVar53 + (float)puVar2[2] * fVar56);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar56,
                                  (float)puVar29[3] * fVar47 + (float)puVar25[3] * fVar46 +
                                  (float)puVar26[3] * fVar53 + (float)puVar2[3] * fVar56);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar56,
                                  (float)puVar29[4] * fVar47 + (float)puVar25[4] * fVar46 +
                                  (float)puVar26[4] * fVar53 + (float)puVar2[4] * fVar56);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar56,
                                  (float)puVar29[5] * fVar47 + (float)puVar25[5] * fVar46 +
                                  (float)puVar26[5] * fVar53 + (float)puVar2[5] * fVar56);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar56,
                                  (float)puVar29[6] * fVar47 + (float)puVar25[6] * fVar46 +
                                  (float)puVar26[6] * fVar53 + (float)puVar2[6] * fVar56);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar56,
                                  (float)puVar29[7] * fVar47 + (float)puVar25[7] * fVar46 +
                                  (float)puVar26[7] * fVar53 + (float)puVar2[7] * fVar56);
                break;
              case 5:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                pbVar36 = pbVar35 + 10;
                fVar56 = fVar56 * fVar19;
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar64 = fVar64 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar64,
                                  (float)*puVar29 * fVar46 + (float)*puVar25 * fVar47 +
                                  (float)*puVar26 * fVar53 + (float)*puVar2 * fVar56 +
                                  (float)*puVar3 * fVar64);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar64,
                                  (float)puVar29[1] * fVar46 + (float)puVar25[1] * fVar47 +
                                  (float)puVar26[1] * fVar53 + (float)puVar2[1] * fVar56 +
                                  (float)puVar3[1] * fVar64);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                  *(float *)((long)puVar3 + 0x14) * fVar64,
                                  (float)puVar29[2] * fVar46 + (float)puVar25[2] * fVar47 +
                                  (float)puVar26[2] * fVar53 + (float)puVar2[2] * fVar56 +
                                  *(float *)(puVar3 + 2) * fVar64);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar56 +
                                  *(float *)((long)puVar3 + 0x1c) * fVar64,
                                  (float)puVar29[3] * fVar46 + (float)puVar25[3] * fVar47 +
                                  (float)puVar26[3] * fVar53 + (float)puVar2[3] * fVar56 +
                                  *(float *)(puVar3 + 3) * fVar64);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar64,
                                  (float)puVar29[4] * fVar46 + (float)puVar25[4] * fVar47 +
                                  (float)puVar26[4] * fVar53 + (float)puVar2[4] * fVar56 +
                                  (float)puVar3[4] * fVar64);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar64,
                                  (float)puVar29[5] * fVar46 + (float)puVar25[5] * fVar47 +
                                  (float)puVar26[5] * fVar53 + (float)puVar2[5] * fVar56 +
                                  (float)puVar3[5] * fVar64);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar64,
                                  (float)puVar29[6] * fVar46 + (float)puVar25[6] * fVar47 +
                                  (float)puVar26[6] * fVar53 + (float)puVar2[6] * fVar56 +
                                  (float)puVar3[6] * fVar64);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar64,
                                  (float)puVar29[7] * fVar46 + (float)puVar25[7] * fVar47 +
                                  (float)puVar26[7] * fVar53 + (float)puVar2[7] * fVar56 +
                                  (float)puVar3[7] * fVar64);
                break;
              case 6:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                pbVar36 = pbVar35 + 0xc;
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                fVar64 = fVar64 * fVar19;
                fVar69 = fVar69 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar56 + pfVar1[1] * fVar64 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar69,
                                  (float)*puVar29 * fVar46 + (float)*puVar25 * fVar47 +
                                  (float)*puVar26 * fVar53 + (float)*puVar2 * fVar56 +
                                  *pfVar1 * fVar64 + (float)*puVar3 * fVar69);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar69,
                                  (float)puVar29[1] * fVar46 + (float)puVar25[1] * fVar47 +
                                  (float)puVar26[1] * fVar53 + (float)puVar2[1] * fVar56 +
                                  pfVar1[2] * fVar64 + (float)puVar3[1] * fVar69);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar69,
                                  (float)puVar29[2] * fVar46 + (float)puVar25[2] * fVar47 +
                                  (float)puVar26[2] * fVar53 + (float)puVar2[2] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar64 +
                                  (float)puVar3[2] * fVar69);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar69,
                                  (float)puVar29[3] * fVar46 + (float)puVar25[3] * fVar47 +
                                  (float)puVar26[3] * fVar53 + (float)puVar2[3] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 6) * fVar64 +
                                  (float)puVar3[3] * fVar69);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar69,
                                  (float)puVar29[4] * fVar46 + (float)puVar25[4] * fVar47 +
                                  (float)puVar26[4] * fVar53 + (float)puVar2[4] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar64 +
                                  (float)puVar3[4] * fVar69);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar69,
                                  (float)puVar29[5] * fVar46 + (float)puVar25[5] * fVar47 +
                                  (float)puVar26[5] * fVar53 + (float)puVar2[5] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 10) * fVar64 +
                                  (float)puVar3[5] * fVar69);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar2 + 0x34) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar69,
                                  (float)puVar29[6] * fVar46 + (float)puVar25[6] * fVar47 +
                                  (float)puVar26[6] * fVar53 + *(float *)(puVar2 + 6) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64 +
                                  (float)puVar3[6] * fVar69);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar2 + 0x3c) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar69,
                                  (float)puVar29[7] * fVar46 + (float)puVar25[7] * fVar47 +
                                  (float)puVar26[7] * fVar53 + *(float *)(puVar2 + 7) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64 +
                                  (float)puVar3[7] * fVar69);
                puVar45 = (undefined2 *)PTR_DAT_04bd4d90;
                break;
              case 7:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                fVar53 = fVar53 * fVar19;
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                fVar56 = fVar56 * fVar19;
                pbVar36 = pbVar35 + 0xe;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                fVar64 = fVar64 * fVar19;
                fVar69 = fVar69 * fVar19;
                fVar74 = fVar74 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar74,
                                  (float)*puVar29 * fVar46 + (float)*puVar25 * fVar47 +
                                  (float)*puVar26 * fVar53 + (float)*puVar2 * fVar56 +
                                  (float)*puVar3 * fVar64 + (float)*puVar4 * fVar69 +
                                  (float)*puVar5 * fVar74);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar74,
                                  (float)puVar29[1] * fVar46 + (float)puVar25[1] * fVar47 +
                                  (float)puVar26[1] * fVar53 + (float)puVar2[1] * fVar56 +
                                  (float)puVar3[1] * fVar64 + (float)puVar4[1] * fVar69 +
                                  (float)puVar5[1] * fVar74);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar74,
                                  (float)puVar29[2] * fVar46 + (float)puVar25[2] * fVar47 +
                                  (float)puVar26[2] * fVar53 + (float)puVar2[2] * fVar56 +
                                  (float)puVar3[2] * fVar64 + (float)puVar4[2] * fVar69 +
                                  (float)puVar5[2] * fVar74);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar74,
                                  (float)puVar29[3] * fVar46 + (float)puVar25[3] * fVar47 +
                                  (float)puVar26[3] * fVar53 + (float)puVar2[3] * fVar56 +
                                  (float)puVar3[3] * fVar64 + (float)puVar4[3] * fVar69 +
                                  (float)puVar5[3] * fVar74);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar2 + 0x24) * fVar56 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar74,
                                  (float)puVar29[4] * fVar46 + (float)puVar25[4] * fVar47 +
                                  (float)puVar26[4] * fVar53 + *(float *)(puVar2 + 4) * fVar56 +
                                  (float)puVar3[4] * fVar64 + (float)puVar4[4] * fVar69 +
                                  (float)puVar5[4] * fVar74);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar2 + 0x2c) * fVar56 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar74,
                                  (float)puVar29[5] * fVar46 + (float)puVar25[5] * fVar47 +
                                  (float)puVar26[5] * fVar53 + *(float *)(puVar2 + 5) * fVar56 +
                                  (float)puVar3[5] * fVar64 + (float)puVar4[5] * fVar69 +
                                  (float)puVar5[5] * fVar74);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar74,
                                  (float)puVar29[6] * fVar46 + (float)puVar25[6] * fVar47 +
                                  (float)puVar26[6] * fVar53 + (float)puVar2[6] * fVar56 +
                                  (float)puVar3[6] * fVar64 + (float)puVar4[6] * fVar69 +
                                  (float)puVar5[6] * fVar74);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar74,
                                  (float)puVar29[7] * fVar46 + (float)puVar25[7] * fVar47 +
                                  (float)puVar26[7] * fVar53 + (float)puVar2[7] * fVar56 +
                                  (float)puVar3[7] * fVar64 + (float)puVar4[7] * fVar69 +
                                  (float)puVar5[7] * fVar74);
                puVar45 = &DAT_04c6f410;
                break;
              case 8:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                fVar53 = fVar53 * fVar19;
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar56 = fVar56 * fVar19;
                fVar64 = fVar64 * fVar19;
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                fVar76 = (float)NEON_ucvtf((uint)pbVar35[0xf]);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar4 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                fVar69 = fVar69 * fVar19;
                puVar5 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xe] * 0x40);
                fVar74 = fVar74 * fVar19;
                pbVar36 = pbVar35 + 0x10;
                fVar76 = fVar76 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar29 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar56 + pfVar1[1] * fVar64 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar4 >> 0x20) * fVar74 +
                                  (float)((ulong)*puVar5 >> 0x20) * fVar76,
                                  (float)*puVar29 * fVar46 + (float)*puVar3 * fVar47 +
                                  (float)*puVar25 * fVar53 + (float)*puVar26 * fVar56 +
                                  *pfVar1 * fVar64 + (float)*puVar2 * fVar69 +
                                  (float)*puVar4 * fVar74 + (float)*puVar5 * fVar76);
                uVar49 = CONCAT44((float)((ulong)puVar29[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[1] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[1] >> 0x20) * fVar76,
                                  (float)puVar29[1] * fVar46 + (float)puVar3[1] * fVar47 +
                                  (float)puVar25[1] * fVar53 + (float)puVar26[1] * fVar56 +
                                  pfVar1[2] * fVar64 + (float)puVar2[1] * fVar69 +
                                  (float)puVar4[1] * fVar74 + (float)puVar5[1] * fVar76);
                uVar50 = CONCAT44((float)((ulong)puVar29[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[2] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[2] >> 0x20) * fVar76,
                                  (float)puVar29[2] * fVar46 + (float)puVar3[2] * fVar47 +
                                  (float)puVar25[2] * fVar53 + (float)puVar26[2] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar64 +
                                  (float)puVar2[2] * fVar69 + (float)puVar4[2] * fVar74 +
                                  (float)puVar5[2] * fVar76);
                uVar65 = CONCAT44((float)((ulong)puVar29[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[3] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[3] >> 0x20) * fVar76,
                                  (float)puVar29[3] * fVar46 + (float)puVar3[3] * fVar47 +
                                  (float)puVar25[3] * fVar53 + (float)puVar26[3] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 6) * fVar64 +
                                  (float)puVar2[3] * fVar69 + (float)puVar4[3] * fVar74 +
                                  (float)puVar5[3] * fVar76);
                uVar51 = CONCAT44((float)((ulong)puVar29[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[4] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[4] >> 0x20) * fVar76,
                                  (float)puVar29[4] * fVar46 + (float)puVar3[4] * fVar47 +
                                  (float)puVar25[4] * fVar53 + (float)puVar26[4] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar64 +
                                  (float)puVar2[4] * fVar69 + (float)puVar4[4] * fVar74 +
                                  (float)puVar5[4] * fVar76);
                uVar72 = CONCAT44((float)((ulong)puVar29[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[5] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[5] >> 0x20) * fVar76,
                                  (float)puVar29[5] * fVar46 + (float)puVar3[5] * fVar47 +
                                  (float)puVar25[5] * fVar53 + (float)puVar26[5] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 10) * fVar64 +
                                  (float)puVar2[5] * fVar69 + (float)puVar4[5] * fVar74 +
                                  (float)puVar5[5] * fVar76);
                uVar71 = CONCAT44((float)((ulong)puVar29[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar26 + 0x34) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[6] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[6] >> 0x20) * fVar76,
                                  (float)puVar29[6] * fVar46 + (float)puVar3[6] * fVar47 +
                                  (float)puVar25[6] * fVar53 + *(float *)(puVar26 + 6) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64 +
                                  (float)puVar2[6] * fVar69 + (float)puVar4[6] * fVar74 +
                                  (float)puVar5[6] * fVar76);
                uVar73 = CONCAT44((float)((ulong)puVar29[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar26 + 0x3c) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar4[7] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar5[7] >> 0x20) * fVar76,
                                  (float)puVar29[7] * fVar46 + (float)puVar3[7] * fVar47 +
                                  (float)puVar25[7] * fVar53 + *(float *)(puVar26 + 7) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64 +
                                  (float)puVar2[7] * fVar69 + (float)puVar4[7] * fVar74 +
                                  (float)puVar5[7] * fVar76);
                puVar45 = (undefined2 *)PTR_DAT_04bd4d90;
                break;
              default:
                uVar71 = 0;
                uVar73 = 0;
                uVar49 = 0;
                uVar48 = 0;
                uVar65 = 0;
                uVar50 = 0;
                uVar72 = 0;
                uVar51 = 0;
              }
              fVar56 = (float)*puVar41;
              fVar74 = (float)uVar48;
              fVar76 = (float)((ulong)uVar48 >> 0x20);
              fVar70 = (float)uVar49;
              fVar75 = (float)((ulong)uVar49 >> 0x20);
              fVar64 = (float)((ulong)*puVar41 >> 0x20);
              fVar77 = (float)uVar50;
              fVar52 = (float)((ulong)uVar50 >> 0x20);
              fVar54 = (float)uVar65;
              fVar55 = (float)((ulong)uVar65 >> 0x20);
              fVar69 = (float)puVar41[1];
              fVar57 = (float)uVar51;
              fVar58 = (float)((ulong)uVar51 >> 0x20);
              fVar59 = (float)uVar72;
              fVar60 = (float)((ulong)uVar72 >> 0x20);
              fVar46 = (float)*puVar42;
              fVar47 = (float)((ulong)*puVar42 >> 0x20);
              fVar61 = (float)*puVar30;
              fVar62 = (float)((ulong)*puVar30 >> 0x20);
              fVar53 = (float)puVar42[1];
              fVar63 = (float)puVar30[1];
              puVar44[1] = CONCAT44(fVar60 * fVar69 +
                                    fVar55 * fVar64 +
                                    fVar75 * fVar56 + (float)((ulong)uVar73 >> 0x20),
                                    fVar59 * fVar69 +
                                    fVar54 * fVar64 + fVar70 * fVar56 + (float)uVar73);
              *puVar44 = CONCAT44(fVar58 * fVar69 +
                                  fVar52 * fVar64 + fVar76 * fVar56 + (float)((ulong)uVar71 >> 0x20)
                                  ,fVar57 * fVar69 +
                                   fVar77 * fVar64 + fVar74 * fVar56 + (float)uVar71);
              *(ulong *)(pbVar27 + 8) =
                   CONCAT44(fVar60 * fVar53 + fVar75 * fVar46 + fVar55 * fVar47,
                            fVar59 * fVar53 + fVar70 * fVar46 + fVar54 * fVar47);
              *(ulong *)pbVar27 =
                   CONCAT44(fVar58 * fVar53 + fVar76 * fVar46 + fVar52 * fVar47,
                            fVar57 * fVar53 + fVar74 * fVar46 + fVar77 * fVar47);
              *puVar31 = CONCAT44(fVar58 * fVar63 + fVar76 * fVar61 + fVar52 * fVar62,
                                  fVar57 * fVar63 + fVar74 * fVar61 + fVar77 * fVar62);
              *(float *)(puVar31 + 1) = fVar59 * fVar63 + fVar70 * fVar61 + fVar54 * fVar62;
            }
            puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar12);
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar38);
            puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar34);
            puVar44 = (undefined8 *)((long)puVar44 + (ulong)bVar11);
            pbVar27 = pbVar27 + bVar37;
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)bVar43);
            iVar33 = iVar33 + -1;
            puVar32 = puVar32 + 1;
            pbVar35 = pbVar36;
          } while (iVar33 != 0);
        }
      }
    }
    else if ((bool)(bVar20 & bVar21)) {
      if (((bVar43 ^ 1) == 0) && (bVar34 == 1)) {
        auVar78 = FUN_0043c4e0(DAT_04c6f410);
        pbVar27 = auVar78._8_8_;
        if (auVar78._0_8_ != 0) {
          FUN_00443a00(auVar78._0_8_,"TtSkinBatch");
          pbVar27 = extraout_x1_00;
        }
        fVar19 = DAT_04102ed4;
        puVar32 = (ushort *)param_2[3];
        pbVar35 = (byte *)(param_2[2] + (ulong)*puVar32 * 2);
        Hint_Prefetch(pbVar35,0,0,0);
        lVar40 = *param_2;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x40,0,0,0);
        Hint_Prefetch(lVar40 + 0x80,0,0,0);
        Hint_Prefetch(lVar40 + 0xc0,0,0,0);
        iVar33 = (int)param_2[8];
        if (iVar33 != 0) {
          bVar43 = *(byte *)((long)param_2 + 0x18c);
          bVar34 = *(byte *)((long)param_2 + 0x6c);
          bVar37 = *(byte *)((long)param_2 + 0x164);
          bVar38 = *(byte *)((long)param_2 + 0x44);
          puVar30 = (undefined8 *)param_2[0x30];
          puVar42 = (undefined8 *)param_2[0xc];
          pbVar27 = (byte *)param_2[0x2b];
          puVar41 = (undefined8 *)param_2[7];
          do {
            lVar10 = (long)puVar41 + (ulong)bVar38 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar42 + (ulong)bVar34 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4,0,0,0);
            Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4 + 0x40,0,0,0);
            lVar10 = (long)puVar30 + (ulong)bVar43 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            uVar18 = (uint)puVar32[1] - (uint)*puVar32;
            Hint_Prefetch(puVar32 + 2,0,0,0);
            pbVar36 = pbVar35;
            if ((uint)*puVar32 <= (uint)puVar32[1] && uVar18 != 0) {
              Hint_Prefetch(pbVar35 + (ulong)(ushort)uVar18 * 2,0,0,0);
              switch(uVar18 & 0xffff) {
              case 1:
                pbVar36 = pbVar35 + 2;
                puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                uVar49 = puVar44[1];
                uVar48 = *puVar44;
                uVar65 = puVar44[3];
                uVar50 = puVar44[2];
                uVar72 = puVar44[5];
                uVar51 = puVar44[4];
                uVar73 = puVar44[7];
                uVar71 = puVar44[6];
                break;
              case 2:
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                fVar47 = fVar47 * fVar19;
                puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                pbVar36 = pbVar35 + 4;
                fVar46 = fVar46 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar31 >> 0x20) * fVar46,
                                  (float)*puVar44 * fVar47 + (float)*puVar31 * fVar46);
                uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[1] >> 0x20) * fVar46,
                                  (float)puVar44[1] * fVar47 + (float)puVar31[1] * fVar46);
                uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[2] >> 0x20) * fVar46,
                                  (float)puVar44[2] * fVar47 + (float)puVar31[2] * fVar46);
                uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[3] >> 0x20) * fVar46,
                                  (float)puVar44[3] * fVar47 + (float)puVar31[3] * fVar46);
                uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[4] >> 0x20) * fVar46,
                                  (float)puVar44[4] * fVar47 + (float)puVar31[4] * fVar46);
                uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[5] >> 0x20) * fVar46,
                                  (float)puVar44[5] * fVar47 + (float)puVar31[5] * fVar46);
                uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[6] >> 0x20) * fVar46,
                                  (float)puVar44[6] * fVar47 + (float)puVar31[6] * fVar46);
                uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[7] >> 0x20) * fVar46,
                                  (float)puVar44[7] * fVar47 + (float)puVar31[7] * fVar46);
                break;
              case 3:
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                pbVar36 = pbVar35 + 6;
                fVar46 = fVar46 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar31 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar29 >> 0x20) * fVar53,
                                  (float)*puVar44 * fVar47 + (float)*puVar31 * fVar46 +
                                  (float)*puVar29 * fVar53);
                uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[1] >> 0x20) * fVar53,
                                  (float)puVar44[1] * fVar47 + (float)puVar31[1] * fVar46 +
                                  (float)puVar29[1] * fVar53);
                uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[2] >> 0x20) * fVar53,
                                  (float)puVar44[2] * fVar47 + (float)puVar31[2] * fVar46 +
                                  (float)puVar29[2] * fVar53);
                uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[3] >> 0x20) * fVar53,
                                  (float)puVar44[3] * fVar47 + (float)puVar31[3] * fVar46 +
                                  (float)puVar29[3] * fVar53);
                uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[4] >> 0x20) * fVar53,
                                  (float)puVar44[4] * fVar47 + (float)puVar31[4] * fVar46 +
                                  (float)puVar29[4] * fVar53);
                uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[5] >> 0x20) * fVar53,
                                  (float)puVar44[5] * fVar47 + (float)puVar31[5] * fVar46 +
                                  (float)puVar29[5] * fVar53);
                uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[6] >> 0x20) * fVar53,
                                  (float)puVar44[6] * fVar47 + (float)puVar31[6] * fVar46 +
                                  (float)puVar29[6] * fVar53);
                uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[7] >> 0x20) * fVar53,
                                  (float)puVar44[7] * fVar47 + (float)puVar31[7] * fVar46 +
                                  (float)puVar29[7] * fVar53);
                break;
              case 4:
                puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                fVar47 = fVar47 * fVar19;
                fVar46 = fVar46 * fVar19;
                puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                pbVar36 = pbVar35 + 8;
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                fVar56 = fVar56 * fVar19;
                fVar53 = fVar53 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar31 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar29 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar56,
                                  (float)*puVar44 * fVar47 + (float)*puVar31 * fVar46 +
                                  (float)*puVar29 * fVar53 + (float)*puVar25 * fVar56);
                uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar56,
                                  (float)puVar44[1] * fVar47 + (float)puVar31[1] * fVar46 +
                                  (float)puVar29[1] * fVar53 + (float)puVar25[1] * fVar56);
                uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar56,
                                  (float)puVar44[2] * fVar47 + (float)puVar31[2] * fVar46 +
                                  (float)puVar29[2] * fVar53 + (float)puVar25[2] * fVar56);
                uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar56,
                                  (float)puVar44[3] * fVar47 + (float)puVar31[3] * fVar46 +
                                  (float)puVar29[3] * fVar53 + (float)puVar25[3] * fVar56);
                uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar56,
                                  (float)puVar44[4] * fVar47 + (float)puVar31[4] * fVar46 +
                                  (float)puVar29[4] * fVar53 + (float)puVar25[4] * fVar56);
                uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar56,
                                  (float)puVar44[5] * fVar47 + (float)puVar31[5] * fVar46 +
                                  (float)puVar29[5] * fVar53 + (float)puVar25[5] * fVar56);
                uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar56,
                                  (float)puVar44[6] * fVar47 + (float)puVar31[6] * fVar46 +
                                  (float)puVar29[6] * fVar53 + (float)puVar25[6] * fVar56);
                uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar29[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar56,
                                  (float)puVar44[7] * fVar47 + (float)puVar31[7] * fVar46 +
                                  (float)puVar29[7] * fVar53 + (float)puVar25[7] * fVar56);
                break;
              case 5:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                pbVar36 = pbVar35 + 10;
                fVar56 = fVar56 * fVar19;
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar64 = fVar64 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar31 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar29 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar64,
                                  (float)*puVar44 * fVar46 + (float)*puVar31 * fVar47 +
                                  (float)*puVar29 * fVar53 + (float)*puVar25 * fVar56 +
                                  (float)*puVar26 * fVar64);
                uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar64,
                                  (float)puVar44[1] * fVar46 + (float)puVar31[1] * fVar47 +
                                  (float)puVar29[1] * fVar53 + (float)puVar25[1] * fVar56 +
                                  (float)puVar26[1] * fVar64);
                uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar64,
                                  (float)puVar44[2] * fVar46 + (float)puVar31[2] * fVar47 +
                                  (float)puVar29[2] * fVar53 + (float)puVar25[2] * fVar56 +
                                  (float)puVar26[2] * fVar64);
                uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar64,
                                  (float)puVar44[3] * fVar46 + (float)puVar31[3] * fVar47 +
                                  (float)puVar29[3] * fVar53 + (float)puVar25[3] * fVar56 +
                                  (float)puVar26[3] * fVar64);
                uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar56 +
                                  *(float *)((long)puVar26 + 0x24) * fVar64,
                                  (float)puVar44[4] * fVar46 + (float)puVar31[4] * fVar47 +
                                  (float)puVar29[4] * fVar53 + (float)puVar25[4] * fVar56 +
                                  *(float *)(puVar26 + 4) * fVar64);
                uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar56 +
                                  *(float *)((long)puVar26 + 0x2c) * fVar64,
                                  (float)puVar44[5] * fVar46 + (float)puVar31[5] * fVar47 +
                                  (float)puVar29[5] * fVar53 + (float)puVar25[5] * fVar56 +
                                  *(float *)(puVar26 + 5) * fVar64);
                uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar64,
                                  (float)puVar44[6] * fVar46 + (float)puVar31[6] * fVar47 +
                                  (float)puVar29[6] * fVar53 + (float)puVar25[6] * fVar56 +
                                  (float)puVar26[6] * fVar64);
                uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar64,
                                  (float)puVar44[7] * fVar46 + (float)puVar31[7] * fVar47 +
                                  (float)puVar29[7] * fVar53 + (float)puVar25[7] * fVar56 +
                                  (float)puVar26[7] * fVar64);
                break;
              case 6:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                pbVar36 = pbVar35 + 0xc;
                fVar53 = fVar53 * fVar19;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar56 = fVar56 * fVar19;
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                fVar64 = fVar64 * fVar19;
                fVar69 = fVar69 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar31 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar29 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar56 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar64 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar69,
                                  (float)*puVar44 * fVar46 + (float)*puVar31 * fVar47 +
                                  (float)*puVar29 * fVar53 + (float)*puVar25 * fVar56 +
                                  (float)*puVar26 * fVar64 + (float)*puVar2 * fVar69);
                uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar69,
                                  (float)puVar44[1] * fVar46 + (float)puVar31[1] * fVar47 +
                                  (float)puVar29[1] * fVar53 + (float)puVar25[1] * fVar56 +
                                  (float)puVar26[1] * fVar64 + (float)puVar2[1] * fVar69);
                uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar56 +
                                  *(float *)((long)puVar26 + 0x14) * fVar64 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar69,
                                  (float)puVar44[2] * fVar46 + (float)puVar31[2] * fVar47 +
                                  (float)puVar29[2] * fVar53 + (float)puVar25[2] * fVar56 +
                                  *(float *)(puVar26 + 2) * fVar64 + (float)puVar2[2] * fVar69);
                uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar56 +
                                  *(float *)((long)puVar26 + 0x1c) * fVar64 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar69,
                                  (float)puVar44[3] * fVar46 + (float)puVar31[3] * fVar47 +
                                  (float)puVar29[3] * fVar53 + (float)puVar25[3] * fVar56 +
                                  *(float *)(puVar26 + 3) * fVar64 + (float)puVar2[3] * fVar69);
                uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar69,
                                  (float)puVar44[4] * fVar46 + (float)puVar31[4] * fVar47 +
                                  (float)puVar29[4] * fVar53 + (float)puVar25[4] * fVar56 +
                                  (float)puVar26[4] * fVar64 + (float)puVar2[4] * fVar69);
                uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar69,
                                  (float)puVar44[5] * fVar46 + (float)puVar31[5] * fVar47 +
                                  (float)puVar29[5] * fVar53 + (float)puVar25[5] * fVar56 +
                                  (float)puVar26[5] * fVar64 + (float)puVar2[5] * fVar69);
                uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[6] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar69,
                                  (float)puVar44[6] * fVar46 + (float)puVar31[6] * fVar47 +
                                  (float)puVar29[6] * fVar53 + (float)puVar25[6] * fVar56 +
                                  (float)puVar26[6] * fVar64 + (float)puVar2[6] * fVar69);
                uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[7] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar56 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar64 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar69,
                                  (float)puVar44[7] * fVar46 + (float)puVar31[7] * fVar47 +
                                  (float)puVar29[7] * fVar53 + (float)puVar25[7] * fVar56 +
                                  (float)puVar26[7] * fVar64 + (float)puVar2[7] * fVar69);
                break;
              case 7:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar47 = fVar47 * fVar19;
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                fVar53 = fVar53 * fVar19;
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                fVar56 = fVar56 * fVar19;
                pbVar36 = pbVar35 + 0xe;
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                fVar64 = fVar64 * fVar19;
                fVar69 = fVar69 * fVar19;
                fVar74 = fVar74 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar31 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar29 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar56 + pfVar1[1] * fVar64 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar74,
                                  (float)*puVar44 * fVar46 + (float)*puVar31 * fVar47 +
                                  (float)*puVar29 * fVar53 + (float)*puVar25 * fVar56 +
                                  *pfVar1 * fVar64 + (float)*puVar26 * fVar69 +
                                  (float)*puVar2 * fVar74);
                uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar74,
                                  (float)puVar44[1] * fVar46 + (float)puVar31[1] * fVar47 +
                                  (float)puVar29[1] * fVar53 + (float)puVar25[1] * fVar56 +
                                  pfVar1[2] * fVar64 + (float)puVar26[1] * fVar69 +
                                  (float)puVar2[1] * fVar74);
                uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar74,
                                  (float)puVar44[2] * fVar46 + (float)puVar31[2] * fVar47 +
                                  (float)puVar29[2] * fVar53 + (float)puVar25[2] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar64 +
                                  (float)puVar26[2] * fVar69 + (float)puVar2[2] * fVar74);
                uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar74,
                                  (float)puVar44[3] * fVar46 + (float)puVar31[3] * fVar47 +
                                  (float)puVar29[3] * fVar53 + (float)puVar25[3] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 6) * fVar64 +
                                  (float)puVar26[3] * fVar69 + (float)puVar2[3] * fVar74);
                uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar74,
                                  (float)puVar44[4] * fVar46 + (float)puVar31[4] * fVar47 +
                                  (float)puVar29[4] * fVar53 + (float)puVar25[4] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar64 +
                                  (float)puVar26[4] * fVar69 + (float)puVar2[4] * fVar74);
                uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar74,
                                  (float)puVar44[5] * fVar46 + (float)puVar31[5] * fVar47 +
                                  (float)puVar29[5] * fVar53 + (float)puVar25[5] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 10) * fVar64 +
                                  (float)puVar26[5] * fVar69 + (float)puVar2[5] * fVar74);
                uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[6] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar25 + 0x34) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar74,
                                  (float)puVar44[6] * fVar46 + (float)puVar31[6] * fVar47 +
                                  (float)puVar29[6] * fVar53 + *(float *)(puVar25 + 6) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64 +
                                  (float)puVar26[6] * fVar69 + (float)puVar2[6] * fVar74);
                uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar31[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar29[7] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar25 + 0x3c) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar74,
                                  (float)puVar44[7] * fVar46 + (float)puVar31[7] * fVar47 +
                                  (float)puVar29[7] * fVar53 + *(float *)(puVar25 + 7) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64 +
                                  (float)puVar26[7] * fVar69 + (float)puVar2[7] * fVar74);
                break;
              case 8:
                fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                fVar46 = fVar46 * fVar19;
                fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                fVar53 = fVar53 * fVar19;
                puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                fVar56 = fVar56 * fVar19;
                fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                fVar76 = (float)NEON_ucvtf((uint)pbVar35[0xf]);
                fVar64 = fVar64 * fVar19;
                pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                fVar74 = fVar74 * fVar19;
                puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xe] * 0x40);
                pbVar36 = pbVar35 + 0x10;
                fVar47 = fVar47 * fVar19;
                fVar69 = fVar69 * fVar19;
                fVar76 = fVar76 * fVar19;
                uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar46 +
                                  (float)((ulong)*puVar26 >> 0x20) * fVar47 +
                                  (float)((ulong)*puVar31 >> 0x20) * fVar53 +
                                  (float)((ulong)*puVar29 >> 0x20) * fVar56 + pfVar1[1] * fVar64 +
                                  (float)((ulong)*puVar25 >> 0x20) * fVar69 +
                                  (float)((ulong)*puVar2 >> 0x20) * fVar74 +
                                  (float)((ulong)*puVar3 >> 0x20) * fVar76,
                                  (float)*puVar44 * fVar46 + (float)*puVar26 * fVar47 +
                                  (float)*puVar31 * fVar53 + (float)*puVar29 * fVar56 +
                                  *pfVar1 * fVar64 + (float)*puVar25 * fVar69 +
                                  (float)*puVar2 * fVar74 + (float)*puVar3 * fVar76);
                uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[1] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[1] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar29[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64 +
                                  (float)((ulong)puVar25[1] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[1] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[1] >> 0x20) * fVar76,
                                  (float)puVar44[1] * fVar46 + (float)puVar26[1] * fVar47 +
                                  (float)puVar31[1] * fVar53 + (float)puVar29[1] * fVar56 +
                                  pfVar1[2] * fVar64 + (float)puVar25[1] * fVar69 +
                                  (float)puVar2[1] * fVar74 + (float)puVar3[1] * fVar76);
                uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[2] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[2] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar29[2] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[2] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[2] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[2] >> 0x20) * fVar76,
                                  (float)puVar44[2] * fVar46 + (float)puVar26[2] * fVar47 +
                                  (float)puVar31[2] * fVar53 + (float)puVar29[2] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 4) * fVar64 +
                                  (float)puVar25[2] * fVar69 + (float)puVar2[2] * fVar74 +
                                  (float)puVar3[2] * fVar76);
                uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[3] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[3] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar29[3] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[3] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[3] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[3] >> 0x20) * fVar76,
                                  (float)puVar44[3] * fVar46 + (float)puVar26[3] * fVar47 +
                                  (float)puVar31[3] * fVar53 + (float)puVar29[3] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 6) * fVar64 +
                                  (float)puVar25[3] * fVar69 + (float)puVar2[3] * fVar74 +
                                  (float)puVar3[3] * fVar76);
                uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[4] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[4] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar29[4] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[4] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[4] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[4] >> 0x20) * fVar76,
                                  (float)puVar44[4] * fVar46 + (float)puVar26[4] * fVar47 +
                                  (float)puVar31[4] * fVar53 + (float)puVar29[4] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 8) * fVar64 +
                                  (float)puVar25[4] * fVar69 + (float)puVar2[4] * fVar74 +
                                  (float)puVar3[4] * fVar76);
                uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[5] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[5] >> 0x20) * fVar53 +
                                  (float)((ulong)puVar29[5] >> 0x20) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[5] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[5] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[5] >> 0x20) * fVar76,
                                  (float)puVar44[5] * fVar46 + (float)puVar26[5] * fVar47 +
                                  (float)puVar31[5] * fVar53 + (float)puVar29[5] * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 10) * fVar64 +
                                  (float)puVar25[5] * fVar69 + (float)puVar2[5] * fVar74 +
                                  (float)puVar3[5] * fVar76);
                uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[6] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[6] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar29 + 0x34) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[6] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[6] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[6] >> 0x20) * fVar76,
                                  (float)puVar44[6] * fVar46 + (float)puVar26[6] * fVar47 +
                                  (float)puVar31[6] * fVar53 + *(float *)(puVar29 + 6) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64 +
                                  (float)puVar25[6] * fVar69 + (float)puVar2[6] * fVar74 +
                                  (float)puVar3[6] * fVar76);
                uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar46 +
                                  (float)((ulong)puVar26[7] >> 0x20) * fVar47 +
                                  (float)((ulong)puVar31[7] >> 0x20) * fVar53 +
                                  *(float *)((long)puVar29 + 0x3c) * fVar56 +
                                  (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64 +
                                  (float)((ulong)puVar25[7] >> 0x20) * fVar69 +
                                  (float)((ulong)puVar2[7] >> 0x20) * fVar74 +
                                  (float)((ulong)puVar3[7] >> 0x20) * fVar76,
                                  (float)puVar44[7] * fVar46 + (float)puVar26[7] * fVar47 +
                                  (float)puVar31[7] * fVar53 + *(float *)(puVar29 + 7) * fVar56 +
                                  (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64 +
                                  (float)puVar25[7] * fVar69 + (float)puVar2[7] * fVar74 +
                                  (float)puVar3[7] * fVar76);
                break;
              default:
                uVar71 = 0;
                uVar73 = 0;
                uVar49 = 0;
                uVar48 = 0;
                uVar65 = 0;
                uVar50 = 0;
                uVar72 = 0;
                uVar51 = 0;
              }
              fVar56 = (float)*puVar41;
              fVar74 = (float)((ulong)uVar48 >> 0x20);
              fVar76 = (float)((ulong)uVar49 >> 0x20);
              fVar64 = (float)((ulong)*puVar41 >> 0x20);
              fVar70 = (float)((ulong)uVar50 >> 0x20);
              fVar75 = (float)((ulong)uVar65 >> 0x20);
              fVar46 = (float)*puVar42;
              fVar47 = (float)((ulong)*puVar42 >> 0x20);
              fVar53 = (float)puVar42[1];
              fVar77 = (float)((ulong)uVar51 >> 0x20);
              fVar52 = (float)((ulong)uVar72 >> 0x20);
              fVar69 = (float)puVar41[1];
              *(ulong *)(pbVar27 + 8) =
                   CONCAT44(fVar52 * fVar69 +
                            fVar75 * fVar64 + fVar76 * fVar56 + (float)((ulong)uVar73 >> 0x20),
                            (float)uVar72 * fVar69 +
                            (float)uVar65 * fVar64 + (float)uVar49 * fVar56 + (float)uVar73);
              *(ulong *)pbVar27 =
                   CONCAT44(fVar77 * fVar69 +
                            fVar70 * fVar64 + fVar74 * fVar56 + (float)((ulong)uVar71 >> 0x20),
                            (float)uVar51 * fVar69 +
                            (float)uVar50 * fVar64 + (float)uVar48 * fVar56 + (float)uVar71);
              puVar30[1] = CONCAT44(fVar52 * fVar53 + fVar76 * fVar46 + fVar75 * fVar47,
                                    (float)uVar72 * fVar53 +
                                    (float)uVar49 * fVar46 + (float)uVar65 * fVar47);
              *puVar30 = CONCAT44(fVar77 * fVar53 + fVar74 * fVar46 + fVar70 * fVar47,
                                  (float)uVar51 * fVar53 +
                                  (float)uVar48 * fVar46 + (float)uVar50 * fVar47);
            }
            puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar38);
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar34);
            pbVar27 = pbVar27 + bVar37;
            puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar43);
            iVar33 = iVar33 + -1;
            puVar32 = puVar32 + 1;
            pbVar35 = pbVar36;
          } while (iVar33 != 0);
        }
      }
      else {
        auVar78 = FUN_0043c4e0(DAT_04c6f410);
        pbVar27 = auVar78._8_8_;
        lVar40 = auVar78._0_8_;
        if (bVar34 == 0 && (bVar43 ^ 1) == 0) {
          if (lVar40 != 0) {
            FUN_00443a00(lVar40,"TtSkinBatch");
            pbVar27 = extraout_x1_06;
          }
          fVar19 = DAT_04102ed4;
          puVar32 = (ushort *)param_2[3];
          pbVar35 = (byte *)(param_2[2] + (ulong)*puVar32 * 2);
          Hint_Prefetch(pbVar35,0,0,0);
          lVar40 = *param_2;
          Hint_Prefetch(lVar40,0,0,0);
          Hint_Prefetch(lVar40 + 0x40,0,0,0);
          Hint_Prefetch(lVar40 + 0x80,0,0,0);
          Hint_Prefetch(lVar40 + 0xc0,0,0,0);
          iVar33 = (int)param_2[8];
          if (iVar33 != 0) {
            bVar43 = *(byte *)((long)param_2 + 0x18c);
            bVar34 = *(byte *)((long)param_2 + 0x6c);
            bVar37 = *(byte *)((long)param_2 + 0x164);
            bVar38 = *(byte *)((long)param_2 + 0x44);
            puVar30 = (undefined8 *)param_2[0x30];
            puVar42 = (undefined8 *)param_2[0xc];
            pbVar27 = (byte *)param_2[0x2b];
            puVar41 = (undefined8 *)param_2[7];
            do {
              lVar10 = (long)puVar41 + (ulong)bVar38 * 4;
              Hint_Prefetch(lVar10,0,0,0);
              Hint_Prefetch(lVar10 + 0x40,0,0,0);
              lVar10 = (long)puVar42 + (ulong)bVar34 * 4;
              Hint_Prefetch(lVar10,0,0,0);
              Hint_Prefetch(lVar10 + 0x40,0,0,0);
              Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4,0,0,0);
              Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4 + 0x40,0,0,0);
              lVar10 = (long)puVar30 + (ulong)bVar43 * 4;
              Hint_Prefetch(lVar10,0,0,0);
              Hint_Prefetch(lVar10 + 0x40,0,0,0);
              uVar18 = (uint)puVar32[1] - (uint)*puVar32;
              Hint_Prefetch(puVar32 + 2,0,0,0);
              pbVar36 = pbVar35;
              if ((uint)*puVar32 <= (uint)puVar32[1] && uVar18 != 0) {
                Hint_Prefetch(pbVar35 + (ulong)(ushort)uVar18 * 2,0,0,0);
                switch(uVar18 & 0xffff) {
                case 1:
                  pbVar36 = pbVar35 + 2;
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  uVar49 = puVar44[1];
                  uVar48 = *puVar44;
                  uVar65 = puVar44[3];
                  uVar50 = puVar44[2];
                  uVar72 = puVar44[5];
                  uVar51 = puVar44[4];
                  uVar73 = puVar44[7];
                  uVar71 = puVar44[6];
                  break;
                case 2:
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  fVar47 = fVar47 * fVar19;
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  pbVar36 = pbVar35 + 4;
                  fVar46 = fVar46 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar46,
                                    (float)*puVar44 * fVar47 + (float)*puVar31 * fVar46);
                  uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar46,
                                    (float)puVar44[1] * fVar47 + (float)puVar31[1] * fVar46);
                  uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar46,
                                    (float)puVar44[2] * fVar47 + (float)puVar31[2] * fVar46);
                  uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar46,
                                    (float)puVar44[3] * fVar47 + (float)puVar31[3] * fVar46);
                  uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar46,
                                    (float)puVar44[4] * fVar47 + (float)puVar31[4] * fVar46);
                  uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar46,
                                    (float)puVar44[5] * fVar47 + (float)puVar31[5] * fVar46);
                  uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar46,
                                    (float)puVar44[6] * fVar47 + (float)puVar31[6] * fVar46);
                  uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar46,
                                    (float)puVar44[7] * fVar47 + (float)puVar31[7] * fVar46);
                  break;
                case 3:
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar47 = fVar47 * fVar19;
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  pbVar36 = pbVar35 + 6;
                  fVar46 = fVar46 * fVar19;
                  fVar53 = fVar53 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar46 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar53,
                                    (float)*puVar44 * fVar47 + (float)*puVar31 * fVar46 +
                                    (float)*puVar29 * fVar53);
                  uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[1] >> 0x20) * fVar53,
                                    (float)puVar44[1] * fVar47 + (float)puVar31[1] * fVar46 +
                                    (float)puVar29[1] * fVar53);
                  uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar53,
                                    (float)puVar44[2] * fVar47 + (float)puVar31[2] * fVar46 +
                                    (float)puVar29[2] * fVar53);
                  uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[3] >> 0x20) * fVar53,
                                    (float)puVar44[3] * fVar47 + (float)puVar31[3] * fVar46 +
                                    (float)puVar29[3] * fVar53);
                  uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar53,
                                    (float)puVar44[4] * fVar47 + (float)puVar31[4] * fVar46 +
                                    (float)puVar29[4] * fVar53);
                  uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[5] >> 0x20) * fVar53,
                                    (float)puVar44[5] * fVar47 + (float)puVar31[5] * fVar46 +
                                    (float)puVar29[5] * fVar53);
                  uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar53,
                                    (float)puVar44[6] * fVar47 + (float)puVar31[6] * fVar46 +
                                    (float)puVar29[6] * fVar53);
                  uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[7] >> 0x20) * fVar53,
                                    (float)puVar44[7] * fVar47 + (float)puVar31[7] * fVar46 +
                                    (float)puVar29[7] * fVar53);
                  break;
                case 4:
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  fVar47 = fVar47 * fVar19;
                  fVar46 = fVar46 * fVar19;
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  pbVar36 = pbVar35 + 8;
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  fVar56 = fVar56 * fVar19;
                  fVar53 = fVar53 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar46 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar56,
                                    (float)*puVar44 * fVar47 + (float)*puVar31 * fVar46 +
                                    (float)*puVar29 * fVar53 + (float)*puVar25 * fVar56);
                  uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[1] >> 0x20) * fVar56,
                                    (float)puVar44[1] * fVar47 + (float)puVar31[1] * fVar46 +
                                    (float)puVar29[1] * fVar53 + (float)puVar25[1] * fVar56);
                  uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar56,
                                    (float)puVar44[2] * fVar47 + (float)puVar31[2] * fVar46 +
                                    (float)puVar29[2] * fVar53 + (float)puVar25[2] * fVar56);
                  uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[3] >> 0x20) * fVar56,
                                    (float)puVar44[3] * fVar47 + (float)puVar31[3] * fVar46 +
                                    (float)puVar29[3] * fVar53 + (float)puVar25[3] * fVar56);
                  uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar56,
                                    (float)puVar44[4] * fVar47 + (float)puVar31[4] * fVar46 +
                                    (float)puVar29[4] * fVar53 + (float)puVar25[4] * fVar56);
                  uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[5] >> 0x20) * fVar56,
                                    (float)puVar44[5] * fVar47 + (float)puVar31[5] * fVar46 +
                                    (float)puVar29[5] * fVar53 + (float)puVar25[5] * fVar56);
                  uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar56,
                                    (float)puVar44[6] * fVar47 + (float)puVar31[6] * fVar46 +
                                    (float)puVar29[6] * fVar53 + (float)puVar25[6] * fVar56);
                  uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar29[7] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[7] >> 0x20) * fVar56,
                                    (float)puVar44[7] * fVar47 + (float)puVar31[7] * fVar46 +
                                    (float)puVar29[7] * fVar53 + (float)puVar25[7] * fVar56);
                  break;
                case 5:
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = fVar46 * fVar19;
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar47 = fVar47 * fVar19;
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  pbVar36 = pbVar35 + 10;
                  fVar56 = fVar56 * fVar19;
                  fVar53 = fVar53 * fVar19;
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar64 = fVar64 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar46 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar64,
                                    (float)*puVar44 * fVar46 + (float)*puVar31 * fVar47 +
                                    (float)*puVar29 * fVar53 + (float)*puVar25 * fVar56 +
                                    (float)*puVar26 * fVar64);
                  uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[1] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[1] >> 0x20) * fVar64,
                                    (float)puVar44[1] * fVar46 + (float)puVar31[1] * fVar47 +
                                    (float)puVar29[1] * fVar53 + (float)puVar25[1] * fVar56 +
                                    (float)puVar26[1] * fVar64);
                  uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar64,
                                    (float)puVar44[2] * fVar46 + (float)puVar31[2] * fVar47 +
                                    (float)puVar29[2] * fVar53 + (float)puVar25[2] * fVar56 +
                                    (float)puVar26[2] * fVar64);
                  uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[3] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[3] >> 0x20) * fVar64,
                                    (float)puVar44[3] * fVar46 + (float)puVar31[3] * fVar47 +
                                    (float)puVar29[3] * fVar53 + (float)puVar25[3] * fVar56 +
                                    (float)puVar26[3] * fVar64);
                  uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar26 + 0x24) * fVar64,
                                    (float)puVar44[4] * fVar46 + (float)puVar31[4] * fVar47 +
                                    (float)puVar29[4] * fVar53 + (float)puVar25[4] * fVar56 +
                                    *(float *)(puVar26 + 4) * fVar64);
                  uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[5] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar26 + 0x2c) * fVar64,
                                    (float)puVar44[5] * fVar46 + (float)puVar31[5] * fVar47 +
                                    (float)puVar29[5] * fVar53 + (float)puVar25[5] * fVar56 +
                                    *(float *)(puVar26 + 5) * fVar64);
                  uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar64,
                                    (float)puVar44[6] * fVar46 + (float)puVar31[6] * fVar47 +
                                    (float)puVar29[6] * fVar53 + (float)puVar25[6] * fVar56 +
                                    (float)puVar26[6] * fVar64);
                  uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[7] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[7] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[7] >> 0x20) * fVar64,
                                    (float)puVar44[7] * fVar46 + (float)puVar31[7] * fVar47 +
                                    (float)puVar29[7] * fVar53 + (float)puVar25[7] * fVar56 +
                                    (float)puVar26[7] * fVar64);
                  break;
                case 6:
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = fVar46 * fVar19;
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar47 = fVar47 * fVar19;
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  pbVar36 = pbVar35 + 0xc;
                  fVar53 = fVar53 * fVar19;
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar64 = fVar64 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar46 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar2 >> 0x20) * fVar69,
                                    (float)*puVar44 * fVar46 + (float)*puVar31 * fVar47 +
                                    (float)*puVar29 * fVar53 + (float)*puVar25 * fVar56 +
                                    (float)*puVar26 * fVar64 + (float)*puVar2 * fVar69);
                  uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[1] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[1] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar2[1] >> 0x20) * fVar69,
                                    (float)puVar44[1] * fVar46 + (float)puVar31[1] * fVar47 +
                                    (float)puVar29[1] * fVar53 + (float)puVar25[1] * fVar56 +
                                    (float)puVar26[1] * fVar64 + (float)puVar2[1] * fVar69);
                  uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar26 + 0x14) * fVar64 +
                                    (float)((ulong)puVar2[2] >> 0x20) * fVar69,
                                    (float)puVar44[2] * fVar46 + (float)puVar31[2] * fVar47 +
                                    (float)puVar29[2] * fVar53 + (float)puVar25[2] * fVar56 +
                                    *(float *)(puVar26 + 2) * fVar64 + (float)puVar2[2] * fVar69);
                  uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[3] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar26 + 0x1c) * fVar64 +
                                    (float)((ulong)puVar2[3] >> 0x20) * fVar69,
                                    (float)puVar44[3] * fVar46 + (float)puVar31[3] * fVar47 +
                                    (float)puVar29[3] * fVar53 + (float)puVar25[3] * fVar56 +
                                    *(float *)(puVar26 + 3) * fVar64 + (float)puVar2[3] * fVar69);
                  uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar2[4] >> 0x20) * fVar69,
                                    (float)puVar44[4] * fVar46 + (float)puVar31[4] * fVar47 +
                                    (float)puVar29[4] * fVar53 + (float)puVar25[4] * fVar56 +
                                    (float)puVar26[4] * fVar64 + (float)puVar2[4] * fVar69);
                  uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[5] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[5] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar2[5] >> 0x20) * fVar69,
                                    (float)puVar44[5] * fVar46 + (float)puVar31[5] * fVar47 +
                                    (float)puVar29[5] * fVar53 + (float)puVar25[5] * fVar56 +
                                    (float)puVar26[5] * fVar64 + (float)puVar2[5] * fVar69);
                  uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar2[6] >> 0x20) * fVar69,
                                    (float)puVar44[6] * fVar46 + (float)puVar31[6] * fVar47 +
                                    (float)puVar29[6] * fVar53 + (float)puVar25[6] * fVar56 +
                                    (float)puVar26[6] * fVar64 + (float)puVar2[6] * fVar69);
                  uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[7] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[7] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[7] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar2[7] >> 0x20) * fVar69,
                                    (float)puVar44[7] * fVar46 + (float)puVar31[7] * fVar47 +
                                    (float)puVar29[7] * fVar53 + (float)puVar25[7] * fVar56 +
                                    (float)puVar26[7] * fVar64 + (float)puVar2[7] * fVar69);
                  break;
                case 7:
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = fVar46 * fVar19;
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar47 = fVar47 * fVar19;
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  fVar53 = fVar53 * fVar19;
                  puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                  fVar56 = fVar56 * fVar19;
                  pbVar36 = pbVar35 + 0xe;
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                  fVar64 = fVar64 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  fVar74 = fVar74 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar46 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar56 + pfVar1[1] * fVar64 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar2 >> 0x20) * fVar74,
                                    (float)*puVar44 * fVar46 + (float)*puVar31 * fVar47 +
                                    (float)*puVar29 * fVar53 + (float)*puVar25 * fVar56 +
                                    *pfVar1 * fVar64 + (float)*puVar26 * fVar69 +
                                    (float)*puVar2 * fVar74);
                  uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64
                                    + (float)((ulong)puVar26[1] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[1] >> 0x20) * fVar74,
                                    (float)puVar44[1] * fVar46 + (float)puVar31[1] * fVar47 +
                                    (float)puVar29[1] * fVar53 + (float)puVar25[1] * fVar56 +
                                    pfVar1[2] * fVar64 + (float)puVar26[1] * fVar69 +
                                    (float)puVar2[1] * fVar74);
                  uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[2] >> 0x20) * fVar74,
                                    (float)puVar44[2] * fVar46 + (float)puVar31[2] * fVar47 +
                                    (float)puVar29[2] * fVar53 + (float)puVar25[2] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 4) * fVar64 +
                                    (float)puVar26[2] * fVar69 + (float)puVar2[2] * fVar74);
                  uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[3] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar26[3] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[3] >> 0x20) * fVar74,
                                    (float)puVar44[3] * fVar46 + (float)puVar31[3] * fVar47 +
                                    (float)puVar29[3] * fVar53 + (float)puVar25[3] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 6) * fVar64 +
                                    (float)puVar26[3] * fVar69 + (float)puVar2[3] * fVar74);
                  uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[4] >> 0x20) * fVar74,
                                    (float)puVar44[4] * fVar46 + (float)puVar31[4] * fVar47 +
                                    (float)puVar29[4] * fVar53 + (float)puVar25[4] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 8) * fVar64 +
                                    (float)puVar26[4] * fVar69 + (float)puVar2[4] * fVar74);
                  uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar25[5] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar26[5] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[5] >> 0x20) * fVar74,
                                    (float)puVar44[5] * fVar46 + (float)puVar31[5] * fVar47 +
                                    (float)puVar29[5] * fVar53 + (float)puVar25[5] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 10) * fVar64 +
                                    (float)puVar26[5] * fVar69 + (float)puVar2[5] * fVar74);
                  uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar53 +
                                    *(float *)((long)puVar25 + 0x34) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[6] >> 0x20) * fVar74,
                                    (float)puVar44[6] * fVar46 + (float)puVar31[6] * fVar47 +
                                    (float)puVar29[6] * fVar53 + *(float *)(puVar25 + 6) * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64 +
                                    (float)puVar26[6] * fVar69 + (float)puVar2[6] * fVar74);
                  uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar29[7] >> 0x20) * fVar53 +
                                    *(float *)((long)puVar25 + 0x3c) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar26[7] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[7] >> 0x20) * fVar74,
                                    (float)puVar44[7] * fVar46 + (float)puVar31[7] * fVar47 +
                                    (float)puVar29[7] * fVar53 + *(float *)(puVar25 + 7) * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64 +
                                    (float)puVar26[7] * fVar69 + (float)puVar2[7] * fVar74);
                  break;
                case 8:
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = fVar46 * fVar19;
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  fVar53 = fVar53 * fVar19;
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar56 = fVar56 * fVar19;
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[0xf]);
                  fVar64 = fVar64 * fVar19;
                  pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar74 = fVar74 * fVar19;
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                  puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xe] * 0x40);
                  pbVar36 = pbVar35 + 0x10;
                  fVar47 = fVar47 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  fVar76 = fVar76 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar46 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar56 + pfVar1[1] * fVar64 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar2 >> 0x20) * fVar74 +
                                    (float)((ulong)*puVar3 >> 0x20) * fVar76,
                                    (float)*puVar44 * fVar46 + (float)*puVar26 * fVar47 +
                                    (float)*puVar31 * fVar53 + (float)*puVar29 * fVar56 +
                                    *pfVar1 * fVar64 + (float)*puVar25 * fVar69 +
                                    (float)*puVar2 * fVar74 + (float)*puVar3 * fVar76);
                  uVar49 = CONCAT44((float)((ulong)puVar44[1] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar26[1] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar29[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64
                                    + (float)((ulong)puVar25[1] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[1] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar3[1] >> 0x20) * fVar76,
                                    (float)puVar44[1] * fVar46 + (float)puVar26[1] * fVar47 +
                                    (float)puVar31[1] * fVar53 + (float)puVar29[1] * fVar56 +
                                    pfVar1[2] * fVar64 + (float)puVar25[1] * fVar69 +
                                    (float)puVar2[1] * fVar74 + (float)puVar3[1] * fVar76);
                  uVar50 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[2] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar3[2] >> 0x20) * fVar76,
                                    (float)puVar44[2] * fVar46 + (float)puVar26[2] * fVar47 +
                                    (float)puVar31[2] * fVar53 + (float)puVar29[2] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 4) * fVar64 +
                                    (float)puVar25[2] * fVar69 + (float)puVar2[2] * fVar74 +
                                    (float)puVar3[2] * fVar76);
                  uVar65 = CONCAT44((float)((ulong)puVar44[3] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar26[3] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar29[3] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[3] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[3] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar3[3] >> 0x20) * fVar76,
                                    (float)puVar44[3] * fVar46 + (float)puVar26[3] * fVar47 +
                                    (float)puVar31[3] * fVar53 + (float)puVar29[3] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 6) * fVar64 +
                                    (float)puVar25[3] * fVar69 + (float)puVar2[3] * fVar74 +
                                    (float)puVar3[3] * fVar76);
                  uVar51 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[4] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar3[4] >> 0x20) * fVar76,
                                    (float)puVar44[4] * fVar46 + (float)puVar26[4] * fVar47 +
                                    (float)puVar31[4] * fVar53 + (float)puVar29[4] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 8) * fVar64 +
                                    (float)puVar25[4] * fVar69 + (float)puVar2[4] * fVar74 +
                                    (float)puVar3[4] * fVar76);
                  uVar72 = CONCAT44((float)((ulong)puVar44[5] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar26[5] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar29[5] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[5] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[5] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar3[5] >> 0x20) * fVar76,
                                    (float)puVar44[5] * fVar46 + (float)puVar26[5] * fVar47 +
                                    (float)puVar31[5] * fVar53 + (float)puVar29[5] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 10) * fVar64 +
                                    (float)puVar25[5] * fVar69 + (float)puVar2[5] * fVar74 +
                                    (float)puVar3[5] * fVar76);
                  uVar71 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar53 +
                                    *(float *)((long)puVar29 + 0x34) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[6] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar3[6] >> 0x20) * fVar76,
                                    (float)puVar44[6] * fVar46 + (float)puVar26[6] * fVar47 +
                                    (float)puVar31[6] * fVar53 + *(float *)(puVar29 + 6) * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64 +
                                    (float)puVar25[6] * fVar69 + (float)puVar2[6] * fVar74 +
                                    (float)puVar3[6] * fVar76);
                  uVar73 = CONCAT44((float)((ulong)puVar44[7] >> 0x20) * fVar46 +
                                    (float)((ulong)puVar26[7] >> 0x20) * fVar47 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar53 +
                                    *(float *)((long)puVar29 + 0x3c) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[7] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar2[7] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar3[7] >> 0x20) * fVar76,
                                    (float)puVar44[7] * fVar46 + (float)puVar26[7] * fVar47 +
                                    (float)puVar31[7] * fVar53 + *(float *)(puVar29 + 7) * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64 +
                                    (float)puVar25[7] * fVar69 + (float)puVar2[7] * fVar74 +
                                    (float)puVar3[7] * fVar76);
                  break;
                default:
                  uVar71 = 0;
                  uVar73 = 0;
                  uVar49 = 0;
                  uVar48 = 0;
                  uVar65 = 0;
                  uVar50 = 0;
                  uVar72 = 0;
                  uVar51 = 0;
                }
                fVar56 = (float)*puVar41;
                fVar74 = (float)((ulong)uVar48 >> 0x20);
                fVar64 = (float)((ulong)*puVar41 >> 0x20);
                fVar76 = (float)((ulong)uVar50 >> 0x20);
                fVar46 = (float)*puVar42;
                fVar47 = (float)((ulong)*puVar42 >> 0x20);
                fVar53 = (float)puVar42[1];
                fVar70 = (float)((ulong)uVar51 >> 0x20);
                fVar69 = (float)puVar41[1];
                *(ulong *)(pbVar27 + 8) =
                     CONCAT44((float)((ulong)uVar72 >> 0x20) * fVar69 +
                              (float)((ulong)uVar65 >> 0x20) * fVar64 +
                              (float)((ulong)uVar49 >> 0x20) * fVar56 +
                              (float)((ulong)uVar73 >> 0x20),
                              (float)uVar72 * fVar69 +
                              (float)uVar65 * fVar64 + (float)uVar49 * fVar56 + (float)uVar73);
                *(ulong *)pbVar27 =
                     CONCAT44(fVar70 * fVar69 +
                              fVar76 * fVar64 + fVar74 * fVar56 + (float)((ulong)uVar71 >> 0x20),
                              (float)uVar51 * fVar69 +
                              (float)uVar50 * fVar64 + (float)uVar48 * fVar56 + (float)uVar71);
                *puVar30 = CONCAT44(fVar70 * fVar53 + fVar74 * fVar46 + fVar76 * fVar47,
                                    (float)uVar51 * fVar53 +
                                    (float)uVar48 * fVar46 + (float)uVar50 * fVar47);
                *(float *)(puVar30 + 1) =
                     (float)uVar72 * fVar53 + (float)uVar49 * fVar46 + (float)uVar65 * fVar47;
              }
              puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar38);
              puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar34);
              pbVar27 = pbVar27 + bVar37;
              puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar43);
              iVar33 = iVar33 + -1;
              puVar32 = puVar32 + 1;
              pbVar35 = pbVar36;
            } while (iVar33 != 0);
          }
        }
        else {
          if (lVar40 != 0) {
            FUN_00443a00(lVar40,"TtSkinBatch");
            pbVar27 = extraout_x1_03;
          }
          fVar19 = DAT_04102ed4;
          puVar32 = (ushort *)param_2[3];
          pbVar35 = (byte *)(param_2[2] + (ulong)*puVar32 * 2);
          Hint_Prefetch(pbVar35,0,0,0);
          lVar40 = *param_2;
          Hint_Prefetch(lVar40,0,0,0);
          Hint_Prefetch(lVar40 + 0x40,0,0,0);
          Hint_Prefetch(lVar40 + 0x80,0,0,0);
          Hint_Prefetch(lVar40 + 0xc0,0,0,0);
          iVar33 = (int)param_2[8];
          if (iVar33 != 0) {
            bVar43 = *(byte *)((long)param_2 + 0x18c);
            bVar34 = *(byte *)((long)param_2 + 0x6c);
            bVar37 = *(byte *)((long)param_2 + 0x164);
            bVar38 = *(byte *)((long)param_2 + 0x44);
            puVar30 = (undefined8 *)param_2[0x30];
            puVar42 = (undefined8 *)param_2[0xc];
            pbVar27 = (byte *)param_2[0x2b];
            puVar41 = (undefined8 *)param_2[7];
            do {
              lVar10 = (long)puVar41 + (ulong)bVar38 * 4;
              Hint_Prefetch(lVar10,0,0,0);
              Hint_Prefetch(lVar10 + 0x40,0,0,0);
              lVar10 = (long)puVar42 + (ulong)bVar34 * 4;
              Hint_Prefetch(lVar10,0,0,0);
              Hint_Prefetch(lVar10 + 0x40,0,0,0);
              Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4,0,0,0);
              Hint_Prefetch(pbVar27 + (ulong)bVar37 * 4 + 0x40,0,0,0);
              lVar10 = (long)puVar30 + (ulong)bVar43 * 4;
              Hint_Prefetch(lVar10,0,0,0);
              Hint_Prefetch(lVar10 + 0x40,0,0,0);
              uVar18 = (uint)puVar32[1] - (uint)*puVar32;
              Hint_Prefetch(puVar32 + 2,0,0,0);
              pbVar36 = pbVar35;
              if ((uint)*puVar32 <= (uint)puVar32[1] && uVar18 != 0) {
                Hint_Prefetch(pbVar35 + (ulong)(ushort)uVar18 * 2,0,0,0);
                switch(uVar18 & 0xffff) {
                case 1:
                  pbVar36 = pbVar35 + 2;
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = (float)puVar44[1];
                  uVar48 = *puVar44;
                  fVar47 = (float)puVar44[3];
                  uVar49 = puVar44[2];
                  fVar53 = (float)puVar44[5];
                  uVar50 = puVar44[4];
                  fVar56 = (float)puVar44[7];
                  uVar65 = puVar44[6];
                  break;
                case 2:
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  fVar64 = fVar64 * fVar19;
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  pbVar36 = pbVar35 + 4;
                  fVar56 = fVar56 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar56,
                                    (float)*puVar44 * fVar64 + (float)*puVar31 * fVar56);
                  fVar46 = (float)puVar44[1] * fVar64 + (float)puVar31[1] * fVar56;
                  uVar49 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar56,
                                    (float)puVar44[2] * fVar64 + (float)puVar31[2] * fVar56);
                  fVar47 = (float)puVar44[3] * fVar64 + (float)puVar31[3] * fVar56;
                  uVar50 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar56,
                                    (float)puVar44[4] * fVar64 + (float)puVar31[4] * fVar56);
                  fVar53 = (float)puVar44[5] * fVar64 + (float)puVar31[5] * fVar56;
                  uVar65 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar56,
                                    (float)puVar44[6] * fVar64 + (float)puVar31[6] * fVar56);
                  fVar56 = (float)puVar44[7] * fVar64 + (float)puVar31[7] * fVar56;
                  break;
                case 3:
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar64 = fVar64 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  pbVar36 = pbVar35 + 6;
                  fVar56 = fVar56 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar69,
                                    (float)*puVar44 * fVar64 + (float)*puVar31 * fVar56 +
                                    (float)*puVar29 * fVar69);
                  fVar46 = (float)puVar44[1] * fVar64 + (float)puVar31[1] * fVar56 +
                           (float)puVar29[1] * fVar69;
                  uVar49 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar69,
                                    (float)puVar44[2] * fVar64 + (float)puVar31[2] * fVar56 +
                                    (float)puVar29[2] * fVar69);
                  fVar47 = (float)puVar44[3] * fVar64 + (float)puVar31[3] * fVar56 +
                           (float)puVar29[3] * fVar69;
                  uVar50 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar69,
                                    (float)puVar44[4] * fVar64 + (float)puVar31[4] * fVar56 +
                                    (float)puVar29[4] * fVar69);
                  fVar53 = (float)puVar44[5] * fVar64 + (float)puVar31[5] * fVar56 +
                           (float)puVar29[5] * fVar69;
                  uVar65 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar69,
                                    (float)puVar44[6] * fVar64 + (float)puVar31[6] * fVar56 +
                                    (float)puVar29[6] * fVar69);
                  fVar56 = (float)puVar44[7] * fVar64 + (float)puVar31[7] * fVar56 +
                           (float)puVar29[7] * fVar69;
                  break;
                case 4:
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  fVar64 = fVar64 * fVar19;
                  fVar56 = fVar56 * fVar19;
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  pbVar36 = pbVar35 + 8;
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  fVar74 = fVar74 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar74,
                                    (float)*puVar44 * fVar64 + (float)*puVar31 * fVar56 +
                                    (float)*puVar29 * fVar69 + (float)*puVar25 * fVar74);
                  fVar46 = (float)puVar44[1] * fVar64 + (float)puVar31[1] * fVar56 +
                           (float)puVar29[1] * fVar69 + (float)puVar25[1] * fVar74;
                  uVar49 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar74,
                                    (float)puVar44[2] * fVar64 + (float)puVar31[2] * fVar56 +
                                    (float)puVar29[2] * fVar69 + (float)puVar25[2] * fVar74);
                  fVar47 = (float)puVar44[3] * fVar64 + (float)puVar31[3] * fVar56 +
                           (float)puVar29[3] * fVar69 + (float)puVar25[3] * fVar74;
                  uVar50 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar74,
                                    (float)puVar44[4] * fVar64 + (float)puVar31[4] * fVar56 +
                                    (float)puVar29[4] * fVar69 + (float)puVar25[4] * fVar74);
                  fVar53 = (float)puVar44[5] * fVar64 + (float)puVar31[5] * fVar56 +
                           (float)puVar29[5] * fVar69 + (float)puVar25[5] * fVar74;
                  uVar65 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar74,
                                    (float)puVar44[6] * fVar64 + (float)puVar31[6] * fVar56 +
                                    (float)puVar29[6] * fVar69 + (float)puVar25[6] * fVar74);
                  fVar56 = (float)puVar44[7] * fVar64 + (float)puVar31[7] * fVar56 +
                           (float)puVar29[7] * fVar69 + (float)puVar25[7] * fVar74;
                  break;
                case 5:
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar64 = fVar64 * fVar19;
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  pbVar36 = pbVar35 + 10;
                  fVar74 = fVar74 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar76 = fVar76 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar74 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar76,
                                    (float)*puVar44 * fVar56 + (float)*puVar31 * fVar64 +
                                    (float)*puVar29 * fVar69 + (float)*puVar25 * fVar74 +
                                    (float)*puVar26 * fVar76);
                  fVar46 = (float)puVar44[1] * fVar56 + (float)puVar31[1] * fVar64 +
                           (float)puVar29[1] * fVar69 + (float)puVar25[1] * fVar74 +
                           (float)puVar26[1] * fVar76;
                  uVar49 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar76,
                                    (float)puVar44[2] * fVar56 + (float)puVar31[2] * fVar64 +
                                    (float)puVar29[2] * fVar69 + (float)puVar25[2] * fVar74 +
                                    (float)puVar26[2] * fVar76);
                  fVar47 = (float)puVar44[3] * fVar56 + (float)puVar31[3] * fVar64 +
                           (float)puVar29[3] * fVar69 + (float)puVar25[3] * fVar74 +
                           (float)puVar26[3] * fVar76;
                  uVar50 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar74 +
                                    *(float *)((long)puVar26 + 0x24) * fVar76,
                                    (float)puVar44[4] * fVar56 + (float)puVar31[4] * fVar64 +
                                    (float)puVar29[4] * fVar69 + (float)puVar25[4] * fVar74 +
                                    *(float *)(puVar26 + 4) * fVar76);
                  fVar53 = (float)puVar44[5] * fVar56 + (float)puVar31[5] * fVar64 +
                           (float)puVar29[5] * fVar69 + (float)puVar25[5] * fVar74 +
                           *(float *)(puVar26 + 5) * fVar76;
                  uVar65 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar76,
                                    (float)puVar44[6] * fVar56 + (float)puVar31[6] * fVar64 +
                                    (float)puVar29[6] * fVar69 + (float)puVar25[6] * fVar74 +
                                    (float)puVar26[6] * fVar76);
                  fVar56 = (float)puVar44[7] * fVar56 + (float)puVar31[7] * fVar64 +
                           (float)puVar29[7] * fVar69 + (float)puVar25[7] * fVar74 +
                           (float)puVar26[7] * fVar76;
                  break;
                case 6:
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar64 = fVar64 * fVar19;
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  pbVar36 = pbVar35 + 0xc;
                  fVar69 = fVar69 * fVar19;
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar74 = fVar74 * fVar19;
                  fVar70 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar76 = fVar76 * fVar19;
                  fVar70 = fVar70 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar74 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar76 +
                                    (float)((ulong)*puVar2 >> 0x20) * fVar70,
                                    (float)*puVar44 * fVar56 + (float)*puVar31 * fVar64 +
                                    (float)*puVar29 * fVar69 + (float)*puVar25 * fVar74 +
                                    (float)*puVar26 * fVar76 + (float)*puVar2 * fVar70);
                  fVar46 = (float)puVar44[1] * fVar56 + (float)puVar31[1] * fVar64 +
                           (float)puVar29[1] * fVar69 + (float)puVar25[1] * fVar74 +
                           (float)puVar26[1] * fVar76 + (float)puVar2[1] * fVar70;
                  uVar49 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar74 +
                                    *(float *)((long)puVar26 + 0x14) * fVar76 +
                                    (float)((ulong)puVar2[2] >> 0x20) * fVar70,
                                    (float)puVar44[2] * fVar56 + (float)puVar31[2] * fVar64 +
                                    (float)puVar29[2] * fVar69 + (float)puVar25[2] * fVar74 +
                                    *(float *)(puVar26 + 2) * fVar76 + (float)puVar2[2] * fVar70);
                  fVar47 = (float)puVar44[3] * fVar56 + (float)puVar31[3] * fVar64 +
                           (float)puVar29[3] * fVar69 + (float)puVar25[3] * fVar74 +
                           *(float *)(puVar26 + 3) * fVar76 + (float)puVar2[3] * fVar70;
                  uVar50 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar76 +
                                    (float)((ulong)puVar2[4] >> 0x20) * fVar70,
                                    (float)puVar44[4] * fVar56 + (float)puVar31[4] * fVar64 +
                                    (float)puVar29[4] * fVar69 + (float)puVar25[4] * fVar74 +
                                    (float)puVar26[4] * fVar76 + (float)puVar2[4] * fVar70);
                  fVar53 = (float)puVar44[5] * fVar56 + (float)puVar31[5] * fVar64 +
                           (float)puVar29[5] * fVar69 + (float)puVar25[5] * fVar74 +
                           (float)puVar26[5] * fVar76 + (float)puVar2[5] * fVar70;
                  uVar65 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar76 +
                                    (float)((ulong)puVar2[6] >> 0x20) * fVar70,
                                    (float)puVar44[6] * fVar56 + (float)puVar31[6] * fVar64 +
                                    (float)puVar29[6] * fVar69 + (float)puVar25[6] * fVar74 +
                                    (float)puVar26[6] * fVar76 + (float)puVar2[6] * fVar70);
                  fVar56 = (float)puVar44[7] * fVar56 + (float)puVar31[7] * fVar64 +
                           (float)puVar29[7] * fVar69 + (float)puVar25[7] * fVar74 +
                           (float)puVar26[7] * fVar76 + (float)puVar2[7] * fVar70;
                  break;
                case 7:
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar64 = fVar64 * fVar19;
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  fVar69 = fVar69 * fVar19;
                  puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                  fVar74 = fVar74 * fVar19;
                  pbVar36 = pbVar35 + 0xe;
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar70 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar75 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                  fVar76 = fVar76 * fVar19;
                  fVar70 = fVar70 * fVar19;
                  fVar75 = fVar75 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar74 + pfVar1[1] * fVar76 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar70 +
                                    (float)((ulong)*puVar2 >> 0x20) * fVar75,
                                    (float)*puVar44 * fVar56 + (float)*puVar31 * fVar64 +
                                    (float)*puVar29 * fVar69 + (float)*puVar25 * fVar74 +
                                    *pfVar1 * fVar76 + (float)*puVar26 * fVar70 +
                                    (float)*puVar2 * fVar75);
                  fVar46 = (float)puVar44[1] * fVar56 + (float)puVar31[1] * fVar64 +
                           (float)puVar29[1] * fVar69 + (float)puVar25[1] * fVar74 +
                           pfVar1[2] * fVar76 + (float)puVar26[1] * fVar70 +
                           (float)puVar2[1] * fVar75;
                  uVar49 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar74 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar76 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar2[2] >> 0x20) * fVar75,
                                    (float)puVar44[2] * fVar56 + (float)puVar31[2] * fVar64 +
                                    (float)puVar29[2] * fVar69 + (float)puVar25[2] * fVar74 +
                                    (float)*(undefined8 *)(pfVar1 + 4) * fVar76 +
                                    (float)puVar26[2] * fVar70 + (float)puVar2[2] * fVar75);
                  fVar47 = (float)puVar44[3] * fVar56 + (float)puVar31[3] * fVar64 +
                           (float)puVar29[3] * fVar69 + (float)puVar25[3] * fVar74 +
                           (float)*(undefined8 *)(pfVar1 + 6) * fVar76 + (float)puVar26[3] * fVar70
                           + (float)puVar2[3] * fVar75;
                  uVar50 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar74 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar76 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar2[4] >> 0x20) * fVar75,
                                    (float)puVar44[4] * fVar56 + (float)puVar31[4] * fVar64 +
                                    (float)puVar29[4] * fVar69 + (float)puVar25[4] * fVar74 +
                                    (float)*(undefined8 *)(pfVar1 + 8) * fVar76 +
                                    (float)puVar26[4] * fVar70 + (float)puVar2[4] * fVar75);
                  fVar53 = (float)puVar44[5] * fVar56 + (float)puVar31[5] * fVar64 +
                           (float)puVar29[5] * fVar69 + (float)puVar25[5] * fVar74 +
                           (float)*(undefined8 *)(pfVar1 + 10) * fVar76 + (float)puVar26[5] * fVar70
                           + (float)puVar2[5] * fVar75;
                  uVar65 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar69 +
                                    *(float *)((long)puVar25 + 0x34) * fVar74 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar76 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar2[6] >> 0x20) * fVar75,
                                    (float)puVar44[6] * fVar56 + (float)puVar31[6] * fVar64 +
                                    (float)puVar29[6] * fVar69 + *(float *)(puVar25 + 6) * fVar74 +
                                    (float)*(undefined8 *)(pfVar1 + 0xc) * fVar76 +
                                    (float)puVar26[6] * fVar70 + (float)puVar2[6] * fVar75);
                  fVar56 = (float)puVar44[7] * fVar56 + (float)puVar31[7] * fVar64 +
                           (float)puVar29[7] * fVar69 + *(float *)(puVar25 + 7) * fVar74 +
                           (float)*(undefined8 *)(pfVar1 + 0xe) * fVar76 +
                           (float)puVar26[7] * fVar70 + (float)puVar2[7] * fVar75;
                  break;
                case 8:
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  fVar69 = fVar69 * fVar19;
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar74 = fVar74 * fVar19;
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  fVar75 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar77 = (float)NEON_ucvtf((uint)pbVar35[0xf]);
                  fVar76 = fVar76 * fVar19;
                  pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar75 = fVar75 * fVar19;
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  fVar70 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar2 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                  puVar3 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xe] * 0x40);
                  pbVar36 = pbVar35 + 0x10;
                  fVar64 = fVar64 * fVar19;
                  fVar70 = fVar70 * fVar19;
                  fVar77 = fVar77 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar44 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar74 + pfVar1[1] * fVar76 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar70 +
                                    (float)((ulong)*puVar2 >> 0x20) * fVar75 +
                                    (float)((ulong)*puVar3 >> 0x20) * fVar77,
                                    (float)*puVar44 * fVar56 + (float)*puVar26 * fVar64 +
                                    (float)*puVar31 * fVar69 + (float)*puVar29 * fVar74 +
                                    *pfVar1 * fVar76 + (float)*puVar25 * fVar70 +
                                    (float)*puVar2 * fVar75 + (float)*puVar3 * fVar77);
                  fVar46 = (float)puVar44[1] * fVar56 + (float)puVar26[1] * fVar64 +
                           (float)puVar31[1] * fVar69 + (float)puVar29[1] * fVar74 +
                           pfVar1[2] * fVar76 + (float)puVar25[1] * fVar70 +
                           (float)puVar2[1] * fVar75 + (float)puVar3[1] * fVar77;
                  uVar49 = CONCAT44((float)((ulong)puVar44[2] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar74 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar76 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar2[2] >> 0x20) * fVar75 +
                                    (float)((ulong)puVar3[2] >> 0x20) * fVar77,
                                    (float)puVar44[2] * fVar56 + (float)puVar26[2] * fVar64 +
                                    (float)puVar31[2] * fVar69 + (float)puVar29[2] * fVar74 +
                                    (float)*(undefined8 *)(pfVar1 + 4) * fVar76 +
                                    (float)puVar25[2] * fVar70 + (float)puVar2[2] * fVar75 +
                                    (float)puVar3[2] * fVar77);
                  fVar47 = (float)puVar44[3] * fVar56 + (float)puVar26[3] * fVar64 +
                           (float)puVar31[3] * fVar69 + (float)puVar29[3] * fVar74 +
                           (float)*(undefined8 *)(pfVar1 + 6) * fVar76 + (float)puVar25[3] * fVar70
                           + (float)puVar2[3] * fVar75 + (float)puVar3[3] * fVar77;
                  uVar50 = CONCAT44((float)((ulong)puVar44[4] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar74 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar76 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar2[4] >> 0x20) * fVar75 +
                                    (float)((ulong)puVar3[4] >> 0x20) * fVar77,
                                    (float)puVar44[4] * fVar56 + (float)puVar26[4] * fVar64 +
                                    (float)puVar31[4] * fVar69 + (float)puVar29[4] * fVar74 +
                                    (float)*(undefined8 *)(pfVar1 + 8) * fVar76 +
                                    (float)puVar25[4] * fVar70 + (float)puVar2[4] * fVar75 +
                                    (float)puVar3[4] * fVar77);
                  fVar53 = (float)puVar44[5] * fVar56 + (float)puVar26[5] * fVar64 +
                           (float)puVar31[5] * fVar69 + (float)puVar29[5] * fVar74 +
                           (float)*(undefined8 *)(pfVar1 + 10) * fVar76 + (float)puVar25[5] * fVar70
                           + (float)puVar2[5] * fVar75 + (float)puVar3[5] * fVar77;
                  uVar65 = CONCAT44((float)((ulong)puVar44[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar69 +
                                    *(float *)((long)puVar29 + 0x34) * fVar74 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar76 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar2[6] >> 0x20) * fVar75 +
                                    (float)((ulong)puVar3[6] >> 0x20) * fVar77,
                                    (float)puVar44[6] * fVar56 + (float)puVar26[6] * fVar64 +
                                    (float)puVar31[6] * fVar69 + *(float *)(puVar29 + 6) * fVar74 +
                                    (float)*(undefined8 *)(pfVar1 + 0xc) * fVar76 +
                                    (float)puVar25[6] * fVar70 + (float)puVar2[6] * fVar75 +
                                    (float)puVar3[6] * fVar77);
                  fVar56 = (float)puVar44[7] * fVar56 + (float)puVar26[7] * fVar64 +
                           (float)puVar31[7] * fVar69 + *(float *)(puVar29 + 7) * fVar74 +
                           (float)*(undefined8 *)(pfVar1 + 0xe) * fVar76 +
                           (float)puVar25[7] * fVar70 + (float)puVar2[7] * fVar75 +
                           (float)puVar3[7] * fVar77;
                  break;
                default:
                  uVar65 = 0;
                  fVar56 = 0.0;
                  fVar46 = 0.0;
                  uVar48 = 0;
                  fVar47 = 0.0;
                  uVar49 = 0;
                  fVar53 = 0.0;
                  uVar50 = 0;
                }
                fVar76 = (float)*puVar41;
                fVar77 = (float)((ulong)uVar48 >> 0x20);
                fVar70 = (float)((ulong)*puVar41 >> 0x20);
                fVar52 = (float)((ulong)uVar49 >> 0x20);
                fVar75 = (float)puVar41[1];
                fVar54 = (float)((ulong)uVar50 >> 0x20);
                fVar64 = (float)*puVar42;
                fVar69 = (float)((ulong)*puVar42 >> 0x20);
                fVar74 = (float)puVar42[1];
                *(ulong *)pbVar27 =
                     CONCAT44(fVar54 * fVar75 +
                              fVar52 * fVar70 + fVar77 * fVar76 + (float)((ulong)uVar65 >> 0x20),
                              (float)uVar50 * fVar75 +
                              (float)uVar49 * fVar70 + (float)uVar48 * fVar76 + (float)uVar65);
                *(float *)(pbVar27 + 8) =
                     fVar53 * fVar75 + fVar47 * fVar70 + fVar46 * fVar76 + fVar56;
                *puVar30 = CONCAT44(fVar54 * fVar74 + fVar77 * fVar64 + fVar52 * fVar69,
                                    (float)uVar50 * fVar74 +
                                    (float)uVar48 * fVar64 + (float)uVar49 * fVar69);
                *(float *)(puVar30 + 1) = fVar53 * fVar74 + fVar46 * fVar64 + fVar47 * fVar69;
              }
              puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar38);
              puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar34);
              pbVar27 = pbVar27 + bVar37;
              puVar30 = (undefined8 *)((long)puVar30 + (ulong)bVar43);
              iVar33 = iVar33 + -1;
              puVar32 = puVar32 + 1;
              pbVar35 = pbVar36;
            } while (iVar33 != 0);
          }
        }
      }
    }
    else {
      if (!bVar20) goto LAB_00545548;
      auVar78 = FUN_0043c4e0(DAT_04c6f410);
      pbVar27 = auVar78._8_8_;
      lVar40 = auVar78._0_8_;
      if (bVar43 == 0) {
        if (lVar40 != 0) {
          FUN_00443a00(lVar40,"TtSkinBatch");
          pbVar27 = extraout_x1_05;
        }
        fVar19 = DAT_04102ed4;
        puVar32 = (ushort *)param_2[3];
        pbVar35 = (byte *)(param_2[2] + (ulong)*puVar32 * 2);
        Hint_Prefetch(pbVar35,0,0,0);
        lVar40 = *param_2;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x40,0,0,0);
        Hint_Prefetch(lVar40 + 0x80,0,0,0);
        Hint_Prefetch(lVar40 + 0xc0,0,0,0);
        iVar33 = (int)param_2[8];
        if (iVar33 != 0) {
          bVar43 = *(byte *)((long)param_2 + 0x164);
          bVar34 = *(byte *)((long)param_2 + 0x44);
          puVar42 = (undefined8 *)param_2[0x2b];
          puVar41 = (undefined8 *)param_2[7];
          do {
            lVar10 = (long)puVar41 + (ulong)bVar34 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar42 + (ulong)bVar43 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            uVar15 = puVar32[1];
            pbVar27 = (byte *)(ulong)uVar15;
            uVar18 = (uint)uVar15 - (uint)*puVar32;
            Hint_Prefetch(puVar32 + 2,0,0,0);
            pbVar36 = pbVar35;
            if ((uint)*puVar32 <= (uint)uVar15 && uVar18 != 0) {
              pbVar27 = pbVar35 + (ulong)(ushort)uVar18 * 2;
              uVar17 = (uVar18 & 0xffff) - 1;
              Hint_Prefetch(pbVar27,0,0,0);
              if (uVar17 < 8) {
                pbVar27 = (byte *)((ulong)(&switchD_00545648::switchdataD_0414569c)[uVar17] * 4 +
                                  0x54564c);
                switch(uVar18 & 0xffff) {
                case 1:
                  pbVar36 = pbVar35 + 2;
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = (float)puVar30[1];
                  uVar48 = *puVar30;
                  fVar47 = (float)puVar30[3];
                  uVar49 = puVar30[2];
                  fVar53 = (float)puVar30[5];
                  uVar50 = puVar30[4];
                  fVar56 = (float)puVar30[7];
                  uVar65 = puVar30[6];
                  break;
                case 2:
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  fVar64 = fVar64 * fVar19;
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  pbVar36 = pbVar35 + 4;
                  fVar56 = fVar56 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar56,
                                    (float)*puVar30 * fVar64 +
                                    (float)*(undefined8 *)pbVar27 * fVar56);
                  fVar46 = (float)puVar30[1] * fVar64 + (float)*(undefined8 *)(pbVar27 + 8) * fVar56
                  ;
                  uVar49 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar56
                                    ,(float)puVar30[2] * fVar64 +
                                     (float)*(undefined8 *)(pbVar27 + 0x10) * fVar56);
                  fVar47 = (float)puVar30[3] * fVar64 +
                           (float)*(undefined8 *)(pbVar27 + 0x18) * fVar56;
                  uVar50 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar56
                                    ,(float)puVar30[4] * fVar64 +
                                     (float)*(undefined8 *)(pbVar27 + 0x20) * fVar56);
                  fVar53 = (float)puVar30[5] * fVar64 +
                           (float)*(undefined8 *)(pbVar27 + 0x28) * fVar56;
                  uVar65 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar56
                                    ,(float)puVar30[6] * fVar64 +
                                     (float)*(undefined8 *)(pbVar27 + 0x30) * fVar56);
                  fVar56 = (float)puVar30[7] * fVar64 +
                           (float)*(undefined8 *)(pbVar27 + 0x38) * fVar56;
                  break;
                case 3:
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar64 = fVar64 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  pbVar36 = pbVar35 + 6;
                  fVar56 = fVar56 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar69,
                                    (float)*puVar30 * fVar64 +
                                    (float)*(undefined8 *)pbVar27 * fVar56 +
                                    (float)*puVar44 * fVar69);
                  fVar46 = (float)puVar30[1] * fVar64 + (float)*(undefined8 *)(pbVar27 + 8) * fVar56
                           + (float)puVar44[1] * fVar69;
                  uVar49 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar56
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar69,
                                    (float)puVar30[2] * fVar64 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar56 +
                                    (float)puVar44[2] * fVar69);
                  fVar47 = (float)puVar30[3] * fVar64 +
                           (float)*(undefined8 *)(pbVar27 + 0x18) * fVar56 +
                           (float)puVar44[3] * fVar69;
                  uVar50 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar56
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar69,
                                    (float)puVar30[4] * fVar64 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar56 +
                                    (float)puVar44[4] * fVar69);
                  fVar53 = (float)puVar30[5] * fVar64 +
                           (float)*(undefined8 *)(pbVar27 + 0x28) * fVar56 +
                           (float)puVar44[5] * fVar69;
                  uVar65 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar56
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar69,
                                    (float)puVar30[6] * fVar64 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar56 +
                                    (float)puVar44[6] * fVar69);
                  fVar56 = (float)puVar30[7] * fVar64 +
                           (float)*(undefined8 *)(pbVar27 + 0x38) * fVar56 +
                           (float)puVar44[7] * fVar69;
                  break;
                case 4:
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  fVar64 = fVar64 * fVar19;
                  fVar56 = fVar56 * fVar19;
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  pbVar36 = pbVar35 + 8;
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  fVar74 = fVar74 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar74,
                                    (float)*puVar30 * fVar64 +
                                    (float)*(undefined8 *)pbVar27 * fVar56 +
                                    (float)*puVar44 * fVar69 + (float)*puVar31 * fVar74);
                  fVar46 = (float)puVar30[1] * fVar64 + (float)*(undefined8 *)(pbVar27 + 8) * fVar56
                           + (float)puVar44[1] * fVar69 + (float)puVar31[1] * fVar74;
                  uVar49 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar56
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar74,
                                    (float)puVar30[2] * fVar64 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar56 +
                                    (float)puVar44[2] * fVar69 + (float)puVar31[2] * fVar74);
                  fVar47 = (float)puVar30[3] * fVar64 +
                           (float)*(undefined8 *)(pbVar27 + 0x18) * fVar56 +
                           (float)puVar44[3] * fVar69 + (float)puVar31[3] * fVar74;
                  uVar50 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar56
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar74,
                                    (float)puVar30[4] * fVar64 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar56 +
                                    (float)puVar44[4] * fVar69 + (float)puVar31[4] * fVar74);
                  fVar53 = (float)puVar30[5] * fVar64 +
                           (float)*(undefined8 *)(pbVar27 + 0x28) * fVar56 +
                           (float)puVar44[5] * fVar69 + (float)puVar31[5] * fVar74;
                  uVar65 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar64 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar56
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar74,
                                    (float)puVar30[6] * fVar64 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar56 +
                                    (float)puVar44[6] * fVar69 + (float)puVar31[6] * fVar74);
                  fVar56 = (float)puVar30[7] * fVar64 +
                           (float)*(undefined8 *)(pbVar27 + 0x38) * fVar56 +
                           (float)puVar44[7] * fVar69 + (float)puVar31[7] * fVar74;
                  break;
                case 5:
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar64 = fVar64 * fVar19;
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  pbVar36 = pbVar35 + 10;
                  fVar74 = fVar74 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar76 = fVar76 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar74 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar76,
                                    (float)*puVar30 * fVar56 +
                                    (float)*(undefined8 *)pbVar27 * fVar64 +
                                    (float)*puVar44 * fVar69 + (float)*puVar31 * fVar74 +
                                    (float)*puVar29 * fVar76);
                  fVar46 = (float)puVar30[1] * fVar56 + (float)*(undefined8 *)(pbVar27 + 8) * fVar64
                           + (float)puVar44[1] * fVar69 + (float)puVar31[1] * fVar74 +
                           (float)puVar29[1] * fVar76;
                  uVar49 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar76,
                                    (float)puVar30[2] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar64 +
                                    (float)puVar44[2] * fVar69 + (float)puVar31[2] * fVar74 +
                                    (float)puVar29[2] * fVar76);
                  fVar47 = (float)puVar30[3] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x18) * fVar64 +
                           (float)puVar44[3] * fVar69 + (float)puVar31[3] * fVar74 +
                           (float)puVar29[3] * fVar76;
                  uVar50 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar76,
                                    (float)puVar30[4] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar64 +
                                    (float)puVar44[4] * fVar69 + (float)puVar31[4] * fVar74 +
                                    (float)puVar29[4] * fVar76);
                  fVar53 = (float)puVar30[5] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x28) * fVar64 +
                           (float)puVar44[5] * fVar69 + (float)puVar31[5] * fVar74 +
                           (float)puVar29[5] * fVar76;
                  uVar65 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar74 +
                                    *(float *)((long)puVar29 + 0x34) * fVar76,
                                    (float)puVar30[6] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar64 +
                                    (float)puVar44[6] * fVar69 + (float)puVar31[6] * fVar74 +
                                    *(float *)(puVar29 + 6) * fVar76);
                  fVar56 = (float)puVar30[7] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x38) * fVar64 +
                           (float)puVar44[7] * fVar69 + (float)puVar31[7] * fVar74 +
                           *(float *)(puVar29 + 7) * fVar76;
                  break;
                case 6:
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar64 = fVar64 * fVar19;
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  pbVar36 = pbVar35 + 0xc;
                  fVar69 = fVar69 * fVar19;
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar74 = fVar74 * fVar19;
                  fVar70 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar76 = fVar76 * fVar19;
                  fVar70 = fVar70 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar74 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar76 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar70,
                                    (float)*puVar30 * fVar56 +
                                    (float)*(undefined8 *)pbVar27 * fVar64 +
                                    (float)*puVar44 * fVar69 + (float)*puVar31 * fVar74 +
                                    (float)*puVar29 * fVar76 + (float)*puVar25 * fVar70);
                  fVar46 = (float)puVar30[1] * fVar56 + (float)*(undefined8 *)(pbVar27 + 8) * fVar64
                           + (float)puVar44[1] * fVar69 + (float)puVar31[1] * fVar74 +
                           (float)puVar29[1] * fVar76 + (float)puVar25[1] * fVar70;
                  uVar49 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar76 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar70,
                                    (float)puVar30[2] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar64 +
                                    (float)puVar44[2] * fVar69 + (float)puVar31[2] * fVar74 +
                                    (float)puVar29[2] * fVar76 + (float)puVar25[2] * fVar70);
                  fVar47 = (float)puVar30[3] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x18) * fVar64 +
                           (float)puVar44[3] * fVar69 + (float)puVar31[3] * fVar74 +
                           (float)puVar29[3] * fVar76 + (float)puVar25[3] * fVar70;
                  uVar50 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar74 +
                                    *(float *)((long)puVar29 + 0x24) * fVar76 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar70,
                                    (float)puVar30[4] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar64 +
                                    (float)puVar44[4] * fVar69 + (float)puVar31[4] * fVar74 +
                                    *(float *)(puVar29 + 4) * fVar76 + (float)puVar25[4] * fVar70);
                  fVar53 = (float)puVar30[5] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x28) * fVar64 +
                           (float)puVar44[5] * fVar69 + (float)puVar31[5] * fVar74 +
                           *(float *)(puVar29 + 5) * fVar76 + (float)puVar25[5] * fVar70;
                  uVar65 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar76 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar70,
                                    (float)puVar30[6] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar64 +
                                    (float)puVar44[6] * fVar69 + (float)puVar31[6] * fVar74 +
                                    (float)puVar29[6] * fVar76 + (float)puVar25[6] * fVar70);
                  fVar56 = (float)puVar30[7] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x38) * fVar64 +
                           (float)puVar44[7] * fVar69 + (float)puVar31[7] * fVar74 +
                           (float)puVar29[7] * fVar76 + (float)puVar25[7] * fVar70;
                  break;
                case 7:
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar64 = fVar64 * fVar19;
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  fVar69 = fVar69 * fVar19;
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                  pbVar36 = pbVar35 + 0xe;
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar74 = fVar74 * fVar19;
                  fVar70 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar75 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                  fVar76 = fVar76 * fVar19;
                  fVar70 = fVar70 * fVar19;
                  fVar75 = fVar75 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar74 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar76 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar70 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar75,
                                    (float)*puVar30 * fVar56 +
                                    (float)*(undefined8 *)pbVar27 * fVar64 +
                                    (float)*puVar44 * fVar69 + (float)*puVar31 * fVar74 +
                                    (float)*puVar29 * fVar76 + (float)*puVar25 * fVar70 +
                                    (float)*puVar26 * fVar75);
                  fVar46 = (float)puVar30[1] * fVar56 + (float)*(undefined8 *)(pbVar27 + 8) * fVar64
                           + (float)puVar44[1] * fVar69 + (float)puVar31[1] * fVar74 +
                           (float)puVar29[1] * fVar76 + (float)puVar25[1] * fVar70 +
                           (float)puVar26[1] * fVar75;
                  uVar49 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar74 +
                                    *(float *)((long)puVar29 + 0x14) * fVar76 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar75,
                                    (float)puVar30[2] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar64 +
                                    (float)puVar44[2] * fVar69 + (float)puVar31[2] * fVar74 +
                                    *(float *)(puVar29 + 2) * fVar76 + (float)puVar25[2] * fVar70 +
                                    (float)puVar26[2] * fVar75);
                  fVar47 = (float)puVar30[3] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x18) * fVar64 +
                           (float)puVar44[3] * fVar69 + (float)puVar31[3] * fVar74 +
                           *(float *)(puVar29 + 3) * fVar76 + (float)puVar25[3] * fVar70 +
                           (float)puVar26[3] * fVar75;
                  uVar50 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar76 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar75,
                                    (float)puVar30[4] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar64 +
                                    (float)puVar44[4] * fVar69 + (float)puVar31[4] * fVar74 +
                                    (float)puVar29[4] * fVar76 + (float)puVar25[4] * fVar70 +
                                    (float)puVar26[4] * fVar75);
                  fVar53 = (float)puVar30[5] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x28) * fVar64 +
                           (float)puVar44[5] * fVar69 + (float)puVar31[5] * fVar74 +
                           (float)puVar29[5] * fVar76 + (float)puVar25[5] * fVar70 +
                           (float)puVar26[5] * fVar75;
                  uVar65 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar76 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar75,
                                    (float)puVar30[6] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar64 +
                                    (float)puVar44[6] * fVar69 + (float)puVar31[6] * fVar74 +
                                    (float)puVar29[6] * fVar76 + (float)puVar25[6] * fVar70 +
                                    (float)puVar26[6] * fVar75);
                  fVar56 = (float)puVar30[7] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x38) * fVar64 +
                           (float)puVar44[7] * fVar69 + (float)puVar31[7] * fVar74 +
                           (float)puVar29[7] * fVar76 + (float)puVar25[7] * fVar70 +
                           (float)puVar26[7] * fVar75;
                  break;
                case 8:
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar56 = fVar56 * fVar19;
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  fVar64 = fVar64 * fVar19;
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar69 = fVar69 * fVar19;
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  fVar74 = fVar74 * fVar19;
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                  fVar70 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar75 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xe] * 0x40);
                  fVar77 = (float)NEON_ucvtf((uint)pbVar35[0xf]);
                  pbVar36 = pbVar35 + 0x10;
                  fVar75 = fVar75 * fVar19;
                  fVar76 = fVar76 * fVar19;
                  fVar70 = fVar70 * fVar19;
                  fVar77 = fVar77 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar74 + pfVar1[1] * fVar76 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar70 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar75 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar77,
                                    (float)*puVar30 * fVar56 +
                                    (float)*(undefined8 *)pbVar27 * fVar64 +
                                    (float)*puVar44 * fVar69 + (float)*puVar31 * fVar74 +
                                    *pfVar1 * fVar76 + (float)*puVar29 * fVar70 +
                                    (float)*puVar25 * fVar75 + (float)*puVar26 * fVar77);
                  fVar46 = (float)puVar30[1] * fVar56 + (float)*(undefined8 *)(pbVar27 + 8) * fVar64
                           + (float)puVar44[1] * fVar69 + (float)puVar31[1] * fVar74 +
                           pfVar1[2] * fVar76 + (float)puVar29[1] * fVar70 +
                           (float)puVar25[1] * fVar75 + (float)puVar26[1] * fVar77;
                  uVar49 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar74 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar76 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar75 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar77,
                                    (float)puVar30[2] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar64 +
                                    (float)puVar44[2] * fVar69 + (float)puVar31[2] * fVar74 +
                                    (float)*(undefined8 *)(pfVar1 + 4) * fVar76 +
                                    (float)puVar29[2] * fVar70 + (float)puVar25[2] * fVar75 +
                                    (float)puVar26[2] * fVar77);
                  fVar47 = (float)puVar30[3] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x18) * fVar64 +
                           (float)puVar44[3] * fVar69 + (float)puVar31[3] * fVar74 +
                           (float)*(undefined8 *)(pfVar1 + 6) * fVar76 + (float)puVar29[3] * fVar70
                           + (float)puVar25[3] * fVar75 + (float)puVar26[3] * fVar77;
                  uVar50 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar74 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar76 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar75 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar77,
                                    (float)puVar30[4] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar64 +
                                    (float)puVar44[4] * fVar69 + (float)puVar31[4] * fVar74 +
                                    (float)*(undefined8 *)(pfVar1 + 8) * fVar76 +
                                    (float)puVar29[4] * fVar70 + (float)puVar25[4] * fVar75 +
                                    (float)puVar26[4] * fVar77);
                  fVar53 = (float)puVar30[5] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x28) * fVar64 +
                           (float)puVar44[5] * fVar69 + (float)puVar31[5] * fVar74 +
                           (float)*(undefined8 *)(pfVar1 + 10) * fVar76 + (float)puVar29[5] * fVar70
                           + (float)puVar25[5] * fVar75 + (float)puVar26[5] * fVar77;
                  uVar65 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar64
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar69 +
                                    *(float *)((long)puVar31 + 0x34) * fVar74 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar76 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar70 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar75 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar77,
                                    (float)puVar30[6] * fVar56 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar64 +
                                    (float)puVar44[6] * fVar69 + *(float *)(puVar31 + 6) * fVar74 +
                                    (float)*(undefined8 *)(pfVar1 + 0xc) * fVar76 +
                                    (float)puVar29[6] * fVar70 + (float)puVar25[6] * fVar75 +
                                    (float)puVar26[6] * fVar77);
                  fVar56 = (float)puVar30[7] * fVar56 +
                           (float)*(undefined8 *)(pbVar27 + 0x38) * fVar64 +
                           (float)puVar44[7] * fVar69 + *(float *)(puVar31 + 7) * fVar74 +
                           (float)*(undefined8 *)(pfVar1 + 0xe) * fVar76 +
                           (float)puVar29[7] * fVar70 + (float)puVar25[7] * fVar75 +
                           (float)puVar26[7] * fVar77;
                }
              }
              else {
                uVar65 = 0;
                fVar56 = 0.0;
                fVar46 = 0.0;
                uVar48 = 0;
                fVar47 = 0.0;
                uVar49 = 0;
                fVar53 = 0.0;
                uVar50 = 0;
              }
              fVar64 = (float)*puVar41;
              fVar69 = (float)((ulong)*puVar41 >> 0x20);
              fVar74 = (float)puVar41[1];
              *puVar42 = CONCAT44((float)((ulong)uVar50 >> 0x20) * fVar74 +
                                  (float)((ulong)uVar49 >> 0x20) * fVar69 +
                                  (float)((ulong)uVar48 >> 0x20) * fVar64 +
                                  (float)((ulong)uVar65 >> 0x20),
                                  (float)uVar50 * fVar74 +
                                  (float)uVar49 * fVar69 + (float)uVar48 * fVar64 + (float)uVar65);
              *(float *)(puVar42 + 1) = fVar53 * fVar74 + fVar47 * fVar69 + fVar46 * fVar64 + fVar56
              ;
            }
            puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar34);
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar43);
            iVar33 = iVar33 + -1;
            puVar32 = puVar32 + 1;
            pbVar35 = pbVar36;
          } while (iVar33 != 0);
        }
      }
      else {
        if (lVar40 != 0) {
          FUN_00443a00(lVar40,"TtSkinBatch");
          pbVar27 = extraout_x1_02;
        }
        fVar19 = DAT_04102ed4;
        puVar32 = (ushort *)param_2[3];
        pbVar35 = (byte *)(param_2[2] + (ulong)*puVar32 * 2);
        Hint_Prefetch(pbVar35,0,0,0);
        lVar40 = *param_2;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x40,0,0,0);
        Hint_Prefetch(lVar40 + 0x80,0,0,0);
        Hint_Prefetch(lVar40 + 0xc0,0,0,0);
        iVar33 = (int)param_2[8];
        if (iVar33 != 0) {
          bVar43 = *(byte *)((long)param_2 + 0x164);
          bVar34 = *(byte *)((long)param_2 + 0x44);
          puVar42 = (undefined8 *)param_2[0x2b];
          puVar41 = (undefined8 *)param_2[7];
          do {
            lVar10 = (long)puVar41 + (ulong)bVar34 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            lVar10 = (long)puVar42 + (ulong)bVar43 * 4;
            Hint_Prefetch(lVar10,0,0,0);
            Hint_Prefetch(lVar10 + 0x40,0,0,0);
            uVar15 = puVar32[1];
            pbVar27 = (byte *)(ulong)uVar15;
            uVar18 = (uint)uVar15 - (uint)*puVar32;
            Hint_Prefetch(puVar32 + 2,0,0,0);
            pbVar36 = pbVar35;
            if ((uint)*puVar32 <= (uint)uVar15 && uVar18 != 0) {
              pbVar27 = pbVar35 + (ulong)(ushort)uVar18 * 2;
              uVar17 = (uVar18 & 0xffff) - 1;
              Hint_Prefetch(pbVar27,0,0,0);
              if (uVar17 < 8) {
                pbVar27 = (byte *)((ulong)(&switchD_00542dc4::switchdataD_041456ac)[uVar17] * 4 +
                                  0x542dc8);
                switch(uVar18 & 0xffff) {
                case 1:
                  pbVar36 = pbVar35 + 2;
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  uVar49 = puVar30[1];
                  uVar48 = *puVar30;
                  uVar65 = puVar30[3];
                  uVar50 = puVar30[2];
                  uVar72 = puVar30[5];
                  uVar51 = puVar30[4];
                  uVar73 = puVar30[7];
                  uVar71 = puVar30[6];
                  break;
                case 2:
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  fVar47 = fVar47 * fVar19;
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  pbVar36 = pbVar35 + 4;
                  fVar46 = fVar46 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar46,
                                    (float)*puVar30 * fVar47 +
                                    (float)*(undefined8 *)pbVar27 * fVar46);
                  uVar49 = CONCAT44((float)((ulong)puVar30[1] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 8) >> 0x20) * fVar46,
                                    (float)puVar30[1] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 8) * fVar46);
                  uVar50 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar46
                                    ,(float)puVar30[2] * fVar47 +
                                     (float)*(undefined8 *)(pbVar27 + 0x10) * fVar46);
                  uVar65 = CONCAT44((float)((ulong)puVar30[3] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x18) >> 0x20) * fVar46
                                    ,(float)puVar30[3] * fVar47 +
                                     (float)*(undefined8 *)(pbVar27 + 0x18) * fVar46);
                  uVar51 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar46
                                    ,(float)puVar30[4] * fVar47 +
                                     (float)*(undefined8 *)(pbVar27 + 0x20) * fVar46);
                  uVar72 = CONCAT44((float)((ulong)puVar30[5] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x28) >> 0x20) * fVar46
                                    ,(float)puVar30[5] * fVar47 +
                                     (float)*(undefined8 *)(pbVar27 + 0x28) * fVar46);
                  uVar71 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar46
                                    ,(float)puVar30[6] * fVar47 +
                                     (float)*(undefined8 *)(pbVar27 + 0x30) * fVar46);
                  uVar73 = CONCAT44((float)((ulong)puVar30[7] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x38) >> 0x20) * fVar46
                                    ,(float)puVar30[7] * fVar47 +
                                     (float)*(undefined8 *)(pbVar27 + 0x38) * fVar46);
                  break;
                case 3:
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar47 = fVar47 * fVar19;
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  pbVar36 = pbVar35 + 6;
                  fVar46 = fVar46 * fVar19;
                  fVar53 = fVar53 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar46 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar53,
                                    (float)*puVar30 * fVar47 +
                                    (float)*(undefined8 *)pbVar27 * fVar46 +
                                    (float)*puVar44 * fVar53);
                  uVar49 = CONCAT44((float)((ulong)puVar30[1] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 8) >> 0x20) * fVar46 +
                                    (float)((ulong)puVar44[1] >> 0x20) * fVar53,
                                    (float)puVar30[1] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 8) * fVar46 +
                                    (float)puVar44[1] * fVar53);
                  uVar50 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar53,
                                    (float)puVar30[2] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar46 +
                                    (float)puVar44[2] * fVar53);
                  uVar65 = CONCAT44((float)((ulong)puVar30[3] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x18) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[3] >> 0x20) * fVar53,
                                    (float)puVar30[3] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x18) * fVar46 +
                                    (float)puVar44[3] * fVar53);
                  uVar51 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar53,
                                    (float)puVar30[4] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar46 +
                                    (float)puVar44[4] * fVar53);
                  uVar72 = CONCAT44((float)((ulong)puVar30[5] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x28) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[5] >> 0x20) * fVar53,
                                    (float)puVar30[5] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x28) * fVar46 +
                                    (float)puVar44[5] * fVar53);
                  uVar71 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar53,
                                    (float)puVar30[6] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar46 +
                                    (float)puVar44[6] * fVar53);
                  uVar73 = CONCAT44((float)((ulong)puVar30[7] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x38) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[7] >> 0x20) * fVar53,
                                    (float)puVar30[7] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x38) * fVar46 +
                                    (float)puVar44[7] * fVar53);
                  break;
                case 4:
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  fVar47 = fVar47 * fVar19;
                  fVar46 = fVar46 * fVar19;
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  pbVar36 = pbVar35 + 8;
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  fVar56 = fVar56 * fVar19;
                  fVar53 = fVar53 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar46 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar56,
                                    (float)*puVar30 * fVar47 +
                                    (float)*(undefined8 *)pbVar27 * fVar46 +
                                    (float)*puVar44 * fVar53 + (float)*puVar31 * fVar56);
                  uVar49 = CONCAT44((float)((ulong)puVar30[1] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 8) >> 0x20) * fVar46 +
                                    (float)((ulong)puVar44[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar56,
                                    (float)puVar30[1] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 8) * fVar46 +
                                    (float)puVar44[1] * fVar53 + (float)puVar31[1] * fVar56);
                  uVar50 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar56,
                                    (float)puVar30[2] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar46 +
                                    (float)puVar44[2] * fVar53 + (float)puVar31[2] * fVar56);
                  uVar65 = CONCAT44((float)((ulong)puVar30[3] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x18) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar56,
                                    (float)puVar30[3] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x18) * fVar46 +
                                    (float)puVar44[3] * fVar53 + (float)puVar31[3] * fVar56);
                  uVar51 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar56,
                                    (float)puVar30[4] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar46 +
                                    (float)puVar44[4] * fVar53 + (float)puVar31[4] * fVar56);
                  uVar72 = CONCAT44((float)((ulong)puVar30[5] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x28) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar56,
                                    (float)puVar30[5] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x28) * fVar46 +
                                    (float)puVar44[5] * fVar53 + (float)puVar31[5] * fVar56);
                  uVar71 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar56,
                                    (float)puVar30[6] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar46 +
                                    (float)puVar44[6] * fVar53 + (float)puVar31[6] * fVar56);
                  uVar73 = CONCAT44((float)((ulong)puVar30[7] >> 0x20) * fVar47 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x38) >> 0x20) * fVar46
                                    + (float)((ulong)puVar44[7] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar56,
                                    (float)puVar30[7] * fVar47 +
                                    (float)*(undefined8 *)(pbVar27 + 0x38) * fVar46 +
                                    (float)puVar44[7] * fVar53 + (float)puVar31[7] * fVar56);
                  break;
                case 5:
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = fVar46 * fVar19;
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar47 = fVar47 * fVar19;
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  pbVar36 = pbVar35 + 10;
                  fVar56 = fVar56 * fVar19;
                  fVar53 = fVar53 * fVar19;
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar64 = fVar64 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar64,
                                    (float)*puVar30 * fVar46 +
                                    (float)*(undefined8 *)pbVar27 * fVar47 +
                                    (float)*puVar44 * fVar53 + (float)*puVar31 * fVar56 +
                                    (float)*puVar29 * fVar64);
                  uVar49 = CONCAT44((float)((ulong)puVar30[1] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 8) >> 0x20) * fVar47 +
                                    (float)((ulong)puVar44[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[1] >> 0x20) * fVar64,
                                    (float)puVar30[1] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 8) * fVar47 +
                                    (float)puVar44[1] * fVar53 + (float)puVar31[1] * fVar56 +
                                    (float)puVar29[1] * fVar64);
                  uVar50 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar64,
                                    (float)puVar30[2] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar47 +
                                    (float)puVar44[2] * fVar53 + (float)puVar31[2] * fVar56 +
                                    (float)puVar29[2] * fVar64);
                  uVar65 = CONCAT44((float)((ulong)puVar30[3] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x18) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[3] >> 0x20) * fVar64,
                                    (float)puVar30[3] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x18) * fVar47 +
                                    (float)puVar44[3] * fVar53 + (float)puVar31[3] * fVar56 +
                                    (float)puVar29[3] * fVar64);
                  uVar51 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar64,
                                    (float)puVar30[4] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar47 +
                                    (float)puVar44[4] * fVar53 + (float)puVar31[4] * fVar56 +
                                    (float)puVar29[4] * fVar64);
                  uVar72 = CONCAT44((float)((ulong)puVar30[5] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x28) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[5] >> 0x20) * fVar64,
                                    (float)puVar30[5] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x28) * fVar47 +
                                    (float)puVar44[5] * fVar53 + (float)puVar31[5] * fVar56 +
                                    (float)puVar29[5] * fVar64);
                  uVar71 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar29 + 0x34) * fVar64,
                                    (float)puVar30[6] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar47 +
                                    (float)puVar44[6] * fVar53 + (float)puVar31[6] * fVar56 +
                                    *(float *)(puVar29 + 6) * fVar64);
                  uVar73 = CONCAT44((float)((ulong)puVar30[7] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x38) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[7] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar29 + 0x3c) * fVar64,
                                    (float)puVar30[7] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x38) * fVar47 +
                                    (float)puVar44[7] * fVar53 + (float)puVar31[7] * fVar56 +
                                    *(float *)(puVar29 + 7) * fVar64);
                  break;
                case 6:
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = fVar46 * fVar19;
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar47 = fVar47 * fVar19;
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  pbVar36 = pbVar35 + 0xc;
                  fVar53 = fVar53 * fVar19;
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar64 = fVar64 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar69,
                                    (float)*puVar30 * fVar46 +
                                    (float)*(undefined8 *)pbVar27 * fVar47 +
                                    (float)*puVar44 * fVar53 + (float)*puVar31 * fVar56 +
                                    (float)*puVar29 * fVar64 + (float)*puVar25 * fVar69);
                  uVar49 = CONCAT44((float)((ulong)puVar30[1] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 8) >> 0x20) * fVar47 +
                                    (float)((ulong)puVar44[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[1] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[1] >> 0x20) * fVar69,
                                    (float)puVar30[1] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 8) * fVar47 +
                                    (float)puVar44[1] * fVar53 + (float)puVar31[1] * fVar56 +
                                    (float)puVar29[1] * fVar64 + (float)puVar25[1] * fVar69);
                  uVar50 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar69,
                                    (float)puVar30[2] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar47 +
                                    (float)puVar44[2] * fVar53 + (float)puVar31[2] * fVar56 +
                                    (float)puVar29[2] * fVar64 + (float)puVar25[2] * fVar69);
                  uVar65 = CONCAT44((float)((ulong)puVar30[3] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x18) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[3] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[3] >> 0x20) * fVar69,
                                    (float)puVar30[3] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x18) * fVar47 +
                                    (float)puVar44[3] * fVar53 + (float)puVar31[3] * fVar56 +
                                    (float)puVar29[3] * fVar64 + (float)puVar25[3] * fVar69);
                  uVar51 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar29 + 0x24) * fVar64 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar69,
                                    (float)puVar30[4] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar47 +
                                    (float)puVar44[4] * fVar53 + (float)puVar31[4] * fVar56 +
                                    *(float *)(puVar29 + 4) * fVar64 + (float)puVar25[4] * fVar69);
                  uVar72 = CONCAT44((float)((ulong)puVar30[5] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x28) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar29 + 0x2c) * fVar64 +
                                    (float)((ulong)puVar25[5] >> 0x20) * fVar69,
                                    (float)puVar30[5] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x28) * fVar47 +
                                    (float)puVar44[5] * fVar53 + (float)puVar31[5] * fVar56 +
                                    *(float *)(puVar29 + 5) * fVar64 + (float)puVar25[5] * fVar69);
                  uVar71 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar69,
                                    (float)puVar30[6] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar47 +
                                    (float)puVar44[6] * fVar53 + (float)puVar31[6] * fVar56 +
                                    (float)puVar29[6] * fVar64 + (float)puVar25[6] * fVar69);
                  uVar73 = CONCAT44((float)((ulong)puVar30[7] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x38) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[7] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[7] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[7] >> 0x20) * fVar69,
                                    (float)puVar30[7] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x38) * fVar47 +
                                    (float)puVar44[7] * fVar53 + (float)puVar31[7] * fVar56 +
                                    (float)puVar29[7] * fVar64 + (float)puVar25[7] * fVar69);
                  break;
                case 7:
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = fVar46 * fVar19;
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar47 = fVar47 * fVar19;
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  fVar53 = fVar53 * fVar19;
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                  pbVar36 = pbVar35 + 0xe;
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  fVar56 = fVar56 * fVar19;
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                  fVar64 = fVar64 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  fVar74 = fVar74 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar56 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar64 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar74,
                                    (float)*puVar30 * fVar46 +
                                    (float)*(undefined8 *)pbVar27 * fVar47 +
                                    (float)*puVar44 * fVar53 + (float)*puVar31 * fVar56 +
                                    (float)*puVar29 * fVar64 + (float)*puVar25 * fVar69 +
                                    (float)*puVar26 * fVar74);
                  uVar49 = CONCAT44((float)((ulong)puVar30[1] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 8) >> 0x20) * fVar47 +
                                    (float)((ulong)puVar44[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[1] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[1] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar26[1] >> 0x20) * fVar74,
                                    (float)puVar30[1] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 8) * fVar47 +
                                    (float)puVar44[1] * fVar53 + (float)puVar31[1] * fVar56 +
                                    (float)puVar29[1] * fVar64 + (float)puVar25[1] * fVar69 +
                                    (float)puVar26[1] * fVar74);
                  uVar50 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar29 + 0x14) * fVar64 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar74,
                                    (float)puVar30[2] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar47 +
                                    (float)puVar44[2] * fVar53 + (float)puVar31[2] * fVar56 +
                                    *(float *)(puVar29 + 2) * fVar64 + (float)puVar25[2] * fVar69 +
                                    (float)puVar26[2] * fVar74);
                  uVar65 = CONCAT44((float)((ulong)puVar30[3] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x18) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar56 +
                                    *(float *)((long)puVar29 + 0x1c) * fVar64 +
                                    (float)((ulong)puVar25[3] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar26[3] >> 0x20) * fVar74,
                                    (float)puVar30[3] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x18) * fVar47 +
                                    (float)puVar44[3] * fVar53 + (float)puVar31[3] * fVar56 +
                                    *(float *)(puVar29 + 3) * fVar64 + (float)puVar25[3] * fVar69 +
                                    (float)puVar26[3] * fVar74);
                  uVar51 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar74,
                                    (float)puVar30[4] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar47 +
                                    (float)puVar44[4] * fVar53 + (float)puVar31[4] * fVar56 +
                                    (float)puVar29[4] * fVar64 + (float)puVar25[4] * fVar69 +
                                    (float)puVar26[4] * fVar74);
                  uVar72 = CONCAT44((float)((ulong)puVar30[5] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x28) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[5] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[5] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar26[5] >> 0x20) * fVar74,
                                    (float)puVar30[5] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x28) * fVar47 +
                                    (float)puVar44[5] * fVar53 + (float)puVar31[5] * fVar56 +
                                    (float)puVar29[5] * fVar64 + (float)puVar25[5] * fVar69 +
                                    (float)puVar26[5] * fVar74);
                  uVar71 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[6] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar74,
                                    (float)puVar30[6] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar47 +
                                    (float)puVar44[6] * fVar53 + (float)puVar31[6] * fVar56 +
                                    (float)puVar29[6] * fVar64 + (float)puVar25[6] * fVar69 +
                                    (float)puVar26[6] * fVar74);
                  uVar73 = CONCAT44((float)((ulong)puVar30[7] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x38) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[7] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[7] >> 0x20) * fVar56 +
                                    (float)((ulong)puVar29[7] >> 0x20) * fVar64 +
                                    (float)((ulong)puVar25[7] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar26[7] >> 0x20) * fVar74,
                                    (float)puVar30[7] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x38) * fVar47 +
                                    (float)puVar44[7] * fVar53 + (float)puVar31[7] * fVar56 +
                                    (float)puVar29[7] * fVar64 + (float)puVar25[7] * fVar69 +
                                    (float)puVar26[7] * fVar74);
                  break;
                case 8:
                  fVar46 = (float)NEON_ucvtf((uint)pbVar35[1]);
                  puVar30 = (undefined8 *)(lVar40 + (ulong)*pbVar35 * 0x40);
                  fVar46 = fVar46 * fVar19;
                  fVar47 = (float)NEON_ucvtf((uint)pbVar35[3]);
                  fVar53 = (float)NEON_ucvtf((uint)pbVar35[5]);
                  fVar47 = fVar47 * fVar19;
                  pbVar27 = (byte *)(lVar40 + (ulong)pbVar35[2] * 0x40);
                  fVar56 = (float)NEON_ucvtf((uint)pbVar35[7]);
                  puVar44 = (undefined8 *)(lVar40 + (ulong)pbVar35[4] * 0x40);
                  fVar53 = fVar53 * fVar19;
                  fVar64 = (float)NEON_ucvtf((uint)pbVar35[9]);
                  puVar31 = (undefined8 *)(lVar40 + (ulong)pbVar35[6] * 0x40);
                  pfVar1 = (float *)(lVar40 + (ulong)pbVar35[8] * 0x40);
                  puVar29 = (undefined8 *)(lVar40 + (ulong)pbVar35[10] * 0x40);
                  fVar56 = fVar56 * fVar19;
                  puVar25 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xc] * 0x40);
                  fVar69 = (float)NEON_ucvtf((uint)pbVar35[0xb]);
                  fVar74 = (float)NEON_ucvtf((uint)pbVar35[0xd]);
                  puVar26 = (undefined8 *)(lVar40 + (ulong)pbVar35[0xe] * 0x40);
                  fVar76 = (float)NEON_ucvtf((uint)pbVar35[0xf]);
                  pbVar36 = pbVar35 + 0x10;
                  fVar74 = fVar74 * fVar19;
                  fVar64 = fVar64 * fVar19;
                  fVar69 = fVar69 * fVar19;
                  fVar76 = fVar76 * fVar19;
                  uVar48 = CONCAT44((float)((ulong)*puVar30 >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)pbVar27 >> 0x20) * fVar47 +
                                    (float)((ulong)*puVar44 >> 0x20) * fVar53 +
                                    (float)((ulong)*puVar31 >> 0x20) * fVar56 + pfVar1[1] * fVar64 +
                                    (float)((ulong)*puVar29 >> 0x20) * fVar69 +
                                    (float)((ulong)*puVar25 >> 0x20) * fVar74 +
                                    (float)((ulong)*puVar26 >> 0x20) * fVar76,
                                    (float)*puVar30 * fVar46 +
                                    (float)*(undefined8 *)pbVar27 * fVar47 +
                                    (float)*puVar44 * fVar53 + (float)*puVar31 * fVar56 +
                                    *pfVar1 * fVar64 + (float)*puVar29 * fVar69 +
                                    (float)*puVar25 * fVar74 + (float)*puVar26 * fVar76);
                  uVar49 = CONCAT44((float)((ulong)puVar30[1] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 8) >> 0x20) * fVar47 +
                                    (float)((ulong)puVar44[1] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[1] >> 0x20) * fVar56 + pfVar1[3] * fVar64
                                    + (float)((ulong)puVar29[1] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[1] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[1] >> 0x20) * fVar76,
                                    (float)puVar30[1] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 8) * fVar47 +
                                    (float)puVar44[1] * fVar53 + (float)puVar31[1] * fVar56 +
                                    pfVar1[2] * fVar64 + (float)puVar29[1] * fVar69 +
                                    (float)puVar25[1] * fVar74 + (float)puVar26[1] * fVar76);
                  uVar50 = CONCAT44((float)((ulong)puVar30[2] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[2] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[2] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[2] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[2] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[2] >> 0x20) * fVar76,
                                    (float)puVar30[2] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x10) * fVar47 +
                                    (float)puVar44[2] * fVar53 + (float)puVar31[2] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 4) * fVar64 +
                                    (float)puVar29[2] * fVar69 + (float)puVar25[2] * fVar74 +
                                    (float)puVar26[2] * fVar76);
                  uVar65 = CONCAT44((float)((ulong)puVar30[3] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x18) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[3] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[3] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[3] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[3] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[3] >> 0x20) * fVar76,
                                    (float)puVar30[3] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x18) * fVar47 +
                                    (float)puVar44[3] * fVar53 + (float)puVar31[3] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 6) * fVar64 +
                                    (float)puVar29[3] * fVar69 + (float)puVar25[3] * fVar74 +
                                    (float)puVar26[3] * fVar76);
                  uVar51 = CONCAT44((float)((ulong)puVar30[4] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x20) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[4] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[4] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[4] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[4] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[4] >> 0x20) * fVar76,
                                    (float)puVar30[4] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x20) * fVar47 +
                                    (float)puVar44[4] * fVar53 + (float)puVar31[4] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 8) * fVar64 +
                                    (float)puVar29[4] * fVar69 + (float)puVar25[4] * fVar74 +
                                    (float)puVar26[4] * fVar76);
                  uVar72 = CONCAT44((float)((ulong)puVar30[5] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x28) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[5] >> 0x20) * fVar53 +
                                    (float)((ulong)puVar31[5] >> 0x20) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[5] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[5] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[5] >> 0x20) * fVar76,
                                    (float)puVar30[5] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x28) * fVar47 +
                                    (float)puVar44[5] * fVar53 + (float)puVar31[5] * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 10) * fVar64 +
                                    (float)puVar29[5] * fVar69 + (float)puVar25[5] * fVar74 +
                                    (float)puVar26[5] * fVar76);
                  uVar71 = CONCAT44((float)((ulong)puVar30[6] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[6] >> 0x20) * fVar53 +
                                    *(float *)((long)puVar31 + 0x34) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[6] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[6] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[6] >> 0x20) * fVar76,
                                    (float)puVar30[6] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x30) * fVar47 +
                                    (float)puVar44[6] * fVar53 + *(float *)(puVar31 + 6) * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 0xc) * fVar64 +
                                    (float)puVar29[6] * fVar69 + (float)puVar25[6] * fVar74 +
                                    (float)puVar26[6] * fVar76);
                  uVar73 = CONCAT44((float)((ulong)puVar30[7] >> 0x20) * fVar46 +
                                    (float)((ulong)*(undefined8 *)(pbVar27 + 0x38) >> 0x20) * fVar47
                                    + (float)((ulong)puVar44[7] >> 0x20) * fVar53 +
                                    *(float *)((long)puVar31 + 0x3c) * fVar56 +
                                    (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20) * fVar64 +
                                    (float)((ulong)puVar29[7] >> 0x20) * fVar69 +
                                    (float)((ulong)puVar25[7] >> 0x20) * fVar74 +
                                    (float)((ulong)puVar26[7] >> 0x20) * fVar76,
                                    (float)puVar30[7] * fVar46 +
                                    (float)*(undefined8 *)(pbVar27 + 0x38) * fVar47 +
                                    (float)puVar44[7] * fVar53 + *(float *)(puVar31 + 7) * fVar56 +
                                    (float)*(undefined8 *)(pfVar1 + 0xe) * fVar64 +
                                    (float)puVar29[7] * fVar69 + (float)puVar25[7] * fVar74 +
                                    (float)puVar26[7] * fVar76);
                }
              }
              else {
                uVar71 = 0;
                uVar73 = 0;
                uVar49 = 0;
                uVar48 = 0;
                uVar65 = 0;
                uVar50 = 0;
                uVar72 = 0;
                uVar51 = 0;
              }
              fVar46 = (float)*puVar41;
              fVar47 = (float)((ulong)*puVar41 >> 0x20);
              fVar53 = (float)puVar41[1];
              puVar42[1] = CONCAT44((float)((ulong)uVar72 >> 0x20) * fVar53 +
                                    (float)((ulong)uVar65 >> 0x20) * fVar47 +
                                    (float)((ulong)uVar49 >> 0x20) * fVar46 +
                                    (float)((ulong)uVar73 >> 0x20),
                                    (float)uVar72 * fVar53 +
                                    (float)uVar65 * fVar47 + (float)uVar49 * fVar46 + (float)uVar73)
              ;
              *puVar42 = CONCAT44((float)((ulong)uVar51 >> 0x20) * fVar53 +
                                  (float)((ulong)uVar50 >> 0x20) * fVar47 +
                                  (float)((ulong)uVar48 >> 0x20) * fVar46 +
                                  (float)((ulong)uVar71 >> 0x20),
                                  (float)uVar51 * fVar53 +
                                  (float)uVar50 * fVar47 + (float)uVar48 * fVar46 + (float)uVar71);
            }
            puVar41 = (undefined8 *)((long)puVar41 + (ulong)bVar34);
            puVar42 = (undefined8 *)((long)puVar42 + (ulong)bVar43);
            iVar33 = iVar33 + -1;
            puVar32 = puVar32 + 1;
            pbVar35 = pbVar36;
          } while (iVar33 != 0);
        }
      }
    }
    lVar40 = FUN_0043c4e0(*puVar45,pbVar27);
  }
  if (lVar40 != 0) {
    FUN_00443a70(lVar40,&DAT_04085310);
  }
LAB_00545548:
  if (lVar24 != 0) {
    FUN_00443a70(lVar24,&DAT_04085310);
  }
  return;
}

