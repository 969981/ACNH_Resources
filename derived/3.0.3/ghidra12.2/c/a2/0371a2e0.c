
void FUN_0371a2e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  ushort uVar16;
  
  param_1[0x10] = 0;
  param_1[0xf] = param_1 + 0x10;
  param_1[0xe] = param_1 + 0xf;
  param_1[0xd] = param_1 + 0xe;
  param_1[0xc] = param_1 + 0xd;
  param_1[0xb] = param_1 + 0xc;
  param_1[10] = param_1 + 0xb;
  param_1[9] = param_1 + 10;
  param_1[8] = param_1 + 9;
  param_1[7] = param_1 + 8;
  puVar10 = param_1 + 6;
  *puVar10 = param_1 + 7;
  *param_1 = &PTR_FUN_04b45f90;
  param_1[1] = &PTR_LAB_04a74f20;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = puVar10;
  param_1[5] = puVar10;
  if (param_1 + 0x11 != (undefined8 *)0x0) {
    iVar14 = 0;
    iVar11 = 0;
    param_1[3] = param_1 + 0x11;
    *(undefined4 *)((long)param_1 + 0x14) = 0xb;
    do {
      if (iVar14 < *(int *)((long)param_1 + 0x14)) {
        piVar15 = (int *)param_1[4];
        if (piVar15 != (int *)0x0) {
          param_1[4] = *(undefined8 *)piVar15;
        }
        *piVar15 = iVar11;
        iVar14 = *(int *)(param_1 + 2);
        if (iVar14 < *(int *)((long)param_1 + 0x14)) {
          *(int **)(param_1[3] + (long)iVar14 * 8) = piVar15;
          iVar14 = *(int *)(param_1 + 2) + 1;
          *(int *)(param_1 + 2) = iVar14;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0xb);
  }
  param_1[0x1d0] = 0;
  param_1[0x20] = param_1 + 0x44;
  param_1[0x44] = param_1 + 0x68;
  param_1[0x68] = param_1 + 0x8c;
  param_1[0x8c] = param_1 + 0xb0;
  param_1[0xb0] = param_1 + 0xd4;
  param_1[0xd4] = param_1 + 0xf8;
  param_1[0xf8] = param_1 + 0x11c;
  param_1[0x11c] = param_1 + 0x140;
  param_1[0x140] = param_1 + 0x164;
  param_1[0x164] = param_1 + 0x188;
  param_1[0x188] = param_1 + 0x1ac;
  param_1[0x1ac] = param_1 + 0x1d0;
  param_1[0x1e] = param_1 + 0x20;
  param_1[0x1f] = param_1 + 0x20;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (param_1 + 500 != (undefined8 *)0x0) {
    param_1[0x1d] = param_1 + 500;
    *(undefined4 *)((long)param_1 + 0xe4) = 0xd;
  }
  param_1[0x202] = 0;
  param_1[0x201] = 0;
  param_1[0x205] = param_1 + 0x207;
  puVar10 = param_1 + 0x155d;
  param_1[0x203] = param_1 + 0x205;
  param_1[0x21d] = 0;
  param_1[0x207] = param_1 + 0x209;
  param_1[0x204] = param_1 + 0x205;
  param_1[0x209] = param_1 + 0x20b;
  param_1[0x20b] = param_1 + 0x20d;
  param_1[0x20d] = param_1 + 0x20f;
  param_1[0x20f] = param_1 + 0x211;
  param_1[0x211] = param_1 + 0x213;
  param_1[0x213] = param_1 + 0x215;
  param_1[0x215] = param_1 + 0x217;
  param_1[0x217] = param_1 + 0x219;
  param_1[0x219] = param_1 + 0x21b;
  param_1[0x21b] = param_1 + 0x21d;
  if (param_1 + 0x21f != (undefined8 *)0x0) {
    param_1[0x202] = param_1 + 0x21f;
    *(undefined4 *)((long)param_1 + 0x100c) = 0xd;
  }
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  param_1[0x230] = 0;
  param_1[0x22c] = 0x244db4da00000003;
  puVar9 = PTR_DAT_04bb37e0;
  puVar1 = param_1 + 0x23fa;
  *(undefined2 *)(param_1 + 0x22d) = 0xffff;
  *(undefined4 *)((long)param_1 + 0x116c) = 5;
  *(undefined4 *)((long)param_1 + 0x1244) = 0;
  uVar6 = *(undefined2 *)puVar9;
  uVar4 = puVar9[2];
  param_1[0x27b] = 0;
  *(undefined2 *)(param_1 + 0x231) = uVar6;
  *(undefined2 *)(param_1 + 0x232) = uVar6;
  *(undefined2 *)(param_1 + 0x233) = uVar6;
  *(undefined2 *)(param_1 + 0x234) = uVar6;
  *(undefined2 *)(param_1 + 0x235) = uVar6;
  *(undefined2 *)(param_1 + 0x236) = uVar6;
  *(undefined2 *)(param_1 + 0x237) = uVar6;
  *(undefined2 *)(param_1 + 0x238) = uVar6;
  *(undefined2 *)(param_1 + 0x239) = uVar6;
  *(undefined2 *)(param_1 + 0x23a) = uVar6;
  *(undefined2 *)(param_1 + 0x23b) = uVar6;
  *(undefined2 *)(param_1 + 0x23c) = uVar6;
  *(undefined2 *)(param_1 + 0x23d) = uVar6;
  *(undefined2 *)(param_1 + 0x23e) = uVar6;
  *(undefined2 *)(param_1 + 0x23f) = uVar6;
  *(undefined2 *)(param_1 + 0x240) = uVar6;
  *(undefined2 *)(param_1 + 0x241) = uVar6;
  *(undefined2 *)(param_1 + 0x242) = uVar6;
  *(undefined8 *)((long)param_1 + 0x121c) = 0;
  *(undefined1 *)((long)param_1 + 0x118a) = uVar4;
  uVar5 = puVar9[3];
  *(undefined1 *)((long)param_1 + 0x118b) = uVar5;
  uVar3 = *(undefined4 *)(puVar9 + 4);
  *(undefined1 *)((long)param_1 + 0x1192) = uVar4;
  *(undefined1 *)((long)param_1 + 0x119a) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11a2) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11aa) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11b2) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11ba) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11c2) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11ca) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11d2) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11da) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11e2) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11ea) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11f2) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11fa) = uVar4;
  *(undefined1 *)((long)param_1 + 0x1202) = uVar4;
  *(undefined1 *)((long)param_1 + 0x120a) = uVar4;
  *(undefined1 *)((long)param_1 + 0x1212) = uVar4;
  *(undefined1 *)((long)param_1 + 0x1193) = uVar5;
  *(undefined1 *)((long)param_1 + 0x119b) = uVar5;
  *(undefined4 *)((long)param_1 + 0x118c) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1194) = uVar3;
  *(undefined4 *)((long)param_1 + 0x119c) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11a3) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11a4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11ab) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11ac) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11b3) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11b4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11bb) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11bc) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11c3) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11c4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11cb) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11cc) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11d3) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11d4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11db) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11dc) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11e3) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11e4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11eb) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11ec) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11f3) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11f4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11fb) = uVar5;
  *(undefined4 *)((long)param_1 + 0x11fc) = uVar3;
  *(undefined1 *)((long)param_1 + 0x1203) = uVar5;
  *(undefined4 *)((long)param_1 + 0x1204) = uVar3;
  *(undefined1 *)((long)param_1 + 0x120b) = uVar5;
  *(undefined4 *)((long)param_1 + 0x120c) = uVar3;
  *(undefined1 *)((long)param_1 + 0x1213) = uVar5;
  *(undefined4 *)((long)param_1 + 0x1214) = uVar3;
  *(undefined1 *)(param_1 + 0x243) = 0;
  param_1[0x249] = param_1 + 0x24b;
  param_1[0x24a] = param_1 + 0x24b;
  *(undefined8 *)((long)param_1 + 0x1234) = 0;
  *(undefined8 *)((long)param_1 + 0x123c) = 0;
  *(undefined8 *)((long)param_1 + 0x1224) = 0;
  *(undefined8 *)((long)param_1 + 0x122c) = 0;
  param_1[0x24b] = param_1 + 0x24f;
  param_1[0x24f] = param_1 + 0x253;
  param_1[0x253] = param_1 + 599;
  param_1[599] = param_1 + 0x25b;
  param_1[0x25b] = param_1 + 0x25f;
  param_1[0x25f] = param_1 + 0x263;
  param_1[0x263] = param_1 + 0x267;
  param_1[0x267] = param_1 + 0x26b;
  param_1[0x26b] = param_1 + 0x26f;
  param_1[0x26f] = param_1 + 0x273;
  param_1[0x273] = param_1 + 0x277;
  param_1[0x277] = param_1 + 0x27b;
  if (param_1 + 0x27f != (undefined8 *)0x0) {
    param_1[0x248] = param_1 + 0x27f;
    *(undefined4 *)((long)param_1 + 0x123c) = 0xd;
  }
  *(undefined4 *)(param_1 + 0x28d) = 0;
  param_1[0x28c] = 0;
  *(undefined8 *)((long)param_1 + 0x147c) = 0x1f0000001f;
  param_1[0x28e] = 0;
  param_1[0x291] = 0x3c1;
  param_1[0x292] = param_1 + 0x298;
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  param_1[0x295] = 0;
  param_1[0x296] = puVar10;
  *(undefined1 *)(param_1 + 0x297) = 0;
  puVar12 = param_1 + 0x298;
  while( true ) {
    *(undefined4 *)((long)puVar12 + 3) = 0;
    *(undefined4 *)puVar12 = 0;
    puVar12[3] = 0;
    *(undefined1 *)(puVar12 + 4) = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    if (puVar12 + 5 == puVar10) break;
    *(undefined4 *)((long)puVar12 + 0x2b) = 0;
    *(undefined4 *)(puVar12 + 5) = 0;
    puVar12[8] = 0;
    *(undefined1 *)(puVar12 + 9) = 0;
    *(undefined4 *)(puVar12 + 10) = 0;
    *(undefined4 *)((long)puVar12 + 0x53) = 0;
    puVar12[0xd] = 0;
    *(undefined1 *)(puVar12 + 0xe) = 0;
    *(undefined4 *)(puVar12 + 0xf) = 0;
    *(undefined4 *)((long)puVar12 + 0x7b) = 0;
    *(undefined1 *)(puVar12 + 0x13) = 0;
    puVar12[0x10] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12 = puVar12 + 0x14;
  }
  *(undefined4 *)(param_1 + 0x1561) = 0x1f;
  *(undefined8 *)((long)param_1 + 0x1474) = 0xc100e100200020;
  uVar7 = *(ushort *)(param_1 + 0x28e);
  *puVar10 = &PTR_LAB_0494b1e0;
  param_1[0x155e] = 0x1f000003c1;
  param_1[0x1562] = 0;
  param_1[0x1563] = 0;
  param_1[0x1564] = 0;
  param_1[0x1565] = 0;
  uVar8 = *(ushort *)((long)param_1 + 0x1472);
  param_1[0x155f] = param_1 + 0x1566;
  param_1[0x1560] = 0x1fffffffff;
  uVar16 = uVar7;
  if (0xe0 < uVar7) {
    uVar16 = 0xe1;
  }
  uVar2 = 0x20;
  if (0x1f < uVar7) {
    uVar2 = uVar16;
  }
  *(ushort *)(param_1 + 0x28e) = uVar2;
  uVar16 = uVar8;
  if (0xc0 < uVar8) {
    uVar16 = 0xc1;
  }
  uVar7 = 0x20;
  if (0x1f < uVar8) {
    uVar7 = uVar16;
  }
  *(ushort *)((long)param_1 + 0x1472) = uVar7;
  memset(param_1 + 0x1576,0,0x3c1);
  *(undefined4 *)(param_1 + 0x15f3) = 0x1f;
  puVar9 = PTR_DAT_04bb7f30;
  *(undefined8 *)((long)param_1 + 0xb024) = 0x170000001f;
  param_1[0x1603] = 0;
  param_1[0x15f1] = (long)param_1 + 0xaf9c;
  param_1[0x15f2] = 0x1fffffffff;
  param_1[0x1606] = 0x2c9;
  param_1[0x1607] = param_1 + 0x160d;
  param_1[0x160a] = 0;
  param_1[0x160b] = puVar1;
  *(undefined1 *)(param_1 + 0x160c) = 0;
  param_1[0x15ef] = puVar9 + 0x10;
  param_1[0x15f0] = 0x1f000003c1;
  param_1[0x1608] = 0;
  param_1[0x1609] = 0;
  puVar10 = param_1 + 0x160d;
  while( true ) {
    *(undefined4 *)((long)puVar10 + 3) = 0;
    *(undefined4 *)puVar10 = 0;
    puVar10[3] = 0;
    *(undefined1 *)(puVar10 + 4) = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    if (puVar10 + 5 == puVar1) break;
    *(undefined4 *)((long)puVar10 + 0x2b) = 0;
    *(undefined4 *)(puVar10 + 5) = 0;
    puVar10[8] = 0;
    *(undefined1 *)(puVar10 + 9) = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    *(undefined4 *)((long)puVar10 + 0x53) = 0;
    puVar10[0xd] = 0;
    *(undefined1 *)(puVar10 + 0xe) = 0;
    *(undefined4 *)(puVar10 + 0xf) = 0;
    *(undefined4 *)((long)puVar10 + 0x7b) = 0;
    *(undefined1 *)(puVar10 + 0x13) = 0;
    puVar10[0x10] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10 = puVar10 + 0x14;
  }
  param_1[0x23ff] = 0;
  param_1[0x2400] = 0;
  param_1[0x2401] = 0;
  param_1[0x23fc] = param_1 + 0x2403;
  param_1[0x23fd] = 0x1fffffffff;
  uVar7 = *(ushort *)(param_1 + 0x1603);
  param_1[0x2402] = 0;
  uVar8 = *(ushort *)((long)param_1 + 0xb01a);
  *puVar1 = &PTR_LAB_04b45fb0;
  param_1[0x23fb] = 0x17000002c9;
  uVar16 = uVar7;
  if (0xe0 < uVar7) {
    uVar16 = 0xe1;
  }
  uVar2 = 0x20;
  if (0x1f < uVar7) {
    uVar2 = uVar16;
  }
  *(undefined8 *)((long)param_1 + 0xb01c) = 0xc900e100200020;
  uVar16 = uVar8;
  if (200 < uVar8) {
    uVar16 = 0xc9;
  }
  uVar7 = 0x20;
  if (0x1f < uVar8) {
    uVar7 = uVar16;
  }
  *(undefined4 *)(param_1 + 0x23fe) = 0x17;
  *(ushort *)(param_1 + 0x1603) = uVar2;
  *(ushort *)((long)param_1 + 0xb01a) = uVar7;
  memset(param_1 + 0x240f,0,0x2c9);
  param_1[0x2469] = &PTR_LAB_04b45fd0;
  param_1[0x246a] = 0x17000002c9;
  param_1[0x246b] = (long)param_1 + 0x1236c;
  param_1[0x246c] = 0x1fffffffff;
  puVar10 = param_1 + 0x2486;
  *(undefined4 *)(param_1 + 0x2479) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x246d) = 0x17;
  param_1[0x247c] = param_1 + 0x247e;
  param_1[0x247a] = 0;
  param_1[0x247b] = 0;
  for (lVar13 = 0x1f2; puVar10[-8] = puVar10 + -4, lVar13 != 0; lVar13 = lVar13 + -2) {
    puVar10[-4] = puVar10;
    puVar10 = puVar10 + 8;
  }
  param_1[0x247d] = param_1 + 0x247e;
  param_1[0x2c4a] = 0;
  if (param_1 + 0x2c4e != (undefined8 *)0x0) {
    param_1[0x247a] = 0x1f400000000;
    param_1[0x247b] = param_1 + 0x2c4e;
  }
  *(undefined2 *)(param_1 + 0x2e42) = 0;
  param_1[0x28c] = 0;
  *(undefined4 *)(param_1 + 0x28d) = 0;
  return;
}

