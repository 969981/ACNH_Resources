
void FUN_02165650(long param_1,int param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  byte bVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  undefined *local_1a0;
  undefined8 *puStack_198;
  undefined *local_190;
  undefined1 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c [31];
  undefined1 local_15d;
  undefined *local_158;
  char *pcStack_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *local_f8;
  int local_f0;
  undefined1 local_ec [7];
  undefined1 local_e5;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  undefined1 local_cc [63];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  byte local_64 [4];
  
  puVar3 = PTR_DAT_04bb3768;
  local_6d = 0;
  local_78 = 8;
  local_80 = local_74;
  local_74[0] = 0;
  lVar13 = *(long *)(param_1 + 8);
  local_88 = PTR_DAT_04bb3768 + 0x10;
  (**(code **)(*(long *)(lVar13 + 0x3e0) + 0x18))(lVar13 + 0x3e0);
  FUN_038d1270(&local_88,&DAT_040915b3,*(undefined8 *)(lVar13 + 1000));
  puVar2 = PTR_DAT_04bb2bc0;
  local_8d = 0;
  local_d0 = 0x40;
  lVar13 = *(long *)(param_1 + 8);
  puStack_d8 = local_cc;
  local_cc[0] = 0;
  local_e0 = PTR_DAT_04bb2bc0 + 0x10;
  (**(code **)(local_88 + 0x18))(&local_88);
  (**(code **)(local_88 + 0x18))(&local_88);
  if (local_80 == &DAT_040b02b3) {
LAB_02165770:
    local_f0 = 8;
    local_e5 = 0;
    local_100 = PTR_DAT_04bb6a30 + 0x10;
    local_f8 = local_ec;
    (**(code **)(local_88 + 0x18))(&local_88);
    puVar7 = local_80;
    if (local_ec != local_80) {
      (**(code **)(local_88 + 0x18))(&local_88);
      lVar9 = 0;
      do {
        if (local_80[lVar9] == '\0') goto LAB_021658dc;
        if (local_80[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_021658dc;
        }
        if (local_80[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_021658dc;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_021658dc:
      iVar5 = (int)lVar9;
      if (local_f0 <= (int)lVar9) {
        iVar5 = local_f0 + -1;
      }
      memcpy(local_ec,puVar7,(long)iVar5);
      local_ec[iVar5] = 0;
    }
    local_100 = puVar3 + 0x10;
    local_f8[(long)local_f0 + -1] = 0;
    (**(code **)(puVar3 + 0x28))(&local_100);
    if (local_f8 != &DAT_040b02b3) {
      uVar11 = 0;
      bVar4 = true;
      do {
        if (local_f8[uVar11] != (&DAT_040b02b3)[uVar11]) break;
        if (local_f8[uVar11] == '\0') {
          if (bVar4) goto LAB_02165970;
          break;
        }
        bVar4 = uVar11 < 0x80000;
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x80001);
      goto LAB_0216581c;
    }
LAB_02165970:
    if (param_2 != 1) {
      lVar9 = *(long *)PTR_DAT_04bb39b0;
      pbVar10 = PTR_DAT_04bb32e0;
      if (lVar9 == 0) {
LAB_02165a00:
        if (*pbVar10 < 8) goto LAB_02165a78;
LAB_02165a0c:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02165a70:
          pbVar10 = PTR_DAT_04bb5038;
          goto LAB_02165a78;
        }
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar8 = *(byte *)(lVar9 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar9 + 0x471);
          }
        }
        bVar12 = *pbVar10;
        bVar8 = bVar12;
        if (7 < bVar12) {
          bVar8 = 0xff;
        }
        local_190 = (undefined *)CONCAT71(local_190._1_7_,bVar8);
        if (7 < bVar12) goto LAB_02165a70;
      }
      else {
        if (*(int *)(lVar9 + 0x15c) != 0) {
          pbVar10 = (byte *)(lVar9 + 0x158);
        }
        if (7 < *pbVar10) {
          if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_02165a00;
          }
          goto LAB_02165a0c;
        }
LAB_02165a78:
        bVar12 = *pbVar10;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        local_190 = (undefined *)CONCAT71(local_190._1_7_,bVar12);
      }
      bVar8 = bVar12;
      if (7 < bVar12) {
        bVar8 = 0xff;
      }
      local_1a0 = (undefined *)CONCAT71(local_1a0._1_7_,bVar8);
      uVar11 = FUN_02669430(&local_1a0);
      if ((uVar11 & 1) == 0) {
LAB_02165adc:
        local_64[0] = bVar12;
        if (7 < bVar12) {
          local_64[0] = 0xff;
        }
        uVar11 = FUN_02669430(local_64);
        if ((uVar11 & 1) == 0) {
          local_158 = PTR_DAT_04bb2020 + 0x10;
          pcStack_150 = "DC_FoxBuyTodayFlag";
          iVar5 = FUN_02754e30(&local_190,&local_158);
          param_2 = 1;
          if (iVar5 == 0) {
            param_2 = 2;
          }
        }
        else {
          param_2 = 2;
        }
      }
      else {
        local_158 = PTR_DAT_04bb2020 + 0x10;
        pcStack_150 = "FoxBuyTodayFlag";
        iVar5 = FUN_0274bce0(&local_190,&local_158);
        if (iVar5 == 0) {
          bVar12 = (byte)local_190;
          goto LAB_02165adc;
        }
        param_2 = 1;
      }
      (**(code **)(local_100 + 0x18))(&local_100);
      pcVar6 = "System/Balloon/BLN_Shop:BLN_%sBye_%03d";
      puVar7 = local_f8;
      goto LAB_02165810;
    }
    (**(code **)(local_100 + 0x18))(&local_100);
    pcVar6 = "System/Balloon/BLN_Shop:BLN_%sWelcome_%03d";
    param_2 = 1;
    puVar7 = local_f8;
  }
  else {
    uVar11 = 0;
    bVar4 = true;
    do {
      if (local_80[uVar11] != (&DAT_040b02b3)[uVar11]) break;
      if (local_80[uVar11] == '\0') {
        if (bVar4) goto LAB_02165770;
        break;
      }
      bVar4 = uVar11 < 0x80000;
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x80001);
    (**(code **)(local_88 + 0x18))(&local_88);
    pcVar6 = "System/Balloon/BLN_Shop:BLN_%sWelcome_%03d";
    puVar7 = local_80;
LAB_02165810:
  }
  FUN_038d1270(&local_e0,pcVar6,puVar7,param_2);
LAB_0216581c:
  local_158 = puVar2 + 0x10;
  local_105 = 0;
  local_148 = 0x40;
  pcStack_150 = local_144;
  local_144[0] = 0;
  puStack_188 = local_17c;
  local_180 = 0x20;
  local_15d = 0;
  local_17c[0] = 0;
  local_190 = PTR_DAT_04bb2028 + 0x10;
  uVar11 = FUN_00ad8430(&local_158,&local_190,&local_e0);
  if ((uVar11 & 1) != 0) {
    local_1a0 = PTR_DAT_04bb2020 + 0x10;
    puStack_198 = &DAT_0407ebb1;
    FUN_02051bb0(lVar13 + 0x540,2,&local_158,&local_190,&local_1a0);
    *(undefined4 *)(lVar13 + 0x58c) = 0x28;
  }
  return;
}

