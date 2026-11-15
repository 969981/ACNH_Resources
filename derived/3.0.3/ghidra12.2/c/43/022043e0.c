
int FUN_022043e0(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  byte bVar11;
  long lVar12;
  short *psVar13;
  byte local_44 [4];
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_18;
  
  puVar5 = PTR_DAT_04bb39b0;
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_02204454:
    if (*pbVar10 < 8) goto LAB_022044cc;
LAB_02204460:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_022044c4:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_022044cc;
    }
    lVar12 = **(long **)PTR_DAT_04bb27d0;
    bVar11 = *(byte *)(lVar12 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar11 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
      if (7 < bVar11) {
        puVar2 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar12 + 0x471);
      }
    }
    local_44[0] = *pbVar10;
    if (7 < local_44[0]) goto LAB_022044c4;
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02204454;
      }
      goto LAB_02204460;
    }
LAB_022044cc:
    local_44[0] = *pbVar10;
    if (7 < local_44[0]) {
      return 0;
    }
  }
  psVar13 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar13 == 0) {
    local_18 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_18 >> 0x20) < '\x05') {
      lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
      local_40 = (undefined *)(lVar12 + -0x15180);
      local_18 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
    }
    psVar13 = (short *)&local_18;
    uVar9 = local_18 >> 0x30;
    local_18._0_6_ = CONCAT24(5,(undefined4)local_18);
    local_18 = CONCAT26((short)uVar9,(undefined6)local_18) & 0xff00ffffffffffff;
  }
  puVar4 = PTR_DAT_04bb2020;
  local_18 = *(ulong *)psVar13;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "JuneBride";
  local_40 = puVar1;
  uVar9 = FUN_0087c200(*(undefined8 *)PTR_DAT_04bb32f0,&local_40,&local_18,1);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  pcStack_38 = "AlwJuneBrideDayCount";
  local_40 = puVar1;
  iVar7 = FUN_0274bce0(local_44,&local_40);
  lVar12 = *(long *)puVar5;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_02204604:
    if (*pbVar10 < 8) goto LAB_0220467c;
LAB_02204610:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02204674:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_0220467c;
    }
    lVar12 = **(long **)PTR_DAT_04bb27d0;
    bVar11 = *(byte *)(lVar12 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar11 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
      if (7 < bVar11) {
        puVar2 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar12 + 0x471);
      }
    }
    bVar11 = *pbVar10;
    bVar6 = 7 < bVar11;
    if (bVar6) {
      bVar11 = 0xff;
    }
    local_18 = CONCAT71(local_18._1_7_,bVar11);
    if (bVar6) goto LAB_02204674;
LAB_02204698:
    pcStack_38 = "AlwJuneBrideQuestStartFlag";
    local_40 = puVar4 + 0x10;
    iVar8 = FUN_0274bce0(&local_18,&local_40);
    if (iVar8 != 0) {
      iVar8 = 1;
      goto LAB_022046e8;
    }
    pcStack_38 = "AlwJuneBrideQuestClearFlag";
    local_40 = puVar4 + 0x10;
    iVar8 = FUN_0274bce0(&local_18,&local_40);
    if (iVar8 != 0) {
      iVar8 = 2;
      goto LAB_022046e8;
    }
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02204604;
      }
      goto LAB_02204610;
    }
LAB_0220467c:
    bVar3 = *pbVar10;
    bVar11 = bVar3;
    if (7 < bVar3) {
      bVar11 = 0xff;
    }
    local_18 = CONCAT71(local_18._1_7_,bVar11);
    if (bVar3 < 8) goto LAB_02204698;
  }
  iVar8 = 0;
LAB_022046e8:
  if (iVar8 != 2) {
    iVar7 = iVar7 + 1;
  }
  if (6 < iVar7) {
    iVar7 = 7;
  }
  return iVar7;
}

