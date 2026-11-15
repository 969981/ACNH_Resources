
/* WARNING: Removing unreachable block (ram,0x023088fc) */

void FUN_02308524(undefined4 *param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ushort uVar15;
  undefined *local_98;
  char *local_90;
  int local_74;
  undefined **local_70;
  undefined4 local_68;
  uint uStack_64;
  uint *local_60;
  undefined *local_58;
  char *pcStack_50;
  byte local_44 [4];
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar12 = *(long *)puVar4;
  if (lVar12 == 0) {
    return;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  local_60 = (uint *)0x0;
  local_68 = *param_1;
  uStack_64 = param_1[1];
  local_70 = &PTR_FUN_04a36b50;
  uVar6 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar4 == 0) {
LAB_023086b4:
    uVar15 = 0xbc;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_023086b4;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
       (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar10 == (uint *)0x0)) goto LAB_023086b4;
    uVar15 = 0;
    uVar6 = *puVar10;
    local_60 = puVar10;
    if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
      if ((*puVar11 != 0) && ((uVar6 = puVar11[1], uVar6 != 0 && ((ulong)(ushort)puVar11[2] != 0))))
      {
        lVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar12 != 0) {
          uVar5 = 0;
          if ((ulong)uVar6 != 0) {
            uVar5 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar6);
          }
          if (*puVar11 <= uVar5) {
            uVar5 = 0xffffffff;
          }
          if ((uVar5 < DAT_05326ec0) &&
             (uVar15 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar5 * 2), uVar15 < 0xbd))
          goto LAB_023086b8;
        }
      }
      uVar15 = 0;
    }
  }
LAB_023086b8:
  puVar4 = PTR_DAT_04bb2020;
  if (*(char *)(param_1 + 2) == '\0') {
    return;
  }
  pbVar1 = (byte *)((long)param_1 + 9);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "get_bury_item";
  local_58 = puVar2;
  FUN_025ffac8(&local_98,&local_58,pbVar1);
  puVar3 = PTR_DAT_04bc32b8 + 0x10;
  local_98 = puVar3;
  FUN_02602950(&local_98,8);
  uVar7 = FUN_0277d6c4(param_1);
  pcStack_50 = "ItemUniqueId";
  local_58 = puVar2;
  if (local_90 != (char *)0x0) {
    FUN_02605660(local_90,&local_58,uVar7);
  }
  local_98 = puVar3;
  iVar8 = FUN_0259f3e0(&local_98);
  if (iVar8 == -1) {
LAB_02308768:
    if (local_74 == 0) {
      local_74 = 1;
    }
  }
  else {
    iVar8 = (**(code **)(local_98 + 0x20))(&local_98);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar8);
    if (0xc < iVar8) goto LAB_02308768;
  }
  FUN_02601530(&local_98);
  local_98 = (undefined *)0xa13;
  FUN_0277d4ac(&local_98);
  uVar9 = FUN_0277d7b4(&local_98,param_1);
  if ((uVar9 & 1) != 0) {
    local_98 = puVar4 + 0x10;
    local_90 = "JudgeFossil";
    FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_98);
  }
  iVar8 = FUN_0277d6c4(param_1);
  if (iVar8 == 0x8f7) {
    local_98 = puVar4 + 0x10;
    local_90 = "PlantBambooShoot";
    FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_98);
  }
  if (uVar15 < 0x6d) {
    if (uVar15 == 0x49) {
      local_90 = "DigGyroidCount";
      goto LAB_0230891c;
    }
    if (uVar15 == 0x58) {
      if (local_60 == (uint *)0x0) {
        uVar6 = 0xbc;
      }
      else {
        uVar5 = *local_60;
        uVar6 = 0;
        if ((uVar5 != 0) && (local_60 != (uint *)(ulong)uVar5)) {
          puVar10 = (uint *)((long)local_60 - (long)(ulong)uVar5);
          uVar6 = 0;
          if (*puVar10 != 0) {
            uVar6 = puVar10[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar12 != 0) {
                uVar5 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar5 = (uint)((ulong)((long)local_60 - lVar12) / (ulong)uVar6);
                }
                if (*puVar10 <= uVar5) {
                  uVar5 = 0xffffffff;
                }
                if ((uVar5 < DAT_05326ec0) &&
                   (uVar6 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar5 * 2), uVar6 < 0xbd))
                goto LAB_02308ba0;
              }
            }
            uVar6 = 0;
          }
        }
      }
