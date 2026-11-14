
void FUN_01dcfbb0(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  byte local_6c [4];
  undefined *local_68;
  char *pcStack_60;
  int local_44;
  undefined4 local_40;
  undefined4 local_34;
  
  lVar7 = *(long *)(param_1 + 0x58);
  if (*(int *)(lVar7 + 0xe8) != 0) {
    if (0 < *(int *)(lVar7 + 0xe8)) {
      lVar10 = 0;
      puVar13 = *(undefined8 **)(lVar7 + 0xf8);
      do {
        puVar14 = *(undefined8 **)(*(long *)(lVar7 + 0xf0) + lVar10 * 8);
        lVar10 = lVar10 + 1;
        *puVar14 = puVar13;
        *(undefined8 **)(lVar7 + 0xf8) = puVar14;
        puVar13 = puVar14;
      } while (lVar10 < *(int *)(lVar7 + 0xe8));
    }
    *(undefined4 *)(lVar7 + 0xe8) = 0;
  }
  lVar7 = *(long *)(lVar7 + 0x3a438);
  if (*(int *)(lVar7 + 0x50) != 0) {
    if (*(long *)(lVar7 + 0x48) != lVar7 + 0x40) {
      lVar15 = (long)*(int *)(lVar7 + 0x54);
      lVar16 = *(long *)(lVar7 + 0x48) - lVar15;
      lVar10 = lVar16 + lVar15;
      do {
        lVar10 = *(long *)(lVar10 + 8);
        if (*(long *)(lVar16 + 0x6f8) != 0) {
          *(undefined1 *)(*(long *)(lVar16 + 0x6f8) + 0x5a) = 1;
        }
        lVar16 = lVar10 - lVar15;
      } while (lVar16 != (lVar7 + 0x40) - lVar15);
    }
  }
  FUN_01d6bde0(*(undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x164) = 0;
  puVar4 = PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  puVar3 = PTR_DAT_04bb27d0;
  puVar1 = PTR_DAT_04bb2020;
  plVar8 = *(long **)PTR_DAT_04bb27d0;
  if (plVar8 == (long *)0x0) {
    return;
  }
  if (plVar8[5] == 0) {
    return;
  }
  if ((int)plVar8[0x10] != 1) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  if (lVar7 == 0) {
    bVar12 = *PTR_DAT_04bb32e0;
    if (7 < bVar12) goto LAB_01dcfd0c;
LAB_01dcfd6c:
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar12);
  }
  else {
    pbVar11 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar7 + 0x158);
    }
    bVar12 = *pbVar11;
    if ((bVar12 < 8) ||
       (((*(int *)(lVar7 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar12 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), bVar12 < 8)))) goto LAB_01dcfd6c;
LAB_01dcfd0c:
    lVar7 = *plVar8;
    bVar12 = *(byte *)(lVar7 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar12 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
      if (7 < bVar12) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar11 = (byte *)(lVar7 + 0x471);
      }
    }
    bVar12 = *pbVar11;
    bVar5 = 7 < bVar12;
    if (bVar5) {
      bVar12 = 0xff;
    }
    local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar12);
    if (bVar5) {
      bVar12 = *PTR_DAT_04bb5038;
      goto LAB_01dcfd6c;
    }
  }
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "MyDesignExchangeNotFoundOpus";
  iVar6 = FUN_02753180(&local_90,&local_68);
  if (iVar6 == 0) {
    return;
  }
  lVar7 = *(long *)puVar4;
  if (lVar7 == 0) {
LAB_01dcfde8:
    if (*pbVar9 < 8) goto LAB_01dcfe58;
LAB_01dcfdf4:
    if (*(long **)puVar3 == (long *)0x0) {
LAB_01dcfe50:
      pbVar9 = PTR_DAT_04bb5038;
      goto LAB_01dcfe58;
    }
    lVar7 = **(long **)puVar3;
    bVar12 = *(byte *)(lVar7 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar12 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
      if (7 < bVar12) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar9 = (byte *)(lVar7 + 0x471);
      }
    }
    local_6c[0] = *pbVar9;
    if (7 < local_6c[0]) goto LAB_01dcfe50;
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dcfde8;
      }
      goto LAB_01dcfdf4;
    }
LAB_01dcfe58:
    local_6c[0] = *pbVar9;
    if (7 < local_6c[0]) {
      local_6c[0] = 0xff;
    }
  }
  local_34 = 3;
  local_88 = PTR_s_dream_land_not_found_mydesign_04a85668;
  local_90 = puVar1 + 0x10;
  FUN_025ffac8(&local_68,&local_90,local_6c);
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  local_80 = 0;
  local_78 = 0;
  puVar1 = PTR_DAT_04bc3280 + 0x10;
  local_40 = local_34;
  local_68 = puVar1;
  local_88 = (undefined *)FUN_02658fd0();
  FUN_025970dc(&local_68,&local_90);
  local_68 = puVar1;
  iVar6 = FUN_025974d4(&local_68);
  if (iVar6 != -1) {
    iVar6 = (**(code **)(local_68 + 0x20))(&local_68);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar6);
    if (iVar6 < 0xd) goto LAB_01dcff18;
  }
  if (local_44 == 0) {
    local_44 = 1;
  }
LAB_01dcff18:
  FUN_02601530(&local_68);
  return;
}

