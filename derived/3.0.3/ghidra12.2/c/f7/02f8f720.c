
void FUN_02f8f720(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04ae7ac8;
  param_1[0x43] = 0x100000000;
  param_1[0x44] = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x45] = -0x100000000;
  puVar2 = PTR_DAT_04bb3350;
  if (lVar8 == 0) {
    puVar5 = malloc(0x421a0);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar8 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    puVar5 = (undefined8 *)0x0;
    if (plVar4 != (long *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x421a0,8);
    }
  }
  puVar7 = puVar5 + 0x32;
  puVar5[2] = puVar5 + 4;
  *puVar5 = 0;
  puVar5[1] = 0;
  for (lVar8 = 0x2ce; puVar7[-0x2e] = puVar7, lVar8 != 0; lVar8 = lVar8 + -2) {
    *puVar7 = puVar7 + 0x2e;
    puVar7 = puVar7 + 0x5c;
  }
  puVar5[3] = puVar5 + 4;
  puVar5[0x8136] = 0;
  if (puVar5 + 0x8164 != (undefined8 *)0x0) {
    *puVar5 = 0x2d000000000;
    puVar5[1] = puVar5 + 0x8164;
  }
  lVar8 = *(long *)puVar1;
  param_1[0x46] = (long)puVar5;
  if (lVar8 == 0) {
    puVar5 = malloc(0x3ffe0);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar8 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    puVar5 = (undefined8 *)0x0;
    if (plVar4 != (long *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x3ffe0,8);
    }
  }
  puVar7 = puVar5 + 0x5e;
  puVar5[2] = puVar5 + 4;
  *puVar5 = 0;
  puVar5[1] = 0;
  for (lVar8 = 0x166; puVar7[-0x5a] = puVar7, lVar8 != 0; lVar8 = lVar8 + -2) {
    *puVar7 = puVar7 + 0x5a;
    puVar7 = puVar7 + 0xb4;
  }
  puVar5[3] = puVar5 + 4;
  puVar5[0x7e3a] = 0;
  if (puVar5 + 0x7e94 != (undefined8 *)0x0) {
    *puVar5 = 0x16800000000;
    puVar5[1] = puVar5 + 0x7e94;
  }
  lVar8 = *(long *)puVar1;
  param_1[0x47] = (long)puVar5;
  if (lVar8 == 0) {
    plVar4 = malloc(0x48);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar5 = (undefined8 *)(lVar8 + 8);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x48,8);
  }
  *plVar4 = param_1[0x46];
  lVar8 = nn::os::GetSystemTick();
  *(undefined4 *)((long)plVar4 + 0x14) = 0;
  plVar4[1] = lVar8;
  *(undefined1 *)(plVar4 + 2) = 0;
  *(undefined4 *)((long)plVar4 + 0x1c) = 0;
  *(undefined1 *)(plVar4 + 3) = 0;
  *(undefined4 *)((long)plVar4 + 0x24) = 0;
  *(undefined1 *)(plVar4 + 4) = 0;
  param_1[0x48] = (long)plVar4;
  plVar4[5] = (long)&PTR_LAB_04ae7ce0;
  plVar4[6] = (long)param_1;
  return;
}

