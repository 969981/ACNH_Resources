
void FUN_003bdfb0(long param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
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
  
  if (*(char *)(param_1 + 9) == '\0') {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x1e0);
  if (lVar15 == 0) {
    return;
  }
  sVar6 = *(short *)(param_1 + 0x136);
  if (*(short *)(param_1 + 0x138) < sVar6) {
    iVar8 = 0;
    if (sVar6 != 0) {
      iVar8 = (int)(((uint)*(byte *)(param_1 + 0x135) - (uint)*(byte *)(param_1 + 0x134)) *
                   (int)*(short *)(param_1 + 0x138)) / (int)sVar6;
    }
    sVar6 = *(short *)(param_1 + 0x13e);
    uVar9 = (uint)*(byte *)(param_1 + 0x134) + iVar8 & 0xff;
    sVar7 = *(short *)(param_1 + 0x13c);
    if (sVar7 <= sVar6) {
LAB_003be030:
      uVar12 = (uint)*(byte *)(param_1 + 0x13b);
      goto LAB_003be068;
    }
  }
  else {
    sVar6 = *(short *)(param_1 + 0x13e);
    uVar9 = (uint)*(byte *)(param_1 + 0x135);
    sVar7 = *(short *)(param_1 + 0x13c);
    if (sVar7 <= sVar6) goto LAB_003be030;
  }
  iVar8 = 0;
  if (sVar7 != 0) {
    iVar8 = (int)(((uint)*(byte *)(param_1 + 0x13b) - (uint)*(byte *)(param_1 + 0x13a)) * (int)sVar6
                 ) / (int)sVar7;
  }
  uVar12 = (uint)*(byte *)(param_1 + 0x13a) + iVar8;
LAB_003be068:
  lVar10 = *(long *)(param_1 + 0x1d8);
  sVar6 = *(short *)(lVar10 + 0x116);
  if (*(short *)(lVar10 + 0x118) < sVar6) {
    iVar8 = 0;
    if (sVar6 != 0) {
      iVar8 = (int)(((uint)*(byte *)(lVar10 + 0x115) - (uint)*(byte *)(lVar10 + 0x114)) *
                   (int)*(short *)(lVar10 + 0x118)) / (int)sVar6;
    }
    uVar13 = (uint)*(byte *)(lVar10 + 0x114) + iVar8;
  }
  else {
    uVar13 = (uint)*(byte *)(lVar10 + 0x115);
  }
  sVar6 = *(short *)(param_1 + 0x14e);
  fVar16 = (float)((uVar12 & 0xff) * uVar9 * (uVar13 & 0xff)) / 2048383.0;
  if (*(short *)(param_1 + 0x150) < sVar6) {
    cVar11 = '\0';
    if (sVar6 != 0) {
      cVar11 = (char)((((int)*(char *)(param_1 + 0x14d) - (int)*(char *)(param_1 + 0x14c)) *
                      (int)*(short *)(param_1 + 0x150)) / (int)sVar6);
    }
    cVar11 = *(char *)(param_1 + 0x14c) + cVar11;
  }
  else {
    cVar11 = *(char *)(param_1 + 0x14d);
  }
  cVar14 = *(char *)(lVar10 + 0x50);
  fVar17 = *(float *)(param_1 + 0xc);
  puVar2 = (undefined4 *)(param_1 + 0x1b0);
  if (cVar14 != -1) {
    puVar2 = (undefined4 *)(lVar10 + 0x4c);
  }
  cVar1 = *(char *)(param_1 + 0x1a6);
  if (cVar14 != -1) {
    cVar1 = cVar14;
  }
  iVar8 = *(int *)(lVar10 + 0x5c);
  if (*(int *)(param_1 + 0x1b4) != -1) {
    iVar8 = *(int *)(param_1 + 0x1b4);
  }
  sVar6 = *(short *)(param_1 + 0x142);
  if (*(short *)(param_1 + 0x144) < sVar6) {
    cVar14 = '\0';
    if (sVar6 != 0) {
      cVar14 = (char)((((int)*(char *)(param_1 + 0x141) - (int)*(char *)(param_1 + 0x140)) *
                      (int)*(short *)(param_1 + 0x144)) / (int)sVar6);
    }
    cVar14 = *(char *)(param_1 + 0x140) + cVar14;
  }
  else {
    cVar14 = *(char *)(param_1 + 0x141);
  }
  fVar23 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x199));
  fVar36 = *(float *)(param_1 + 0x1ac);
  fVar27 = *(float *)(lVar10 + 0x40);
  fVar24 = *(float *)(lVar10 + 0x44);
  fVar18 = (float)(int)cVar14 / 63.0;
  fVar45 = *(float *)(lVar10 + 0x48);
  sVar6 = *(short *)(param_1 + 0x148);
  fVar25 = -1.0;
  if (-1.0 <= fVar18) {
    fVar25 = fVar18;
  }
  fVar19 = 1.0;
  if (fVar18 <= 1.0) {
    fVar19 = fVar25;
  }
  fVar51 = *(float *)(param_1 + 0x10);
  fVar25 = *(float *)(param_1 + 0x14);
  fVar18 = *(float *)(lVar10 + 0xf4);
  if (*(short *)(param_1 + 0x14a) < sVar6) {
    cVar14 = '\0';
    if (sVar6 != 0) {
      cVar14 = (char)((((int)*(char *)(param_1 + 0x147) - (int)*(char *)(param_1 + 0x146)) *
                      (int)*(short *)(param_1 + 0x14a)) / (int)sVar6);
    }
    cVar14 = *(char *)(param_1 + 0x146) + cVar14;
  }
  else {
    cVar14 = *(char *)(param_1 + 0x147);
  }
  fVar28 = *(float *)(lVar10 + 0x60);
  fVar34 = *(float *)(param_1 + 0x18);
  fVar37 = *(float *)(lVar10 + 0x68);
  fVar46 = *(float *)(lVar10 + 0x6c);
  fVar59 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x1a7));
  fVar29 = *(float *)(param_1 + 0x20);
  fVar35 = *(float *)(param_1 + 0x24);
  uVar21 = *puVar2;
  fVar54 = (float)(int)cVar14 / 63.0;
  fVar57 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x1a8));
  fVar62 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x1a9));
  fVar26 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x1aa));
  uVar4 = *(undefined4 *)(lVar10 + 100);
  fVar61 = *(float *)(lVar10 + 0x80);
  fVar63 = *(float *)(lVar10 + 0x84);
  fVar64 = *(float *)(lVar10 + 0x88);
  fVar65 = *(float *)(lVar10 + 0x8c);
  fVar66 = *(float *)(lVar10 + 0x90);
  fVar67 = *(float *)(lVar10 + 0x94);
  fVar68 = *(float *)(lVar10 + 0x98);
  fVar69 = *(float *)(lVar10 + 0x9c);
  fVar70 = *(float *)(lVar10 + 0xa0);
  fVar33 = *(float *)(lVar10 + 0xa4);
  fVar30 = *(float *)(param_1 + 0x28);
  fVar38 = *(float *)(param_1 + 0x2c);
  fVar20 = 0.0;
  if (0.0 <= fVar54) {
    fVar20 = fVar54;
  }
  fVar52 = *(float *)(lVar10 + 0x70);
  fVar55 = *(float *)(lVar10 + 0x74);
  fVar22 = 2.0;
  if (fVar54 <= 2.0) {
    fVar22 = fVar20;
  }
  fVar58 = *(float *)(lVar10 + 0x78);
  fVar60 = *(float *)(lVar10 + 0x7c);
  fVar31 = *(float *)(param_1 + 0x30);
  fVar39 = *(float *)(param_1 + 0x34);
  fVar32 = *(float *)(param_1 + 0x38);
  fVar40 = *(float *)(param_1 + 0x3c);
  fVar41 = *(float *)(param_1 + 0x40);
  fVar47 = *(float *)(param_1 + 0x44);
  fVar42 = *(float *)(param_1 + 0x48);
  fVar48 = *(float *)(param_1 + 0x4c);
  fVar53 = *(float *)(param_1 + 0x60);
  fVar56 = *(float *)(param_1 + 100);
  fVar43 = *(float *)(param_1 + 0x50);
  fVar49 = *(float *)(param_1 + 0x54);
  fVar54 = *(float *)(param_1 + 0x58);
  fVar50 = *(float *)(param_1 + 0x5c);
  fVar20 = *(float *)(lVar10 + 0xa8);
  fVar44 = *(float *)(lVar10 + 0xac);
  do {
    *(float *)(lVar15 + 200) = fVar27 * fVar17 * fVar16 * fVar16;
    *(float *)(lVar15 + 0x138) = (float)(int)cVar11 * 0.0078125 * fVar23;
    *(float *)(lVar15 + 0xcc) = fVar24 * fVar51;
    *(float *)(lVar15 + 0xd0) = fVar36 + fVar45;
    FUN_003bf968(uVar21,lVar15,(int)cVar1);
    *(int *)(lVar15 + 0xd8) = iVar8;
    uVar3 = *(undefined8 *)(param_1 + 0x154);
    *(undefined8 *)(lVar15 + 0x44) = *(undefined8 *)(param_1 + 0x15c);
    *(undefined8 *)(lVar15 + 0x3c) = uVar3;
    *(undefined1 *)(lVar15 + 0xbc) = *(undefined1 *)(param_1 + 0x194);
    uVar3 = *(undefined8 *)(param_1 + 0x164);
    *(undefined8 *)(lVar15 + 100) = *(undefined8 *)(param_1 + 0x16c);
    *(undefined8 *)(lVar15 + 0x5c) = uVar3;
    *(undefined1 *)(lVar15 + 0xbd) = *(undefined1 *)(param_1 + 0x195);
    uVar3 = *(undefined8 *)(param_1 + 0x174);
    *(undefined8 *)(lVar15 + 0x84) = *(undefined8 *)(param_1 + 0x17c);
    *(undefined8 *)(lVar15 + 0x7c) = uVar3;
    *(undefined1 *)(lVar15 + 0xbe) = *(undefined1 *)(param_1 + 0x196);
    uVar3 = *(undefined8 *)(param_1 + 0x184);
    *(undefined8 *)(lVar15 + 0xa4) = *(undefined8 *)(param_1 + 0x18c);
    *(undefined8 *)(lVar15 + 0x9c) = uVar3;
    uVar5 = *(undefined1 *)(param_1 + 0x197);
    *(float *)(lVar15 + 0xdc) = fVar34 * fVar28;
    *(undefined4 *)(lVar15 + 0xe0) = uVar4;
    *(float *)(lVar15 + 0x10c) = fVar42 * fVar66;
    *(float *)(lVar15 + 0x110) = fVar48 * fVar67;
    *(float *)(lVar15 + 0x114) = fVar18 * fVar25 * fVar19 + fVar68 + fVar43;
    *(float *)(lVar15 + 0x118) = fVar22 + fVar69 + fVar49;
    *(float *)(lVar15 + 0x11c) = fVar59 / 127.0 + -1.0 + fVar54 + fVar70;
    *(float *)(lVar15 + 0x120) = fVar57 / 127.0 + fVar50 + fVar33;
    *(float *)(lVar15 + 0x124) = fVar62 / 127.0 + fVar53 + fVar20;
    *(float *)(lVar15 + 0x128) = fVar26 / 127.0 + fVar56 + fVar44;
    *(undefined1 *)(lVar15 + 0xbf) = uVar5;
    *(float *)(lVar15 + 0xe4) = fVar29 * fVar37;
    *(float *)(lVar15 + 0xe8) = fVar35 * fVar46;
    *(float *)(lVar15 + 0xec) = fVar30 * fVar52;
    *(float *)(lVar15 + 0xf0) = fVar38 * fVar55;
    *(float *)(lVar15 + 0xf4) = fVar31 * fVar58;
    *(float *)(lVar15 + 0xf8) = fVar39 * fVar60;
    *(float *)(lVar15 + 0xfc) = fVar32 * fVar61;
    *(float *)(lVar15 + 0x100) = fVar40 * fVar63;
    *(float *)(lVar15 + 0x104) = fVar41 * fVar64;
    *(float *)(lVar15 + 0x108) = fVar47 * fVar65;
    if (*(long *)(*(long *)(param_1 + 0x1d8) + 0xb0) != 0) {
      FUN_003bf974(lVar15);
    }
    lVar15 = *(long *)(lVar15 + 0x198);
  } while (lVar15 != 0);
  return;
}

