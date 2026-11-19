
ulong FUN_03c36c10(ulong *param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  
  uVar6 = (ulong)(uint)param_1[9];
  puVar11 = param_1 + 5;
  puVar2 = (ulong *)((long)puVar11 + uVar6);
  if (*param_1 < 0x20) {
    lVar10 = param_1[3] + 0x27d4eb2f165667c5;
  }
  else {
    uVar7 = param_1[1];
    uVar4 = param_1[2];
    uVar3 = param_1[3];
    uVar5 = param_1[4];
    lVar10 = (((((uVar4 >> 0x39 | uVar4 << 7) + (uVar7 >> 0x3f | uVar7 << 1) +
                 (uVar3 >> 0x34 | uVar3 << 0xc) + (uVar5 >> 0x2e | uVar5 << 0x12) ^
                (uVar7 * -0x3d4d51c2d82b14b1 >> 0x21 | uVar7 * -0x6c158a5880000000) *
                -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
               (uVar4 * -0x3d4d51c2d82b14b1 >> 0x21 | uVar4 * -0x6c158a5880000000) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar3 * -0x3d4d51c2d82b14b1 >> 0x21 | uVar3 * -0x6c158a5880000000) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
             (uVar5 * -0x3d4d51c2d82b14b1 >> 0x21 | uVar5 * -0x6c158a5880000000) *
             -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
  }
  uVar7 = lVar10 + *param_1;
  puVar8 = puVar11;
  if (param_1 + 6 <= puVar2) {
    do {
      puVar11 = puVar8 + 1;
      puVar9 = puVar8 + 2;
      uVar7 = (*puVar8 * -0x3d4d51c2d82b14b1 >> 0x21 | *puVar8 * -0x6c158a5880000000) *
              -0x61c8864e7a143579 ^ uVar7;
      uVar7 = (uVar7 >> 0x25 | uVar7 << 0x1b) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar8 = puVar11;
    } while (puVar9 <= puVar2);
  }
  if ((ulong *)((long)puVar11 + 4U) <= puVar2) {
    uVar7 = (ulong)(uint)*puVar11 * -0x61c8864e7a143579 ^ uVar7;
    uVar7 = (uVar7 >> 0x29 | uVar7 << 0x17) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    puVar11 = (ulong *)((long)puVar11 + 4U);
  }
  if (puVar11 < puVar2) {
    puVar2 = (ulong *)((long)param_1 + uVar6 + 0x28);
    puVar8 = puVar11;
    if (((long)puVar2 - (long)puVar11 & 1U) != 0) {
      puVar8 = (ulong *)((long)puVar11 + 1);
      uVar7 = (ulong)(byte)*puVar11 * 0x27d4eb2f165667c5 ^ uVar7;
      uVar7 = (uVar7 >> 0x35 | uVar7 << 0xb) * -0x61c8864e7a143579;
    }
    if ((ulong *)((long)param_1 + uVar6 + 0x27) != puVar11) {
      do {
        uVar7 = (ulong)(byte)*puVar8 * 0x27d4eb2f165667c5 ^ uVar7;
        pbVar1 = (byte *)((long)puVar8 + 1);
        puVar8 = (ulong *)((long)puVar8 + 2);
        uVar6 = (ulong)*pbVar1 * 0x27d4eb2f165667c5 ^
                (uVar7 >> 0x35 | uVar7 << 0xb) * -0x61c8864e7a143579;
        uVar7 = (uVar6 >> 0x35 | uVar6 << 0xb) * -0x61c8864e7a143579;
      } while (puVar8 != puVar2);
    }
  }
  uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0x3d4d51c2d82b14b1;
  uVar6 = (uVar6 ^ uVar6 >> 0x1d) * 0x165667b19e3779f9;
  return uVar6 ^ uVar6 >> 0x20;
}

