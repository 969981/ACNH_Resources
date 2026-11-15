
undefined8 FUN_02203540(void)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  if (*(long *)PTR_DAT_04bb3968 == 0) {
    return 0;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x1604) != 2)) {
LAB_022036b8:
    uVar3 = 0;
  }
  else {
    lVar5 = *(long *)PTR_DAT_04bb39b0;
    pbVar4 = PTR_DAT_04bb32e0;
    if (lVar5 == 0) {
LAB_022035e4:
      if (*pbVar4 < 8) goto LAB_0220365c;
LAB_022035f0:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02203654:
        pbVar4 = PTR_DAT_04bb5038;
        goto LAB_0220365c;
      }
      lVar5 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar5 + 0x473);
      pbVar4 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar5 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar4 = (byte *)(lVar5 + 0x471);
        }
      }
      local_4[0] = *pbVar4;
      if (7 < local_4[0]) goto LAB_02203654;
    }
    else {
      if (*(int *)(lVar5 + 0x15c) != 0) {
        pbVar4 = (byte *)(lVar5 + 0x158);
      }
      if (7 < *pbVar4) {
        if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar4 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_022035e4;
        }
        goto LAB_022035f0;
      }
LAB_0220365c:
      local_4[0] = *pbVar4;
      if (7 < local_4[0]) goto LAB_022036b8;
    }
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "AlwJuneBrideQuestStartFlag";
    uVar3 = FUN_0274bce0(local_4,&local_30);
    if ((int)uVar3 != 0) {
      uVar3 = 1;
      *(undefined1 *)(lVar6 + 0x1610) = 1;
      *(undefined4 *)(lVar6 + 0x1618) = *(undefined4 *)(lVar6 + 0x1614);
    }
  }
  return uVar3;
}

