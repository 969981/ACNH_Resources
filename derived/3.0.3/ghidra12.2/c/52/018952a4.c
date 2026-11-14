
void FUN_018952a4(undefined8 *param_1,undefined8 param_2)

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
  *(undefined4 *)(param_1 + 0x7f) = 0xffffffff;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *param_1 = &PTR_LAB_049cef60;
  *(undefined1 *)((long)param_1 + 0x40c) = 0;
  param_1[0x85] = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  puVar1 = PTR_DAT_04bcb470;
  param_1[0x87] = param_2;
  __dest = (char *)param_1[0xc];
  *(undefined8 *)((long)param_1 + 0x42d) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x84] = puVar1 + 0x10;
  if (__dest != "InsectActionMuseumMovePointToPoint") {
    iVar3 = 0x22;
    if (*(int *)(param_1 + 0xd) < 0x23) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionMuseumMovePointToPoint",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,4,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cWait";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_40);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = FUN_018954f8;
  puVar5[3] = 0;
  puVar5[4] = FUN_01895550;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049cf158;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_018955d8;
  puVar5[7] = 0;
  pcStack_38 = "State::cTurn";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[4] = &LAB_01895c48;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049cf158;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_018955dc;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01895d7c;
  puVar5[7] = 0;
  pcStack_38 = "State::cJumpEscape";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,2,&local_40);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  puVar5[4] = &LAB_01895f20;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049cf158;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_01895d80;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01895ff8;
  puVar5[7] = 0;
  pcStack_38 = "State::cStop";
  local_40 = puVar1;
  FUN_03ebaf40(puVar2,3,&local_40);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x54) < 4) {
    lVar4 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar4);
  *puVar2 = &PTR_LAB_049cf158;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01895ffc;
  puVar2[3] = 0;
  puVar2[4] = &LAB_01896134;
  puVar2[5] = 0;
  puVar2[6] = &LAB_018961a8;
  puVar2[7] = 0;
  return;
}

