
undefined8 FUN_02202f80(void)

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
  
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_02202ff0:
    if (7 < *pbVar5) {
LAB_02202ffc:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
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
        if (local_4[0] < 8) goto LAB_02203084;
      }
      pbVar5 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02202ff0;
      }
      goto LAB_02202ffc;
    }
  }
  local_4[0] = *pbVar5;
  if (7 < local_4[0]) {
    return 0;
  }
LAB_02203084:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "AlwJuneBrideQuestStartFlag";
  local_30 = puVar1;
  iVar4 = FUN_0274bce0(local_4,&local_30);
  if (iVar4 != 0) {
    return 1;
  }
  pcStack_28 = "AlwJuneBrideQuestClearFlag";
  local_30 = puVar1;
  iVar4 = FUN_0274bce0(local_4,&local_30);
  if (iVar4 == 0) {
    return 0;
  }
  return 2;
}

