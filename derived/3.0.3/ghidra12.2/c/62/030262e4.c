
void FUN_030262e4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_056d9d18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d9d18), iVar1 != 0)) {
      DAT_056d9cf8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d9d00 = "IconType";
      DAT_056d9d10 = &DAT_0407ebb1;
      DAT_056d9d08 = DAT_056d9cf8;
      __cxa_guard_release(&DAT_056d9d18);
    }
    if (((DAT_056d9d30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d9d30), iVar1 != 0)) {
      DAT_056d9d20 = 0x100000002;
      DAT_056d9d28 = &DAT_056d9cf8;
      __cxa_guard_release(&DAT_056d9d30);
    }
    if (((DAT_056d9d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d9d48), iVar1 != 0)) {
      DAT_056d9d38 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d9d40 = "@T_Text_00";
      __cxa_guard_release(&DAT_056d9d48);
    }
    if (((DAT_056d9d70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d9d70), iVar1 != 0)) {
      DAT_056d9d50 = PTR_DAT_04bb2020 + 0x10;
      DAT_056d9d58 = "P_Tex_00";
      DAT_056d9d68 = "P_Sdw_00";
      DAT_056d9d60 = DAT_056d9d50;
      __cxa_guard_release(&DAT_056d9d70);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_38 = &DAT_04af3d48;
      puStack_30 = &DAT_056d9d20;
      local_28 = 2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_40 = &DAT_04af3d58;
      lVar2 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

