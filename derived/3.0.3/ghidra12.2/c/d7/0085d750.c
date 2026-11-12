
void FUN_0085d750(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_7c;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar5;
  plVar8 = param_1 + 5;
  *plVar8 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  plVar6 = param_1 + 6;
  *plVar6 = (long)(puVar1 + 0x10);
  puVar2 = PTR_DAT_04bb5558;
  puVar1 = PTR_DAT_04bb2020;
  param_1[7] = (long)"mCreatePos";
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  local_78 = puVar1 + 0x10;
  pcStack_70 = "mCreatePos";
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  local_48 = 8;
  *(undefined4 *)(param_1 + 10) = 8;
  lVar5 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar8 = (long *)(lVar4 + 0x10);
  }
  *plVar8 = (long)plVar6;
  param_1[0x1f] = (long)(param_1 + 0x26);
  param_1[9] = (long)param_1;
  plVar8 = param_1 + 0x18;
  *plVar8 = (long)(param_1 + 0x1f);
  param_1[0x26] = (long)(param_1 + 0x2d);
  param_1[0x2d] = (long)(param_1 + 0x34);
  plVar7 = param_1 + 0x11;
  *plVar7 = (long)plVar8;
  param_1[0x34] = (long)(param_1 + 0x3b);
  param_1[0x3b] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = (long)plVar7;
  param_1[0xe] = 0;
  param_1[0xf] = (long)plVar7;
  local_68 = local_78;
  local_58 = local_78;
  if (param_1 + 0x42 == (long *)0x0) {
    plVar7 = (long *)0x0;
    param_1[6] = (long)&PTR_LAB_0491c9a0;
  }
  else {
    param_1[6] = (long)&PTR_LAB_0491c9a0;
    *(undefined4 *)((long)param_1 + 0x6c) = 7;
    param_1[0xe] = (long)(param_1 + 0x42);
    param_1[0xf] = (long)plVar8;
    FUN_006fdfc0(plVar7,&local_78,PTR_DAT_04bb2150,0);
    param_1[0x11] = (long)&PTR_FUN_0491cb20;
    if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
      *(long **)(param_1[0xe] + (long)(int)param_1[0xd] * 8) = plVar7;
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    }
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
  *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffffc;
  if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
    plVar8 = (long *)param_1[0xf];
    if (plVar8 != (long *)0x0) {
      param_1[0xf] = *plVar8;
    }
    FUN_006fdfc0(plVar8,&local_78,PTR_DAT_04bb2150,0);
    *plVar8 = (long)&PTR_FUN_0491cb20;
    if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
      *(long **)(param_1[0xe] + (long)(int)param_1[0xd] * 8) = plVar8;
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar6);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
    plVar8 = (long *)param_1[0xf];
    if (plVar8 != (long *)0x0) {
      param_1[0xf] = *plVar8;
    }
    FUN_006fdfc0(plVar8,&local_78,PTR_DAT_04bb2150,0);
    *plVar8 = (long)&PTR_FUN_0491cb20;
    if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
      *(long **)(param_1[0xe] + (long)(int)param_1[0xd] * 8) = plVar8;
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar6);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
    plVar8 = (long *)param_1[0xf];
    if (plVar8 != (long *)0x0) {
      param_1[0xf] = *plVar8;
    }
    FUN_006fdfc0(plVar8,&local_78,PTR_DAT_04bb2150,0);
    *plVar8 = (long)&PTR_FUN_0491cb20;
    if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
      *(long **)(param_1[0xe] + (long)(int)param_1[0xd] * 8) = plVar8;
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar6);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
    plVar8 = (long *)param_1[0xf];
    if (plVar8 != (long *)0x0) {
      param_1[0xf] = *plVar8;
    }
    FUN_006fdfc0(plVar8,&local_78,PTR_DAT_04bb2150,0);
    *plVar8 = (long)&PTR_FUN_0491cb20;
    if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
      *(long **)(param_1[0xe] + (long)(int)param_1[0xd] * 8) = plVar8;
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar6);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
    plVar8 = (long *)param_1[0xf];
    if (plVar8 != (long *)0x0) {
      param_1[0xf] = *plVar8;
    }
    FUN_006fdfc0(plVar8,&local_78,PTR_DAT_04bb2150,0);
    *plVar8 = (long)&PTR_FUN_0491cb20;
    if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
      *(long **)(param_1[0xe] + (long)(int)param_1[0xd] * 8) = plVar8;
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar6);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
    plVar8 = (long *)param_1[0xf];
    if (plVar8 != (long *)0x0) {
      param_1[0xf] = *plVar8;
    }
    FUN_006fdfc0(plVar8,&local_78,PTR_DAT_04bb2150,0);
    *plVar8 = (long)&PTR_FUN_0491cb20;
    if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
      *(long **)(param_1[0xe] + (long)(int)param_1[0xd] * 8) = plVar8;
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar6);
  puVar1 = puVar1 + 0x10;
  local_7c = 0;
  puStack_60 = &DAT_0407ebb1;
  pcStack_70 = "mTransRatio";
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  local_48 = 8;
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085e260(param_1 + 0x49,&local_78,&local_7c,param_1);
  local_48 = 8;
  pcStack_70 = "mDirection";
  puStack_60 = &DAT_0407ebb1;
  local_7c = CONCAT31(local_7c._1_3_,1);
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085e480(param_1 + 0x77,&local_78,&local_7c,param_1);
  param_1[0xca] = 0;
  param_1[0xc9] = (long)"mRunDistance";
  param_1[0xcb] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0xcc) = 8;
  param_1[0xcd] = 0;
  param_1[200] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 200);
  puVar3 = (undefined4 *)(**(code **)(param_1[200] + 0xf0))(param_1 + 200);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xcc) >> 7 & 1) == 0) {
    param_1[0xcd] = 0;
    *(undefined4 *)(param_1 + 0xcd) = 0;
  }
  param_1[0xd0] = 0;
  *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xfeffffff;
  param_1[0xcf] = (long)"mNumGenMinDay";
  param_1[0xd1] = 0;
  puVar2 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0xd2) = 8;
  puVar1 = puVar2 + 0x10;
  param_1[0xd3] = 0;
  param_1[0xce] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xce);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xce] + 0xf0))(param_1 + 0xce);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xd2) >> 7 & 1) == 0) {
    param_1[0xd3] = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
  }
  param_1[0xd6] = 0;
  *(uint *)(param_1 + 0xd2) = *(uint *)(param_1 + 0xd2) & 0xfeffffff;
  param_1[0xd5] = (long)"mNumGenMaxDay";
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 8;
  param_1[0xd4] = (long)puVar1;
  param_1[0xd9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd4);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xd4] + 0xf0))(param_1 + 0xd4);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xd8) >> 7 & 1) == 0) {
    param_1[0xd9] = 0;
    *(undefined4 *)(param_1 + 0xd9) = 0;
  }
  puVar2 = puVar2 + 0x10;
  param_1[0xdc] = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) & 0xfeffffff;
  param_1[0xdb] = (long)"mNumGenMinAfternoon";
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 8;
  param_1[0xda] = (long)puVar2;
  param_1[0xdf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xda);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xda] + 0xf0))(param_1 + 0xda);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xde) >> 7 & 1) == 0) {
    param_1[0xdf] = 0;
    *(undefined4 *)(param_1 + 0xdf) = 0;
  }
  param_1[0xe2] = 0;
  *(uint *)(param_1 + 0xde) = *(uint *)(param_1 + 0xde) & 0xfeffffff;
  param_1[0xe1] = (long)"mNumGenMaxAfternoon";
  *(undefined4 *)(param_1 + 0xe4) = 8;
  param_1[0xe3] = 0;
  param_1[0xe0] = (long)puVar2;
  param_1[0xe5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe0);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xe0] + 0xf0))(param_1 + 0xe0);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xe4) >> 7 & 1) == 0) {
    param_1[0xe5] = 0;
    *(undefined4 *)(param_1 + 0xe5) = 0;
  }
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) & 0xfeffffff;
  return;
}

