
void FUN_0183de30(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *__dest;
  char *__dest_00;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  puVar1 = PTR_DAT_04bbe988;
  __dest = "InsectActionFieldSwim";
  __dest_00 = (char *)param_1[0xc];
  *(undefined4 *)((long)param_1 + 0x4a4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (__dest_00 != "InsectActionFieldSwim") {
    iVar3 = 0x15;
    if ((int)param_1[0xd] < 0x16) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest_00,"InsectActionFieldSwim",(long)iVar3);
    __dest_00[iVar3] = '\0';
    __dest = (char *)param_1[0xc];
  }
  param_1[0x95] = (long)&PTR_LAB_049c7c18;
  param_1[0x96] = *param_2;
  param_1[0x97] = param_2[1];
  param_1[0x98] = param_2[2];
  lVar5 = param_2[3];
  *param_1 = (long)&PTR_LAB_049c7888;
  param_1[0x9b] = -0x8000000000000000;
  param_1[0x9e] = -0x8000000000000000;
  param_1[0xa1] = -0x8000000000000000;
  param_1[0x95] = (long)&PTR_LAB_049c7b70;
  puVar1 = PTR_DAT_04bcb470;
  *(undefined4 *)(param_1 + 0x9c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x9f) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa2) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x4e4) = 0;
  *(undefined1 *)((long)param_1 + 0x4fc) = 0;
  *(undefined1 *)((long)param_1 + 0x514) = 0;
  param_1[0xa3] = 0;
  *(undefined1 *)((long)param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)((long)param_1 + 0x534) = 0;
  param_1[0x99] = lVar5;
  puVar1 = puVar1 + 0x10;
  param_1[0x9a] = (long)puVar1;
  param_1[0x9d] = (long)puVar1;
  param_1[0xa0] = (long)puVar1;
  if (__dest != "InsectActionFieldDytiscidae") {
    iVar3 = 0x1b;
    if ((int)param_1[0xd] < 0x1c) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectActionFieldDytiscidae",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  plVar2 = param_1 + 0x4f;
  FUN_03ebac90(plVar2,9,6,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x55];
  puVar4[2] = 0x2a8;
  puVar4[3] = 1;
  puVar4[4] = 0x2b0;
  puVar4[5] = 1;
  *puVar4 = &PTR_LAB_049c7c48;
  puVar4[1] = param_1;
  puVar4[6] = 0x2b8;
  puVar4[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar4[2] = 0x2c0;
  puVar4[3] = 1;
  *puVar4 = &PTR_LAB_049c7c48;
  puVar4[1] = param_1;
  puVar4[4] = 0x2c8;
  puVar4[5] = 1;
  puVar4[6] = 0x2d0;
  puVar4[7] = 1;
  pcStack_48 = "State::cMove";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,5,&local_50);
  lVar5 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = FUN_0183e1c8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c7c48;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0183e450;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0183e9ac;
  puVar4[7] = 0;
  pcStack_48 = "State::cStop";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,6,&local_50);
  lVar5 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_0183e9b0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c7c48;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0183ead0;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0183ebcc;
  puVar4[7] = 0;
  pcStack_48 = "State::cBreath";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,7,&local_50);
  lVar5 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_0183ebd0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c7c48;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0183ed10;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0183f13c;
  puVar4[7] = 0;
  pcStack_48 = "State::cNidus";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,8,&local_50);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  *puVar4 = &PTR_LAB_049c7c48;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0183f190;
  puVar4[3] = 0;
  puVar4[6] = &LAB_0183f6f8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0183f250;
  puVar4[5] = 0;
  return;
}

