
long FUN_0299a2c8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  
  if (*(char *)(param_1 + 0x26a4) != '\0') {
    *(undefined1 *)(param_1 + 0x26a4) = 0;
  }
  uVar8 = *(undefined1 *)(param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar20 = *(undefined4 *)(param_2 + 0x2c);
  fVar21 = *(float *)(param_2 + 0x30);
  uVar18 = *(undefined4 *)(param_2 + 0x24);
  uVar19 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(uint *)(param_2 + 8);
  fVar11 = 0.0;
  if (fVar21 <= 500.0) {
    fVar11 = fVar21;
  }
  fVar10 = sinf(fVar11);
  fVar11 = cosf(fVar11);
  fVar16 = fVar10 * 0.0;
  fVar14 = fVar11 * 0.0;
  uVar9 = (ulong)uVar6 << 0x20 | 0xffffffff;
  fVar17 = fVar16 * 0.0 + 1.0;
  uVar13 = CONCAT44(*(undefined4 *)(param_2 + 0x2c),fVar11);
  uVar15 = CONCAT44(*(undefined4 *)(param_2 + 0x28),fVar16);
  uVar12 = CONCAT44(*(undefined4 *)(param_2 + 0x24),fVar10 + 0.0);
  *(undefined8 *)(param_1 + 0x252c) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x25b4) = 0xff000000;
  *(undefined1 *)(param_1 + 0x2534) = uVar8;
  *(undefined4 *)(param_1 + 0x2538) = uVar3;
  *(ulong *)(param_1 + 0x253c) = uVar9;
  *(undefined4 *)(param_1 + 0x2544) = uVar4;
  *(undefined4 *)(param_1 + 0x2548) = uVar7;
  *(undefined4 *)(param_1 + 0x254c) = 0x42f00000;
  *(undefined4 *)(param_1 + 0x2550) = uVar2;
  *(undefined4 *)(param_1 + 0x2554) = uVar5;
  *(undefined4 *)(param_1 + 0x2558) = uVar1;
  *(undefined8 *)(param_1 + 0x255c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2564) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2568) = uVar2;
  *(undefined4 *)(param_1 + 0x256c) = uVar5;
  *(undefined4 *)(param_1 + 0x2570) = uVar1;
  *(undefined4 *)(param_1 + 0x2574) = uVar18;
  *(undefined4 *)(param_1 + 0x2578) = uVar19;
  *(undefined4 *)(param_1 + 0x257c) = uVar20;
  *(float *)(param_1 + 0x2580) = fVar21;
  *(undefined8 *)(param_1 + 0x25ac) = uVar13;
  *(ulong *)(param_1 + 0x25a4) = CONCAT44(fVar14,-fVar10);
  *(undefined8 *)(param_1 + 0x25b8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x25c0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x25c8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x25d0) = 0;
  *(undefined8 *)(param_1 + 0x25d8) = 0;
  *(undefined8 *)(param_1 + 0x25e0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x25f0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x25f8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2600) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2608) = 0;
  *(undefined8 *)(param_1 + 0x2610) = 0;
  *(undefined8 *)(param_1 + 0x2618) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2620) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2624) = uVar8;
  *(undefined4 *)(param_1 + 0x2628) = uVar3;
  *(ulong *)(param_1 + 0x262c) = uVar9;
  *(undefined4 *)(param_1 + 0x2634) = uVar4;
  *(undefined4 *)(param_1 + 0x2638) = uVar7;
  *(undefined4 *)(param_1 + 0x263c) = 0x42f00000;
  *(undefined4 *)(param_1 + 0x2640) = uVar2;
  *(undefined4 *)(param_1 + 0x2644) = uVar5;
  *(undefined4 *)(param_1 + 0x2648) = uVar1;
  *(undefined8 *)(param_1 + 0x264c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2654) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2658) = uVar2;
  *(undefined4 *)(param_1 + 0x265c) = uVar5;
  *(undefined4 *)(param_1 + 0x2660) = uVar1;
  *(undefined4 *)(param_1 + 0x2664) = uVar18;
  *(undefined4 *)(param_1 + 0x2668) = uVar19;
  *(undefined4 *)(param_1 + 0x266c) = uVar20;
  *(float *)(param_1 + 0x2670) = fVar21;
  *(undefined2 *)(param_1 + 0x2535) = 0xff00;
  *(undefined2 *)(param_1 + 0x2625) = 0xff00;
  *(undefined8 *)(param_1 + 0x25e8) = 0xff000000ffffffff;
  *(undefined8 *)(param_1 + 0x259c) = uVar15;
  *(ulong *)(param_1 + 0x2594) = CONCAT44(fVar17,fVar14);
  *(undefined8 *)(param_1 + 0x267c) = uVar12;
  *(ulong *)(param_1 + 0x2674) = CONCAT44(fVar16,fVar11);
  *(undefined8 *)(param_1 + 0x258c) = uVar12;
  *(ulong *)(param_1 + 0x2584) = CONCAT44(fVar16,fVar11);
  *(undefined8 *)(param_1 + 0x268c) = uVar15;
  *(ulong *)(param_1 + 0x2684) = CONCAT44(fVar17,fVar14);
  *(undefined8 *)(param_1 + 0x269c) = uVar13;
  *(ulong *)(param_1 + 0x2694) = CONCAT44(fVar14,-fVar10);
  if (*(char *)(param_1 + 0x26a4) == '\0') {
    *(undefined1 *)(param_1 + 0x26a4) = 1;
  }
  return param_1 + 0x25b4;
}

