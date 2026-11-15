
void FUN_01eb6814(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "NpcEditAIState::cAppear";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x37,&local_50);
  lVar3 = 0xdc0;
  if (*(uint *)(param_2 + 0x28) < 0x38) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = 0x420;
  puVar2[3] = 1;
  *puVar2 = &PTR_LAB_04a5ffe8;
  puVar2[1] = param_1;
  puVar2[4] = 0x428;
  puVar2[5] = 1;
  puVar2[6] = 0x430;
  puVar2[7] = 1;
  pcStack_48 = "NpcEditAIState::cTrans";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x38,&local_50);
  lVar3 = 0xe00;
  if (*(uint *)(param_2 + 0x28) < 0x39) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = 0x438;
  puVar2[3] = 1;
  *puVar2 = &PTR_LAB_04a5ffe8;
  puVar2[1] = param_1;
  puVar2[6] = 0x448;
  puVar2[7] = 1;
  puVar2[4] = 0x440;
  puVar2[5] = 1;
  pcStack_48 = "NpcEditAIState::cDrop";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x39,&local_50);
  lVar3 = 0xe40;
  if (*(uint *)(param_2 + 0x28) < 0x3a) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = 0x450;
  puVar2[3] = 1;
  *puVar2 = &PTR_LAB_04a5ffe8;
  puVar2[1] = param_1;
  puVar2[6] = 0x460;
  puVar2[7] = 1;
  puVar2[4] = 0x458;
  puVar2[5] = 1;
  pcStack_48 = "NpcEditAIState::cCleanUp";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x3a,&local_50);
  lVar3 = 0xe80;
  if (*(uint *)(param_2 + 0x28) < 0x3b) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = 0x468;
  puVar2[3] = 1;
  *puVar2 = &PTR_LAB_04a5ffe8;
  puVar2[1] = param_1;
  puVar2[6] = 0x478;
  puVar2[7] = 1;
  puVar2[4] = 0x470;
  puVar2[5] = 1;
  pcStack_48 = "NpcEditAIState::cRotate";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x3b,&local_50);
  lVar3 = 0xec0;
  if (*(uint *)(param_2 + 0x28) < 0x3c) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = 0x480;
  puVar2[3] = 1;
  *puVar2 = &PTR_LAB_04a5ffe8;
  puVar2[1] = param_1;
  puVar2[6] = 0x490;
  puVar2[7] = 1;
  puVar2[4] = 0x488;
  puVar2[5] = 1;
  pcStack_48 = "NpcEditAIState::cPSInvisible";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x3c,&local_50);
  lVar3 = 0xf00;
  if (*(uint *)(param_2 + 0x28) < 0x3d) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = 0x498;
  puVar2[3] = 1;
  *puVar2 = &PTR_LAB_04a5ffe8;
  puVar2[1] = param_1;
  puVar2[4] = 0x4a0;
  puVar2[5] = 1;
  puVar2[6] = 0x4a8;
  puVar2[7] = 1;
  return;
}

