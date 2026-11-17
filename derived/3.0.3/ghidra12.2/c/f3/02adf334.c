
/* WARNING: Removing unreachable block (ram,0x02adfac8) */
/* WARNING: Removing unreachable block (ram,0x02adf998) */
/* WARNING: Removing unreachable block (ram,0x02adf4b0) */
/* WARNING: Removing unreachable block (ram,0x02adf960) */
/* WARNING: Removing unreachable block (ram,0x02adfa74) */
/* WARNING: Removing unreachable block (ram,0x02adfb00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02adf334(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  undefined8 uVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  uint local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "BuiltTownOffice";
  local_70 = puVar1;
  iVar4 = FUN_0273ea30(&local_70);
  if (iVar4 == 0) {
LAB_02adf3ac:
    if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0xc) != 0x1a)) ||
       (bVar13 = *(byte *)(param_2 + 8), (bVar13 & 1) != 0)) {
      if (*(int *)(param_2 + 0xc) != 0) {
        bVar13 = 0;
        if ((*(int *)(param_2 + 0xc) == 0x1b) && (bVar2 = *(byte *)(param_2 + 8), (bVar2 & 3) == 2))
        {
          lVar6 = *(long *)(param_1 + 8);
          if (*(long *)(lVar6 + 8) == 0) {
            uVar5 = 0x1b;
          }
          else {
            FUN_01361f00(*(long *)(lVar6 + 8),param_3);
            bVar2 = *(byte *)(param_2 + 8);
            uVar5 = *(undefined4 *)(param_2 + 0xc);
            lVar6 = *(long *)(param_1 + 8);
          }
          local_68 = (char *)CONCAT44(uVar5,(undefined4)local_68);
          local_50 = *(undefined4 *)(param_2 + 0x20);
          local_70 = PTR_DAT_04bc4608 + 0x10;
          uStack_58 = *(undefined8 *)(param_2 + 0x18);
          local_60 = PTR_DAT_04bb2010 + 0x10;
          local_4c = *(undefined2 *)(param_2 + 0x24);
          local_68 = (char *)(CONCAT71(local_68._1_7_,bVar2) & 0xfffffffffffffffd);
          FUN_02a59660(lVar6,&local_70,param_3);
          if (**(long **)(param_1 + 0x18) == 1) {
            puVar1 = puVar3 + 0x10;
            local_68 = "CeremonyBuildSlope";
            local_70 = puVar1;
            uVar7 = FUN_0273f0a0(&local_70);
            if ((uVar7 & 1) == 0) {
              local_68 = "CeremonyBuildSlope";
              local_70 = puVar1;
              FUN_0273f3c4(&local_70,1);
              local_68 = "CeremonySlopeUnitX";
              local_70 = puVar1;
              FUN_0273f3c4(&local_70,*(undefined4 *)(param_2 + 0x18));
              local_68 = "CeremonySlopeUnitZ";
              local_70 = puVar1;
              FUN_0273f3c4(&local_70,*(undefined4 *)(param_2 + 0x1c));
            }
          }
          lVar6 = *(long *)PTR_DAT_04bb5008;
          uVar11 = (uint)*(ushort *)(param_2 + 0x24);
          if (*(int *)(param_2 + 0xc) != 0x1b) {
            uVar11 = 0;
          }
          uVar11 = uVar11 - *(ushort *)(lVar6 + 0x13f0);
          if ((uVar11 < *(uint *)(lVar6 + 0x13d0)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x13d8) + (long)(int)uVar11 * 8), lVar6 != 0)) {
            puVar8 = (ushort *)FUN_0095fd90(lVar6,0,0xc33a894e,*(undefined8 *)PTR_DAT_04bc4ad8);
            if (puVar8 == (ushort *)0x0) {
              uVar10 = 0xfffe;
            }
            else {
              uVar10 = *puVar8;
            }
            local_78 = (uint)uVar10;
            local_74 = 0;
            FUN_0277d4ac(&local_78);
          }
          else {
            local_78 = _DAT_05586008;
            local_74 = DAT_0558600c;
          }
          puVar1 = puVar3 + 0x10;
          local_68 = "SlopeBuilt";
          local_70 = puVar1;
          uVar7 = FUN_0273f0a0(&local_70);
          if ((uVar7 & 1) == 0) {
            local_68 = "SlopeBuilt";
            local_70 = puVar1;
            FUN_0273f3c4(&local_70,1);
            local_68 = "CountFirstSlopeAfterBuild";
            local_70 = puVar1;
            uVar5 = FUN_0273ef40(&local_70);
            local_68 = "CountFirstSlopeAfterBuild";
            local_70 = puVar1;
            FUN_0273f3c4(&local_70,uVar5);
            local_68 = "LE_SlopeBuilt_First";
          }
          else {
            local_68 = "LE_SlopeBuilt";
          }
          goto LAB_02adf8f4;
        }
        goto LAB_02adf93c;
      }
      goto LAB_02adf9d0;
    }
    if ((bVar13 >> 1 & 1) == 0) goto LAB_02adf9d0;
    lVar6 = *(long *)(param_1 + 8);
    if (*(long *)(lVar6 + 8) == 0) {
      uVar5 = 0x1a;
    }
    else {
      FUN_01361f00(*(long *)(lVar6 + 8),param_3);
      bVar13 = *(byte *)(param_2 + 8);
      uVar5 = *(undefined4 *)(param_2 + 0xc);
      lVar6 = *(long *)(param_1 + 8);
    }
    local_68 = (char *)CONCAT44(uVar5,(undefined4)local_68);
    local_50 = *(undefined4 *)(param_2 + 0x20);
    local_70 = PTR_DAT_04bc4608 + 0x10;
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    local_60 = PTR_DAT_04bb2010 + 0x10;
    local_4c = *(undefined2 *)(param_2 + 0x24);
    local_68 = (char *)(CONCAT71(local_68._1_7_,bVar13) & 0xfffffffffffffffd);
    FUN_02a59660(lVar6,&local_70,param_3);
    if (**(long **)(param_1 + 0x18) == 1) {
      puVar1 = puVar3 + 0x10;
      local_68 = "CeremonyBuildBridge";
      local_70 = puVar1;
      uVar7 = FUN_0273f0a0(&local_70);
      if ((uVar7 & 1) == 0) {
        local_68 = "CeremonyBuildBridge";
        local_70 = puVar1;
        FUN_0273f3c4(&local_70,1);
        local_68 = "CeremonyBridgeUnitX";
        local_70 = puVar1;
        FUN_0273f3c4(&local_70,*(undefined4 *)(param_2 + 0x18));
        local_68 = "CeremonyBridgeUnitZ";
        local_70 = puVar1;
        FUN_0273f3c4(&local_70,*(undefined4 *)(param_2 + 0x1c));
      }
    }
    puVar1 = PTR_DAT_04bb5008;
    lVar6 = *(long *)PTR_DAT_04bb5008;
    uVar11 = (uint)*(ushort *)(param_2 + 0x24);
    if (*(int *)(param_2 + 0xc) != 0x1a) {
      uVar11 = 0;
    }
    uVar11 = uVar11 - *(ushort *)(lVar6 + 0xff0);
    if ((uVar11 < *(uint *)(lVar6 + 0xfd0)) &&
       (lVar6 = *(long *)(*(long *)(lVar6 + 0xfd8) + (long)(int)uVar11 * 8), lVar6 != 0)) {
      puVar8 = (ushort *)FUN_02a7ea90(lVar6,1,0xee9ce68d,*(undefined8 *)PTR_DAT_04bc4588);
      if (puVar8 == (ushort *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uint)*puVar8;
      }
    }
    else {
      uVar11 = 0xffff;
    }
    lVar6 = *(long *)puVar1;
    uVar11 = uVar11 - *(ushort *)(lVar6 + 0x11f0);
    if ((uVar11 < *(uint *)(lVar6 + 0x11d0)) &&
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x11d8) + (long)(int)uVar11 * 8), lVar6 != 0)) {
      puVar8 = (ushort *)FUN_0095fca0(lVar6,1,0xc33a894e,*(undefined8 *)PTR_DAT_04bc45c8);
      if (puVar8 == (ushort *)0x0) {
        uVar10 = 0xfffe;
      }
      else {
        uVar10 = *puVar8;
      }
      local_78 = (uint)uVar10;
      local_74 = 0;
      FUN_0277d4ac(&local_78);
    }
    else {
      local_78 = _DAT_05586008;
      local_74 = DAT_0558600c;
    }
    puVar1 = puVar3 + 0x10;
    local_68 = "BridgeBuilt";
    local_70 = puVar1;
    uVar7 = FUN_0273f0a0(&local_70);
    if ((uVar7 & 1) == 0) {
      local_68 = "BridgeBuilt";
      local_70 = puVar1;
      FUN_0273f3c4(&local_70,1);
      local_68 = "CountFirstBridgeAfterBuild";
      local_70 = puVar1;
      uVar5 = FUN_0273ef40(&local_70);
      local_68 = "CountFirstBridgeAfterBuild";
      local_70 = puVar1;
      FUN_0273f3c4(&local_70,uVar5);
      local_68 = "LE_BridgeBuilt_First";
    }
    else {
      local_68 = "LE_BridgeBuilt";
    }
LAB_02adf8f4:
    local_70 = puVar3 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb49a0;
    local_44 = FUN_006bd550(local_68,0);
    uVar9 = FUN_01b5b650(lVar6 + 0x238,&local_44);
    FUN_01b5e7c0(&local_70,&local_78,uVar9,0,0);
    bVar13 = 1;
LAB_02adf93c:
    iVar4 = *(int *)(param_2 + 0xc);
    if (iVar4 != 0) goto LAB_02adf9dc;
LAB_02adf9ec:
    if ((*(int *)(param_2 + 0xc) == 0) ||
       ((*(int *)(param_2 + 0xc) != 0x1b || (bVar2 = *(byte *)(param_2 + 8), (bVar2 & 1) != 0))))
    goto LAB_02adfb40;
  }
  else {
    local_68 = "BuiltTownOffice";
    local_70 = puVar1;
    iVar4 = FUN_0273ea30(&local_70);
    if (iVar4 != 0) {
      local_70 = puVar3 + 0x10;
      local_68 = "RcoBuildBridgeSlopeStatusCounter";
      iVar4 = FUN_0273ea30(&local_70);
      if (iVar4 == 3) goto LAB_02adf3ac;
    }
    local_68 = "BuiltTownOffice";
    local_70 = puVar3 + 0x10;
    iVar4 = FUN_0273ea30(&local_70);
    if (iVar4 != 0) {
      local_68 = "RcoBuildBridgeSlopeStatusCounter";
      local_70 = puVar3 + 0x10;
      iVar4 = FUN_0273ea30(&local_70);
      if (iVar4 == 4) {
        if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0xc) != 0x1a)) ||
           (bVar2 = *(byte *)(param_2 + 8), (bVar2 & 1) != 0)) {
          if (*(int *)(param_2 + 0xc) == 0) goto LAB_02adf9d0;
          bVar13 = 0;
          if ((*(int *)(param_2 + 0xc) != 0x1b) ||
             (bVar2 = *(byte *)(param_2 + 8), (bVar2 & 1) != 0)) goto LAB_02adf93c;
        }
        if (((bVar2 >> 1 & 1) != 0) && (lVar6 = *(long *)(*(long *)(param_1 + 8) + 8), lVar6 != 0))
        {
          if ((param_3 < *(uint *)(lVar6 + 0x48030)) &&
             (lVar12 = *(long *)(lVar6 + 0x48038), lVar12 != 0)) {
            if ((*(byte *)(lVar12 + (long)(int)param_3 * 0x718 + 8) >> 1 & 1) == 0) {
              lVar6 = *(long *)(lVar12 + (long)(int)param_3 * 0x718 + 0xc0);
              if (lVar6 != 0) {
                if ((*(long *)(lVar6 + 0xd8) != 0) &&
                   (*(char *)(*(long *)(lVar6 + 0xd8) + 0x48) != '\0')) {
                  local_70 = (undefined *)CONCAT44(local_70._4_4_,2);
                  lVar6 = lVar12 + (long)(int)param_3 * 0x718 + 0x6a8;
                  goto LAB_02adf998;
                }
                local_70 = (undefined *)CONCAT44(local_70._4_4_,4);
                if ((*(long *)(lVar6 + 0x90) != 0) &&
                   (*(char *)(*(long *)(lVar6 + 0x90) + 0x48) != '\0')) goto LAB_02adf974;
              }
              lVar6 = lVar12 + (long)(int)param_3 * 0x718 + 0x90;
            }
            else {
LAB_02adf974:
              local_70 = (undefined *)CONCAT44(local_70._4_4_,4);
              lVar6 = lVar12 + (long)(int)param_3 * 0x718 + 0x2b8;
LAB_02adf998:
              lVar6 = lVar6 + 0x28;
            }
            FUN_02b5c3a0(lVar6,0x6622bd46);
            lVar6 = *(long *)(*(long *)(param_1 + 8) + 8);
            if (lVar6 == 0) goto LAB_02adf9d0;
          }
          FUN_01361f00(lVar6,param_3);
        }
      }
    }
LAB_02adf9d0:
    bVar13 = 0;
    iVar4 = *(int *)(param_2 + 0xc);
    if (iVar4 == 0) goto LAB_02adf9ec;
LAB_02adf9dc:
    if ((iVar4 != 0x1a) || (bVar2 = *(byte *)(param_2 + 8), (bVar2 & 1) != 0)) goto LAB_02adf9ec;
  }
  uVar11 = (uint)bVar2;
  if (((bVar2 >> 1 & 1 & (bVar13 ^ 0xff)) == 0) &&
     (((lVar6 = *(long *)(*(long *)(param_1 + 8) + 8), lVar6 != 0 &&
       (param_3 < *(uint *)(lVar6 + 0x48030))) && (lVar6 = *(long *)(lVar6 + 0x48038), lVar6 != 0)))
     ) {
    if ((*(byte *)(lVar6 + (long)(int)param_3 * 0x718 + 8) >> 1 & 1) == 0) {
      lVar12 = *(long *)(lVar6 + (long)(int)param_3 * 0x718 + 0xc0);
      if (lVar12 != 0) {
        if ((*(long *)(lVar12 + 0xd8) != 0) && (*(char *)(*(long *)(lVar12 + 0xd8) + 0x48) != '\0'))
        {
          local_70 = (undefined *)CONCAT44(local_70._4_4_,2);
          lVar6 = lVar6 + (long)(int)param_3 * 0x718 + 0x6a8;
          goto LAB_02adfb00;
        }
        local_70 = (undefined *)CONCAT44(local_70._4_4_,4);
        if ((*(long *)(lVar12 + 0x90) != 0) && (*(char *)(*(long *)(lVar12 + 0x90) + 0x48) != '\0'))
        goto LAB_02adfadc;
      }
      lVar6 = lVar6 + (long)(int)param_3 * 0x718 + 0x90;
    }
    else {
LAB_02adfadc:
      local_70 = (undefined *)CONCAT44(local_70._4_4_,4);
      lVar6 = lVar6 + (long)(int)param_3 * 0x718 + 0x2b8;
LAB_02adfb00:
      lVar6 = lVar6 + 0x28;
    }
    FUN_02b5c3a0(lVar6,0x6622bd46);
    uVar11 = (uint)*(byte *)(param_2 + 8);
  }
  if (((uVar11 >> 2 & 1) != 0) && (lVar6 = *(long *)(*(long *)(param_1 + 8) + 8), lVar6 != 0)) {
    FUN_01361f00(lVar6,param_3);
  }
LAB_02adfb40:
  if (bVar13 != 0) {
    **(undefined1 **)(param_1 + 0x10) = 1;
  }
  return 1;
}

