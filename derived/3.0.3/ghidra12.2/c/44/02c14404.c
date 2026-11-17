
void FUN_02c14404(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_0564bb10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0564bb10), iVar1 != 0)) {
      DAT_0564baf0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0564baf8 = "HappyBirthdayIn";
      DAT_0564bb08 = &DAT_0407ebb1;
      DAT_0564bb00 = DAT_0564baf0;
      __cxa_guard_release(&DAT_0564bb10);
    }
    if (((DAT_0564bb28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0564bb28), iVar1 != 0)) {
      DAT_0564bb18 = 0x100000002;
      DAT_0564bb20 = &DAT_0564baf0;
      __cxa_guard_release(&DAT_0564bb28);
    }
    if (((DAT_0564bb70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0564bb70), iVar1 != 0)) {
      DAT_0564bb30 = PTR_DAT_04bb2020 + 0x10;
      DAT_0564bb38 = "@T_Header_00";
      DAT_0564bb68 = "@T_Footer_00";
      DAT_0564bb48 = "@T_Main_00";
      DAT_0564bb58 = "@T_HappyBirthday_00";
      DAT_0564bb40 = DAT_0564bb30;
      DAT_0564bb50 = DAT_0564bb30;
      DAT_0564bb60 = DAT_0564bb30;
      __cxa_guard_release(&DAT_0564bb70);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04aada20;
      puStack_30 = &DAT_0564bb18;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

