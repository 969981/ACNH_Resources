
void FUN_03380134(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05738040 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05738040), iVar1 != 0)) {
      DAT_05738020 = PTR_DAT_04bb2020 + 0x10;
      DAT_05738028 = &DAT_040d0d96;
      DAT_05738038 = &DAT_0407ebb1;
      DAT_05738030 = DAT_05738020;
      __cxa_guard_release(&DAT_05738040);
    }
    if (((DAT_05738058 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05738058), iVar1 != 0)) {
      DAT_05738048 = 0x100000002;
      DAT_05738050 = &DAT_05738020;
      __cxa_guard_release(&DAT_05738058);
    }
    if (((DAT_057380c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057380c0), iVar1 != 0)) {
      DAT_05738060 = PTR_DAT_04bb2020 + 0x10;
      DAT_05738068 = "@T_Header_00";
      DAT_05738088 = "@T_ResultNum_00";
      DAT_05738078 = "@T_InputNum_00";
      DAT_05738098 = "@T_ResultUnit_00";
      DAT_057380a8 = "@T_ResultTitle_00";
      DAT_057380b8 = "@T_InputUnit_00";
      DAT_05738070 = DAT_05738060;
      DAT_05738080 = DAT_05738060;
      DAT_05738090 = DAT_05738060;
      DAT_057380a0 = DAT_05738060;
      DAT_057380b0 = DAT_05738060;
      __cxa_guard_release(&DAT_057380c0);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b23118;
      puStack_30 = &DAT_05738048;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

