
void FUN_033744b4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05736c28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05736c28), iVar1 != 0)) {
      DAT_05736be8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05736bf0 = "State";
      DAT_05736c00 = &DAT_0407ebb1;
      DAT_05736c20 = &DAT_0407ebb1;
      DAT_05736c10 = &DAT_040d0d96;
      DAT_05736bf8 = DAT_05736be8;
      DAT_05736c08 = DAT_05736be8;
      DAT_05736c18 = DAT_05736be8;
      __cxa_guard_release(&DAT_05736c28);
    }
    if (((DAT_05736c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05736c40), iVar1 != 0)) {
      DAT_05736c30 = 0x200000002;
      DAT_05736c38 = &DAT_05736be8;
      __cxa_guard_release(&DAT_05736c40);
    }
    if (((DAT_05736cb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05736cb8), iVar1 != 0)) {
      DAT_05736c48 = PTR_DAT_04bb2020 + 0x10;
      DAT_05736c50 = "@T_Header_00";
      DAT_05736c80 = "@T_ResultUnit_00";
      DAT_05736c60 = "@T_InputNum_00";
      DAT_05736c70 = "@T_ResultNum_00";
      DAT_05736c90 = "@T_ResultTitle_00";
      DAT_05736ca0 = "@T_Colon_00";
      DAT_05736cb0 = "@T_InputUnit_00";
      DAT_05736c58 = DAT_05736c48;
      DAT_05736c68 = DAT_05736c48;
      DAT_05736c78 = DAT_05736c48;
      DAT_05736c88 = DAT_05736c48;
      DAT_05736c98 = DAT_05736c48;
      DAT_05736ca8 = DAT_05736c48;
      __cxa_guard_release(&DAT_05736cb8);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b21bb8;
      puStack_30 = &DAT_05736c30;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

