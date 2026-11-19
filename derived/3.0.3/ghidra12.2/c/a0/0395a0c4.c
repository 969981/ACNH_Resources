
void FUN_0395a0c4(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  long lVar6;
  int local_70;
  undefined4 local_6c;
  long local_68;
  long lStack_60;
  int local_58;
  undefined4 uStack_54;
  long local_50;
  long lStack_48;
  
  lVar4 = param_2;
  if (param_2 == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),0,0);
    plVar1 = (long *)(lVar6 + 8);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0xa8);
    }
    lVar4 = *plVar1;
  }
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  plVar1 = (long *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  puVar3 = PTR_DAT_04bd0fa8;
  uVar5 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(param_1 + 0x2b8) = *(byte *)(param_1 + 0x2b8) & 0xfe;
  *(undefined2 *)(param_1 + 0x2ba) = 0;
  FUN_038f8590(uVar5,param_1 + 0x290,lVar4,0x60,8,0);
  *(undefined2 *)(param_1 + 0x2ba) = 0;
  puVar2 = PTR_DAT_04bb2cd8;
  lVar6 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x2a8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  *(undefined4 *)((undefined8 *)(lVar6 + lVar4) + 1) = 0;
  *(undefined8 *)(lVar6 + lVar4) = 0x3f000000bf000000;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2a8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  *(undefined8 *)(lVar6 + lVar4 + 0xc) = 0;
  *(undefined4 *)(lVar6 + lVar4 + 0x14) = 0x3f800000;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2a8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  *(undefined8 *)(lVar6 + lVar4 + 0x18) = 0;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2a8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  *(undefined4 *)(lVar6 + lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar6 + lVar4 + 0x20) = 0x3f0000003fc00000;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2a8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  *(undefined8 *)(lVar6 + lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar6 + lVar4 + 0x34) = 0x3f800000;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2a8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  *(undefined8 *)(lVar6 + lVar4 + 0x38) = 0x40000000;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2a8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  *(undefined4 *)(lVar6 + lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar6 + lVar4 + 0x40) = 0xbfc00000bf000000;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2a8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  *(undefined8 *)(lVar6 + lVar4 + 0x4c) = 0;
  *(undefined4 *)(lVar6 + lVar4 + 0x54) = 0x3f800000;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2a8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  *(undefined8 *)(lVar6 + lVar4 + 0x58) = 0x4000000000000000;
  local_68 = *(long *)(param_1 + 0x2a8);
  local_70 = 0;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    local_70 = *(int *)plVar1 - *(int *)(*(long *)(param_1 + 0x2b0) + 0x10);
  }
  local_6c = 0;
  if (local_68 != 0) {
    local_6c = *(undefined4 *)(local_68 + 0x104);
  }
  lStack_60 = param_1 + 0x290;
  FUN_0390ebc0(param_1 + 0x338,&local_70,0x20,0x60);
  *(undefined8 *)(param_1 + 0x370) = 0x22;
  *(undefined8 *)(param_1 + 0x37c) = 0xc00000022;
  *(undefined2 *)(param_1 + 0x378) = 1;
  *(undefined2 *)(param_1 + 900) = 1;
  *(undefined8 *)(param_1 + 0x388) = 0x1800000016;
  *(undefined2 *)(param_1 + 0x390) = 1;
  lVar4 = param_2;
  if (param_2 == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
    plVar1 = (long *)(lVar6 + 8);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0xa8);
    }
    lVar4 = *plVar1;
  }
  uVar5 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  plVar1 = (long *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined2 *)(param_1 + 0x2f2) = 0;
  *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) & 0xfe;
  FUN_038f8590(uVar5,param_1 + 0x2c8,lVar4,6,4,0);
  *(undefined2 *)(param_1 + 0x2f2) = 0;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2e0));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2e8) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2e8) + 0x10);
  }
  *(undefined2 *)(lVar6 + lVar4) = 0;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2e0));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2e8) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2e8) + 0x10);
  }
  *(undefined2 *)(lVar6 + lVar4 + 2) = 2;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x2e0));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x2e8) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 0x2e8) + 0x10);
  }
  *(undefined2 *)(lVar6 + lVar4 + 4) = 1;
  local_50 = *(long *)(param_1 + 0x2e0);
  local_58 = 0;
  if (*(long *)(param_1 + 0x2e8) != 0) {
    local_58 = *(int *)plVar1 - *(int *)(*(long *)(param_1 + 0x2e8) + 0x10);
  }
  if (local_50 == 0) {
    uStack_54 = 0;
  }
  else {
    uStack_54 = *(undefined4 *)(local_50 + 0x104);
  }
  lStack_48 = param_1 + 0x2c8;
  FUN_03901480(param_1 + 0x458,&local_58,1,3);
  if (param_2 == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar1 = (long *)(lVar6 + 8);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0xa8);
    }
    param_2 = *plVar1;
  }
  uVar5 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x330) = 0;
  plVar1 = (long *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined2 *)(param_1 + 0x32a) = 0;
  *(byte *)(param_1 + 0x328) = *(byte *)(param_1 + 0x328) & 0xfe;
  FUN_038f8590(uVar5,param_1 + 0x300,param_2,6,4,0);
  *(undefined2 *)(param_1 + 0x32a) = 0;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x318));
  lVar4 = 0;
  if (*(long *)(param_1 + 800) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 800) + 0x10);
  }
  *(undefined2 *)(lVar6 + lVar4) = 0;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x318));
  lVar4 = 0;
  if (*(long *)(param_1 + 800) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 800) + 0x10);
  }
  *(undefined2 *)(lVar6 + lVar4 + 2) = 2;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x318));
  lVar4 = 0;
  if (*(long *)(param_1 + 800) != 0) {
    lVar4 = *plVar1 - *(long *)(*(long *)(param_1 + 800) + 0x10);
  }
  *(undefined2 *)(lVar6 + lVar4 + 4) = 1;
  local_50 = *(long *)(param_1 + 0x318);
  local_58 = 0;
  if (*(long *)(param_1 + 800) != 0) {
    local_58 = *(int *)plVar1 - *(int *)(*(long *)(param_1 + 800) + 0x10);
  }
  if (local_50 == 0) {
    uStack_54 = 0;
  }
  else {
    uStack_54 = *(undefined4 *)(local_50 + 0x104);
  }
  lStack_48 = param_1 + 0x300;
  FUN_03901480(param_1 + 0x4b8,&local_58,1,3);
  *(undefined4 *)(param_1 + 0x4c4) = 2;
  return;
}

