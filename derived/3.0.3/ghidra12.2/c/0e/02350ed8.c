
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02350ed8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined2 *puVar5;
  char *pcVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  undefined *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined2 uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined2 uVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined1 uVar24;
  undefined8 uVar25;
  long lVar26;
  byte local_8c [4];
  byte local_88 [4];
  int local_84;
  byte local_80 [4];
  byte local_7c [4];
  byte local_78 [4];
  byte local_74 [4];
  byte local_70 [4];
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  
  piVar22 = param_1 + 0x46;
  piVar1 = param_1 + 0x786;
  memset(piVar22,0,0x1fc8);
  FUN_02815cfc(piVar22);
  puVar10 = PTR_DAT_04bb3170;
  *(undefined1 *)(param_1 + 0x788) = 0;
  param_1[0x786] = 0;
  param_1[0x787] = 0;
  piVar2 = param_1 + 0x78a;
  param_1[0x78a] = 0;
  param_1[0x78b] = 0;
  *(undefined2 *)((long)param_1 + 0x1e22) = *(undefined2 *)puVar10;
  FUN_027c0ee4(param_1 + 0x78c);
  memset(param_1 + 0x7a8,0,0x230);
  param_1[0x834] = 0xfffe;
  param_1[0x835] = 0;
  FUN_0277d4ac(param_1 + 0x834);
  param_1[0x836] = 0xfffe;
  param_1[0x837] = 0;
  FUN_0277d4ac(param_1 + 0x836);
  FUN_02640070(param_1 + 0x838,0,piVar22,0,0);
  puVar10 = PTR_DAT_04bb4f78;
  local_84 = *param_1;
  if (4 < local_84 - 1U) {
switchD_02350fd8_caseD_4:
    lVar26 = *(long *)(param_1 + 4);
    if (lVar26 == 0) {
      return;
    }
    FUN_023532ac(piVar22,lVar26);
    *(undefined1 *)piVar1 = *(undefined1 *)(lVar26 + 0x1d00);
    *(undefined1 *)((long)param_1 + 0x1e19) = *(undefined1 *)(lVar26 + 0x1d01);
    *(undefined1 *)((long)param_1 + 0x1e1a) = *(undefined1 *)(lVar26 + 0x1d02);
    *(undefined1 *)((long)param_1 + 0x1e1b) = *(undefined1 *)(lVar26 + 0x1d03);
    *(undefined1 *)(param_1 + 0x787) = *(undefined1 *)(lVar26 + 0x1d04);
    *(undefined1 *)((long)param_1 + 0x1e1d) = *(undefined1 *)(lVar26 + 0x1d05);
    *(undefined1 *)((long)param_1 + 0x1e1e) = *(undefined1 *)(lVar26 + 0x1d06);
    *(undefined1 *)((long)param_1 + 0x1e1f) = *(undefined1 *)(lVar26 + 0x1d07);
    *(undefined1 *)(param_1 + 0x788) = *(undefined1 *)(lVar26 + 0x1d08);
    *(undefined2 *)((long)param_1 + 0x1e22) = *(undefined2 *)(lVar26 + 0x1d0a);
    FUN_027c1640(piVar2,lVar26 + 0x1d10);
    *(undefined2 *)(param_1 + 0x834) = *(undefined2 *)(lVar26 + 0x1fb8);
    *(undefined1 *)((long)param_1 + 0x20d2) = *(undefined1 *)(lVar26 + 0x1fba);
    *(undefined1 *)((long)param_1 + 0x20d3) = *(undefined1 *)(lVar26 + 0x1fbb);
    param_1[0x835] = *(int *)(lVar26 + 0x1fbc);
    *(undefined2 *)(param_1 + 0x836) = *(undefined2 *)(lVar26 + 0x1fc0);
    *(undefined1 *)((long)param_1 + 0x20da) = *(undefined1 *)(lVar26 + 0x1fc2);
    *(undefined1 *)((long)param_1 + 0x20db) = *(undefined1 *)(lVar26 + 0x1fc3);
    param_1[0x837] = *(int *)(lVar26 + 0x1fc4);
    return;
  }
  puVar3 = (undefined1 *)((long)param_1 + 0x1285);
  switch(local_84) {
  case 2:
    if (local_84 - 2U < 2) {
      iVar13 = param_1[2];
    }
    else {
      if (local_84 == 1) {
        local_6c[0] = *(byte *)(param_1 + 1);
        if (7 < local_6c[0]) {
          local_6c[0] = 0xff;
        }
        iVar13 = FUN_02582fe0(local_6c);
        if (iVar13 != -1) goto LAB_02351188;
      }
      iVar13 = -1;
    }
LAB_02351188:
    if (DAT_05574040 == 0) {
      return;
    }
    lVar26 = FUN_026eec4c(DAT_05574040,iVar13);
    if (lVar26 == 0) {
      return;
    }
    if ((*(long **)(lVar26 + 0x108) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x108), puVar15 == (undefined8 *)0x0)) {
      uVar16 = 0;
    }
    else {
      uVar16 = (**(code **)*puVar15)();
      uVar16 = uVar16 & 0xffffffff;
    }
    lVar4 = *(long *)(lVar26 + 0xf0) + *(long *)(lVar26 + 0xe8);
    FUN_023532ac(piVar22,lVar4);
    *(undefined1 *)piVar1 = *(undefined1 *)(lVar4 + 0x1d00);
    *(undefined1 *)((long)param_1 + 0x1e19) = *(undefined1 *)(lVar4 + 0x1d01);
    *(undefined1 *)((long)param_1 + 0x1e1a) = *(undefined1 *)(lVar4 + 0x1d02);
    *(undefined1 *)((long)param_1 + 0x1e1b) = *(undefined1 *)(lVar4 + 0x1d03);
    *(undefined1 *)(param_1 + 0x787) = *(undefined1 *)(lVar4 + 0x1d04);
    *(undefined1 *)((long)param_1 + 0x1e1d) = *(undefined1 *)(lVar4 + 0x1d05);
    *(undefined1 *)((long)param_1 + 0x1e1e) = *(undefined1 *)(lVar4 + 0x1d06);
    *(undefined1 *)((long)param_1 + 0x1e1f) = *(undefined1 *)(lVar4 + 0x1d07);
    *(undefined1 *)(param_1 + 0x788) = *(undefined1 *)(lVar4 + 0x1d08);
    *(undefined2 *)((long)param_1 + 0x1e22) = *(undefined2 *)(lVar4 + 0x1d0a);
    FUN_027c1640(piVar2,lVar4 + 0x1d10);
    *(undefined2 *)(param_1 + 0x834) = *(undefined2 *)(lVar4 + 0x1fb8);
    *(undefined1 *)((long)param_1 + 0x20d2) = *(undefined1 *)(lVar4 + 0x1fba);
    *(undefined1 *)((long)param_1 + 0x20d3) = *(undefined1 *)(lVar4 + 0x1fbb);
    param_1[0x835] = *(int *)(lVar4 + 0x1fbc);
    *(undefined2 *)(param_1 + 0x836) = *(undefined2 *)(lVar4 + 0x1fc0);
    *(undefined1 *)((long)param_1 + 0x20da) = *(undefined1 *)(lVar4 + 0x1fc2);
    *(undefined1 *)((long)param_1 + 0x20db) = *(undefined1 *)(lVar4 + 0x1fc3);
    param_1[0x837] = *(int *)(lVar4 + 0x1fc4);
    if ((((uVar16 & 1) != 0) && (*(long *)(lVar26 + 0x108) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x108) + 8), puVar15 != (undefined8 *)0x0)) {
      (**(code **)*puVar15)();
    }
    if (DAT_05574040 == 0) {
      return;
    }
    lVar26 = FUN_026eec4c(DAT_05574040,iVar13);
    if (lVar26 == 0) {
LAB_023521f0:
      if (DAT_05574040 == 0) {
        return;
      }
      lVar26 = FUN_026eec4c(DAT_05574040,iVar13);
      if (lVar26 == 0) {
        uVar12 = 0xffffffff;
      }
      else {
        if ((*(long **)(lVar26 + 0x161a8) == (long *)0x0) ||
           (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x161a8), puVar15 == (undefined8 *)0x0)) {
          uVar14 = 1;
        }
        else {
          uVar14 = (**(code **)*puVar15)();
          uVar14 = uVar14 ^ 1;
        }
        bVar20 = *(byte *)(*(long *)(lVar26 + 0x16190) + *(long *)(lVar26 + 0x16188));
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        uVar12 = (uint)(char)bVar20;
        if ((((uVar14 & 1) == 0) && (*(long *)(lVar26 + 0x161a8) != 0)) &&
           (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x161a8) + 8),
           puVar15 != (undefined8 *)0x0)) {
          (**(code **)*puVar15)();
        }
      }
      if (DAT_05574040 == 0) {
        return;
      }
      lVar26 = FUN_026eec4c(DAT_05574040,iVar13);
      if ((uVar12 < 8) && (lVar26 != 0)) {
        lVar26 = lVar26 + (ulong)uVar12 * 0x2450;
        if ((*(long **)(lVar26 + 0x3f60) == (long *)0x0) ||
           (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x3f60), puVar15 == (undefined8 *)0x0)) {
          uVar12 = 1;
        }
        else {
          uVar12 = (**(code **)*puVar15)();
          uVar12 = uVar12 ^ 1;
        }
        puVar5 = (undefined2 *)(*(long *)(lVar26 + 0x3f48) + *(long *)(lVar26 + 0x3f40));
        *(undefined2 *)(param_1 + 0x46) = *puVar5;
        *(undefined1 *)((long)param_1 + 0x11a) = *(undefined1 *)(puVar5 + 1);
        *(undefined1 *)((long)param_1 + 0x11b) = *(undefined1 *)((long)puVar5 + 3);
        param_1[0x47] = *(int *)(puVar5 + 2);
        param_1[0x48] = *(int *)(puVar5 + 4);
        param_1[0x49] = *(int *)(puVar5 + 6);
        *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(puVar5 + 8);
        *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(puVar5 + 0xc);
        uVar19 = *(undefined8 *)(puVar5 + 0x10);
        uVar23 = *(undefined8 *)(puVar5 + 0x14);
        uVar25 = *(undefined8 *)(puVar5 + 0x1c);
        *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(puVar5 + 0x18);
        *(undefined8 *)(param_1 + 0x54) = uVar25;
        *(undefined8 *)(param_1 + 0x4e) = uVar19;
        *(undefined8 *)(param_1 + 0x50) = uVar23;
        uVar25 = *(undefined8 *)(puVar5 + 0x28);
        uVar19 = *(undefined8 *)(puVar5 + 0x20);
        uVar23 = *(undefined8 *)(puVar5 + 0x24);
        *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(puVar5 + 0x2c);
        *(undefined8 *)(param_1 + 0x58) = uVar23;
        *(undefined8 *)(param_1 + 0x5a) = uVar25;
        *(undefined8 *)(param_1 + 0x56) = uVar19;
        uVar19 = *(undefined8 *)(puVar5 + 0x2e);
        uVar23 = *(undefined8 *)(puVar5 + 0x32);
        *(undefined8 *)(param_1 + 0x61) = *(undefined8 *)(puVar5 + 0x36);
        *(undefined8 *)(param_1 + 0x5f) = uVar23;
        *(undefined8 *)(param_1 + 0x5d) = uVar19;
        uVar14 = *(uint *)(puVar5 + 0x3a);
        if (1 < uVar14) {
          uVar14 = 0;
        }
        param_1[99] = uVar14;
        *(undefined1 *)(param_1 + 100) = *(undefined1 *)(puVar5 + 0x3c);
        *(undefined1 *)((long)param_1 + 0x191) = *(undefined1 *)((long)puVar5 + 0x79);
        *(undefined2 *)((long)param_1 + 0x192) = puVar5[0x3d];
        uVar19 = *(undefined8 *)(puVar5 + 0x44);
        *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(puVar5 + 0x40);
        *(undefined8 *)(param_1 + 0x68) = uVar19;
        uVar25 = *(undefined8 *)(puVar5 + 0x50);
        uVar19 = *(undefined8 *)(puVar5 + 0x48);
        uVar23 = *(undefined8 *)(puVar5 + 0x4c);
        *(undefined8 *)((long)param_1 + 0x1bd) = *(undefined8 *)((long)puVar5 + 0xa5);
        *(undefined8 *)(param_1 + 0x6c) = uVar23;
        *(undefined8 *)(param_1 + 0x6e) = uVar25;
        *(undefined8 *)(param_1 + 0x6a) = uVar19;
        memcpy((void *)((long)param_1 + 0x1c5),(void *)((long)puVar5 + 0xad),0x800);
        uVar24 = *(undefined1 *)((long)puVar5 + 0x8ad);
        *(undefined2 *)((long)param_1 + 0x9c6) = 0;
        *(undefined1 *)((long)param_1 + 0x9c5) = uVar24;
        FUN_027c1b80(param_1 + 0x48);
        *(undefined2 *)(param_1 + 0x272) = puVar5[0x458];
        *(undefined1 *)((long)param_1 + 0x9ca) = *(undefined1 *)(puVar5 + 0x459);
        *(undefined1 *)((long)param_1 + 0x9cb) = *(undefined1 *)((long)puVar5 + 0x8b3);
        param_1[0x273] = *(int *)(puVar5 + 0x45a);
        *(undefined2 *)(param_1 + 0x274) = puVar5[0x45c];
        *(undefined1 *)((long)param_1 + 0x9d2) = *(undefined1 *)(puVar5 + 0x45d);
        *(undefined1 *)((long)param_1 + 0x9d3) = *(undefined1 *)((long)puVar5 + 0x8bb);
        param_1[0x275] = *(int *)(puVar5 + 0x45e);
        *(undefined2 *)(param_1 + 0x276) = puVar5[0x460];
        *(undefined1 *)((long)param_1 + 0x9da) = *(undefined1 *)(puVar5 + 0x461);
        *(undefined1 *)((long)param_1 + 0x9db) = *(undefined1 *)((long)puVar5 + 0x8c3);
        param_1[0x277] = *(int *)(puVar5 + 0x462);
        param_1[0x278] = *(int *)(puVar5 + 0x464);
        param_1[0x279] = *(int *)(puVar5 + 0x466);
        *(undefined8 *)(param_1 + 0x27a) = *(undefined8 *)(puVar5 + 0x468);
        *(undefined8 *)(param_1 + 0x27c) = *(undefined8 *)(puVar5 + 0x46c);
        uVar19 = *(undefined8 *)(puVar5 + 0x470);
        uVar23 = *(undefined8 *)(puVar5 + 0x474);
        uVar25 = *(undefined8 *)(puVar5 + 0x478);
        *(undefined8 *)(param_1 + 0x284) = *(undefined8 *)(puVar5 + 0x47c);
        *(undefined8 *)(param_1 + 0x282) = uVar25;
        *(undefined8 *)(param_1 + 0x280) = uVar23;
        *(undefined8 *)(param_1 + 0x27e) = uVar19;
        uVar19 = *(undefined8 *)(puVar5 + 0x480);
        uVar23 = *(undefined8 *)(puVar5 + 0x484);
        uVar25 = *(undefined8 *)(puVar5 + 0x488);
        *(undefined1 *)(param_1 + 0x28c) = *(undefined1 *)(puVar5 + 0x48c);
        *(undefined8 *)(param_1 + 0x28a) = uVar25;
        *(undefined8 *)(param_1 + 0x288) = uVar23;
        *(undefined8 *)(param_1 + 0x286) = uVar19;
        uVar19 = *(undefined8 *)(puVar5 + 0x48e);
        uVar23 = *(undefined8 *)(puVar5 + 0x492);
        *(undefined8 *)(param_1 + 0x291) = *(undefined8 *)(puVar5 + 0x496);
        *(undefined8 *)(param_1 + 0x28f) = uVar23;
        *(undefined8 *)(param_1 + 0x28d) = uVar19;
        uVar14 = *(uint *)(puVar5 + 0x49a);
        if (1 < uVar14) {
          uVar14 = 0;
        }
        param_1[0x293] = uVar14;
        *(undefined1 *)(param_1 + 0x294) = *(undefined1 *)(puVar5 + 0x49c);
        *(undefined1 *)((long)param_1 + 0xa51) = *(undefined1 *)((long)puVar5 + 0x939);
        *(undefined2 *)((long)param_1 + 0xa52) = puVar5[0x49d];
        uVar19 = *(undefined8 *)(puVar5 + 0x4a0);
        *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(puVar5 + 0x4a4);
        *(undefined8 *)(param_1 + 0x296) = uVar19;
        uVar19 = *(undefined8 *)(puVar5 + 0x4a8);
        uVar23 = *(undefined8 *)(puVar5 + 0x4ac);
        uVar25 = *(undefined8 *)(puVar5 + 0x4b0);
        *(undefined8 *)((long)param_1 + 0xa7d) = *(undefined8 *)((long)puVar5 + 0x965);
        *(undefined8 *)(param_1 + 0x29e) = uVar25;
        *(undefined8 *)(param_1 + 0x29c) = uVar23;
        *(undefined8 *)(param_1 + 0x29a) = uVar19;
        memcpy((void *)((long)param_1 + 0xa85),(void *)((long)puVar5 + 0x96d),0x800);
        uVar24 = *(undefined1 *)((long)puVar5 + 0x116d);
        *(undefined2 *)((long)param_1 + 0x1286) = 0;
        *puVar3 = uVar24;
        FUN_027c1b80(param_1 + 0x278);
        *(undefined2 *)(param_1 + 0x4a2) = puVar5[0x8b8];
        *(undefined1 *)((long)param_1 + 0x128a) = *(undefined1 *)(puVar5 + 0x8b9);
        *(undefined1 *)((long)param_1 + 0x128b) = *(undefined1 *)((long)puVar5 + 0x1173);
        param_1[0x4a3] = *(int *)(puVar5 + 0x8ba);
        *(undefined2 *)(param_1 + 0x4a4) = puVar5[0x8bc];
        *(undefined1 *)((long)param_1 + 0x1292) = *(undefined1 *)(puVar5 + 0x8bd);
        *(undefined1 *)((long)param_1 + 0x1293) = *(undefined1 *)((long)puVar5 + 0x117b);
        param_1[0x4a5] = *(int *)(puVar5 + 0x8be);
        *(undefined2 *)(param_1 + 0x4a6) = puVar5[0x8c0];
        *(undefined1 *)((long)param_1 + 0x129a) = *(undefined1 *)(puVar5 + 0x8c1);
        *(undefined1 *)((long)param_1 + 0x129b) = *(undefined1 *)((long)puVar5 + 0x1183);
        param_1[0x4a7] = *(int *)(puVar5 + 0x8c2);
        *(undefined2 *)(param_1 + 0x4a8) = puVar5[0x8c4];
        *(undefined1 *)((long)param_1 + 0x12a2) = *(undefined1 *)(puVar5 + 0x8c5);
        *(undefined1 *)((long)param_1 + 0x12a3) = *(undefined1 *)((long)puVar5 + 0x118b);
        param_1[0x4a9] = *(int *)(puVar5 + 0x8c6);
        if ((((uVar12 & 1) == 0) && (*(long *)(lVar26 + 0x3f60) != 0)) &&
           (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x3f60) + 8), puVar15 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar15)();
        }
        *(undefined2 *)(param_1 + 0x4aa) = DAT_05586008;
        *(undefined1 *)((long)param_1 + 0x12aa) = DAT_0558600a;
        *(undefined1 *)((long)param_1 + 0x12ab) = DAT_0558600b;
        param_1[0x4ab] = DAT_0558600c;
      }
    }
    else {
      if ((*(long **)(lVar26 + 0x161a8) == (long *)0x0) ||
         (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x161a8), puVar15 == (undefined8 *)0x0)) {
        uVar12 = 1;
      }
      else {
        uVar12 = (**(code **)*puVar15)();
        uVar12 = uVar12 ^ 1;
      }
      pbVar18 = (byte *)(*(long *)(lVar26 + 0x16190) + *(long *)(lVar26 + 0x16188));
      bVar20 = pbVar18[1];
      bVar9 = *pbVar18;
      if ((((uVar12 & 1) == 0) && (*(long *)(lVar26 + 0x161a8) != 0)) &&
         (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x161a8) + 8), puVar15 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar15)();
      }
      if (bVar20 != 0 && bVar9 < 8) goto LAB_023521f0;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    lVar26 = FUN_026eec4c(DAT_05574040,iVar13);
    if (lVar26 == 0) {
      return;
    }
    if ((*(long **)(lVar26 + 0x16250) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x16250), puVar15 == (undefined8 *)0x0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (**(code **)*puVar15)();
      uVar12 = uVar12 ^ 1;
    }
    pcVar6 = (char *)(*(long *)(lVar26 + 0x16238) + *(long *)(lVar26 + 0x16230));
    if ((*pcVar6 == '\0') || (uVar16 = FUN_016e5e90(), (uVar16 & 1) == 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = (byte)pcVar6[1] < 2;
    }
    if ((((uVar12 & 1) == 0) && (*(long *)(lVar26 + 0x16250) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x16250) + 8), puVar15 != (undefined8 *)0x0))
    {
      (**(code **)*puVar15)();
    }
    if (!bVar11) {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    lVar26 = FUN_026eec4c(DAT_05574040,iVar13);
    goto joined_r0x023526b4;
  case 3:
    if (local_84 - 2U < 2) {
      iVar13 = param_1[2];
    }
    else {
      if (local_84 == 1) {
        local_64[0] = *(byte *)(param_1 + 1);
        if (7 < local_64[0]) {
          local_64[0] = 0xff;
        }
        iVar13 = FUN_02582fe0(local_64);
        if (iVar13 != -1) goto LAB_02351200;
      }
      iVar13 = -1;
    }
LAB_02351200:
    if (DAT_05574040 == 0) {
      return;
    }
    lVar26 = FUN_026eec4c(DAT_05574040,iVar13);
    if (lVar26 == 0) {
      return;
    }
    if ((*(long **)(lVar26 + 0x108) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x108), puVar15 == (undefined8 *)0x0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (**(code **)*puVar15)();
      uVar12 = uVar12 ^ 1;
    }
    lVar4 = *(long *)(lVar26 + 0xf0) + *(long *)(lVar26 + 0xe8);
    FUN_023532ac(piVar22,lVar4);
    *(undefined1 *)piVar1 = *(undefined1 *)(lVar4 + 0x1d00);
    *(undefined1 *)((long)param_1 + 0x1e19) = *(undefined1 *)(lVar4 + 0x1d01);
    *(undefined1 *)((long)param_1 + 0x1e1a) = *(undefined1 *)(lVar4 + 0x1d02);
    *(undefined1 *)((long)param_1 + 0x1e1b) = *(undefined1 *)(lVar4 + 0x1d03);
    *(undefined1 *)(param_1 + 0x787) = *(undefined1 *)(lVar4 + 0x1d04);
    *(undefined1 *)((long)param_1 + 0x1e1d) = *(undefined1 *)(lVar4 + 0x1d05);
    *(undefined1 *)((long)param_1 + 0x1e1e) = *(undefined1 *)(lVar4 + 0x1d06);
    *(undefined1 *)((long)param_1 + 0x1e1f) = *(undefined1 *)(lVar4 + 0x1d07);
    *(undefined1 *)(param_1 + 0x788) = *(undefined1 *)(lVar4 + 0x1d08);
    *(undefined2 *)((long)param_1 + 0x1e22) = *(undefined2 *)(lVar4 + 0x1d0a);
    FUN_027c1640(piVar2,lVar4 + 0x1d10);
    *(undefined2 *)(param_1 + 0x834) = *(undefined2 *)(lVar4 + 0x1fb8);
    *(undefined1 *)((long)param_1 + 0x20d2) = *(undefined1 *)(lVar4 + 0x1fba);
    *(undefined1 *)((long)param_1 + 0x20d3) = *(undefined1 *)(lVar4 + 0x1fbb);
    param_1[0x835] = *(int *)(lVar4 + 0x1fbc);
    *(undefined2 *)(param_1 + 0x836) = *(undefined2 *)(lVar4 + 0x1fc0);
    *(undefined1 *)((long)param_1 + 0x20da) = *(undefined1 *)(lVar4 + 0x1fc2);
    *(undefined1 *)((long)param_1 + 0x20db) = *(undefined1 *)(lVar4 + 0x1fc3);
    param_1[0x837] = *(int *)(lVar4 + 0x1fc4);
    if ((((uVar12 & 1) == 0) && (*(long *)(lVar26 + 0x108) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x108) + 8), puVar15 != (undefined8 *)0x0)) {
      (**(code **)*puVar15)();
    }
    param_1[0x46] = param_1[6];
    param_1[0x47] = param_1[7];
    *(undefined8 *)(param_1 + 0x272) = *(undefined8 *)(param_1 + 8);
    param_1[0x274] = param_1[10];
    param_1[0x275] = param_1[0xb];
    puVar10 = PTR_DAT_04bb43c0;
    lVar26 = *(long *)PTR_DAT_04bb43c0;
    uVar12 = FUN_0277d6c4(param_1 + 0x16);
    if (*(long *)puVar10 == 0) {
LAB_02351770:
      param_1[0x276] = param_1[0xc];
      param_1[0x277] = param_1[0xd];
      *(short *)(param_1 + 0x4a2) = (short)param_1[0xe];
      *(undefined2 *)((long)param_1 + 0x128a) = *(undefined2 *)((long)param_1 + 0x3a);
      param_1[0x4a3] = param_1[0xf];
      piVar22 = param_1 + 0x4aa;
      uVar21 = *(undefined2 *)PTR_DAT_04bb37e0;
      uVar24 = PTR_DAT_04bb37e0[2];
    }
    else {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((*(uint *)(lVar26 + 0x1d8) <= uVar12) ||
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02351770;
      *(short *)(param_1 + 0x4aa) = (short)param_1[0x16];
      *(undefined2 *)((long)param_1 + 0x12aa) = *(undefined2 *)((long)param_1 + 0x5a);
      puVar10 = PTR_DAT_04bb37e0;
      piVar22 = param_1 + 0x4a2;
      param_1[0x4ab] = param_1[0x17];
      uVar21 = *(undefined2 *)puVar10;
      uVar24 = puVar10[2];
      uVar7 = puVar10[3];
      iVar13 = *(int *)(puVar10 + 4);
      *(undefined2 *)(param_1 + 0x276) = uVar21;
      *(undefined1 *)((long)param_1 + 0x9da) = uVar24;
      *(undefined1 *)((long)param_1 + 0x9db) = uVar7;
      param_1[0x277] = iVar13;
    }
    *(undefined1 *)((long)piVar22 + 2) = uVar24;
    *(undefined2 *)piVar22 = uVar21;
    *(undefined1 *)((long)piVar22 + 3) = DAT_0558600b;
    piVar22[1] = DAT_0558600c;
    *(short *)(param_1 + 0x4a4) = (short)param_1[0x10];
    param_1[0x4a7] = param_1[0x13];
    *(short *)(param_1 + 0x4a8) = (short)param_1[0x14];
    *(undefined2 *)((long)param_1 + 0x1292) = *(undefined2 *)((long)param_1 + 0x42);
    param_1[0x4a5] = param_1[0x11];
    *(short *)(param_1 + 0x4a6) = (short)param_1[0x12];
    *(undefined2 *)((long)param_1 + 0x129a) = *(undefined2 *)((long)param_1 + 0x4a);
    *(undefined2 *)((long)param_1 + 0x12a2) = *(undefined2 *)((long)param_1 + 0x52);
LAB_0235180c:
    param_1[0x4a9] = param_1[0x15];
    return;
  case 4:
    goto switchD_02350fd8_caseD_4;
  case 5:
    FUN_023543d8(local_8c,param_1);
    if (7 < local_8c[0]) {
      local_8c[0] = 0xff;
    }
    local_68[0] = local_8c[0];
    lVar26 = FUN_025830c0(DAT_055021a0,local_68,1);
    if (lVar26 != 0) {
      if ((*(long **)(lVar26 + 0x108) == (long *)0x0) ||
         (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x108), puVar15 == (undefined8 *)0x0)) {
        uVar12 = 1;
      }
      else {
        uVar12 = (**(code **)*puVar15)();
        uVar12 = uVar12 ^ 1;
      }
      lVar4 = *(long *)(lVar26 + 0xf0) + *(long *)(lVar26 + 0xe8);
      FUN_023532ac(piVar22,lVar4);
      *(undefined1 *)piVar1 = *(undefined1 *)(lVar4 + 0x1d00);
      *(undefined1 *)((long)param_1 + 0x1e19) = *(undefined1 *)(lVar4 + 0x1d01);
      *(undefined1 *)((long)param_1 + 0x1e1a) = *(undefined1 *)(lVar4 + 0x1d02);
      *(undefined1 *)((long)param_1 + 0x1e1b) = *(undefined1 *)(lVar4 + 0x1d03);
      *(undefined1 *)(param_1 + 0x787) = *(undefined1 *)(lVar4 + 0x1d04);
      *(undefined1 *)((long)param_1 + 0x1e1d) = *(undefined1 *)(lVar4 + 0x1d05);
      *(undefined1 *)((long)param_1 + 0x1e1e) = *(undefined1 *)(lVar4 + 0x1d06);
      *(undefined1 *)((long)param_1 + 0x1e1f) = *(undefined1 *)(lVar4 + 0x1d07);
      *(undefined1 *)(param_1 + 0x788) = *(undefined1 *)(lVar4 + 0x1d08);
      *(undefined2 *)((long)param_1 + 0x1e22) = *(undefined2 *)(lVar4 + 0x1d0a);
      FUN_027c1640(piVar2,lVar4 + 0x1d10);
      *(undefined2 *)(param_1 + 0x834) = *(undefined2 *)(lVar4 + 0x1fb8);
      *(undefined1 *)((long)param_1 + 0x20d2) = *(undefined1 *)(lVar4 + 0x1fba);
      *(undefined1 *)((long)param_1 + 0x20d3) = *(undefined1 *)(lVar4 + 0x1fbb);
      param_1[0x835] = *(int *)(lVar4 + 0x1fbc);
      *(undefined2 *)(param_1 + 0x836) = *(undefined2 *)(lVar4 + 0x1fc0);
      *(undefined1 *)((long)param_1 + 0x20da) = *(undefined1 *)(lVar4 + 0x1fc2);
      *(undefined1 *)((long)param_1 + 0x20db) = *(undefined1 *)(lVar4 + 0x1fc3);
      param_1[0x837] = *(int *)(lVar4 + 0x1fc4);
      if ((((uVar12 & 1) == 0) && (*(long *)(lVar26 + 0x108) != 0)) &&
         (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x108) + 8), puVar15 != (undefined8 *)0x0))
      {
        (**(code **)*puVar15)();
      }
      if (param_1[0x42] == 0) {
        *(undefined2 *)(param_1 + 0x4aa) = DAT_05586008;
        *(undefined1 *)((long)param_1 + 0x12aa) = DAT_0558600a;
        *(undefined1 *)((long)param_1 + 0x12ab) = DAT_0558600b;
        param_1[0x4ab] = DAT_0558600c;
      }
    }
    param_1[0x46] = param_1[6];
    param_1[0x47] = param_1[7];
    *(undefined8 *)(param_1 + 0x272) = *(undefined8 *)(param_1 + 8);
    param_1[0x274] = param_1[10];
    param_1[0x275] = param_1[0xb];
    puVar10 = PTR_DAT_04bb43c0;
    lVar26 = *(long *)PTR_DAT_04bb43c0;
    uVar12 = FUN_0277d6c4(param_1 + 0x16);
    uVar21 = DAT_05586008;
    if (*(long *)puVar10 == 0) {
LAB_023513fc:
      *(undefined1 *)((long)param_1 + 0x12aa) = DAT_0558600a;
      piVar22 = param_1 + 0xe;
      uVar17 = (undefined2)*piVar22;
      uVar24 = DAT_0558600b;
      *(undefined2 *)(param_1 + 0x4aa) = uVar21;
      *(undefined1 *)((long)param_1 + 0x12ab) = uVar24;
      param_1[0x4ab] = DAT_0558600c;
      param_1[0x276] = param_1[0xc];
      param_1[0x277] = param_1[0xd];
    }
    else {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((*(uint *)(lVar26 + 0x1d8) <= uVar12) ||
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_023513fc;
      *(undefined2 *)((long)param_1 + 0x12aa) = *(undefined2 *)((long)param_1 + 0x5a);
      param_1[0x4ab] = param_1[0x17];
      uVar21 = _DAT_0558600a;
      *(short *)(param_1 + 0x4aa) = (short)param_1[0x16];
      uVar17 = DAT_05586008;
      *(undefined2 *)((long)param_1 + 0x9da) = uVar21;
      iVar13 = DAT_0558600c;
      *(undefined2 *)(param_1 + 0x276) = uVar17;
      param_1[0x277] = iVar13;
      piVar22 = (int *)&DAT_05586008;
    }
    *(undefined2 *)(param_1 + 0x4a2) = uVar17;
    *(undefined1 *)((long)param_1 + 0x128a) = *(undefined1 *)((long)piVar22 + 2);
    *(undefined1 *)((long)param_1 + 0x128b) = *(undefined1 *)((long)piVar22 + 3);
    iVar13 = piVar22[1];
    *(short *)(param_1 + 0x4a4) = (short)param_1[0x10];
    param_1[0x4a3] = iVar13;
    *(undefined2 *)((long)param_1 + 0x1292) = *(undefined2 *)((long)param_1 + 0x42);
    param_1[0x4a5] = param_1[0x11];
    *(short *)(param_1 + 0x4a6) = (short)param_1[0x12];
    *(undefined2 *)((long)param_1 + 0x129a) = *(undefined2 *)((long)param_1 + 0x4a);
    param_1[0x4a7] = param_1[0x13];
    *(short *)(param_1 + 0x4a8) = (short)param_1[0x14];
    *(undefined1 *)((long)param_1 + 0x12a2) = *(undefined1 *)((long)param_1 + 0x52);
    *(undefined1 *)((long)param_1 + 0x12a3) = *(undefined1 *)((long)param_1 + 0x53);
    goto LAB_0235180c;
  }
  if (local_84 - 2U < 2) {
LAB_02350ff8:
    pbVar18 = (byte *)(param_1 + 1);
  }
  else {
    if (local_84 == 5) {
      if (*(byte *)(param_1 + 0x44) < 8) {
        pbVar18 = (byte *)(param_1 + 0x44);
        goto LAB_02351834;
      }
    }
    else if (local_84 == 1) goto LAB_02350ff8;
    pbVar18 = &DAT_0548e140;
  }
