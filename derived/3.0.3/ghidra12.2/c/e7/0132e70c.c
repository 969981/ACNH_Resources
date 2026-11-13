
void FUN_0132e70c(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  char *__src;
  int iVar6;
  char *pcVar7;
  undefined **local_40;
  char *pcStack_38;
  
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 3) = 0x40;
  param_1[2] = (undefined1 *)((long)param_1 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x40;
  *(undefined1 *)((long)param_1 + 0xb3) = 0;
  *param_1 = &PTR_LAB_0498f000;
  param_1[1] = &PTR_LAB_048fb9f8;
  param_1[0xc] = &PTR_LAB_048fb9f8;
  param_1[0xd] = (undefined1 *)((long)param_1 + 0x74);
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "CommuneExpanded";
  uVar5 = FUN_0273f0a0(&local_40);
  pcVar7 = (char *)param_1[2];
  if ((uVar5 & 1) == 0) {
    if (pcVar7 != "Preset0_Field") {
      iVar1 = 0xd;
      if (*(int *)(param_1 + 3) < 0xe) {
        iVar1 = *(int *)(param_1 + 3) + -1;
      }
      memcpy(pcVar7,"Preset0_Field",(long)iVar1);
      pcVar7[iVar1] = '\0';
    }
    pcVar7 = (char *)param_1[0xd];
    if (pcVar7 == "Preset0_Item") {
      return;
    }
    iVar2 = *(int *)(param_1 + 0xe);
    __src = "Preset0_Item";
    bVar3 = SBORROW4(iVar2,0xc);
    iVar1 = iVar2 + -0xc;
    bVar4 = iVar2 == 0xc;
    iVar6 = 0xc;
  }
  else {
    if (pcVar7 != "Preset0_Field_RVer_20000") {
      iVar1 = 0x18;
      if (*(int *)(param_1 + 3) < 0x19) {
        iVar1 = *(int *)(param_1 + 3) + -1;
      }
      memcpy(pcVar7,"Preset0_Field_RVer_20000",(long)iVar1);
      pcVar7[iVar1] = '\0';
    }
    pcVar7 = (char *)param_1[0xd];
    if (pcVar7 == "Preset0_Item_RVer_20000") {
      return;
    }
    iVar2 = *(int *)(param_1 + 0xe);
    __src = "Preset0_Item_RVer_20000";
    bVar3 = SBORROW4(iVar2,0x17);
    iVar1 = iVar2 + -0x17;
    bVar4 = iVar2 == 0x17;
    iVar6 = 0x17;
  }
  if (bVar4 || iVar1 < 0 != bVar3) {
    iVar6 = iVar2 + -1;
  }
  memcpy(pcVar7,__src,(long)iVar6);
  pcVar7[iVar6] = '\0';
  return;
}

