
void FUN_03c503d4(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  char *pcStack_a8;
  undefined4 local_a0;
  undefined1 local_7d;
  undefined *local_78;
  undefined8 local_70;
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
  puVar2 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_04b80be8;
  local_48 = 0;
  local_7d = 0;
  local_c0._4_4_ = local_c0._4_4_ & 0xffffff00;
  local_78 = puVar2 + 0x10;
  local_70 = &DAT_040d7f5b;
  puStack_60 = &DAT_04064c51;
  puStack_50 = &DAT_0407ebb1;
  pcStack_c8 = (char *)((long)&local_c0 + 4);
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x40);
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_68 = local_78;
  local_58 = local_78;
  FUN_00744dd0(param_1 + 6,&local_78,&local_d0,param_1);
  param_1[0x1c] = 0;
  param_1[0x18] = (long)&DAT_040dd778;
  param_1[0x19] = 0;
  plVar6 = param_1 + 0x17;
  *plVar6 = (long)&PTR_LAB_04b80d48;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  puVar4 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x1b) >> 7 & 1) == 0) {
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xfeffffff;
  param_1[0x1e] = (long)"radirus";
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  plVar6 = param_1 + 0x1d;
  *plVar6 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x21) & 0x800) != 0) {
    uVar7 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar4 = uVar7;
  uVar3 = *(uint *)(param_1 + 0x21);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x22] = 0;
    uVar7 = 0x3f800000;
    if ((uVar3 & 0x800) != 0) {
      uVar7 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x22) = uVar7;
  }
  puVar2 = puVar2 + 0x10;
  local_a0 = 0;
  *(uint *)(param_1 + 0x21) = uVar3 & 0xfeffffff;
  pcStack_c8 = "size";
  puStack_b8 = &DAT_040944b2;
  local_78 = &DAT_3f8000003f800000;
  pcStack_a8 = "Min=-100, Max=100";
  local_70._0_4_ = 0x3f800000;
  local_d0 = puVar2;
  local_c0 = puVar2;
  local_b0 = puVar2;
  FUN_006fdfc0(param_1 + 0x23,&local_d0,&local_78,param_1);
  local_a0 = 0;
  pcStack_c8 = "up";
  puStack_b8 = &DAT_040adcc1;
  pcStack_a8 = "Min=-1, Max=1";
  local_78 = (undefined *)0x3f80000000000000;
  local_70 = (undefined1 *)((ulong)local_70._4_4_ << 0x20);
  local_d0 = puVar2;
  local_c0 = puVar2;
  local_b0 = puVar2;
  FUN_006fdfc0(param_1 + 0x2a,&local_d0,&local_78,param_1);
  local_a0 = 0;
  pcStack_c8 = "offset";
  local_78 = (undefined *)0x0;
  puStack_b8 = &DAT_040d98d2;
  local_70 = (undefined1 *)((ulong)local_70 & 0xffffffff00000000);
  pcStack_a8 = "Min=-100, Max=100";
  local_d0 = puVar2;
  local_c0 = puVar2;
  local_b0 = puVar2;
  FUN_006fdfc0(param_1 + 0x31,&local_d0,&local_78,param_1);
  return;
}

