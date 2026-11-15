
/* WARNING: Removing unreachable block (ram,0x01e610e8) */
/* WARNING: Removing unreachable block (ram,0x01e610d0) */
/* WARNING: Removing unreachable block (ram,0x01e61104) */

void FUN_01e608f0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  short sVar6;
  undefined *puVar7;
  undefined1 uVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  FUN_01e9dbb0();
  *param_1 = &PTR_LAB_04a5de78;
  FUN_02099284(param_1 + 0x15e7,param_1,param_1 + 0x1de0);
  param_1[0x166e] = PTR_DAT_04bc24c0 + 0x10;
  param_1[0x166f] = 0;
  FUN_01ffc430(param_1 + 0x1670,param_1[1]);
  param_1[0x1d84] = param_1;
  FUN_02001978(param_1 + 0x1d85);
  *(undefined4 *)(param_1 + 0x1ddf) = 0;
  param_1[0x166f] = param_1 + 0x1670;
  FUN_02191da8(param_1 + 0x1de0,param_2);
  *(undefined2 *)(param_1 + 0x24ae) = 0;
  uVar5 = *(uint *)(param_2 + 0x508);
  if (uVar5 == 0xffffffff) {
    uVar8 = 0;
  }
  else {
    lVar11 = *(long *)PTR_DAT_04bb3968 + 0xe18 + (ulong)uVar5 * 0x28;
    if (9 < uVar5) {
      lVar11 = *(long *)PTR_DAT_04bb3968 + 0xe18;
    }
    uVar8 = *(undefined1 *)(lVar11 + 10);
  }
  param_1[0x24ba] = 0xfffe;
  *(undefined1 *)((long)param_1 + 0x12572) = uVar8;
  param_1[0x24b0] = 0;
  param_1[0x24b1] = 0;
  puVar7 = PTR_DAT_04bc1558;
  param_1[0x24b2] = 0;
  puVar1 = PTR_DAT_04bbc1a0;
  puVar2 = PTR_DAT_04bb2010;
  *(undefined1 *)((long)param_1 + 0x125cc) = 0;
  puVar1 = puVar1 + 0x10;
  puVar2 = puVar2 + 0x10;
  param_1[0x24af] = puVar7 + 0x10;
  piVar3 = (int *)(param_1 + 0x25ea);
  param_1[0x24b3] = puVar1;
  param_1[0x24b4] = puVar2;
  param_1[0x24b5] = 0;
  param_1[0x24b6] = puVar2;
  param_1[0x24b7] = 0;
  param_1[0x24b8] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x24b9) = 0xffffffff;
  FUN_0277d4ac(param_1 + 0x24ba);
  *(undefined1 *)(param_1 + 0x24bc) = 0;
  *(undefined8 *)((long)param_1 + 0x125e4) = 0;
  param_1[0x24bb] = 0x3bf800000;
  param_1[0x24c3] = 0;
  param_1[0x24c4] = 0;
  param_1[0x24c1] = 0;
  param_1[0x24c5] = 0;
  param_1[0x24c2] = &PTR_LAB_04a5e230;
  param_1[0x24c9] = 0;
  *(undefined4 *)((long)param_1 + 0x125ec) = 0;
  *(undefined4 *)(param_1 + 0x24e3) = 1;
  *(undefined8 *)((long)param_1 + 0x1271c) = 0xfffe;
  param_1[0x24bf] = 0;
  param_1[0x24c0] = 0;
  param_1[0x24be] = &PTR_LAB_04a5e1e0;
  param_1[0x24ca] = &PTR_LAB_04a5e1e0;
  param_1[0x24ce] = &PTR_LAB_04a5e2f8;
  param_1[0x24cf] = 0;
  param_1[0x24d2] = &PTR_LAB_04a5e348;
  param_1[0x24d3] = 0;
  param_1[0x24d6] = &PTR_LAB_04a5e348;
  param_1[0x24d7] = 0;
  param_1[0x24da] = &PTR_LAB_04a5e348;
  param_1[0x24db] = 0;
  *(undefined4 *)(param_1 + 0x24e0) = 0;
  param_1[0x24c7] = 0;
  param_1[0x24c8] = 0;
  param_1[0x24c6] = &PTR_LAB_04a5e280;
  param_1[0x24cb] = 0;
  param_1[0x24de] = 0;
  param_1[0x24df] = 0;
  *(undefined4 *)((long)param_1 + 0x12704) = 0x10;
  param_1[0x24cc] = 0;
  param_1[0x24cd] = 0;
  param_1[0x24d0] = 0;
  param_1[0x24d1] = 0;
  param_1[0x24d4] = 0;
  param_1[0x24d5] = 0;
  param_1[0x24d8] = 0;
  param_1[0x24d9] = 0;
  param_1[0x24dc] = 0;
  param_1[0x24dd] = 0;
  param_1[0x24e1] = 0;
  param_1[0x24e2] = 0;
  FUN_0277d4ac((undefined8 *)((long)param_1 + 0x1271c));
  piVar9 = (int *)(param_1 + 0x24f0);
  piVar9[0] = 0;
  piVar9[1] = 0;
  *(undefined4 *)((long)param_1 + 0x12724) = 1;
  param_1[0x24fd] = 0;
  param_1[0x24fc] = param_1 + 0x24fd;
  param_1[0x24e5] = puVar2;
  param_1[0x24e6] = 0;
  param_1[0x24fb] = param_1 + 0x24fc;
  param_1[0x24e7] = puVar2;
  param_1[0x24e8] = 0;
  param_1[0x24fa] = param_1 + 0x24fb;
  *(undefined2 *)(param_1 + 0x24ef) = 0;
  param_1[0x24f9] = param_1 + 0x24fa;
  param_1[0x24e9] = 0;
  param_1[0x24ea] = puVar1;
  param_1[0x24f8] = param_1 + 0x24f9;
  param_1[0x24eb] = puVar2;
  param_1[0x24ec] = 0;
  param_1[0x24f7] = param_1 + 0x24f8;
  param_1[0x24ed] = puVar2;
  param_1[0x24ee] = 0;
  param_1[0x24f6] = param_1 + 0x24f7;
  param_1[0x24f5] = param_1 + 0x24f6;
  puVar13 = param_1 + 0x24f4;
  *puVar13 = param_1 + 0x24f5;
  param_1[0x24f3] = puVar13;
  param_1[0x24f1] = 0;
  param_1[0x24f2] = puVar13;
  if (param_1 + 0x24fe != (undefined8 *)0x0) {
    param_1[0x24f1] = param_1 + 0x24fe;
    *(undefined4 *)((long)param_1 + 0x12784) = 10;
  }
  *(undefined4 *)(param_1 + 0x2508) = 0;
  param_1[0x2526] = param_1 + 0x252b;
  param_1[0x250b] = 0;
  param_1[0x2521] = param_1 + 0x2526;
  param_1[0x25c1] = 0;
  param_1[0x251c] = param_1 + 0x2521;
  param_1[0x2517] = param_1 + 0x251c;
  param_1[0x2509] = puVar1;
  param_1[0x250a] = puVar2;
  puVar12 = param_1 + 0x2512;
  *puVar12 = param_1 + 0x2517;
  param_1[0x252b] = param_1 + 0x2530;
  param_1[0x2530] = param_1 + 0x2535;
  puVar13 = param_1 + 0x265c;
  param_1[0x2535] = param_1 + 0x253a;
  param_1[0x253a] = param_1 + 0x253f;
  param_1[0x253f] = param_1 + 0x2544;
  param_1[0x2544] = param_1 + 0x2549;
  param_1[0x2549] = param_1 + 0x254e;
  param_1[0x254e] = param_1 + 0x2553;
  param_1[0x2553] = param_1 + 0x2558;
  param_1[0x2558] = param_1 + 0x255d;
  param_1[0x255d] = param_1 + 0x2562;
  param_1[0x2562] = param_1 + 0x2567;
  param_1[0x2567] = param_1 + 0x256c;
  param_1[0x256c] = param_1 + 0x2571;
  param_1[0x2571] = param_1 + 0x2576;
  param_1[0x2511] = puVar12;
  param_1[0x2576] = param_1 + 0x257b;
  param_1[0x257b] = param_1 + 0x2580;
  param_1[0x2580] = param_1 + 0x2585;
  piVar10 = (int *)(param_1 + 0x250e);
  piVar10[0] = 0;
  piVar10[1] = 0;
  param_1[0x2585] = param_1 + 0x258a;
  param_1[0x258a] = param_1 + 0x258f;
  param_1[0x258f] = param_1 + 0x2594;
  param_1[0x2594] = param_1 + 0x2599;
  param_1[0x2599] = param_1 + 0x259e;
  param_1[0x259e] = param_1 + 0x25a3;
  param_1[0x25a3] = param_1 + 0x25a8;
  param_1[0x25a8] = param_1 + 0x25ad;
  param_1[0x25ad] = param_1 + 0x25b2;
  param_1[0x25b2] = param_1 + 0x25b7;
  param_1[0x25b7] = param_1 + 0x25bc;
  param_1[0x25bc] = param_1 + 0x25c1;
  param_1[0x250f] = 0;
  param_1[0x2510] = puVar12;
  param_1[0x250c] = puVar2;
  param_1[0x250d] = 0;
  if (param_1 + 0x25c6 != (undefined8 *)0x0) {
    param_1[0x250e] = 0x2400000000;
    param_1[0x250f] = param_1 + 0x25c6;
  }
  param_1[0x2634] = 0;
  param_1[0x2608] = param_1 + 0x260a;
  param_1[0x2606] = param_1 + 0x2608;
  piVar3[0] = 0;
  piVar3[1] = 0;
  param_1[0x25eb] = 0;
  param_1[0x2604] = param_1 + 0x2606;
  param_1[0x2602] = param_1 + 0x2604;
  param_1[0x2600] = param_1 + 0x2602;
  param_1[0x25fe] = param_1 + 0x2600;
  param_1[0x260a] = param_1 + 0x260c;
  param_1[0x25fc] = param_1 + 0x25fe;
  param_1[0x260c] = param_1 + 0x260e;
  param_1[0x25fa] = param_1 + 0x25fc;
  param_1[0x260e] = param_1 + 0x2610;
  param_1[0x25f8] = param_1 + 0x25fa;
  param_1[0x2610] = param_1 + 0x2612;
  param_1[0x25f6] = param_1 + 0x25f8;
  param_1[0x2612] = param_1 + 0x2614;
  param_1[0x25f4] = param_1 + 0x25f6;
  param_1[0x2614] = param_1 + 0x2616;
  param_1[0x25f2] = param_1 + 0x25f4;
  param_1[0x2616] = param_1 + 0x2618;
  param_1[0x25f0] = param_1 + 0x25f2;
  param_1[0x2618] = param_1 + 0x261a;
  param_1[0x261a] = param_1 + 0x261c;
  param_1[0x261c] = param_1 + 0x261e;
  param_1[0x261e] = param_1 + 0x2620;
  param_1[0x2620] = param_1 + 0x2622;
  param_1[0x2622] = param_1 + 0x2624;
  param_1[0x2624] = param_1 + 0x2626;
  param_1[0x2626] = param_1 + 0x2628;
  param_1[0x2628] = param_1 + 0x262a;
  param_1[0x262a] = param_1 + 0x262c;
  param_1[0x262c] = param_1 + 0x262e;
  param_1[0x262e] = param_1 + 0x2630;
  param_1[0x2630] = param_1 + 0x2632;
  puVar12 = param_1 + 0x25ee;
  *puVar12 = param_1 + 0x25f0;
  param_1[0x2632] = param_1 + 0x2634;
  param_1[0x25ec] = puVar12;
  param_1[0x25ed] = puVar12;
  if (param_1 + 0x2636 != (undefined8 *)0x0) {
    piVar3[0] = 0;
    piVar3[1] = 0x24;
    param_1[0x25eb] = param_1 + 0x2636;
  }
  *(undefined2 *)(param_1 + 0x265a) = 0;
  *(undefined1 *)(param_1 + 0x265b) = 0xff;
  *puVar13 = param_1;
  param_1[0x265d] = puVar13;
  param_1[0x265e] = puVar13;
  param_1[0x265f] = puVar13;
  param_1[0x2660] = puVar13;
  param_1[0x2661] = puVar13;
  param_1[0x2662] = puVar13;
  param_1[0x2663] = puVar13;
  puVar1 = PTR_DAT_04bc2758 + 0x10;
  param_1[0x2664] = puVar13;
  param_1[0x2667] = puVar1;
  param_1[0x266b] = puVar1;
  puVar1 = PTR_DAT_04bc2760 + 0x10;
  *(undefined4 *)(param_1 + 0x2665) = 0;
  param_1[0x266f] = puVar1;
  *(undefined1 *)(param_1 + 0x2677) = 0;
  param_1[0x2673] = 0;
  param_1[0x2674] = 0;
  param_1[0x2675] = 0;
  param_1[0x2676] = 0;
  puVar1 = PTR_DAT_04bbba70 + 0x10;
  *(undefined4 *)(param_1 + 0x2666) = 0;
  param_1[0x2678] = puVar1;
  puVar1 = PTR_DAT_04bbba78;
  *(undefined4 *)(param_1 + 0x2680) = 0;
  *(undefined4 *)((long)param_1 + 0x132d4) = 0;
  param_1[0x267c] = puVar1 + 0x10;
  param_1[0x15ab] = param_1[0x15ab] & 0xfffffffffffffeff;
  *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) & 0xfffffbff;
  *(byte *)((long)param_1 + 0xad54) = *(byte *)((long)param_1 + 0xad54) | 1;
  if (0 < *piVar9) {
    lVar11 = 0;
    puVar13 = (undefined8 *)param_1[0x24f2];
    do {
      puVar12 = *(undefined8 **)(param_1[0x24f1] + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *puVar12 = puVar13;
      param_1[0x24f2] = puVar12;
      puVar13 = puVar12;
    } while (lVar11 < *(int *)(param_1 + 0x24f0));
  }
  *piVar9 = 0;
  if (0 < *piVar10) {
    lVar11 = 0;
    puVar13 = (undefined8 *)param_1[0x2510];
    do {
      puVar12 = *(undefined8 **)(param_1[0x250f] + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *puVar12 = puVar13;
      param_1[0x2510] = puVar12;
      puVar13 = puVar12;
    } while (lVar11 < *(int *)(param_1 + 0x250e));
  }
  *piVar10 = 0;
  if (0 < *piVar3) {
    lVar11 = 0;
    do {
      puVar13 = *(undefined8 **)(param_1[0x25eb] + lVar11 * 8);
      (**(code **)*puVar13)(puVar13);
      lVar11 = lVar11 + 1;
      *puVar13 = param_1[0x25ec];
      param_1[0x25ec] = puVar13;
    } while (lVar11 < *piVar3);
  }
  puVar1 = PTR_DAT_04bb6298;
  *piVar3 = 0;
  puVar2 = PTR_LAB_04bc1640;
  sVar6 = *(short *)puVar1;
  if (sVar6 != -1) {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 1 & 1) != 0) {
      param_1[0x24cf] = param_1;
      param_1[0x24d0] = puVar2;
      param_1[0x24d1] = 0;
      if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
        *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x24ce;
        *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
      }
    }
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    param_1[0x24d3] = param_1;
    param_1[0x24d4] = 0x350;
    param_1[0x24d5] = 1;
    puVar1 = PTR_FUN_04bc1648;
    param_1[0x24d9] = 0;
    param_1[0x24d7] = param_1;
    param_1[0x24d8] = puVar1;
    puVar1 = PTR_LAB_04bc1650;
    param_1[0x24dd] = 0;
    param_1[0x24db] = param_1;
    param_1[0x24dc] = puVar1;
    param_1[0x158c] = param_1 + 0x24d2;
    param_1[0x1596] = param_1 + 0x24d6;
    param_1[0x1598] = param_1 + 0x24da;
    *(undefined1 *)(param_1 + 0x15ac) = 1;
  }
  return;
}

