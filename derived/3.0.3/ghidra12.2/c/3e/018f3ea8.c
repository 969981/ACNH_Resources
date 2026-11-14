
void FUN_018f3ea8(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar2 = PTR_DAT_04bb60a0;
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)(puVar2 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar5;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_78 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_LAB_049d42b0;
  local_48 = 0;
  local_78 = local_78 + 0x10;
  pcStack_70 = "mFloatingObjectParams";
  puStack_60 = &DAT_04067b34;
  puStack_50 = &DAT_0407ebb1;
  local_68 = local_78;
  local_58 = local_78;
  FUN_01901278(param_1 + 6,&local_78,param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  puVar2 = PTR_DAT_04bb62c0;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar2 + 0x10);
  param_1[0x3d] = (long)"mAppearNumMax";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar3 = 5;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 5;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  param_1[0x43] = (long)"mAppearProbOfRainbow";
  param_1[0x45] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x42] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  uVar6 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x46) & 0x800) != 0) {
    uVar6 = 0x3db2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 0x46);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    uVar6 = 0x40a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x47) = uVar6;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = uVar1 & 0xfeffffff;
  param_1[0x49] = (long)"mExclusionArea";
  param_1[0x4b] = 0;
  puVar2 = PTR_DAT_04bb5a60;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  param_1[0x48] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  puVar4 = (undefined8 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar4 = 0x600000006;
  if ((*(uint *)(param_1 + 0x4c) >> 7 & 1) == 0) {
    param_1[0x4e] = 0x600000006;
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfeffffff;
  return;
}

