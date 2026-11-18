
void FUN_033e03c4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05748ee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05748ee0), iVar1 != 0)) {
      DAT_05748e60 = PTR_DAT_04bb2020 + 0x10;
      DAT_05748e68 = "ThemeWait";
      DAT_05748e78 = &DAT_0407ebb1;
      DAT_05748e98 = &DAT_0407ebb1;
      DAT_05748eb8 = &DAT_0407ebb1;
      DAT_05748e88 = &DAT_040dd778;
      DAT_05748ea8 = "TitleOnOff";
      DAT_05748ec8 = "ThemeWait2";
      DAT_05748ed8 = &DAT_0407ebb1;
      DAT_05748e70 = DAT_05748e60;
      DAT_05748e80 = DAT_05748e60;
      DAT_05748e90 = DAT_05748e60;
      DAT_05748ea0 = DAT_05748e60;
      DAT_05748eb0 = DAT_05748e60;
      DAT_05748ec0 = DAT_05748e60;
      DAT_05748ed0 = DAT_05748e60;
      __cxa_guard_release(&DAT_05748ee0);
    }
    if (((DAT_05748ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05748ef8), iVar1 != 0)) {
      DAT_05748ee8 = 0x400000002;
      DAT_05748ef0 = &DAT_05748e60;
      __cxa_guard_release(&DAT_05748ef8);
    }
    if (((DAT_05748f20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05748f20), iVar1 != 0)) {
      DAT_05748f00 = PTR_DAT_04bb2020 + 0x10;
      DAT_05748f08 = "@T_Title_00";
      DAT_05748f18 = "@T_Text_00";
      DAT_05748f10 = DAT_05748f00;
      __cxa_guard_release(&DAT_05748f20);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b26f98;
      puStack_30 = &DAT_05748ee8;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

