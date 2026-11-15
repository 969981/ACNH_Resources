
void FUN_01eb17b8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01f3ddc8();
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "NpcAICloudIslandState::cAppear";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x41,&local_40);
  lVar3 = 0x1040;
  if (*(uint *)(param_2 + 0x28) < 0x42) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = FUN_01eb1914;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04a5f9d0;
  puVar2[1] = param_1;
  puVar2[4] = FUN_01eb1960;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01eb19dc;
  puVar2[7] = 0;
  pcStack_38 = "NpcAICloudIslandState::cDisappear";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x42,&local_40);
  lVar3 = 0x1080;
  if (*(uint *)(param_2 + 0x28) < 0x43) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = &LAB_01eb19e0;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04a5f9d0;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_01eb1a68;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01eb1a6c;
  puVar2[7] = 0;
  pcStack_38 = "NpcAICloudIslandState::cFallPitCI";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x43,&local_40);
  lVar3 = 0x10c0;
  if (*(uint *)(param_2 + 0x28) < 0x44) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a5f9d0;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01eb1a70;
  puVar2[3] = 0;
  puVar2[4] = &LAB_01eb1a7c;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01eb1ac8;
  puVar2[7] = 0;
  return;
}

