
void FUN_02cf5b48(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "ExState::cWaitSelectCoordinateId";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0xc,&local_40);
  lVar3 = 0x300;
  if (*(uint *)(param_2 + 0x28) < 0xd) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = &LAB_02cf5ce0;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04ab94d0;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_02cf5d1c;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  pcStack_38 = "ExState::cAppearList";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0xd,&local_40);
  lVar3 = 0x340;
  if (*(uint *)(param_2 + 0x28) < 0xe) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = &LAB_02cf5d20;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04ab94d0;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_02cf5f60;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  pcStack_38 = "ExState::cDisappearList";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0xe,&local_40);
  lVar3 = 0x380;
  if (*(uint *)(param_2 + 0x28) < 0xf) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  puVar2[2] = &LAB_02cf607c;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_04ab94d0;
  puVar2[1] = param_1;
  puVar2[4] = &LAB_02cf62ac;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  pcStack_38 = "ExState::cNoticeMyDesgin";
  local_40 = puVar1;
  FUN_03ebaf40(param_2,0xf,&local_40);
  lVar3 = 0x3c0;
  if (*(uint *)(param_2 + 0x28) < 0x10) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar3);
  *puVar2 = &PTR_LAB_04ab94d0;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_02cf63cc;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = &LAB_02cf6560;
  puVar2[5] = 0;
  return;
}

