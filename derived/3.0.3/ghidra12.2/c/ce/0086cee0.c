
void FUN_0086cee0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CatchFishFesQuestEntry";
  local_40 = puVar1;
  FUN_02743234(&local_40,0);
  pcStack_38 = "CatchInsectFesQuestEntry";
  local_40 = puVar1;
  FUN_02743234(&local_40,0);
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_0086cf90:
    if (7 < *pbVar6) {
LAB_0086cf9c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar3 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_14[0] = *pbVar6;
        if (local_14[0] < 8) goto LAB_0086d01c;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0086cf90;
      }
      goto LAB_0086cf9c;
    }
  }
  local_14[0] = *pbVar6;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_0086d01c:
  puVar2 = puVar2 + 0x10;
  pcStack_38 = "FesBoxNotEmpty";
  local_40 = puVar2;
  uVar5 = FUN_02744114(local_14,&local_40);
  pcStack_38 = "FesBoxNotEmpty";
  local_40 = puVar2;
  FUN_02743234(&local_40,0);
  pcStack_38 = "FesBoxNotEmpty";
  local_40 = puVar2;
  FUN_02743a24(local_14,&local_40,uVar5 & 1);
  return;
}

