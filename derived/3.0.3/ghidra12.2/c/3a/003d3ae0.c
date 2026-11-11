
void FUN_003d3ae0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  
  if (*(long *)(param_1 + 0x160) != 0) {
    fVar19 = *(float *)(param_1 + 0x148);
    bVar9 = *(byte *)(param_1 + 0x157);
    uVar18 = *(undefined4 *)(param_1 + 0x40);
    fVar16 = *(float *)(param_1 + 0x44);
    uVar14 = (uint)*(char *)(param_1 + 0x50);
    fVar20 = *(float *)(param_1 + 0x48);
    uVar1 = (uint)*(byte *)(param_1 + 0x158);
    if (uVar14 != 0xffffffff) {
      uVar1 = uVar14;
    }
    bVar10 = *(byte *)(param_1 + 0x151);
    fVar17 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x159));
    fVar17 = fVar17 / 127.0;
    if (uVar14 != 0xffffffff) {
      fVar17 = *(float *)(param_1 + 0x4c);
    }
    iVar15 = -0x40;
    if (bVar10 < 2) {
      iVar15 = -0x3f;
    }
    bVar11 = *(byte *)(param_1 + 0x152);
    fVar22 = *(float *)(param_1 + 0xf4);
    if (bVar11 < 0x40) {
      fVar23 = (float)(uint)bVar11 / 63.0;
    }
    else {
      fVar23 = (float)(bVar11 + 1) * 0.015625;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    fVar24 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x153));
    uVar13 = *(undefined8 *)(param_1 + 0x90);
    fVar26 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x155));
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    fVar31 = *(float *)(param_1 + 0xa0);
    fVar32 = *(float *)(param_1 + 0xa4);
    fVar28 = *(float *)(param_1 + 0x98);
    fVar30 = *(float *)(param_1 + 0x9c);
    fVar25 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x154));
    fVar27 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x156));
    fVar21 = *(float *)(param_1 + 0xa8);
    fVar29 = *(float *)(param_1 + 0xac);
    *(undefined4 *)(*(long *)(param_1 + 0x160) + 0x168) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(*(long *)(param_1 + 0x160) + 0x16c) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(*(long *)(param_1 + 0x160) + 200) = uVar18;
    *(float *)(*(long *)(param_1 + 0x160) + 0xcc) = fVar16 * fVar19;
    lVar12 = *(long *)(param_1 + 0x160);
    uVar8 = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(lVar12 + 0x3c) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(lVar12 + 0x44) = uVar8;
    *(float *)(*(long *)(param_1 + 0x160) + 0xd0) = fVar20 + (float)(int)(bVar9 - 0x40) * 0.015625;
    FUN_003bf968(fVar17,*(undefined8 *)(param_1 + 0x160),uVar1);
    *(undefined4 *)(*(long *)(param_1 + 0x160) + 0xd8) = *(undefined4 *)(param_1 + 0x5c);
    lVar12 = *(long *)(param_1 + 0x160);
    *(undefined8 *)(lVar12 + 0xdc) = uVar3;
    *(float *)(lVar12 + 0x114) = fVar22 * ((float)(int)(iVar15 + (uint)bVar10) / 63.0) + fVar28;
    *(float *)(lVar12 + 0x118) = fVar23 + fVar30;
    *(float *)(lVar12 + 0x11c) = fVar24 / 127.0 + -1.0 + fVar31;
    *(float *)(lVar12 + 0x120) = fVar25 / 127.0 + fVar32;
    *(float *)(lVar12 + 0x124) = fVar26 / 127.0 + fVar21;
    *(float *)(lVar12 + 0x128) = fVar27 / 127.0 + fVar29;
    *(undefined8 *)(lVar12 + 0xe4) = uVar6;
    *(undefined8 *)(lVar12 + 0xec) = uVar4;
    *(undefined8 *)(lVar12 + 0xf4) = uVar7;
    *(undefined8 *)(lVar12 + 0xfc) = uVar2;
    *(undefined8 *)(lVar12 + 0x104) = uVar5;
    *(undefined8 *)(lVar12 + 0x10c) = uVar13;
    if (*(long *)(param_1 + 0xb0) != 0) {
      FUN_003bf974(*(undefined8 *)(param_1 + 0x160));
    }
  }
  return;
}

