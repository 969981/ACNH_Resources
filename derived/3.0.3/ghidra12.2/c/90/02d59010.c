
void FUN_02d59010(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  
  FUN_0306c700();
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d0] = 0;
  *(undefined4 *)((long)param_1 + 0x1694) = 0;
  *(undefined1 *)(param_1 + 0x2d2) = 1;
  *(undefined2 *)(param_1 + 0x2d3) = 0x101;
  *(undefined8 *)((long)param_1 + 0x169c) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x16ac) = 0xffffffff;
  *param_1 = &PTR_LAB_04ac0f70;
  param_1[0x2d1] = &PTR_FUN_04ac14e0;
  *(undefined8 *)((long)param_1 + 0x16a4) = 0xffffffff00000000;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d8] = 0;
  puVar1 = PTR_DAT_04bd4738 + 0x10;
  param_1[0x2d9] = puVar1;
  param_1[0x2da] = 0xffffffff;
  param_1[0x2db] = 0xffffffff;
  param_1[0x2dc] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2dd) = 0;
  *(undefined4 *)(param_1 + 0x2de) = 0;
  param_1[0x2df] = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  param_1[0x2e1] = 0;
  *(undefined4 *)(param_1 + 0x2e2) = 0;
  *(undefined1 *)((long)param_1 + 0x1714) = 0xff;
  puVar2 = PTR_DAT_04bb37e0;
  uVar3 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0x2e9) = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e5] = 0;
  param_1[0x2e4] = 0;
  *(undefined2 *)(param_1 + 0x2e3) = uVar3;
  *(undefined *)((long)param_1 + 0x171a) = puVar2[2];
  *(undefined *)((long)param_1 + 0x171b) = puVar2[3];
  *(undefined4 *)((long)param_1 + 0x171c) = *(undefined4 *)(puVar2 + 4);
  *(undefined2 *)(param_1 + 0x2e7) = 0xfffe;
  FUN_0277d4ac(param_1 + 0x2e7);
  *(undefined1 *)(param_1 + 0x2e8) = 0xff;
  *(undefined8 *)((long)param_1 + 0x1744) = 0;
  *(undefined4 *)((long)param_1 + 0x174c) = 0;
  FUN_03454a44(param_1 + 0x2d9);
  FUN_01f22b58(param_1 + 0x2ea);
  FUN_01f22b58(param_1 + 0x3b6);
  param_1[0x485] = 0;
  param_1[0x484] = 0;
  param_1[0x483] = 0;
  param_1[0x482] = 0;
  puVar4 = PTR_DAT_04bb3170;
  FUN_007ef010(param_1 + 0x486,PTR_DAT_04bb3170);
  *(undefined8 *)((long)param_1 + 0x2434) = 0x100ffffffff;
  FUN_007ef010((long)param_1 + 0x243c,puVar4);
  param_1[0x488] = 0xffffffffffffffff;
  param_1[0x489] = 0;
  param_1[0x48a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48b) = 0xffffffff;
  puVar2 = PTR_DAT_04bbba70 + 0x10;
  *(undefined4 *)(param_1 + 0x494) = 1;
  param_1[0x495] = 0;
  param_1[0x496] = 0;
  param_1[0x497] = 0;
  param_1[0x499] = 0;
  param_1[0x49c] = 0;
  param_1[0x49b] = 0;
  param_1[0x4a2] = 0;
  param_1[0x48c] = puVar2;
  param_1[0x490] = puVar2;
  uVar3 = *(undefined2 *)puVar4;
  *(undefined2 *)(param_1 + 0x49a) = 0;
  *(undefined1 *)(param_1 + 0x4a1) = 1;
  *(undefined2 *)(param_1 + 0x498) = uVar3;
  param_1[0x49d] = &PTR_LAB_04ac1238;
  puVar2 = PTR_DAT_04bcb4d0 + 0x10;
  *(undefined4 *)((long)param_1 + 0x2544) = 0;
  *(undefined1 *)(param_1 + 0x4a8) = 0;
  param_1[0x4a7] = 0;
  param_1[0x4a6] = 0;
  param_1[0x4a5] = 0;
  param_1[0x4a4] = 0;
  *(undefined4 *)(param_1 + 0x4a9) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4ae) = 0;
  param_1[0x4ad] = 0;
  param_1[0x4ac] = 0;
  param_1[0x4ab] = 0;
  param_1[0x4a3] = puVar2;
  bVar10 = *PTR_DAT_04bb32e0;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  param_1[0x4aa] = 0;
  *(undefined1 *)((long)param_1 + 0x2575) = 1;
  *(byte *)((long)param_1 + 0x2574) = bVar10;
  FUN_033fc620(param_1 + 0x4a3,0);
  *(undefined1 *)(param_1 + 0x4af) = 0;
  param_1[0x4b1] = 0xffffffff;
  param_1[0x4b0] = puVar1;
  param_1[0x4b9] = (long)param_1 + 0x25dc;
  param_1[0x4b2] = 0xffffffff;
  param_1[0x4b3] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x4b5) = 0;
  param_1[0x4b6] = 0;
  *(undefined4 *)(param_1 + 0x4b7) = 0;
  param_1[0x4b8] = 0;
  param_1[0x4bb] = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  param_1[0x4ba] = 2;
  *(undefined4 *)(param_1 + 0x4bd) = 0;
  *(undefined1 *)((long)param_1 + 0x25ec) = 0;
  param_1[0x4be] = 0;
  *(undefined1 *)(param_1 + 0x4bf) = 0;
  *(undefined4 *)((long)param_1 + 0x25fc) = 0;
  puVar1 = PTR_DAT_04bbba78 + 0x10;
  param_1[0x4c0] = PTR_DAT_04bc61c0 + 0x10;
  uVar3 = *(undefined2 *)puVar4;
  param_1[0x4c1] = puVar1;
  *(undefined1 *)((long)param_1 + 0x262a) = 0xff;
  *(undefined4 *)((long)param_1 + 0x262c) = 0;
  *(undefined1 *)(param_1 + 0x4c6) = 1;
  param_1[0x4c8] = puVar1;
  *(undefined2 *)(param_1 + 0x4c5) = uVar3;
  puVar2 = PTR_DAT_04bc5c38 + 0x10;
  *(undefined2 *)(param_1 + 0x4cc) = uVar3;
  *(undefined1 *)((long)param_1 + 0x2662) = 0xff;
  *(undefined4 *)((long)param_1 + 0x2664) = 0;
  param_1[0x4c7] = puVar2;
  puVar2 = PTR_DAT_04bc61b8 + 0x10;
  param_1[0x4ce] = puVar1;
  *(undefined2 *)(param_1 + 0x4d2) = uVar3;
  *(undefined1 *)((long)param_1 + 0x2692) = 0xff;
  *(undefined4 *)((long)param_1 + 0x2694) = 0;
  param_1[0x4d4] = puVar1;
  param_1[0x4cd] = puVar2;
  puVar1 = PTR_DAT_04bc5c40 + 0x10;
  *(undefined2 *)(param_1 + 0x4d8) = uVar3;
  *(undefined1 *)((long)param_1 + 0x26c2) = 0xff;
  param_1[0x4dd] = 0;
  param_1[0x4dc] = 0;
  param_1[0x519] = 0;
  param_1[0x4d3] = puVar1;
  *(undefined8 *)((long)param_1 + 0x26c4) = 0x300000000;
  *(undefined8 *)((long)param_1 + 0x26cc) = 0x300000003;
  *(undefined4 *)((long)param_1 + 0x26d4) = 3;
  *(undefined4 *)((long)param_1 + 0x26db) = 0;
  *(undefined4 *)(param_1 + 0x4db) = 0;
  param_1[0x4de] = param_1 + 0x4e0;
  param_1[0x4df] = param_1 + 0x4e0;
  param_1[0x4e0] = param_1 + 0x4e3;
  param_1[0x4e3] = param_1 + 0x4e6;
  param_1[0x4e6] = param_1 + 0x4e9;
  param_1[0x4e9] = param_1 + 0x4ec;
  param_1[0x4ec] = param_1 + 0x4ef;
  param_1[0x4ef] = param_1 + 0x4f2;
  param_1[0x4f2] = param_1 + 0x4f5;
  param_1[0x4f5] = param_1 + 0x4f8;
  param_1[0x4f8] = param_1 + 0x4fb;
  param_1[0x4fb] = param_1 + 0x4fe;
  param_1[0x4fe] = param_1 + 0x501;
  param_1[0x501] = param_1 + 0x504;
  param_1[0x504] = param_1 + 0x507;
  param_1[0x507] = param_1 + 0x50a;
  param_1[0x50a] = param_1 + 0x50d;
  param_1[0x50d] = param_1 + 0x510;
  param_1[0x510] = param_1 + 0x513;
  param_1[0x513] = param_1 + 0x516;
  param_1[0x516] = param_1 + 0x519;
  if (param_1 + 0x51c != (undefined8 *)0x0) {
    param_1[0x4dd] = param_1 + 0x51c;
    param_1[0x4dc] = 0x1400000000;
  }
  param_1[0x531] = 0;
  puVar8 = param_1 + 0x538;
  param_1[0x530] = 0;
  lVar9 = 0xc4;
  param_1[0x532] = param_1 + 0x534;
  while( true ) {
    puVar8[-3] = puVar8 + -2;
    puVar8[-4] = puVar8 + -3;
    puVar8[-2] = puVar8 + -1;
    if (lVar9 == 0) break;
    puVar8[-1] = puVar8;
    puVar8 = puVar8 + 4;
    lVar9 = lVar9 + -4;
  }
  param_1[0x5fb] = 0;
  param_1[0x533] = param_1 + 0x534;
  if (param_1 + 0x5fc != (undefined8 *)0x0) {
    param_1[0x531] = param_1 + 0x5fc;
    param_1[0x530] = 0xc800000000;
  }
  *(undefined2 *)(param_1 + 0x6c4) = 0;
  *(undefined1 *)((long)param_1 + 0x3622) = 0;
  if (((*PTR_DAT_04bc5c00 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc5c00), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc5bf8 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5c00);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar6 = (**(code **)*param_3)(param_3,PTR_DAT_04bc5bf8), (uVar6 & 1) != 0)) {
    *(undefined4 *)((long)param_1 + 0x241c) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)((long)param_1 + 0x2424) = *(undefined4 *)((long)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x485) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)((long)param_1 + 0x242c) = *(undefined4 *)((long)param_3 + 0x24);
    *(undefined2 *)(param_1 + 0x486) = *(undefined2 *)(param_3 + 5);
    *(undefined4 *)((long)param_1 + 0x2434) = *(undefined4 *)((long)param_3 + 0x2c);
    *(undefined1 *)(param_1 + 0x487) = *(undefined1 *)(param_3 + 6);
    *(undefined1 *)((long)param_1 + 0x2439) = *(undefined1 *)((long)param_3 + 0x31);
    *(undefined1 *)((long)param_1 + 0x243a) = *(undefined1 *)((long)param_3 + 0x32);
    *(undefined1 *)((long)param_1 + 0x243b) = *(undefined1 *)((long)param_3 + 0x33);
  }
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  if ((((*(char *)((long)param_3 + 0x31) != '\0') && (*(long *)PTR_DAT_04bb2230 != 0)) &&
      (lVar9 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x470), lVar9 != 0)) &&
     (puVar7 = *(undefined4 **)(lVar9 + 0x18), puVar7 != (undefined4 *)0x0)) {
    *puVar7 = 0;
    *(undefined1 *)(puVar7 + 1) = 0x52;
  }
  return;
}

