
void FUN_02dae570(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  long lVar13;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar5 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar6 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar6 + 0x10);
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
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ac65d8;
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar8 = malloc(0xa0);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar11 = (undefined8 *)(lVar13 + 8);
    if (lVar7 != 0) {
      puVar11 = (undefined8 *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0xa0,8);
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
  puVar1 = PTR_DAT_04bbba70;
  *plVar8 = (long)(PTR_DAT_04bc6388 + 0x10);
  puVar1 = puVar1 + 0x10;
  plVar8[6] = (long)puVar1;
  plVar8[10] = (long)puVar1;
  plVar8[0xe] = (long)puVar1;
  *(undefined4 *)((long)plVar8 + 0x94) = 3;
  param_1[0x43] = (long)plVar8;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = (long)puVar1;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x330), lVar13 == 0)) ||
     (lVar13 = *(long *)(lVar13 + 0xd0), lVar13 == 0)) {
    lVar7 = 1;
    lVar13 = *(long *)puVar5;
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    lVar7 = *(long *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = lVar13;
    lVar13 = *(long *)puVar5;
  }
  if (lVar13 == 0) {
    puVar10 = malloc(1);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    puVar11 = (undefined8 *)(lVar13 + 8);
    if (lVar9 != 0) {
      puVar11 = (undefined8 *)(lVar9 + 0xa8);
    }
    puVar10 = (undefined1 *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,1,8);
  }
  *puVar10 = 0;
  lVar13 = *(long *)puVar5;
  if (lVar13 == 0) {
    puVar11 = malloc(0x20);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    puVar11 = (undefined8 *)0x0;
    if (plVar8 != (long *)0x0) {
      puVar11 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
    }
  }
  *puVar11 = &DAT_04ac67f0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = puVar10;
  param_1[0x49] = (long)puVar10;
  plVar8 = (long *)param_1[0x4a];
  param_1[0x4a] = (long)puVar11;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar13 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (lVar7 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar7;
  }
  return;
}

