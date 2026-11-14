
void FUN_0181cbcc(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *__dest;
  char *__dest_00;
  undefined *local_60;
  char *pcStack_58;
  
  FUN_01812e50(param_1,param_2[4]);
  puVar1 = PTR_DAT_04bbe968;
  __dest = "InsectActionFieldRestless";
  __dest_00 = (char *)param_1[0xc];
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x4a4) = 0;
  param_1[0x95] = 0;
  param_1[0x93] = (long)FUN_0181d1b0;
  *param_1 = (long)(puVar1 + 0x10);
  if (__dest_00 != "InsectActionFieldRestless") {
    iVar3 = 0x19;
    if ((int)param_1[0xd] < 0x1a) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest_00,"InsectActionFieldRestless",(long)iVar3);
    __dest_00[iVar3] = '\0';
    __dest = (char *)param_1[0xc];
  }
  param_1[0x96] = (long)&PTR_LAB_049c6148;
  param_1[0x97] = *param_2;
  param_1[0x98] = param_2[1];
  param_1[0x99] = param_2[2];
  lVar5 = param_2[3];
  *param_1 = (long)&PTR_LAB_049c5da0;
  param_1[0x96] = (long)&PTR_LAB_049c60a0;
  puVar1 = PTR_DAT_04bcb470;
  param_1[0x9c] = -0x8000000000000000;
  param_1[0x9f] = -0x8000000000000000;
  param_1[0xa2] = -0x8000000000000000;
  param_1[0xa5] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0x9d) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa3) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa6) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x4ec) = 0;
  *(undefined1 *)((long)param_1 + 0x504) = 0;
  *(undefined1 *)((long)param_1 + 0x51c) = 0;
  *(undefined1 *)((long)param_1 + 0x534) = 0;
  param_1[0xa7] = 0;
  param_1[0x9a] = lVar5;
  puVar1 = puVar1 + 0x10;
  param_1[0x9b] = (long)puVar1;
  param_1[0x9e] = (long)puVar1;
  param_1[0xa1] = (long)puVar1;
  param_1[0xa4] = (long)puVar1;
  *(undefined8 *)((long)param_1 + 0x53d) = 0;
  if (__dest != "InsectActionFieldAttacker") {
    iVar3 = 0x19;
    if ((int)param_1[0xd] < 0x1a) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectActionFieldAttacker",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  plVar2 = param_1 + 0x4f;
  FUN_03ebac90(plVar2,0xf,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "State::cRelease";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,1,&local_60);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar4[4] = 0x2c8;
  puVar4[5] = 1;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[2] = 0x2c0;
  puVar4[3] = 1;
  puVar4[6] = 0x2d0;
  puVar4[7] = 1;
  pcStack_58 = "State::cEscape";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,0,&local_60);
  puVar4 = (undefined8 *)param_1[0x55];
  puVar4[2] = 0x2d8;
  puVar4[3] = 1;
  puVar4[4] = 0x2e0;
  puVar4[5] = 1;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[6] = 0x2e8;
  puVar4[7] = 1;
  pcStack_58 = "State::cWait";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,5,&local_60);
  lVar5 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = FUN_0181d1ec;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[4] = FUN_0181d348;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0181d43c;
  puVar4[7] = 0;
  pcStack_58 = "State::cTurn";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,6,&local_60);
  lVar5 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_0181d444;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0181d51c;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0181d674;
  puVar4[7] = 0;
  pcStack_58 = "State::cMove";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,7,&local_60);
  lVar5 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_0181d678;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0181d80c;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0181dd4c;
  puVar4[7] = 0;
  pcStack_58 = "State::cThreatenTurn";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,8,&local_60);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  puVar4[4] = &LAB_0181ddc0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0181dd54;
  puVar4[3] = 0;
  puVar4[6] = &LAB_0181decc;
  puVar4[7] = 0;
  pcStack_58 = "State::cThreaten";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,9,&local_60);
  lVar5 = 0x240;
  if (*(uint *)(param_1 + 0x54) < 10) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_0181ded0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0181df90;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0181e0a4;
  puVar4[7] = 0;
  pcStack_58 = "State::cLeave";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,10,&local_60);
  lVar5 = 0x280;
  if (*(uint *)(param_1 + 0x54) < 0xb) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_0181e0a8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0181e348;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0181e518;
  puVar4[7] = 0;
  pcStack_58 = "State::cJump";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,0xb,&local_60);
  lVar5 = 0x2c0;
  if (*(uint *)(param_1 + 0x54) < 0xc) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[4] = &LAB_0181e600;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0181e51c;
  puVar4[3] = 0;
  puVar4[6] = &LAB_0181e624;
  puVar4[7] = 0;
  pcStack_58 = "State::cPursue";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,0xc,&local_60);
  lVar5 = 0x300;
  if (*(uint *)(param_1 + 0x54) < 0xd) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_0181e628;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0181e714;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0181ec74;
  puVar4[7] = 0;
  pcStack_58 = "State::cAttackWait";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,0xd,&local_60);
  lVar5 = 0x340;
  if (*(uint *)(param_1 + 0x54) < 0xe) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_0181ec78;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0181ec94;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0181f0e8;
  puVar4[7] = 0;
  pcStack_58 = "State::cConfuse";
  local_60 = puVar1;
  FUN_03ebaf40(plVar2,0xe,&local_60);
  lVar5 = 0x380;
  if (*(uint *)(param_1 + 0x54) < 0xf) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  *puVar4 = &PTR_LAB_049c6178;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0181f0ec;
  puVar4[3] = 0;
  puVar4[4] = &LAB_0181f1f8;
  puVar4[5] = 0;
  puVar4[6] = &LAB_0181f3dc;
  puVar4[7] = 0;
  return;
}

