
void FUN_033ea644(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_0574ab78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574ab78), iVar1 != 0)) {
      DAT_0574ab58 = PTR_DAT_04bb2020 + 0x10;
      DAT_0574ab60 = "BeakOff";
      DAT_0574ab70 = &DAT_0407ebb1;
      DAT_0574ab68 = DAT_0574ab58;
      __cxa_guard_release(&DAT_0574ab78);
    }
    if (((DAT_0574ab90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574ab90), iVar1 != 0)) {
      DAT_0574ab80 = 0x100000002;
      DAT_0574ab88 = &DAT_0574ab58;
      __cxa_guard_release(&DAT_0574ab90);
    }
    if (((DAT_0574aba8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574aba8), iVar1 != 0)) {
      DAT_0574ab98 = PTR_DAT_04bb2020 + 0x10;
      DAT_0574aba0 = "@T_Text_00";
      __cxa_guard_release(&DAT_0574aba8);
    }
    if (((DAT_0574abd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574abd0), iVar1 != 0)) {
      DAT_0574abb0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0574abb8 = "B_Size_00";
      DAT_0574abc8 = "N_BeakPos_00";
      DAT_0574abc0 = DAT_0574abb0;
      __cxa_guard_release(&DAT_0574abd0);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_38 = &DAT_04b28580;
      puStack_30 = &DAT_0574ab80;
      local_28 = 0;
      puStack_40 = &DAT_04b28590;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

