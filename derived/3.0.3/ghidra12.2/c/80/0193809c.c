
void FUN_0193809c(long *param_1)

{
  undefined4 *puVar1;
  undefined *local_c0;
  undefined1 *puStack_b8;
  undefined1 local_b0 [7];
  undefined4 uStack_a9;
  undefined1 local_a5;
  undefined1 local_6d;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  FUN_01908400();
  local_68 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_049df7a0;
  local_38 = 8;
  local_6d = 0;
  local_a5 = 0;
  local_68 = local_68 + 0x10;
  local_b0 = (undefined1  [7])0x6e6e5500000040;
  uStack_a9 = 0x64656d61;
  pcStack_60 = "mRestPointName";
  puStack_50 = &DAT_0407ebb1;
  puStack_40 = &DAT_0407ebb1;
  puStack_b8 = local_b0 + 4;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_58 = local_68;
  local_48 = local_68;
  FUN_00744dd0(param_1 + 0x61,&local_68,&local_c0,param_1);
  param_1[0x74] = 0;
  param_1[0x73] = (long)"mRestPointType";
  param_1[0x72] = (long)&PTR_LAB_049df928;
  param_1[0x75] = 0;
  param_1[0x76] = 8;
  param_1[0x77] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x72);
  puVar1 = (undefined4 *)(**(code **)(param_1[0x72] + 0xf0))(param_1 + 0x72);
  *puVar1 = 0;
  if ((*(uint *)(param_1 + 0x76) >> 7 & 1) == 0) {
    param_1[0x77] = 0;
    *(undefined4 *)(param_1 + 0x77) = 0;
  }
  *(uint *)(param_1 + 0x76) = *(uint *)(param_1 + 0x76) & 0xfeffffff;
  return;
}

