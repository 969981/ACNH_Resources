
void FUN_01852054(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01860e78(param_1,param_2[4],FUN_01852354);
  param_1[0xa4] = &PTR_LAB_049c9820;
  param_1[0xa5] = *param_2;
  param_1[0xa6] = param_2[1];
  param_1[0xa7] = param_2[2];
  uVar5 = param_2[3];
  __dest = (char *)param_1[0xc];
  *param_1 = &PTR_LAB_049c9448;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa4] = &PTR_LAB_049c9778;
  param_1[0xa8] = uVar5;
  if (__dest != "InsectActionFieldHermitCrab") {
    iVar3 = 0x1b;
    if (*(int *)(param_1 + 0xd) < 0x1c) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldHermitCrab",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,9,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar6 = (undefined8 *)param_1[0x55];
  puVar6[2] = 0x2f0;
  puVar6[3] = 1;
  puVar6[4] = 0x2f8;
  puVar6[5] = 1;
  *puVar6 = &PTR_LAB_049c9850;
  puVar6[1] = param_1;
  puVar6[6] = 0x300;
  puVar6[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar6 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar6[2] = 0x308;
  puVar6[3] = 1;
  *puVar6 = &PTR_LAB_049c9850;
  puVar6[1] = param_1;
  puVar6[4] = 0x310;
  puVar6[5] = 1;
  puVar6[6] = 0x318;
  puVar6[7] = 1;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_50);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar4 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar6[2] = &LAB_01852698;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_049c9850;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_018526a0;
  puVar6[5] = 0;
  puVar6[6] = &LAB_01852844;
  puVar6[7] = 0;
  pcStack_48 = "State::cJump";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,6,&local_50);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar4 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar6[2] = &LAB_018528f0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_049c9850;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01852e34;
  puVar6[5] = 0;
  puVar6[6] = &LAB_01852e7c;
  puVar6[7] = 0;
  pcStack_48 = "State::cConfuse";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,7,&local_50);
  lVar4 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar4 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar6[2] = &LAB_01852e80;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_049c9850;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01852ef0;
  puVar6[5] = 0;
  puVar6[6] = &LAB_01852f24;
  puVar6[7] = 0;
  pcStack_48 = "State::cSuspiciously";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,8,&local_50);
  puVar2 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  *puVar2 = &PTR_LAB_049c9850;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01852f28;
  puVar2[3] = 0;
  puVar2[6] = &LAB_018531bc;
  puVar2[7] = 0;
  puVar2[4] = &LAB_01852f34;
  puVar2[5] = 0;
  return;
}

