
void FUN_02690d60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(int *)(param_1 + 0x20) != 0 && *(int *)(param_1 + 4) != 0) {
    FUN_027478c0(param_1 + 0x3c);
    FUN_02747c50(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  if ((*(int *)(param_1 + 0x610) != 0) && (*(int *)(param_1 + 0x5f4) != 0)) {
    FUN_027478c0(param_1 + 0x62c);
    FUN_02747c50(param_1 + 0x62c);
    *(undefined4 *)(param_1 + 0xb60) = 0;
  }
  if ((*(int *)(param_1 + 0xc00) != 0) && (*(int *)(param_1 + 0xbe4) != 0)) {
    FUN_027478c0(param_1 + 0xc1c);
    FUN_02747c50(param_1 + 0xc1c);
    *(undefined4 *)(param_1 + 0x1150) = 0;
  }
  if ((*(int *)(param_1 + 0x11f0) != 0) && (*(int *)(param_1 + 0x11d4) != 0)) {
    FUN_027478c0(param_1 + 0x120c);
    FUN_02747c50(param_1 + 0x120c);
    *(undefined4 *)(param_1 + 0x1740) = 0;
  }
  if ((*(int *)(param_1 + 0x17e0) != 0) && (*(int *)(param_1 + 0x17c4) != 0)) {
    FUN_027478c0(param_1 + 0x17fc);
    FUN_02747c50(param_1 + 0x17fc);
    *(undefined4 *)(param_1 + 0x1d30) = 0;
  }
  if ((*(int *)(param_1 + 0x1dd0) != 0) && (*(int *)(param_1 + 0x1db4) != 0)) {
    FUN_027478c0(param_1 + 0x1dec);
    FUN_02747c50(param_1 + 0x1dec);
    *(undefined4 *)(param_1 + 0x2320) = 0;
  }
  if ((*(int *)(param_1 + 0x23c0) != 0) && (*(int *)(param_1 + 0x23a4) != 0)) {
    FUN_027478c0(param_1 + 0x23dc);
    FUN_02747c50(param_1 + 0x23dc);
    *(undefined4 *)(param_1 + 0x2910) = 0;
  }
  if ((*(int *)(param_1 + 0x29b0) != 0) && (*(int *)(param_1 + 0x2994) != 0)) {
    FUN_027478c0(param_1 + 0x29cc);
    FUN_02747c50(param_1 + 0x29cc);
    *(undefined4 *)(param_1 + 0x2f00) = 0;
  }
  lVar3 = 0xa0;
  lVar2 = param_1 + 0x2fbc;
  do {
    if (*(int *)(lVar2 + -0x1c) != 0 && *(int *)(lVar2 + -0x38) != 0) {
      FUN_027478c0(lVar2);
      FUN_02747c50(lVar2);
    }
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 + 0x158;
  } while (lVar3 != 0);
  lVar2 = param_1 + 0x1267c;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "AbandonedHouse";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "FromSettlerQuest";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "Is3rdNpc";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "DisplayJuneBridePresent";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "ProgressDaysJuneBrideParty";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "ForceMoveOut";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "ForceMoveOutVillagerIndex";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "PlayerNamePhrase";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "WearItemLayer1LayoutLimit";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "HouseReset";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "CoordinateDIYStatus";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "ReserveDIYStatus";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "AudioShuffleState";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "IslandKitchenStandPos";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "WeddingDishEventSet";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  pcStack_38 = "RoseBouquetEventSet";
  local_40 = puVar1;
  FUN_0274a060(lVar2,&local_40,0);
  memset((void *)(param_1 + 0x10768),0,0x1e4);
  FUN_029071fc((void *)(param_1 + 0x10768));
  *(undefined4 *)(param_1 + 0x12670) = 0;
  return;
}

