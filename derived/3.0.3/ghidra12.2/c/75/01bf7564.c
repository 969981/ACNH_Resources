
void FUN_01bf7564(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  void *pvVar13;
  long lVar14;
  
  puVar8 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    plVar10 = malloc(0x460);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x460,8);
    }
  }
  *plVar10 = (long)param_1;
  *(undefined4 *)(plVar10 + 1) = 0;
  plVar10[2] = 0;
  *(undefined1 *)(plVar10 + 3) = 0;
  *(undefined4 *)((long)plVar10 + 0x1c) = 0;
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  *(undefined1 *)(plVar10 + 4) = 0;
  *(undefined4 *)(plVar10 + 10) = 0;
  plVar10[5] = 0;
  plVar10[6] = (long)puVar1;
  plVar10[7] = 0;
  plVar10[8] = 0;
  puVar2 = PTR_DAT_04bdf0c8 + 0x10;
  plVar10[0xd] = 0;
  plVar10[0xe] = (long)puVar1;
  plVar10[9] = 0;
  *(undefined4 *)((long)plVar10 + 100) = 0;
  *(undefined1 *)((long)plVar10 + 0xb4) = 0;
  *(undefined4 *)(plVar10 + 0x13) = 0;
  plVar10[0xb] = (long)puVar2;
  *(undefined1 *)(plVar10 + 0xc) = 1;
  *(undefined4 *)(plVar10 + 0x16) = 0x40;
  plVar10[0xf] = 0;
  plVar10[0x10] = 0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  puVar3 = PTR_DAT_04bb2bc0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)plVar10 + 0xf3) = 0;
  *(undefined4 *)(plVar10 + 0x21) = 0x40;
  *(undefined1 *)((long)plVar10 + 0x10c) = 0;
  *(undefined1 *)((long)plVar10 + 0x14b) = 0;
  plVar10[0x14] = (long)puVar1;
  plVar10[0x15] = (long)plVar10 + 0xb4;
  plVar10[0x1f] = (long)puVar1;
  plVar10[0x20] = (long)plVar10 + 0x10c;
  memset(plVar10 + 0x2b,0,0x1e0);
  puVar2 = PTR_DAT_04bb2d80;
  plVar10[0x31] = 0;
  plVar10[0x32] = 0;
  plVar10[0x37] = 0;
  plVar10[0x38] = 0;
  puVar1 = puVar2 + 0x10;
  plVar10[0x3d] = 0;
  plVar10[0x3e] = 0;
  plVar10[0x43] = 0;
  plVar10[0x44] = 0;
  plVar10[0x49] = 0;
  plVar10[0x4a] = 0;
  plVar10[0x50] = 0;
  plVar10[0x4f] = 0;
  plVar10[0x2d] = (long)puVar1;
  plVar10[0x33] = (long)puVar1;
  plVar10[0x39] = (long)puVar1;
  plVar10[0x3f] = (long)puVar1;
  plVar10[0x45] = (long)puVar1;
  plVar10[0x4b] = (long)puVar1;
  plVar10[0x51] = (long)puVar1;
  plVar10[0x57] = (long)puVar1;
  plVar10[0x5d] = (long)puVar1;
  plVar10[99] = (long)puVar1;
  plVar10[0x55] = 0;
  plVar10[0x56] = 0;
  plVar10[0x5b] = 0;
  plVar10[0x5c] = 0;
  plVar10[0x61] = 0;
  plVar10[0x62] = 0;
  *(undefined4 *)(plVar10 + 0x67) = 0xffffffff;
  plVar10[0x68] = 0;
  plVar10[0x69] = 0;
  plVar10[0x2a] = (long)(PTR_DAT_04bc0810 + 0x10);
  *(undefined4 *)(plVar10 + 0x6a) = 0;
  memset((void *)((long)plVar10 + 0x354),0,0x10a);
  *param_1 = plVar10;
  lVar14 = *(long *)puVar4;
  if (lVar14 == 0) {
    plVar10 = malloc(0x10);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    puVar12 = (undefined8 *)(lVar14 + 8);
    if (lVar9 != 0) {
      puVar12 = (undefined8 *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0x10,8);
  }
  puVar1 = PTR_DAT_04bc0b30;
  *(undefined1 *)((long)plVar10 + 0xc) = 0;
  iVar7 = *(int *)puVar1;
  *(int *)(plVar10 + 1) = iVar7;
  *(int *)puVar1 = iVar7 + 1;
  *plVar10 = (long)(PTR_DAT_04bc0a70 + 0x10);
  param_1[1] = plVar10;
  lVar14 = *(long *)puVar4;
  if (lVar14 == 0) {
    pvVar11 = malloc(0x78);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    puVar12 = (undefined8 *)(lVar14 + 8);
    if (lVar9 != 0) {
      puVar12 = (undefined8 *)(lVar9 + 0xa8);
    }
    pvVar11 = (void *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0x78,8);
  }
  FUN_01bed4f4(pvVar11,plVar10,param_1);
  lVar14 = *(long *)puVar4;
  param_1[2] = pvVar11;
  if (lVar14 == 0) {
    puVar12 = malloc(8);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    puVar12 = (undefined8 *)(lVar14 + 8);
    if (lVar9 != 0) {
      puVar12 = (undefined8 *)(lVar9 + 0xa8);
    }
    puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,8,8);
  }
  *puVar12 = 0;
  lVar14 = *(long *)puVar4;
  param_1[3] = puVar12;
  if (lVar14 == 0) {
    pvVar11 = malloc(0x40);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    puVar12 = (undefined8 *)(lVar14 + 8);
    if (lVar9 != 0) {
      puVar12 = (undefined8 *)(lVar9 + 0xa8);
    }
    pvVar11 = (void *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0x40,8);
  }
  FUN_01c03904(pvVar11,param_1,param_1[2]);
  lVar14 = *(long *)puVar4;
  param_1[4] = pvVar11;
  if (lVar14 == 0) {
    pvVar13 = malloc(0x5ab8);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      pvVar13 = (void *)0x0;
    }
    else {
      pvVar13 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x5ab8,8);
    }
  }
  FUN_01bfc554(pvVar13,param_1,pvVar11);
  lVar14 = *(long *)puVar4;
  param_1[5] = pvVar13;
  if (lVar14 == 0) {
    plVar10 = malloc(0x210);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    puVar12 = (undefined8 *)(lVar14 + 8);
    if (lVar9 != 0) {
      puVar12 = (undefined8 *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0x210,8);
  }
  memset(plVar10 + 1,0,0x1e0);
  puVar2 = puVar2 + 0x10;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[3] = (long)puVar2;
  plVar10[9] = (long)puVar2;
  plVar10[0xf] = (long)puVar2;
  plVar10[0x15] = (long)puVar2;
  plVar10[0x1b] = (long)puVar2;
  plVar10[0x21] = (long)puVar2;
  plVar10[0x27] = (long)puVar2;
  plVar10[0x2d] = (long)puVar2;
  plVar10[0x33] = (long)puVar2;
  plVar10[0x39] = (long)puVar2;
  *(undefined4 *)(plVar10 + 0x3d) = 0xffffffff;
  plVar10[0xd] = 0;
  plVar10[0xe] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1f] = 0;
  plVar10[0x20] = 0;
  plVar10[0x25] = 0;
  plVar10[0x26] = 0;
  plVar10[0x2b] = 0;
  plVar10[0x2c] = 0;
  plVar10[0x31] = 0;
  plVar10[0x32] = 0;
  plVar10[0x37] = 0;
  plVar10[0x38] = 0;
  plVar10[0x3e] = 0;
  plVar10[0x3f] = 0;
  *plVar10 = (long)(PTR_DAT_04bc0c28 + 0x10);
  plVar10[0x41] = (long)pvVar13;
  lVar14 = *(long *)puVar4;
  *(undefined4 *)(plVar10 + 0x40) = 0;
  param_1[6] = plVar10;
  if (lVar14 == 0) {
    puVar12 = malloc(0x18);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x18,8);
    }
  }
  *puVar12 = 0;
  lVar14 = *(long *)puVar4;
  *(undefined4 *)(puVar12 + 1) = 0;
  if (lVar14 == 0) {
    plVar10 = malloc(0x10);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    puVar5 = (undefined8 *)(lVar14 + 8);
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x10,8);
  }
  *(undefined4 *)(plVar10 + 1) = 0;
  puVar4 = PTR_DAT_04bd4738;
  puVar3 = puVar3 + 0x10;
  *plVar10 = (long)(PTR_DAT_04bcb400 + 0x10);
  puVar12[2] = plVar10;
  param_1[0xb] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[7] = puVar12;
  param_1[8] = puVar4 + 0x10;
  puVar12 = param_1 + 100;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)((long)param_1 + 0x18c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x19] = param_1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  puVar4 = PTR_DAT_04bc0cb0 + 0x10;
  *(undefined4 *)(param_1 + 0x31) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1cb) = 0;
  *(undefined1 *)((long)param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x40;
  *(undefined1 *)((long)param_1 + 0x23b) = 0;
  param_1[0x49] = puVar12;
  *(undefined1 *)((long)param_1 + 0x254) = 0;
  param_1[0x4b] = 0xffffffff;
  param_1[0x4c] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2c3) = 0;
  *(undefined1 *)((long)param_1 + 0x284) = 0;
  param_1[0x4e] = puVar3;
  *(undefined4 *)(param_1 + 0x5b) = 0x40;
  *(undefined1 *)((long)param_1 + 0x31b) = 0;
  param_1[0x3d] = puVar3;
  param_1[0x3e] = (undefined1 *)((long)param_1 + 0x1fc);
  *(undefined4 *)(param_1 + 0x4a) = 0x800;
  param_1[0x4f] = (long)param_1 + 0x284;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)((long)param_1 + 0x2dc) = 0;
  param_1[0x5a] = (undefined1 *)((long)param_1 + 0x2dc);
  param_1[0x2d] = 0;
  param_1[0x2e] = puVar4;
  param_1[0x2f] = puVar3;
  param_1[0x30] = (undefined1 *)((long)param_1 + 0x18c);
  param_1[0x3a] = 0xffffffff00000000;
  param_1[0x3b] = 0xffffffff;
  puVar4 = PTR_DAT_04bc0bf8 + 0x10;
  param_1[0x59] = puVar3;
  param_1[0x48] = puVar4;
  memset(puVar12,0,0x1000);
  puVar5 = param_1 + 0x264;
  puVar6 = puVar5;
  if (puVar5 <= (undefined8 *)((long)param_1 + 0x322U)) {
    puVar6 = (undefined8 *)((long)param_1 + 0x322U);
  }
  memset(puVar12,0,((long)puVar6 + (-0xe1 - (long)(param_1 + 0x48)) & 0xfffffffffffffffeU) + 2);
  puVar12 = param_1 + 0x280;
  *(undefined4 *)(param_1 + 0x266) = 0x800;
  param_1[0x265] = puVar12;
  param_1[0x267] = 0xffffffff;
  param_1[0x268] = 0xffffffff00000000;
  *(undefined1 *)((long)param_1 + 0x1334) = 0;
  *(undefined4 *)(param_1 + 0x269) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26c) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1364) = 0;
  param_1[0x26b] = (undefined1 *)((long)param_1 + 0x1364);
  *(undefined1 *)((long)param_1 + 0x13a3) = 0;
  *(undefined1 *)((long)param_1 + 0x13bc) = 0;
  param_1[0x26a] = puVar3;
  param_1[0x276] = (undefined1 *)((long)param_1 + 0x13bc);
  *(undefined4 *)(param_1 + 0x277) = 0x40;
  *(undefined1 *)((long)param_1 + 0x13fb) = 0;
  param_1[0x275] = puVar3;
  param_1[0x264] = puVar4;
  memset(puVar12,0,0x1000);
  puVar6 = param_1 + 0x480;
  if (param_1 + 0x480 <= (undefined8 *)((long)param_1 + 0x1402U)) {
    puVar6 = (undefined8 *)((long)param_1 + 0x1402U);
  }
  memset(puVar12,0,((long)puVar6 + (-0xe1 - (long)puVar5) & 0xfffffffffffffffeU) + 2);
  param_1[0x480] = param_1;
  param_1[0x481] = 0xffffffffffffd8f0;
  *(undefined4 *)((long)param_1 + 0x245f) = 0;
  *(undefined1 *)(param_1 + 0x48b) = 0;
  *(undefined8 *)((long)param_1 + 0x246c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x2474) = 1;
  param_1[0x49b] = 0xffffffff00000000;
  *(undefined2 *)((long)param_1 + 0x247e) = 0xffff;
  param_1[0x4a9] = 0xffffffff00000000;
  param_1[0x482] = 0;
  *(undefined1 *)((long)param_1 + 0x2494) = 0;
  param_1[0x491] = (undefined1 *)((long)param_1 + 0x2494);
  *(undefined4 *)(param_1 + 0x483) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x2504) = 0;
  param_1[0x49f] = (undefined1 *)((long)param_1 + 0x2504);
  *(undefined4 *)((long)param_1 + 0x242c) = 0;
  *(undefined1 *)((long)param_1 + 0x25cc) = 0;
  param_1[0x4b8] = (undefined1 *)((long)param_1 + 0x25cc);
  *(undefined2 *)(param_1 + 0x486) = 0;
  *(undefined1 *)((long)param_1 + 0x263c) = 0;
  param_1[0x484] = 0;
  *(undefined4 *)((long)param_1 + 0x2427) = 0;
  param_1[0x487] = 0;
  param_1[0x488] = 0;
  *(undefined8 *)((long)param_1 + 0x2446) = 0;
  param_1[0x48a] = 0;
  *(undefined4 *)((long)param_1 + 0x245c) = 0;
  *(undefined4 *)((long)param_1 + 0x2464) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x48d) = 0;
  *(undefined8 *)((long)param_1 + 0x2475) = 0;
  *(undefined4 *)(param_1 + 0x492) = 0x40;
  *(undefined1 *)((long)param_1 + 0x24d3) = 0;
  param_1[0x490] = puVar3;
  param_1[0x49c] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x49d) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2543) = 0;
  param_1[0x49e] = puVar3;
  param_1[0x4aa] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4ab) = 0;
  param_1[0x4ad] = (undefined1 *)((long)param_1 + 0x2574);
  *(undefined4 *)(param_1 + 0x4ae) = 0x40;
  param_1[0x4ac] = puVar3;
  *(undefined4 *)(param_1 + 0x4b9) = 0x40;
  param_1[0x4b7] = puVar3;
  param_1[0x4c2] = 0xffffffff00000000;
  param_1[0x4c3] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  param_1[0x4c6] = (undefined1 *)((long)param_1 + 0x263c);
  *(undefined4 *)(param_1 + 0x4c7) = 0x40;
  param_1[0x4c5] = puVar3;
  *(undefined1 *)((long)param_1 + 0x25b3) = 0;
  *(undefined1 *)((long)param_1 + 0x2574) = 0;
  *(undefined1 *)((long)param_1 + 0x260b) = 0;
  *(undefined1 *)((long)param_1 + 0x267b) = 0;
  return;
}

