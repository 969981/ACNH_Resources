
ulong FUN_031e96ac(uint param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *local_108;
  char *pcStack_100;
  undefined8 *local_f8;
  char *pcStack_f0;
  byte local_e4 [4];
  undefined8 *local_e0 [4];
  undefined8 *local_c0;
  char *pcStack_b8;
  undefined8 *local_b0;
  char *pcStack_a8;
  undefined8 *local_a0;
  char *pcStack_98;
  undefined8 *local_90;
  char *pcStack_88;
  undefined8 *local_80;
  char *pcStack_78;
  undefined8 *local_70;
  char *pcStack_68;
  undefined8 *local_60;
  char *pcStack_58;
  undefined8 *local_50;
  char *pcStack_48;
  undefined8 *local_40;
  char *pcStack_38;
  undefined8 *local_30;
  char *pcStack_28;
  
  local_e0[0] = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
  local_e0[1] = &DAT_0407ebb1;
  local_e0[3] = &DAT_0407ebb1;
  pcStack_b8 = "GetLicenseGrdStone";
  pcStack_a8 = "GetLicenseGrdBrick";
  pcStack_98 = "GetLicenseGrdDarkSoil";
  pcStack_78 = "GetLicenseGrdSand";
  pcStack_88 = "GetLicenseGrdStonePattern";
  pcStack_68 = "GetLicenseGrdTile";
  pcStack_58 = "GetLicenseGrdWood";
  pcStack_48 = "GetLicenseGrdMydesign";
  pcStack_38 = "GetLicenseRiver";
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pcStack_28 = "GetLicenseCliff";
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_031e97b0:
    if (*pbVar8 < 8) goto LAB_031e9828;
LAB_031e97bc:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_031e9820:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_031e9828;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_e4[0] = *pbVar8;
    if (7 < local_e4[0]) goto LAB_031e9820;
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_031e97b0;
      }
      goto LAB_031e97bc;
    }
LAB_031e9828:
    local_e4[0] = *pbVar8;
    if (7 < local_e4[0]) {
      local_e4[0] = 0xff;
    }
  }
  if (param_1 < 2) {
    return 1;
  }
  local_e0[2] = local_e0[0];
  local_c0 = local_e0[0];
  local_b0 = local_e0[0];
  local_a0 = local_e0[0];
  local_90 = local_e0[0];
  local_80 = local_e0[0];
  local_70 = local_e0[0];
  local_60 = local_e0[0];
  local_50 = local_e0[0];
  local_40 = local_e0[0];
  local_30 = local_e0[0];
  if (param_1 == 0xb) {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) {
        return 0;
      }
    }
    pcStack_f0 = "GetLicenseCliff";
  }
  else {
    if (param_1 != 10) {
      if (param_1 == 9) {
        puVar1 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
        pcStack_f0 = "GetLicenseGrdMydesign";
        local_f8 = puVar1;
        uVar6 = FUN_0274bce0(local_e4,&local_f8);
        if ((int)uVar6 == 0) {
          return uVar6;
        }
        pcStack_100 = "MainmenuMydesign";
        ppuVar7 = &local_108;
        local_108 = puVar1;
      }
      else {
        if (0xb < param_1) {
          param_1 = 0;
        }
        ppuVar7 = local_e0 + (ulong)param_1 * 2;
      }
      goto LAB_031e9970;
    }
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) {
        return 0;
      }
    }
    pcStack_f0 = "GetLicenseRiver";
  }
  local_f8 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
  ppuVar7 = &local_f8;
LAB_031e9970:
  iVar5 = FUN_0274bce0(local_e4,ppuVar7);
  return (ulong)(iVar5 != 0);
}

