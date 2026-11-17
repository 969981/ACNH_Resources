
void FUN_02c87580(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    bVar9 = *(byte *)(param_3 + 0xe);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar9;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  *param_1 = (long)&PTR_FUN_04ab3728;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3e] = -1;
  param_1[0x47] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4b] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4c,0,0x1bf30);
  puVar2 = PTR_DAT_04bb2bc0;
  lVar11 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar6 = param_1;
  do {
    FUN_03463544(plVar6 + 0x4c,0);
    *(undefined4 *)(plVar6 + 0x77) = 0x40;
    lVar11 = lVar11 + -1;
    plVar6[0x76] = (long)plVar6 + 0x3bc;
    *(undefined1 *)((long)plVar6 + 0x3fb) = 0;
    *(undefined1 *)((long)plVar6 + 0x3bc) = 0;
    plVar6[0x75] = (long)puVar1;
    *(undefined4 *)(plVar6 + 0x80) = 0;
    plVar6 = plVar6 + 0x35;
  } while (lVar11 != 0);
  *(undefined4 *)(param_1 + 0x3834) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  *(undefined4 *)(param_1 + 0x3836) = 0;
  *(undefined4 *)(param_1 + 0x3837) = 0;
  param_1[0x3838] = 0;
  *(undefined4 *)(param_1 + 0x3839) = 0;
  param_1[0x383a] = 0;
  *(undefined4 *)(param_1 + 0x383b) = 0xffffffff;
  param_1[0x3832] = (long)(puVar1 + 0x10);
  param_1[0x3833] = -1;
  FUN_03135560(param_1 + 0x383c);
  *(undefined4 *)(param_1 + 0x385f) = 0;
  param_1[0x3860] = 0;
  *(undefined4 *)(param_1 + 0x3861) = 0;
  plVar6 = param_1 + 0x3862;
  *plVar6 = (long)&PTR_LAB_04ab3940;
  FUN_02c8cfc4(param_1 + 0x3863);
  piVar4 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6);
  if (0 < *piVar4) {
    lVar11 = 0;
    puVar8 = *(undefined8 **)(piVar4 + 4);
    do {
      puVar10 = *(undefined8 **)(*(long *)(piVar4 + 2) + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *puVar10 = puVar8;
      *(undefined8 **)(piVar4 + 4) = puVar10;
      puVar8 = puVar10;
    } while (lVar11 < *piVar4);
  }
  *piVar4 = 0;
  *(undefined1 *)(param_1 + 0x3967) = 0;
  puVar3 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar7 = malloc(0x18);
joined_r0x02c877ec:
    if (pvVar7 != (void *)0x0) {
      param_1[0x3838] = (long)pvVar7;
      *(undefined4 *)(param_1 + 0x3837) = 6;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar11 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
      goto joined_r0x02c877ec;
    }
  }
  lVar11 = *(long *)puVar1;
  if (lVar11 == 0) {
    pvVar7 = malloc(0x18);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar6 = (long *)(lVar11 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto LAB_02c8785c;
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
  }
  if (pvVar7 != (void *)0x0) {
    param_1[0x383a] = (long)pvVar7;
    *(undefined4 *)(param_1 + 0x3839) = 6;
  }
LAB_02c8785c:
  lVar11 = *(long *)puVar1;
  if (lVar11 == 0) {
    puVar8 = malloc(0x2a8);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar6 = (long *)(lVar11 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2a8,8);
  }
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 2) = 0xffffffff;
    puVar1 = PTR_DAT_04bc4ee8;
    puVar2 = puVar2 + 0x10;
    *(undefined1 *)((long)puVar8 + 0x9c) = 0;
    puVar8[0x11] = puVar2;
    puVar8[0x12] = (undefined1 *)((long)puVar8 + 0x9c);
    puVar8[0x1f] = puVar2;
    puVar8[0x20] = (long)puVar8 + 0x10c;
    puVar1 = puVar1 + 0x10;
    *(undefined1 *)((long)puVar8 + 0x2c) = 0;
    puVar8[3] = puVar2;
    puVar8[4] = (undefined1 *)((long)puVar8 + 0x2c);
    puVar8[0xf] = puVar1;
    puVar8[0x1d] = puVar1;
    puVar8[1] = puVar1;
    puVar8[0x2b] = puVar1;
    puVar8[0x39] = puVar1;
    puVar8[0x47] = puVar1;
    *(undefined1 *)((long)puVar8 + 0x6b) = 0;
    *puVar8 = 6;
    *(undefined4 *)(puVar8 + 5) = 0x40;
    *(undefined1 *)(puVar8 + 0xe) = 1;
    *(undefined4 *)(puVar8 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar8 + 0xdb) = 0;
    *(undefined1 *)(puVar8 + 0x1c) = 1;
    *(undefined4 *)(puVar8 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar8 + 0x14b) = 0;
    *(undefined1 *)((long)puVar8 + 0x10c) = 0;
    *(undefined1 *)(puVar8 + 0x2a) = 1;
    *(undefined4 *)(puVar8 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar8 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar8 + 0x17c) = 0;
    *(undefined1 *)(puVar8 + 0x38) = 1;
    *(undefined4 *)(puVar8 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar8 + 0x22b) = 0;
    *(undefined1 *)((long)puVar8 + 0x1ec) = 0;
    *(undefined1 *)(puVar8 + 0x46) = 1;
    *(undefined4 *)(puVar8 + 0x48) = 0xffffffff;
    puVar8[0x4a] = (long)puVar8 + 0x25c;
    *(undefined4 *)(puVar8 + 0x4b) = 0x40;
    *(undefined1 *)((long)puVar8 + 0x29b) = 0;
    *(undefined1 *)((long)puVar8 + 0x25c) = 0;
    puVar8[0x49] = puVar2;
    *(undefined1 *)(puVar8 + 0x54) = 1;
    puVar8[0x2d] = puVar2;
    puVar8[0x2e] = (long)puVar8 + 0x17c;
    puVar8[0x3b] = puVar2;
    puVar8[0x3c] = (long)puVar8 + 0x1ec;
    *(undefined4 *)(param_1 + 0x385f) = 6;
    param_1[0x3860] = (long)(puVar8 + 1);
  }
  return;
}

