
void FUN_03963b3c(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  long lVar6;
  int local_58;
  undefined4 local_54;
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
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  puVar3 = PTR_DAT_04bd0fa8;
  uVar5 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(param_1 + 0x390) = *(byte *)(param_1 + 0x390) & 0xfe;
  *(undefined2 *)(param_1 + 0x392) = 0;
  FUN_038f8590(uVar5,param_1 + 0x368,lVar4,0x10,4,0);
  *(undefined2 *)(param_1 + 0x392) = 0;
  puVar2 = PTR_DAT_04bb2cd8;
  lVar6 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x380));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x388) != 0) {
    lVar4 = *(long *)(param_1 + 0x370) - *(long *)(*(long *)(param_1 + 0x388) + 0x10);
  }
  *(undefined8 *)(lVar6 + lVar4) = &DAT_3f8000003f800000;
  ((undefined8 *)(lVar6 + lVar4))[1] = &DAT_3f8000003f800000;
  local_50 = *(long *)(param_1 + 0x380);
  local_58 = 0;
  if (*(long *)(param_1 + 0x388) != 0) {
    local_58 = *(int *)(param_1 + 0x370) - *(int *)(*(long *)(param_1 + 0x388) + 0x10);
  }
  local_54 = 0;
  if (local_50 != 0) {
    local_54 = *(undefined4 *)(local_50 + 0x104);
  }
  lStack_48 = param_1 + 0x368;
  FUN_0390ebc0(param_1 + 8,&local_58,0x10,0x10);
  *(undefined8 *)(param_1 + 0x40) = 0x2e;
  *(undefined2 *)(param_1 + 0x48) = 1;
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
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined2 *)(param_1 + 0x3ca) = 0;
  *(byte *)(param_1 + 0x3c8) = *(byte *)(param_1 + 0x3c8) & 0xfe;
  FUN_038f8590(uVar5,param_1 + 0x3a0,lVar4,0x10,4,0);
  *(undefined2 *)(param_1 + 0x3ca) = 0;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x3b8));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x3c0) != 0) {
    lVar4 = *(long *)(param_1 + 0x3a8) - *(long *)(*(long *)(param_1 + 0x3c0) + 0x10);
  }
  *(undefined8 *)(lVar6 + lVar4) = 0;
  ((undefined8 *)(lVar6 + lVar4))[1] = 0x3f80000000000000;
  local_50 = *(long *)(param_1 + 0x3b8);
  local_58 = 0;
  if (*(long *)(param_1 + 0x3c0) != 0) {
    local_58 = *(int *)(param_1 + 0x3a8) - *(int *)(*(long *)(param_1 + 0x3c0) + 0x10);
  }
  local_54 = 0;
  if (local_50 != 0) {
    local_54 = *(undefined4 *)(local_50 + 0x104);
  }
  lStack_48 = param_1 + 0x3a0;
  FUN_0390ebc0(param_1 + 0x128,&local_58,0x10,0x10);
  *(undefined8 *)(param_1 + 0x160) = 0x2e;
  *(undefined2 *)(param_1 + 0x168) = 1;
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
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined2 *)(param_1 + 0x402) = 0;
  *(byte *)(param_1 + 0x400) = *(byte *)(param_1 + 0x400) & 0xfe;
  FUN_038f8590(uVar5,param_1 + 0x3d8,param_2,0x10,4,0);
  *(undefined2 *)(param_1 + 0x402) = 0;
  lVar6 = (**(code **)puVar2)(*(undefined8 *)(param_1 + 0x3f0));
  lVar4 = 0;
  if (*(long *)(param_1 + 0x3f8) != 0) {
    lVar4 = *(long *)(param_1 + 0x3e0) - *(long *)(*(long *)(param_1 + 0x3f8) + 0x10);
  }
  *(undefined8 *)(lVar6 + lVar4) = 0;
  ((undefined8 *)(lVar6 + lVar4))[1] = 0;
  local_50 = *(long *)(param_1 + 0x3f0);
  local_58 = 0;
  if (*(long *)(param_1 + 0x3f8) != 0) {
    local_58 = *(int *)(param_1 + 0x3e0) - *(int *)(*(long *)(param_1 + 0x3f8) + 0x10);
  }
  local_54 = 0;
  if (local_50 != 0) {
    local_54 = *(undefined4 *)(local_50 + 0x104);
  }
  lStack_48 = param_1 + 0x3d8;
  FUN_0390ebc0(param_1 + 0x248,&local_58,0x10,0x10);
  *(undefined8 *)(param_1 + 0x280) = 0x2e;
  *(undefined2 *)(param_1 + 0x288) = 1;
  return;
}

