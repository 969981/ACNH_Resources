
void FUN_01efac2c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01f3ddc8();
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "NpcAIHotelState::cMoveFacility";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x41,&local_40);
  puVar4 = PTR_LAB_04bc2190;
  lVar3 = 0x1040;
  if (*(uint *)(param_2 + 0x28) < 0x42) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a62cb0;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_FUN_04bc2198;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc21a0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIHotelState::cMoveVillage";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x42,&local_40);
  puVar4 = PTR_LAB_04bc21a8;
  lVar3 = 0x1080;
  if (*(uint *)(param_2 + 0x28) < 0x43) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a62cb0;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc21b0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc21b8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIHotelState::cMoveSpot";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x43,&local_40);
  puVar4 = PTR_LAB_04bc21c0;
  lVar3 = 0x10c0;
  if (*(uint *)(param_2 + 0x28) < 0x44) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a62cb0;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc21c8;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc21d0;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIHotelState::cSpotWait";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x44,&local_40);
  puVar4 = PTR_LAB_04bc21d8;
  lVar3 = 0x1100;
  if (*(uint *)(param_2 + 0x28) < 0x45) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a62cb0;
  puVar2[1] = param_1;
  puVar2[2] = puVar4;
  puVar2[3] = 0;
  puVar2[4] = PTR_LAB_04bc21e0;
  puVar2[5] = 0;
  puVar2[6] = PTR_LAB_04bc21e8;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIHotelState::cGreet";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x45,&local_40);
  lVar3 = 0x1140;
  if (*(uint *)(param_2 + 0x28) < 0x46) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a62cb0;
  puVar2[1] = param_1;
  puVar2[2] = FUN_01efae40;
  puVar2[3] = 0;
  puVar2[4] = FUN_01efaf20;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01efb388;
  puVar2[7] = 0;
  return;
}

