
void FUN_018804cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  param_1[0x93] = &PTR_LAB_049cd328;
  param_1[0x94] = *param_2;
  param_1[0x95] = param_2[1];
  param_1[0x96] = param_2[2];
  uVar6 = param_2[3];
  *param_1 = &PTR_LAB_049ccfb0;
  param_1[0x93] = &PTR_LAB_049cd298;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  param_1[0x9b] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x9c) = 0x7fffffff;
  puVar1 = PTR_DAT_04bcb470;
  __dest = (char *)param_1[0xc];
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)((long)param_1 + 0x4cc) = 0;
  *(undefined1 *)((long)param_1 + 0x4e4) = 0;
  param_1[0x9d] = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  param_1[0x97] = uVar6;
  param_1[0x9a] = puVar1 + 0x10;
  if (__dest != "InsectActionFieldThread") {
    iVar3 = 0x17;
    if (*(int *)(param_1 + 0xd) < 0x18) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldThread",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,8,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = 0x2a8;
  puVar5[3] = 1;
  puVar5[4] = 0x2b0;
  puVar5[5] = 1;
  *puVar5 = &PTR_LAB_049cd358;
  puVar5[1] = param_1;
  puVar5[6] = 0x2b8;
  puVar5[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[2] = 0x2c0;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_049cd358;
  puVar5[1] = param_1;
  puVar5[4] = 0x2c8;
  puVar5[5] = 1;
  puVar5[6] = 0x2d0;
  puVar5[7] = 1;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_50);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar5[2] = &LAB_018807a0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049cd358;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_018807d0;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01880a58;
  puVar5[7] = 0;
  pcStack_48 = "State::cDown";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,6,&local_50);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar5[2] = &LAB_01880a5c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049cd358;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01880b28;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01880c04;
  puVar5[7] = 0;
  pcStack_48 = "State::cUp";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,7,&local_50);
  lVar4 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar4 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar4);
  *puVar2 = &PTR_LAB_049cd358;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01880c08;
  puVar2[3] = 0;
  puVar2[4] = &LAB_01880cb0;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01880d14;
  puVar2[7] = 0;
  return;
}

