
void FUN_018988e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  char *__dest;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01889870();
  __dest = (char *)param_1[0xc];
  *param_1 = &PTR_LAB_049cf810;
  param_1[0x86] = 0;
  *(undefined8 *)((long)param_1 + 0x435) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((long)param_1 + 0x40d) = 0;
  puVar1 = PTR_DAT_04bcb470 + 0x10;
  param_1[0x80] = 0;
  param_1[0x85] = puVar1;
  if (__dest != "InsectActionMuseumWaitWithThreaten") {
    iVar3 = 0x22;
    if (*(int *)(param_1 + 0xd) < 0x23) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionMuseumWaitWithThreaten",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,3,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cWait";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_40);
  puVar4 = (undefined8 *)param_1[0x55];
  puVar4[2] = &LAB_01898ac4;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01898ad0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049cfa08;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_01898b58;
  puVar4[7] = 0;
  pcStack_38 = "State::cThreaten";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_40);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar4[4] = &LAB_01898bb8;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_049cfa08;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01898b5c;
  puVar4[3] = 0;
  puVar4[6] = &LAB_01898cb8;
  puVar4[7] = 0;
  pcStack_38 = "State::cReturnToWait";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,2,&local_40);
  puVar2 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  *puVar2 = &PTR_LAB_049cfa08;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01898cbc;
  puVar2[3] = 0;
  puVar2[6] = &LAB_01898de0;
  puVar2[7] = 0;
  puVar2[4] = &LAB_01898d10;
  puVar2[5] = 0;
  return;
}

