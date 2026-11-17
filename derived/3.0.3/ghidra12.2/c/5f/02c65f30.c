
void FUN_02c65f30(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  byte bVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar12 = *(byte *)(param_3 + 0xe);
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar12;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x47] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04ab28b8;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x49] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4d] = (long)puVar1;
  memset(param_1 + 0x4e,0,0x1bf30);
  lVar15 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  lVar13 = 0;
  do {
    FUN_03463544((long)param_1 + lVar13 + 0x270,0);
    lVar15 = lVar15 + -1;
    *(undefined4 *)((long)param_1 + lVar13 + 0x3c8) = 0x40;
    *(long *)((long)param_1 + lVar13 + 0x3c0) = (long)param_1 + lVar13 + 0x3cc;
    *(undefined1 *)((long)param_1 + lVar13 + 0x40b) = 0;
    *(undefined1 *)((long)param_1 + lVar13 + 0x3cc) = 0;
    *(undefined **)((long)param_1 + lVar13 + 0x3b8) = puVar1;
    *(undefined4 *)((long)param_1 + lVar13 + 0x410) = 0;
    lVar13 = lVar13 + 0x1a8;
  } while (lVar15 != 0);
  *(undefined4 *)(param_1 + 0x3836) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3837) = 0;
  *(undefined4 *)(param_1 + 0x3838) = 0xffffffff;
  param_1[0x3834] = (long)(puVar1 + 0x10);
  param_1[0x3835] = -1;
  memset(param_1 + 0x3839,0,0x460);
  FUN_03135560(param_1 + 0x3839);
  FUN_03135560(param_1 + 0x385c);
  FUN_03135560(param_1 + 0x387f);
  FUN_03135560(param_1 + 0x38a2);
  param_1[0x38d0] = (long)&PTR_LAB_04ab2b30;
  *(undefined1 *)(param_1 + 0x38cf) = 0;
  param_1[0x38cb] = 0;
  param_1[0x38cc] = 0;
  param_1[0x38ec] = -0x100000000;
  param_1[0x38c9] = 0;
  param_1[0x38ca] = 0;
  param_1[0x38c7] = 0;
  param_1[0x38c8] = 0;
  param_1[0x38c5] = 0;
  param_1[0x38c6] = 0;
  param_1[0x38cd] = -1;
  param_1[0x38ce] = 0;
  puVar1 = PTR_DAT_04bbba70 + 0x10;
  param_1[0x38e8] = (long)puVar1;
  param_1[0x38d4] = (long)puVar1;
  param_1[0x38d8] = (long)puVar1;
  param_1[0x38dc] = (long)puVar1;
  param_1[0x38e0] = (long)puVar1;
  param_1[0x38e4] = (long)puVar1;
  memset(param_1 + 0x38ed,0,600);
  FUN_02c62ed0(param_1 + 0x38ed);
  *(undefined4 *)(param_1 + 0x393a) = 0x31;
  *(undefined2 *)((long)param_1 + 0x1c9d4) = 0;
  puVar1 = PTR_DAT_04bb7418;
  *(undefined2 *)((long)param_1 + 0x1ca34) = 0;
  param_1[0x3938] = (long)(puVar1 + 0x10);
  param_1[0x3939] = (long)param_1 + 0x1c9d4;
  memset(param_1 + 0x3947,0,0x5b60);
  puVar1 = PTR_DAT_04bb37e0;
  lVar15 = 0;
  uVar9 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar7 = PTR_DAT_04bb37e0[2];
  uVar8 = PTR_DAT_04bb37e0[3];
  uVar6 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  lVar13 = 0x5b6;
  do {
    puVar5 = (undefined2 *)((long)param_1 + lVar15 + 0x1ca40);
    lVar15 = lVar15 + 0x10;
    *(undefined4 *)(puVar5 + -4) = 0xe;
    *(undefined4 *)(puVar5 + -2) = 0xe;
    lVar13 = lVar13 + -1;
    *puVar5 = uVar9;
    *(undefined1 *)(puVar5 + 1) = uVar7;
    *(undefined1 *)((long)puVar5 + 3) = uVar8;
    *(undefined4 *)(puVar5 + 2) = uVar6;
  } while (lVar13 != 0);
  lVar15 = 0x3a94;
  plVar10 = param_1 + 0x44bb;
  param_1[0x44b3] = 0;
  param_1[0x44b4] = 0;
  param_1[0x44b5] = (long)(param_1 + 0x44b7);
  while( true ) {
    plVar10[-3] = (long)(plVar10 + -2);
    plVar10[-4] = (long)(plVar10 + -3);
    plVar10[-2] = (long)(plVar10 + -1);
    if (lVar15 == 0) break;
    plVar10[-1] = (long)plVar10;
    plVar10 = plVar10 + 4;
    lVar15 = lVar15 + -4;
  }
  param_1[0x44b6] = (long)(param_1 + 0x44b7);
  param_1[0x7f4e] = 0;
  if (param_1 + 0x7f4f != (long *)0x0) {
    param_1[0x44b3] = 0x3a9800000000;
    param_1[0x44b4] = (long)(param_1 + 0x7f4f);
  }
  lVar15 = 0x3a94;
  param_1[0xb9e7] = 0;
  param_1[0xb9e8] = 0;
  plVar10 = param_1 + 0xb9ef;
  param_1[0xb9e9] = (long)(param_1 + 0xb9eb);
  while( true ) {
    plVar10[-3] = (long)(plVar10 + -2);
    plVar10[-4] = (long)(plVar10 + -3);
    plVar10[-2] = (long)(plVar10 + -1);
    if (lVar15 == 0) break;
    plVar10[-1] = (long)plVar10;
    plVar10 = plVar10 + 4;
    lVar15 = lVar15 + -4;
  }
  param_1[0xb9ea] = (long)(param_1 + 0xb9eb);
  param_1[0xf482] = 0;
  if (param_1 + 0xf483 != (long *)0x0) {
    param_1[0xb9e7] = 0x3a9800000000;
    param_1[0xb9e8] = (long)(param_1 + 0xf483);
  }
  memset(param_1 + 0x12f1b,0,0x200);
  FUN_012c7a38(param_1 + 0x12f1b);
  memset(param_1 + 0x12f5b,0,0x200);
  FUN_012c7a38(param_1 + 0x12f5b);
  *(undefined1 *)(param_1 + 0x12f9b) = 0;
  param_1[0x12f9e] = 0;
  param_1[0x12f9c] = 0;
  param_1[0x12f9d] = 0;
  *(undefined1 *)(param_1 + 0x12f9f) = 0;
  puVar2 = PTR_DAT_04bc5a80 + 0x10;
  *(undefined2 *)(param_1 + 0x12fa0) = 0;
  param_1[0x12fa1] = (long)puVar2;
  param_1[0x12fa2] = 0;
  puVar2 = PTR_DAT_04bc8358;
  *(undefined2 *)(param_1 + 0x12fa3) = 0;
  param_1[0x12fa5] = 0x500000000;
  param_1[0x12fa6] = (long)(param_1 + 0x12fa7);
  param_1[0x12faf] = 0;
  param_1[0x12fa4] = (long)(puVar2 + 0x10);
  *(undefined2 *)(param_1 + 0x12fac) = *(undefined2 *)puVar1;
  *(undefined *)((long)param_1 + 0x97d62) = puVar1[2];
  *(undefined *)((long)param_1 + 0x97d63) = puVar1[3];
  *(undefined4 *)((long)param_1 + 0x97d64) = *(undefined4 *)(puVar1 + 4);
  puVar1 = PTR_DAT_04bb2020;
  param_1[0x12fad] = 0;
  param_1[0x12fae] = 0;
  param_1[0x12fb0] = (long)(puVar1 + 0x10);
  lVar15 = *(long *)(PTR_PTR_04bb2238 + 8);
  *(undefined4 *)(param_1 + 0x12fb2) = 0;
  param_1[0x12fb3] = 0;
  *(undefined4 *)(param_1 + 0x12fb4) = 0;
  *(undefined1 *)((long)param_1 + 0x97da4) = 0;
  param_1[0x12fb1] = lVar15;
  param_1[0x38d2] = (long)FUN_02c66a30;
  param_1[0x38d3] = 0;
  param_1[0x38d0] = (long)&PTR_LAB_04ab2b58;
  param_1[0x38d1] = (long)param_1;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar11 = malloc(0x1c8);
    puVar14 = PTR_DAT_04bb2bc0;
