
void FUN_022c1a90(byte *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  short sVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  char *local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bbbc68;
  lVar13 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar13 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)))))) {
    uVar8 = FUN_0277d6c4(param_3);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      FUN_0124c030(&local_58,param_3);
      uVar11 = FUN_0123d890(local_48,4);
      if (((uVar11 & 1) != 0) && (uVar11 = FUN_0123d890(local_48,0), (uVar11 & 1) == 0)) {
        local_68 = PTR_DAT_04bb2020 + 0x10;
        pcStack_60 = "EDReplantTree";
        FUN_0279b044(param_1,&local_68,1);
      }
    }
  }
  puVar7 = PTR_DAT_04bb2020;
  switch(param_2) {
  case 1:
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "PlantTreeSeedling";
    FUN_0279b044(param_1,&local_58,1);
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 == -1) {
LAB_022c1c18:
      lVar13 = **(long **)PTR_DAT_04bb27d0;
      if (*(byte *)(lVar13 + 0x476) < 2) {
LAB_022c1c5c:
        if (7 < *param_1) goto LAB_022c2050;
      }
      else {
        bVar5 = *(byte *)(lVar13 + 0x473);
        if ((long)(char)bVar5 == 0xffffffffffffffff) goto LAB_022c1c5c;
        pbVar4 = (byte *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
        if (7 < bVar5) {
          pbVar4 = (byte *)(lVar13 + 0x48);
        }
        if ((*pbVar4 >> 3 & 1) == 0) goto LAB_022c1c5c;
        if (*(byte *)(lVar13 + 0x472) != bVar5 || 7 < *param_1) goto LAB_022c2050;
      }
      uVar8 = FUN_02582d8c(param_1,1);
      if (((uVar8 < 8) &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0')) {
        local_58 = puVar7 + 0x10;
        local_50 = "PlantTreeSeedling";
        FUN_0279a9f0(param_1,&local_58,1);
      }
    }
    else {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,0x11);
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x11 & 1) == 0) goto LAB_022c1c18;
    }
LAB_022c2050:
    local_50 = "PE_PlantTreeSeedlings";
    break;
  case 2:
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "PlantBambooShoot";
    FUN_0279b044(param_1,&local_58,1);
    local_50 = "PlanBambooshoot";
    goto LAB_022c1d74;
  case 3:
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "PlantFruit";
    FUN_0279b044(param_1,&local_58,1);
    iVar9 = FUN_0277d6c4(param_3);
    if (iVar9 != 0xeabf) {
      return;
    }
    uVar11 = FUN_00976070(param_4);
    if ((uVar11 & 1) == 0) {
      return;
    }
    local_58 = puVar7 + 0x10;
    local_50 = "EDPlantPalm";
    FUN_0279b044(param_1,&local_58,1);
    local_50 = "PlanPalmSeedOnSand";
LAB_022c1d74:
    local_58 = puVar7 + 0x10;
    FUN_0274ca70(param_1,&local_58,1);
    return;
  case 4:
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "PlantFlowerSeed";
    FUN_0279b044(param_1,&local_58,1);
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 == -1) {
LAB_022c1e04:
      lVar13 = **(long **)PTR_DAT_04bb27d0;
      if (*(byte *)(lVar13 + 0x476) < 2) {
LAB_022c1e48:
        if (7 < *param_1) goto LAB_022c2070;
      }
      else {
        bVar5 = *(byte *)(lVar13 + 0x473);
        if ((long)(char)bVar5 == 0xffffffffffffffff) goto LAB_022c1e48;
        pbVar4 = (byte *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
        if (7 < bVar5) {
          pbVar4 = (byte *)(lVar13 + 0x48);
        }
        if ((*pbVar4 >> 3 & 1) == 0) goto LAB_022c1e48;
        if (*(byte *)(lVar13 + 0x472) != bVar5 || 7 < *param_1) goto LAB_022c2070;
      }
      uVar8 = FUN_02582d8c(param_1,1);
      if (((uVar8 < 8) &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0')) {
        local_58 = puVar7 + 0x10;
        local_50 = "PlantFlowerSeed";
        FUN_0279a9f0(param_1,&local_58,1);
      }
    }
    else {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,0x11);
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x11 & 1) == 0) goto LAB_022c1e04;
    }
