
void FUN_033cd820(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined **local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  undefined **local_68;
  char *pcStack_60;
  undefined **local_58;
  undefined *puStack_50;
  undefined **local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar4;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *param_1 = (long)&PTR_LAB_04b25fb8;
  param_1[0x2c] = (long)"mCategoryIndex";
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  puVar2 = PTR_DAT_04bb3380;
  puVar1 = PTR_DAT_04bb3380 + 0x10;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)puVar1;
  lVar4 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar5 = lVar4;
      lVar4 = *(long *)(lVar5 + 0x10);
    } while (lVar4 != 0);
    plVar6 = (long *)(lVar5 + 0x10);
  }
  *plVar6 = (long)(param_1 + 0x2b);
  param_1[0x2e] = (long)param_1;
  puVar3 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))();
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x31] = (long)(puVar2 + 0x10);
  param_1[0x32] = (long)"mUseParamIndex";
  param_1[0x36] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  puVar3 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar3 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x35) >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  }
  *(uint *)(param_1 + 0x35) = *(uint *)(param_1 + 0x35) & 0xfeffffff;
  local_38 = 0;
  local_6d = 0;
  local_ac[0] = 0;
  local_68 = &PTR_LAB_048f9770;
  pcStack_60 = "mUseParamName";
  local_58 = &PTR_LAB_048f9770;
  puStack_50 = &DAT_040bce80;
  local_48 = &PTR_LAB_048f9770;
  puStack_40 = &DAT_0407ebb1;
  puStack_b8 = local_ac;
  local_b0 = 0x40;
  local_c0 = &PTR_LAB_048fb9f8;
  FUN_00744dd0(param_1 + 0x37,&local_68,&local_c0,param_1);
  return;
}

