
void FUN_0325e604(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_057258d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057258d8), iVar1 != 0)) {
      DAT_057258b8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057258c0 = &DAT_040fe5ab;
      DAT_057258d0 = &DAT_0407ebb1;
      DAT_057258c8 = DAT_057258b8;
      __cxa_guard_release(&DAT_057258d8);
    }
    if (((DAT_057258f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057258f0), iVar1 != 0)) {
      DAT_057258e0 = 0x100000002;
      DAT_057258e8 = &DAT_057258b8;
      __cxa_guard_release(&DAT_057258f0);
    }
    if (((DAT_05725928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05725928), iVar1 != 0)) {
      DAT_057258f8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05725900 = "@T_Spot_00";
      DAT_05725920 = "@T_Spot_02";
      DAT_05725910 = "@T_Spot_01";
      DAT_05725908 = DAT_057258f8;
      DAT_05725918 = DAT_057258f8;
      __cxa_guard_release(&DAT_05725928);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b15870;
      puStack_30 = &DAT_057258e0;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

