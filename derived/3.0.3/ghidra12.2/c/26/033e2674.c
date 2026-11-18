
void FUN_033e2674(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_057490c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057490c0), iVar1 != 0)) {
      DAT_057490a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057490a8 = "ThemeWait";
      DAT_057490b8 = &DAT_0407ebb1;
      DAT_057490b0 = DAT_057490a0;
      __cxa_guard_release(&DAT_057490c0);
    }
    if (((DAT_057490d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057490d8), iVar1 != 0)) {
      DAT_057490c8 = 0x100000002;
      DAT_057490d0 = &DAT_057490a0;
      __cxa_guard_release(&DAT_057490d8);
    }
    if (((DAT_05749100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05749100), iVar1 != 0)) {
      DAT_057490e0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057490e8 = "@T_Title_00";
      DAT_057490f8 = "@T_NPCName_00";
      DAT_057490f0 = DAT_057490e0;
      __cxa_guard_release(&DAT_05749100);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b274b8;
      puStack_30 = &DAT_057490c8;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

