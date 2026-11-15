
void FUN_01f0ae1c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_01eb6814();
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "NpcHotelEditAIState::cPhotoModeDisappear";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3d,&local_40);
  lVar3 = 0xf40;
  if (*(uint *)(param_2 + 0x28) < 0x3e) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = FUN_01f0afd0;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04a637c0;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_01f0b094;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01f0b0d4;
  puVar2[7] = 0;
  pcStack_38 = "NpcHotelEditAIState::cPhotoModeAppear";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3e,&local_40);
  lVar3 = 0xf80;
  if (*(uint *)(param_2 + 0x28) < 0x3f) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = &LAB_01f0b0d8;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04a637c0;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_01f0b0dc;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01f0b0e0;
  puVar2[7] = 0;
  pcStack_38 = "NpcHotelEditAIState::cEditReaction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x3f,&local_40);
  lVar3 = 0xfc0;
  if (*(uint *)(param_2 + 0x28) < 0x40) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = &LAB_01f0b1e0;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04a637c0;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_01f0b470;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01f0b598;
  puVar2[7] = 0;
  pcStack_38 = "NpcHotelEditAIState::cDelayAction";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0x40,&local_40);
  puVar2 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(0x40 < *(uint *)(param_2 + 0x28)) * 0x1000);
  *puVar2 = &PTR_LAB_04a637c0;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01f0b59c;
  puVar2[3] = 0;
  puVar2[6] = &LAB_01f0b6ac;
  puVar2[7] = 0;
  puVar2[4] = &LAB_01f0b65c;
  puVar2[5] = 0;
  return;
}