LAB_02308ba0:
      local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar6);
      if ((uVar6 == 0x58) && ((uStack_64 & 0x10000) != 0)) {
        local_98 = puVar4 + 0x10;
        local_90 = "GatherMushroom";
        FUN_0279b044(pbVar1,&local_98,1);
      }
    }
  }
  else {
    if (uVar15 == 0x6d) {
      *(int *)(*(long *)PTR_DAT_04bc2fc8 + 0x14) = *(int *)(*(long *)PTR_DAT_04bc2fc8 + 0x14) + 1;
      local_90 = "GetShellfishCount";
    }
    else {
      if (uVar15 != 0x71) goto LAB_02308950;
      local_90 = "DigFossilCount";
    }
LAB_0230891c:
    local_98 = puVar4 + 0x10;
    local_44[0] = *pbVar1;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    uVar7 = FUN_02582fe0(local_44);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar7);
    FUN_021294b0(&local_98,1,&local_58);
  }
LAB_02308950:
  if (*(char *)(param_1 + 2) == '\0') {
    return;
  }
  local_98 = (undefined *)0xa13;
  FUN_0277d4ac(&local_98);
  uVar9 = FUN_0277d7b4(&local_98,param_1);
  if (((uVar9 & 1) != 0) && (uVar9 = FUN_01b09bec(&local_70), (uVar9 & 1) != 0)) {
    local_98 = puVar4 + 0x10;
    local_90 = "PV_ExcavatedFossil";
    FUN_01b5c520(&local_98,1,pbVar1);
  }
  if ((uVar15 == 0x49) && (uVar9 = FUN_01b09bec(&local_70), (uVar9 & 1) != 0)) {
    local_90 = "PV_ExcavatedHaniwa";
    local_98 = puVar4 + 0x10;
    FUN_01b5c520(&local_98,1,pbVar1);
    local_90 = "PE_ExcavatedHaniwa";
    uVar13 = *(undefined8 *)PTR_DAT_04bb49a0;
    local_98 = puVar4 + 0x10;
    uVar7 = FUN_006bd550("PE_ExcavatedHaniwa",0);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar7);
    uVar13 = FUN_01b5b4b0(uVar13,&local_58);
    FUN_01b5e0b0(&local_98,param_1,uVar13,pbVar1,0);
  }
  if ((*(long *)(DAT_0537d558 + 0x10) == 0) || ((*(uint *)(DAT_0537d558 + 0x80) & 0xfffffffe) != 2))
  {
    if (uVar15 != 0x58) {
      return;
    }
  }
  else {
    if (uVar15 != 0x58) {
      return;
    }
    if (*(int *)(*(long *)(DAT_0537d558 + 0x10) + 0x3e4) != 1) {
      return;
    }
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,0x58);
  if (local_60 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar5 = *local_60;
    uVar6 = 0;
    if ((uVar5 != 0) && (local_60 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)local_60 - (long)(ulong)uVar5);
      uVar6 = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar12 != 0) {
            uVar5 = 0;
            if ((ulong)uVar6 != 0) {
              uVar5 = (uint)((ulong)((long)local_60 - lVar12) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 < DAT_05326ec0) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar5 * 2), uVar6 < 0xbd))
            goto LAB_02308b08;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_02308b08:
  local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar6);
  if (((uVar6 == 0x58) && ((uStack_64 & 0x10000) != 0)) &&
     (iVar8 = FUN_0277d6c4(param_1), iVar8 == 0xcd0)) {
    puVar4 = puVar4 + 0x10;
    local_90 = "IsOnPlayerMemoriesMushRare";
    local_98 = puVar4;
    iVar8 = FUN_0274bce0(pbVar1,&local_98);
    if (iVar8 == 0) {
      local_90 = "IsOnPlayerMemoriesMushRare";
      local_98 = puVar4;
      FUN_0274bfe8(pbVar1,&local_98,1);
      local_90 = "PE_GetSeasonTraditionItem";
      local_98 = puVar4;
      FUN_01b600a0(&local_98,param_1,pbVar1);
    }
  }
  return;
}

