
void FUN_027156c0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar5 != 0) {
      param_1[4] = lVar5;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a8d730;
  lVar5 = param_1[2];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = lVar5;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  plVar7 = param_1 + 0x18;
  *plVar7 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar5;
  param_1[0xe] = &DAT_04a8f030;
  param_1[10] = param_1 + 0xe;
  param_1[0x13] = 0;
  lVar5 = lVar5 + 4;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[7] = &PTR_LAB_04a8d760;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[3] = param_1 + 0x15;
  param_1[0x16] = 0;
  param_1[0x17] = lVar5;
  param_1[0x19] = param_1 + 7;
  param_1[0x1a] = 0;
  memset(param_1 + 0x1c,0,0x1c00);
  puVar3 = PTR_DAT_04bc30e8;
  puVar1 = PTR_DAT_04bc30e8 + 0x10;
  lVar6 = -0x1c00;
  do {
    lVar2 = lVar6 + 0x70;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1d08) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1d00) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1cf8) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0x1d10) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1cf0) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1ce8) = 0;
    *(undefined **)((long)param_1 + lVar6 + 0x1ce0) = puVar1;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1d20) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1d28) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1d30) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1d38) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x1d40) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0x1d48) = 0;
    *(undefined **)((long)param_1 + lVar6 + 0x1d18) = puVar1;
    lVar6 = lVar2;
  } while (lVar2 != 0);
  param_1[0x15] = &PTR_LAB_04a8d790;
  iVar8 = 0;
  do {
    lVar6 = *plVar7;
    puVar4 = param_1 + 0x1c + (long)iVar8 * 7;
    *plVar7 = (long)puVar4;
    if (lVar6 != 0) {
      puVar4[4] = lVar6;
    }
    puVar4[2] = lVar5 + puVar4[2];
    FUN_026400e0(puVar4,lVar5);
    iVar8 = iVar8 + 1;
    lVar5 = lVar5 + 8;
  } while (iVar8 != 0x80);
  lVar5 = param_1[2];
  param_1[0x39d] = 0;
  param_1[0x3a0] = 0;
  param_1[0x3a1] = 0;
  *(undefined1 *)(param_1 + 0x3a2) = 0;
  param_1[0x39e] = lVar5 + 0x404;
  if (param_1[3] != 0) {
    param_1[0x3a0] = param_1[3];
  }
  param_1[0x3a5] = lVar5 + 0x404;
  param_1[0x3ae] = param_1 + 0x39c;
  *(undefined1 *)(param_1 + 0x3a9) = 0;
  param_1[0x39f] = param_1 + 0x3a3;
  param_1[0x3a4] = 0;
  param_1[0x3a6] = 0;
  param_1[0x3a7] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a3] = &DAT_04a8f3f0;
  param_1[0x39c] = &PTR_LAB_04a8f3c0;
  param_1[0x3ab] = 0;
  param_1[0x3ac] = lVar5 + 0x12bc;
  param_1[0x3af] = 0;
  *(undefined1 *)(param_1 + 0x3b0) = 0;
  param_1[3] = param_1 + 0x3aa;
  param_1[0x3b7] = 0;
  param_1[0x3b8] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3bc] = 0;
  param_1[0x3bd] = 0;
  param_1[0x3be] = 0;
  *(undefined1 *)(param_1 + 0x3b7) = 0;
  param_1[0x3b6] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b2] = 0;
  param_1[0x3b1] = &DAT_04a8f030;
  param_1[0x3b9] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3bc] = 0;
  param_1[0x3bd] = 0;
  *(undefined1 *)(param_1 + 0x3be) = 0;
  param_1[0x3b8] = &DAT_04a8f030;
  param_1[0x3aa] = &PTR_LAB_04a8d7c0;
  param_1[0x3ad] = param_1 + 0x3b1;
  param_1[0x3b3] = lVar5 + 0x12bc;
  FUN_026400e0();
  lVar6 = param_1[0x3ad];
  param_1[0x3ad] = param_1 + 0x3b8;
  if (lVar6 != 0) {
    param_1[0x3bc] = lVar6;
  }
  param_1[0x3ba] = param_1[0x3ba] + lVar5 + 0x12c0;
  FUN_026400e0(param_1 + 0x3b8);
  lVar6 = param_1[2];
  lVar2 = param_1[3];
  param_1[0x3c0] = 0;
  param_1[0x3c3] = 0;
  param_1[0x3c4] = 0;
  lVar5 = lVar6 + 0x12c4;
  *(undefined1 *)(param_1 + 0x3c5) = 0;
  param_1[3] = param_1 + 0x3bf;
  param_1[0x3c1] = lVar5;
  if (lVar2 != 0) {
    param_1[0x3c3] = lVar2;
  }
  param_1[0x3c7] = 0;
  param_1[0x3c9] = 0;
  param_1[0x3cc] = 0;
  param_1[0x3d3] = 0;
  param_1[0x3ca] = 0;
  param_1[0x3cb] = 0;
  *(undefined1 *)(param_1 + 0x3cc) = 0;
  param_1[0x3c6] = &DAT_04a8f030;
  param_1[0x3ce] = 0;
  param_1[0x3cf] = 0;
  param_1[0x3d0] = 0;
  param_1[0x3d1] = 0;
  param_1[0x3d2] = 0;
  *(undefined1 *)(param_1 + 0x3d3) = 0;
  param_1[0x3cd] = &DAT_04a8f030;
  param_1[0x3bf] = &PTR_LAB_04a8d7c0;
  param_1[0x3c2] = param_1 + 0x3c6;
  param_1[0x3c8] = lVar5;
  FUN_026400e0();
  lVar5 = param_1[0x3c2];
  param_1[0x3c2] = param_1 + 0x3cd;
  if (lVar5 != 0) {
    param_1[0x3d1] = lVar5;
  }
  param_1[0x3cf] = param_1[0x3cf] + lVar6 + 0x12c8;
  FUN_026400e0(param_1 + 0x3cd);
  lVar6 = param_1[2];
  lVar2 = param_1[3];
  param_1[0x3d5] = 0;
  param_1[0x3d8] = 0;
  param_1[0x3d9] = 0;
  lVar5 = lVar6 + 0x12cc;
  *(undefined1 *)(param_1 + 0x3da) = 0;
  param_1[3] = param_1 + 0x3d4;
  param_1[0x3d6] = lVar5;
  if (lVar2 != 0) {
    param_1[0x3d8] = lVar2;
  }
  param_1[0x3dc] = 0;
  param_1[0x3de] = 0;
  param_1[0x3e1] = 0;
  param_1[1000] = 0;
  param_1[0x3df] = 0;
  param_1[0x3e0] = 0;
  *(undefined1 *)(param_1 + 0x3e1) = 0;
  param_1[0x3db] = &DAT_04a8f030;
  param_1[0x3e3] = 0;
  param_1[0x3e4] = 0;
  param_1[0x3e5] = 0;
  param_1[0x3e6] = 0;
  param_1[999] = 0;
  *(undefined1 *)(param_1 + 1000) = 0;
  param_1[0x3e2] = &DAT_04a8f030;
  param_1[0x3d4] = &PTR_LAB_04a8d7c0;
  param_1[0x3d7] = param_1 + 0x3db;
  param_1[0x3dd] = lVar5;
  FUN_026400e0();
  lVar5 = param_1[0x3d7];
  param_1[0x3d7] = param_1 + 0x3e2;
  if (lVar5 != 0) {
    param_1[0x3e6] = lVar5;
  }
  param_1[0x3e4] = param_1[0x3e4] + lVar6 + 0x12d0;
  FUN_026400e0(param_1 + 0x3e2);
  lVar5 = param_1[2];
  param_1[0x3ea] = 0;
  param_1[0x3ed] = 0;
  param_1[0x3ee] = 0;
  *(undefined1 *)(param_1 + 0x3ef) = 0;
  param_1[0x3eb] = lVar5 + 0xb58;
  if (param_1[3] != 0) {
    param_1[0x3ed] = param_1[3];
  }
  param_1[0x3f2] = lVar5 + 0xb58;
  param_1[0x3fb] = param_1 + 0x3e9;
  *(undefined1 *)(param_1 + 0x3f6) = 0;
  param_1[0x3ec] = param_1 + 0x3f0;
  param_1[0x3f0] = &DAT_04a8f3f0;
  puVar3 = puVar3 + 0x10;
  param_1[0x405] = 0;
  param_1[0x40c] = 0;
  param_1[0x40b] = 0;
  param_1[0x412] = 0;
  param_1[0x3fe] = puVar3;
  param_1[0x405] = puVar3;
  param_1[0x40c] = puVar3;
  param_1[0x3f1] = 0;
  param_1[0x3f3] = 0;
  param_1[0x3f4] = 0;
  param_1[0x3f5] = 0;
  param_1[0x3e9] = &PTR_LAB_04a8f3c0;
  param_1[0x3f8] = 0;
  param_1[0x3f9] = lVar5 + 0x12d4;
  param_1[0x3fc] = 0;
  *(undefined1 *)(param_1 + 0x3fd) = 0;
  param_1[3] = param_1 + 0x3f7;
  param_1[0x404] = 0;
  param_1[0x406] = 0;
  param_1[0x407] = 0;
  param_1[0x408] = 0;
  param_1[0x409] = 0;
  param_1[0x40a] = 0;
  param_1[0x40d] = 0;
  param_1[0x40e] = 0;
  param_1[0x40f] = 0;
  param_1[0x410] = 0;
  param_1[0x411] = 0;
  *(undefined1 *)(param_1 + 0x404) = 0;
  param_1[0x403] = 0;
  param_1[0x402] = 0;
  param_1[0x401] = 0;
  param_1[0x400] = 0;
  param_1[0x3ff] = 0;
  *(undefined1 *)(param_1 + 0x40b) = 0;
  param_1[0x40a] = 0;
  param_1[0x409] = 0;
  param_1[0x408] = 0;
  param_1[0x407] = 0;
  param_1[0x406] = 0;
  *(undefined1 *)(param_1 + 0x412) = 0;
  param_1[0x411] = 0;
  param_1[0x410] = 0;
  param_1[0x40f] = 0;
  param_1[0x40e] = 0;
  param_1[0x40d] = 0;
  param_1[0x3f7] = &PTR_LAB_04a8d7f0;
  param_1[0x3fa] = param_1 + 0x3fe;
  param_1[0x400] = lVar5 + 0x12d4;
  FUN_026400e0();
  lVar6 = param_1[0x3fa];
  param_1[0x3fa] = param_1 + 0x405;
  if (lVar6 != 0) {
    param_1[0x409] = lVar6;
  }
  param_1[0x407] = param_1[0x407] + lVar5 + 0x12dc;
  FUN_026400e0(param_1 + 0x405);
  lVar6 = param_1[0x3fa];
  param_1[0x3fa] = param_1 + 0x40c;
  if (lVar6 != 0) {
    param_1[0x410] = lVar6;
  }
  param_1[0x40e] = param_1[0x40e] + lVar5 + 0x12e4;
  FUN_026400e0(param_1 + 0x40c);
  FUN_02715d90(param_1 + 0x413,param_1,param_1[2] + 0x12ec);
  FUN_02715d90(param_1 + 0x460,param_1,param_1[2] + 0x133c);
  FUN_02715d90(param_1 + 0x4ad,param_1,param_1[2] + 0x138c);
  return;
}

