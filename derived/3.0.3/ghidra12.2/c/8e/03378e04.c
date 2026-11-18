
void FUN_03378e04(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05737090 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05737090), iVar1 != 0)) {
      DAT_05737050 = PTR_DAT_04bb2020 + 0x10;
      DAT_05737058 = &DAT_040d0d96;
      DAT_05737068 = &DAT_0407ebb1;
      DAT_05737088 = &DAT_0407ebb1;
      DAT_05737078 = &DAT_040fe5ab;
      DAT_05737060 = DAT_05737050;
      DAT_05737070 = DAT_05737050;
      DAT_05737080 = DAT_05737050;
      __cxa_guard_release(&DAT_05737090);
    }
    if (((DAT_057370a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057370a8), iVar1 != 0)) {
      DAT_05737098 = 0x200000002;
      DAT_057370a0 = &DAT_05737050;
      __cxa_guard_release(&DAT_057370a8);
    }
    if (((DAT_05737120 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05737120), iVar1 != 0)) {
      DAT_057370b0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057370b8 = "@T_Header_00";
      DAT_057370e8 = "@T_ResultUnit_00";
      DAT_057370c8 = "@T_InputNum_00";
      DAT_057370d8 = "@T_ResultNum_00";
      DAT_057370f8 = "@T_ResultTitle_00";
      DAT_05737108 = "@T_Colon_00";
      DAT_05737118 = "@T_InputUnit_00";
      DAT_057370c0 = DAT_057370b0;
      DAT_057370d0 = DAT_057370b0;
      DAT_057370e0 = DAT_057370b0;
      DAT_057370f0 = DAT_057370b0;
      DAT_05737100 = DAT_057370b0;
      DAT_05737110 = DAT_057370b0;
      __cxa_guard_release(&DAT_05737120);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b22668;
      puStack_30 = &DAT_05737098;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

