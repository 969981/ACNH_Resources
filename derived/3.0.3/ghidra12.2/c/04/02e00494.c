
void FUN_02e00494(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05690ea8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05690ea8), iVar1 != 0)) {
      DAT_05690e68 = PTR_DAT_04bb2020 + 0x10;
      DAT_05690e70 = "TypeDIY";
      DAT_05690e80 = &DAT_0407ebb1;
      DAT_05690ea0 = &DAT_0407ebb1;
      DAT_05690e90 = "TypeMoreBtn";
      DAT_05690e78 = DAT_05690e68;
      DAT_05690e88 = DAT_05690e68;
      DAT_05690e98 = DAT_05690e68;
      __cxa_guard_release(&DAT_05690ea8);
    }
    if (((DAT_05690ec0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05690ec0), iVar1 != 0)) {
      DAT_05690eb0 = 0x200000002;
      DAT_05690eb8 = &DAT_05690e68;
      __cxa_guard_release(&DAT_05690ec0);
    }
    if (((DAT_05690ee8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05690ee8), iVar1 != 0)) {
      DAT_05690ec8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05690ed0 = "@T_Icon_00";
      DAT_05690ee0 = "@T_More_00";
      DAT_05690ed8 = DAT_05690ec8;
      __cxa_guard_release(&DAT_05690ee8);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04ace790;
      puStack_30 = &DAT_05690eb0;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

