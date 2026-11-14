
void FUN_018f0ea0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar4 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar4;
  lVar4 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar4;
  plVar5 = param_1 + 5;
  *plVar5 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[9] = 0;
  *param_1 = (long)&PTR_LAB_049d3a70;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[7] = (long)"mNetOffsetY";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  lVar4 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar3 = lVar4;
      lVar4 = *(long *)(lVar3 + 0x10);
    } while (lVar4 != 0);
    plVar5 = (long *)(lVar3 + 0x10);
  }
  *plVar5 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  puVar2 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  param_1[0xf] = 0;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  plVar5 = param_1 + 0xc;
  *plVar5 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xd] = (long)"mNetOffsetZ";
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  puVar2 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfeffffff;
  return;
}

