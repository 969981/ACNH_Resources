
void FUN_03959a24(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long lVar5;
  long *plVar6;
  int local_80;
  undefined4 local_7c;
  long local_78;
  long lStack_70;
  int local_68;
  undefined4 uStack_64;
  long local_60;
  long lStack_58;
  
  lVar3 = param_2;
  if (param_2 == 0) {
    lVar5 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),0,0);
    plVar6 = (long *)(lVar5 + 8);
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0xa8);
    }
    lVar3 = *plVar6;
  }
  plVar6 = (long *)(param_1 + 0x10);
  *plVar6 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  puVar2 = PTR_DAT_04bd0fa8;
  FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 8,lVar3,0x80,8,0);
  *(undefined2 *)(param_1 + 0x32) = 0;
  puVar1 = PTR_DAT_04bb2cd8;
  lVar5 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined4 *)((undefined8 *)(lVar5 + lVar3) + 1) = 0;
  *(undefined8 *)(lVar5 + lVar3) = 0x3f000000bf000000;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined8 *)(lVar5 + lVar3 + 0xc) = 0;
  *(undefined4 *)(lVar5 + lVar3 + 0x14) = 0x3f800000;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined8 *)(lVar5 + lVar3 + 0x18) = 0;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined8 *)(lVar5 + lVar3 + 0x20) = 0x3f0000003f000000;
  *(undefined4 *)(lVar5 + lVar3 + 0x28) = 0;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined8 *)(lVar5 + lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + lVar3 + 0x34) = 0x3f800000;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined8 *)(lVar5 + lVar3 + 0x38) = 0x3f800000;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined4 *)(lVar5 + lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar5 + lVar3 + 0x40) = 0xbf000000bf000000;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined8 *)(lVar5 + lVar3 + 0x4c) = 0;
  *(undefined4 *)(lVar5 + lVar3 + 0x54) = 0x3f800000;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined8 *)(lVar5 + lVar3 + 0x58) = 0x3f80000000000000;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined4 *)(lVar5 + lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar5 + lVar3 + 0x60) = 0xbf0000003f000000;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined8 *)(lVar5 + lVar3 + 0x6c) = 0;
  *(undefined4 *)(lVar5 + lVar3 + 0x74) = 0x3f800000;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  *(undefined1 **)(lVar5 + lVar3 + 0x78) = &DAT_3f8000003f800000;
  local_78 = *(long *)(param_1 + 0x20);
  local_80 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    local_80 = *(int *)plVar6 - *(int *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  local_7c = 0;
  if (local_78 != 0) {
    local_7c = *(undefined4 *)(local_78 + 0x104);
  }
  lStack_70 = param_1 + 8;
  FUN_0390ebc0(param_1 + 0xb0,&local_80,0x20,0x80);
  *(undefined8 *)(param_1 + 0xe8) = 0x22;
  *(undefined8 *)(param_1 + 0xf4) = 0xc00000022;
  *(undefined2 *)(param_1 + 0xf0) = 1;
  *(undefined2 *)(param_1 + 0xfc) = 1;
  *(undefined8 *)(param_1 + 0x100) = 0x1800000016;
  *(undefined2 *)(param_1 + 0x108) = 1;
  lVar3 = param_2;
  if (param_2 == 0) {
    lVar5 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
    plVar6 = (long *)(lVar5 + 8);
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0xa8);
    }
    lVar3 = *plVar6;
  }
  uVar4 = *(undefined8 *)puVar2;
  plVar6 = (long *)(param_1 + 0x48);
  *plVar6 = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe;
  FUN_038f8590(uVar4,param_1 + 0x40,lVar3,0xc,4,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x58));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3) = 0;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x58));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3 + 2) = 2;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x58));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3 + 4) = 1;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x58));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3 + 6) = 1;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x58));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3 + 8) = 2;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x58));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3 + 10) = 3;
  local_60 = *(long *)(param_1 + 0x58);
  local_68 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    local_68 = *(int *)plVar6 - *(int *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  if (local_60 == 0) {
    uStack_64 = 0;
  }
  else {
    uStack_64 = *(undefined4 *)(local_60 + 0x104);
  }
  lStack_58 = param_1 + 0x40;
  FUN_03901480(param_1 + 0x1d0,&local_68,1,6);
  if (param_2 == 0) {
    lVar5 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar5 + 8);
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0xa8);
    }
    param_2 = *plVar6;
  }
  uVar4 = *(undefined8 *)puVar2;
  plVar6 = (long *)(param_1 + 0x80);
  *plVar6 = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xa2) = 0;
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xfe;
  FUN_038f8590(uVar4,param_1 + 0x78,param_2,8,4,0);
  *(undefined2 *)(param_1 + 0xa2) = 0;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x90));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x98) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3) = 0;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x90));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x98) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3 + 2) = 1;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x90));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x98) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3 + 4) = 3;
  lVar5 = (**(code **)puVar1)(*(undefined8 *)(param_1 + 0x90));
  lVar3 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar3 = *plVar6 - *(long *)(*(long *)(param_1 + 0x98) + 0x10);
  }
  *(undefined2 *)(lVar5 + lVar3 + 6) = 2;
  local_60 = *(long *)(param_1 + 0x90);
  local_68 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    local_68 = *(int *)plVar6 - *(int *)(*(long *)(param_1 + 0x98) + 0x10);
  }
  if (local_60 == 0) {
    uStack_64 = 0;
  }
  else {
    uStack_64 = *(undefined4 *)(local_60 + 0x104);
  }
  lStack_58 = param_1 + 0x78;
  FUN_03901480(param_1 + 0x230,&local_68,1,4);
  *(undefined4 *)(param_1 + 0x23c) = 2;
  return;
}

