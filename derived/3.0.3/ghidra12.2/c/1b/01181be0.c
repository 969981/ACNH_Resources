
void FUN_01181be0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  void *pvVar13;
  void *pvVar14;
  long *plVar15;
  
  *param_1 = &PTR_LAB_049836c0;
  param_1[1] = 1;
  FUN_0068cdec(param_1 + 2);
  plVar15 = param_1 + 0x1d;
  *plVar15 = (long)(param_1 + 0x4a);
  puVar2 = PTR_DAT_04bbb808;
  param_1[0x15] = param_2;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x590] = 0;
  param_1[0x1a] = plVar15;
  param_1[0x1b] = plVar15;
  param_1[0x16] = puVar2 + 0x10;
  param_1[0x17] = param_1 + 0x17;
  param_1[0x18] = param_1 + 0x17;
  param_1[0x4a] = param_1 + 0x77;
  param_1[0x77] = param_1 + 0xa4;
  param_1[0xd1] = param_1 + 0xfe;
  param_1[0xa4] = param_1 + 0xd1;
  param_1[0xfe] = param_1 + 299;
  param_1[299] = param_1 + 0x158;
  param_1[0x158] = param_1 + 0x185;
  param_1[0x185] = param_1 + 0x1b2;
  param_1[0x1b2] = param_1 + 0x1df;
  param_1[0x1df] = param_1 + 0x20c;
  param_1[0x20c] = param_1 + 0x239;
  param_1[0x239] = param_1 + 0x266;
  param_1[0x266] = param_1 + 0x293;
  param_1[0x293] = param_1 + 0x2c0;
  param_1[0x2c0] = param_1 + 0x2ed;
  param_1[0x2ed] = param_1 + 0x31a;
  param_1[0x31a] = param_1 + 0x347;
  param_1[0x347] = param_1 + 0x374;
  param_1[0x374] = param_1 + 0x3a1;
  param_1[0x3a1] = param_1 + 0x3ce;
  param_1[0x3ce] = param_1 + 0x3fb;
  param_1[0x3fb] = param_1 + 0x428;
  param_1[0x428] = param_1 + 0x455;
  param_1[0x455] = param_1 + 0x482;
  param_1[0x482] = param_1 + 0x4af;
  param_1[0x4af] = param_1 + 0x4dc;
  param_1[0x4dc] = param_1 + 0x509;
  param_1[0x509] = param_1 + 0x536;
  param_1[0x536] = param_1 + 0x563;
  param_1[0x563] = param_1 + 0x590;
  puVar2 = PTR_DAT_04bbb848;
  *(undefined4 *)(param_1 + 0x1c) = 0x20;
  pvVar13 = (void *)((long)param_1 + 0x2e04);
  param_1[0x5bd] = puVar2 + 0x10;
  param_1[0x5bf] = pvVar13;
  puVar2 = PTR_DAT_04bb2f70;
  *(undefined4 *)(param_1 + 0x5c0) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2e43) = 0;
  param_1[0x5be] = puVar2 + 0x10;
  plVar15 = (long *)(param_4 + 8);
  (**(code **)(*plVar15 + 0x18))(plVar15);
  pvVar14 = *(void **)(param_4 + 0x10);
  if (pvVar13 != pvVar14) {
    (**(code **)(*(long *)(param_4 + 8) + 0x18))(plVar15);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(param_4 + 0x10) + lVar9) == '\0') goto LAB_01181e70;
      lVar3 = *(long *)(param_4 + 0x10) + lVar9;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_01181e70;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_01181e70;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01181e70:
    iVar5 = (int)lVar9;
    if (*(int *)(param_1 + 0x5c0) <= (int)lVar9) {
      iVar5 = *(int *)(param_1 + 0x5c0) + -1;
    }
    memcpy(pvVar13,pvVar14,(long)iVar5);
    *(undefined1 *)((long)pvVar13 + (long)iVar5) = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  puVar4 = (undefined8 *)((long)param_1 + 0x5f84);
  *(undefined1 *)((long)param_1 + 0x2e9b) = 0;
  param_1[0x5c9] = puVar2 + 0x10;
  puVar1 = puVar1 + 0x10;
  pvVar13 = (void *)((long)param_1 + 0x2e5c);
  param_1[0x5be] = puVar1;
  param_1[0x5ca] = pvVar13;
  *(undefined4 *)(param_1 + 0x5cb) = 0x40;
  plVar15 = (long *)(param_4 + 0x60);
  (**(code **)(*plVar15 + 0x18))(plVar15);
  pvVar14 = *(void **)(param_4 + 0x68);
  if (pvVar13 != pvVar14) {
    (**(code **)(*(long *)(param_4 + 0x60) + 0x18))(plVar15);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(param_4 + 0x68) + lVar9) == '\0') goto LAB_01181f4c;
      lVar3 = *(long *)(param_4 + 0x68) + lVar9;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_01181f4c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_01181f4c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01181f4c:
    iVar5 = (int)lVar9;
    if (*(int *)(param_1 + 0x5cb) <= (int)lVar9) {
      iVar5 = *(int *)(param_1 + 0x5cb) + -1;
    }
    memcpy(pvVar13,pvVar14,(long)iVar5);
    *(undefined1 *)((long)pvVar13 + (long)iVar5) = 0;
  }
  param_1[0x5c9] = puVar1;
  puVar11 = param_1 + 0x5f6;
  param_1[0x5d4] = *(undefined8 *)(param_4 + 0xb8);
  puVar2 = PTR_DAT_04bbb890;
  bVar8 = *(byte *)(param_4 + 0xc0);
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  *(byte *)(param_1 + 0x5d5) = bVar8;
  uVar12 = *(undefined8 *)(param_4 + 200);
  uVar10 = *(undefined8 *)(param_4 + 0xc1);
  param_1[0x5d7] = puVar2 + 0x10;
  param_1[0x5d8] = param_2;
  param_1[0x5d9] = param_3;
  *(undefined1 *)((long)param_1 + 0x2ee4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ea9) = uVar10;
  *(undefined4 *)(param_1 + 0x5dc) = 0x40;
  puVar6 = PTR_DAT_04bb2020;
  lVar9 = 100;
  *(undefined4 *)(param_1 + 0x5e7) = 0x40;
  puVar7 = PTR_DAT_04bb2120;
  param_1[0x5da] = puVar1;
  param_1[0x5e5] = puVar1;
  puVar1 = PTR_DAT_04bdf0c8;
  param_1[0x5db] = (undefined1 *)((long)param_1 + 0x2ee4);
  *(undefined1 *)((long)param_1 + 0x2f23) = 0;
  *(undefined1 *)((long)param_1 + 0x2f7b) = 0;
  *(undefined1 *)((long)param_1 + 0x2f3c) = 0;
  param_1[0x5d6] = uVar12;
  param_1[0x5e6] = (undefined1 *)((long)param_1 + 0x2f3c);
  puVar2 = PTR_DAT_04bdf1d8 + 0x10;
  do {
    puVar11[-6] = puVar6 + 0x10;
    puVar11[-5] = puVar7;
    lVar9 = lVar9 + -1;
    puVar11[-4] = puVar1 + 0x10;
    *(undefined1 *)(puVar11 + -3) = 1;
    *(undefined4 *)((long)puVar11 + -0x14) = 0;
    *(undefined1 *)(puVar11 + 4) = 0;
    puVar11[-2] = 0;
    puVar11[-1] = puVar2;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11 = puVar11 + 0xb;
  } while (lVar9 != 0);
  *(undefined4 *)(param_1 + 0xa3c) = 0;
  FUN_011881cc(param_1 + 0xa3d,param_4,param_1 + 0x16,param_1 + 0xbee);
  param_1[0xbef] = puVar4;
  *(undefined1 *)((long)param_1 + 0x5fc3) = 0;
  *(undefined8 *)((long)param_1 + 0x5f66) = 0;
  param_1[0xbec] = 0;
  *(undefined4 *)(param_1 + 0xbf0) = 0x40;
  if (puVar4 != &DAT_0407ebb1) {
    *(undefined1 *)puVar4 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0xbf9) = 0;
  *(undefined1 *)((long)param_1 + 0x5fcc) = 0;
  param_1[0xbee] = puVar2 + 0x10;
  return;
}

