
void FUN_033e6a14(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05749e78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05749e78), iVar1 != 0)) {
      DAT_05749e58 = PTR_DAT_04bb2020 + 0x10;
      DAT_05749e60 = "ThemeWait";
      DAT_05749e70 = &DAT_0407ebb1;
      DAT_05749e68 = DAT_05749e58;
      __cxa_guard_release(&DAT_05749e78);
    }
    if (((DAT_05749e90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05749e90), iVar1 != 0)) {
      DAT_05749e80 = 0x100000002;
      DAT_05749e88 = &DAT_05749e58;
      __cxa_guard_release(&DAT_05749e90);
    }
    if (((DAT_05749ea8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05749ea8), iVar1 != 0)) {
      DAT_05749e98 = PTR_DAT_04bb2020 + 0x10;
      DAT_05749ea0 = "@T_Text_00";
      __cxa_guard_release(&DAT_05749ea8);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b27e68;
      puStack_30 = &DAT_05749e80;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

