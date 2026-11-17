
void FUN_031bcb14(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_057159c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057159c8), iVar1 != 0)) {
      DAT_05715988 = PTR_DAT_04bb2020 + 0x10;
      DAT_05715990 = "TypeCtrl";
      DAT_057159a0 = &DAT_0407ebb1;
      DAT_057159c0 = &DAT_0407ebb1;
      DAT_057159b0 = "KeyGuide";
      DAT_05715998 = DAT_05715988;
      DAT_057159a8 = DAT_05715988;
      DAT_057159b8 = DAT_05715988;
      __cxa_guard_release(&DAT_057159c8);
    }
    if (((DAT_057159e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057159e0), iVar1 != 0)) {
      DAT_057159d0 = 0x200000002;
      DAT_057159d8 = &DAT_05715988;
      __cxa_guard_release(&DAT_057159e0);
    }
    if (((DAT_05715a18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05715a18), iVar1 != 0)) {
      DAT_057159e8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057159f0 = "@T_Text_00";
      DAT_05715a10 = "@T_Icon_00";
      DAT_05715a00 = "@T_KeyText_00";
      DAT_057159f8 = DAT_057159e8;
      DAT_05715a08 = DAT_057159e8;
      __cxa_guard_release(&DAT_05715a18);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b09a30;
      puStack_30 = &DAT_057159d0;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

