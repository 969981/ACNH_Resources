
void FUN_01eb8c9c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01eb6814();
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "NpcAIWherearenEditState::cFtrAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3d,&local_40);
  puVar4 = PTR_LAB_04bc1e60;
  lVar3 = 0xf40;
  if (*(uint *)(param_2 + 0x28) < 0x3e) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1e68;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1e70;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cStandbyTurn";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3e,&local_40);
  puVar4 = PTR_LAB_04bc1e78;
  lVar3 = 0xf80;
  if (*(uint *)(param_2 + 0x28) < 0x3f) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1e80;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1e88;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cEditReaction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3f,&local_40);
  puVar4 = PTR_FUN_04bc1e90;
  lVar3 = 0xfc0;
  if (*(uint *)(param_2 + 0x28) < 0x40) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_FUN_04bc1e98;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1ea0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cGreet";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x40,&local_40);
  puVar4 = PTR_LAB_04bc1ea8;
  puVar2 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(0x40 < *(uint *)(param_2 + 0x28)) * 0x1000);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar6 = PTR_LAB_04bc1eb8;
  puVar5 = PTR_LAB_04bc1eb0;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = puVar5;
  puVar2[5] = 0;
  puVar2[6] = puVar6;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cSynchroAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x41,&local_40);
  puVar4 = PTR_LAB_04bc1ec0;
  lVar3 = 0x1040;
  if (*(uint *)(param_2 + 0x28) < 0x42) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1ec8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1ed0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cRetryBedIn";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x42,&local_40);
  puVar4 = PTR_LAB_04bc1ed8;
  lVar3 = 0x1080;
  if (*(uint *)(param_2 + 0x28) < 0x43) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_FUN_04bc1ee0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1ee8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cWaitSynchro";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x43,&local_40);
  puVar4 = PTR_LAB_04bc1ef0;
  lVar3 = 0x10c0;
  if (*(uint *)(param_2 + 0x28) < 0x44) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1ef8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1f00;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cDelayAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x44,&local_40);
  puVar4 = PTR_LAB_04bc1f08;
  lVar3 = 0x1100;
  if (*(uint *)(param_2 + 0x28) < 0x45) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1f10;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1f18;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cFgAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x45,&local_40);
  puVar4 = PTR_LAB_04bc1f20;
  lVar3 = 0x1140;
  if (*(uint *)(param_2 + 0x28) < 0x46) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1f28;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1f30;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cWallAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x46,&local_40);
  puVar4 = PTR_LAB_04bc1f38;
  lVar3 = 0x1180;
  if (*(uint *)(param_2 + 0x28) < 0x47) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1f40;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1f48;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cFollowPlayerPos";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x47,&local_40);
  puVar4 = PTR_LAB_04bc1f50;
  lVar3 = 0x11c0;
  if (*(uint *)(param_2 + 0x28) < 0x48) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_FUN_04bc1f58;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1f60;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cInterestAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x48,&local_40);
  puVar4 = PTR_LAB_04bc1f68;
  lVar3 = 0x1200;
  if (*(uint *)(param_2 + 0x28) < 0x49) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1f70;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1f78;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cDemoStandby";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x49,&local_40);
  puVar4 = PTR_LAB_04bc1f80;
  lVar3 = 0x1240;
  if (*(uint *)(param_2 + 0x28) < 0x4a) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1f88;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1f90;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cChangeRoomMove";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4a,&local_40);
  puVar4 = PTR_LAB_04bc1f98;
  lVar3 = 0x1280;
  if (*(uint *)(param_2 + 0x28) < 0x4b) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1fa0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1fa8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cPhotoModeDisappear";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4b,&local_40);
  puVar4 = PTR_LAB_04bc1fb0;
  lVar3 = 0x12c0;
  if (*(uint *)(param_2 + 0x28) < 0x4c) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1fb8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1fc0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cPhotoModeAppear";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4c,&local_40);
  puVar4 = PTR_LAB_04bc1fc8;
  lVar3 = 0x1300;
  if (*(uint *)(param_2 + 0x28) < 0x4d) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1fd0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1fd8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cWindowAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4d,&local_40);
  puVar4 = PTR_LAB_04bc1fe0;
  lVar3 = 0x1340;
  if (*(uint *)(param_2 + 0x28) < 0x4e) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1fe8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1ff0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cLookAround";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4e,&local_40);
  puVar4 = PTR_LAB_04bc1ff8;
  lVar3 = 0x1380;
  if (*(uint *)(param_2 + 0x28) < 0x4f) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc2000;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc2008;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cGreetTalk";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4f,&local_40);
  lVar3 = 0x13c0;
  if (*(uint *)(param_2 + 0x28) < 0x50) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = 0x5a0;
  puVar2[3] = 1;
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[4] = 0x5a8;
  puVar2[5] = 1;
  puVar2[6] = 0x5b0;
  puVar2[7] = 1;
  pcStack_38 = "NpcAIWherearenEditState::cSingSynchro";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x50,&local_40);
  puVar4 = PTR_LAB_04bc2010;
  lVar3 = 0x1400;
  if (*(uint *)(param_2 + 0x28) < 0x51) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc2018;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc2020;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cWatchInsect";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x51,&local_40);
  puVar4 = PTR_LAB_04bc2028;
  lVar3 = 0x1440;
  if (*(uint *)(param_2 + 0x28) < 0x52) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc2030;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc2038;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cDemoAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x52,&local_40);
  puVar4 = PTR_LAB_04bc2040;
  lVar3 = 0x1480;
  if (*(uint *)(param_2 + 0x28) < 0x53) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc2048;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc2050;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cMoveAroundFg";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x53,&local_40);
  puVar4 = PTR_LAB_04bc2058;
  lVar3 = 0x14c0;
  if (*(uint *)(param_2 + 0x28) < 0x54) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc2060;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc2068;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cTurnEmoticonAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x54,&local_40);
  puVar4 = PTR_LAB_04bc2070;
  lVar3 = 0x1500;
  if (*(uint *)(param_2 + 0x28) < 0x55) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc2078;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc2080;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIWherearenEditState::cClothAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x55,&local_40);
  puVar4 = PTR_LAB_04bc2090;
  puVar1 = PTR_LAB_04bc2088;
  lVar3 = 0x1540;
  if (*(uint *)(param_2 + 0x28) < 0x56) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a60728;
  puVar2[1] = param_1;
  puVar2[2] = puVar1;
  puVar2[3] = 0;
  puVar1 = PTR_LAB_04bc2098;
  puVar2[4] = puVar4;
  puVar2[5] = 0;
  puVar2[6] = puVar1;
  puVar2[7] = 0;
  return;
}

