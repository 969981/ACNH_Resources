
ulong FUN_0352b5e0(byte *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  byte local_8 [4];
  byte local_4 [4];
  
  ppuVar5 = &local_40;
  local_8[0] = *param_1;
  if (7 < local_8[0]) {
    local_8[0] = 0xff;
  }
  uVar3 = 1;
  local_4[0] = local_8[0];
  switch(param_2) {
  case 0:
  case 1:
    goto switchD_0352b62c_caseD_0;
  case 2:
    pcStack_28 = "GetLicenseGrdStone";
    break;
  case 3:
    pcStack_28 = "GetLicenseGrdBrick";
    break;
  case 4:
    pcStack_28 = "GetLicenseGrdDarkSoil";
    break;
  case 5:
    pcStack_28 = "GetLicenseGrdStonePattern";
    break;
  case 6:
    pcStack_28 = "GetLicenseGrdSand";
    break;
  case 7:
    pcStack_28 = "GetLicenseGrdTile";
    break;
  case 8:
    pcStack_28 = "GetLicenseGrdWood";
    break;
  case 9:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "GetLicenseGrdMydesign";
    local_30 = puVar1;
    uVar3 = FUN_0274bce0(local_8,&local_30);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    pbVar4 = local_8;
    pcStack_38 = "MainmenuMydesign";
    local_40 = puVar1;
    goto LAB_0352b6b8;
  default:
    uVar3 = 0;
    goto switchD_0352b62c_caseD_0;
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pbVar4 = local_4;
  ppuVar5 = &local_30;
LAB_0352b6b8:
  iVar2 = FUN_0274bce0(pbVar4,ppuVar5);
  uVar3 = (ulong)(iVar2 != 0);
switchD_0352b62c_caseD_0:
  return uVar3;
}

