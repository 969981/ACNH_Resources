
void FUN_0337bb84(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05737d38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05737d38), iVar1 != 0)) {
      DAT_05737cf8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05737d00 = "Pattern";
      DAT_05737d10 = &DAT_0407ebb1;
      DAT_05737d30 = &DAT_0407ebb1;
      DAT_05737d20 = &DAT_040d0d96;
      DAT_05737d08 = DAT_05737cf8;
      DAT_05737d18 = DAT_05737cf8;
      DAT_05737d28 = DAT_05737cf8;
      __cxa_guard_release(&DAT_05737d38);
    }
    if (((DAT_05737d50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05737d50), iVar1 != 0)) {
      DAT_05737d40 = 0x200000002;
      DAT_05737d48 = &DAT_05737cf8;
      __cxa_guard_release(&DAT_05737d50);
    }
    if (((DAT_05737e68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05737e68), iVar1 != 0)) {
      DAT_05737d58 = PTR_DAT_04bb2020 + 0x10;
      DAT_05737d60 = "@T_Header_00";
      DAT_05737d70 = "@T_FixedTitle_00";
      DAT_05737d80 = "@T_FixedUnit_00";
      DAT_05737d90 = "@T_InputNum_00";
      DAT_05737db0 = "@T_InputUnitBell_00";
      DAT_05737dc0 = "@T_ExvhangeNum_00";
      DAT_05737de0 = "@T_ExvhangePoki_00";
      DAT_05737da0 = "@T_InputUnitPoki_00";
      DAT_05737df0 = "@T_HaveUnit_00";
      DAT_05737dd0 = "@T_ExvhangeBell_00";
      DAT_05737e10 = "@T_RateTitle_01";
      DAT_05737e00 = "@T_LastNum_00";
      DAT_05737e20 = "@T_RateNum_00";
      DAT_05737e30 = "@T_RateUnit_00";
      DAT_05737e40 = "@T_RateEqual_00";
      DAT_05737e50 = "@T_RateNum_01";
      DAT_05737e60 = "@T_RateUnit_01";
      DAT_05737d68 = DAT_05737d58;
      DAT_05737d78 = DAT_05737d58;
      DAT_05737d88 = DAT_05737d58;
      DAT_05737d98 = DAT_05737d58;
      DAT_05737da8 = DAT_05737d58;
      DAT_05737db8 = DAT_05737d58;
      DAT_05737dc8 = DAT_05737d58;
      DAT_05737dd8 = DAT_05737d58;
      DAT_05737de8 = DAT_05737d58;
      DAT_05737df8 = DAT_05737d58;
      DAT_05737e08 = DAT_05737d58;
      DAT_05737e18 = DAT_05737d58;
      DAT_05737e28 = DAT_05737d58;
      DAT_05737e38 = DAT_05737d58;
      DAT_05737e48 = DAT_05737d58;
      DAT_05737e58 = DAT_05737d58;
      __cxa_guard_release(&DAT_05737e68);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b22be8;
      puStack_30 = &DAT_05737d40;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

