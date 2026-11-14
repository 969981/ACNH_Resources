
void FUN_0185d4fc(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  char *__dest;
  char *__dest_00;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  *(undefined1 *)((long)param_1 + 0x4c4) = 0;
  puVar5 = PTR_DAT_04bbe980;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0x40a00000;
  puVar1 = PTR_DAT_04bcb470;
  *(undefined4 *)(param_1 + 0x98) = 0x96;
  __dest = "InsectActionFieldStraight";
  puVar1 = puVar1 + 0x10;
  param_1[0x93] = (long)PTR_LAB_04bbe8b0;
  puVar4 = PTR_LAB_04bbe8b8;
  __dest_00 = (char *)param_1[0xc];
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0x96] = (long)puVar1;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x94] = (long)puVar4;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  if (__dest_00 != "InsectActionFieldStraight") {
    iVar3 = 0x19;
    if ((int)param_1[0xd] < 0x1a) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest_00,"InsectActionFieldStraight",(long)iVar3);
    __dest_00[iVar3] = '\0';
    __dest = (char *)param_1[0xc];
  }
  param_1[0x9c] = (long)&PTR_LAB_049ca2e0;
  param_1[0x9d] = *param_2;
  param_1[0x9e] = param_2[1];
  param_1[0x9f] = param_2[2];
  lVar7 = param_2[3];
  *param_1 = (long)&PTR_LAB_049c9fc8;
  param_1[0xa3] = -0x8000000000000000;
  param_1[0xa6] = -0x8000000000000000;
  param_1[0xa9] = -0x8000000000000000;
  param_1[0xae] = -0x8000000000000000;
  param_1[0xa1] = 0;
  *(undefined1 *)((long)param_1 + 0x524) = 0;
  param_1[0xa2] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x53c) = 0;
  param_1[0xa5] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x554) = 0;
  param_1[0xa8] = (long)puVar1;
  param_1[0xab] = 0;
  *(undefined1 *)((long)param_1 + 0x57c) = 0;
  param_1[0x9c] = (long)&PTR_LAB_049ca2b0;
  param_1[0xad] = (long)puVar1;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x564) = 1;
  *(undefined4 *)(param_1 + 0xa4) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa7) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xaa) = 0x7fffffff;
  param_1[0xa0] = lVar7;
  *(undefined4 *)(param_1 + 0xaf) = 0x7fffffff;
  if (__dest != "InsectActionFieldLocust") {
    iVar3 = 0x17;
    if ((int)param_1[0xd] < 0x18) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectActionFieldLocust",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  plVar2 = param_1 + 0x4f;
  FUN_03ebac90(plVar2,8,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,0,&local_50);
  puVar6 = (undefined8 *)param_1[0x55];
  puVar6[2] = 0x2a8;
  puVar6[3] = 1;
  puVar6[4] = 0x2b0;
  puVar6[5] = 1;
  *puVar6 = &PTR_LAB_049ca310;
  puVar6[1] = param_1;
  puVar6[6] = 0x2b8;
  puVar6[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,1,&local_50);
  puVar6 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar6[2] = 0x2c0;
  puVar6[3] = 1;
  *puVar6 = &PTR_LAB_049ca310;
  puVar6[1] = param_1;
  puVar6[4] = 0x2c8;
  puVar6[5] = 1;
  puVar6[6] = 0x2d0;
  puVar6[7] = 1;
  pcStack_48 = "State::cMove";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,6,&local_50);
  lVar7 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x55] + lVar7);
  puVar6[2] = FUN_0185d898;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_049ca310;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_0185d9e0;
  puVar6[5] = 0;
  puVar6[6] = &LAB_0185e028;
  puVar6[7] = 0;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,5,&local_50);
  lVar7 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x55] + lVar7);
  puVar6[2] = &LAB_0185e034;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_049ca310;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_0185e070;
  puVar6[5] = 0;
  puVar6[6] = &LAB_0185e148;
  puVar6[7] = 0;
  pcStack_48 = "State::cConfuse";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,7,&local_50);
  lVar7 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x55] + lVar7);
  *puVar6 = &PTR_LAB_049ca310;
  puVar6[1] = param_1;
  puVar6[2] = &LAB_0185e14c;
  puVar6[3] = 0;
  puVar6[4] = &LAB_0185e248;
  puVar6[5] = 0;
  puVar6[6] = &LAB_0185e3f8;
  puVar6[7] = 0;
  return;
}

