
void FUN_01f1dcd0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01efac2c();
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "NpcAIHotelIndoorState::cHotelStandSleep";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x46,&local_40);
  lVar3 = 0x1180;
  if (*(uint *)(param_2 + 0x28) < 0x47) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = &LAB_01f1de88;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04a64db8;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_01f1e098;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01f1e170;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIHotelIndoorState::cExitReaction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x47,&local_40);
  lVar3 = 0x11c0;
  if (*(uint *)(param_2 + 0x28) < 0x48) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = &LAB_01f1e1a0;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04a64db8;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_01f1e3e0;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01f1e614;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIHotelIndoorState::cPhotoModeAppear";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x48,&local_40);
  lVar3 = 0x1200;
  if (*(uint *)(param_2 + 0x28) < 0x49) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = &LAB_01f1e618;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04a64db8;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_01f1e620;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01f1ec04;
  puVar2[7] = 0;
  pcStack_38 = "NpcAIHotelIndoorState::cPhotoModeDisappear";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x49,&local_40);
  lVar3 = 0x1240;
  if (*(uint *)(param_2 + 0x28) < 0x4a) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04a64db8;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01f1ec24;
  puVar2[3] = 0;
  puVar2[4] = &LAB_01f1ec38;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01f1ed8c;
  puVar2[7] = 0;
  return;
}

