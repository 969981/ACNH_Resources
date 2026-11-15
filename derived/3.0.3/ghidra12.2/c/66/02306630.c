
void FUN_02306630(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long lVar13;
  ushort uVar14;
  long lVar15;
  char *pcVar16;
  undefined8 local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  byte local_28 [4];
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4();
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  local_48 = (uint *)0x0;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02306734;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_1);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar5) ||
       (puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8),
       puVar12 == (uint *)0x0)) goto LAB_02306734;
    local_48 = puVar12;
LAB_0230673c:
    uVar5 = *local_48;
    uVar14 = 0;
    if ((uVar5 == 0) || (local_48 == (uint *)(ulong)uVar5)) goto LAB_023067e8;
    puVar12 = (uint *)((long)local_48 - (long)(ulong)uVar5);
    if ((*puVar12 == 0) || ((uVar5 = puVar12[1], uVar5 == 0 || ((ulong)(ushort)puVar12[2] == 0)))) {
LAB_02306894:
      uVar14 = 0;
      cVar3 = *(char *)((long)param_1 + 10);
      goto joined_r0x0230689c;
    }
    lVar13 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar13 == 0) goto LAB_02306894;
    uVar2 = 0;
    if ((ulong)uVar5 != 0) {
      uVar2 = (uint)((ulong)((long)local_48 - lVar13) / (ulong)uVar5);
    }
    if (*puVar12 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
       (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2), 0xbc < uVar14)
       ) goto LAB_02306894;
    if (uVar14 != 0x78) goto LAB_023067e8;
    if (*(char *)(param_1 + 2) == '\0') goto LAB_02306c74;
    pcStack_60 = "FenceEditCount";
LAB_02306854:
    local_28[0] = *(byte *)((long)param_1 + 9);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
    local_24 = FUN_02582fe0(local_28);
    FUN_021294b0(&local_68,1,&local_24);
    goto LAB_02306c74;
  }
LAB_02306734:
  if (local_48 != (uint *)0x0) goto LAB_0230673c;
  uVar14 = 0xbc;
LAB_023067e8:
  cVar3 = *(char *)((long)param_1 + 10);
joined_r0x0230689c:
  if (cVar3 != '\0') {
    if ((*(char *)(param_1 + 2) == '\0') || (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 == -1))
    goto LAB_02306c74;
    local_68._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
    puVar12 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 2 * 4);
    if (0xff < (uint)(int)sVar4) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 1 & 1) == 0) goto LAB_02306c74;
    pcStack_60 = "MoveFurnitureFieldCount";
    goto LAB_02306854;
  }
  if (((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) &&
     (uVar9 = FUN_0277e158(param_1), (uVar9 & 1) != 0)) {
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "PickUpFirst";
    FUN_0274bfe8((long)param_1 + 9,&local_68,1);
  }
  puVar1 = PTR_DAT_04bb2020;
  switch(uVar14) {
  case 0x52:
    uVar10 = *(undefined8 *)PTR_DAT_04bb64a0;
    pcStack_60 = "SellWeed";
    goto LAB_023069e0;
  default:
    if ((uVar14 == 0x51) && (*(char *)(param_1 + 2) != '\0')) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,param_1[3]);
      if (param_1[3] - 4 < 6) {
        uVar6 = FUN_01af02d0(&local_58);
        pcStack_60 = "HarvestVegetableCount";
        goto LAB_02306a18;
      }
    }
    break;
  case 0x57:
    if (*(char *)(param_1 + 2) != '\0') {
      pcStack_60 = "PickUpFruitsCount";
LAB_02306a00:
      uVar6 = 1;
LAB_02306a18:
      local_68 = PTR_DAT_04bb2020 + 0x10;
      FUN_0212944c(&local_68,uVar6,(long)param_1 + 9);
    }
    break;
  case 0x58:
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "GatherMushroom";
    FUN_0279b044((long)param_1 + 9,&local_68,1);
    uVar10 = *(undefined8 *)PTR_DAT_04bb64a0;
    pcStack_60 = "GatherMushroom";
