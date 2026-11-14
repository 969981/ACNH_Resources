
void FUN_018472ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  param_1[0x93] = &PTR_LAB_049c8778;
  param_1[0x94] = *param_2;
  param_1[0x95] = param_2[1];
  param_1[0x96] = param_2[2];
  uVar5 = param_2[3];
  __dest = (char *)param_1[0xc];
  *param_1 = &PTR_LAB_049c8460;
  param_1[0x98] = 0;
  param_1[0x93] = &PTR_LAB_049c8748;
  param_1[0x97] = uVar5;
  if (__dest != "InsectActionFieldFlea") {
    iVar3 = 0x15;
    if (*(int *)(param_1 + 0xd) < 0x16) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldFlea",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,5,1,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x55];
  puVar4[2] = 0x2a8;
  puVar4[3] = 1;
  puVar4[4] = 0x2b0;
  puVar4[5] = 1;
  *puVar4 = &PTR_LAB_049c87a8;
  puVar4[1] = param_1;
  puVar4[6] = 0x2b8;
  puVar4[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar2 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar2[2] = 0x2c0;
  puVar2[3] = 1;
  *puVar2 = &PTR_LAB_049c87a8;
  puVar2[1] = param_1;
  puVar2[4] = 0x2c8;
  puVar2[5] = 1;
  puVar2[6] = 0x2d0;
  puVar2[7] = 1;
  return;
}

