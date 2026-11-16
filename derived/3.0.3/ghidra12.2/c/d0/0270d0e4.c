
void FUN_0270d0e4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *__s;
  undefined *puVar10;
  long lVar11;
  
  puVar10 = PTR_DAT_04bc35c8;
  *(undefined1 *)(param_1 + 6) = 0;
  plVar1 = param_1 + 0x12892;
  plVar2 = param_1 + 0x1079f;
  param_1[2] = param_3;
  param_1[3] = 0;
  plVar3 = param_1 + 0xe6ac;
  plVar4 = param_1 + 0xa4c6;
  *param_1 = (long)(puVar10 + 0x10);
  param_1[1] = 0;
  plVar5 = param_1 + 0xc5b9;
  plVar6 = param_1 + 0x83d3;
  plVar7 = param_1 + 0x62e0;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar8 = param_1 + 0x41ed;
  plVar9 = param_1 + 0x20fa;
  if (param_2 != 0) {
    lVar11 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar11 != 0) {
      param_1[4] = lVar11;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0xa4bf0);
  FUN_0270d700(__s,0,0);
  param_1[7] = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar9,0,0);
  *plVar9 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar8,0,0);
  *plVar8 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar7,0,0);
  *plVar7 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar6,0,0);
  *plVar6 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar4,0,0);
  *plVar4 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar5,0,0);
  *plVar5 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar3,0,0);
  *plVar3 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar2,0,0);
  *plVar2 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar1,0,0);
  *plVar1 = (long)&PTR_LAB_04a8c380;
  *param_1 = (long)&PTR_LAB_04a8c350;
  lVar11 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar11 != 0) {
    param_1[0xb] = lVar11;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar11 = param_1[3];
  param_1[3] = (long)plVar9;
  if (lVar11 != 0) {
    param_1[0x20fe] = lVar11;
  }
  param_1[0x20fc] = param_1[0x20fc] + param_3 + 0x13230;
  FUN_026400e0(plVar9);
  lVar11 = param_1[3];
  param_1[3] = (long)plVar8;
  if (lVar11 != 0) {
    param_1[0x41f1] = lVar11;
  }
  param_1[0x41ef] = param_1[0x41ef] + param_3 + 0x26460;
  FUN_026400e0(plVar8);
  lVar11 = param_1[3];
  param_1[3] = (long)plVar7;
  if (lVar11 != 0) {
    param_1[0x62e4] = lVar11;
  }
  param_1[0x62e2] = param_1[0x62e2] + param_3 + 0x39690;
  FUN_026400e0(plVar7);
  lVar11 = param_1[3];
  param_1[3] = (long)plVar6;
  if (lVar11 != 0) {
    param_1[0x83d7] = lVar11;
  }
  param_1[0x83d5] = param_1[0x83d5] + param_3 + 0x4c8c0;
  FUN_026400e0(plVar6);
  lVar11 = param_1[3];
  param_1[3] = (long)plVar4;
  if (lVar11 != 0) {
    param_1[0xa4ca] = lVar11;
  }
  param_1[0xa4c8] = param_1[0xa4c8] + param_3 + 0x5faf0;
  FUN_026400e0(plVar4);
  lVar11 = param_1[3];
  param_1[3] = (long)plVar5;
  if (lVar11 != 0) {
    param_1[0xc5bd] = lVar11;
  }
  param_1[0xc5bb] = param_1[0xc5bb] + param_3 + 0x72d20;
  FUN_026400e0();
  lVar11 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar11 != 0) {
    param_1[0xe6b0] = lVar11;
  }
  param_1[0xe6ae] = param_1[0xe6ae] + param_3 + 0x85f50;
  FUN_026400e0(plVar3);
  lVar11 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar11 != 0) {
    param_1[0x107a3] = lVar11;
  }
  param_1[0x107a1] = param_1[0x107a1] + param_3 + 0x99180;
  FUN_026400e0();
  lVar11 = param_1[3];
  param_1[3] = (long)plVar1;
  if (lVar11 != 0) {
    param_1[0x12896] = lVar11;
  }
  param_1[0x12894] = param_1[0x12894] + param_3 + 0xac3b0;
  FUN_026400e0(plVar1);
  return;
}