LAB_023069e0:
    local_68 = puVar1 + 0x10;
    FUN_00ad4d80(uVar10,&local_68);
    break;
  case 0x6c:
    if (*(char *)(param_1 + 2) != '\0') {
      pcStack_60 = "GetShellDriftCount";
      goto LAB_02306a00;
    }
  }
  if (*(char *)(param_1 + 2) == '\0') goto LAB_02306c74;
  lVar13 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
  if (((lVar13 != 0) && ((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) & 0xfffffffe) == 2)) &&
     (*(int *)(lVar13 + 0x3e4) != 1)) goto LAB_02306c74;
  uVar9 = FUN_01b09bec(&local_58);
  if ((uVar9 & 1) != 0) {
    iVar7 = FUN_0277d6c4(param_1);
    if (iVar7 == 0x1661) {
      pcVar16 = "IsOnPlayerMemoriesSeasonBamboo";
    }
    else {
      iVar7 = FUN_0277d6c4(param_1);
      if (iVar7 == 0x175e) {
        pcVar16 = "IsOnPlayerMemoriesSeasonShell";
      }
      else {
        iVar7 = FUN_0277d6c4(param_1);
        if (iVar7 == 0x165f) {
          pcVar16 = "IsOnPlayerMemoriesSeasonAcorn";
        }
        else {
          iVar7 = FUN_0277d6c4(param_1);
          if (iVar7 != 0x1660) goto LAB_02306b54;
          pcVar16 = "IsOnPlayerMemoriesSeasonPinecone";
        }
      }
    }
    lVar13 = (long)param_1 + 9;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_68 = puVar1;
    pcStack_60 = pcVar16;
    iVar7 = FUN_0274bce0(lVar13,&local_68);
    if (iVar7 == 0) {
      local_68 = puVar1;
      pcStack_60 = pcVar16;
      FUN_0274bfe8(lVar13,&local_68,1);
      pcStack_60 = "PE_GetSeasonTraditionItem";
      local_68 = puVar1;
      FUN_01b600a0(&local_68,param_1,lVar13);
    }
  }
LAB_02306b54:
  if ((uVar14 == 0x58) && (uVar9 = FUN_01b15608(&local_58), (uVar9 & 1) != 0)) {
    iVar7 = FUN_0277d6c4(param_1);
    if (iVar7 == 0xccc) {
      pcVar16 = "IsOnPlayerMemoriesMushSplendid";
    }
    else {
      iVar7 = FUN_0277d6c4(param_1);
      if (iVar7 == 0xccd) {
        pcVar16 = "IsOnPlayerMemoriesMushRound";
      }
      else {
        iVar7 = FUN_0277d6c4(param_1);
        if (iVar7 == 0xcce) {
          pcVar16 = "IsOnPlayerMemoriesMushSlender";
        }
        else {
          iVar7 = FUN_0277d6c4(param_1);
          if (iVar7 == 0xccf) {
            pcVar16 = "IsOnPlayerMemoriesMushFlat";
          }
          else {
            iVar7 = FUN_0277d6c4(param_1);
            if (iVar7 != 0xcd0) goto LAB_02306c74;
            pcVar16 = "IsOnPlayerMemoriesMushRare";
          }
        }
      }
    }
    lVar13 = (long)param_1 + 9;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_68 = puVar1;
    pcStack_60 = pcVar16;
    iVar7 = FUN_0274bce0(lVar13,&local_68);
    if (iVar7 == 0) {
      local_68 = puVar1;
      pcStack_60 = pcVar16;
      FUN_0274bfe8(lVar13,&local_68,1);
      pcStack_60 = "PE_GetSeasonTraditionItem";
      local_68 = puVar1;
      FUN_01b600a0(&local_68,param_1,lVar13);
    }
  }
LAB_02306c74:
  puVar1 = PTR_DAT_04bb2720;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  iVar7 = 0;
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x330) == 0) {
      iVar7 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar8 = FUN_006bd550(*puVar11,0);
      iVar7 = 0;
      if (iVar8 == 0x758f7eaf) {
        iVar7 = 0;
        if (*(long *)puVar1 != 0) {
          lVar13 = *(long *)(*(long *)puVar1 + 0x330);
          iVar7 = 0;
          if (lVar13 != 0) {
            iVar7 = *(int *)(lVar13 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar7) {
    *(byte *)(*(long *)PTR_DAT_04bb9a68 + 0x54) = *(byte *)(*(long *)PTR_DAT_04bb9a68 + 0x54) | 4;
  }
  return;
}

