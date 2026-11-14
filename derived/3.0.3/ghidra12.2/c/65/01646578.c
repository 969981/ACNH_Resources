
void FUN_01646578(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined *local_d0;
  undefined8 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_9d;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_04bb60a0;
  lVar5 = *(long *)(param_2 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = lVar5;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  param_1[0x2a] = (long)param_1;
  *param_1 = (long)&PTR_LAB_049b6250;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  local_e0._0_4_ = 0x40;
  local_68 = 0;
  local_9d = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "mPaletteSetName";
  puStack_80 = &DAT_040ca03d;
  pcStack_e8 = (char *)((long)&local_e0 + 4);
  local_e0._4_4_ = s_DefaultName_0405c6e7._0_4_;
  uStack_d8 = s_DefaultName_0405c6e7._4_4_;
  uStack_d4 = 0x656d61;
  puStack_70 = &DAT_0407ebb1;
  local_f0 = PTR_DAT_04bb2bc0 + 0x10;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_00744dd0(param_1 + 0x2b,&local_98,&local_f0,param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x80;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)&PTR_LAB_049b1bd8;
  param_1[0x3d] = (long)"mReleaseVersion";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  pcStack_e8 = "mEnvTimeTableArray";
  plVar2 = param_1 + 0x42;
  param_1[0x43] = (long)"mEnvTimeTableArray";
  param_1[0x42] = (long)(puVar3 + 0x10);
  uStack_d8 = 0x4091b42;
  uStack_d4 = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  puStack_c8 = &DAT_0407ebb1;
  *(undefined4 *)(param_1 + 0x46) = 8;
  local_c0 = 8;
  local_f0 = puVar1;
  local_d0 = puVar1;
  local_e0 = puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar2);
  param_1[0x1547] = (long)(param_1 + 0x1979);
  plVar6 = param_1 + 0x4d;
  param_1[0x1979] = (long)(param_1 + 0x1dab);
  param_1[0x47f] = (long)(param_1 + 0x8b1);
  param_1[0x8b1] = (long)(param_1 + 0xce3);
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = (long)plVar6;
  param_1[0x4d] = (long)(param_1 + 0x47f);
  param_1[0xce3] = (long)(param_1 + 0x1115);
  param_1[0x1115] = (long)(param_1 + 0x1547);
  param_1[0x1dab] = 0;
  param_1[0x4c] = (long)plVar6;
  if (param_1 + 0x21dd == (long *)0x0) {
    plVar6 = (long *)0x0;
    param_1[0x42] = (long)&PTR_LAB_049b63b8;
  }
  else {
    param_1[0x4a] = (long)(param_1 + 0x21dd);
    *(undefined4 *)((long)param_1 + 0x24c) = 8;
    param_1[0x42] = (long)&PTR_LAB_049b63b8;
    param_1[0x4b] = (long)(param_1 + 0x47f);
    FUN_01647f00(plVar6,&local_f0);
    param_1[0x4d] = (long)&PTR_LAB_049b66b8;
    if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
      *(long **)(param_1[0x4a] + (long)(int)param_1[0x49] * 8) = plVar6;
      *(int *)(param_1 + 0x49) = (int)param_1[0x49] + 1;
    }
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,plVar2);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
    plVar6 = (long *)param_1[0x4b];
    if (plVar6 != (long *)0x0) {
      param_1[0x4b] = *plVar6;
    }
    FUN_01647f00(plVar6,&local_f0);
    *plVar6 = (long)&PTR_LAB_049b66b8;
    if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
      *(long **)(param_1[0x4a] + (long)(int)param_1[0x49] * 8) = plVar6;
      *(int *)(param_1 + 0x49) = (int)param_1[0x49] + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,plVar2);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
    plVar6 = (long *)param_1[0x4b];
    if (plVar6 != (long *)0x0) {
      param_1[0x4b] = *plVar6;
    }
    FUN_01647f00(plVar6,&local_f0);
    *plVar6 = (long)&PTR_LAB_049b66b8;
    if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
      *(long **)(param_1[0x4a] + (long)(int)param_1[0x49] * 8) = plVar6;
      *(int *)(param_1 + 0x49) = (int)param_1[0x49] + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,plVar2);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
    plVar6 = (long *)param_1[0x4b];
    if (plVar6 != (long *)0x0) {
      param_1[0x4b] = *plVar6;
    }
    FUN_01647f00(plVar6,&local_f0);
    *plVar6 = (long)&PTR_LAB_049b66b8;
    if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
      *(long **)(param_1[0x4a] + (long)(int)param_1[0x49] * 8) = plVar6;
      *(int *)(param_1 + 0x49) = (int)param_1[0x49] + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,plVar2);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
    plVar6 = (long *)param_1[0x4b];
    if (plVar6 != (long *)0x0) {
      param_1[0x4b] = *plVar6;
    }
    FUN_01647f00(plVar6,&local_f0);
    *plVar6 = (long)&PTR_LAB_049b66b8;
    if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
      *(long **)(param_1[0x4a] + (long)(int)param_1[0x49] * 8) = plVar6;
      *(int *)(param_1 + 0x49) = (int)param_1[0x49] + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,plVar2);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
    plVar6 = (long *)param_1[0x4b];
    if (plVar6 != (long *)0x0) {
      param_1[0x4b] = *plVar6;
    }
    FUN_01647f00(plVar6,&local_f0);
    *plVar6 = (long)&PTR_LAB_049b66b8;
    if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
      *(long **)(param_1[0x4a] + (long)(int)param_1[0x49] * 8) = plVar6;
      *(int *)(param_1 + 0x49) = (int)param_1[0x49] + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,plVar2);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
    plVar6 = (long *)param_1[0x4b];
    if (plVar6 != (long *)0x0) {
      param_1[0x4b] = *plVar6;
    }
    FUN_01647f00(plVar6,&local_f0);
    *plVar6 = (long)&PTR_LAB_049b66b8;
    if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
      *(long **)(param_1[0x4a] + (long)(int)param_1[0x49] * 8) = plVar6;
      *(int *)(param_1 + 0x49) = (int)param_1[0x49] + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,plVar2);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
    plVar6 = (long *)param_1[0x4b];
    if (plVar6 != (long *)0x0) {
      param_1[0x4b] = *plVar6;
    }
    FUN_01647f00(plVar6,&local_f0);
    *plVar6 = (long)&PTR_LAB_049b66b8;
    if ((int)param_1[0x49] < *(int *)((long)param_1 + 0x24c)) {
      *(long **)(param_1[0x4a] + (long)(int)param_1[0x49] * 8) = plVar6;
      *(int *)(param_1 + 0x49) = (int)param_1[0x49] + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,plVar2);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x21e5) = 1;
  (**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  return;
}

