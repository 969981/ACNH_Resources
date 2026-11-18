
void FUN_034c5d10(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  byte bVar9;
  undefined8 *puVar10;
  long lVar11;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar3 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar9 = *(byte *)(param_3 + 0xe);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar9;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b2ff30;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  puVar3 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0xffffffff;
  puVar4 = PTR_DAT_04bb3350;
  *(undefined4 *)((long)param_1 + 0x28c) = 0;
  if (lVar11 == 0) {
    pvVar7 = malloc(0x1330);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar10 = (undefined8 *)(lVar11 + 8);
    if (lVar6 != 0) {
      puVar10 = (undefined8 *)(lVar6 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0x1330,8);
  }
  memset((void *)((long)pvVar7 + 0x10),0,0x1320);
  *(long *)((long)pvVar7 + 200) = (long)pvVar7 + 0x160;
  *(void **)pvVar7 = pvVar7;
  *(void **)((long)pvVar7 + 8) = pvVar7;
  puVar10 = (undefined8 *)((long)pvVar7 + 0x30);
  *puVar10 = (long *)((long)pvVar7 + 200);
  *(long *)((long)pvVar7 + 0x160) = (long)pvVar7 + 0x1f8;
  *(long *)((long)pvVar7 + 0x1f8) = (long)pvVar7 + 0x290;
  lVar11 = *(long *)puVar3;
  *(long *)((long)pvVar7 + 0x290) = (long)pvVar7 + 0x328;
  *(long *)((long)pvVar7 + 0x328) = (long)pvVar7 + 0x3c0;
  *(long *)((long)pvVar7 + 0x3c0) = (long)pvVar7 + 0x458;
  *(long *)((long)pvVar7 + 0x458) = (long)pvVar7 + 0x4f0;
  *(long *)((long)pvVar7 + 0x4f0) = (long)pvVar7 + 0x588;
  *(long *)((long)pvVar7 + 0x588) = (long)pvVar7 + 0x620;
  *(long *)((long)pvVar7 + 0x620) = (long)pvVar7 + 0x6b8;
  *(long *)((long)pvVar7 + 0x6b8) = (long)pvVar7 + 0x750;
  *(long *)((long)pvVar7 + 0x750) = (long)pvVar7 + 0x7e8;
  *(long *)((long)pvVar7 + 0x7e8) = (long)pvVar7 + 0x880;
  *(long *)((long)pvVar7 + 0x880) = (long)pvVar7 + 0x918;
  *(long *)((long)pvVar7 + 0x918) = (long)pvVar7 + 0x9b0;
  *(long *)((long)pvVar7 + 0x9b0) = (long)pvVar7 + 0xa48;
  *(long *)((long)pvVar7 + 0xa48) = (long)pvVar7 + 0xae0;
  *(long *)((long)pvVar7 + 0xae0) = (long)pvVar7 + 0xb78;
  *(long *)((long)pvVar7 + 0xb78) = (long)pvVar7 + 0xc10;
  *(long *)((long)pvVar7 + 0xc10) = (long)pvVar7 + 0xca8;
  *(long *)((long)pvVar7 + 0xca8) = (long)pvVar7 + 0xd40;
  *(long *)((long)pvVar7 + 0xd40) = (long)pvVar7 + 0xdd8;
  *(long *)((long)pvVar7 + 0xdd8) = (long)pvVar7 + 0xe70;
  *(long *)((long)pvVar7 + 0xe70) = (long)pvVar7 + 0xf08;
  *(long *)((long)pvVar7 + 0xf08) = (long)pvVar7 + 4000;
  *(long *)((long)pvVar7 + 4000) = (long)pvVar7 + 0x1038;
  *(undefined8 **)((long)pvVar7 + 0x18) = puVar10;
  *(undefined8 **)((long)pvVar7 + 0x20) = puVar10;
  *(undefined4 *)((long)pvVar7 + 0x28) = 0x20;
  *(long *)((long)pvVar7 + 0x1038) = (long)pvVar7 + 0x10d0;
  *(long *)((long)pvVar7 + 0x10d0) = (long)pvVar7 + 0x1168;
  *(long *)((long)pvVar7 + 0x1168) = (long)pvVar7 + 0x1200;
  *(long *)((long)pvVar7 + 0x1200) = (long)pvVar7 + 0x1298;
  param_1[0x52] = (long)pvVar7;
  if (lVar11 == 0) {
    pvVar7 = malloc(0x1010);
    lVar11 = 0;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar10 = (undefined8 *)(lVar11 + 8);
    if (lVar6 != 0) {
      puVar10 = (undefined8 *)(lVar6 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0x1010,8);
    lVar11 = *(long *)puVar3;
  }
  memset(pvVar7,0,0x1010);
  *(long *)((long)pvVar7 + 0x10) = (long)pvVar7 + 0x18;
  *(undefined4 *)((long)pvVar7 + 0xc) = 500;
  *(long *)((long)pvVar7 + 0xfc0) = (long)pvVar7 + 0xfc8;
  *(undefined8 *)((long)pvVar7 + 0xfb8) = 0x600000000;
  *(undefined1 *)((long)pvVar7 + 0xff9) = 0;
  *(undefined8 *)((long)pvVar7 + 0xffc) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1004) = 0;
  param_1[0x53] = (long)pvVar7;
  if (lVar11 == 0) {
    plVar8 = malloc(0xa0);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar10 = (undefined8 *)(lVar11 + 8);
    if (lVar6 != 0) {
      puVar10 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar8 = (long *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0xa0,8);
  }
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = 0;
  plVar8[1] = 0;
  puVar5 = PTR_DAT_04bc6388;
  puVar2 = PTR_DAT_04bbba70;
  *plVar8 = (long)(PTR_DAT_04bc6388 + 0x10);
  lVar11 = *(long *)puVar3;
  puVar1 = puVar2 + 0x10;
  plVar8[6] = (long)puVar1;
  plVar8[10] = (long)puVar1;
  plVar8[0xe] = (long)puVar1;
  *(undefined4 *)((long)plVar8 + 0x94) = 3;
  param_1[0x54] = (long)plVar8;
  if (lVar11 == 0) {
    plVar8 = malloc(0xa0);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar10 = (undefined8 *)(lVar11 + 8);
    if (lVar6 != 0) {
      puVar10 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar8 = (long *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0xa0,8);
  }
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = 0;
  plVar8[1] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  lVar11 = *(long *)puVar3;
  puVar2 = puVar2 + 0x10;
  plVar8[6] = (long)puVar2;
  plVar8[10] = (long)puVar2;
  plVar8[0xe] = (long)puVar2;
  *(undefined4 *)((long)plVar8 + 0x94) = 3;
  param_1[0x55] = (long)plVar8;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x2b4) = 0;
  param_1[0x4b] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  if (lVar11 == 0) {
    plVar8 = malloc(0xd8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar10 = (undefined8 *)(lVar11 + 8);
    if (lVar6 != 0) {
      puVar10 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar8 = (long *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0xd8,8);
  }
  puVar1 = PTR_DAT_04bb3408;
  *(undefined4 *)(plVar8 + 1) = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  *(undefined4 *)(plVar8 + 7) = 0xffffffff;
  plVar8[9] = 0;
  plVar8[10] = 0;
  *(undefined4 *)(plVar8 + 9) = 0xffffffff;
  *plVar8 = (long)(puVar1 + 0x10);
  lVar11 = *(long *)puVar3;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  *(undefined4 *)((long)plVar8 + 0x6c) = 0xffffffff;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  *(undefined8 *)((long)plVar8 + 0x74) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar8 + 0x7c) = 0xbf800000;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *(undefined8 *)((long)plVar8 + 0x84) = 0xffffffffffffffff;
  *(undefined8 *)((long)plVar8 + 0x8c) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar8 + 0x94) = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  *(undefined4 *)((long)plVar8 + 0x97) = 0;
  *(undefined8 *)((long)plVar8 + 0x9c) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xa3) = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x15] = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xaf) = 0;
  *(undefined4 *)((long)plVar8 + 0xb4) = 0xffffffff;
  plVar8[0x17] = 0;
  plVar8[0x18] = 0;
  *(undefined4 *)((long)plVar8 + 0xbc) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xc4) = 0xffffffff;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  *(undefined4 *)((long)plVar8 + 0xcc) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xd4) = 0xffffffff;
  plVar8[10] = -1;
  plVar8[0xb] = 0;
  plVar8[0xb] = -1;
  plVar8[0xc] = 0;
  *(undefined8 *)((long)plVar8 + 100) = 0xffffffffffffffff;
  param_1[0x4d] = (long)plVar8;
  plVar8[2] = 0x1ffffffff;
  *(undefined4 *)(plVar8 + 3) = 3;
  *(undefined1 *)((long)plVar8 + 0xc) = 1;
  *(undefined1 *)((long)plVar8 + 10) = 0;
  *(undefined8 *)((long)plVar8 + 0x1c) = 0;
  *(undefined8 *)((long)plVar8 + 0x24) = 0x3f800000;
  *(undefined8 *)((long)plVar8 + 0x2c) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0x34) = 0xffffffff;
  *(undefined2 *)(plVar8 + 1) = 1;
  if (lVar11 == 0) {
    plVar8 = malloc(0xd8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar10 = (undefined8 *)(lVar11 + 8);
    if (lVar6 != 0) {
      puVar10 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar8 = (long *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0xd8,8);
  }
  *(undefined4 *)(plVar8 + 1) = 0;
  *plVar8 = (long)(puVar1 + 0x10);
  lVar11 = *(long *)puVar3;
  plVar8[7] = 0;
  plVar8[8] = 0;
  *(undefined4 *)(plVar8 + 7) = 0xffffffff;
  plVar8[9] = 0;
  plVar8[10] = 0;
  *(undefined4 *)(plVar8 + 9) = 0xffffffff;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  *(undefined4 *)((long)plVar8 + 0x6c) = 0xffffffff;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  *(undefined8 *)((long)plVar8 + 0x74) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar8 + 0x7c) = 0xbf800000;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *(undefined8 *)((long)plVar8 + 0x84) = 0xffffffffffffffff;
  *(undefined8 *)((long)plVar8 + 0x8c) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar8 + 0x94) = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  *(undefined4 *)((long)plVar8 + 0x97) = 0;
  *(undefined8 *)((long)plVar8 + 0x9c) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xa3) = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x15] = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xaf) = 0;
  *(undefined4 *)((long)plVar8 + 0xb4) = 0xffffffff;
  plVar8[0x17] = 0;
  plVar8[0x18] = 0;
  *(undefined4 *)((long)plVar8 + 0xbc) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xc4) = 0xffffffff;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  *(undefined4 *)((long)plVar8 + 0xcc) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xd4) = 0xffffffff;
  plVar8[10] = -1;
  plVar8[0xb] = 0;
  plVar8[0xb] = -1;
  plVar8[0xc] = 0;
  *(undefined8 *)((long)plVar8 + 100) = 0xffffffffffffffff;
  param_1[0x4e] = (long)plVar8;
  plVar8[2] = 0x1ffffffff;
  *(undefined4 *)(plVar8 + 3) = 2;
  *(undefined1 *)((long)plVar8 + 0xc) = 1;
  *(undefined1 *)((long)plVar8 + 10) = 0;
  *(undefined8 *)((long)plVar8 + 0x1c) = 0;
  *(undefined8 *)((long)plVar8 + 0x24) = 0x3f800000;
  *(undefined8 *)((long)plVar8 + 0x2c) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0x34) = 0xffffffff;
  *(undefined2 *)(plVar8 + 1) = 1;
  if (lVar11 == 0) {
    plVar8 = malloc(0xd8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar10 = (undefined8 *)(lVar11 + 8);
    if (lVar6 != 0) {
      puVar10 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar8 = (long *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0xd8,8);
  }
  *(undefined4 *)(plVar8 + 1) = 0;
  *plVar8 = (long)(puVar1 + 0x10);
  plVar8[7] = 0;
  plVar8[8] = 0;
  *(undefined4 *)(plVar8 + 7) = 0xffffffff;
  plVar8[9] = 0;
  plVar8[10] = 0;
  *(undefined4 *)(plVar8 + 9) = 0xffffffff;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  *(undefined4 *)((long)plVar8 + 0x6c) = 0xffffffff;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  *(undefined8 *)((long)plVar8 + 0x74) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar8 + 0x7c) = 0xbf800000;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *(undefined8 *)((long)plVar8 + 0x84) = 0xffffffffffffffff;
  *(undefined8 *)((long)plVar8 + 0x8c) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar8 + 0x94) = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  *(undefined4 *)((long)plVar8 + 0x97) = 0;
  *(undefined8 *)((long)plVar8 + 0x9c) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xa3) = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x15] = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xaf) = 0;
  *(undefined4 *)((long)plVar8 + 0xb4) = 0xffffffff;
  plVar8[0x17] = 0;
  plVar8[0x18] = 0;
  *(undefined4 *)((long)plVar8 + 0xbc) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xc4) = 0xffffffff;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  *(undefined4 *)((long)plVar8 + 0xcc) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0xd4) = 0xffffffff;
  plVar8[10] = -1;
  plVar8[0xb] = 0;
  plVar8[0xb] = -1;
  plVar8[0xc] = 0;
  *(undefined8 *)((long)plVar8 + 100) = 0xffffffffffffffff;
  param_1[0x4f] = (long)plVar8;
  plVar8[2] = 0x1ffffffff;
  *(undefined4 *)(plVar8 + 3) = 0;
  *(undefined1 *)((long)plVar8 + 0xc) = 1;
  *(undefined1 *)((long)plVar8 + 10) = 0;
  *(undefined8 *)((long)plVar8 + 0x1c) = 0;
  *(undefined8 *)((long)plVar8 + 0x24) = 0x3f800000;
  *(undefined8 *)((long)plVar8 + 0x2c) = 0xffffffff;
  *(undefined4 *)((long)plVar8 + 0x34) = 0xffffffff;
  *(undefined2 *)(plVar8 + 1) = 1;
  *(bool *)((long)param_1 + 0x2b4) = *(int *)PTR_DAT_04bc20e0 != 0;
  return;
}

