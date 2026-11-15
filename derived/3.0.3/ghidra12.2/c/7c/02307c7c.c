
void FUN_02307c7c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  puVar4 = PTR_DAT_04bb2020;
  lVar1 = param_1 + 1;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "CatchFishContinueCount";
  FUN_0274bfe8(lVar1,&local_50,0);
  local_24[0] = *(byte *)(param_1 + 1);
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  uVar8 = FUN_02669430(local_24);
  if (((uVar8 & 1) != 0) && (DAT_04c487d4 != -1)) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,3);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 3 & 1) != 0) {
      puVar2 = puVar4 + 0x10;
      pcStack_58 = "BeyDaily_QuestClear";
      local_60 = puVar2;
      iVar5 = FUN_0274bce0(lVar1,&local_60);
      if (iVar5 == 0) {
        pcStack_68 = "BeyDaily_QuestCount";
        local_70 = puVar2;
        iVar6 = FUN_0274bce0(lVar1,&local_70);
        pcStack_48 = "BeyRequireFishSize";
        local_50 = puVar2;
        iVar7 = FUN_0273ea30(&local_50);
        iVar5 = 5;
        if (iVar7 != 3) {
          iVar5 = 3;
        }
        if (iVar6 < iVar5) {
          local_50 = puVar4 + 0x10;
          pcStack_48 = "BeyDaily_QuestCount";
          FUN_0274bfe8(lVar1,&local_50,0);
        }
      }
    }
  }
  return;
}

