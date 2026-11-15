
void FUN_0204a8c8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  char cVar2;
  ulong *puVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 extraout_x1;
  undefined4 uVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined *local_58;
  char *pcStack_50;
  byte local_44 [4];
  
  puVar7 = PTR_DAT_04bb2020;
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_0204a944:
    if (*pbVar14 < 8) goto LAB_0204a9bc;
LAB_0204a950:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0204a9b4:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_0204a9bc;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar15 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar11 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar11 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar11 & 8) != 0) {
        pbVar14 = (byte *)(lVar15 + 0x471);
      }
    }
    local_44[0] = *pbVar14;
    if (7 < local_44[0]) goto LAB_0204a9b4;
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0204a944;
      }
      goto LAB_0204a950;
    }
LAB_0204a9bc:
    local_44[0] = *pbVar14;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "PooCheckPlace";
  local_58 = puVar1;
  FUN_027533a8(local_44,&local_58,0);
  pcStack_50 = "ReserveCommuneExpansion";
  local_58 = puVar1;
  iVar9 = FUN_0274bce0(local_44,&local_58);
  if (iVar9 == 1) {
    return;
  }
  puVar3 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (*(short *)PTR_DAT_04bc3a10 != 0) {
    puVar3 = (ulong *)PTR_DAT_04bc3a10;
  }
  local_60 = *puVar3;
  cVar6 = (char)(local_60 >> 0x20);
  if (cVar6 < '\x05') {
    lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
    local_58 = (undefined *)(lVar15 + -0x15180);
    local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
  }
  uVar8 = local_60;
  uVar10 = local_60 >> 0x30;
  local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
  local_60 = CONCAT26((short)uVar10,(undefined6)local_60) & 0xff00ffffffffffff;
  uVar10 = FUN_029270d0();
  if ((uVar10 & 1) != 0) {
    uVar12 = 3;
    goto LAB_0204abc4;
  }
  cVar2 = cVar6 + '\x18';
  if ('\x04' < cVar6) {
    cVar2 = cVar6;
  }
  if ((cVar2 < '\x16') || ((param_2 & 1) != 0)) {
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    uVar4 = puVar11[3];
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
    puVar11[2] = uVar4;
    puVar11[3] = uVar13;
    uVar13 = (uint)((ulong)uVar13 * 100 >> 0x20);
    if (0x45 < uVar13) {
      uVar12 = 4;
      if (uVar13 < 0x55) {
        uVar12 = 1;
      }
      goto LAB_0204abc4;
    }
  }
  else {
    puVar1 = puVar7 + 0x10;
    pcStack_50 = "SpnTodayExplainedPhotoStudio";
    local_58 = puVar1;
    iVar9 = FUN_0274bce0(local_44,&local_58);
    if (iVar9 != 1) {
      pcStack_68 = "SpnPhotoStudioGuideDone";
      local_70 = puVar1;
      iVar9 = FUN_0274bce0(local_44,&local_70);
      uVar12 = 0;
      if ((iVar9 == 0) || ((uVar8 & 0xff0000) == 0x60000)) goto LAB_0204abc4;
      uVar10 = FUN_010d294c(0,extraout_x1,0);
      if ((((uVar10 & 1) == 0) &&
          (((uVar10 = FUN_010d294c(1), (uVar10 & 1) == 0 &&
            (uVar10 = FUN_010d294c(2), (uVar10 & 1) == 0)) &&
           (uVar10 = FUN_010d294c(3), (uVar10 & 1) == 0)))) &&
         ((uVar10 = FUN_010d294c(4), (uVar10 & 1) == 0 &&
          (uVar10 = FUN_010d294c(5), (uVar10 & 1) == 0)))) {
        uVar10 = FUN_010d294c(6);
        uVar12 = 0;
        if ((uVar10 & 1) == 0) {
          uVar12 = 2;
        }
        goto LAB_0204abc4;
      }
    }
  }
  uVar12 = 0;
LAB_0204abc4:
  local_58 = puVar7 + 0x10;
  pcStack_50 = "PooCheckPlace";
  FUN_027533a8(local_44,&local_58,uVar12);
  return;
}

