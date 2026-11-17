
undefined8 FUN_02f5fff8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  if (param_2 == -1) {
    return 0;
  }
  param_1 = param_1 + 0x1f8;
  uVar3 = FUN_02f5a2f0(param_2);
  puVar2 = PTR_DAT_04bb2020;
  if (-1 < (int)uVar3) {
    switch(param_2) {
    case 1:
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "Encylopedia_DiveFishMes";
      iVar4 = FUN_0274bce0(param_1,&local_50);
      if (iVar4 == 0) {
        return 2;
      }
      goto switchD_02f6024c_caseD_1;
    case 2:
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "MainmenuUnlockMydesingPro";
      local_50 = puVar1;
      iVar4 = FUN_0274bce0(param_1,&local_50);
      if (iVar4 != 0) {
        pcStack_48 = "Mobile1stBootAfterUnlockPro_Mydesign";
        local_50 = puVar1;
        iVar4 = FUN_0274bce0(param_1,&local_50);
        if (iVar4 == 0) {
          return 2;
        }
      }
      pcStack_48 = "UnlockMydesignPro2";
      local_50 = puVar1;
      iVar4 = FUN_0274bce0(param_1,&local_50);
      if (iVar4 != 0) {
        local_50 = puVar2 + 0x10;
        pcStack_48 = "ExplainMydesignPro2";
        iVar4 = FUN_0274bce0(param_1,&local_50);
        if (iVar4 == 0) {
          return 2;
        }
      }
      pcStack_48 = "MainmenuMydesignShowcase";
      local_50 = puVar2 + 0x10;
      iVar4 = FUN_0274bce0(param_1,&local_50);
      if (iVar4 != 0) {
        pcStack_58 = "Mobile1stBoot_MydesignShowcase";
        local_60 = puVar2 + 0x10;
        iVar4 = FUN_0274bce0(param_1,&local_60);
        if (iVar4 == 0) {
          return 2;
        }
      }
      local_50 = puVar2 + 0x10;
      pcStack_48 = "MainmenuMydesignPatternPlus";
      iVar4 = FUN_0274bce0(param_1,&local_50);
      if (iVar4 != 0) {
        pcStack_58 = "Mobile1stBoot_MydesignPatternPlus";
LAB_02f601e0:
        local_60 = puVar2 + 0x10;
        iVar4 = FUN_0274bce0(param_1,&local_60);
joined_r0x02f601a8:
        if (iVar4 == 0) {
          return 2;
        }
      }
      break;
    case 8:
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "MainmenuCamera1stPersonView";
      local_50 = puVar2;
      iVar4 = FUN_0274bce0(param_1,&local_50);
      if (iVar4 != 0) {
        pcStack_48 = "Mobile1stBoot_Camera1stPersonView";
        local_50 = puVar2;
        iVar4 = FUN_0274bce0(param_1,&local_50);
        goto joined_r0x02f601a8;
      }
      break;
    case 0xf:
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "WHEREAREN_Unlock_ResortPlannerAppNetwork";
      iVar4 = FUN_0274bce0(param_1,&local_50);
      if (iVar4 != 0) {
        pcStack_58 = "WHEREAREN_NoticeAboutResortPlannnerAppNet";
        goto LAB_02f601e0;
      }
    }
    if ((*(char *)(&DAT_056c6848)[(ulong)uVar3 * 7] != '\0') &&
       (iVar4 = FUN_0274bce0(param_1,&DAT_056c6840 + (ulong)uVar3 * 7), iVar4 == 0)) {
      return 2;
    }
  }
  puVar1 = PTR_DAT_04bb46f0;
  puVar2 = PTR_DAT_04bb2020;
  switch(param_2) {
  case 1:
switchD_02f6024c_caseD_1:
    uVar5 = FUN_033fcd00(param_1);
    break;
  default:
    goto switchD_02f6024c_caseD_2;
  case 3:
    if (*(long *)PTR_DAT_04bb46f0 == 0) {
      return 0;
    }
    uVar5 = FUN_02630410(param_1,*(long *)PTR_DAT_04bb46f0 + 0xe98e0);
    break;
  case 4:
    lVar6 = 0;
    if (*(long *)PTR_DAT_04bb46f0 != 0) {
      uVar5 = FUN_02630410(param_1,*(long *)PTR_DAT_04bb46f0 + 0xe98e0);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      lVar6 = *(long *)puVar1;
    }
    uVar5 = FUN_02630410(param_1,lVar6 + 0xe99e0);
    break;
  case 6:
    uVar5 = FUN_027a2580(param_1,1);
    goto joined_r0x02f60304;
  case 7:
    uVar5 = FUN_027a2580(param_1,1);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar5 = FUN_027a1cb0(param_1);
joined_r0x02f60304:
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    return 1;
  case 0xc:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "FriendListMainSwitch";
    local_50 = puVar1;
    iVar4 = FUN_0274bce0(param_1,&local_50);
    if (iVar4 == 0) {
      return 0;
    }
    pcStack_48 = "FriendListNotifyUpdate";
    local_50 = puVar1;
    iVar4 = FUN_0274bce0(param_1,&local_50);
    if (iVar4 != 0) {
      return 1;
    }
    local_50 = puVar2 + 0x10;
    pcStack_48 = "FriendListNotifyLook";
    iVar4 = FUN_0274bce0(param_1,&local_50);
    if (iVar4 == 0) {
      return 0;
    }
    return 1;
  case 0xe:
    if (*(long *)PTR_DAT_04bb5030 == 0) {
      return 0;
    }
    if (*(char *)(*(long *)PTR_DAT_04bb5030 + 0x112) == '\0') {
      return 0;
    }
    return 1;
  case 0x11:
    uVar5 = FUN_033fd110(param_1);
  }
  if ((uVar5 & 1) != 0) {
    return 1;
  }
switchD_02f6024c_caseD_2:
  return 0;
}

