
void FUN_02c2ee60(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined **local_80;
  long *plStack_78;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  if (param_3 != 0) {
    bVar9 = *(byte *)(param_3 + 0xe);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar9;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *param_1 = (long)&PTR_LAB_04aaee60;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x69] = 0;
  param_1[0x3e] = -1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x44] = (long)puVar1;
  param_1[0x57] = 0;
  *(undefined8 *)((long)param_1 + 0x26c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x274) = 0xffffffffffffffff;
  param_1[0x58] = 0;
  *(undefined8 *)((long)param_1 + 0x264) = 0xffffffffffffffff;
  param_1[0x4a] = (long)param_1 + 0x264;
  param_1[0x4b] = 3;
  param_1[0x65] = (long)"agl::TextureData";
  *(undefined4 *)(param_1 + 0x66) = 0x10000;
  *(undefined4 *)((long)param_1 + 0x34f) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x374) = 0;
  *(undefined8 *)((long)param_1 + 900) = 0;
  *(undefined4 *)((long)param_1 + 0x38c) = 0;
  param_1[0x6f] = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[0x70] = (long)&DAT_0407ebb1;
  param_1[0x72] = 0;
  lVar4 = nn::os::GetSystemTick();
  param_1[0x79] = 0;
  *(undefined4 *)((long)param_1 + 0x3cc) = 0x2d1;
  plVar5 = param_1 + 0x8c;
  lVar11 = 0x2d0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x73] = lVar4;
  *(undefined1 *)((long)param_1 + 0x3a4) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = (long)(param_1 + 0x7a);
  do {
    plVar5[-6] = (long)plVar5;
    plVar5[-0xc] = (long)(plVar5 + -6);
    plVar5[-0x12] = (long)(plVar5 + -0xc);
    lVar11 = lVar11 + -3;
    plVar5 = plVar5 + 0x12;
  } while (lVar11 != 0);
  param_1[0x115a] = 0;
  param_1[0x78] = (long)(param_1 + 0x7a);
  *(undefined4 *)(param_1 + 0x1160) = 0;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    puVar6 = malloc(0x90);
    if (puVar6 != (undefined8 *)0x0) goto LAB_02c2f0d0;
LAB_02c2f134:
    iVar8 = (int)param_1[0x67];
    if (iVar8 == 0) goto LAB_02c2f178;
    puVar6 = (undefined8 *)param_1[0x68];
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar11 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if ((plVar5 == (long *)0x0) ||
       (puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x90,8),
       puVar6 == (undefined8 *)0x0)) goto LAB_02c2f134;
LAB_02c2f0d0:
    iVar8 = 3;
    *puVar6 = 0;
    puVar6[1] = 0xffffffffffffffff;
    puVar6[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 3) = 0;
    puVar6[4] = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar6 + 0x1c) = 0;
    *(undefined1 *)(puVar6 + 5) = 0;
    puVar6[8] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar6[10] = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar6 + 0x4c) = 0;
    *(undefined1 *)(puVar6 + 0xb) = 0;
    puVar6[0xe] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    puVar6[0x10] = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar6 + 0x7c) = 0;
    *(undefined1 *)(puVar6 + 0x11) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0xffffffffffffffff;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x67) = 3;
    param_1[0x68] = (long)puVar6;
  }
  iVar10 = 0;
  do {
    puVar12 = puVar6 + (long)iVar10 * 6;
    iVar10 = iVar10 + 1;
    *puVar12 = 0;
    puVar12[1] = 0xffffffffffffffff;
    puVar12[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar12 + 3) = 0;
    *(undefined1 *)((long)puVar12 + 0x1c) = 0;
    *(undefined1 *)(puVar12 + 5) = 0;
  } while (iVar8 != iVar10);
LAB_02c2f178:
  lVar11 = *(long *)puVar1;
  if (lVar11 == 0) {
    plVar5 = malloc(0x1bf58);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar11 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1bf58,8);
    }
  }
  *plVar5 = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(plVar5 + 1,0,0x1bf30);
  lVar11 = 0x10e;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  lVar4 = 0;
  do {
    FUN_03463544((long)plVar5 + lVar4 + 8,0);
    lVar11 = lVar11 + -1;
    *(undefined4 *)((long)plVar5 + lVar4 + 0x160) = 0x40;
    *(undefined1 *)((long)plVar5 + lVar4 + 0x1a3) = 0;
    *(undefined1 *)((long)plVar5 + lVar4 + 0x164) = 0;
    *(undefined4 *)((long)plVar5 + lVar4 + 0x1a8) = 0;
    *(undefined **)((long)plVar5 + lVar4 + 0x150) = puVar2;
    *(long *)((long)plVar5 + lVar4 + 0x158) = (long)plVar5 + lVar4 + 0x164;
    puVar3 = PTR_DAT_04bc8e10;
    lVar4 = lVar4 + 0x1a8;
  } while (lVar11 != 0);
  *(undefined4 *)(plVar5 + 0x37e9) = 0;
  *(undefined4 *)(plVar5 + 0x37ea) = 0;
  plVar5[0x37e7] = (long)(puVar3 + 0x10);
  plVar5[0x37e8] = -1;
  param_1[0x6b] = (long)plVar5;
  lVar11 = *(long *)puVar1;
  if (lVar11 == 0) {
    pvVar7 = malloc(0x1f0);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar11 + 8);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x1f0,8);
  }
  local_80 = &PTR_LAB_04aaf390;
  plStack_78 = param_1;
  FUN_0340c9e0(pvVar7,&local_80);
  param_1[0x6d] = (long)pvVar7;
  return;
}

