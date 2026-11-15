
bool FUN_022040b0(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  if ((*(long *)PTR_DAT_04bb5ce0 == 0) || (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) == '\0')) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_02204140:
    if (*pbVar5 < 8) goto LAB_022041b8;
LAB_0220414c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_022041b0:
      pbVar5 = PTR_DAT_04bb5038;
      goto LAB_022041b8;
    }
    lVar6 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar6 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x471);
      }
    }
    local_4[0] = *pbVar5;
    if (7 < local_4[0]) goto LAB_022041b0;
LAB_022041d4:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "AlwJuneBrideQuestStartFlag";
    local_30 = puVar1;
    iVar4 = FUN_0274bce0(local_4,&local_30);
    if (iVar4 != 0) {
      iVar4 = 1;
      goto LAB_0220422c;
    }
    pcStack_28 = "AlwJuneBrideQuestClearFlag";
    local_30 = puVar1;
    iVar4 = FUN_0274bce0(local_4,&local_30);
    if (iVar4 != 0) {
      iVar4 = 2;
      goto LAB_0220422c;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02204140;
      }
      goto LAB_0220414c;
    }
LAB_022041b8:
    local_4[0] = *pbVar5;
    if (local_4[0] < 8) goto LAB_022041d4;
  }
  iVar4 = 0;
LAB_0220422c:
  return iVar4 == 1;
}

