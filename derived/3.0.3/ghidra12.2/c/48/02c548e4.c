
void FUN_02c548e4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_0565d998 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565d998), iVar1 != 0)) {
      DAT_0565d978 = PTR_DAT_04bb2020 + 0x10;
      DAT_0565d980 = "ColorType";
      DAT_0565d990 = &DAT_0407ebb1;
      DAT_0565d988 = DAT_0565d978;
      __cxa_guard_release(&DAT_0565d998);
    }
    if (((DAT_0565d9b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565d9b0), iVar1 != 0)) {
      DAT_0565d9a0 = 0x100000002;
      DAT_0565d9a8 = &DAT_0565d978;
      __cxa_guard_release(&DAT_0565d9b0);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_0565d9a0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

