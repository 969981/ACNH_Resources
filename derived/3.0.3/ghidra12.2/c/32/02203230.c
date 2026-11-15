
undefined8 FUN_02203230(undefined4 *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  long lVar7;
  undefined *local_38;
  char *pcStack_30;
  byte local_24 [4];
  
  puVar3 = PTR_DAT_04bb39b0;
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_022032a4:
    if (*pbVar6 < 8) goto LAB_0220331c;
LAB_022032b0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02203314:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_0220331c;
    }
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    local_24[0] = *pbVar6;
    if (7 < local_24[0]) goto LAB_02203314;
LAB_02203338:
    local_38 = PTR_DAT_04bb2020 + 0x10;
    pcStack_30 = "AlwJuneBrideRemakeOpenFlag";
    iVar4 = FUN_0274bce0(local_24,&local_38);
    if (iVar4 == 0) goto LAB_02203368;
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_022032a4;
      }
      goto LAB_022032b0;
    }
LAB_0220331c:
    local_24[0] = *pbVar6;
    if (local_24[0] < 8) goto LAB_02203338;
    local_24[0] = 0xff;
LAB_02203368:
    FUN_0252d11c(local_24);
    if (7 < local_24[0]) {
      return 0;
    }
    local_38 = PTR_DAT_04bb2020 + 0x10;
    pcStack_30 = "AlwJuneBrideDayCount";
    iVar4 = FUN_0274bce0(local_24,&local_38);
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    if (iVar4 < 6) {
      return 0;
    }
  }
  lVar7 = *(long *)puVar3;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_0220340c:
    if (7 < *pbVar6) {
LAB_02203418:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_24[0] = *pbVar6;
        if (local_24[0] < 8) goto LAB_0220349c;
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
        goto LAB_0220340c;
      }
      goto LAB_02203418;
    }
  }
  local_24[0] = *pbVar6;
  if (7 < local_24[0]) {
    return 0;
  }
LAB_0220349c:
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "CurrentJuneBrideTheme";
  uVar5 = FUN_0274bce0(local_24,&local_38);
  *param_1 = uVar5;
  return 1;
}

