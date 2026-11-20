
void FUN_03d794f4(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03c5cce8(param_1,param_2,0);
  puVar3 = PTR_DAT_04bd45f0;
  param_1[0x3e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_3 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar7;
  puVar6 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x18);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar11 = (undefined8 *)(lVar12 + 8);
    if (lVar8 != 0) {
      puVar11 = (undefined8 *)(lVar8 + 0xa8);
    }
    pvVar9 = (void *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0x18,8);
  }
  *(undefined4 *)((long)pvVar9 + 0x10) = 0;
  *(void **)pvVar9 = pvVar9;
  *(void **)((long)pvVar9 + 8) = pvVar9;
  plVar1 = param_1 + 0x40;
  param_1[0x3b] = (long)pvVar9;
  puVar2 = PTR_DAT_04bd4738;
  *(undefined4 *)((long)pvVar9 + 0x14) = 8;
  param_1[0x41] = 0xffffffff;
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0xffffffff;
  *param_1 = (long)&PTR_FUN_04b92000;
  param_1[0x4e] = (long)param_1 + 0x27c;
  param_1[0x40] = (long)(puVar2 + 0x10);
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0x400;
  *(undefined2 *)((long)param_1 + 0xa7a) = 0;
  param_1[0x4d] = (long)(PTR_DAT_04bb62a0 + 0x10);
  *(undefined2 *)((long)param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x152) = 0x40;
  *(undefined1 *)((long)param_1 + 0xa94) = 0;
  param_1[0x151] = (long)param_1 + 0xa94;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(param_1 + 0x15d) = 0x40;
  param_1[0x166] = 5;
  *(undefined8 *)((long)param_1 + 0xc5e) = 0;
  *(undefined4 *)((long)param_1 + 0xc66) = 0;
  lVar12 = *(long *)puVar3;
  param_1[0x18a] = 0;
  param_1[0x150] = (long)puVar2;
  param_1[0x15b] = (long)puVar2;
  *(undefined1 **)((long)param_1 + 0xb7c) = &DAT_3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0xb87) = 0;
  *(undefined1 *)((long)param_1 + 0xaec) = 0;
  *(undefined8 *)((long)param_1 + 0xb8c) = 0x3f800000ffffffff;
  *(undefined1 *)((long)param_1 + 0xad3) = 0;
  param_1[0x174] = -1;
  param_1[0x15c] = (long)param_1 + 0xaec;
  *(undefined8 *)((long)param_1 + 0xc55) = 0;
  *(undefined1 *)((long)param_1 + 0xb2b) = 0;
  param_1[0x167] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  *(undefined2 *)(param_1 + 0x16f) = 0;
  *(undefined4 *)((long)param_1 + 0xb84) = 0;
  *(undefined1 *)((long)param_1 + 0xb94) = 0;
  *(undefined4 *)(param_1 + 0x173) = 0;
  *(undefined2 *)((long)param_1 + 0xb9c) = 0;
  *(undefined1 *)(param_1 + 0x175) = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  *(undefined1 *)((long)param_1 + 0xc5d) = 0xff;
  param_1[0x18e] = 0;
  *(undefined1 *)(param_1 + 399) = 0;
  if (lVar12 == 0) {
    plVar10 = malloc(0x20);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar10 = (long *)(lVar12 + 8);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x20,8);
    }
  }
  (**(code **)(param_1[0x4d] + 0x18))(param_1 + 0x4d);
  lVar12 = param_1[0x4e];
  *(undefined4 *)(plVar10 + 2) = 0x400;
  *plVar10 = (long)(PTR_DAT_04bb4ca0 + 0x10);
  plVar10[1] = lVar12;
  *(undefined2 *)(lVar12 + 0x7fe) = 0;
  *(undefined1 *)((long)plVar10 + 0x1c) = 0;
  *(undefined2 *)plVar10[1] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  param_1[0x4c] = (long)plVar10;
  *(undefined1 **)((long)param_1 + 0xbac) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbb4) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbbc) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbc4) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbcc) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbd4) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbdc) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbe4) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbec) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbf4) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xbfc) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xc04) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xc0c) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xc14) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xc1c) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xc24) = &DAT_3f8000003f800000;
  FUN_03ebac90(plVar1,3,0,0,0);
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::Sleep";
  local_50 = puVar3;
  FUN_03ebaf40(plVar1,0,&local_50);
  puVar11 = (undefined8 *)param_1[0x46];
  puVar11[4] = &LAB_03d79944;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_04b92100;
  puVar11[1] = param_1;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  pcStack_48 = "State::FadeIn";
  local_50 = puVar3;
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar11 = (undefined8 *)(param_1[0x46] + (ulong)(1 < *(uint *)(param_1 + 0x45)) * 0x40);
  *puVar11 = &PTR_LAB_04b92100;
  puVar11[1] = param_1;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = &LAB_03d79950;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  pcStack_48 = "State::In";
  local_50 = puVar3;
  FUN_03ebaf40(plVar1,2,&local_50);
  puVar11 = (undefined8 *)(param_1[0x46] + (ulong)(2 < *(uint *)(param_1 + 0x45)) * 0x80);
  *puVar11 = &PTR_LAB_04b92100;
  puVar11[1] = param_1;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = &LAB_03d79d90;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  *(undefined1 *)((long)param_1 + 0x221) = 1;
  uVar4 = *(uint *)(param_1 + 0x43);
  *(int *)(param_1 + 0x42) = (int)param_1[0x41];
  uVar5 = *(undefined4 *)((long)param_1 + 0x20c);
  *(uint *)(param_1 + 0x41) = uVar4;
  *(undefined4 *)((long)param_1 + 0x20c) = 0;
  *(undefined4 *)((long)param_1 + 0x214) = uVar5;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x45) <= uVar4) {
      uVar4 = 0;
    }
    puVar11 = *(undefined8 **)(param_1[0x46] + (long)(int)uVar4 * 0x40);
    if (puVar11 != (undefined8 *)0x0) {
      (*(code *)*puVar11)();
    }
  }
  return;
}

