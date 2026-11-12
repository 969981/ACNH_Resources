
undefined8 FUN_008da2c4(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  puVar3 = PTR_DAT_04bb39b0;
  if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 0x1a & 1) != 0) && ((*puVar1 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x37fb5) = 1;
      }
    }
    puVar3 = PTR_DAT_04bb2020;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "CommuneExpanded";
      uVar4 = FUN_0273f0a0(&local_40);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37fb5) = 1;
      }
    }
    local_50 = puVar3 + 0x10;
    pcStack_38 = s_cShopBuyMenu_049239a0;
    puStack_48 = &DAT_040b00cb;
    local_40 = local_50;
    FUN_008c5690(param_1,&local_40,&local_50);
    return 1;
  }
  FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
  lVar7 = *(long *)puVar3;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_008da45c:
    if (7 < *pbVar6) {
LAB_008da468:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        bVar5 = *pbVar6;
        if (bVar5 < 8) goto LAB_008da4d8;
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
        goto LAB_008da45c;
      }
      goto LAB_008da468;
    }
  }
  bVar5 = *pbVar6;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
LAB_008da4d8:
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *(byte *)(param_1 + 0x309b8) = bVar5;
  *(undefined4 *)(param_1 + 0x307e4) = *(undefined4 *)(param_1 + 0x307e8);
  FUN_03ebb160(param_1 + 0x408,8);
  return 1;
}

