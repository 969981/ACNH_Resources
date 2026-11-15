
void FUN_020a8170(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  char *pcVar4;
  long *plVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined *local_f0;
  char *pcStack_e8;
  undefined *local_e0;
  char *pcStack_d8;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined *local_c0;
  char *pcStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  char *pcStack_98;
  undefined4 local_90;
  
  plVar27 = param_1 + 0x3091;
  plVar26 = param_1 + 0x2fdc;
  plVar25 = param_1 + 0x2f46;
  plVar24 = param_1 + 0x2f22;
  plVar23 = param_1 + 0x2efe;
  plVar22 = param_1 + 0x2eda;
  *param_1 = &PTR_FUN_04a71f10;
  param_1[1] = &PTR_LAB_04a71f30;
  param_1[2] = 0x800000008;
  param_1[3] = 0x1200000012;
  param_1[4] = 0x1c0000001c;
  param_1[5] = 0x2600000026;
  param_1[6] = 0x3000000030;
  param_1[7] = 0x3a0000003a;
  param_1[8] = 0x4400000044;
  param_1[9] = 0x4e0000004e;
  param_1[10] = 0x5800000058;
  param_1[0xb] = 0x6200000062;
  param_1[0xc] = 0x6c0000006c;
  param_1[0xd] = 0x7600000076;
  param_1[0xe] = 0x8000000080;
  param_1[0xf] = 0x8a0000008a;
  param_1[0x10] = 0x9400000094;
  param_1[0x11] = 0x9e0000009e;
  param_1[0x12] = 0xa8000000a8;
  param_1[0x13] = 0xb2000000b2;
  param_1[0x14] = 0xbc000000bc;
  puVar14 = (undefined1 *)((long)param_1 + 0x4f43);
  plVar5 = param_1 + 0x3000;
  memset(param_1 + 0x15,0,0x410);
  puVar3 = PTR_DAT_04bb2028;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  lVar17 = 0;
  do {
    lVar18 = lVar17 + 0x68;
    puVar20 = (undefined1 *)((long)param_1 + lVar17 + 0xc4);
    *puVar20 = 0;
    *(undefined8 *)((long)param_1 + lVar17 + 0xa8) = 0x2ffffffff;
    *(undefined1 **)((long)param_1 + lVar17 + 0xb8) = puVar20;
    *(undefined4 *)((long)param_1 + lVar17 + 0xc0) = 0x20;
    *(undefined1 *)((long)param_1 + lVar17 + 0xe3) = 0;
    *(undefined **)((long)param_1 + lVar17 + 0xb0) = puVar1;
    *(undefined2 *)((long)param_1 + lVar17 + 0xe8) = 0;
    *(undefined1 *)((long)param_1 + lVar17 + 0xea) = 0;
    *(undefined4 *)((long)param_1 + lVar17 + 0xec) = 0;
    *(undefined1 *)((long)param_1 + lVar17 + 0xf0) = 0;
    *(undefined4 *)((long)param_1 + lVar17 + 0xf4) = 9;
    *(undefined2 *)((long)param_1 + lVar17 + 0xf8) = 0;
    *(undefined1 *)((long)param_1 + lVar17 + 0xfa) = 0;
    *(undefined8 *)((long)param_1 + lVar17 + 0xfc) = 1;
    *(undefined8 *)((long)param_1 + lVar17 + 0x104) = 1;
    lVar17 = lVar18;
  } while (lVar18 != 0x410);
  *(undefined1 *)((long)param_1 + 0x4eb) = 0;
  *(undefined1 *)((long)param_1 + 0x523) = 0;
  *(undefined1 *)((long)param_1 + 0x5e4) = 0;
  param_1[0xbb] = (undefined1 *)((long)param_1 + 0x5e4);
  *(undefined1 *)((long)param_1 + 0x504) = 0;
  param_1[0x9f] = (undefined1 *)((long)param_1 + 0x504);
  *(undefined1 *)((long)param_1 + 0x574) = 0;
  param_1[0xf3] = (long)param_1 + 0x7a4;
  param_1[0xad] = (undefined1 *)((long)param_1 + 0x574);
  *(undefined1 *)((long)param_1 + 0x814) = 0;
  param_1[0x101] = (long)param_1 + 0x814;
  *(undefined1 *)((long)param_1 + 0x84c) = 0;
  param_1[0x108] = (long)param_1 + 0x84c;
  *(undefined1 *)((long)param_1 + 0x884) = 0;
  param_1[0x10f] = (long)param_1 + 0x884;
  *(undefined1 *)((long)param_1 + 0x8bc) = 0;
  param_1[0x116] = (long)param_1 + 0x8bc;
  *(undefined1 *)((long)param_1 + 0x8f4) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 1;
  *(undefined4 *)((long)param_1 + 0x1bc) = 2;
  *(undefined4 *)((long)param_1 + 0x224) = 3;
  *(undefined4 *)((long)param_1 + 0x28c) = 4;
  *(undefined4 *)((long)param_1 + 0x2f4) = 5;
  *(undefined4 *)((long)param_1 + 0x35c) = 6;
  *(undefined1 *)((long)param_1 + 0x4cc) = 0;
  param_1[0x98] = (undefined1 *)((long)param_1 + 0x4cc);
  *(undefined4 *)((long)param_1 + 0x3c4) = 7;
  *(undefined4 *)((long)param_1 + 0x42c) = 8;
  *(undefined1 *)((long)param_1 + 0x5ac) = 0;
  *(undefined1 *)((long)param_1 + 0x6c4) = 0;
  param_1[0xb4] = (undefined1 *)((long)param_1 + 0x5ac);
  param_1[0xd7] = (undefined1 *)((long)param_1 + 0x6c4);
  param_1[0xe5] = (long)param_1 + 0x734;
  *(undefined1 *)((long)param_1 + 0x654) = 0;
  *(undefined1 *)((long)param_1 + 0x53c) = 0;
  *(undefined1 *)((long)param_1 + 0x61c) = 0;
  *(undefined1 *)((long)param_1 + 0x68c) = 0;
  param_1[0xc9] = (undefined1 *)((long)param_1 + 0x654);
  param_1[0xec] = (long)param_1 + 0x76c;
  puVar1 = puVar3 + 0x10;
  *(undefined1 *)((long)param_1 + 0x734) = 0;
  *(undefined1 *)((long)param_1 + 0x76c) = 0;
  *(undefined1 *)((long)param_1 + 0x7a4) = 0;
  param_1[0xa6] = (undefined1 *)((long)param_1 + 0x53c);
  *(undefined1 *)((long)param_1 + 0x7dc) = 0;
  param_1[0xc2] = (undefined1 *)((long)param_1 + 0x61c);
  param_1[0xd0] = (undefined1 *)((long)param_1 + 0x68c);
  *(undefined1 *)((long)param_1 + 0x6fc) = 0;
  *(undefined1 *)((long)param_1 + 0x55b) = 0;
  *(undefined1 *)((long)param_1 + 0x593) = 0;
  *(undefined1 *)((long)param_1 + 0x5cb) = 0;
  *(undefined1 *)((long)param_1 + 0x603) = 0;
  *(undefined1 *)((long)param_1 + 0x63b) = 0;
  *(undefined1 *)((long)param_1 + 0x673) = 0;
  *(undefined1 *)((long)param_1 + 0x6ab) = 0;
  *(undefined1 *)((long)param_1 + 0x6e3) = 0;
  *(undefined1 *)((long)param_1 + 0x71b) = 0;
  *(undefined1 *)((long)param_1 + 0x753) = 0;
  *(undefined1 *)((long)param_1 + 0x78b) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0x20;
  param_1[0x97] = puVar1;
  *(undefined4 *)(param_1 + 0xa0) = 0x20;
  param_1[0x9e] = puVar1;
  *(undefined4 *)(param_1 + 0xa7) = 0x20;
  param_1[0xa5] = puVar1;
  *(undefined4 *)(param_1 + 0xae) = 0x20;
  param_1[0xac] = puVar1;
  *(undefined4 *)(param_1 + 0xb5) = 0x20;
  param_1[0xb3] = puVar1;
  *(undefined4 *)(param_1 + 0xbc) = 0x20;
  param_1[0xba] = puVar1;
  *(undefined4 *)(param_1 + 0xc3) = 0x20;
  param_1[0xc1] = puVar1;
  *(undefined4 *)(param_1 + 0xca) = 0x20;
  param_1[200] = puVar1;
  *(undefined4 *)(param_1 + 0xd1) = 0x20;
  param_1[0xcf] = puVar1;
  *(undefined4 *)(param_1 + 0xd8) = 0x20;
  param_1[0xd6] = puVar1;
  *(undefined4 *)(param_1 + 0xdf) = 0x20;
  param_1[0xdd] = puVar1;
  *(undefined4 *)(param_1 + 0xe6) = 0x20;
  param_1[0xe4] = puVar1;
  *(undefined4 *)(param_1 + 0xed) = 0x20;
  param_1[0xeb] = puVar1;
  param_1[0xde] = (undefined1 *)((long)param_1 + 0x6fc);
  *(undefined4 *)(param_1 + 0xf4) = 0x20;
  *(undefined1 *)((long)param_1 + 0x7c3) = 0;
  param_1[0xf2] = puVar1;
  param_1[0xfa] = (long)param_1 + 0x7dc;
  *(undefined4 *)(param_1 + 0xfb) = 0x20;
  *(undefined1 *)((long)param_1 + 0x7fb) = 0;
  param_1[0xf9] = puVar1;
  *(undefined4 *)(param_1 + 0x102) = 0x20;
  *(undefined1 *)((long)param_1 + 0x833) = 0;
  param_1[0x100] = puVar1;
  *(undefined4 *)(param_1 + 0x109) = 0x20;
  *(undefined1 *)((long)param_1 + 0x86b) = 0;
  param_1[0x107] = puVar1;
  *(undefined4 *)(param_1 + 0x110) = 0x20;
  *(undefined1 *)((long)param_1 + 0x8a3) = 0;
  param_1[0x10e] = puVar1;
  *(undefined4 *)(param_1 + 0x117) = 0x20;
  *(undefined1 *)((long)param_1 + 0x8db) = 0;
  param_1[0x115] = puVar1;
  param_1[0x11d] = (long)param_1 + 0x8f4;
  *(undefined4 *)(param_1 + 0x11e) = 0x20;
  *(undefined1 *)((long)param_1 + 0x913) = 0;
  param_1[0x11c] = puVar1;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  *(undefined4 *)((long)param_1 + 0x494) = 9;
  *(undefined1 *)param_1[0x98] = 0;
  *(undefined1 *)param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined1 *)param_1[0x9f] = 0;
  *(undefined1 *)param_1[0xe5] = 0;
  *(undefined4 *)((long)param_1 + 0x924) = 0;
  *(undefined1 *)param_1[0xa6] = 0;
  *(undefined1 *)param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  *(undefined1 *)param_1[0xad] = 0;
  *(undefined1 *)param_1[0xf3] = 0;
  *(undefined4 *)((long)param_1 + 0x92c) = 0;
  *(undefined1 *)param_1[0xb4] = 0;
  *(undefined1 *)param_1[0xfa] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  *(undefined1 *)param_1[0xbb] = 0;
  *(undefined1 *)param_1[0x101] = 0;
  *(undefined4 *)((long)param_1 + 0x934) = 0;
  *(undefined1 *)param_1[0xc2] = 0;
  *(undefined1 *)param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x127) = 0;
  *(undefined1 *)param_1[0xc9] = 0;
  *(undefined1 *)param_1[0x10f] = 0;
  *(undefined4 *)((long)param_1 + 0x93c) = 0;
  *(undefined1 *)param_1[0xd0] = 0;
  *(undefined1 *)param_1[0x116] = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)param_1[0xd7] = 0;
  *(undefined1 *)param_1[0x11d] = 0;
  param_1[0x12e] = 0x2ffffffff;
  param_1[0x137] = 0x2ffffffff;
  *(undefined8 *)((long)param_1 + 0x944) = 0;
  *(undefined8 *)((long)param_1 + 0x94c) = 0;
  param_1[0x123] = 0;
  *(undefined4 *)((long)param_1 + 0x954) = 0;
  param_1[299] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x131) = 0x20;
  *(undefined1 *)((long)param_1 + 0x9ab) = 0;
  param_1[0x12f] = puVar1;
  *(undefined2 *)(param_1 + 0x136) = 0;
  *(undefined1 *)((long)param_1 + 0x9b2) = 0;
  *(undefined4 *)(param_1 + 0x13a) = 0x20;
  *(undefined1 *)((long)param_1 + 0x9f3) = 0;
  param_1[0x138] = puVar1;
  *(undefined2 *)(param_1 + 0x13f) = 0;
  *(undefined1 *)((long)param_1 + 0x9fa) = 0;
  param_1[0x14e] = 0;
  *(undefined4 *)(param_1 + 0x14f) = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  param_1[0x12d] = &PTR_LAB_04a71f50;
  *(undefined1 *)((long)param_1 + 0x9d4) = 0;
  *(undefined8 *)((long)param_1 + 0xa04) = 0;
  *(undefined2 *)((long)param_1 + 0xa0c) = 0x100;
  param_1[0x139] = (long)param_1 + 0x9d4;
  param_1[0x142] = 0x1ffffffff;
  *(undefined1 *)((long)param_1 + 0x98c) = 0;
  param_1[0x130] = (undefined1 *)((long)param_1 + 0x98c);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *(undefined4 *)(param_1 + 0x14d) = 0;
  param_1[0x151] = "invalid_name";
  param_1[0x150] = puVar1;
  uVar12 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(param_1 + 0x152) = uVar12;
  *(undefined4 *)(param_1 + 0x153) = 0;
  param_1[0x154] = puVar1;
  param_1[0x155] = "invalid_name";
  uVar12 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(param_1 + 0x156) = uVar12;
  *(undefined4 *)(param_1 + 0x157) = 0;
  param_1[0x158] = puVar1;
  param_1[0x159] = "invalid_name";
  uVar12 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(param_1 + 0x15a) = uVar12;
  *(undefined4 *)(param_1 + 0x15b) = 0;
  param_1[0x15c] = puVar1;
  param_1[0x15d] = "invalid_name";
  uVar12 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(param_1 + 0x15e) = uVar12;
  *(undefined4 *)(param_1 + 0x15f) = 0;
  param_1[0x160] = puVar1;
  param_1[0x161] = "invalid_name";
  uVar12 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(param_1 + 0x162) = uVar12;
  *(undefined4 *)(param_1 + 0x163) = 0;
  param_1[0x164] = puVar1;
  param_1[0x165] = "invalid_name";
  uVar12 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(param_1 + 0x166) = uVar12;
  *(undefined4 *)(param_1 + 0x167) = 0;
  param_1[0x168] = puVar1;
  param_1[0x169] = "invalid_name";
  uVar12 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(param_1 + 0x16a) = uVar12;
  *(undefined4 *)(param_1 + 0x16b) = 0;
  param_1[0x16c] = puVar1;
  param_1[0x16d] = "invalid_name";
  uVar12 = FUN_006bd550("invalid_name",0);
  param_1[0x16f] = 0;
  param_1[0x175] = param_1 + 0x176;
  param_1[0x176] = param_1 + 0x177;
  param_1[0x173] = param_1 + 0x175;
  param_1[0x177] = param_1 + 0x178;
  param_1[0x174] = param_1 + 0x175;
  param_1[0x178] = param_1 + 0x179;
  param_1[0x179] = param_1 + 0x17a;
  *(undefined4 *)(param_1 + 0x16e) = uVar12;
  param_1[0x17a] = param_1 + 0x17b;
  *(undefined4 *)(param_1 + 0x170) = 0;
  param_1[0x17b] = param_1 + 0x17c;
  param_1[0x171] = 0;
  param_1[0x17c] = param_1 + 0x17d;
  param_1[0x172] = 0;
  param_1[0x17d] = param_1 + 0x17e;
  param_1[0x188] = 0;
  param_1[0x17e] = param_1 + 0x17f;
  param_1[0x17f] = param_1 + 0x180;
  param_1[0x180] = param_1 + 0x181;
  param_1[0x181] = param_1 + 0x182;
  param_1[0x182] = param_1 + 0x183;
  param_1[0x183] = param_1 + 0x184;
  param_1[0x184] = param_1 + 0x185;
  param_1[0x185] = param_1 + 0x186;
  param_1[0x186] = param_1 + 0x187;
  param_1[0x187] = param_1 + 0x188;
  if (param_1 + 0x189 != (undefined8 *)0x0) {
    param_1[0x172] = param_1 + 0x189;
    param_1[0x171] = 0x1400000000;
  }
  puVar15 = (undefined8 *)((long)param_1 + 0xd0c);
  param_1[0x19d] = 0;
  *(undefined4 *)(param_1 + 0x19e) = 0;
  param_1[0x1a0] = puVar15;
  *(undefined4 *)(param_1 + 0x1a1) = 0x10;
  *(undefined1 *)((long)param_1 + 0xd1b) = 0;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  *(undefined4 *)(param_1 + 0x1a7) = 0x20;
  param_1[0x1a5] = puVar3 + 0x10;
  *(undefined1 *)((long)param_1 + 0xd3c) = 0;
  puVar1 = PTR_DAT_04bb2ab0;
  param_1[0x1a6] = (undefined1 *)((long)param_1 + 0xd3c);
  puVar3 = PTR_DAT_04bc2850;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined1 *)((long)param_1 + 0xd5b) = 0;
  param_1[0x1ac] = 0;
  param_1[0x19f] = puVar1 + 0x10;
  param_1[0x1b1] = puVar3 + 0x10;
  param_1[0x1b2] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x1b2);
  *(undefined4 *)(param_1 + 0x1b3) = 0;
  FUN_01e27300(param_1 + 0x1b4);
  local_e0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b8 = "Npc";
  pcStack_d8 = "NpcActivityParam";
  local_c0 = local_e0;
  FUN_020ab9c0(param_1 + 0x267,&local_c0,&local_e0);
  param_1[0x5c3] = 0;
  puVar3 = PTR_DAT_04bbc1a0;
  param_1[0x5c5] = 0;
  puVar1 = PTR_DAT_04bb2010;
  param_1[0x5c8] = 0;
  param_1[0x5ca] = 0;
  *(undefined4 *)(param_1 + 0x5cd) = 0;
  param_1[0x5e3] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x5c1] = puVar3 + 0x10;
  param_1[0x5c6] = puVar3 + 0x10;
  param_1[0x5c2] = puVar1;
  param_1[0x5c4] = puVar1;
  param_1[0x5c7] = puVar1;
  param_1[0x5c9] = puVar1;
  param_1[0x5cc] = param_1 + 0x5cb;
  param_1[0x5cb] = param_1 + 0x5cb;
  param_1[0x5d1] = param_1 + 0x5d7;
  param_1[0x5ce] = param_1 + 0x5d1;
  param_1[0x5cf] = param_1 + 0x5d1;
  *(undefined4 *)(param_1 + 0x5eb) = 0;
  param_1[0x5d7] = param_1 + 0x5dd;
  *(undefined4 *)(param_1 + 0x5d0) = 4;
  param_1[0x5dd] = param_1 + 0x5e3;
  param_1[0x5ea] = param_1 + 0x5e9;
  param_1[0x5e9] = param_1 + 0x5e9;
  param_1[0x5ef] = param_1 + 0x60d;
  param_1[0x5ec] = param_1 + 0x5ef;
  param_1[0x5ed] = param_1 + 0x5ef;
  param_1[0x60d] = param_1 + 0x62b;
  param_1[0x667] = 0;
  param_1[0x62b] = param_1 + 0x649;
  *(undefined4 *)(param_1 + 0x5ee) = 5;
  *(undefined2 *)(param_1 + 0x685) = 0;
  param_1[0x649] = param_1 + 0x667;
  FUN_0086f510(param_1 + 0x686);
  FUN_0086d080(param_1 + 0x70f);
  param_1[0x799] = 0;
  param_1[0x798] = 0;
  param_1[0x79c] = param_1 + 0x7b7;
  param_1[0x79a] = param_1 + 0x79c;
  param_1[0x99d] = 0;
  param_1[0x79b] = param_1 + 0x79c;
  param_1[0x7b7] = param_1 + 0x7d2;
  param_1[0x7d2] = param_1 + 0x7ed;
  param_1[0x7ed] = param_1 + 0x808;
  param_1[0x808] = param_1 + 0x823;
  param_1[0x823] = param_1 + 0x83e;
  param_1[0x83e] = param_1 + 0x859;
  param_1[0x859] = param_1 + 0x874;
  param_1[0x874] = param_1 + 0x88f;
  param_1[0x88f] = param_1 + 0x8aa;
  param_1[0x8aa] = param_1 + 0x8c5;
  param_1[0x8c5] = param_1 + 0x8e0;
  param_1[0x8e0] = param_1 + 0x8fb;
  param_1[0x8fb] = param_1 + 0x916;
  param_1[0x916] = param_1 + 0x931;
  param_1[0x931] = param_1 + 0x94c;
  param_1[0x94c] = param_1 + 0x967;
  param_1[0x967] = param_1 + 0x982;
  param_1[0x982] = param_1 + 0x99d;
  if (param_1 + 0x9b8 != (undefined8 *)0x0) {
    param_1[0x799] = param_1 + 0x9b8;
    param_1[0x798] = 0x1400000000;
  }
  param_1[0x9cd] = 0;
  param_1[0x9cc] = 0;
  param_1[0x9d0] = param_1 + 0x9d7;
  param_1[0x9ce] = param_1 + 0x9d0;
  param_1[0x9d7] = 0;
  param_1[0x9cf] = param_1 + 0x9d0;
  if (param_1 + 0x9de != (undefined8 *)0x0) {
    param_1[0x9cd] = param_1 + 0x9de;
    *(undefined4 *)((long)param_1 + 0x4e64) = 2;
  }
  *(undefined4 *)(param_1 + 0x9e1) = 0;
  param_1[0x9e0] = &PTR_LAB_04a720e0;
  param_1[0x9e2] = 0;
  memset(param_1 + 0x9e3,0,0x1800);
  lVar17 = 0x80;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  do {
    *(undefined4 *)(puVar14 + -0xb) = 8;
    lVar17 = lVar17 + -1;
    puVar14[-7] = 0;
    *(undefined1 **)(puVar14 + -0x13) = puVar14 + -7;
    *puVar14 = 0;
    *(undefined **)(puVar14 + -0x1b) = puVar1;
    puVar14 = puVar14 + 0x30;
  } while (lVar17 != 0);
  iVar16 = 0;
  do {
    puVar15 = param_1 + 0x9e3 + (long)iVar16 * 6;
    iVar16 = iVar16 + 1;
    *puVar15 = 0;
    puVar15[1] = 0x244db4da00000000;
    *(undefined1 *)puVar15[3] = 0;
  } while (iVar16 != 0x80);
  FUN_02815cfc(param_1 + 0xce3);
  puVar1 = PTR_DAT_04bb3170;
  param_1[0x1083] = 0;
  *(undefined1 *)(param_1 + 0x1084) = 0;
  uVar7 = *(undefined2 *)puVar1;
  param_1[0x1085] = 0;
  *(undefined2 *)((long)param_1 + 0x8422) = uVar7;
  FUN_027c0ee4(param_1 + 0x1086);
  memset(param_1 + 0x1094,0,0x230);
  param_1[0x10da] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x10da);
  param_1[0x10db] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x10db);
  FUN_02815cfc(param_1 + 0x10dc);
  uVar7 = *(undefined2 *)puVar1;
  param_1[0x147c] = 0;
  *(undefined1 *)(param_1 + 0x147d) = 0;
  *(undefined2 *)((long)param_1 + 0xa3ea) = uVar7;
  param_1[0x147e] = 0;
  FUN_027c0ee4(param_1 + 0x147f);
  memset(param_1 + 0x148d,0,0x230);
  param_1[0x14d3] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x14d3);
  param_1[0x14d4] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x14d4);
  FUN_02815cfc(param_1 + 0x14d5);
  uVar7 = *(undefined2 *)puVar1;
  param_1[0x1875] = 0;
  *(undefined1 *)(param_1 + 0x1876) = 0;
  *(undefined2 *)((long)param_1 + 0xc3b2) = uVar7;
  param_1[0x1877] = 0;
  FUN_027c0ee4(param_1 + 0x1878);
  memset(param_1 + 0x1886,0,0x230);
  param_1[0x18cc] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x18cc);
  param_1[0x18cd] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x18cd);
  FUN_02815cfc(param_1 + 0x18ce);
  uVar7 = *(undefined2 *)puVar1;
  param_1[0x1c6e] = 0;
  *(undefined1 *)(param_1 + 0x1c6f) = 0;
  *(undefined2 *)((long)param_1 + 0xe37a) = uVar7;
  param_1[0x1c70] = 0;
  FUN_027c0ee4(param_1 + 0x1c71);
  memset(param_1 + 0x1c7f,0,0x230);
  param_1[0x1cc5] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x1cc5);
  param_1[0x1cc6] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x1cc6);
  FUN_02815cfc(param_1 + 0x1cc7);
  uVar7 = *(undefined2 *)puVar1;
  param_1[0x2067] = 0;
  *(undefined1 *)(param_1 + 0x2068) = 0;
  *(undefined2 *)((long)param_1 + 0x10342) = uVar7;
  param_1[0x2069] = 0;
  FUN_027c0ee4(param_1 + 0x206a);
  memset(param_1 + 0x2078,0,0x230);
  param_1[0x20be] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x20be);
  param_1[0x20bf] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x20bf);
  FUN_02815cfc(param_1 + 0x20c0);
  uVar7 = *(undefined2 *)puVar1;
  param_1[0x2460] = 0;
  *(undefined1 *)(param_1 + 0x2461) = 0;
  *(undefined2 *)((long)param_1 + 0x1230a) = uVar7;
  param_1[0x2462] = 0;
  FUN_027c0ee4(param_1 + 0x2463);
  memset(param_1 + 0x2471,0,0x230);
  param_1[0x24b7] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x24b7);
  param_1[0x24b8] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x24b8);
  FUN_02815cfc(param_1 + 0x24b9);
  uVar7 = *(undefined2 *)puVar1;
  param_1[0x2859] = 0;
  *(undefined1 *)(param_1 + 0x285a) = 0;
  *(undefined2 *)((long)param_1 + 0x142d2) = uVar7;
  param_1[0x285b] = 0;
  FUN_027c0ee4(param_1 + 0x285c);
  memset(param_1 + 0x286a,0,0x230);
  param_1[0x28b0] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x28b0);
  param_1[0x28b1] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x28b1);
  FUN_02815cfc(param_1 + 0x28b2);
  uVar7 = *(undefined2 *)puVar1;
  param_1[0x2c52] = 0;
  *(undefined1 *)(param_1 + 0x2c53) = 0;
  *(undefined2 *)((long)param_1 + 0x1629a) = uVar7;
  param_1[0x2c54] = 0;
  FUN_027c0ee4(param_1 + 0x2c55);
  memset(param_1 + 0x2c63,0,0x230);
  param_1[0x2ca9] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x2ca9);
  param_1[0x2caa] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x2caa);
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(param_1 + 0x2cae) = 0x80;
  puVar15 = (undefined8 *)((long)param_1 + 0x16574);
  *(undefined1 *)((long)param_1 + 0x165f3) = 0;
  param_1[0x2cab] = puVar1 + 0x10;
  param_1[0x2cad] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  param_1[0x2cac] = PTR_DAT_04bb2d88 + 0x10;
  uVar12 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(param_1 + 0x2cc4) = 0;
  *(undefined4 *)(param_1 + 0x2cbf) = uVar12;
  puVar3 = PTR_DAT_04bc2628;
  puVar1 = PTR_DAT_04bc2620;
  param_1[0x2cc2] = 0;
  param_1[0x2cc0] = 0;
  param_1[0x2cc1] = 0;
  *(undefined8 *)((long)param_1 + 0x16615) = 0;
  param_1[0x2cc5] = 0;
  param_1[0x2cc6] = puVar1 + 0x10;
  param_1[0x2cca] = puVar3 + 0x10;
  puVar3 = PTR_DAT_04bb4a78;
  puVar1 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(param_1 + 0x2cd4) = 0x40;
  *(undefined1 *)((long)param_1 + 0x166e3) = 0;
  param_1[0x2cce] = puVar1;
  puVar15 = (undefined8 *)((long)param_1 + 0x166a4);
  param_1[0x2cd3] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  *(undefined4 *)(param_1 + 0x2cdd) = 0xffffffff;
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x2cde] = 0;
  param_1[0x2cdf] = 0;
  param_1[0x2ce0] = 0;
  *(undefined4 *)(param_1 + 0x2ce1) = 0;
  param_1[0x2ce2] = 0;
  *(undefined4 *)(param_1 + 0x2ce3) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2ce4) = 0;
  param_1[0x2ce5] = 0;
  param_1[0x2cd2] = puVar1 + 0x10;
  *PTR_DAT_04bc2630 = 1;
  puVar1 = PTR_DAT_04bc2638;
  *(undefined4 *)(PTR_DAT_04bc2638 + 0x28) = 0xffffffff;
  *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)puVar1 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
  param_1[0x2cab] = PTR_DAT_04bc2610 + 0x10;
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(param_1 + 0x2ce9) = 0x80;
  *(undefined1 *)((long)param_1 + 0x167cb) = 0;
  param_1[0x2ce6] = puVar1 + 0x10;
  puVar15 = (undefined8 *)((long)param_1 + 0x1674c);
  param_1[0x2ce8] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  param_1[0x2ce7] = PTR_DAT_04bb2d88 + 0x10;
  uVar12 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(param_1 + 0x2cfa) = uVar12;
  *(undefined4 *)(param_1 + 0x2cff) = 0;
  puVar1 = PTR_DAT_04bc25d8;
  param_1[0x2cfb] = 0;
  param_1[0x2cfc] = 0;
  param_1[0x2cfd] = 0;
  *(undefined8 *)((long)param_1 + 0x167ed) = 0;
  param_1[0x2d00] = 0;
  param_1[0x2d01] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bc25e0;
  *(undefined4 *)(param_1 + 0x2d0f) = 0x40;
  *(undefined1 *)((long)param_1 + 0x168bb) = 0;
  param_1[0x2d05] = puVar1 + 0x10;
  param_1[0x2d09] = puVar3 + 0x10;
  puVar15 = (undefined8 *)((long)param_1 + 0x1687c);
  param_1[0x2d0e] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x2d18) = 0xffffffff;
  param_1[0x2d1d] = 0;
  *(undefined4 *)(param_1 + 0x2d1e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d1f) = 0;
  param_1[0x2d20] = 0;
  param_1[0x2d0d] = puVar1 + 0x10;
  *PTR_DAT_04bc25e8 = 1;
  param_1[0x2d1b] = 0;
  param_1[0x2d19] = 0;
  param_1[0x2d1a] = 0;
  puVar1 = PTR_DAT_04bc25f0;
  *(undefined4 *)(param_1 + 0x2d1c) = 0;
  *(undefined8 *)puVar1 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  param_1[0x2ce6] = PTR_DAT_04bc25c8 + 0x10;
  puVar1 = PTR_DAT_04bcb440 + 0x10;
  *(undefined4 *)(param_1 + 0x2d24) = 0x80;
  *(undefined1 *)((long)param_1 + 0x169a3) = 0;
  param_1[0x2d21] = puVar1;
  puVar15 = (undefined8 *)((long)param_1 + 0x16924);
  param_1[0x2d23] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  param_1[0x2d22] = PTR_DAT_04bb2d88 + 0x10;
  uVar12 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(param_1 + 0x2d35) = uVar12;
  param_1[0x2d21] = &PTR_FUN_04a72a90;
  param_1[0x2d36] = 0;
  param_1[0x2d37] = 0;
  param_1[0x2d38] = 0;
  *(undefined8 *)((long)param_1 + 0x169c5) = 0;
  *(undefined4 *)(param_1 + 0x2d3a) = 0;
  *(undefined4 *)(param_1 + 0x2d4a) = 0x40;
  *(undefined1 *)((long)param_1 + 0x16a93) = 0;
  param_1[0x2d3b] = 0;
  param_1[0x2d3c] = &PTR_LAB_04a72ae8;
  param_1[0x2d40] = &PTR_LAB_04a72b10;
  param_1[0x2d44] = puVar3 + 0x10;
  puVar15 = (undefined8 *)((long)param_1 + 0x16a54);
  param_1[0x2d49] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x2d58] = 0;
  *(undefined4 *)(param_1 + 0x2d53) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d59) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d5a) = 0;
  param_1[0x2d48] = puVar1 + 0x10;
  param_1[0x2d54] = 0;
  param_1[0x2d55] = 0;
  param_1[0x2d56] = 0;
  *(undefined4 *)(param_1 + 0x2d57) = 0;
  puVar1 = PTR_DAT_04bc1560;
  param_1[0x2d5b] = 0;
  *puVar1 = 1;
  puVar1 = PTR_DAT_04bc1568;
  *(undefined8 *)(PTR_DAT_04bc1568 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x80) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)puVar1 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  puVar1 = PTR_DAT_04bcb440 + 0x10;
  *(undefined4 *)(param_1 + 0x2d5f) = 0x80;
  *(undefined1 *)((long)param_1 + 0x16b7b) = 0;
  param_1[0x2d5c] = puVar1;
  puVar15 = (undefined8 *)((long)param_1 + 0x16afc);
  param_1[0x2d5e] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  param_1[0x2d5d] = PTR_DAT_04bb2d88 + 0x10;
  uVar12 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0x2d5c] = &PTR_FUN_04a72b38;
  param_1[0x2d71] = 0;
  param_1[0x2d72] = 0;
  param_1[0x2d73] = 0;
  *(undefined8 *)((long)param_1 + 0x16b9d) = 0;
  *(undefined4 *)(param_1 + 0x2d70) = uVar12;
  *(undefined4 *)(param_1 + 0x2d75) = 0;
  *(undefined4 *)(param_1 + 0x2d85) = 0x40;
  *(undefined1 *)((long)param_1 + 0x16c6b) = 0;
  param_1[0x2d76] = 0;
  param_1[0x2d77] = &PTR_LAB_04a72b90;
  param_1[0x2d7b] = &PTR_LAB_04a72bb8;
  param_1[0x2d7f] = puVar3 + 0x10;
  puVar15 = (undefined8 *)((long)param_1 + 0x16c2c);
  param_1[0x2d84] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x2d8e) = 0xffffffff;
  param_1[0x2d93] = 0;
  *(undefined4 *)(param_1 + 0x2d94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d95) = 0;
  param_1[0x2d83] = puVar1 + 0x10;
  param_1[0x2d8f] = 0;
  param_1[0x2d90] = 0;
  param_1[0x2d91] = 0;
  *(undefined4 *)(param_1 + 0x2d92) = 0;
  puVar1 = PTR_DAT_04bc1570;
  param_1[0x2d96] = 0;
  *puVar1 = 1;
  puVar1 = PTR_DAT_04bc1578;
  *(undefined4 *)(PTR_DAT_04bc1578 + 0x68) = 0xffffffff;
  *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)puVar1 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
  puVar1 = PTR_DAT_04bcb440 + 0x10;
  *(undefined4 *)(param_1 + 0x2d9a) = 0x80;
  *(undefined1 *)((long)param_1 + 0x16d53) = 0;
  param_1[0x2d97] = puVar1;
  puVar15 = (undefined8 *)((long)param_1 + 0x16cd4);
  param_1[0x2d99] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  param_1[0x2d98] = PTR_DAT_04bb2d88 + 0x10;
  uVar12 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0x2d97] = &PTR_FUN_04a72be0;
  param_1[0x2dac] = 0;
  param_1[0x2dad] = 0;
  param_1[0x2dae] = 0;
  *(undefined8 *)((long)param_1 + 0x16d75) = 0;
  *(undefined4 *)(param_1 + 0x2dab) = uVar12;
  *(undefined4 *)(param_1 + 0x2db0) = 0;
  *(undefined4 *)(param_1 + 0x2dc0) = 0x40;
  *(undefined1 *)((long)param_1 + 0x16e43) = 0;
  param_1[0x2db1] = 0;
  param_1[0x2db2] = &PTR_LAB_04a72c38;
  param_1[0x2db6] = &PTR_LAB_04a72c60;
  param_1[0x2dba] = puVar3 + 0x10;
  puVar15 = (undefined8 *)((long)param_1 + 0x16e04);
  param_1[0x2dbf] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x2dc9) = 0xffffffff;
  param_1[0x2dce] = 0;
  *(undefined4 *)(param_1 + 0x2dcf) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2dd0) = 0;
  param_1[0x2dbe] = puVar1 + 0x10;
  param_1[0x2dca] = 0;
  param_1[0x2dcb] = 0;
  param_1[0x2dcc] = 0;
  *(undefined4 *)(param_1 + 0x2dcd) = 0;
  puVar1 = PTR_DAT_04bc2858;
  param_1[0x2dd1] = 0;
  *puVar1 = 1;
  puVar1 = PTR_DAT_04bc2860;
  *(undefined8 *)PTR_DAT_04bc2860 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 0x50) = 0xffffffff;
  *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
  FUN_020d6334(param_1 + 0x2dd2);
  puVar1 = PTR_DAT_04bcb440 + 0x10;
  *(undefined4 *)(param_1 + 0x2e40) = 0x80;
  *(undefined1 *)((long)param_1 + 0x17283) = 0;
  param_1[0x2e3d] = puVar1;
  puVar15 = (undefined8 *)((long)param_1 + 0x17204);
  param_1[0x2e3f] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  param_1[0x2e3e] = PTR_DAT_04bb2d88 + 0x10;
  uVar12 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(param_1 + 0x2e51) = uVar12;
  param_1[0x2e3d] = &PTR_FUN_04a72c88;
  param_1[0x2e52] = 0;
  param_1[0x2e53] = 0;
  param_1[0x2e54] = 0;
  *(undefined8 *)((long)param_1 + 0x172a5) = 0;
  *(undefined4 *)(param_1 + 0x2e56) = 0;
  *(undefined4 *)(param_1 + 0x2e66) = 0x40;
  *(undefined1 *)((long)param_1 + 0x17373) = 0;
  param_1[0x2e57] = 0;
  param_1[0x2e58] = &PTR_LAB_04a72ce0;
  param_1[0x2e5c] = &PTR_LAB_04a72d08;
  param_1[0x2e60] = puVar3 + 0x10;
  puVar15 = (undefined8 *)((long)param_1 + 0x17334);
  param_1[0x2e65] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x2e74] = 0;
  *(undefined4 *)(param_1 + 0x2e6f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e75) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e76) = 0;
  param_1[0x2e64] = puVar1 + 0x10;
  param_1[0x2e70] = 0;
  param_1[0x2e71] = 0;
  param_1[0x2e72] = 0;
  *(undefined4 *)(param_1 + 0x2e73) = 0;
  puVar1 = PTR_DAT_04bbaad8;
  param_1[0x2e77] = 0;
  *puVar1 = 1;
  puVar1 = PTR_DAT_04bbaae0;
  *(undefined8 *)PTR_DAT_04bbaae0 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(param_1 + 0x2e7b) = 0x80;
  *(undefined1 *)((long)param_1 + 0x1745b) = 0;
  param_1[0x2e78] = puVar1 + 0x10;
  puVar15 = (undefined8 *)((long)param_1 + 0x173dc);
  param_1[0x2e7a] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  param_1[0x2e79] = PTR_DAT_04bb2d88 + 0x10;
  uVar12 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0x2e78] = &PTR_FUN_04a72d30;
  param_1[0x2e8d] = 0;
  param_1[0x2e8e] = 0;
  param_1[0x2e8f] = 0;
  *(undefined8 *)((long)param_1 + 0x1747d) = 0;
  *(undefined4 *)(param_1 + 0x2e8c) = uVar12;
  *(undefined4 *)(param_1 + 0x2e91) = 0;
  *(undefined4 *)(param_1 + 0x2ea1) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1754b) = 0;
  param_1[0x2e92] = 0;
  param_1[0x2e93] = &PTR_LAB_04a72d88;
  param_1[0x2e97] = &PTR_LAB_04a72db0;
  param_1[0x2e9b] = puVar3 + 0x10;
  puVar15 = (undefined8 *)((long)param_1 + 0x1750c);
  param_1[0x2ea0] = puVar15;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x2eaf] = 0;
  *(undefined4 *)(param_1 + 0x2eb1) = 0;
  *(undefined4 *)(param_1 + 0x2eaa) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2eb0) = 0xffffffff;
  param_1[0x2e9f] = puVar1 + 0x10;
  param_1[0x2eab] = 0;
  param_1[0x2eac] = 0;
  param_1[0x2ead] = 0;
  *(undefined4 *)(param_1 + 0x2eae) = 0;
  puVar1 = PTR_DAT_04bbaaa0;
  param_1[0x2eb2] = 0;
  *puVar1 = 1;
  puVar1 = PTR_DAT_04bbaaa8;
  *(undefined8 *)(PTR_DAT_04bbaaa8 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)puVar1 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  param_1[0x2eb3] = 0;
  param_1[0x2eb4] = 0;
  param_1[0x2eb5] = 0;
  *(undefined8 *)((long)param_1 + 0x175ae) = 0;
  puVar1 = PTR_DAT_04bd4738 + 0x10;
  param_1[0x2eb9] = 0xffffffff;
  param_1[0x2eba] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2ebb) = 0;
  *(undefined4 *)(param_1 + 0x2ebc) = 0;
  param_1[0x2ebd] = 0;
  *(undefined4 *)(param_1 + 0x2ebe) = 0;
  plVar2 = param_1 + 0x2ec2;
  param_1[0x2eb7] = puVar1;
  param_1[0x2eb8] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2ec1) = 0;
  param_1[0x2ebf] = 0;
  param_1[0x2ec0] = 0;
  local_f0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_d8 = "Npc";
  pcStack_e8 = "NpcWherearenParam_RVer_20000";
  local_e0 = local_f0;
  FUN_00751ec0(plVar2,&local_e0,&local_f0,0);
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x2ec2] = &PTR_FUN_04a72100;
  param_1[0x2edc] = 0;
  param_1[0x2edd] = 0;
  *(undefined4 *)(param_1 + 0x2ede) = 0;
  param_1[11999] = 0;
  *plVar22 = (long)(puVar1 + 0x10);
  param_1[0x2edb] = "mWaitSeconds";
  plVar21 = param_1 + 0x2ec7;
  lVar17 = *plVar21;
  if (*plVar21 != 0) {
    do {
      lVar18 = lVar17;
      lVar17 = *(long *)(lVar18 + 0x10);
    } while (lVar17 != 0);
    plVar21 = (long *)(lVar18 + 0x10);
  }
  *plVar21 = (long)plVar22;
  param_1[0x2edd] = plVar2;
  uVar12 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x2ede) & 0x800) != 0) {
    uVar12 = 0x3c8efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar22 + 0xf0))(plVar22);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2ede);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[11999] = 0;
    uVar12 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 11999) = uVar12;
  }
  plVar22 = param_1 + 12000;
  *plVar22 = (long)(PTR_DAT_04bb3380 + 0x10);
  *(uint *)(param_1 + 0x2ede) = uVar6 & 0xfeffffff;
  param_1[0x2ee5] = 0;
  param_1[0x2ee1] = "mResponsePercent";
  *(undefined4 *)(param_1 + 0x2ee4) = 0;
  param_1[0x2ee2] = 0;
  param_1[0x2ee3] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar22);
  puVar13 = (undefined4 *)(**(code **)(*plVar22 + 0xf0))(plVar22);
  *puVar13 = 0x32;
  if ((*(uint *)(param_1 + 0x2ee4) >> 7 & 1) == 0) {
    param_1[0x2ee5] = 0;
    *(undefined4 *)(param_1 + 0x2ee5) = 0x32;
  }
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  plVar22 = param_1 + 0x2ee6;
  *plVar22 = (long)puVar1;
  *(uint *)(param_1 + 0x2ee4) = *(uint *)(param_1 + 0x2ee4) & 0xfeffffff;
  param_1[0x2eeb] = 0;
  param_1[0x2ee7] = "mChairBedSeconds";
  *(undefined4 *)(param_1 + 0x2eea) = 0;
  param_1[0x2ee8] = 0;
  param_1[0x2ee9] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar22);
  uVar12 = 0x41700000;
  if ((*(uint *)(param_1 + 0x2eea) & 0x800) != 0) {
    uVar12 = 0x3e860a92;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar22 + 0xf0))(plVar22);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2eea);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2eeb] = 0;
    uVar12 = 0x41700000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0x2eeb) = uVar12;
  }
  plVar22 = param_1 + 0x2eec;
  *plVar22 = (long)puVar1;
  *(uint *)(param_1 + 0x2eea) = uVar6 & 0xfeffffff;
  param_1[0x2eed] = "mTearOffThreshold";
  param_1[0x2ef1] = 0;
  param_1[0x2eee] = 0;
  param_1[0x2eef] = 0;
  *(undefined4 *)(param_1 + 0x2ef0) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar22);
  uVar12 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x2ef0) & 0x800) != 0) {
    uVar12 = 0x3c8efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar22 + 0xf0))(plVar22);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2ef0);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2ef1] = 0;
    uVar12 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x2ef1) = uVar12;
  }
  plVar22 = param_1 + 0x2ef2;
  *plVar22 = (long)(PTR_DAT_04bb31d0 + 0x10);
  *(uint *)(param_1 + 0x2ef0) = uVar6 & 0xfeffffff;
  param_1[0x2ef7] = 0;
  param_1[0x2ef3] = "mDegreeThreshold";
  param_1[0x2ef4] = 0;
  param_1[0x2ef5] = 0;
  *(undefined4 *)(param_1 + 0x2ef6) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar22);
  uVar12 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x2ef6) & 0x800) != 0) {
    uVar12 = 0x3f060a92;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar22 + 0xf0))(plVar22);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2ef6);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2ef7] = 0;
    uVar12 = 0x41f00000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x2ef7) = uVar12;
  }
  plVar22 = param_1 + 0x2ef8;
  *plVar22 = (long)(PTR_DAT_04bb3380 + 0x10);
  *(uint *)(param_1 + 0x2ef6) = uVar6 & 0xfeffffff;
  param_1[0x2efd] = 0;
  param_1[0x2ef9] = "mGreetDelay";
  param_1[0x2efa] = 0;
  param_1[0x2efb] = 0;
  *(undefined4 *)(param_1 + 0x2efc) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar22);
  puVar13 = (undefined4 *)(**(code **)(*plVar22 + 0xf0))(plVar22);
  *puVar13 = 9;
  if ((*(uint *)(param_1 + 0x2efc) >> 7 & 1) == 0) {
    param_1[0x2efd] = 0;
    *(undefined4 *)(param_1 + 0x2efd) = 9;
  }
  *(uint *)(param_1 + 0x2efc) = *(uint *)(param_1 + 0x2efc) & 0xfeffffff;
  param_1[0x2f00] = 0;
  param_1[0x2f01] = 0;
  *(undefined4 *)(param_1 + 0x2f02) = 0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x2f03] = 0;
  *plVar23 = (long)(puVar1 + 0x10);
  param_1[0x2eff] = "mWaitActionSeconds";
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar23);
  uVar12 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x2f02) & 0x800) != 0) {
    uVar12 = 0x3f060a92;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar23 + 0xf0))(plVar23);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2f02);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2f03] = 0;
    uVar12 = 0x41f00000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x2f03) = uVar12;
  }
  plVar23 = param_1 + 0x2f04;
  *plVar23 = (long)(puVar1 + 0x10);
  *(uint *)(param_1 + 0x2f02) = uVar6 & 0xfeffffff;
  param_1[0x2f05] = "mWaitActionMaxSeconds";
  param_1[0x2f09] = 0;
  param_1[0x2f06] = 0;
  param_1[0x2f07] = 0;
  *(undefined4 *)(param_1 + 0x2f08) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar23);
  uVar12 = 0x42340000;
  if ((*(uint *)(param_1 + 0x2f08) & 0x800) != 0) {
    uVar12 = 0x3f490fdb;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar23 + 0xf0))(plVar23);
  *puVar13 = uVar12;
  puVar1 = PTR_DAT_04bb3380;
  uVar6 = *(uint *)(param_1 + 0x2f08);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2f09] = 0;
    uVar12 = 0x42340000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3f490fdb;
    }
    *(undefined4 *)(param_1 + 0x2f09) = uVar12;
  }
  plVar23 = param_1 + 0x2f0a;
  *plVar23 = (long)(puVar1 + 0x10);
  *(uint *)(param_1 + 0x2f08) = uVar6 & 0xfeffffff;
  param_1[0x2f0b] = "mNeighborPercent";
  param_1[0x2f0c] = 0;
  param_1[0x2f0d] = 0;
  *(undefined4 *)(param_1 + 0x2f0e) = 0;
  param_1[0x2f0f] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar23);
  puVar13 = (undefined4 *)(**(code **)(*plVar23 + 0xf0))(plVar23);
  *puVar13 = 0x14;
  if ((*(uint *)(param_1 + 0x2f0e) >> 7 & 1) == 0) {
    param_1[0x2f0f] = 0;
    *(undefined4 *)(param_1 + 0x2f0f) = 0x14;
  }
  plVar23 = param_1 + 0x2f10;
  *plVar23 = (long)(puVar1 + 0x10);
  *(uint *)(param_1 + 0x2f0e) = *(uint *)(param_1 + 0x2f0e) & 0xfeffffff;
  param_1[0x2f11] = "mWaitActionPercent";
  param_1[0x2f15] = 0;
  param_1[0x2f12] = 0;
  param_1[0x2f13] = 0;
  *(undefined4 *)(param_1 + 0x2f14) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar23);
  puVar13 = (undefined4 *)(**(code **)(*plVar23 + 0xf0))(plVar23);
  *puVar13 = 10;
  if ((*(uint *)(param_1 + 0x2f14) >> 7 & 1) == 0) {
    param_1[0x2f15] = 0;
    *(undefined4 *)(param_1 + 0x2f15) = 10;
  }
  plVar23 = param_1 + 0x2f16;
  *plVar23 = (long)(puVar1 + 0x10);
  *(uint *)(param_1 + 0x2f14) = *(uint *)(param_1 + 0x2f14) & 0xfeffffff;
  param_1[0x2f17] = "mWaitFloorActionPercent";
  param_1[0x2f18] = 0;
  param_1[0x2f19] = 0;
  *(undefined4 *)(param_1 + 0x2f1a) = 0;
  param_1[0x2f1b] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar23);
  puVar13 = (undefined4 *)(**(code **)(*plVar23 + 0xf0))(plVar23);
  *puVar13 = 10;
  if ((*(uint *)(param_1 + 0x2f1a) >> 7 & 1) == 0) {
    param_1[0x2f1b] = 0;
    *(undefined4 *)(param_1 + 0x2f1b) = 10;
  }
  plVar23 = param_1 + 0x2f1c;
  *plVar23 = (long)(puVar1 + 0x10);
  *(uint *)(param_1 + 0x2f1a) = *(uint *)(param_1 + 0x2f1a) & 0xfeffffff;
  param_1[0x2f1d] = "mWaitWallActionPercent";
  param_1[0x2f21] = 0;
  param_1[0x2f1e] = 0;
  param_1[0x2f1f] = 0;
  *(undefined4 *)(param_1 + 0x2f20) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar23);
  puVar13 = (undefined4 *)(**(code **)(*plVar23 + 0xf0))(plVar23);
  *puVar13 = 0x28;
  if ((*(uint *)(param_1 + 0x2f20) >> 7 & 1) == 0) {
    param_1[0x2f21] = 0;
    *(undefined4 *)(param_1 + 0x2f21) = 0x28;
  }
  *(uint *)(param_1 + 0x2f20) = *(uint *)(param_1 + 0x2f20) & 0xfeffffff;
  param_1[0x2f27] = 0;
  param_1[0x2f24] = 0;
  param_1[0x2f25] = 0;
  *(undefined4 *)(param_1 + 0x2f26) = 0;
  *plVar24 = (long)(puVar1 + 0x10);
  param_1[0x2f23] = "mWaitClothActionPercent";
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar24);
  puVar13 = (undefined4 *)(**(code **)(*plVar24 + 0xf0))(plVar24);
  *puVar13 = 10;
  if ((*(uint *)(param_1 + 0x2f26) >> 7 & 1) == 0) {
    param_1[0x2f27] = 0;
    *(undefined4 *)(param_1 + 0x2f27) = 10;
  }
  plVar24 = param_1 + 0x2f28;
  *plVar24 = (long)(puVar1 + 0x10);
  *(uint *)(param_1 + 0x2f26) = *(uint *)(param_1 + 0x2f26) & 0xfeffffff;
  param_1[0x2f29] = "mWaitLookSkyActionPercent";
  param_1[0x2f2d] = 0;
  param_1[0x2f2a] = 0;
  param_1[0x2f2b] = 0;
  *(undefined4 *)(param_1 + 0x2f2c) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar24);
  puVar13 = (undefined4 *)(**(code **)(*plVar24 + 0xf0))(plVar24);
  *puVar13 = 0x1e;
  if ((*(uint *)(param_1 + 0x2f2c) >> 7 & 1) == 0) {
    param_1[0x2f2d] = 0;
    *(undefined4 *)(param_1 + 0x2f2d) = 0x1e;
  }
  plVar24 = param_1 + 0x2f2e;
  *plVar24 = (long)(PTR_DAT_04bb33a8 + 0x10);
  *(uint *)(param_1 + 0x2f2c) = *(uint *)(param_1 + 0x2f2c) & 0xfeffffff;
  param_1[0x2f33] = 0;
  param_1[0x2f2f] = "mIsAllowFtrFromChest";
  param_1[0x2f30] = 0;
  param_1[0x2f31] = 0;
  *(undefined4 *)(param_1 + 0x2f32) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar24);
  puVar14 = (undefined1 *)(**(code **)(*plVar24 + 0xf0))(plVar24);
  *puVar14 = 0;
  if ((*(uint *)(param_1 + 0x2f32) >> 7 & 1) == 0) {
    param_1[0x2f33] = 0;
    *(undefined1 *)(param_1 + 0x2f33) = 0;
  }
  puVar3 = PTR_DAT_04bb31d0 + 0x10;
  plVar24 = param_1 + 0x2f34;
  *plVar24 = (long)puVar3;
  *(uint *)(param_1 + 0x2f32) = *(uint *)(param_1 + 0x2f32) & 0xfeffffff;
  param_1[0x2f39] = 0;
  param_1[0x2f35] = "mRunDist";
  param_1[0x2f36] = 0;
  param_1[0x2f37] = 0;
  *(undefined4 *)(param_1 + 0x2f38) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar24);
  puVar13 = (undefined4 *)(**(code **)(*plVar24 + 0xf0))(plVar24);
  *puVar13 = 0;
  if ((*(uint *)(param_1 + 0x2f38) >> 7 & 1) == 0) {
    param_1[0x2f39] = 0;
    *(undefined4 *)(param_1 + 0x2f39) = 0;
  }
  plVar24 = param_1 + 0x2f3a;
  *plVar24 = (long)puVar3;
  *(uint *)(param_1 + 0x2f38) = *(uint *)(param_1 + 0x2f38) & 0xfeffffff;
  param_1[0x2f3b] = "mDashDist";
  param_1[0x2f3f] = 0;
  param_1[0x2f3c] = 0;
  param_1[0x2f3d] = 0;
  *(undefined4 *)(param_1 + 0x2f3e) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar24);
  uVar12 = 0x41c80000;
  if ((*(uint *)(param_1 + 0x2f3e) & 0x800) != 0) {
    uVar12 = 0x3edf66f3;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar24 + 0xf0))(plVar24);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2f3e);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2f3f] = 0;
    uVar12 = 0x41c80000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3edf66f3;
    }
    *(undefined4 *)(param_1 + 0x2f3f) = uVar12;
  }
  plVar24 = param_1 + 0x2f40;
  *plVar24 = (long)(PTR_DAT_04bb31d0 + 0x10);
  *(uint *)(param_1 + 0x2f3e) = uVar6 & 0xfeffffff;
  param_1[0x2f45] = 0;
  param_1[0x2f41] = "mMaxSpeedDist";
  param_1[0x2f42] = 0;
  param_1[0x2f43] = 0;
  *(undefined4 *)(param_1 + 0x2f44) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar24);
  uVar12 = 0xbf800000;
  if ((*(uint *)(param_1 + 0x2f44) & 0x800) != 0) {
    uVar12 = 0xbc8efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar24 + 0xf0))(plVar24);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2f44);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2f45] = 0;
    uVar12 = 0xbf800000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0xbc8efa35;
    }
    *(undefined4 *)(param_1 + 0x2f45) = uVar12;
  }
  *(uint *)(param_1 + 0x2f44) = uVar6 & 0xfeffffff;
  param_1[0x2f4b] = 0;
  param_1[0x2f48] = 0;
  param_1[0x2f49] = 0;
  *(undefined4 *)(param_1 + 0x2f4a) = 0;
  *plVar25 = (long)(puVar1 + 0x10);
  param_1[0x2f47] = "mDelayFollowFrame";
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  puVar13 = (undefined4 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar13 = 9;
  if ((*(uint *)(param_1 + 0x2f4a) >> 7 & 1) == 0) {
    param_1[0x2f4b] = 0;
    *(undefined4 *)(param_1 + 0x2f4b) = 9;
  }
  plVar25 = param_1 + 0x2f4c;
  *plVar25 = (long)(puVar1 + 0x10);
  *(uint *)(param_1 + 0x2f4a) = *(uint *)(param_1 + 0x2f4a) & 0xfeffffff;
  param_1[0x2f4d] = "mHouseOrderEndDemoFascinated";
  param_1[0x2f51] = 0;
  param_1[0x2f4e] = 0;
  param_1[0x2f4f] = 0;
  *(undefined4 *)(param_1 + 0x2f50) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  puVar13 = (undefined4 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar13 = 0x96;
  if ((*(uint *)(param_1 + 0x2f50) >> 7 & 1) == 0) {
    param_1[0x2f51] = 0;
    *(undefined4 *)(param_1 + 0x2f51) = 0x96;
  }
  plVar25 = param_1 + 0x2f52;
  *plVar25 = (long)(puVar1 + 0x10);
  *(uint *)(param_1 + 0x2f50) = *(uint *)(param_1 + 0x2f50) & 0xfeffffff;
  param_1[0x2f53] = "mCompleteDemoShareHouse";
  param_1[0x2f57] = 0;
  param_1[0x2f54] = 0;
  param_1[0x2f55] = 0;
  *(undefined4 *)(param_1 + 0x2f56) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  puVar13 = (undefined4 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar13 = 0xf;
  if ((*(uint *)(param_1 + 0x2f56) >> 7 & 1) == 0) {
    param_1[0x2f57] = 0;
    *(undefined4 *)(param_1 + 0x2f57) = 0xf;
  }
  plVar25 = param_1 + 0x2f58;
  *plVar25 = (long)(PTR_DAT_04bb31d0 + 0x10);
  *(uint *)(param_1 + 0x2f56) = *(uint *)(param_1 + 0x2f56) & 0xfeffffff;
  param_1[0x2f5d] = 0;
  param_1[0x2f59] = "mWallFtrHeightLimit";
  param_1[0x2f5a] = 0;
  param_1[0x2f5b] = 0;
  *(undefined4 *)(param_1 + 0x2f5c) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  uVar12 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x2f5c) & 0x800) != 0) {
    uVar12 = 0x3eb2b8c2;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2f5c);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2f5d] = 0;
    uVar12 = 0x41a00000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x2f5d) = uVar12;
  }
  plVar25 = param_1 + 0x2f5e;
  *plVar25 = (long)(PTR_DAT_04bb5890 + 0x10);
  *(uint *)(param_1 + 0x2f5c) = uVar6 & 0xfeffffff;
  *(undefined8 *)((long)param_1 + 0x17b14) = 0;
  param_1[0x2f64] = 0;
  param_1[0x2f5f] = "mAppealWaitSeconds";
  param_1[0x2f60] = 0;
  param_1[0x2f61] = 0;
  *(undefined4 *)(param_1 + 0x2f62) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  puVar15 = (undefined8 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar15 = 0x40c0000040a00000;
  if ((*(uint *)(param_1 + 0x2f62) >> 7 & 1) == 0) {
    param_1[0x2f64] = 0x40c0000040a00000;
  }
  *(undefined8 *)((long)param_1 + 0x17b4c) = 0;
  param_1[0x2f6b] = 0;
  plVar25 = param_1 + 0x2f65;
  *plVar25 = (long)&PTR_LAB_04a72270;
  *(uint *)(param_1 + 0x2f62) = *(uint *)(param_1 + 0x2f62) & 0xfeffffff;
  param_1[0x2f67] = 0;
  param_1[0x2f68] = 0;
  *(undefined4 *)(param_1 + 0x2f69) = 0;
  param_1[0x2f66] = "mEndTmpEditModeWaitRange";
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  puVar15 = (undefined8 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar15 = 0x1400000010;
  if ((*(uint *)(param_1 + 0x2f69) >> 7 & 1) == 0) {
    param_1[0x2f6b] = 0x1400000010;
  }
  *(uint *)(param_1 + 0x2f69) = *(uint *)(param_1 + 0x2f69) & 0xfeffffff;
  param_1[0x2f6e] = 0;
  param_1[0x2f6f] = 0;
  *(undefined4 *)(param_1 + 0x2f70) = 0;
  plVar25 = param_1 + 0x2f6c;
  *plVar25 = (long)&PTR_LAB_04a72270;
  param_1[0x2f6d] = "mWindowActionTimer";
  *(undefined8 *)((long)param_1 + 0x17b84) = 0;
  param_1[0x2f72] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  puVar15 = (undefined8 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar15 = 0x190000000f;
  if ((*(uint *)(param_1 + 0x2f70) >> 7 & 1) == 0) {
    param_1[0x2f72] = 0x190000000f;
  }
  plVar25 = param_1 + 0x2f73;
  *plVar25 = (long)&PTR_LAB_04a72270;
  *(uint *)(param_1 + 0x2f70) = *(uint *)(param_1 + 0x2f70) & 0xfeffffff;
  param_1[0x2f74] = "mLookSkySeconds";
  param_1[0x2f75] = 0;
  param_1[0x2f76] = 0;
  *(undefined4 *)(param_1 + 0x2f77) = 0;
  *(undefined8 *)((long)param_1 + 0x17bbc) = 0;
  param_1[0x2f79] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  puVar15 = (undefined8 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar15 = 0x3c00000028;
  if ((*(uint *)(param_1 + 0x2f77) >> 7 & 1) == 0) {
    param_1[0x2f79] = 0x3c00000028;
  }
  plVar25 = param_1 + 0x2f7a;
  *plVar25 = (long)&PTR_LAB_04a72270;
  *(uint *)(param_1 + 0x2f77) = *(uint *)(param_1 + 0x2f77) & 0xfeffffff;
  param_1[0x2f7b] = "mCameraTargetNpcWait";
  param_1[0x2f7c] = 0;
  param_1[0x2f7d] = 0;
  *(undefined4 *)(param_1 + 0x2f7e) = 0;
  *(undefined8 *)((long)param_1 + 0x17bf4) = 0;
  param_1[0x2f80] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  puVar15 = (undefined8 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar15 = 0x2d0000001e;
  if ((*(uint *)(param_1 + 0x2f7e) >> 7 & 1) == 0) {
    param_1[0x2f80] = 0x2d0000001e;
  }
  plVar25 = param_1 + 0x2f81;
  *plVar25 = (long)&PTR_LAB_04a72270;
  *(uint *)(param_1 + 0x2f7e) = *(uint *)(param_1 + 0x2f7e) & 0xfeffffff;
  param_1[0x2f82] = "mMoveAroundFgSeconds";
  param_1[0x2f83] = 0;
  param_1[0x2f84] = 0;
  *(undefined4 *)(param_1 + 0x2f85) = 0;
  *(undefined8 *)((long)param_1 + 0x17c2c) = 0;
  param_1[0x2f87] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar25);
  puVar15 = (undefined8 *)(**(code **)(*plVar25 + 0xf0))(plVar25);
  *puVar15 = 0x5a0000003c;
  if ((*(uint *)(param_1 + 0x2f85) >> 7 & 1) == 0) {
    param_1[0x2f87] = 0x5a0000003c;
  }
  *(uint *)(param_1 + 0x2f85) = *(uint *)(param_1 + 0x2f85) & 0xfeffffff;
  local_90 = 0;
  local_cc = 0x43ac8000;
  local_c4 = 0x43da0000;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b8 = "mOtgSchoolPos";
  puStack_a8 = &DAT_040925cc;
  pcStack_98 = "";
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2f88,&local_c0,&local_cc,plVar2);
  local_90 = 0;
  pcStack_b8 = "mOtgRestaurantPos";
  local_cc = 0x44168000;
  local_c4 = 0x43c30000;
  puStack_a8 = &DAT_04087aea;
  pcStack_98 = "";
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2f8f,&local_c0,&local_cc,plVar2);
  local_90 = 0;
  pcStack_b8 = "mOtgCafePos";
  pcStack_98 = "";
  local_cc = 0x440b4000;
  puStack_a8 = &DAT_04082223;
  local_c4 = 0x44058000;
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2f96,&local_c0,&local_cc,plVar2);
  local_90 = 0;
  pcStack_b8 = "mOtgHospitalPos";
  puStack_a8 = &DAT_040dfd96;
  pcStack_98 = "";
  local_cc = 0x43938000;
  local_c4 = 0x43ac0000;
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2f9d,&local_c0,&local_cc,plVar2);
  pcStack_b8 = "mOtgTailorPos";
  local_90 = 0;
  local_c4 = 0x43c30000;
  local_cc = 0x4421c000;
  puStack_a8 = &DAT_040abff7;
  pcStack_98 = "";
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2fa4,&local_c0,&local_cc,plVar2);
  local_90 = 0;
  pcStack_b8 = "mOtgAirportPos";
  puStack_a8 = &DAT_0409260f;
  pcStack_98 = "";
  local_cc = 0x43160000;
  local_c4 = 0x432f0000;
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2fab,&local_c0,&local_cc,plVar2);
  pcStack_b8 = "mRcoAirportPos";
  local_90 = 0;
  local_c4 = 0x432f0000;
  pcStack_98 = "";
  puStack_a8 = &DAT_0405d43d;
  local_cc = 0x43250000;
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2fb2,&local_c0,&local_cc,plVar2);
  pcStack_b8 = "mOtgSchoolEditStartPos";
  local_90 = 0;
  pcStack_98 = "";
  local_cc = 0x43ac8000;
  local_c4 = 0x43e90000;
  puStack_a8 = &DAT_040f52fa;
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2fb9,&local_c0,&local_cc,plVar2);
  pcStack_b8 = "mOtgRestaurantEditStartPos";
  local_90 = 0;
  local_cc = 0x44168000;
  local_c4 = 0x43cf8000;
  puStack_a8 = &DAT_04087b24;
  pcStack_98 = "";
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2fc0,&local_c0,&local_cc,plVar2);
  local_90 = 0;
  pcStack_b8 = "mOtgCafeEditStartPos";
  puStack_a8 = &DAT_040efd1b;
  pcStack_98 = "";
  local_cc = 0x440b4000;
  local_c4 = 0x44058000;
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2fc7,&local_c0,&local_cc,plVar2);
  pcStack_b8 = "mOtgHospitalEditStartPos";
  local_90 = 0;
  local_cc = 0x43938000;
  local_c4 = 0x43b60000;
  puStack_a8 = &DAT_0406d6e0;
  pcStack_98 = "";
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2fce,&local_c0,&local_cc,plVar2);
  local_90 = 0;
  pcStack_b8 = "mOtgTailorEditStartPos";
  local_cc = 0x4421c000;
  puStack_a8 = &DAT_04068304;
  local_c4 = 0x43cf8000;
  pcStack_98 = "";
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_006fdfc0(param_1 + 0x2fd5,&local_c0,&local_cc,plVar2);
  param_1[0x2fde] = 0;
  param_1[0x2fdf] = 0;
  *(undefined4 *)(param_1 + 0x2fe0) = 0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  param_1[0x2fe1] = 0;
  *plVar26 = (long)puVar1;
  param_1[0x2fdd] = "mThemeBalloonDist";
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar26);
  uVar12 = 0x40c00000;
  if ((*(uint *)(param_1 + 0x2fe0) & 0x800) != 0) {
    uVar12 = 0x3dd67750;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar26 + 0xf0))(plVar26);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2fe0);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2fe1] = 0;
    uVar12 = 0x40c00000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3dd67750;
    }
    *(undefined4 *)(param_1 + 0x2fe1) = uVar12;
  }
  plVar26 = param_1 + 0x2fe2;
  *plVar26 = (long)puVar1;
  *(uint *)(param_1 + 0x2fe0) = uVar6 & 0xfeffffff;
  param_1[0x2fe3] = "mThemeBalloonDegree";
  param_1[0x2fe7] = 0;
  param_1[0x2fe4] = 0;
  param_1[0x2fe5] = 0;
  *(undefined4 *)(param_1 + 0x2fe6) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar26);
  uVar12 = 0x42700000;
  if ((*(uint *)(param_1 + 0x2fe6) & 0x800) != 0) {
    uVar12 = 0x3f860a92;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar26 + 0xf0))(plVar26);
  *puVar13 = uVar12;
  puVar1 = PTR_DAT_04bb2028;
  uVar6 = *(uint *)(param_1 + 0x2fe6);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2fe7] = 0;
    uVar12 = 0x42700000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3f860a92;
    }
    *(undefined4 *)(param_1 + 0x2fe7) = uVar12;
  }
  plVar26 = param_1 + 0x2fe8;
  *plVar26 = (long)(PTR_DAT_04bb31d0 + 0x10);
  *(uint *)(param_1 + 0x2fe6) = uVar6 & 0xfeffffff;
  param_1[0x2fed] = 0;
  param_1[0x2fe9] = "mWarningInsectDist";
  param_1[0x2fea] = 0;
  param_1[0x2feb] = 0;
  *(undefined4 *)(param_1 + 0x2fec) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar26);
  uVar12 = 0x428c0000;
  if ((*(uint *)(param_1 + 0x2fec) & 0x800) != 0) {
    uVar12 = 0x3f9c61aa;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar26 + 0xf0))(plVar26);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2fec);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2fed] = 0;
    uVar12 = 0x428c0000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3f9c61aa;
    }
    *(undefined4 *)(param_1 + 0x2fed) = uVar12;
  }
  plVar26 = param_1 + 0x2fee;
  *plVar26 = (long)(PTR_DAT_04bb3380 + 0x10);
  *(uint *)(param_1 + 0x2fec) = uVar6 & 0xfeffffff;
  param_1[0x2ff3] = 0;
  param_1[0x2fef] = "mWarningInsectSeconds";
  param_1[0x2ff0] = 0;
  param_1[0x2ff1] = 0;
  *(undefined4 *)(param_1 + 0x2ff2) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar26);
  puVar13 = (undefined4 *)(**(code **)(*plVar26 + 0xf0))(plVar26);
  *puVar13 = 10;
  if ((*(uint *)(param_1 + 0x2ff2) >> 7 & 1) == 0) {
    param_1[0x2ff3] = 0;
    *(undefined4 *)(param_1 + 0x2ff3) = 10;
  }
  puVar3 = PTR_DAT_04bb31d0 + 0x10;
  plVar26 = param_1 + 0x2ff4;
  *plVar26 = (long)puVar3;
  *(uint *)(param_1 + 0x2ff2) = *(uint *)(param_1 + 0x2ff2) & 0xfeffffff;
  param_1[0x2ff9] = 0;
  param_1[0x2ff5] = "mSmallNpcHeight";
  param_1[0x2ff6] = 0;
  param_1[0x2ff7] = 0;
  *(undefined4 *)(param_1 + 0x2ff8) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar26);
  uVar12 = 0x41200000;
  if ((*(uint *)(param_1 + 0x2ff8) & 0x800) != 0) {
    uVar12 = 0x3e32b8c2;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar26 + 0xf0))(plVar26);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2ff8);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2ff9] = 0;
    uVar12 = 0x41200000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x2ff9) = uVar12;
  }
  plVar26 = param_1 + 0x2ffa;
  *plVar26 = (long)puVar3;
  *(uint *)(param_1 + 0x2ff8) = uVar6 & 0xfeffffff;
  param_1[0x2ffb] = "mNormalNpcHeight";
  param_1[0x2fff] = 0;
  param_1[0x2ffc] = 0;
  param_1[0x2ffd] = 0;
  *(undefined4 *)(param_1 + 0x2ffe) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar26);
  uVar12 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x2ffe) & 0x800) != 0) {
    uVar12 = 0x3eb2b8c2;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar26 + 0xf0))(plVar26);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x2ffe);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2fff] = 0;
    uVar12 = 0x41a00000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x2fff) = uVar12;
  }
  *(uint *)(param_1 + 0x2ffe) = uVar6 & 0xfeffffff;
  param_1[0x3002] = 0;
  param_1[0x3003] = 0;
  *(undefined4 *)(param_1 + 0x3004) = 0;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x3005] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  param_1[0x3001] = "mLargeNpcHeight";
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar5);
  uVar12 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x3004) & 0x800) != 0) {
    uVar12 = 0x3f060a92;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x3004);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x3005] = 0;
    uVar12 = 0x41f00000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x3005) = uVar12;
  }
  plVar26 = param_1 + 0x3006;
  *plVar26 = (long)(puVar3 + 0x10);
  *(uint *)(param_1 + 0x3004) = uVar6 & 0xfeffffff;
  param_1[0x3007] = "mExtraLargeNpcHeight";
  param_1[0x300b] = 0;
  param_1[0x3008] = 0;
  param_1[0x3009] = 0;
  *(undefined4 *)(param_1 + 0x300a) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar26);
  uVar12 = 0x42200000;
  if ((*(uint *)(param_1 + 0x300a) & 0x800) != 0) {
    uVar12 = 0x3f32b8c2;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar26 + 0xf0))(plVar26);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x300a);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x300b] = 0;
    uVar12 = 0x42200000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3f32b8c2;
    }
    *(undefined4 *)(param_1 + 0x300b) = uVar12;
  }
  puVar3 = PTR_DAT_04bb31d0 + 0x10;
  plVar26 = param_1 + 0x300c;
  *plVar26 = (long)puVar3;
  *(uint *)(param_1 + 0x300a) = uVar6 & 0xfeffffff;
  param_1[0x3011] = 0;
  param_1[0x300d] = "mLookWallHeight";
  param_1[0x300e] = 0;
  param_1[0x300f] = 0;
  *(undefined4 *)(param_1 + 0x3010) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar26);
  uVar12 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x3010) & 0x800) != 0) {
    uVar12 = 0x3eb2b8c2;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar26 + 0xf0))(plVar26);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x3010);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x3011] = 0;
    uVar12 = 0x41a00000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x3011) = uVar12;
  }
  plVar26 = param_1 + 0x3012;
  *plVar26 = (long)puVar3;
  *(uint *)(param_1 + 0x3010) = uVar6 & 0xfeffffff;
  param_1[0x3013] = "mPartyCheersDistance";
  param_1[0x3017] = 0;
  param_1[0x3014] = 0;
  param_1[0x3015] = 0;
  *(undefined4 *)(param_1 + 0x3016) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar26);
  uVar12 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x3016) & 0x800) != 0) {
    uVar12 = 0x3f060a92;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar26 + 0xf0))(plVar26);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x3016);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x3017] = 0;
    uVar12 = 0x41f00000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x3017) = uVar12;
  }
  *(uint *)(param_1 + 0x3016) = uVar6 & 0xfeffffff;
  puVar11 = PTR_DAT_04bb2150;
  local_90 = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b8 = "mNorthBeachSpotPos";
  puStack_a8 = &DAT_040b6455;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_0083fdf0(param_1 + 0x3018,&local_c0,PTR_DAT_04bb2150,plVar2);
  pcStack_b8 = "mRestaurantSpotPos";
  local_90 = 0;
  puStack_a8 = &DAT_040a17c5;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_0083fdf0(param_1 + 0x3043,&local_c0,puVar11,plVar2);
  pcStack_b8 = "mHospitalSpotPos";
  local_90 = 0;
  puStack_a8 = &DAT_04068338;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_008407c4(param_1 + 0x306e,&local_c0,puVar11,plVar2);
  param_1[0x3093] = 0;
  param_1[0x3094] = 0;
  *(undefined4 *)(param_1 + 0x3095) = 0;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x3096] = 0;
  *plVar27 = (long)(puVar3 + 0x10);
  param_1[0x3092] = "mMoveSpotStopDist";
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar27);
  uVar12 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x3095) & 0x800) != 0) {
    uVar12 = 0x3c0efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar27 + 0xf0))(plVar27);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x3095);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x3096] = 0;
    uVar12 = 0x3f000000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x3096) = uVar12;
  }
  puVar3 = PTR_DAT_04bb3380 + 0x10;
  plVar27 = param_1 + 0x3097;
  *plVar27 = (long)puVar3;
  *(uint *)(param_1 + 0x3095) = uVar6 & 0xfeffffff;
  param_1[0x309c] = 0;
  param_1[0x3098] = "mFirstMoveWherearenPercent";
  param_1[0x3099] = 0;
  param_1[0x309a] = 0;
  *(undefined4 *)(param_1 + 0x309b) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar27);
  puVar13 = (undefined4 *)(**(code **)(*plVar27 + 0xf0))(plVar27);
  *puVar13 = 0x32;
  if ((*(uint *)(param_1 + 0x309b) >> 7 & 1) == 0) {
    param_1[0x309c] = 0;
    *(undefined4 *)(param_1 + 0x309c) = 0x32;
  }
  plVar27 = param_1 + 0x309d;
  *plVar27 = (long)puVar3;
  *(uint *)(param_1 + 0x309b) = *(uint *)(param_1 + 0x309b) & 0xfeffffff;
  param_1[0x309e] = "mMoveWherearenPercent";
  param_1[0x30a2] = 0;
  param_1[0x309f] = 0;
  param_1[0x30a0] = 0;
  *(undefined4 *)(param_1 + 0x30a1) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar27);
  puVar13 = (undefined4 *)(**(code **)(*plVar27 + 0xf0))(plVar27);
  *puVar13 = 0x14;
  if ((*(uint *)(param_1 + 0x30a1) >> 7 & 1) == 0) {
    param_1[0x30a2] = 0;
    *(undefined4 *)(param_1 + 0x30a2) = 0x14;
  }
  plVar27 = param_1 + 0x30a3;
  *plVar27 = (long)(PTR_DAT_04bb31d0 + 0x10);
  *(uint *)(param_1 + 0x30a1) = *(uint *)(param_1 + 0x30a1) & 0xfeffffff;
  param_1[0x30a8] = 0;
  param_1[0x30a4] = "mApproachStartRange";
  param_1[0x30a5] = 0;
  param_1[0x30a6] = 0;
  *(undefined4 *)(param_1 + 0x30a7) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar27);
  uVar12 = 0x42480000;
  if ((*(uint *)(param_1 + 0x30a7) & 0x800) != 0) {
    uVar12 = 0x3f5f66f3;
  }
  puVar13 = (undefined4 *)(**(code **)(*plVar27 + 0xf0))(plVar27);
  *puVar13 = uVar12;
  uVar6 = *(uint *)(param_1 + 0x30a7);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x30a8] = 0;
    uVar12 = 0x42480000;
    if ((uVar6 & 0x800) != 0) {
      uVar12 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x30a8) = uVar12;
  }
  puVar15 = param_1 + 0x30a9;
  *(uint *)(param_1 + 0x30a7) = uVar6 & 0xfeffffff;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  pcStack_d8 = "Npc";
  pcStack_e8 = "NpcWherearenCeremonyParam_RVer_20000";
  local_f0 = puVar3;
  local_e0 = puVar3;
  FUN_00751ec0(puVar15,&local_e0,&local_f0,0);
  local_90 = 0;
  param_1[0x30a9] = &PTR_FUN_04a723b0;
  puVar11 = PTR_DAT_04bb2150;
  pcStack_b8 = "mSchoolSNpcPos";
  puStack_a8 = &DAT_0406d73e;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_0083fdf0(param_1 + 0x30c1,&local_c0,PTR_DAT_04bb2150,puVar15);
  pcStack_b8 = "mSchoolNNpcPos";
  local_90 = 0;
  puStack_a8 = &DAT_040ff633;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_020bc2a0(param_1 + 0x30ec,&local_c0,puVar15);
  pcStack_b8 = "mHospitalSNpcPos";
  local_90 = 0;
  puStack_a8 = &DAT_04077be6;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_0083fdf0(param_1 + 0x3127,&local_c0,puVar11,puVar15);
  pcStack_b8 = "mHospitalNNpcPos";
  local_90 = 0;
  puStack_a8 = &DAT_0407cd25;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_020bc2a0(param_1 + 0x3152,&local_c0,puVar15);
  pcStack_b8 = "mRestaurantSNpcPos";
  local_90 = 0;
  puStack_a8 = &DAT_040dab0b;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_0083fdf0(param_1 + 0x318d,&local_c0,puVar11,puVar15);
  pcStack_b8 = "mRestaurantNNpcPos";
  local_90 = 0;
  puStack_a8 = &DAT_040a6d09;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_0086384c(param_1 + 0x31b8,&local_c0,puVar11,puVar15);
  pcStack_b8 = "mCafeSNpcPos";
  local_90 = 0;
  puStack_a8 = &DAT_04068374;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_0083fdf0(param_1 + 0x3203,&local_c0,puVar11,puVar15);
  pcStack_b8 = "mCafeNNpcPos";
  local_90 = 0;
  puStack_a8 = &DAT_040e5364;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_020bc2a0(param_1 + 0x322e,&local_c0,puVar15);
  pcStack_b8 = "mTailorSNpcPos";
  local_90 = 0;
  puStack_a8 = &DAT_040ac028;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_0083fdf0(param_1 + 0x3269,&local_c0,puVar11,puVar15);
  pcStack_b8 = "mTailorNNpcPos";
  local_90 = 0;
  puStack_a8 = &DAT_040e5395;
  pcStack_98 = "Min=0.0f,Max=1000.0f";
  local_c0 = puVar3;
  local_b0 = puVar3;
  local_a0 = puVar3;
  FUN_020bc2a0(param_1 + 0x3294,&local_c0,puVar15);
  puVar15 = (undefined8 *)((long)param_1 + 0x19694);
  *(undefined1 *)(param_1 + 0x32cf) = 0;
  *(undefined4 *)((long)param_1 + 0x1967c) = 0;
  param_1[0x32d1] = puVar15;
  *(undefined4 *)(param_1 + 0x32d2) = 0x20;
  *(undefined1 *)((long)param_1 + 0x196b3) = 0;
  if (puVar15 != &DAT_0407ebb1) {
    *(undefined1 *)puVar15 = 0;
  }
  plVar27 = param_1 + 0x32dc;
  *plVar27 = (long)(param_1 + 0x32dd);
  param_1[0x32d0] = puVar1 + 0x10;
  *(undefined1 *)(param_1 + 0x32d7) = 0;
  param_1[0x32f7] = 0;
  param_1[0x32f6] = param_1 + 0x32f7;
  param_1[0x32f5] = param_1 + 0x32f6;
  param_1[0x32f4] = param_1 + 0x32f5;
  param_1[0x32f3] = param_1 + 0x32f4;
  param_1[0x32d8] = 0;
  param_1[0x32d9] = 0;
  param_1[0x32f2] = param_1 + 0x32f3;
  param_1[0x32f1] = param_1 + 0x32f2;
  param_1[0x32f0] = param_1 + 0x32f1;
  param_1[0x32ef] = param_1 + 0x32f0;
  param_1[0x32da] = plVar27;
  param_1[0x32db] = plVar27;
  param_1[0x32ee] = param_1 + 0x32ef;
  param_1[0x32ed] = param_1 + 0x32ee;
  param_1[0x32ec] = param_1 + 0x32ed;
  param_1[0x32eb] = param_1 + 0x32ec;
  param_1[0x32ea] = param_1 + 0x32eb;
  param_1[0x32e9] = param_1 + 0x32ea;
  param_1[0x32e8] = param_1 + 0x32e9;
  param_1[0x32e7] = param_1 + 0x32e8;
  param_1[0x32e6] = param_1 + 0x32e7;
  param_1[0x32e5] = param_1 + 0x32e6;
  param_1[0x32e4] = param_1 + 0x32e5;
  param_1[0x32e3] = param_1 + 0x32e4;
  param_1[0x32e2] = param_1 + 0x32e3;
  param_1[0x32e1] = param_1 + 0x32e2;
  param_1[0x32e0] = param_1 + 0x32e1;
  param_1[0x32df] = param_1 + 0x32e0;
  param_1[0x32de] = param_1 + 0x32df;
  param_1[0x32dd] = param_1 + 0x32de;
  if (param_1 + 0x32f8 != (undefined8 *)0x0) {
    param_1[0x32d8] = 0x1c00000000;
    param_1[0x32d9] = param_1 + 0x32f8;
  }
  pcVar4 = (char *)((long)param_1 + 0x198b4);
  param_1[0x3315] = pcVar4;
  *(undefined4 *)(param_1 + 0x3316) = 0x40;
  *(undefined1 *)((long)param_1 + 0x198f3) = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  uVar10 = s_Obj_RcoMachine_AmiiboCall_04097311._16_8_;
  uVar9 = s_Obj_RcoMachine_AmiiboCall_04097311._8_8_;
  uVar8 = s_Obj_RcoMachine_AmiiboCall_04097311._0_8_;
  if (pcVar4 != "Obj_RcoMachine_AmiiboCall") {
    *(undefined1 *)((long)param_1 + 0x198cc) = 0x6c;
    *(undefined1 *)((long)param_1 + 0x198cd) = 0;
    *(undefined8 *)pcVar4 = uVar8;
    *(undefined8 *)((long)param_1 + 0x198bc) = uVar9;
    *(undefined8 *)((long)param_1 + 0x198c4) = uVar10;
  }
  *(undefined1 *)(param_1 + 0x331f) = 0;
  param_1[0x3314] = puVar1 + 0x10;
  *(undefined8 *)((long)param_1 + 0x198fc) = 0;
  *(undefined8 *)((long)param_1 + 0x19904) = 0;
  *(undefined8 *)((long)param_1 + 0x1990c) = 0;
  *(undefined1 *)((long)param_1 + 0x19914) = 0;
  param_1[0x3323] = 0;
  param_1[0x3324] = 0;
  param_1[0x3325] = 0;
  param_1[0x3326] = 0;
  param_1[0x3327] = 0;
  param_1[0x3328] = 0;
  if (0 < *(int *)(param_1 + 0x171)) {
    lVar17 = 0;
    puVar15 = (undefined8 *)param_1[0x173];
    do {
      puVar19 = *(undefined8 **)(param_1[0x172] + lVar17 * 8);
      lVar17 = lVar17 + 1;
      *puVar19 = puVar15;
      param_1[0x173] = puVar19;
      puVar15 = puVar19;
    } while (lVar17 < *(int *)(param_1 + 0x171));
  }
  *(undefined4 *)(param_1 + 0x171) = 0;
  return;
}

