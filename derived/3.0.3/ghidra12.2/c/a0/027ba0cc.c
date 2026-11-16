
/* WARNING: Removing unreachable block (ram,0x027ba47c) */
/* WARNING: Removing unreachable block (ram,0x027ba15c) */
/* WARNING: Removing unreachable block (ram,0x027ba4c8) */

void FUN_027ba0cc(uint *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *local_58;
  char *local_50;
  undefined4 local_44;
  
  puVar9 = PTR_DAT_04bb2020;
  if (*param_2 < 1) goto switchD_027ba12c_default;
  uVar3 = *param_1;
  if (5 < uVar3) {
    uVar3 = 0;
  }
  switch(uVar3) {
  case 1:
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) goto switchD_027ba12c_default;
    local_58 = PTR_DAT_04bc43f8 + 0x10;
    local_44 = 2;
    local_50 = (char *)CONCAT44(local_50._4_4_,DAT_05636e60);
    if ((DAT_05636e60 == 0) || (uVar5 = FUN_02a59140(puVar2,&local_58), (uVar5 & 1) == 0))
    goto switchD_027ba12c_default;
    *param_1 = 2;
    if (*param_2 == 1) {
      local_58 = PTR_DAT_04bb2020 + 0x10;
      local_50 = "MuseumTentBuiltToday";
      FUN_0273f3c4(&local_58,1);
    }
    puVar9 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "MuseumBuilt";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,1);
    local_50 = "FirstPlayAfterMuseumTentFlag";
    local_58 = puVar9;
    FUN_0274e338(&local_58,1);
    local_50 = "LE_FacilityBuilt_MuseumTent";
    break;
  case 2:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "MuseumGrowupEnable1";
    local_58 = puVar1;
    uVar5 = FUN_0273f0a0(&local_58);
    if ((uVar5 & 1) == 0) {
      local_50 = "MuseumConstruction1";
      local_58 = puVar1;
      iVar4 = FUN_0273ea30(&local_58);
      if (iVar4 < 1) goto switchD_027ba12c_default;
    }
    else {
      local_50 = "MuseumGrowupEnable1";
      local_58 = puVar1;
      FUN_0273f3c4(&local_58,0);
    }
    lVar7 = *param_2;
    puVar1 = puVar9 + 0x10;
    local_50 = "MuseumConstruction1";
    lVar8 = -lVar7;
    if (-1 < lVar7) {
      lVar8 = lVar7;
    }
    local_58 = puVar1;
    iVar4 = FUN_0273ea30(&local_58);
    lVar8 = lVar8 + iVar4;
    if (lVar8 < 2) {
      local_50 = "MuseumConstruction1";
      local_58 = puVar1;
      FUN_0273fd90(&local_58);
      local_50 = "MuseumConstruction1";
      local_58 = puVar1;
      iVar4 = FUN_0273ea30(&local_58);
      if (iVar4 != 1) goto switchD_027ba12c_default;
      local_50 = "MuseumConstructionToday";
LAB_027ba464:
      local_58 = puVar9 + 0x10;
      FUN_0273f3c4(&local_58,1);
      goto switchD_027ba12c_default;
    }
    *param_1 = 4;
    if (lVar8 == 2) {
      local_58 = puVar9 + 0x10;
      local_50 = "Museum3BuiltToday";
      FUN_0273f3c4(&local_58,1);
      iVar4 = 1;
    }
    else {
      iVar4 = (int)lVar8 + -1;
    }
    local_50 = "CountMuseum2AfterBuild";
    local_58 = puVar9 + 0x10;
    FUN_0273f3c4(&local_58,iVar4);
    puVar9 = puVar9 + 0x10;
    local_50 = "MuseumConstruction1";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,0);
    local_50 = "Museum2Built";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,1);
    local_50 = "Museum3Built";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,1);
    local_50 = "FirstPlayAfterMuseumBuilt2Flag";
    local_58 = puVar9;
    FUN_0274e338(&local_58,1);
    local_50 = "FoxAndShipReserveVer2";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,1);
    local_50 = "Museum2BuiltSkippedMuseum1";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,1);
    local_50 = "LE_FacilityBuilt_Museum";
    break;
  case 3:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "CountMuseumAfterBuild";
    local_58 = puVar1;
    FUN_0273fd90(&local_58);
    local_50 = "MuseumGrowupEnable2";
    local_58 = puVar1;
    uVar5 = FUN_0273f0a0(&local_58);
    if ((uVar5 & 1) == 0) {
      local_50 = "MuseumConstruction2";
      local_58 = puVar1;
      iVar4 = FUN_0273ea30(&local_58);
      if (iVar4 < 1) goto switchD_027ba12c_default;
    }
    else {
      local_50 = "MuseumGrowupEnable2";
      local_58 = puVar1;
      FUN_0273f3c4(&local_58,0);
    }
    lVar7 = *param_2;
    puVar1 = puVar9 + 0x10;
    local_50 = "MuseumConstruction2";
    lVar8 = -lVar7;
    if (-1 < lVar7) {
      lVar8 = lVar7;
    }
    local_58 = puVar1;
    iVar4 = FUN_0273ea30(&local_58);
    lVar8 = lVar8 + iVar4;
    if (lVar8 < 2) {
      local_50 = "MuseumConstruction2";
      local_58 = puVar1;
      FUN_0273fd90(&local_58);
      local_50 = "MuseumConstruction2";
      local_58 = puVar1;
      iVar4 = FUN_0273ea30(&local_58);
      if (iVar4 != 1) goto switchD_027ba12c_default;
      local_50 = "Museum2ConstructionToday";
      goto LAB_027ba464;
    }
    *param_1 = 4;
    if (lVar8 == 2) {
      local_58 = puVar9 + 0x10;
      local_50 = "Museum3BuiltToday";
      FUN_0273f3c4(&local_58,1);
      iVar4 = 1;
    }
    else {
      iVar4 = (int)lVar8 + -1;
    }
    local_50 = "CountMuseum2AfterBuild";
    local_58 = puVar9 + 0x10;
    FUN_0273f3c4(&local_58,iVar4);
    puVar9 = puVar9 + 0x10;
    local_50 = "MuseumConstruction2";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,0);
    local_50 = "Museum3Built";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,1);
    local_50 = "FirstPlayAfterMuseumBuilt2Flag";
    local_58 = puVar9;
    FUN_0274e338(&local_58,1);
    local_50 = "FoxAndShipReserve";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,1);
    local_50 = "LE_FacilityBuilt_Museum2";
    break;
  case 4:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "CountMuseum2AfterBuild";
    local_58 = puVar1;
    FUN_0273fd90(&local_58);
    local_50 = "MuseumCafeConstruction_1_Confirm";
    local_58 = puVar1;
    uVar5 = FUN_0273f0a0(&local_58);
    if ((uVar5 & 1) == 0) {
      local_50 = "MuseumConstruction3";
      local_58 = puVar1;
      iVar4 = FUN_0273ea30(&local_58);
      if (iVar4 < 1) goto switchD_027ba12c_default;
    }
    else {
      local_50 = "MuseumCafeConstruction_1_Confirm";
      local_58 = puVar1;
      FUN_0273f3c4(&local_58,0);
    }
    lVar7 = *param_2;
    puVar1 = puVar9 + 0x10;
    local_50 = "MuseumConstruction3";
    lVar8 = -lVar7;
    if (-1 < lVar7) {
      lVar8 = lVar7;
    }
    local_58 = puVar1;
    iVar4 = FUN_0273ea30(&local_58);
    lVar8 = lVar8 + iVar4;
    if (lVar8 < 2) {
      local_50 = "MuseumConstruction3";
      local_58 = puVar1;
      FUN_0273fd90(&local_58);
      local_50 = "MuseumConstruction3";
      local_58 = puVar1;
      iVar4 = FUN_0273ea30(&local_58);
      if (iVar4 != 1) goto switchD_027ba12c_default;
      local_50 = "MuseumCafeConstruction_2_ConstructionDay";
      goto LAB_027ba464;
    }
    *param_1 = 5;
    if (lVar8 == 2) {
      local_58 = puVar9 + 0x10;
      local_50 = "MuseumCafeConstruction_3_OpenDay";
      FUN_0273f3c4(&local_58,1);
      iVar4 = 1;
    }
    else {
      iVar4 = (int)lVar8 + -1;
    }
    local_50 = "MuseumCafeConstruction_5_OpenDaysCount";
    local_58 = puVar9 + 0x10;
    FUN_0273f3c4(&local_58,iVar4);
    puVar9 = puVar9 + 0x10;
    local_50 = "MuseumConstruction3";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,0);
    local_50 = "MuseumCafeConstruction_4_Opened";
    local_58 = puVar9;
    FUN_0273f3c4(&local_58,1);
    local_50 = "FirstPlayAfterMuseumBuilt3Flag";
    local_58 = puVar9;
    FUN_0274e338(&local_58,1);
    local_50 = "LE_FacilityBuilt_Cafe";
    break;
  case 5:
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "MuseumCafeConstruction_5_OpenDaysCount";
    FUN_0273fd90(&local_58);
  default:
    goto switchD_027ba12c_default;
  }
  lVar8 = *(long *)PTR_DAT_04bb49a0;
  local_58 = puVar9;
  local_44 = FUN_006bd550(local_50,0);
  uVar6 = FUN_01b5b650(lVar8 + 0x238,&local_44);
  FUN_01b5cf20(&local_58,uVar6,0,0,0);
switchD_027ba12c_default:
  uVar3 = *param_1;
  if (5 < uVar3) {
    uVar3 = 0;
  }
  if (3 < (int)uVar3) {
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "OwlWantsPainting";
    FUN_0273f3c4(&local_58,1);
  }
  return;
}

