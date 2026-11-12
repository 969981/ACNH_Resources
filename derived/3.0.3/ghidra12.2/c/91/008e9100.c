
void FUN_008e9100(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined *local_c8;
  undefined8 *puStack_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  lVar7 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  *(int *)(param_1 + 4) = (int)lVar7;
  plVar9 = param_1 + 5;
  *plVar9 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_b4 = 0;
  puStack_c0 = &local_b4;
  *param_1 = (long)&PTR_FUN_049219d0;
  local_c8 = &DAT_04926938;
  local_b8 = 0x400;
  plVar8 = param_1 + 6;
  *plVar8 = (long)&PTR_LAB_049267f8;
  *(undefined2 *)(param_1 + 0xd) = 0x400;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[0xb] = (long)&DAT_04926938;
  param_1[0xc] = (long)param_1 + 0x6c;
  local_b6 = 0x20;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_b5 = 2;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[7] = (long)"mCurvef";
  *(undefined1 *)((long)param_1 + 0x6a) = 0x20;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)((long)param_1 + 0x6b) = 2;
  param_1[0x1e] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar7 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar6 = lVar7;
      lVar7 = *(long *)(lVar6 + 0x10);
    } while (lVar7 != 0);
    plVar9 = (long *)(lVar6 + 0x10);
  }
  *plVar9 = (long)plVar8;
  param_1[9] = (long)param_1;
  uVar3 = (**(code **)(param_1[6] + 0xf0))(plVar8);
  FUN_008ea6d8(uVar3,&local_c8);
  uVar2 = *(uint *)(param_1 + 10);
  uVar5 = uVar2 | 0x1000000;
  *(uint *)(param_1 + 10) = uVar5;
  if ((uVar2 >> 7 & 1) == 0) {
    FUN_008ea8f0(plVar8,&local_c8);
    uVar5 = *(uint *)(param_1 + 10);
  }
  *(uint *)(param_1 + 10) = uVar5 & 0xfeffffff;
  param_1[0x20] = (long)"mFrame";
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  puVar1 = PTR_DAT_04bb3380 + 0x10;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  plVar9 = param_1 + 0x1f;
  *plVar9 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar9);
  puVar4 = (undefined4 *)(**(code **)(*plVar9 + 0xf0))(plVar9);
  *puVar4 = 0x1e;
  if ((*(uint *)(param_1 + 0x23) >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x1e;
  }
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xfeffffff;
  return;
}

