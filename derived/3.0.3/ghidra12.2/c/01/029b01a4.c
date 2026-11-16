
void FUN_029b01a4(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  if (DAT_055f41c0 == 0) {
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar19 = 0;
    uVar17 = 0;
    uVar15 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar18 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    uVar12 = *(ulong *)(DAT_055f41c0 + 0x48);
    uVar10 = uVar12 & 0xf;
    if (uVar10 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar10 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar11 = uVar12 >> 4 & 0xf;
    if (uVar11 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar11 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar13 = uVar12 >> 8 & 0xf;
    if (uVar13 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar13 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar14 = uVar12 >> 0xc & 0xf;
    if (uVar14 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar14 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar15 = uVar12 >> 0x10 & 0xf;
    if (uVar15 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar15 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar16 = uVar12 >> 0x14 & 0xf;
    if (uVar16 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar16 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar17 = uVar12 >> 0x18 & 0xf;
    if (uVar17 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar17 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar18 = uVar12 >> 0x1c & 0xf;
    if (uVar18 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar18 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar19 = uVar12 >> 0x20 & 0xf;
    if (uVar19 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar19 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar4 = uVar12 >> 0x24 & 0xf;
    if (uVar4 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar4 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar5 = uVar12 >> 0x28 & 0xf;
    if (uVar5 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar5 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar6 = uVar12 >> 0x2c & 0xf;
    if (uVar6 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar6 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar7 = uVar12 >> 0x30 & 0xf;
    if (uVar7 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar7 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar8 = uVar12 >> 0x34 & 0xf;
    if (uVar8 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar8 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar9 = uVar12 >> 0x38 & 0xf;
    if (uVar9 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar9 = CONCAT44(uVar1,uVar2) % 0xd;
    }
    uVar12 = uVar12 >> 0x3c;
    if (uVar12 == 0xd) {
      uVar1 = *(uint *)(param_1 + 0x30) ^ *(uint *)(param_1 + 0x30) << 0xb;
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar2 = *(uint *)(param_1 + 0x34) ^ *(uint *)(param_1 + 0x34) << 0xb;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x34) = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      uVar12 = CONCAT44(uVar1,uVar2) % 0xd;
    }
  }
  *(ulong *)(param_1 + 0x78) =
       uVar7 << 0x30 | uVar9 << 0x38 | uVar5 << 0x28 | uVar19 << 0x20 | uVar17 << 0x18 |
       uVar15 << 0x10 | uVar10 | uVar13 << 8 | uVar11 << 4 | uVar14 << 0xc | uVar16 << 0x14 |
       uVar18 << 0x1c | uVar4 << 0x24 | uVar6 << 0x2c | uVar8 << 0x34 | uVar12 << 0x3c;
  return;
}