joined_r0x02c66498:
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar11 + 2) = 0xffffffff;
      puVar4 = PTR_DAT_04bc4ee8;
      *(undefined1 *)((long)puVar11 + 0x2c) = 0;
      puVar3 = puVar14 + 0x10;
      *(undefined1 *)((long)puVar11 + 0x6b) = 0;
      *(undefined1 *)((long)puVar11 + 0x9c) = 0;
      puVar4 = puVar4 + 0x10;
      *puVar11 = 4;
      puVar11[1] = puVar4;
      puVar11[3] = puVar3;
      puVar11[4] = (undefined1 *)((long)puVar11 + 0x2c);
      puVar11[0xf] = puVar4;
      puVar11[0x1d] = puVar4;
      puVar11[0x2b] = puVar4;
      *(undefined4 *)(puVar11 + 5) = 0x40;
      *(undefined1 *)(puVar11 + 0xe) = 1;
      *(undefined4 *)(puVar11 + 0x10) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x13) = 0x40;
      *(undefined1 *)((long)puVar11 + 0xdb) = 0;
      *(undefined1 *)(puVar11 + 0x1c) = 1;
      *(undefined4 *)(puVar11 + 0x1e) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x21) = 0x40;
      *(undefined1 *)((long)puVar11 + 0x14b) = 0;
      *(undefined1 *)((long)puVar11 + 0x10c) = 0;
      *(undefined1 *)(puVar11 + 0x2a) = 1;
      *(undefined4 *)(puVar11 + 0x2c) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x2f) = 0x40;
      *(undefined1 *)((long)puVar11 + 0x1bb) = 0;
      *(undefined1 *)((long)puVar11 + 0x17c) = 0;
      *(undefined1 *)(puVar11 + 0x38) = 1;
      puVar11[0x11] = puVar3;
      puVar11[0x12] = (undefined1 *)((long)puVar11 + 0x9c);
      puVar11[0x1f] = puVar3;
      puVar11[0x20] = (long)puVar11 + 0x10c;
      puVar11[0x2d] = puVar3;
      puVar11[0x2e] = (long)puVar11 + 0x17c;
      *(undefined4 *)(param_1 + 0x38c5) = 4;
      param_1[0x38c6] = (long)(puVar11 + 1);
    }
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar14 = PTR_DAT_04bb2bc0;
    plVar10 = (long *)(lVar15 + 8);
    if (lVar13 != 0) {
      plVar10 = (long *)(lVar13 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) {
      puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1c8,8);
      goto joined_r0x02c66498;
    }
  }
  lVar15 = *(long *)puVar1;
  if (lVar15 == 0) {
    puVar11 = malloc(0x238);
joined_r0x02c66598:
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar11 + 2) = 0xffffffff;
      puVar4 = PTR_DAT_04bc4ee8;
      puVar3 = puVar14 + 0x10;
      *(undefined1 *)((long)puVar11 + 0x9c) = 0;
      puVar11[0x11] = puVar3;
      puVar11[0x12] = (undefined1 *)((long)puVar11 + 0x9c);
      *(undefined1 *)((long)puVar11 + 0x2c) = 0;
      puVar4 = puVar4 + 0x10;
      puVar11[3] = puVar3;
      puVar11[4] = (undefined1 *)((long)puVar11 + 0x2c);
      puVar11[1] = puVar4;
      puVar11[0xf] = puVar4;
      puVar11[0x1d] = puVar4;
      puVar11[0x2b] = puVar4;
      puVar11[0x39] = puVar4;
      *(undefined1 *)((long)puVar11 + 0x6b) = 0;
      *puVar11 = 5;
      *(undefined4 *)(puVar11 + 5) = 0x40;
      *(undefined1 *)(puVar11 + 0xe) = 1;
      *(undefined4 *)(puVar11 + 0x10) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x13) = 0x40;
      *(undefined1 *)((long)puVar11 + 0xdb) = 0;
      *(undefined1 *)(puVar11 + 0x1c) = 1;
      *(undefined4 *)(puVar11 + 0x1e) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x21) = 0x40;
      *(undefined1 *)((long)puVar11 + 0x14b) = 0;
      *(undefined1 *)((long)puVar11 + 0x10c) = 0;
      *(undefined1 *)(puVar11 + 0x2a) = 1;
      *(undefined4 *)(puVar11 + 0x2c) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x2f) = 0x40;
      *(undefined1 *)((long)puVar11 + 0x1bb) = 0;
      *(undefined1 *)((long)puVar11 + 0x17c) = 0;
      *(undefined1 *)(puVar11 + 0x38) = 1;
      *(undefined4 *)(puVar11 + 0x3a) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x3d) = 0x40;
      *(undefined1 *)((long)puVar11 + 0x22b) = 0;
      *(undefined1 *)((long)puVar11 + 0x1ec) = 0;
      *(undefined1 *)(puVar11 + 0x46) = 1;
      puVar11[0x1f] = puVar3;
      puVar11[0x20] = (long)puVar11 + 0x10c;
      puVar11[0x2d] = puVar3;
      puVar11[0x2e] = (long)puVar11 + 0x17c;
      puVar11[0x3b] = puVar3;
      puVar11[0x3c] = (long)puVar11 + 0x1ec;
      *(undefined4 *)(param_1 + 0x38c7) = 5;
      param_1[0x38c8] = (long)(puVar11 + 1);
    }
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar10 = (long *)(lVar15 + 8);
    if (lVar13 != 0) {
      plVar10 = (long *)(lVar13 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) {
      puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x238,8);
      goto joined_r0x02c66598;
    }
  }
  lVar15 = *(long *)puVar1;
  if (lVar15 == 0) {
    puVar11 = malloc(0x4d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar10 = (long *)(lVar15 + 8);
    if (lVar13 != 0) {
      plVar10 = (long *)(lVar13 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) goto LAB_02c66860;
    puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x4d8,8);
  }
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar11 + 2) = 0xffffffff;
    puVar3 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar11 + 0x9c) = 0;
    *(undefined1 *)((long)puVar11 + 0x2c) = 0;
    *(undefined1 *)((long)puVar11 + 0x6b) = 0;
    puVar3 = puVar3 + 0x10;
    puVar4 = puVar14 + 0x10;
    *puVar11 = 0xb;
    puVar11[0x11] = puVar4;
    puVar11[0x12] = (undefined1 *)((long)puVar11 + 0x9c);
    puVar11[0x1f] = puVar4;
    puVar11[0x20] = (long)puVar11 + 0x10c;
    puVar11[1] = puVar3;
    puVar11[0xf] = puVar3;
    puVar11[0x1d] = puVar3;
    puVar11[0x2b] = puVar3;
    puVar11[0x39] = puVar3;
    puVar11[0x47] = puVar3;
    puVar11[0x55] = puVar3;
    puVar11[99] = puVar3;
    puVar11[0x71] = puVar3;
    puVar11[0x7f] = puVar3;
    puVar11[0x8d] = puVar3;
    *(undefined4 *)(puVar11 + 5) = 0x40;
    *(undefined4 *)(puVar11 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar11 + 0xdb) = 0;
    *(undefined4 *)(puVar11 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x14b) = 0;
    *(undefined1 *)((long)puVar11 + 0x10c) = 0;
    *(undefined4 *)(puVar11 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar11 + 0x17c) = 0;
    *(undefined4 *)(puVar11 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x22b) = 0;
    *(undefined1 *)((long)puVar11 + 0x1ec) = 0;
    *(undefined4 *)(puVar11 + 0x48) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x4b) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x29b) = 0;
    *(undefined1 *)((long)puVar11 + 0x25c) = 0;
    puVar11[0x49] = puVar4;
    *(undefined4 *)(puVar11 + 0x56) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x59) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x30b) = 0;
    *(undefined1 *)((long)puVar11 + 0x2cc) = 0;
    puVar11[0x57] = puVar4;
    *(undefined4 *)(puVar11 + 100) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x67) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x37b) = 0;
    *(undefined1 *)((long)puVar11 + 0x33c) = 0;
    puVar11[0x65] = puVar4;
    *(undefined4 *)(puVar11 + 0x72) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x75) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x3eb) = 0;
    *(undefined1 *)((long)puVar11 + 0x3ac) = 0;
    puVar11[0x73] = puVar4;
    *(undefined4 *)(puVar11 + 0x80) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x83) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x45b) = 0;
    *(undefined1 *)((long)puVar11 + 0x41c) = 0;
    puVar11[0x81] = puVar4;
    *(undefined4 *)(puVar11 + 0x8e) = 0xffffffff;
    puVar11[0x90] = (long)puVar11 + 0x48c;
    *(undefined4 *)(puVar11 + 0x91) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x4cb) = 0;
    *(undefined1 *)((long)puVar11 + 0x48c) = 0;
    puVar11[0x8f] = puVar4;
    puVar11[0x2d] = puVar4;
    puVar11[0x2e] = (long)puVar11 + 0x17c;
    puVar11[0x3b] = puVar4;
    puVar11[0x3c] = (long)puVar11 + 0x1ec;
    puVar11[0x4a] = (long)puVar11 + 0x25c;
    puVar11[0x58] = (long)puVar11 + 0x2cc;
    puVar11[0x66] = (long)puVar11 + 0x33c;
    puVar11[0x74] = (long)puVar11 + 0x3ac;
    puVar11[0x82] = (long)puVar11 + 0x41c;
    puVar11[3] = puVar4;
    puVar11[4] = (undefined1 *)((long)puVar11 + 0x2c);
    *(undefined1 *)(puVar11 + 0xe) = 1;
    *(undefined1 *)(puVar11 + 0x1c) = 1;
    *(undefined1 *)(puVar11 + 0x2a) = 1;
    *(undefined1 *)(puVar11 + 0x38) = 1;
    *(undefined1 *)(puVar11 + 0x46) = 1;
    *(undefined1 *)(puVar11 + 0x54) = 1;
    *(undefined1 *)(puVar11 + 0x62) = 1;
    *(undefined1 *)(puVar11 + 0x70) = 1;
    *(undefined1 *)(puVar11 + 0x7e) = 1;
    *(undefined1 *)(puVar11 + 0x8c) = 1;
    *(undefined1 *)(puVar11 + 0x9a) = 1;
    *(undefined4 *)(param_1 + 0x38c9) = 0xb;
    param_1[0x38ca] = (long)(puVar11 + 1);
  }
