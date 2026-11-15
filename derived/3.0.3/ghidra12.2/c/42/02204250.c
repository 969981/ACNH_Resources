
bool FUN_02204250(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_022042c0:
    if (*pbVar6 < 8) goto LAB_02204338;
LAB_022042cc:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02204330:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_02204338;
    }
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    local_4[0] = *pbVar6;
    if (7 < local_4[0]) goto LAB_02204330;
LAB_02204354:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "AlwJuneBrideQuestStartFlag";
    local_30 = puVar1;
    iVar5 = FUN_0274bce0(local_4,&local_30);
    if (iVar5 != 0) {
      iVar5 = 1;
      goto LAB_022043ac;
    }
    pcStack_28 = "AlwJuneBrideQuestClearFlag";
    local_30 = puVar1;
    iVar5 = FUN_0274bce0(local_4,&local_30);
    if (iVar5 != 0) {
      iVar5 = 2;
      goto LAB_022043ac;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_022042c0;
      }
      goto LAB_022042cc;
    }
LAB_02204338:
    local_4[0] = *pbVar6;
    if (local_4[0] < 8) goto LAB_02204354;
    local_4[0] = 0xff;
  }
  iVar5 = 0;
LAB_022043ac:
  local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar5);
  if (iVar5 == 1) {
    iVar5 = FUN_022043e0();
    bVar4 = iVar5 == 6;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

