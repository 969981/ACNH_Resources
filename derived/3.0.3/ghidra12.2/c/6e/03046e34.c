
void FUN_03046e34(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_056dc750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dc750), iVar1 != 0)) {
      DAT_056dc6b0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dc6b8 = "CategoryType";
      DAT_056dc6c8 = &DAT_0407ebb1;
      DAT_056dc6e8 = &DAT_0407ebb1;
      DAT_056dc708 = &DAT_0407ebb1;
      DAT_056dc6d8 = "Share";
      DAT_056dc6f8 = &DAT_040fe5ab;
      DAT_056dc718 = "State";
      DAT_056dc728 = &DAT_0407ebb1;
      DAT_056dc738 = "NormalPro";
      DAT_056dc748 = &DAT_0407ebb1;
      DAT_056dc6c0 = DAT_056dc6b0;
      DAT_056dc6d0 = DAT_056dc6b0;
      DAT_056dc6e0 = DAT_056dc6b0;
      DAT_056dc6f0 = DAT_056dc6b0;
      DAT_056dc700 = DAT_056dc6b0;
      DAT_056dc710 = DAT_056dc6b0;
      DAT_056dc720 = DAT_056dc6b0;
      DAT_056dc730 = DAT_056dc6b0;
      DAT_056dc740 = DAT_056dc6b0;
      __cxa_guard_release(&DAT_056dc750);
    }
    if (((DAT_056dc768 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dc768), iVar1 != 0)) {
      DAT_056dc758 = 0x500000002;
      DAT_056dc760 = &DAT_056dc6b0;
      __cxa_guard_release(&DAT_056dc768);
    }
    if (((DAT_056dc810 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dc810), iVar1 != 0)) {
      DAT_056dc770 = PTR_DAT_04bb2020 + 0x10;
      DAT_056dc778 = "@T_Title_00";
      DAT_056dc7a8 = "@T_PlayerID_00";
      DAT_056dc788 = "@T_R_00";
      DAT_056dc798 = "@T_L_00";
      DAT_056dc7b8 = "@T_Title_01";
      DAT_056dc7c8 = "@T_UseName_00";
      DAT_056dc7d8 = "@T_UseType_00";
      DAT_056dc7e8 = "@T_Keyword_00";
      DAT_056dc7f8 = "@T_NotSpecifiedUse_00";
      DAT_056dc808 = "@T_NotSpecifiedKeyword_00";
      DAT_056dc780 = DAT_056dc770;
      DAT_056dc790 = DAT_056dc770;
      DAT_056dc7a0 = DAT_056dc770;
      DAT_056dc7b0 = DAT_056dc770;
      DAT_056dc7c0 = DAT_056dc770;
      DAT_056dc7d0 = DAT_056dc770;
      DAT_056dc7e0 = DAT_056dc770;
      DAT_056dc7f0 = DAT_056dc770;
      DAT_056dc800 = DAT_056dc770;
      __cxa_guard_release(&DAT_056dc810);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04af5f40;
      puStack_30 = &DAT_056dc758;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