LAB_02c66860:
  lVar15 = *(long *)puVar1;
  if (lVar15 == 0) {
    puVar11 = malloc(0x3f8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar10 = (long *)(lVar15 + 8);
    if (lVar13 != 0) {
      plVar10 = (long *)(lVar13 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      return;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x3f8,8);
  }
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar11 + 2) = 0xffffffff;
    puVar1 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar11 + 0x9c) = 0;
    *(undefined1 *)((long)puVar11 + 0x2c) = 0;
    *(undefined1 *)((long)puVar11 + 0x6b) = 0;
    puVar1 = puVar1 + 0x10;
    puVar14 = puVar14 + 0x10;
    *puVar11 = 9;
    puVar11[0x11] = puVar14;
    puVar11[0x12] = (undefined1 *)((long)puVar11 + 0x9c);
    puVar11[0x1f] = puVar14;
    puVar11[0x20] = (long)puVar11 + 0x10c;
    puVar11[1] = puVar1;
    puVar11[0xf] = puVar1;
    puVar11[0x1d] = puVar1;
    puVar11[0x2b] = puVar1;
    puVar11[0x39] = puVar1;
    puVar11[0x47] = puVar1;
    puVar11[0x55] = puVar1;
    puVar11[99] = puVar1;
    puVar11[0x71] = puVar1;
    *(undefined4 *)(puVar11 + 5) = 0x40;
    *(undefined4 *)(puVar11 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar11 + 0xdb) = 0;
    *(undefined4 *)(puVar11 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x14b) = 0;
    *(undefined1 *)((long)puVar11 + 0x10c) = 0;
    *(undefined4 *)(puVar11 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar11 + 0x17c) = 0;
    *(undefined4 *)(puVar11 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x22b) = 0;
    *(undefined1 *)((long)puVar11 + 0x1ec) = 0;
    *(undefined4 *)(puVar11 + 0x48) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x4b) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x29b) = 0;
    *(undefined1 *)((long)puVar11 + 0x25c) = 0;
    puVar11[0x49] = puVar14;
    *(undefined4 *)(puVar11 + 0x56) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x59) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x30b) = 0;
    *(undefined1 *)((long)puVar11 + 0x2cc) = 0;
    puVar11[0x57] = puVar14;
    *(undefined4 *)(puVar11 + 100) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x67) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x37b) = 0;
    *(undefined1 *)((long)puVar11 + 0x33c) = 0;
    puVar11[0x65] = puVar14;
    *(undefined4 *)(puVar11 + 0x72) = 0xffffffff;
    puVar11[0x74] = (long)puVar11 + 0x3ac;
    *(undefined4 *)(puVar11 + 0x75) = 0x40;
    *(undefined1 *)((long)puVar11 + 0x3eb) = 0;
    *(undefined1 *)((long)puVar11 + 0x3ac) = 0;
    puVar11[0x73] = puVar14;
    puVar11[0x2d] = puVar14;
    puVar11[0x2e] = (long)puVar11 + 0x17c;
    puVar11[0x3b] = puVar14;
    puVar11[0x3c] = (long)puVar11 + 0x1ec;
    puVar11[0x4a] = (long)puVar11 + 0x25c;
    puVar11[0x58] = (long)puVar11 + 0x2cc;
    puVar11[0x66] = (long)puVar11 + 0x33c;
    puVar11[3] = puVar14;
    puVar11[4] = (undefined1 *)((long)puVar11 + 0x2c);
    *(undefined1 *)(puVar11 + 0xe) = 1;
    *(undefined1 *)(puVar11 + 0x1c) = 1;
    *(undefined1 *)(puVar11 + 0x2a) = 1;
    *(undefined1 *)(puVar11 + 0x38) = 1;
    *(undefined1 *)(puVar11 + 0x46) = 1;
    *(undefined1 *)(puVar11 + 0x54) = 1;
    *(undefined1 *)(puVar11 + 0x62) = 1;
    *(undefined1 *)(puVar11 + 0x70) = 1;
    *(undefined1 *)(puVar11 + 0x7e) = 1;
    *(undefined4 *)(param_1 + 0x38cb) = 9;
    param_1[0x38cc] = (long)(puVar11 + 1);
  }
  return;
}

