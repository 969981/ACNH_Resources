
void FUN_03c70640(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined *local_60;
  undefined8 *puStack_58;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_04bb2120;
  local_60 = PTR_DAT_04bb2020;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  local_60 = local_60 + 0x10;
  param_1[6] = puVar1;
  param_1[5] = local_60;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  puStack_58 = &DAT_0407ebb1;
  FUN_03c5a110(param_1 + 5,&local_60,0xffffffff,1);
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  puVar3 = PTR_DAT_04bd3890;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0xffffffffffffffff;
  puVar1 = puVar3 + 0x10;
  plVar8 = param_1 + 10;
  *plVar8 = (long)puVar1;
  plVar7 = param_1 + 0x10;
  *plVar7 = (long)puVar1;
  param_1[8] = 0;
  param_1[9] = plVar8;
  param_1[0xf] = plVar7;
  FUN_038e2df8(param_1 + 0x1a);
  param_1[0x17] = FUN_03c66ec8;
  param_1[0x18] = &LAB_03c66f18;
  param_1[0x19] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0xffffffffffffffff;
  FUN_038e2df8(param_1 + 0x35);
  param_1[0x32] = &LAB_03c66f50;
  param_1[0x33] = &LAB_03c67050;
  param_1[0x34] = 0x20;
  param_1[0x4c] = param_1 + 0x4c;
  param_1[0x4d] = param_1 + 0x4c;
  puVar2 = PTR_DAT_04bd3698;
  param_1[0x50] = param_1 + 0x4f;
  param_1[0x51] = 0x1000000000;
  param_1[0x4e] = 0;
  param_1[0x4f] = param_1 + 0x4f;
  puVar1 = PTR_DAT_04bd3690;
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3698), iVar4 != 0)) {
    *(undefined8 *)puVar1 = 0;
    *(undefined **)(puVar1 + 0x28) = puVar3 + 0x10;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 1;
    *(undefined **)(puVar1 + 0x20) = puVar1 + 0x28;
    FUN_001001d0(PTR_LAB_04bd2f80,puVar1,&__DT_FINI_ARRAY);
    __cxa_guard_release(PTR_DAT_04bd3698);
  }
  param_1[0x15] = puVar1;
  puVar1 = PTR_DAT_04bd36a0;
  if (((*PTR_DAT_04bd36a8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd36a8), iVar4 != 0))
  {
    *(undefined ***)puVar1 = &PTR_LAB_04b83a40;
    *(undefined ***)(puVar1 + 8) = &PTR_FUN_04b83a70;
    *(undefined ***)(puVar1 + 0x28) = &PTR_FUN_04b83a98;
    *(undefined ***)(puVar1 + 0x48) = &PTR_FUN_04b83ac0;
    __cxa_guard_release(PTR_DAT_04bd36a8);
  }
  param_1[8] = puVar1;
  uVar5 = (**(code **)(*(long *)(puVar1 + 8) + 8))();
  if ((uVar5 & 1) != 0) {
    (*(code *)**(undefined8 **)param_1[9])();
    puVar2 = PTR_LAB_04bd30c0;
    param_1[9] = plVar8;
    param_1[10] = &PTR_FUN_04b82a38;
    param_1[0xb] = &PTR_LAB_04b82a98;
    param_1[0xc] = puVar2;
  }
  uVar5 = (**(code **)(*(long *)(puVar1 + 0x28) + 8))();
  if ((uVar5 & 1) != 0) {
    (*(code *)**(undefined8 **)param_1[0xf])();
    puVar2 = PTR_LAB_04bd30c8;
    param_1[0xf] = plVar7;
    param_1[0x10] = &PTR_FUN_04b82ac0;
    param_1[0x11] = &PTR_LAB_04b82b20;
    param_1[0x12] = puVar2;
  }
  uVar5 = (**(code **)(*(long *)(puVar1 + 0x48) + 8))(puVar1 + 0x48);
  if ((uVar5 & 1) != 0) {
    lVar6 = param_1[0x15];
    (**(code **)**(undefined8 **)(lVar6 + 0x20))();
    *(undefined8 *)(lVar6 + 0x28) = &PTR_FUN_04b82b48;
    puVar1 = PTR_LAB_04bd30d0;
    *(undefined8 **)(lVar6 + 0x20) = (undefined8 *)(lVar6 + 0x28);
    *(undefined ***)(lVar6 + 0x30) = &PTR_LAB_04b82ba8;
    *(undefined **)(lVar6 + 0x38) = puVar1;
    FUN_03c63db0(param_1 + 0x16,param_1[0x15] + param_1[0x19]);
  }
  if (((DAT_05aee2a8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05aee2a8), iVar4 != 0)) {
    DAT_04c4cb68 = 0;
    DAT_04c4cb70 = (code *)0x0;
    DAT_04c4cb78 = (code *)0x0;
    DAT_04c4cb80 = 0xffffffffffffffff;
    FUN_038e2df8(&DAT_04c4cb88);
    DAT_04c4cc40 = 0;
    DAT_04c4cb70 = FUN_03c66bc0;
    DAT_04c4cb78 = FUN_03c66d50;
    DAT_04c4cb80 = 0;
    FUN_001001d0(PTR_FUN_04bd3898,&DAT_04c4cb68,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05aee2a8);
  }
  FUN_038e2f80(&DAT_04c4cb88);
  DAT_04c4cc40 = DAT_04c4cc40 + 1;
  *(int *)(param_1 + 4) = DAT_04c4cc40;
  if (((DAT_05aee2a8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05aee2a8), iVar4 != 0)) {
    DAT_04c4cb68 = 0;
    DAT_04c4cb70 = (code *)0x0;
    DAT_04c4cb78 = (code *)0x0;
    DAT_04c4cb80 = 0xffffffffffffffff;
    FUN_038e2df8(&DAT_04c4cb88);
    DAT_04c4cc40 = 0;
    DAT_04c4cb70 = FUN_03c66bc0;
    DAT_04c4cb78 = FUN_03c66d50;
    DAT_04c4cb80 = 0;
    FUN_001001d0(PTR_FUN_04bd3898,&DAT_04c4cb68,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05aee2a8);
  }
  FUN_03c63ed0(&DAT_04c4cb68,(long)param_1 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

