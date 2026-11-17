
void FUN_02c3e844(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_0565b0b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b0b8), iVar1 != 0)) {
      DAT_0565b058 = PTR_DAT_04bb2020 + 0x10;
      DAT_0565b060 = "MatchingModeIn";
      DAT_0565b070 = &DAT_0407ebb1;
      DAT_0565b090 = &DAT_0407ebb1;
      DAT_0565b0b0 = &DAT_0407ebb1;
      DAT_0565b080 = "MatchingModeOut";
      DAT_0565b0a0 = "ColorType";
      DAT_0565b068 = DAT_0565b058;
      DAT_0565b078 = DAT_0565b058;
      DAT_0565b088 = DAT_0565b058;
      DAT_0565b098 = DAT_0565b058;
      DAT_0565b0a8 = DAT_0565b058;
      __cxa_guard_release(&DAT_0565b0b8);
    }
    if (((DAT_0565b0d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b0d0), iVar1 != 0)) {
      DAT_0565b0c0 = 0x300000002;
      DAT_0565b0c8 = &DAT_0565b058;
      __cxa_guard_release(&DAT_0565b0d0);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_0565b0c0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

