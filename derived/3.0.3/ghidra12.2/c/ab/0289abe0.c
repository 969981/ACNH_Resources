
/* WARNING: Removing unreachable block (ram,0x0289acd8) */
/* WARNING: Removing unreachable block (ram,0x0289acd0) */
/* WARNING: Removing unreachable block (ram,0x0289ad24) */

void FUN_0289abe0(uint *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *local_50;
  char *local_48;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb2020;
  if (*param_2 < 1) {
    return;
  }
  uVar4 = *param_1;
  if (2 < uVar4) {
    uVar4 = 0;
  }
  if (uVar4 == 2) {
    local_48 = "CountTailorAfterBuild";
  }
  else {
    if (uVar4 != 1) {
      return;
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "TailorConstruction1";
    local_50 = puVar1;
    uVar6 = FUN_0273f0a0(&local_50);
    if ((uVar6 & 1) == 0) {
      puVar3 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
        puVar3 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
      }
      if (puVar3[1] == 0) {
        return;
      }
      local_50 = PTR_DAT_04bc43f8 + 0x10;
      local_24 = 5;
      local_48 = (char *)CONCAT44(local_48._4_4_,DAT_05636e6c);
      if (DAT_05636e6c == 0) {
        return;
      }
      uVar6 = FUN_02a59140(puVar3,&local_50);
      if ((uVar6 & 1) == 0) {
        return;
      }
    }
    else {
      local_48 = "TailorConstruction1";
      local_50 = puVar1;
      iVar5 = FUN_0273ea30(&local_50);
      if (iVar5 < 1) {
        return;
      }
    }
    lVar8 = *param_2;
    local_50 = puVar2 + 0x10;
    local_48 = "TailorConstruction1";
    lVar9 = -lVar8;
    if (-1 < lVar8) {
      lVar9 = lVar8;
    }
    iVar5 = FUN_0273ea30(&local_50);
    lVar9 = lVar9 + iVar5;
    if (1 < lVar9) {
      *param_1 = 2;
      if (lVar9 == 2) {
        local_50 = puVar2 + 0x10;
        local_48 = "TailorBuiltToday";
        FUN_0273f3c4(&local_50,1);
        iVar5 = 1;
      }
      else {
        iVar5 = (int)lVar9 + -1;
      }
      local_48 = "CountTailorAfterBuild";
      local_50 = puVar2 + 0x10;
      FUN_0273f3c4(&local_50,iVar5);
      puVar2 = puVar2 + 0x10;
      local_48 = "TailorConstruction1";
      local_50 = puVar2;
      FUN_0273f3c4(&local_50,0);
      local_48 = "TailorBuilt";
      local_50 = puVar2;
      FUN_0273f3c4(&local_50,1);
      local_48 = "FirstPlayAfterTailorBuiltFlag";
      local_50 = puVar2;
      FUN_0274e338(&local_50,1);
      lVar9 = *(long *)PTR_DAT_04bb49a0;
      local_48 = "LE_FacilityBuilt_Tailor";
      local_50 = puVar2;
      local_24 = FUN_006bd550("LE_FacilityBuilt_Tailor",0);
      uVar7 = FUN_01b5b650(lVar9 + 0x238,&local_24);
      FUN_01b5cf20(&local_50,uVar7,0,0,0);
      return;
    }
    local_48 = "TailorConstruction1";
  }
  local_50 = puVar2 + 0x10;
  FUN_0273fd90(&local_50);
  return;
}

