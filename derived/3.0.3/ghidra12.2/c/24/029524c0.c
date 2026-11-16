
undefined8 FUN_029524c0(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  plVar8 = *(long **)PTR_DAT_04bb27d0;
  lVar6 = *plVar8;
  if (1 < *(byte *)(lVar6 + 0x476)) {
    return 0;
  }
  if ((plVar8[5] != 0) && ((int)plVar8[0x10] == 1)) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if (lVar9 == 0) {
    local_14[0] = *PTR_DAT_04bb32e0;
joined_r0x02952584:
    if (7 < local_14[0]) {
LAB_02952588:
      bVar3 = *(byte *)(lVar6 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar6 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar7 = (byte *)(lVar6 + 0x471);
        }
      }
      local_14[0] = *pbVar7;
      if (local_14[0] < 8) goto LAB_029525fc;
      local_14[0] = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar9 + 0x158);
    }
    local_14[0] = *pbVar7;
    if (7 < local_14[0]) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        local_14[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto joined_r0x02952584;
      }
      goto LAB_02952588;
    }
  }
  if (7 < local_14[0]) {
    return 0;
  }
LAB_029525fc:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "GulBQuestStartFlag";
  local_40 = puVar1;
  iVar4 = FUN_0274bce0(local_14,&local_40);
  if (iVar4 != 0) {
    pcStack_38 = "GulBGetQuestItem";
    local_40 = puVar1;
    iVar4 = FUN_0274bce0(local_14,&local_40);
    pcStack_48 = "GulBGetQuestItem";
    local_50 = puVar1;
    iVar5 = FUN_0274f6e0(&local_50);
    if (iVar4 < iVar5) {
      return 1;
    }
  }
  return 0;
}