LAB_022c2070:
    lVar13 = *(long *)puVar2;
    if (((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
         ((*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0 &&
          ((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0))))))
        && (*(long *)(lVar13 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)) {
      uVar8 = FUN_0277d6c4(param_3);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        FUN_0124c030(&local_58,param_3);
        uVar10 = FUN_0123db50(&local_50,local_48);
        switch(uVar10) {
        case 0x23:
          local_68 = puVar7 + 0x10;
          pcStack_60 = "EDPlantCosmos";
          FUN_0279b044(param_1,&local_68,1);
          pcStack_60 = "EDPlantCosmosSP";
          break;
        case 0x24:
          local_68 = puVar7 + 0x10;
          pcStack_60 = "EDPlantTulip";
          FUN_0279b044(param_1,&local_68,1);
          pcStack_60 = "EDPlantTulipSP";
          break;
        case 0x25:
          local_68 = puVar7 + 0x10;
          pcStack_60 = "EDPlantPansy";
          FUN_0279b044(param_1,&local_68,1);
          pcStack_60 = "EDPlantPansySP";
          break;
        case 0x26:
          local_68 = puVar7 + 0x10;
          pcStack_60 = "EDPlantRose";
          FUN_0279b044(param_1,&local_68,1);
          pcStack_60 = "EDPlantRoseSP";
          break;
        case 0x27:
          local_68 = puVar7 + 0x10;
          pcStack_60 = "EDPlantYuri";
          FUN_0279b044(param_1,&local_68,1);
          pcStack_60 = "EDPlantYuriSP";
          break;
        case 0x28:
          local_68 = puVar7 + 0x10;
          pcStack_60 = "EDPlantAnemones";
          FUN_0279b044(param_1,&local_68,1);
          pcStack_60 = "EDPlantAnemonesSP";
          break;
        case 0x29:
          local_68 = puVar7 + 0x10;
          pcStack_60 = "EDPlantMum";
          FUN_0279b044(param_1,&local_68,1);
          pcStack_60 = "EDPlantMumSP";
          break;
        case 0x2a:
          local_68 = puVar7 + 0x10;
          pcStack_60 = "EDPlantHyacinth";
          FUN_0279b044(param_1,&local_68,1);
          pcStack_60 = "EDPlantHyacinthSP";
          break;
        default:
          goto switchD_022c1b9c_default;
        }
        local_68 = puVar7 + 0x10;
        FUN_0279b044(param_1,&local_68,1);
      }
    }
    local_50 = "PE_PlantFlowerSeed";
    break;
  case 5:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "PlantTreeSeedling";
    local_58 = puVar1;
    FUN_0279b044(param_1,&local_58,1);
    FUN_0124c030(&local_58,param_3);
    iVar9 = FUN_0123db50(&local_50,local_48);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar9);
    if (iVar9 - 0xbU < 7) {
      pcStack_60 = "PlantBushSeedling";
      local_68 = puVar1;
      FUN_0279a9f0(param_1,&local_68,1);
    }
    lVar13 = *(long *)puVar2;
    if ((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
       (((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)) &&
        ((*(long *)(lVar13 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)))))) {
      uVar8 = FUN_0277d6c4(param_3);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        FUN_0124c030(&local_58,param_3);
        iVar9 = FUN_0123db50(&local_50,local_48);
        if (iVar9 - 0xbU < 7) {
          local_68 = puVar7 + 0x10;
          pcStack_60 = "EDPlantShrub";
          FUN_0279b044(param_1,&local_68,1);
        }
      }
    }
    local_50 = "PE_PlantShrubSeedlings";
    break;
  case 6:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "PlantVegetable";
    local_58 = puVar2;
    FUN_0279b044(param_1,&local_58,1);
    local_50 = "PlantVegetableSeedling";
    local_58 = puVar2;
    FUN_0279a9f0(param_1,&local_58,1);
    local_50 = "PE_PlantVegetableSeedlings";
    break;
  default:
    goto switchD_022c1b9c_default;
  }
  local_58 = puVar7 + 0x10;
  uVar12 = *(undefined8 *)PTR_DAT_04bb49a0;
  uVar10 = FUN_006bd550(local_50,0);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar10);
  uVar12 = FUN_01b5b4b0(uVar12,&local_68);
  FUN_01b5e0b0(&local_58,param_3,uVar12,param_1,0);
switchD_022c1b9c_default:
  return;
}

