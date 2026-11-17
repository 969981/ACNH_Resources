
void FUN_02b51120(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  undefined *local_60;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb2020;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "Actor";
  local_60 = local_98;
  local_58 = param_2;
  FUN_00751ec0(param_1,&local_98,&local_60,0);
  *(undefined1 *)(param_1 + 0x18) = 0;
  puVar2 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0x1d) = 0x65;
  *param_1 = (long)&PTR_FUN_04aa3b58;
  param_1[0x1a] = (long)"__dummy_param_st_default_info";
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = (long)(puVar2 + 0x10);
  plVar9 = param_1 + 5;
  lVar7 = *plVar9;
  if (*plVar9 != 0) {
    do {
      lVar6 = lVar7;
      lVar7 = *(long *)(lVar6 + 0x10);
    } while (lVar7 != 0);
    plVar9 = (long *)(lVar6 + 0x10);
  }
  *plVar9 = (long)(param_1 + 0x19);
  param_1[0x1c] = (long)param_1;
  puVar5 = (undefined1 *)(**(code **)(param_1[0x19] + 0xf0))();
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x1d) >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfeffffff;
  puVar1 = puVar3 + 0x10;
  pcStack_90 = "mDefaultInfo";
  local_68 = 8;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_02b50e28(param_1 + 0x1f,&local_98,param_1);
  param_1[0x47] = 0;
  param_1[0x46] = (long)"__dummy_param_ed_default_info";
  *(undefined4 *)(param_1 + 0x49) = 0x66;
  param_1[0x45] = (long)(puVar2 + 0x10);
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x45);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x45] + 0xf0))(param_1 + 0x45);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x49) >> 7 & 1) == 0) {
    param_1[0x4a] = 0;
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  puStack_80 = &DAT_0407ebb1;
  plVar9 = param_1 + 0x4b;
  *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) & 0xfeffffff;
  pcStack_90 = "mPlayerInfoArray";
  param_1[0x4c] = (long)"mPlayerInfoArray";
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 8;
  puVar4 = PTR_DAT_04bb60a0;
  puStack_70 = &DAT_0407ebb1;
  puVar2 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x50] = 0;
  local_68 = 8;
  param_1[0x4b] = (long)puVar2;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  plVar8 = param_1 + 0x56;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = (long)plVar8;
  param_1[0x56] = 0;
  param_1[0x55] = (long)plVar8;
  if (param_1 + 0x7c == (long *)0x0) {
    plVar8 = (long *)0x0;
    *plVar9 = (long)&PTR_LAB_04aa3ea8;
  }
  else {
    param_1[0x53] = (long)(param_1 + 0x7c);
    *(undefined4 *)((long)param_1 + 0x294) = 1;
    param_1[0x4b] = (long)&PTR_LAB_04aa3ea8;
    param_1[0x54] = 0;
    FUN_02b50e28(plVar8,&local_98,0);
    param_1[0x56] = (long)&PTR_FUN_04aa4028;
    if ((int)param_1[0x52] < *(int *)((long)param_1 + 0x294)) {
      *(long **)(param_1[0x53] + (long)(int)param_1[0x52] * 8) = plVar8;
      *(int *)(param_1 + 0x52) = (int)param_1[0x52] + 1;
    }
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
  plVar9 = param_1 + 0x7d;
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  local_98 = puVar3 + 0x10;
  param_1[0x7e] = (long)"mNpcInfoArray";
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  pcStack_90 = "mNpcInfoArray";
  param_1[0x7d] = (long)(puVar4 + 0x10);
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  *(undefined4 *)(param_1 + 0x81) = 8;
  local_68 = 8;
  local_88 = local_98;
  local_78 = local_98;
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  plVar8 = param_1 + 0x88;
  param_1[0x85] = 0;
  param_1[0xae] = (long)(param_1 + 0xd4);
  param_1[0xd4] = (long)(param_1 + 0xfa);
  param_1[0xfa] = (long)(param_1 + 0x120);
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = (long)plVar8;
  param_1[0x88] = (long)(param_1 + 0xae);
  param_1[0x120] = 0;
  param_1[0x87] = (long)plVar8;
  if (param_1 + 0x146 == (long *)0x0) {
    plVar8 = (long *)0x0;
    param_1[0x7d] = (long)&PTR_LAB_04aa41b8;
  }
  else {
    param_1[0x85] = (long)(param_1 + 0x146);
    *(undefined4 *)((long)param_1 + 0x424) = 5;
    param_1[0x7d] = (long)&PTR_LAB_04aa41b8;
    param_1[0x86] = (long)(param_1 + 0xae);
    FUN_02b50e28(plVar8,&local_98,0);
    param_1[0x88] = (long)&PTR_FUN_04aa4338;
    if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
      *(long **)(param_1[0x85] + (long)(int)param_1[0x84] * 8) = plVar8;
      *(int *)(param_1 + 0x84) = (int)param_1[0x84] + 1;
    }
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
    plVar8 = (long *)param_1[0x86];
    if (plVar8 != (long *)0x0) {
      param_1[0x86] = *plVar8;
    }
    FUN_02b50e28(plVar8,&local_98,0);
    *plVar8 = (long)&PTR_FUN_04aa4338;
    if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
      *(long **)(param_1[0x85] + (long)(int)param_1[0x84] * 8) = plVar8;
      *(int *)(param_1 + 0x84) = (int)param_1[0x84] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
    plVar8 = (long *)param_1[0x86];
    if (plVar8 != (long *)0x0) {
      param_1[0x86] = *plVar8;
    }
    FUN_02b50e28(plVar8,&local_98,0);
    *plVar8 = (long)&PTR_FUN_04aa4338;
    if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
      *(long **)(param_1[0x85] + (long)(int)param_1[0x84] * 8) = plVar8;
      *(int *)(param_1 + 0x84) = (int)param_1[0x84] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
    plVar8 = (long *)param_1[0x86];
    if (plVar8 != (long *)0x0) {
      param_1[0x86] = *plVar8;
    }
    FUN_02b50e28(plVar8,&local_98,0);
    *plVar8 = (long)&PTR_FUN_04aa4338;
    if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
      *(long **)(param_1[0x85] + (long)(int)param_1[0x84] * 8) = plVar8;
      *(int *)(param_1 + 0x84) = (int)param_1[0x84] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
    plVar8 = (long *)param_1[0x86];
    if (plVar8 != (long *)0x0) {
      param_1[0x86] = *plVar8;
    }
    FUN_02b50e28(plVar8,&local_98,0);
    *plVar8 = (long)&PTR_FUN_04aa4338;
    if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
      *(long **)(param_1[0x85] + (long)(int)param_1[0x84] * 8) = plVar8;
      *(int *)(param_1 + 0x84) = (int)param_1[0x84] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  local_98 = puVar3 + 0x10;
  param_1[0x14c] = (long)"mFacilityInfoArray";
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x150] = 0;
  pcStack_90 = "mFacilityInfoArray";
  param_1[0x14b] = (long)(puVar4 + 0x10);
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  *(undefined4 *)(param_1 + 0x14f) = 8;
  local_68 = 8;
  local_88 = local_98;
  local_78 = local_98;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x14b);
  param_1[0x153] = 0;
  param_1[0x156] = (long)(param_1 + 0x17c);
  param_1[0x152] = 0;
  param_1[0x17c] = (long)(param_1 + 0x1a2);
  param_1[0x151] = 0;
  param_1[0x1a2] = (long)(param_1 + 0x1c8);
  param_1[0x154] = (long)(param_1 + 0x156);
  param_1[0x1c8] = (long)(param_1 + 0x1ee);
  param_1[0x286] = 0;
  param_1[0x155] = (long)(param_1 + 0x156);
  param_1[0x1ee] = (long)(param_1 + 0x214);
  param_1[0x214] = (long)(param_1 + 0x23a);
  param_1[0x23a] = (long)(param_1 + 0x260);
  param_1[0x260] = (long)(param_1 + 0x286);
  if (param_1 + 0x2ac != (long *)0x0) {
    param_1[0x153] = (long)(param_1 + 0x2ac);
    *(undefined4 *)((long)param_1 + 0xa94) = 9;
  }
  param_1[0x14b] = (long)&PTR_LAB_04aa44b0;
  iVar10 = 9;
  do {
    if ((int)param_1[0x152] < *(int *)((long)param_1 + 0xa94)) {
      plVar9 = (long *)param_1[0x154];
      if (plVar9 != (long *)0x0) {
        param_1[0x154] = *plVar9;
      }
      FUN_02b50e28(plVar9,&local_98,0);
      *plVar9 = (long)&PTR_FUN_04aa4630;
      if ((int)param_1[0x152] < *(int *)((long)param_1 + 0xa94)) {
        *(long **)(param_1[0x153] + (long)(int)param_1[0x152] * 8) = plVar9;
        *(int *)(param_1 + 0x152) = (int)param_1[0x152] + 1;
      }
    }
    else {
      plVar9 = (long *)0x0;
    }
    (**(code **)(*plVar9 + 0x38))(plVar9,param_1 + 0x14b);
    iVar10 = iVar10 + -1;
    *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
  } while (iVar10 != 0);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

