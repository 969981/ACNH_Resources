
void FUN_0355b554(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_0576da48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576da48), iVar1 != 0)) {
      DAT_0576da08 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576da10 = "ThemeType";
      DAT_0576da20 = &DAT_0407ebb1;
      DAT_0576da40 = &DAT_0407ebb1;
      DAT_0576da30 = "ThemeOnOff";
      DAT_0576da18 = DAT_0576da08;
      DAT_0576da28 = DAT_0576da08;
      DAT_0576da38 = DAT_0576da08;
      __cxa_guard_release(&DAT_0576da48);
    }
    if (((DAT_0576da60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576da60), iVar1 != 0)) {
      DAT_0576da50 = 0x200000002;
      DAT_0576da58 = &DAT_0576da08;
      __cxa_guard_release(&DAT_0576da60);
    }
    if (((DAT_0576da88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576da88), iVar1 != 0)) {
      DAT_0576da68 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576da70 = "@T_Text_00";
      DAT_0576da80 = "@T_Room_00";
      DAT_0576da78 = DAT_0576da68;
      __cxa_guard_release(&DAT_0576da88);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b39338;
      puStack_30 = &DAT_0576da50;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

