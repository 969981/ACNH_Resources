
void FUN_01d3e314(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 uVar19;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar4 = *(uint *)(param_1 + 0xc0);
  uVar5 = *(uint *)(param_1 + 0x58);
  uVar6 = *(uint *)(param_1 + 0x140);
  uVar7 = *(uint *)(param_1 + 0xd8);
  uVar8 = *(uint *)(param_1 + 0x1c0);
  uVar9 = *(uint *)(param_1 + 0x158);
  uVar10 = *(uint *)(param_1 + 0x1d8);
  uVar11 = *(uint *)(param_1 + 600);
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uVar13 = *(uint *)(param_1 + 0x358);
  uVar14 = *(uint *)(param_1 + 0x3d8);
  uVar15 = *(uint *)(param_1 + 0x240);
  uVar16 = *(uint *)(param_1 + 0x2c0);
  uVar17 = *(uint *)(param_1 + 0x340);
  uVar18 = *(uint *)(param_1 + 0x3c0);
  uVar1 = (uVar3 >> 3 & 1) + ((uVar4 & 8) >> 3) + ((uVar6 & 8) >> 3) + ((uVar8 & 8) >> 3) +
          ((uVar15 & 8) >> 3) + ((uVar16 & 8) >> 3) + ((uVar17 & 8) >> 3) + ((uVar18 & 8) >> 3);
  uVar2 = (uVar14 & (int)(uVar18 << 0x1e) >> 0x1f) +
          (uVar13 & (int)(uVar17 << 0x1e) >> 0x1f) +
          (uVar12 & (int)(uVar16 << 0x1e) >> 0x1f) + (uVar11 & (int)(uVar15 << 0x1e) >> 0x1f) +
          (uVar10 & (int)(uVar8 << 0x1e) >> 0x1f) + (uVar9 & (int)(uVar6 << 0x1e) >> 0x1f) +
          (uVar7 & (int)(uVar4 << 0x1e) >> 0x1f) + (uVar5 & (int)(uVar3 << 0x1e) >> 0x1f);
  *(byte *)(param_1 + 0x46c) =
       ((byte)(uVar3 >> 1) & 1) + (char)((uVar4 & 2) >> 1) + (char)((uVar6 & 2) >> 1) +
       (char)((uVar8 & 2) >> 1) + (char)((uVar15 & 2) >> 1) + (char)((uVar16 & 2) >> 1) +
       (char)((uVar17 & 2) >> 1) + (char)((uVar18 & 2) >> 1);
  uVar19 = (undefined1)uVar2;
  if ((uVar2 & 0xf8) != 0) {
    uVar19 = 8;
  }
  *(undefined1 *)(param_1 + 0x46d) = uVar19;
  if ((*(byte *)(param_1 + 0x46e) != uVar1) &&
     (*(char *)(param_1 + 0x46e) = (char)uVar1,
     *(int *)(*(long *)(DAT_0537d558 + 0x10) + 0xaa0) != 3)) {
    FUN_020e6f80(DAT_053e4ff0);
  }
  uVar1 = 0;
  if ((uVar18 & 8) != 0) {
    uVar1 = uVar14;
  }
  uVar2 = 0;
  if ((uVar17 & 8) != 0) {
    uVar2 = uVar13;
  }
  uVar13 = 0;
  if ((uVar16 & 8) != 0) {
    uVar13 = uVar12;
  }
  uVar12 = 0;
  if ((uVar15 & 8) != 0) {
    uVar12 = uVar11;
  }
  uVar11 = 0;
  if ((uVar8 & 8) != 0) {
    uVar11 = uVar10;
  }
  uVar8 = 0;
  if ((uVar6 & 8) != 0) {
    uVar8 = uVar9;
  }
  uVar6 = 0;
  if ((uVar4 & 8) != 0) {
    uVar6 = uVar7;
  }
  uVar4 = 0;
  if ((uVar3 & 8) != 0) {
    uVar4 = uVar5;
  }
  uVar1 = uVar1 + uVar2 + uVar13 + uVar12 + uVar11 + uVar8 + uVar6 + uVar4;
  uVar19 = (undefined1)uVar1;
  if ((uVar1 & 0xf8) != 0) {
    uVar19 = 8;
  }
  *(undefined1 *)(param_1 + 0x46f) = uVar19;
  return;
}

