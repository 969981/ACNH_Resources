
void FUN_03055348(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  long *plVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  
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
    bVar10 = *(byte *)(param_3 + 0xe);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar10;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x46] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04af73a8;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  lVar5 = nn::os::GetSystemTick();
  puVar4 = PTR_DAT_04bb3170;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  puVar3 = PTR_DAT_04bb2698;
  param_1[0x4a] = -1;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x47] = lVar5;
  uVar2 = *(undefined2 *)puVar4;
  param_1[0x4e] = 0;
  lVar5 = *(long *)puVar3;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x49] = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0x4d) = uVar2;
  puVar4 = PTR_DAT_04bb3350;
  *(undefined4 *)((long)param_1 + 0x287) = 0;
  if (lVar5 == 0) {
    pvVar7 = malloc(0x38);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar8 = (undefined8 *)(lVar5 + 8);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)(lVar6 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x38,8);
  }
  FUN_03450390();
  param_1[0x43] = (long)pvVar7;
  lVar5 = *(long *)puVar3;
  if (lVar5 == 0) {
    puVar8 = malloc(0x60);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar8 = (undefined8 *)(lVar5 + 8);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)(lVar6 + 0xa8);
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x60,8);
  }
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar1 = PTR_DAT_04bc3880 + 0x10;
  puVar8[7] = puVar1;
  puVar8[3] = puVar1;
  puVar8[4] = 0;
  puVar8[0xb] = 0xffffffff;
  puVar1 = PTR_DAT_04bb36f8;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar11 = *(long **)puVar1;
  param_1[0x50] = (long)puVar8;
  if (plVar11 == (long *)0x0) {
    pvVar7 = (void *)0x0;
    param_1[0x4e] = 0;
    goto LAB_030556b4;
  }
  lVar5 = *plVar11;
  if (lVar5 == 0) {
    lVar6 = 1;
    lVar5 = *(long *)puVar3;
    if (lVar5 == 0) goto LAB_030555b8;
LAB_03055568:
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar8 = (undefined8 *)(lVar5 + 8);
    if (lVar9 != 0) {
      puVar8 = (undefined8 *)(lVar9 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x88,8);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar6 = *(long *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = lVar5;
    lVar5 = *(long *)puVar3;
    if (lVar5 != 0) goto LAB_03055568;
LAB_030555b8:
    pvVar7 = malloc(0x88);
  }
  FUN_0343fab4();
  local_60 = 0x100000;
  uStack_58 = 0x200000;
  FUN_0343fddc(pvVar7,&local_60);
  if (lVar6 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar6;
  }
  plVar11 = *(long **)puVar1;
  param_1[0x4e] = (long)pvVar7;
  if (plVar11 == (long *)0x0) {
    pvVar7 = (void *)0x0;
    goto LAB_030556b4;
  }
  lVar5 = *plVar11;
  if (lVar5 == 0) {
    lVar6 = 1;
    lVar5 = *(long *)puVar3;
    if (lVar5 == 0) goto LAB_03055674;
LAB_03055628:
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar8 = (undefined8 *)(lVar5 + 8);
    if (lVar9 != 0) {
      puVar8 = (undefined8 *)(lVar9 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x88,8);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar6 = *(long *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = lVar5;
    lVar5 = *(long *)puVar3;
    if (lVar5 != 0) goto LAB_03055628;
LAB_03055674:
    pvVar7 = malloc(0x88);
  }
  FUN_0343fab4();
  local_60 = 0x100000;
  uStack_58 = 0x200000;
  FUN_0343fddc(pvVar7,&local_60);
  if (lVar6 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar6;
  }
LAB_030556b4:
  param_1[0x4f] = (long)pvVar7;
  return;
}

