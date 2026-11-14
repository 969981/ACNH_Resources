
void FUN_01912b60(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
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
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[10] = 0;
  puVar1 = PTR_DAT_04bbf6e8 + 0x178;
  *param_1 = (long)(PTR_DAT_04bbf6e8 + 0x10);
  param_1[6] = (long)puVar1;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[8] = (long)"mAngleYDeg";
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[7] = (long)(puVar1 + 0x10);
  lVar5 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = (long)(param_1 + 7);
  param_1[10] = (long)param_1;
  uVar7 = 0x42b40000;
  if ((*(uint *)(param_1 + 0xb) & 0x800) != 0) {
    uVar7 = 0x3fc90fdb;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[7] + 0xf0))();
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0xb);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0xc] = 0;
    uVar7 = 0x42b40000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3fc90fdb;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar7;
  }
  local_68 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0xb) = uVar2 & 0xfeffffff;
  local_38 = 0;
  local_68 = local_68 + 0x10;
  pcStack_60 = "mPalmNodeParamsBuffer";
  puStack_50 = &DAT_040bb3a8;
  puStack_40 = &DAT_0407ebb1;
  local_58 = local_68;
  local_48 = local_68;
  FUN_019128ec(param_1 + 0xd,&local_68,param_1);
  return;
}

