
void FUN_01890d84(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  char *__dest;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01889870();
  param_1[0x86] = 0;
  *param_1 = &PTR_LAB_049ce6b0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined2 *)(param_1 + 0x85) = 0;
  param_1[0x8b] = 0;
  *(undefined8 *)((long)param_1 + 0x45d) = 0;
  __dest = (char *)param_1[0xc];
  puVar1 = PTR_DAT_04bcb470 + 0x10;
  *(undefined8 *)((long)param_1 + 0x47d) = 0;
  param_1[0x8a] = puVar1;
  param_1[0x94] = puVar1;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  param_1[0x95] = 0;
  *(undefined8 *)((long)param_1 + 0x4ad) = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  if (__dest != "InsectActionMuseumFlyTottering") {
    iVar3 = 0x1e;
    if (*(int *)(param_1 + 0xd) < 0x1f) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionMuseumFlyTottering",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,4,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cToDestination";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_40);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = FUN_01891018;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01891090;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce8a8;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_018916c0;
  puVar5[7] = 0;
  pcStack_38 = "State::cApproach";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[4] = &LAB_01891784;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce8a8;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_018916c4;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01891c68;
  puVar5[7] = 0;
  pcStack_38 = "State::cRest";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,2,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  puVar5[4] = &LAB_01891d14;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049ce8a8;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_01891c6c;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01891e10;
  puVar5[7] = 0;
  pcStack_38 = "State::cTakeoff";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,3,&local_40);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x54) < 4) {
    lVar4 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar4);
  *puVar2 = &PTR_LAB_049ce8a8;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01891ec8;
  puVar2[3] = 0;
  puVar2[4] = &LAB_01891ee4;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01891fa8;
  puVar2[7] = 0;
  return;
}

