
void FUN_0204a5e4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  undefined1 uVar11;
  char cVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_50;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  puVar7 = PTR_DAT_04bb2020;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_0204a65c:
    if (7 < *pbVar13) {
LAB_0204a668:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar6 = *(byte *)(lVar14 + 0x473);
        pbVar13 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar10 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar10 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar10 & 8) != 0) {
            pbVar13 = (byte *)(lVar14 + 0x471);
          }
        }
        local_34[0] = *pbVar13;
        if (local_34[0] < 8) goto LAB_0204a6e8;
      }
      pbVar13 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0204a65c;
      }
      goto LAB_0204a668;
    }
  }
  local_34[0] = *pbVar13;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_0204a6e8:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "SpnCheckPlace";
  local_48 = puVar1;
  FUN_027533a8(local_34,&local_48,0);
  pcStack_40 = "ReserveCommuneExpansion";
  local_48 = puVar1;
  iVar8 = FUN_0274bce0(local_34,&local_48);
  if (((((iVar8 != 1) && (uVar9 = FUN_010d294c(0), (uVar9 & 1) == 0)) &&
       (uVar9 = FUN_010d294c(1), (uVar9 & 1) == 0)) &&
      ((uVar9 = FUN_010d294c(2), (uVar9 & 1) == 0 && (uVar9 = FUN_010d294c(3), (uVar9 & 1) == 0))))
     && ((uVar9 = FUN_010d294c(4), (uVar9 & 1) == 0 &&
         ((uVar9 = FUN_010d294c(5), (uVar9 & 1) == 0 && (uVar9 = FUN_010d294c(6), (uVar9 & 1) == 0))
         )))) {
    pcStack_40 = "SpnTodayExplainedPhotoStudio";
    local_48 = puVar7 + 0x10;
    iVar8 = FUN_0274bce0(local_34,&local_48);
    if (iVar8 != 1) {
      pcStack_40 = "CommuneExpanded";
      local_48 = puVar7 + 0x10;
      iVar8 = FUN_0273ea30(&local_48);
      if (iVar8 != 0) {
        local_48 = puVar7 + 0x10;
        pcStack_40 = "SpnPhotoStudioGuideDone";
        iVar8 = FUN_0274bce0(local_34,&local_48);
        if (iVar8 != 0) {
          puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if (*(short *)PTR_DAT_04bc3a10 != 0) {
            puVar3 = (undefined8 *)PTR_DAT_04bc3a10;
          }
          uVar15 = *puVar3;
          local_50 = uVar15;
          FUN_00a80e48(&local_50);
          if (local_50._2_1_ == '\x06') {
            uVar11 = 0;
          }
          else {
            cVar12 = (char)((ulong)uVar15 >> 0x20);
            cVar2 = cVar12 + '\x18';
            if ('\x04' < cVar12) {
              cVar2 = cVar12;
            }
            if ((cVar2 < '\x16') || ((param_2 & 1) != 0)) {
              puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
              uVar4 = *puVar10 ^ *puVar10 << 0xb;
              uVar5 = puVar10[3];
              *puVar10 = puVar10[1];
              puVar10[1] = puVar10[2];
              uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
              puVar10[2] = uVar5;
              puVar10[3] = uVar4;
              uVar11 = 0x4f < (uint)((ulong)uVar4 * 100 >> 0x20);
            }
            else {
              uVar11 = 2;
            }
          }
          local_48 = puVar7 + 0x10;
          pcStack_40 = "SpnCheckPlace";
          FUN_027533a8(local_34,&local_48,uVar11);
        }
      }
    }
  }
  return;
}

