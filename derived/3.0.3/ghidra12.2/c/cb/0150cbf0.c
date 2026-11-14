
void FUN_0150cbf0(short *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  long lVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  short sVar16;
  ulong uVar17;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined *local_40;
  int local_38;
  int local_34;
  byte local_30;
  int local_24;
  
  sVar9 = *param_1;
  bVar4 = sVar9 != 0;
  bVar5 = DAT_055c1b60 == &DAT_055c1b58;
  puVar14 = DAT_055c1b60 + -8;
  puVar15 = puVar14;
  bVar6 = bVar5;
  if (!bVar5 && bVar4) {
    puVar15 = DAT_055c1b60;
    sVar16 = sVar9;
    do {
      puVar15 = (undefined8 *)puVar15[1];
      sVar16 = sVar16 + -1;
      bVar6 = puVar15 == &DAT_055c1b58;
    } while (!bVar6 && sVar16 != 0);
    puVar15 = puVar15 + -8;
  }
  puVar1 = &DAT_055c04a0;
  if (!bVar6) {
    puVar1 = puVar15;
  }
  iVar8 = *(int *)(puVar1 + 7);
  if (DAT_052163b8 == iVar8) {
    local_24 = 0;
  }
  else if (DAT_052163bc == iVar8) {
    local_24 = 1;
  }
  else if (DAT_052163c0 == iVar8) {
    local_24 = 2;
  }
  else if (DAT_052163c4 == iVar8) {
    local_24 = 3;
  }
  else if (DAT_052163c8 == iVar8) {
    local_24 = 4;
  }
  else if (DAT_052163cc == iVar8) {
    local_24 = 5;
  }
  else if (DAT_052163d0 == iVar8) {
    local_24 = 6;
  }
  else if (DAT_052163d4 == iVar8) {
    local_24 = 7;
  }
  else if (DAT_052163d8 == iVar8) {
    local_24 = 8;
  }
  else if (DAT_052163dc == iVar8) {
    local_24 = 9;
  }
  else {
    local_24 = 10;
    if (DAT_052163e0 != iVar8) {
      local_24 = 0;
    }
  }
  puVar15 = puVar14;
  bVar6 = bVar5;
  if (!bVar5 && bVar4) {
    puVar15 = DAT_055c1b60;
    sVar16 = sVar9;
    do {
      puVar15 = (undefined8 *)puVar15[1];
      sVar16 = sVar16 + -1;
      bVar6 = puVar15 == &DAT_055c1b58;
    } while (!bVar6 && sVar16 != 0);
    puVar15 = puVar15 + -8;
  }
  puVar1 = &DAT_055c04a0;
  if (!bVar6) {
    puVar1 = puVar15;
  }
  uVar17 = 0;
  do {
    piVar2 = &DAT_0516b108 + uVar17;
    uVar10 = (uint)uVar17;
    if (0x38 < uVar10) {
      piVar2 = &DAT_0516b108;
    }
    if (*piVar2 == *(int *)(puVar1 + 7)) goto LAB_0150cddc;
    uVar7 = 0x39;
    if ((int)uVar10 < 0x39) {
      uVar7 = uVar10 + 1;
    }
    uVar17 = (ulong)uVar7;
  } while (uVar7 != 0x39);
  uVar10 = 0;
LAB_0150cddc:
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar10);
  if (uVar10 == 0) {
    if (DAT_04c487d4 != sVar9) {
      if (local_24 == 0) {
        return;
      }
      uVar10 = (uint)*(byte *)(param_1 + 1);
      if (7 < uVar10) {
        uVar10 = 0;
      }
      local_38 = (int)param_1[2];
      local_34 = (int)param_1[3];
      local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar10);
      local_40 = PTR_DAT_04bb2010 + 0x10;
      FUN_01549f80(local_24,&local_50,&local_40,(char)param_1[4]);
      return;
    }
    local_38 = 0;
    if (DAT_05aed670 == 0) {
      puVar15 = &DAT_055c04a0;
    }
    else {
      puVar15 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar15 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar8 = FUN_006bd550(*puVar15,0);
        puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar15 = &DAT_055c04a0;
        }
      }
    }
    local_34 = *(int *)(puVar15 + 7);
    local_30 = FUN_017baf44();
    puVar12 = &DAT_048fe470;
  }
  else {
    puVar15 = DAT_055c1b60;
    if (!bVar5 && bVar4) {
      do {
        puVar15 = (undefined8 *)puVar15[1];
        sVar9 = sVar9 + -1;
        bVar5 = puVar15 == &DAT_055c1b58;
      } while (!bVar5 && sVar9 != 0);
      puVar14 = puVar15 + -8;
    }
    lVar11 = 0;
    puVar15 = &DAT_055c04a0;
    if (!bVar5) {
      puVar15 = puVar14;
    }
    for (; (&DAT_0516b108)[lVar11] != *(int *)(puVar15 + 7); lVar11 = lVar11 + 2) {
      if (0x37 < (uint)lVar11) {
        lVar11 = 0;
        puVar13 = &DAT_0516b108;
        goto LAB_0150cf00;
      }
      if ((&DAT_0516b10c)[lVar11] == *(int *)(puVar15 + 7)) {
        lVar11 = lVar11 + 1;
        break;
      }
    }
    puVar13 = &DAT_0516b108 + lVar11;
LAB_0150cf00:
    local_40 = PTR_DAT_04bbfe68 + 0x10;
    local_34 = *puVar13;
    local_38 = (int)lVar11;
    local_30 = FUN_017baf44();
    puVar12 = &DAT_0491a8e0;
  }
  local_40 = puVar12 + 0x10;
  bVar3 = *(byte *)(param_1 + 1);
  local_30 = local_30 & 1;
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_48 = (int)param_1[2];
  iStack_44 = (int)param_1[3];
  if (7 < bVar3) {
    bVar3 = 0;
  }
  FUN_014fd424(&local_40,(char)param_1[4],&local_50,bVar3);
  return;
}

