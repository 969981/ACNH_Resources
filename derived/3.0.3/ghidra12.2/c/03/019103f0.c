
void FUN_019103f0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_38;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar6;
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar2 = PTR_DAT_04bbf198;
  param_1[9] = 0;
  puVar1 = PTR_DAT_04bb33a8;
  param_1[7] = (long)"mIsUseLocator";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 8;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[6] = (long)(puVar1 + 0x10);
  lVar6 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar5 + 0x10);
  }
  *plVar7 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  puVar3 = (undefined1 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  param_1[0xd] = (long)"mLocatorID";
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x10) = 8;
  param_1[0x11] = 0;
  plVar7 = param_1 + 0xc;
  *plVar7 = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  }
  local_68 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfeffffff;
  local_38 = 0;
  local_68 = local_68 + 0x10;
  pcStack_60 = "mPoint";
  puStack_50 = &DAT_040bff0f;
  pcStack_40 = "Min=0.f, Max=500.f";
  local_58 = local_68;
  local_48 = local_68;
  FUN_006fdfc0(param_1 + 0x12,&local_68,PTR_DAT_04bb2150,param_1);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)PTR_DAT_04bb3238;
  return;
}

