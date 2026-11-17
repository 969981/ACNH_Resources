
void FUN_02e22534(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05694190 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05694190), iVar1 != 0)) {
      DAT_05694150 = PTR_DAT_04bb2020 + 0x10;
      DAT_05694158 = "MoveWait";
      DAT_05694168 = &DAT_0407ebb1;
      DAT_05694188 = &DAT_0407ebb1;
      DAT_05694178 = "ThemeWait2";
      DAT_05694160 = DAT_05694150;
      DAT_05694170 = DAT_05694150;
      DAT_05694180 = DAT_05694150;
      __cxa_guard_release(&DAT_05694190);
    }
    if (((DAT_056941a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056941a8), iVar1 != 0)) {
      DAT_05694198 = 0x200000002;
      DAT_056941a0 = &DAT_05694150;
      __cxa_guard_release(&DAT_056941a8);
    }
    if (((DAT_056941c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056941c0), iVar1 != 0)) {
      DAT_056941b0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056941b8 = "@T_Move_00";
      __cxa_guard_release(&DAT_056941c0);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04ad11e0;
      puStack_30 = &DAT_05694198;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

