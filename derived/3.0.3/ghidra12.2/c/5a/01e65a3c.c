
void FUN_01e65a3c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "NpcAIActivityState::cMoveFacility";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x37,&local_40);
  puVar4 = PTR_FUN_04bc1658;
  lVar3 = 0xdc0;
  if (*(uint *)(param_2 + 0x28) < 0x38) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_FUN_04bc1660;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1668;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cMoveVillage";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x38,&local_40);
  puVar4 = PTR_LAB_04bc1670;
  lVar3 = 0xe00;
  if (*(uint *)(param_2 + 0x28) < 0x39) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1678;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1680;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cCleaningIndoor";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x39,&local_40);
  puVar4 = PTR_FUN_04bc1688;
  lVar3 = 0xe40;
  if (*(uint *)(param_2 + 0x28) < 0x3a) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1690;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1698;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cCatchInsect";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3a,&local_40);
  puVar4 = PTR_LAB_04bc16a0;
  lVar3 = 0xe80;
  if (*(uint *)(param_2 + 0x28) < 0x3b) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc16a8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc16b0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cCatchFish";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3b,&local_40);
  puVar4 = PTR_LAB_04bc16b8;
  lVar3 = 0xec0;
  if (*(uint *)(param_2 + 0x28) < 0x3c) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc16c0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc16c8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cWatering";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3c,&local_40);
  puVar4 = PTR_LAB_04bc16d0;
  lVar3 = 0xf00;
  if (*(uint *)(param_2 + 0x28) < 0x3d) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc16d8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc16e0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cTotakekeLive";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3d,&local_40);
  puVar4 = PTR_LAB_04bc16e8;
  lVar3 = 0xf40;
  if (*(uint *)(param_2 + 0x28) < 0x3e) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc16f0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc16f8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cAirplaneRun";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3e,&local_40);
  puVar4 = PTR_LAB_04bc1700;
  lVar3 = 0xf80;
  if (*(uint *)(param_2 + 0x28) < 0x3f) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1708;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1710;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cMoveSpot";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3f,&local_40);
  puVar4 = PTR_LAB_04bc1718;
  lVar3 = 0xfc0;
  if (*(uint *)(param_2 + 0x28) < 0x40) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1720;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1728;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cSpotWait";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x40,&local_40);
  puVar4 = PTR_LAB_04bc1730;
  puVar2 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(0x40 < *(uint *)(param_2 + 0x28)) * 0x1000);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar6 = PTR_LAB_04bc1740;
  puVar5 = PTR_LAB_04bc1738;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = puVar5;
  puVar2[5] = 0;
  puVar2[6] = puVar6;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cObserve";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x41,&local_40);
  puVar4 = PTR_LAB_04bc1748;
  lVar3 = 0x1040;
  if (*(uint *)(param_2 + 0x28) < 0x42) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1750;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1758;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cSitStandupChair";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x42,&local_40);
  puVar4 = PTR_LAB_04bc1760;
  lVar3 = 0x1080;
  if (*(uint *)(param_2 + 0x28) < 0x43) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1768;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1770;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cBedInOut";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x43,&local_40);
  puVar4 = PTR_LAB_04bc1778;
  lVar3 = 0x10c0;
  if (*(uint *)(param_2 + 0x28) < 0x44) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1780;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1788;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cDoze";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x45,&local_40);
  puVar4 = PTR_LAB_04bc1790;
  lVar3 = 0x1140;
  if (*(uint *)(param_2 + 0x28) < 0x46) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1798;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc17a0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cDeliveryWait";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x46,&local_40);
  puVar4 = PTR_LAB_04bc17a8;
  lVar3 = 0x1180;
  if (*(uint *)(param_2 + 0x28) < 0x47) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc17b0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc17b8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cRequestQuestWait";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x47,&local_40);
  puVar4 = PTR_LAB_04bc17c0;
  lVar3 = 0x11c0;
  if (*(uint *)(param_2 + 0x28) < 0x48) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc17c8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc17d0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cConversationHost";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x48,&local_40);
  puVar4 = PTR_LAB_04bc17d8;
  lVar3 = 0x1200;
  if (*(uint *)(param_2 + 0x28) < 0x49) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc17e0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc17e8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cConversationGuest";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x49,&local_40);
  puVar4 = PTR_LAB_04bc17f0;
  lVar3 = 0x1240;
  if (*(uint *)(param_2 + 0x28) < 0x4a) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc17f8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1800;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cGreet";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4a,&local_40);
  puVar4 = PTR_LAB_04bc1808;
  lVar3 = 0x1280;
  if (*(uint *)(param_2 + 0x28) < 0x4b) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1810;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1818;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cTakeFtrPhoto";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4b,&local_40);
  puVar4 = PTR_LAB_04bc1820;
  lVar3 = 0x12c0;
  if (*(uint *)(param_2 + 0x28) < 0x4c) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1828;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1830;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cOperateSwitch";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4c,&local_40);
  puVar4 = PTR_LAB_04bc1838;
  lVar3 = 0x1300;
  if (*(uint *)(param_2 + 0x28) < 0x4d) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1840;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1848;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cWateringOnetime";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4d,&local_40);
  puVar4 = PTR_LAB_04bc1850;
  lVar3 = 0x1340;
  if (*(uint *)(param_2 + 0x28) < 0x4e) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1858;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1860;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cFollowInsect";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4e,&local_40);
  puVar4 = PTR_LAB_04bc1868;
  lVar3 = 0x1380;
  if (*(uint *)(param_2 + 0x28) < 0x4f) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1870;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1878;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cPlayFirework";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x4f,&local_40);
  puVar4 = PTR_LAB_04bc1880;
  lVar3 = 0x13c0;
  if (*(uint *)(param_2 + 0x28) < 0x50) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc1888;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc1890;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cDanceFloor";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x50,&local_40);
  puVar4 = PTR_LAB_04bc1898;
  lVar3 = 0x1400;
  if (*(uint *)(param_2 + 0x28) < 0x51) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc18a0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc18a8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cMegaphoneNoisy";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x51,&local_40);
  puVar4 = PTR_LAB_04bc18b0;
  lVar3 = 0x1440;
  if (*(uint *)(param_2 + 0x28) < 0x52) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc18b8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc18c0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cFishingMegaphone";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x52,&local_40);
  puVar4 = PTR_LAB_04bc18c8;
  lVar3 = 0x1480;
  if (*(uint *)(param_2 + 0x28) < 0x53) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc18d0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc18d8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIActivityState::cFishingNoisy";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x53,&local_40);
  puVar4 = PTR_LAB_04bc18e8;
  puVar1 = PTR_LAB_04bc18e0;
  lVar3 = 0x14c0;
  if (*(uint *)(param_2 + 0x28) < 0x54) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5e398;
  puVar2[1] = param_1;
  puVar2[2] = puVar1;
  puVar2[3] = 0;
  puVar1 = PTR_LAB_04bc18f0;
  puVar2[4] = puVar4;
  puVar2[5] = 0;
  puVar2[6] = puVar1;
  puVar2[7] = 0;
  return;
}

