
void FUN_033766c4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05736e88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05736e88), iVar1 != 0)) {
      DAT_05736e48 = PTR_DAT_04bb2020 + 0x10;
      DAT_05736e50 = "Pattern";
      DAT_05736e60 = &DAT_0407ebb1;
      DAT_05736e80 = &DAT_0407ebb1;
      DAT_05736e70 = &DAT_040d0d96;
      DAT_05736e58 = DAT_05736e48;
      DAT_05736e68 = DAT_05736e48;
      DAT_05736e78 = DAT_05736e48;
      __cxa_guard_release(&DAT_05736e88);
    }
    if (((DAT_05736ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05736ea0), iVar1 != 0)) {
      DAT_05736e90 = 0x200000002;
      DAT_05736e98 = &DAT_05736e48;
      __cxa_guard_release(&DAT_05736ea0);
    }
    if (((DAT_05736f18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05736f18), iVar1 != 0)) {
      DAT_05736ea8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05736eb0 = "@T_Header_00";
      DAT_05736ee0 = "@T_HaveTitle_00";
      DAT_05736ec0 = "@T_FixedTitle_00";
      DAT_05736ed0 = "@T_FixedUnit_00";
      DAT_05736ef0 = "@T_HaveUnit_00";
      DAT_05736f00 = "@T_InputNum_00";
      DAT_05736f10 = "@T_InputUnit_00";
      DAT_05736eb8 = DAT_05736ea8;
      DAT_05736ec8 = DAT_05736ea8;
      DAT_05736ed8 = DAT_05736ea8;
      DAT_05736ee8 = DAT_05736ea8;
      DAT_05736ef8 = DAT_05736ea8;
      DAT_05736f08 = DAT_05736ea8;
      __cxa_guard_release(&DAT_05736f18);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b22138;
      puStack_30 = &DAT_05736e90;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

