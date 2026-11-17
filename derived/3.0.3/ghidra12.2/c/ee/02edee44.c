
void FUN_02edee44(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_056b2a88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b2a88), iVar1 != 0)) {
      DAT_056b2a68 = PTR_DAT_04bb2020 + 0x10;
      DAT_056b2a70 = &DAT_040d0d96;
      DAT_056b2a80 = &DAT_0407ebb1;
      DAT_056b2a78 = DAT_056b2a68;
      __cxa_guard_release(&DAT_056b2a88);
    }
    if (((DAT_056b2aa0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b2aa0), iVar1 != 0)) {
      DAT_056b2a90 = 0x100000002;
      DAT_056b2a98 = &DAT_056b2a68;
      __cxa_guard_release(&DAT_056b2aa0);
    }
    if (((DAT_056b2b28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b2b28), iVar1 != 0)) {
      DAT_056b2aa8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056b2ab0 = "@T_Header_00";
      DAT_056b2ac0 = "@T_LastNum_00";
      DAT_056b2ad0 = "@T_InputNum_00";
      DAT_056b2ae0 = "@T_ResultNum_00";
      DAT_056b2af0 = "@T_ResultUnit_00";
      DAT_056b2b00 = "@T_ResultTitle_00";
      DAT_056b2b10 = "@T_Colon_00";
      DAT_056b2b20 = "@T_InputUnit_00";
      DAT_056b2ab8 = DAT_056b2aa8;
      DAT_056b2ac8 = DAT_056b2aa8;
      DAT_056b2ad8 = DAT_056b2aa8;
      DAT_056b2ae8 = DAT_056b2aa8;
      DAT_056b2af8 = DAT_056b2aa8;
      DAT_056b2b08 = DAT_056b2aa8;
      DAT_056b2b18 = DAT_056b2aa8;
      __cxa_guard_release(&DAT_056b2b28);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04ade138;
      puStack_30 = &DAT_056b2a90;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

