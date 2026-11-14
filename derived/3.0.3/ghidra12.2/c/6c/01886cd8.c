
void FUN_01886cd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  param_1[0x93] = &PTR_LAB_049cdad0;
  param_1[0x94] = *param_2;
  param_1[0x95] = param_2[1];
  param_1[0x96] = param_2[2];
  uVar8 = param_2[3];
  *param_1 = &PTR_LAB_049cd7b8;
  param_1[0xa1] = 0;
  param_1[0xa4] = 0;
  param_1[0x93] = &PTR_LAB_049cdaa0;
  *(undefined8 *)((long)param_1 + 0x4e4) = 0;
  *(undefined8 *)((long)param_1 + 0x4ec) = 0;
  *(undefined8 *)((long)param_1 + 0x50d) = 0;
  *(undefined8 *)((long)param_1 + 0x525) = 0;
  *(undefined8 *)((long)param_1 + 0x53d) = 0;
  puVar6 = PTR_DAT_04bb3238;
  param_1[0x97] = uVar8;
  puVar1 = PTR_DAT_04bcb470;
  __dest = (char *)param_1[0xc];
  param_1[0xaa] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  uVar5 = *(undefined4 *)puVar6;
  puVar1 = puVar1 + 0x10;
  param_1[0xa0] = puVar1;
  param_1[0xa3] = puVar1;
  param_1[0xa6] = puVar1;
  param_1[0xa9] = puVar1;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)((long)param_1 + 0x4f4) = uVar5;
  *(undefined8 *)((long)param_1 + 0x555) = 0;
  if (__dest != "InsectActionFieldTumblebug") {
    iVar3 = 0x1a;
    if (*(int *)(param_1 + 0xd) < 0x1b) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldTumblebug",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,9,8,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar7 = (undefined8 *)param_1[0x55];
  puVar7[2] = 0x2a8;
  puVar7[3] = 1;
  puVar7[4] = 0x2b0;
  puVar7[5] = 1;
  *puVar7 = &PTR_LAB_049cdb00;
  puVar7[1] = param_1;
  puVar7[6] = 0x2b8;
  puVar7[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar7 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar7[2] = 0x2c0;
  puVar7[3] = 1;
  *puVar7 = &PTR_LAB_049cdb00;
  puVar7[1] = param_1;
  puVar7[4] = 0x2c8;
  puVar7[5] = 1;
  puVar7[6] = 0x2d0;
  puVar7[7] = 1;
  pcStack_48 = "State::cMove";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_50);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar4 = 0;
  }
  puVar7 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar7[2] = &LAB_01887044;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_049cdb00;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01887050;
  puVar7[5] = 0;
  puVar7[6] = &LAB_018872c4;
  puVar7[7] = 0;
  pcStack_48 = "State::cTurn";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,6,&local_50);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar4 = 0;
  }
  puVar7 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar7[2] = &LAB_018872c8;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_049cdb00;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_018872d4;
  puVar7[5] = 0;
  puVar7[6] = &LAB_01887644;
  puVar7[7] = 0;
  pcStack_48 = "State::cRotate";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,7,&local_50);
  lVar4 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar4 = 0;
  }
  puVar7 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar7[2] = &LAB_01887648;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_049cdb00;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01887684;
  puVar7[5] = 0;
  puVar7[6] = &LAB_01887898;
  puVar7[7] = 0;
  pcStack_48 = "State::cStop";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,8,&local_50);
  puVar2 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  *puVar2 = &PTR_LAB_049cdb00;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_0188789c;
  puVar2[3] = 0;
  puVar2[6] = &LAB_01887a40;
  puVar2[7] = 0;
  puVar2[4] = &LAB_01887990;
  puVar2[5] = 0;
  return;
}

