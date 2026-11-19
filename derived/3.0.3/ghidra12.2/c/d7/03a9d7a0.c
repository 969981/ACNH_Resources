
void FUN_03a9d7a0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined *local_50;
  byte *local_48;
  
  FUN_03a9d9c0(param_1,param_2,0,param_3);
  lVar8 = *(long *)(param_1 + 0x28);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = (byte *)0x40c780d;
  uVar4 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar4 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_50);
  }
  *(undefined8 *)(lVar8 + 0x28) = uVar4;
  (**(code **)(local_50 + 0x18))(&local_50);
  uVar5 = (uint)*local_48;
  if (*local_48 != 0) {
    uVar6 = 0xffffffff;
    pbVar7 = local_48;
    do {
      pbVar7 = pbVar7 + 1;
      uVar6 = crc32b(uVar6,uVar5,0x4c11db7);
      uVar5 = (uint)*pbVar7;
    } while (uVar5 != 0);
    uVar5 = ~uVar6;
  }
  *(uint *)(lVar8 + 0x1c) = uVar5;
  plVar1 = (long *)(param_1 + 0x1b8);
  if (*(long *)(param_1 + 0x1c0) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x1c0) + 0x20);
  }
  *plVar1 = lVar8;
  *(long *)(param_1 + 0x1c0) = lVar8;
  FUN_0393da40(param_1,0);
  *(undefined4 *)(param_1 + 0x5c0) = 0x800;
  lVar8 = param_3;
  if (param_3 == 0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
    plVar1 = (long *)(lVar9 + 8);
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 0xa8);
    }
    lVar8 = *plVar1;
  }
  *(undefined8 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  puVar3 = PTR_DAT_04bd0fa8;
  uVar4 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(param_1 + 2000) = *(byte *)(param_1 + 2000) & 0xfe;
  *(undefined2 *)(param_1 + 0x7d2) = 0;
  FUN_038f8590(uVar4,param_1 + 0x7a8,lVar8,0x6000,8,0);
  iVar2 = *(int *)(param_1 + 0x5c0);
  *(undefined2 *)(param_1 + 0x7d2) = 0;
  lVar8 = param_3;
  if (param_3 == 0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_00,0);
    plVar1 = (long *)(lVar9 + 8);
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 0xa8);
    }
    lVar8 = *plVar1;
  }
  *(undefined8 *)(param_1 + 0x930) = 0;
  *(undefined8 *)(param_1 + 0x908) = 0;
  *(undefined8 *)(param_1 + 0x910) = 0;
  *(undefined8 *)(param_1 + 0x918) = 0;
  *(undefined8 *)(param_1 + 0x920) = 0;
  *(undefined2 *)(param_1 + 0x92a) = 0;
  *(byte *)(param_1 + 0x928) = *(byte *)(param_1 + 0x928) & 0xfe;
  if (iVar2 != 0) {
    FUN_038f8590(*(undefined8 *)puVar3,param_1 + 0x900,lVar8,(long)iVar2 << 1,8,0);
  }
  *(undefined2 *)(param_1 + 0x92a) = 0;
  FUN_0390e390(param_1 + 0x5c8,1,param_3);
  FUN_03a9c150(param_1 + 0x5c0,*(undefined4 *)(param_1 + 0x5c0));
  return;
}

