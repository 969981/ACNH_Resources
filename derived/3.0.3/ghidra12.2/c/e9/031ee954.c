
void FUN_031ee954(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_0571d968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571d968), iVar1 != 0)) {
      DAT_0571d948 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571d950 = &DAT_040d1222;
      DAT_0571d960 = &DAT_0407ebb1;
      DAT_0571d958 = DAT_0571d948;
      __cxa_guard_release(&DAT_0571d968);
    }
    if (((DAT_0571d980 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571d980), iVar1 != 0)) {
      DAT_0571d970 = 0x100000002;
      DAT_0571d978 = &DAT_0571d948;
      __cxa_guard_release(&DAT_0571d980);
    }
    if (((DAT_0571d998 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571d998), iVar1 != 0)) {
      DAT_0571d988 = PTR_DAT_04bb2020 + 0x10;
      DAT_0571d990 = "N_Capture_00";
      __cxa_guard_release(&DAT_0571d998);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_38 = 0;
      puStack_30 = &DAT_0571d970;
      local_28 = 0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_40 = &DAT_04b0d8c0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

