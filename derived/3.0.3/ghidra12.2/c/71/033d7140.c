
void FUN_033d7140(long param_1)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  byte bVar7;
  undefined4 uVar8;
  byte bVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  uVar11 = 0;
  uVar12 = 0;
  uVar17 = 0;
  uVar13 = 0;
  uVar18 = 0;
  uVar14 = 0;
  uVar21 = 0;
  uVar16 = 0;
  uVar8 = 0;
  uVar19 = 0;
  uVar15 = 0;
  bVar7 = 0;
  bVar9 = 0;
  uVar20 = 0;
  uVar22 = 0;
  bVar4 = 0;
  uVar10 = 0;
  lVar2 = param_1 + 8;
  do {
    bVar3 = *(byte *)(lVar2 + uVar10 * 0x44);
    if (bVar3 != 0) {
      if ((bVar3 & 1) != 0) {
        if ((*(byte *)(lVar2 + uVar10 * 0x44 + 4) & 1) == 0) {
          bVar4 = 1;
        }
        else {
          lVar6 = lVar2 + uVar10 * 0x44;
          bVar9 = 1;
          uVar22 = *(undefined4 *)(lVar6 + 8);
          uVar11 = *(undefined4 *)(lVar6 + 0xc);
        }
      }
      if (((bVar3 >> 1 & 1) != 0) && ((*(byte *)(lVar2 + uVar10 * 0x44 + 4) >> 1 & 1) != 0)) {
        lVar6 = lVar2 + uVar10 * 0x44;
        bVar7 = bVar7 | 2;
        uVar12 = *(undefined4 *)(lVar6 + 0x18);
        uVar17 = *(undefined4 *)(lVar6 + 0x1c);
      }
      if (((bVar3 >> 2 & 1) != 0) && ((*(byte *)(lVar2 + uVar10 * 0x44 + 4) >> 2 & 1) != 0)) {
        lVar6 = lVar2 + uVar10 * 0x44;
        bVar7 = bVar7 | 4;
        uVar13 = *(undefined4 *)(lVar6 + 0x20);
        uVar18 = *(undefined4 *)(lVar6 + 0x24);
      }
      if (((bVar3 >> 3 & 1) != 0) && ((*(byte *)(lVar2 + uVar10 * 0x44 + 4) >> 3 & 1) != 0)) {
        lVar6 = lVar2 + uVar10 * 0x44;
        bVar7 = bVar7 | 8;
        uVar14 = *(undefined4 *)(lVar6 + 0x28);
        uVar21 = *(undefined4 *)(lVar6 + 0x2c);
      }
      if (((bVar3 >> 4 & 1) != 0) && ((*(byte *)(lVar2 + uVar10 * 0x44 + 4) >> 4 & 1) != 0)) {
        lVar6 = lVar2 + uVar10 * 0x44;
        bVar7 = bVar7 | 0x10;
        uVar16 = *(undefined4 *)(lVar6 + 0x30);
        uVar19 = *(undefined4 *)(lVar6 + 0x34);
      }
      if (((bVar3 >> 5 & 1) != 0) && ((*(byte *)(lVar2 + uVar10 * 0x44 + 4) >> 5 & 1) != 0)) {
        lVar6 = lVar2 + uVar10 * 0x44;
        bVar7 = bVar7 | 0x20;
        uVar15 = *(undefined4 *)(lVar6 + 0x38);
        uVar20 = *(undefined4 *)(lVar6 + 0x3c);
      }
      if (((bVar3 >> 6 & 1) != 0) && ((*(byte *)(lVar2 + uVar10 * 0x44 + 4) >> 6 & 1) != 0)) {
        bVar7 = bVar7 | 0x40;
        uVar8 = *(undefined4 *)(lVar2 + uVar10 * 0x44 + 0x40);
      }
    }
    uVar1 = (int)uVar10 + 1;
    uVar10 = (ulong)uVar1;
  } while (uVar1 != 3);
  if (((*(byte *)(param_1 + 0xd4) & 1) != 0) && (!(bool)(bVar9 | bVar4))) {
    bVar9 = 1;
    uVar22 = *(undefined4 *)(param_1 + 0xd8);
    uVar11 = *(undefined4 *)(param_1 + 0xdc);
  }
  *(undefined4 *)(param_1 + 0x10) = uVar22;
  *(undefined4 *)(param_1 + 0x14) = uVar11;
  *(undefined4 *)(param_1 + 0x20) = uVar12;
  bVar4 = bVar9 | bVar7 & 2 | bVar7 & 4 | bVar7 & 8 | bVar7 & 0x10;
  *(undefined4 *)(param_1 + 0x24) = uVar17;
  bVar7 = bVar7 & 0x60;
  *(undefined4 *)(param_1 + 0x28) = uVar13;
  *(byte *)(param_1 + 0xc) = bVar4 | *(byte *)(param_1 + 0xc) & 0x80 | bVar7;
  bVar5 = (*(byte *)(param_1 + 0xd4) & 1) != 0;
  uVar24 = 0;
  if (bVar5) {
    uVar24 = *(undefined4 *)(param_1 + 0xdc);
  }
  uVar23 = 0;
  if (bVar5) {
    uVar23 = *(undefined4 *)(param_1 + 0xd8);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar23;
  *(undefined4 *)(param_1 + 0x1c) = uVar24;
  *(undefined4 *)(param_1 + 0x2c) = uVar18;
  *(undefined4 *)(param_1 + 0x30) = uVar14;
  *(undefined4 *)(param_1 + 0x34) = uVar21;
  *(undefined4 *)(param_1 + 0x38) = uVar16;
  *(undefined4 *)(param_1 + 0x3c) = uVar19;
  *(undefined4 *)(param_1 + 0x40) = uVar15;
  *(undefined4 *)(param_1 + 0x44) = uVar20;
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x54) = uVar22;
  *(byte *)(param_1 + 0x50) = bVar4 | *(byte *)(param_1 + 0x50) & 0x80 | bVar7;
  *(undefined4 *)(param_1 + 0x58) = uVar11;
  *(undefined4 *)(param_1 + 0x5c) = uVar23;
  *(undefined4 *)(param_1 + 0x60) = uVar24;
  *(undefined4 *)(param_1 + 100) = uVar12;
  *(undefined4 *)(param_1 + 0x68) = uVar17;
  *(undefined4 *)(param_1 + 0x6c) = uVar13;
  *(undefined4 *)(param_1 + 0x70) = uVar18;
  *(undefined4 *)(param_1 + 0x74) = uVar14;
  *(undefined4 *)(param_1 + 0x78) = uVar21;
  *(undefined4 *)(param_1 + 0x7c) = uVar16;
  *(undefined4 *)(param_1 + 0x80) = uVar19;
  *(undefined4 *)(param_1 + 0x84) = uVar15;
  *(undefined4 *)(param_1 + 0x88) = uVar20;
  *(undefined4 *)(param_1 + 0x8c) = uVar8;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar22;
  *(undefined4 *)(param_1 + 0x9c) = uVar11;
  *(undefined4 *)(param_1 + 0xa0) = uVar23;
  *(undefined4 *)(param_1 + 0xa4) = uVar24;
  *(undefined4 *)(param_1 + 0xa8) = uVar12;
  *(undefined4 *)(param_1 + 0xac) = uVar17;
  *(undefined4 *)(param_1 + 0xb0) = uVar13;
  *(undefined4 *)(param_1 + 0xb4) = uVar18;
  *(undefined4 *)(param_1 + 0xb8) = uVar14;
  *(undefined4 *)(param_1 + 0xbc) = uVar21;
  *(undefined4 *)(param_1 + 0xc0) = uVar16;
  *(undefined4 *)(param_1 + 0xc4) = uVar19;
  *(undefined4 *)(param_1 + 200) = uVar15;
  *(undefined4 *)(param_1 + 0xcc) = uVar20;
  *(byte *)(param_1 + 0x94) = bVar4 | *(byte *)(param_1 + 0x94) & 0x80 | bVar7;
  *(undefined4 *)(param_1 + 0xd0) = uVar8;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xd8) = uVar22;
  *(undefined4 *)(param_1 + 0xdc) = uVar11;
  *(undefined4 *)(param_1 + 0xe0) = uVar23;
  *(undefined4 *)(param_1 + 0xe4) = uVar24;
  *(undefined4 *)(param_1 + 0xe8) = uVar12;
  *(undefined4 *)(param_1 + 0xec) = uVar17;
  *(undefined4 *)(param_1 + 0xf0) = uVar13;
  *(undefined4 *)(param_1 + 0xf4) = uVar18;
  *(undefined4 *)(param_1 + 0xf8) = uVar14;
  *(undefined4 *)(param_1 + 0xfc) = uVar21;
  *(undefined4 *)(param_1 + 0x100) = uVar16;
  *(undefined4 *)(param_1 + 0x104) = uVar19;
  *(undefined4 *)(param_1 + 0x108) = uVar15;
  *(undefined4 *)(param_1 + 0x10c) = uVar20;
  *(byte *)(param_1 + 0xd4) = bVar9;
  *(undefined4 *)(param_1 + 0x110) = uVar8;
  return;
}

