
void FUN_024f3d94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb2020;
  local_48 = *(ulong *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "Easter";
  if ((char)(local_48 >> 0x20) < '\x05') {
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    local_70 = (undefined *)(lVar4 + -0x15180);
    local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  }
  uVar2 = local_48;
  uVar5 = local_48 >> 0x30;
  local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
  local_48 = CONCAT26((short)uVar5,(undefined6)local_48) & 0xff00ffffffffffff;
  uVar5 = FUN_00879dd0(uVar6,&local_60,uVar2,uVar2 >> 0x10,uVar2 >> 0x18,0);
  if ((uVar5 & 1) == 0) {
    local_50 = *(ulong *)(param_1 + 0x10);
    local_70 = puVar1 + 0x10;
    pcStack_68 = "Easter";
    if ((char)(local_50 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      local_48 = lVar4 - 0x15180;
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    uVar5 = local_50;
    local_50._7_1_ = SUB81(uVar5,7);
    local_50._0_7_ = (uint7)CONCAT24(5,(undefined4)local_50);
    uVar5 = FUN_0087a8f0(uVar6,&local_70,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  puVar1 = puVar1 + 0x10;
  pcStack_58 = "LastPlayEasterYear";
  local_60 = puVar1;
  uVar3 = FUN_0274ce10(param_2,&local_60);
  uVar5 = (ulong)uVar3;
  if (uVar3 != (int)*(short *)(param_1 + 0x10)) {
    pcStack_58 = "WinningProbabilityOfEasterEggGroundRecipe";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "WinningProbabilityOfEasterEggRockRecipe";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "WinningProbabilityOfEasterEggLeafRecipe";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "WinningProbabilityOfEasterEggForestRecipe";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "WinningProbabilityOfEasterEggSkyRecipe";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "WinningProbabilityOfEasterEggFishRecipe";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "GetCountEasterEggGround";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "GetCountEasterEggRock";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "GetCountEasterEggLeaf";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "GetCountEasterEggForest";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "GetCountEasterEggSky";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "GetCountEasterEggFish";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    pcStack_58 = "PynEvent_SendMailThisYear";
    local_60 = puVar1;
    FUN_0274d104(param_2,&local_60,0);
    uVar5 = (ulong)*(short *)(param_1 + 0x10);
  }
  pcStack_58 = "LastPlayEasterYear";
  local_60 = puVar1;
  FUN_0274d104(param_2,&local_60,uVar5);
  return;
}

