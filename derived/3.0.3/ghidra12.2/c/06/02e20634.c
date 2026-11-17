
void FUN_02e20634(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05693fa0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05693fa0), iVar1 != 0)) {
      DAT_05693f40 = PTR_DAT_04bb2020 + 0x10;
      DAT_05693f48 = &DAT_040fe5ab;
      DAT_05693f58 = &DAT_0407ebb1;
      DAT_05693f78 = &DAT_0407ebb1;
      DAT_05693f98 = &DAT_0407ebb1;
      DAT_05693f68 = "MoveWait";
      DAT_05693f88 = "ThemeWait2";
      DAT_05693f50 = DAT_05693f40;
      DAT_05693f60 = DAT_05693f40;
      DAT_05693f70 = DAT_05693f40;
      DAT_05693f80 = DAT_05693f40;
      DAT_05693f90 = DAT_05693f40;
      __cxa_guard_release(&DAT_05693fa0);
    }
    if (((DAT_05693fb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05693fb8), iVar1 != 0)) {
      DAT_05693fa8 = 0x300000002;
      DAT_05693fb0 = &DAT_05693f40;
      __cxa_guard_release(&DAT_05693fb8);
    }
    if (((DAT_05693fe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05693fe0), iVar1 != 0)) {
      DAT_05693fc0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05693fc8 = "@T_Title_00";
      DAT_05693fd8 = "@T_Title_01";
      DAT_05693fd0 = DAT_05693fc0;
      __cxa_guard_release(&DAT_05693fe0);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04ad0d08;
      puStack_30 = &DAT_05693fa8;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

