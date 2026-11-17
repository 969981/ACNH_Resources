
void FUN_03054e54(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_056dcfd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcfd0), iVar1 != 0)) {
      DAT_056dcf10 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dcf18 = &DAT_040fe5ab;
      DAT_056dcf28 = &DAT_0407ebb1;
      DAT_056dcf48 = &DAT_0407ebb1;
      DAT_056dcf68 = &DAT_0407ebb1;
      DAT_056dcf38 = "PlayerIconType";
      DAT_056dcf58 = "RotateGuide";
      DAT_056dcf78 = "Favorite";
      DAT_056dcf98 = "EquipIn";
      DAT_056dcf88 = &DAT_0407ebb1;
      DAT_056dcfa8 = &DAT_0407ebb1;
      DAT_056dcfb8 = "EquipOut";
      DAT_056dcfc8 = &DAT_0407ebb1;
      DAT_056dcf20 = DAT_056dcf10;
      DAT_056dcf30 = DAT_056dcf10;
      DAT_056dcf40 = DAT_056dcf10;
      DAT_056dcf50 = DAT_056dcf10;
      DAT_056dcf60 = DAT_056dcf10;
      DAT_056dcf70 = DAT_056dcf10;
      DAT_056dcf80 = DAT_056dcf10;
      DAT_056dcf90 = DAT_056dcf10;
      DAT_056dcfa0 = DAT_056dcf10;
      DAT_056dcfb0 = DAT_056dcf10;
      DAT_056dcfc0 = DAT_056dcf10;
      __cxa_guard_release(&DAT_056dcfd0);
    }
    if (((DAT_056dcfe8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcfe8), iVar1 != 0)) {
      DAT_056dcfd8 = 0x600000002;
      DAT_056dcfe0 = &DAT_056dcf10;
      __cxa_guard_release(&DAT_056dcfe8);
    }
    if (((DAT_056dd070 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dd070), iVar1 != 0)) {
      DAT_056dcff0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dcff8 = "@T_IslandName_00";
      DAT_056dd008 = "@T_PlayerName_00";
      DAT_056dd018 = "@T_UseName_00";
      DAT_056dd028 = "@T_PlayerTitle_00";
      DAT_056dd038 = "@T_MyDesignID_00";
      DAT_056dd048 = "@T_PlayerID_00";
      DAT_056dd058 = "@T_RStick_01";
      DAT_056dd068 = "@T_UseTitle_00";
      DAT_056dd000 = DAT_056dcff0;
      DAT_056dd010 = DAT_056dcff0;
      DAT_056dd020 = DAT_056dcff0;
      DAT_056dd030 = DAT_056dcff0;
      DAT_056dd040 = DAT_056dcff0;
      DAT_056dd050 = DAT_056dcff0;
      DAT_056dd060 = DAT_056dcff0;
      __cxa_guard_release(&DAT_056dd070);
    }
    if (((DAT_056dd0a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dd0a8), iVar1 != 0)) {
      DAT_056dd078 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dd080 = "N_Center_01";
      DAT_056dd0a0 = "N_Capture_01";
      DAT_056dd090 = "N_Capture_00";
      DAT_056dd088 = DAT_056dd078;
      DAT_056dd098 = DAT_056dd078;
      __cxa_guard_release(&DAT_056dd0a8);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_38 = &DAT_04af7378;
      puStack_30 = &DAT_056dcfd8;
      local_28 = 0;
      puStack_40 = &DAT_04af7388;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

