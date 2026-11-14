
void FUN_0186f4e4(undefined8 *param_1,undefined8 *param_2)

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
  
  FUN_01860e78(param_1,param_2[4],PTR_FUN_04bbe8f8);
  param_1[0xa4] = &PTR_LAB_049cb948;
  param_1[0xa5] = *param_2;
  param_1[0xa6] = param_2[1];
  param_1[0xa7] = param_2[2];
  puVar1 = PTR_DAT_04bcb470;
  uVar6 = param_2[3];
  __dest = (char *)param_1[0xc];
  *param_1 = &PTR_LAB_049cb588;
  *(undefined1 *)((long)param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xa4] = &PTR_LAB_049cb8b8;
  param_1[0xaa] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xab) = 0x7fffffff;
  param_1[0xa8] = uVar6;
  param_1[0xa9] = puVar1 + 0x10;
  param_1[0xac] = 0x3f80000000000000;
  if (__dest != "InsectActionFieldPhyllium") {
    iVar3 = 0x19;
    if (*(int *)(param_1 + 0xd) < 0x1a) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldPhyllium",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,10,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = 0x2f0;
  puVar5[3] = 1;
  puVar5[4] = 0x2f8;
  puVar5[5] = 1;
  *puVar5 = &PTR_LAB_049cb978;
  puVar5[1] = param_1;
  puVar5[6] = 0x300;
  puVar5[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[2] = 0x308;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_049cb978;
  puVar5[1] = param_1;
  puVar5[4] = 0x310;
  puVar5[5] = 1;
  puVar5[6] = 0x318;
  puVar5[7] = 1;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_50);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar5[2] = &LAB_0186f868;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049cb978;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_0186f87c;
  puVar5[5] = 0;
  puVar5[6] = &LAB_0186fa08;
  puVar5[7] = 0;
  pcStack_48 = "State::cJump";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,6,&local_50);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar5[2] = &LAB_0186fab4;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049cb978;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_0186fb58;
  puVar5[5] = 0;
  puVar5[6] = &LAB_0186fba0;
  puVar5[7] = 0;
  pcStack_48 = "State::cConfuse";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,7,&local_50);
  lVar4 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar5[2] = &LAB_0186fba4;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049cb978;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_0186fc14;
  puVar5[5] = 0;
  puVar5[6] = &LAB_0186fc48;
  puVar5[7] = 0;
  pcStack_48 = "State::cSuspiciously";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,8,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  puVar5[4] = &LAB_0186fc60;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049cb978;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_0186fc4c;
  puVar5[3] = 0;
  puVar5[6] = &LAB_0186ff7c;
  puVar5[7] = 0;
  pcStack_48 = "State::cStop";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,9,&local_50);
  lVar4 = 0x240;
  if (*(uint *)(param_1 + 0x54) < 10) {
    lVar4 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar4);
  *puVar2 = &PTR_LAB_049cb978;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_0186ff80;
  puVar2[3] = 0;
  puVar2[4] = &LAB_01870044;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01870108;
  puVar2[7] = 0;
  return;
}

