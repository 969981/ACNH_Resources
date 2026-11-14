
void FUN_01822fd8(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  pcVar6 = (char *)param_1[0xc];
  __dest = "InsectActionFieldFly";
  *(undefined2 *)((long)param_1 + 0x496) = 0;
  if (pcVar6 != "InsectActionFieldFly") {
    iVar3 = 0x14;
    if ((int)param_1[0xd] < 0x15) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(pcVar6,"InsectActionFieldFly",(long)iVar3);
    pcVar6[iVar3] = '\0';
    __dest = (char *)param_1[0xc];
  }
  puVar1 = PTR_DAT_04bbe800;
  pcVar6 = "InsectActionFieldFlyPursue";
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (__dest != "InsectActionFieldFlyPursue") {
    iVar3 = 0x1a;
    if ((int)param_1[0xd] < 0x1b) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectActionFieldFlyPursue",(long)iVar3);
    __dest[iVar3] = '\0';
    pcVar6 = (char *)param_1[0xc];
  }
  param_1[0x95] = (long)&PTR_LAB_049c65a0;
  param_1[0x96] = *param_2;
  param_1[0x97] = param_2[1];
  param_1[0x98] = param_2[2];
  lVar5 = param_2[3];
  *param_1 = (long)&PTR_LAB_049c61f0;
  param_1[0x95] = (long)&PTR_LAB_049c64f8;
  puVar1 = PTR_DAT_04bcb470;
  param_1[0x9b] = -0x8000000000000000;
  param_1[0x9e] = -0x8000000000000000;
  param_1[0xa1] = -0x8000000000000000;
  param_1[0xa4] = -0x8000000000000000;
  *(undefined1 *)((long)param_1 + 0x4e4) = 0;
  *(undefined1 *)((long)param_1 + 0x4fc) = 0;
  *(undefined1 *)((long)param_1 + 0x514) = 0;
  *(undefined1 *)((long)param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x9f) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa2) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa5) = 0x7fffffff;
  param_1[0x99] = lVar5;
  param_1[0xa6] = (long)param_1 + 0x544;
  puVar1 = puVar1 + 0x10;
  param_1[0x9a] = (long)puVar1;
  param_1[0x9d] = (long)puVar1;
  param_1[0xa0] = (long)puVar1;
  param_1[0xa3] = (long)puVar1;
  param_1[0xa7] = 10;
  puVar1 = PTR_DAT_04bb2018 + 0x10;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined2 *)(param_1 + 0xbd) = 0;
  param_1[0xb8] = (long)puVar1;
  param_1[0xba] = (long)puVar1;
  *(undefined8 *)((long)param_1 + 0x5ec) = 0;
  *(undefined8 *)((long)param_1 + 0x5f4) = 0;
  if (pcVar6 != "InsectActionFieldBee") {
    iVar3 = 0x14;
    if ((int)param_1[0xd] < 0x15) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(pcVar6,"InsectActionFieldBee",(long)iVar3);
    pcVar6[iVar3] = '\0';
  }
  plVar2 = param_1 + 0x4f;
  FUN_03ebac90(plVar2,10,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x55];
  puVar4[2] = 0x2c8;
  puVar4[3] = 1;
  puVar4[4] = 0x2d0;
  puVar4[5] = 1;
  *puVar4 = &PTR_LAB_049c65d0;
  puVar4[1] = param_1;
  puVar4[6] = 0x2d8;
  puVar4[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar4[2] = 0x2e0;
  puVar4[3] = 1;
  *puVar4 = &PTR_LAB_049c65d0;
  puVar4[1] = param_1;
  puVar4[4] = 0x2e8;
  puVar4[5] = 1;
  puVar4[6] = 0x2f0;
  puVar4[7] = 1;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,5,&local_50);
  lVar5 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = FUN_0182345c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c65d0;
  puVar4[1] = param_1;
  puVar4[4] = FUN_018234c0;
  puVar4[5] = 0;
  puVar4[6] = &LAB_01823c14;
  puVar4[7] = 0;
  pcStack_48 = "State::cPursuit";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,6,&local_50);
  lVar5 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_01823c20;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c65d0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01823cbc;
  puVar4[5] = 0;
  puVar4[6] = &LAB_018249b8;
  puVar4[7] = 0;
  pcStack_48 = "State::cAttack";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,7,&local_50);
  lVar5 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_018249bc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c65d0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01824a30;
  puVar4[5] = 0;
  puVar4[6] = &LAB_01824b40;
  puVar4[7] = 0;
  pcStack_48 = "State::cAround";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,8,&local_50);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  puVar4[4] = &LAB_01824bc0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049c65d0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01824b44;
  puVar4[3] = 0;
  puVar4[6] = &LAB_01824da0;
  puVar4[7] = 0;
  pcStack_48 = "State::cVanish";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,9,&local_50);
  lVar5 = 0x240;
  if (*(uint *)(param_1 + 0x54) < 10) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  *puVar4 = &PTR_LAB_049c65d0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01824da4;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01824da8;
  puVar4[5] = 0;
  puVar4[6] = &LAB_01824e50;
  puVar4[7] = 0;
  return;
}

