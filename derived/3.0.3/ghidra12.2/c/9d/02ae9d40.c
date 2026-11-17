
void FUN_02ae9d40(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "Actor";
  local_50 = local_88;
  local_48 = param_2;
  FUN_00751ec0(param_1,&local_88,&local_50,0);
  puVar3 = PTR_DAT_04bbbd08;
  *(undefined4 *)(param_1 + 0x1c) = 0x65;
  puVar2 = PTR_DAT_04bb33a8;
  param_1[0x19] = (long)"__dummy_param_st_default_info";
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x18] = (long)(puVar2 + 0x10);
  plVar7 = param_1 + 5;
  lVar6 = *plVar7;
  if (*plVar7 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar5 + 0x10);
  }
  *plVar7 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar4 = (undefined1 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  puVar1 = puVar1 + 0x10;
  pcStack_80 = "mDefaultInfo";
  local_58 = 8;
  puStack_70 = &DAT_0407ebb1;
  puStack_60 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_02ae9800(param_1 + 0x1e,&local_88,param_1);
  param_1[0x79] = 0;
  param_1[0x78] = (long)"__dummy_param_ed_default_info";
  *(undefined4 *)(param_1 + 0x7b) = 0x66;
  param_1[0x77] = (long)(puVar2 + 0x10);
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x77);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x77] + 0xf0))(param_1 + 0x77);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x7b) >> 7 & 1) == 0) {
    param_1[0x7c] = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  puStack_70 = &DAT_0407ebb1;
  plVar7 = param_1 + 0x7d;
  *(uint *)(param_1 + 0x7b) = *(uint *)(param_1 + 0x7b) & 0xfeffffff;
  pcStack_80 = "mInfoArray";
  param_1[0x7e] = (long)"mInfoArray";
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 8;
  puStack_60 = &DAT_0407ebb1;
  puVar2 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x82] = 0;
  local_58 = 8;
  param_1[0x7d] = (long)puVar2;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  plVar8 = param_1 + 0x88;
  param_1[0x85] = 0;
  param_1[0xe1] = (long)(param_1 + 0x13a);
  param_1[0x13a] = (long)(param_1 + 0x193);
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = (long)plVar8;
  param_1[0x88] = (long)(param_1 + 0xe1);
  param_1[0x193] = 0;
  param_1[0x87] = (long)plVar8;
  if (param_1 + 0x1ec == (long *)0x0) {
    param_1[0x7d] = (long)&DAT_04aa0048;
    plVar8 = (long *)0x0;
  }
  else {
    param_1[0x85] = (long)(param_1 + 0x1ec);
    *(undefined4 *)((long)param_1 + 0x424) = 4;
    param_1[0x7d] = (long)&DAT_04aa0048;
    param_1[0x86] = (long)(param_1 + 0xe1);
    FUN_02ae9800(plVar8,&local_88,0);
    param_1[0x88] = (long)&DAT_04aa01c8;
    if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
      *(long **)(param_1[0x85] + (long)(int)param_1[0x84] * 8) = plVar8;
      *(int *)(param_1 + 0x84) = (int)param_1[0x84] + 1;
    }
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar7);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
    plVar8 = (long *)param_1[0x86];
    if (plVar8 != (long *)0x0) {
      param_1[0x86] = *plVar8;
    }
    FUN_02ae9800(plVar8,&local_88,0);
    *plVar8 = (long)&DAT_04aa01c8;
    if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
      *(long **)(param_1[0x85] + (long)(int)param_1[0x84] * 8) = plVar8;
      *(int *)(param_1 + 0x84) = (int)param_1[0x84] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar7);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
    plVar8 = (long *)param_1[0x86];
    if (plVar8 != (long *)0x0) {
      param_1[0x86] = *plVar8;
    }
    FUN_02ae9800(plVar8,&local_88,0);
    *plVar8 = (long)&DAT_04aa01c8;
    if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
      *(long **)(param_1[0x85] + (long)(int)param_1[0x84] * 8) = plVar8;
      *(int *)(param_1 + 0x84) = (int)param_1[0x84] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar7);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
    plVar8 = (long *)param_1[0x86];
    if (plVar8 != (long *)0x0) {
      param_1[0x86] = *plVar8;
    }
    FUN_02ae9800(plVar8,&local_88,0);
    *plVar8 = (long)&DAT_04aa01c8;
    if ((int)param_1[0x84] < *(int *)((long)param_1 + 0x424)) {
      *(long **)(param_1[0x85] + (long)(int)param_1[0x84] * 8) = plVar8;
      *(int *)(param_1 + 0x84) = (int)param_1[0x84] + 1;
    }
  }
  else {
    plVar8 = (long *)0x0;
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,plVar7);
  *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffffc;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

