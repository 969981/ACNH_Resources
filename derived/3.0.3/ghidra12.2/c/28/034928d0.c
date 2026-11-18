
void FUN_034928d0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  byte bVar10;
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
    bVar10 = *(byte *)(param_3 + 0xe);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar10;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04b2df60;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x45] = 0;
  param_1[0x4c] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x50] = (long)puVar1;
  memset(param_1 + 0x51,0,0x1bf30);
  lVar11 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar7 = param_1;
  do {
    FUN_03463544(plVar7 + 0x51,0);
    *(undefined4 *)(plVar7 + 0x7c) = 0x40;
    lVar11 = lVar11 + -1;
    plVar7[0x7b] = (long)plVar7 + 0x3e4;
    *(undefined1 *)((long)plVar7 + 0x423) = 0;
    *(undefined1 *)((long)plVar7 + 0x3e4) = 0;
    plVar7[0x7a] = (long)puVar1;
    *(undefined4 *)(plVar7 + 0x85) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar7 = plVar7 + 0x35;
  } while (lVar11 != 0);
  *(undefined4 *)(param_1 + 0x3839) = 0;
  *(undefined4 *)(param_1 + 0x383a) = 0;
  param_1[0x383b] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  param_1[0x3837] = (long)(puVar2 + 0x10);
  param_1[0x3838] = -1;
  memset(param_1 + 0x383c,0,0xc00);
  lVar11 = 0x40;
  plVar7 = param_1 + 0x3841;
  do {
    *(undefined4 *)(plVar7 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar7 + -0x24) = 0;
    plVar7[-4] = 0;
    plVar7[-3] = 0;
    iVar5 = FUN_015d3550(0);
    *(undefined4 *)(plVar7 + -1) = 0xffffffff;
    iVar3 = 0;
    if (iVar5 != -1) {
      iVar3 = iVar5;
    }
    *(undefined1 *)((long)plVar7 + -4) = 0;
    lVar11 = lVar11 + -1;
    *(int *)(plVar7 + -2) = iVar3;
    *(undefined4 *)plVar7 = 0;
    plVar7 = plVar7 + 6;
  } while (lVar11 != 0);
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x39be) = 0;
  param_1[0x39bc] = (long)puVar2;
  param_1[0x39bd] = -1;
  *(undefined4 *)(param_1 + 0x39bf) = 0;
  *(undefined1 *)(param_1 + 0x39c0) = 0;
  param_1[0x39c1] = 0;
  *(undefined1 *)(param_1 + 0x39c2) = 1;
  *(undefined2 *)((long)param_1 + 0x1ce12) = 0;
  *(undefined8 *)((long)param_1 + 0x1ce14) = 0xffffffffffffffff;
  puVar1 = PTR_DAT_04bc9938 + 0x10;
  *(undefined4 *)((long)param_1 + 0x1ce1c) = 0xffffffff;
  param_1[0x39c4] = 0;
  param_1[0x39c5] = (long)puVar1;
  FUN_03463544(param_1 + 0x39c9,0);
  param_1[0x39f2] = (long)puVar2;
  param_1[0x39f3] = -1;
  *(undefined4 *)(param_1 + 0x39f4) = 0;
  *(undefined4 *)(param_1 + 0x39f5) = 0;
  puVar1 = PTR_DAT_04bc6260 + 0x10;
  param_1[0x39f7] = 0;
  param_1[0x39f8] = 0;
  *(undefined1 *)((long)param_1 + 0x1cfec) = 0;
  param_1[0x39f9] = 0;
  param_1[0x39fc] = (long)param_1 + 0x1cfec;
  param_1[0x39f6] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x1d06b) = 0;
  *(undefined4 *)(param_1 + 0x39fd) = 0x80;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined4 *)(param_1 + 0x3a0e) = 0;
  param_1[0x3a0f] = 0;
  *(undefined1 *)(param_1 + 0x3a10) = 0;
  *(undefined4 *)(param_1 + 0x3a11) = 0;
  *(undefined4 *)(param_1 + 0x3a14) = 0;
  param_1[0x39fa] = 0xffffffff;
  param_1[0x39fb] = (long)puVar1;
  param_1[0x3b1a] = 0;
  param_1[0x3b1b] = 0;
  param_1[0x3b1c] = 0;
  param_1[0x3b1d] = 0;
  param_1[0x3b21] = 0;
  param_1[0x3b20] = 0;
  param_1[0x3b1f] = 0;
  param_1[0x3b1e] = 0;
  param_1[0x3a12] = (long)param_1 + 0x1d0a4;
  param_1[0x3a13] = 0x10;
  param_1[0x3b15] = (long)&PTR_LAB_04b2e198;
  param_1[0x3b16] = (long)param_1;
  puVar1 = PTR_DAT_04bc5ae8;
  param_1[0x3b19] = 0;
  *(undefined1 *)(param_1 + 0x3b22) = 0;
  param_1[0x3b23] = -1;
  *(undefined1 *)(param_1 + 0x3b24) = 0;
  param_1[0x3b25] = 0;
  *(undefined4 *)(param_1 + 0x3b26) = 0xffffffff;
  param_1[0x3b1a] = (long)(puVar1 + 0x10);
  param_1[0x3b1e] = (long)(puVar1 + 0x10);
  (**(code **)(*(long *)(param_3 + 0x18) + 0x10))((long *)(param_3 + 0x18),param_1 + 0x39c5);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    puVar8 = malloc(0x18);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x18,8);
    }
  }
  puVar8[2] = 0;
  puVar4 = PTR_DAT_04bc5ca0;
  *puVar8 = 0;
  puVar8[1] = 0;
  iVar3 = *(int *)puVar4;
  if (0 < iVar3) {
    lVar11 = *(long *)puVar1;
    if (lVar11 == 0) {
      pvVar9 = malloc((long)iVar3 << 3);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_03492d14;
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)iVar3 << 3,8);
    }
    if (pvVar9 != (void *)0x0) {
      puVar8[2] = pvVar9;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(int *)((long)puVar8 + 0xc) = iVar3;
    }
  }
LAB_03492d14:
  param_1[0x46] = (long)puVar8;
  FUN_03515944(param_1 + 0x3a0f);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  return;
}

