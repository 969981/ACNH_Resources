
int FUN_02204720(void)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined *local_40;
  char *pcStack_38;
  byte local_18 [4];
  byte local_14 [4];
  
  puVar4 = PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_022047ac;
LAB_022048f8:
    local_14[0] = *pbVar8;
    if (local_14[0] < 8) goto LAB_02204914;
    local_14[0] = 0xff;
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar7 + 0x158);
    }
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar7 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (*(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5) < 8)))) {
LAB_02204830:
      if (*(int *)(lVar7 + 0x15c) != 0) {
        pbVar8 = (byte *)(lVar7 + 0x158);
      }
      if (7 < *pbVar8) {
        if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          bVar2 = *pbVar8;
          goto joined_r0x02204874;
        }
        goto LAB_0220488c;
      }
      goto LAB_022048f8;
    }
LAB_022047ac:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02204818:
      if (7 < (byte)*PTR_DAT_04bb5038) {
        return 0;
      }
    }
    else {
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar9 + 0x473);
      pbVar10 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar10 = (byte *)(lVar9 + 0x471);
        }
      }
      if (7 < *pbVar10) goto LAB_02204818;
    }
    if (lVar7 != 0) goto LAB_02204830;
    bVar2 = *PTR_DAT_04bb32e0;
joined_r0x02204874:
    if (bVar2 < 8) goto LAB_022048f8;
LAB_0220488c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_022048f0:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_022048f8;
    }
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar7 + 0x471);
      }
    }
    local_14[0] = *pbVar8;
    if (7 < local_14[0]) goto LAB_022048f0;
LAB_02204914:
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "AlwJuneBrideRemakeOpenFlag";
    iVar5 = FUN_0274bce0(local_14,&local_40);
    if (iVar5 != 0) {
      return 7;
    }
  }
  iVar5 = FUN_022043e0();
  puVar3 = PTR_DAT_04bb2020;
  lVar7 = *(long *)puVar4;
  pbVar8 = pbVar11;
  if (lVar7 == 0) {
    if (7 < *pbVar11) goto LAB_022049b0;
LAB_02204a1c:
    local_18[0] = *pbVar8;
    if (7 < local_18[0]) {
      iVar6 = 0;
      goto LAB_02204b60;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar7 + 0x158);
    }
    if ((*pbVar8 < 8) ||
       (((*(int *)(lVar7 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar8 < 8)))) goto LAB_02204a1c;
LAB_022049b0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02204a14:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_02204a1c;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_18[0] = *pbVar8;
    if (7 < local_18[0]) goto LAB_02204a14;
  }
  if (lVar7 == 0) {
LAB_02204a80:
    if (*pbVar11 < 8) goto LAB_02204af8;
LAB_02204a8c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02204af0:
      pbVar11 = PTR_DAT_04bb5038;
      goto LAB_02204af8;
    }
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar7 + 0x471);
      }
    }
    local_14[0] = *pbVar8;
    if (7 < local_14[0]) goto LAB_02204af0;
LAB_02204b14:
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "AlwJuneBrideRemakeOpenFlag";
    iVar6 = FUN_0274bce0(local_14,&local_40);
    if (iVar6 != 0) {
      iVar6 = 7;
      goto LAB_02204b60;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02204a80;
      }
      goto LAB_02204a8c;
    }
LAB_02204af8:
    local_14[0] = *pbVar11;
    if (local_14[0] < 8) goto LAB_02204b14;
    local_14[0] = 0xff;
  }
  local_40 = puVar3 + 0x10;
  pcStack_38 = "AlwJuneBrideDayAlreadyCount";
  iVar6 = FUN_0274bce0(local_18,&local_40);
LAB_02204b60:
  if (iVar5 <= iVar6) {
    iVar5 = iVar6;
  }
  if (6 < iVar5) {
    iVar5 = 7;
  }
  return iVar5;
}

