
void FUN_032798d4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05729ee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05729ee0), iVar1 != 0)) {
      DAT_05729e80 = PTR_DAT_04bb2020 + 0x10;
      DAT_05729e88 = "Share";
      DAT_05729e98 = &DAT_0407ebb1;
      DAT_05729eb8 = &DAT_0407ebb1;
      DAT_05729ed8 = &DAT_0407ebb1;
      DAT_05729ea8 = "InvalidMove";
      DAT_05729ec8 = "Gauge";
      DAT_05729e90 = DAT_05729e80;
      DAT_05729ea0 = DAT_05729e80;
      DAT_05729eb0 = DAT_05729e80;
      DAT_05729ec0 = DAT_05729e80;
      DAT_05729ed0 = DAT_05729e80;
      __cxa_guard_release(&DAT_05729ee0);
    }
    if (((DAT_05729ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05729ef8), iVar1 != 0)) {
      DAT_05729ee8 = 0x300000002;
      DAT_05729ef0 = &DAT_05729e80;
      __cxa_guard_release(&DAT_05729ef8);
    }
    if (((DAT_05729f30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05729f30), iVar1 != 0)) {
      DAT_05729f00 = PTR_DAT_04bb2020 + 0x10;
      DAT_05729f08 = "@T_X_00";
      DAT_05729f28 = "@T_Juji_00";
      DAT_05729f18 = "@T_Y_00";
      DAT_05729f10 = DAT_05729f00;
      DAT_05729f20 = DAT_05729f00;
      __cxa_guard_release(&DAT_05729f30);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b17050;
      puStack_30 = &DAT_05729ee8;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