LAB_02351834:
  bVar20 = *pbVar18;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_80[0] = bVar20;
  lVar26 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_80,1);
  if (lVar26 == 0) {
    return;
  }
  if ((*(long **)(lVar26 + 0x108) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x108), puVar15 == (undefined8 *)0x0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = (**(code **)*puVar15)();
    uVar16 = uVar16 & 0xffffffff;
  }
  lVar4 = *(long *)(lVar26 + 0xf0) + *(long *)(lVar26 + 0xe8);
  FUN_023532ac(piVar22,lVar4);
  *(undefined1 *)piVar1 = *(undefined1 *)(lVar4 + 0x1d00);
  *(undefined1 *)((long)param_1 + 0x1e19) = *(undefined1 *)(lVar4 + 0x1d01);
  *(undefined1 *)((long)param_1 + 0x1e1a) = *(undefined1 *)(lVar4 + 0x1d02);
  *(undefined1 *)((long)param_1 + 0x1e1b) = *(undefined1 *)(lVar4 + 0x1d03);
  *(undefined1 *)(param_1 + 0x787) = *(undefined1 *)(lVar4 + 0x1d04);
  *(undefined1 *)((long)param_1 + 0x1e1d) = *(undefined1 *)(lVar4 + 0x1d05);
  *(undefined1 *)((long)param_1 + 0x1e1e) = *(undefined1 *)(lVar4 + 0x1d06);
  *(undefined1 *)((long)param_1 + 0x1e1f) = *(undefined1 *)(lVar4 + 0x1d07);
  *(undefined1 *)(param_1 + 0x788) = *(undefined1 *)(lVar4 + 0x1d08);
  *(undefined2 *)((long)param_1 + 0x1e22) = *(undefined2 *)(lVar4 + 0x1d0a);
  FUN_027c1640(piVar2,lVar4 + 0x1d10);
  *(undefined2 *)(param_1 + 0x834) = *(undefined2 *)(lVar4 + 0x1fb8);
  *(undefined1 *)((long)param_1 + 0x20d2) = *(undefined1 *)(lVar4 + 0x1fba);
  *(undefined1 *)((long)param_1 + 0x20d3) = *(undefined1 *)(lVar4 + 0x1fbb);
  param_1[0x835] = *(int *)(lVar4 + 0x1fbc);
  *(undefined2 *)(param_1 + 0x836) = *(undefined2 *)(lVar4 + 0x1fc0);
  *(undefined1 *)((long)param_1 + 0x20da) = *(undefined1 *)(lVar4 + 0x1fc2);
  *(undefined1 *)((long)param_1 + 0x20db) = *(undefined1 *)(lVar4 + 0x1fc3);
  param_1[0x837] = *(int *)(lVar4 + 0x1fc4);
  if ((((uVar16 & 1) != 0) && (*(long *)(lVar26 + 0x108) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x108) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  local_7c[0] = bVar20;
  lVar26 = FUN_025830c0(*(undefined8 *)puVar10,local_7c,1);
  if (lVar26 == 0) {
LAB_02351a0c:
    local_78[0] = bVar20;
    lVar26 = FUN_02583354(*(undefined8 *)puVar10,local_78,1);
    if (lVar26 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      if ((*(long **)(lVar26 + 0x161a8) == (long *)0x0) ||
         (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x161a8), puVar15 == (undefined8 *)0x0)) {
        uVar14 = 1;
      }
      else {
        uVar14 = (**(code **)*puVar15)();
        uVar14 = uVar14 ^ 1;
      }
      bVar9 = *(byte *)(*(long *)(lVar26 + 0x16190) + *(long *)(lVar26 + 0x16188));
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      uVar12 = (uint)(char)bVar9;
      if ((((uVar14 & 1) == 0) && (*(long *)(lVar26 + 0x161a8) != 0)) &&
         (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x161a8) + 8), puVar15 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar15)();
      }
    }
    local_74[0] = bVar20;
    lVar26 = FUN_025830c0(*(undefined8 *)puVar10,local_74,1);
    if ((uVar12 < 8) && (lVar26 != 0)) {
      lVar26 = lVar26 + (ulong)uVar12 * 0x2450;
      if ((*(long **)(lVar26 + 0x3f60) == (long *)0x0) ||
         (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x3f60), puVar15 == (undefined8 *)0x0)) {
        uVar12 = 1;
      }
      else {
        uVar12 = (**(code **)*puVar15)();
        uVar12 = uVar12 ^ 1;
      }
      puVar5 = (undefined2 *)(*(long *)(lVar26 + 0x3f48) + *(long *)(lVar26 + 0x3f40));
      *(undefined2 *)(param_1 + 0x46) = *puVar5;
      *(undefined1 *)((long)param_1 + 0x11a) = *(undefined1 *)(puVar5 + 1);
      *(undefined1 *)((long)param_1 + 0x11b) = *(undefined1 *)((long)puVar5 + 3);
      param_1[0x47] = *(int *)(puVar5 + 2);
      param_1[0x48] = *(int *)(puVar5 + 4);
      param_1[0x49] = *(int *)(puVar5 + 6);
      *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(puVar5 + 0xc);
      uVar19 = *(undefined8 *)(puVar5 + 0x10);
      uVar23 = *(undefined8 *)(puVar5 + 0x14);
      uVar25 = *(undefined8 *)(puVar5 + 0x1c);
      *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(puVar5 + 0x18);
      *(undefined8 *)(param_1 + 0x54) = uVar25;
      *(undefined8 *)(param_1 + 0x4e) = uVar19;
      *(undefined8 *)(param_1 + 0x50) = uVar23;
      uVar25 = *(undefined8 *)(puVar5 + 0x28);
      uVar19 = *(undefined8 *)(puVar5 + 0x20);
      uVar23 = *(undefined8 *)(puVar5 + 0x24);
      *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(puVar5 + 0x2c);
      *(undefined8 *)(param_1 + 0x58) = uVar23;
      *(undefined8 *)(param_1 + 0x5a) = uVar25;
      *(undefined8 *)(param_1 + 0x56) = uVar19;
      uVar19 = *(undefined8 *)(puVar5 + 0x2e);
      uVar23 = *(undefined8 *)(puVar5 + 0x32);
      *(undefined8 *)(param_1 + 0x61) = *(undefined8 *)(puVar5 + 0x36);
      *(undefined8 *)(param_1 + 0x5f) = uVar23;
      *(undefined8 *)(param_1 + 0x5d) = uVar19;
      uVar14 = *(uint *)(puVar5 + 0x3a);
      if (1 < uVar14) {
        uVar14 = 0;
      }
      param_1[99] = uVar14;
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)(puVar5 + 0x3c);
      *(undefined1 *)((long)param_1 + 0x191) = *(undefined1 *)((long)puVar5 + 0x79);
      *(undefined2 *)((long)param_1 + 0x192) = puVar5[0x3d];
      uVar19 = *(undefined8 *)(puVar5 + 0x44);
      *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(puVar5 + 0x40);
      *(undefined8 *)(param_1 + 0x68) = uVar19;
      uVar25 = *(undefined8 *)(puVar5 + 0x50);
      uVar19 = *(undefined8 *)(puVar5 + 0x48);
      uVar23 = *(undefined8 *)(puVar5 + 0x4c);
      *(undefined8 *)((long)param_1 + 0x1bd) = *(undefined8 *)((long)puVar5 + 0xa5);
      *(undefined8 *)(param_1 + 0x6c) = uVar23;
      *(undefined8 *)(param_1 + 0x6e) = uVar25;
      *(undefined8 *)(param_1 + 0x6a) = uVar19;
      memcpy((void *)((long)param_1 + 0x1c5),(void *)((long)puVar5 + 0xad),0x800);
      uVar24 = *(undefined1 *)((long)puVar5 + 0x8ad);
      *(undefined2 *)((long)param_1 + 0x9c6) = 0;
      *(undefined1 *)((long)param_1 + 0x9c5) = uVar24;
      FUN_027c1b80(param_1 + 0x48);
      *(undefined2 *)(param_1 + 0x272) = puVar5[0x458];
      *(undefined1 *)((long)param_1 + 0x9ca) = *(undefined1 *)(puVar5 + 0x459);
      *(undefined1 *)((long)param_1 + 0x9cb) = *(undefined1 *)((long)puVar5 + 0x8b3);
      param_1[0x273] = *(int *)(puVar5 + 0x45a);
      *(undefined2 *)(param_1 + 0x274) = puVar5[0x45c];
      *(undefined1 *)((long)param_1 + 0x9d2) = *(undefined1 *)(puVar5 + 0x45d);
      *(undefined1 *)((long)param_1 + 0x9d3) = *(undefined1 *)((long)puVar5 + 0x8bb);
      param_1[0x275] = *(int *)(puVar5 + 0x45e);
      *(undefined2 *)(param_1 + 0x276) = puVar5[0x460];
      *(undefined1 *)((long)param_1 + 0x9da) = *(undefined1 *)(puVar5 + 0x461);
      *(undefined1 *)((long)param_1 + 0x9db) = *(undefined1 *)((long)puVar5 + 0x8c3);
      param_1[0x277] = *(int *)(puVar5 + 0x462);
      param_1[0x278] = *(int *)(puVar5 + 0x464);
      param_1[0x279] = *(int *)(puVar5 + 0x466);
      *(undefined8 *)(param_1 + 0x27a) = *(undefined8 *)(puVar5 + 0x468);
      *(undefined8 *)(param_1 + 0x27c) = *(undefined8 *)(puVar5 + 0x46c);
      uVar19 = *(undefined8 *)(puVar5 + 0x470);
      uVar23 = *(undefined8 *)(puVar5 + 0x474);
      uVar25 = *(undefined8 *)(puVar5 + 0x478);
      *(undefined8 *)(param_1 + 0x284) = *(undefined8 *)(puVar5 + 0x47c);
      *(undefined8 *)(param_1 + 0x282) = uVar25;
      *(undefined8 *)(param_1 + 0x280) = uVar23;
      *(undefined8 *)(param_1 + 0x27e) = uVar19;
      uVar19 = *(undefined8 *)(puVar5 + 0x480);
      uVar23 = *(undefined8 *)(puVar5 + 0x484);
      uVar25 = *(undefined8 *)(puVar5 + 0x488);
      *(undefined1 *)(param_1 + 0x28c) = *(undefined1 *)(puVar5 + 0x48c);
      *(undefined8 *)(param_1 + 0x28a) = uVar25;
      *(undefined8 *)(param_1 + 0x288) = uVar23;
      *(undefined8 *)(param_1 + 0x286) = uVar19;
      uVar19 = *(undefined8 *)(puVar5 + 0x48e);
      uVar23 = *(undefined8 *)(puVar5 + 0x492);
      *(undefined8 *)(param_1 + 0x291) = *(undefined8 *)(puVar5 + 0x496);
      *(undefined8 *)(param_1 + 0x28f) = uVar23;
      *(undefined8 *)(param_1 + 0x28d) = uVar19;
      uVar14 = *(uint *)(puVar5 + 0x49a);
      if (1 < uVar14) {
        uVar14 = 0;
      }
      param_1[0x293] = uVar14;
      *(undefined1 *)(param_1 + 0x294) = *(undefined1 *)(puVar5 + 0x49c);
      *(undefined1 *)((long)param_1 + 0xa51) = *(undefined1 *)((long)puVar5 + 0x939);
      *(undefined2 *)((long)param_1 + 0xa52) = puVar5[0x49d];
      uVar19 = *(undefined8 *)(puVar5 + 0x4a0);
      *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(puVar5 + 0x4a4);
      *(undefined8 *)(param_1 + 0x296) = uVar19;
      uVar19 = *(undefined8 *)(puVar5 + 0x4a8);
      uVar23 = *(undefined8 *)(puVar5 + 0x4ac);
      uVar25 = *(undefined8 *)(puVar5 + 0x4b0);
      *(undefined8 *)((long)param_1 + 0xa7d) = *(undefined8 *)((long)puVar5 + 0x965);
      *(undefined8 *)(param_1 + 0x29e) = uVar25;
      *(undefined8 *)(param_1 + 0x29c) = uVar23;
      *(undefined8 *)(param_1 + 0x29a) = uVar19;
      memcpy((void *)((long)param_1 + 0xa85),(void *)((long)puVar5 + 0x96d),0x800);
      uVar24 = *(undefined1 *)((long)puVar5 + 0x116d);
      *(undefined2 *)((long)param_1 + 0x1286) = 0;
      *puVar3 = uVar24;
      FUN_027c1b80(param_1 + 0x278);
      *(undefined2 *)(param_1 + 0x4a2) = puVar5[0x8b8];
      *(undefined1 *)((long)param_1 + 0x128a) = *(undefined1 *)(puVar5 + 0x8b9);
      *(undefined1 *)((long)param_1 + 0x128b) = *(undefined1 *)((long)puVar5 + 0x1173);
      param_1[0x4a3] = *(int *)(puVar5 + 0x8ba);
      *(undefined2 *)(param_1 + 0x4a4) = puVar5[0x8bc];
      *(undefined1 *)((long)param_1 + 0x1292) = *(undefined1 *)(puVar5 + 0x8bd);
      *(undefined1 *)((long)param_1 + 0x1293) = *(undefined1 *)((long)puVar5 + 0x117b);
      param_1[0x4a5] = *(int *)(puVar5 + 0x8be);
      *(undefined2 *)(param_1 + 0x4a6) = puVar5[0x8c0];
      *(undefined1 *)((long)param_1 + 0x129a) = *(undefined1 *)(puVar5 + 0x8c1);
      *(undefined1 *)((long)param_1 + 0x129b) = *(undefined1 *)((long)puVar5 + 0x1183);
      param_1[0x4a7] = *(int *)(puVar5 + 0x8c2);
      *(undefined2 *)(param_1 + 0x4a8) = puVar5[0x8c4];
      *(undefined1 *)((long)param_1 + 0x12a2) = *(undefined1 *)(puVar5 + 0x8c5);
      *(undefined1 *)((long)param_1 + 0x12a3) = *(undefined1 *)((long)puVar5 + 0x118b);
      param_1[0x4a9] = *(int *)(puVar5 + 0x8c6);
      if ((((uVar12 & 1) == 0) && (*(long *)(lVar26 + 0x3f60) != 0)) &&
         (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x3f60) + 8), puVar15 != (undefined8 *)0x0))
      {
        (**(code **)*puVar15)();
      }
      *(undefined2 *)(param_1 + 0x4aa) = DAT_05586008;
      *(undefined1 *)((long)param_1 + 0x12aa) = DAT_0558600a;
      *(undefined1 *)((long)param_1 + 0x12ab) = DAT_0558600b;
      param_1[0x4ab] = DAT_0558600c;
    }
  }
  else {
    if ((*(long **)(lVar26 + 0x161a8) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x161a8), puVar15 == (undefined8 *)0x0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (**(code **)*puVar15)();
      uVar12 = uVar12 ^ 1;
    }
    pbVar18 = (byte *)(*(long *)(lVar26 + 0x16190) + *(long *)(lVar26 + 0x16188));
    bVar9 = pbVar18[1];
    bVar8 = *pbVar18;
    if ((((uVar12 & 1) == 0) && (*(long *)(lVar26 + 0x161a8) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x161a8) + 8), puVar15 != (undefined8 *)0x0))
    {
      (**(code **)*puVar15)();
    }
    if (bVar9 != 0 && bVar8 < 8) goto LAB_02351a0c;
  }
  local_88[0] = bVar20;
  uVar16 = FUN_0266a8f0(local_88);
  if ((uVar16 & 1) == 0) {
    return;
  }
  local_70[0] = bVar20;
  lVar26 = FUN_025830c0(*(undefined8 *)puVar10,local_70,1);
joined_r0x023526b4:
  if (lVar26 != 0) {
    if ((*(long **)(lVar26 + 0x162f8) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar26 + 0x162f8), puVar15 == (undefined8 *)0x0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (**(code **)*puVar15)();
      uVar12 = uVar12 ^ 1;
    }
    puVar5 = (undefined2 *)(*(long *)(lVar26 + 0x162e0) + *(long *)(lVar26 + 0x162d8));
    *(undefined2 *)(param_1 + 0x46) = *puVar5;
    *(undefined1 *)((long)param_1 + 0x11a) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x11b) = *(undefined1 *)((long)puVar5 + 3);
    param_1[0x47] = *(int *)(puVar5 + 2);
    param_1[0x48] = *(int *)(puVar5 + 4);
    param_1[0x49] = *(int *)(puVar5 + 6);
    *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(puVar5 + 8);
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(puVar5 + 0xc);
    uVar19 = *(undefined8 *)(puVar5 + 0x10);
    uVar23 = *(undefined8 *)(puVar5 + 0x14);
    uVar25 = *(undefined8 *)(puVar5 + 0x1c);
    *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(puVar5 + 0x18);
    *(undefined8 *)(param_1 + 0x54) = uVar25;
    *(undefined8 *)(param_1 + 0x4e) = uVar19;
    *(undefined8 *)(param_1 + 0x50) = uVar23;
    uVar25 = *(undefined8 *)(puVar5 + 0x28);
    uVar19 = *(undefined8 *)(puVar5 + 0x20);
    uVar23 = *(undefined8 *)(puVar5 + 0x24);
    *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(puVar5 + 0x2c);
    *(undefined8 *)(param_1 + 0x58) = uVar23;
    *(undefined8 *)(param_1 + 0x5a) = uVar25;
    *(undefined8 *)(param_1 + 0x56) = uVar19;
    uVar19 = *(undefined8 *)(puVar5 + 0x2e);
    uVar23 = *(undefined8 *)(puVar5 + 0x32);
    *(undefined8 *)(param_1 + 0x61) = *(undefined8 *)(puVar5 + 0x36);
    *(undefined8 *)(param_1 + 0x5f) = uVar23;
    *(undefined8 *)(param_1 + 0x5d) = uVar19;
    uVar14 = *(uint *)(puVar5 + 0x3a);
    if (1 < uVar14) {
      uVar14 = 0;
    }
    param_1[99] = uVar14;
    *(undefined1 *)(param_1 + 100) = *(undefined1 *)(puVar5 + 0x3c);
    *(undefined1 *)((long)param_1 + 0x191) = *(undefined1 *)((long)puVar5 + 0x79);
    *(undefined2 *)((long)param_1 + 0x192) = puVar5[0x3d];
    uVar19 = *(undefined8 *)(puVar5 + 0x44);
    *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(puVar5 + 0x40);
    *(undefined8 *)(param_1 + 0x68) = uVar19;
    uVar25 = *(undefined8 *)(puVar5 + 0x50);
    uVar19 = *(undefined8 *)(puVar5 + 0x48);
    uVar23 = *(undefined8 *)(puVar5 + 0x4c);
    *(undefined8 *)((long)param_1 + 0x1bd) = *(undefined8 *)((long)puVar5 + 0xa5);
    *(undefined8 *)(param_1 + 0x6c) = uVar23;
    *(undefined8 *)(param_1 + 0x6e) = uVar25;
    *(undefined8 *)(param_1 + 0x6a) = uVar19;
    memcpy((void *)((long)param_1 + 0x1c5),(void *)((long)puVar5 + 0xad),0x800);
    uVar24 = *(undefined1 *)((long)puVar5 + 0x8ad);
    *(undefined2 *)((long)param_1 + 0x9c6) = 0;
    *(undefined1 *)((long)param_1 + 0x9c5) = uVar24;
    FUN_027c1b80(param_1 + 0x48);
    *(undefined2 *)(param_1 + 0x272) = puVar5[0x458];
    *(undefined1 *)((long)param_1 + 0x9ca) = *(undefined1 *)(puVar5 + 0x459);
    *(undefined1 *)((long)param_1 + 0x9cb) = *(undefined1 *)((long)puVar5 + 0x8b3);
    param_1[0x273] = *(int *)(puVar5 + 0x45a);
    *(undefined2 *)(param_1 + 0x274) = puVar5[0x45c];
    *(undefined1 *)((long)param_1 + 0x9d2) = *(undefined1 *)(puVar5 + 0x45d);
    *(undefined1 *)((long)param_1 + 0x9d3) = *(undefined1 *)((long)puVar5 + 0x8bb);
    param_1[0x275] = *(int *)(puVar5 + 0x45e);
    *(undefined2 *)(param_1 + 0x276) = puVar5[0x460];
    *(undefined1 *)((long)param_1 + 0x9da) = *(undefined1 *)(puVar5 + 0x461);
    *(undefined1 *)((long)param_1 + 0x9db) = *(undefined1 *)((long)puVar5 + 0x8c3);
    param_1[0x277] = *(int *)(puVar5 + 0x462);
    param_1[0x278] = *(int *)(puVar5 + 0x464);
    param_1[0x279] = *(int *)(puVar5 + 0x466);
    *(undefined8 *)(param_1 + 0x27a) = *(undefined8 *)(puVar5 + 0x468);
    *(undefined8 *)(param_1 + 0x27c) = *(undefined8 *)(puVar5 + 0x46c);
    uVar19 = *(undefined8 *)(puVar5 + 0x470);
    uVar23 = *(undefined8 *)(puVar5 + 0x474);
    uVar25 = *(undefined8 *)(puVar5 + 0x478);
    *(undefined8 *)(param_1 + 0x284) = *(undefined8 *)(puVar5 + 0x47c);
    *(undefined8 *)(param_1 + 0x282) = uVar25;
    *(undefined8 *)(param_1 + 0x280) = uVar23;
    *(undefined8 *)(param_1 + 0x27e) = uVar19;
    uVar19 = *(undefined8 *)(puVar5 + 0x480);
    uVar23 = *(undefined8 *)(puVar5 + 0x484);
    uVar25 = *(undefined8 *)(puVar5 + 0x488);
    *(undefined1 *)(param_1 + 0x28c) = *(undefined1 *)(puVar5 + 0x48c);
    *(undefined8 *)(param_1 + 0x28a) = uVar25;
    *(undefined8 *)(param_1 + 0x288) = uVar23;
    *(undefined8 *)(param_1 + 0x286) = uVar19;
    uVar19 = *(undefined8 *)(puVar5 + 0x48e);
    uVar23 = *(undefined8 *)(puVar5 + 0x492);
    *(undefined8 *)(param_1 + 0x291) = *(undefined8 *)(puVar5 + 0x496);
    *(undefined8 *)(param_1 + 0x28f) = uVar23;
    *(undefined8 *)(param_1 + 0x28d) = uVar19;
    uVar14 = *(uint *)(puVar5 + 0x49a);
    if (1 < uVar14) {
      uVar14 = 0;
    }
    param_1[0x293] = uVar14;
    *(undefined1 *)(param_1 + 0x294) = *(undefined1 *)(puVar5 + 0x49c);
    *(undefined1 *)((long)param_1 + 0xa51) = *(undefined1 *)((long)puVar5 + 0x939);
    *(undefined2 *)((long)param_1 + 0xa52) = puVar5[0x49d];
    uVar19 = *(undefined8 *)(puVar5 + 0x4a0);
    *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(puVar5 + 0x4a4);
    *(undefined8 *)(param_1 + 0x296) = uVar19;
    uVar19 = *(undefined8 *)(puVar5 + 0x4a8);
    uVar23 = *(undefined8 *)(puVar5 + 0x4ac);
    uVar25 = *(undefined8 *)(puVar5 + 0x4b0);
    *(undefined8 *)((long)param_1 + 0xa7d) = *(undefined8 *)((long)puVar5 + 0x965);
    *(undefined8 *)(param_1 + 0x29e) = uVar25;
    *(undefined8 *)(param_1 + 0x29c) = uVar23;
    *(undefined8 *)(param_1 + 0x29a) = uVar19;
    memcpy((void *)((long)param_1 + 0xa85),(void *)((long)puVar5 + 0x96d),0x800);
    uVar24 = *(undefined1 *)((long)puVar5 + 0x116d);
    *(undefined2 *)((long)param_1 + 0x1286) = 0;
    *puVar3 = uVar24;
    FUN_027c1b80(param_1 + 0x278);
    *(undefined2 *)(param_1 + 0x4a2) = puVar5[0x8b8];
    *(undefined1 *)((long)param_1 + 0x128a) = *(undefined1 *)(puVar5 + 0x8b9);
    *(undefined1 *)((long)param_1 + 0x128b) = *(undefined1 *)((long)puVar5 + 0x1173);
    param_1[0x4a3] = *(int *)(puVar5 + 0x8ba);
    *(undefined2 *)(param_1 + 0x4a4) = puVar5[0x8bc];
    *(undefined1 *)((long)param_1 + 0x1292) = *(undefined1 *)(puVar5 + 0x8bd);
    *(undefined1 *)((long)param_1 + 0x1293) = *(undefined1 *)((long)puVar5 + 0x117b);
    param_1[0x4a5] = *(int *)(puVar5 + 0x8be);
    *(undefined2 *)(param_1 + 0x4a6) = puVar5[0x8c0];
    *(undefined1 *)((long)param_1 + 0x129a) = *(undefined1 *)(puVar5 + 0x8c1);
    *(undefined1 *)((long)param_1 + 0x129b) = *(undefined1 *)((long)puVar5 + 0x1183);
    param_1[0x4a7] = *(int *)(puVar5 + 0x8c2);
    *(undefined2 *)(param_1 + 0x4a8) = puVar5[0x8c4];
    *(undefined1 *)((long)param_1 + 0x12a2) = *(undefined1 *)(puVar5 + 0x8c5);
    *(undefined1 *)((long)param_1 + 0x12a3) = *(undefined1 *)((long)puVar5 + 0x118b);
    param_1[0x4a9] = *(int *)(puVar5 + 0x8c6);
    if ((((uVar12 & 1) == 0) && (*(long *)(lVar26 + 0x162f8) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar26 + 0x162f8) + 8), puVar15 != (undefined8 *)0x0))
    {
      (**(code **)*puVar15)();
    }
  }
  return;
}

