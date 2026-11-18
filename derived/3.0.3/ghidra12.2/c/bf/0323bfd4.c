
void FUN_0323bfd4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05723fb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723fb0), iVar1 != 0)) {
      DAT_05723f50 = PTR_DAT_04bb2020 + 0x10;
      DAT_05723f58 = "WindowIn";
      DAT_05723f68 = &DAT_0407ebb1;
      DAT_05723f88 = &DAT_0407ebb1;
      DAT_05723fa8 = &DAT_0407ebb1;
      DAT_05723f78 = "EventType";
      DAT_05723f98 = "WindowOut";
      DAT_05723f60 = DAT_05723f50;
      DAT_05723f70 = DAT_05723f50;
      DAT_05723f80 = DAT_05723f50;
      DAT_05723f90 = DAT_05723f50;
      DAT_05723fa0 = DAT_05723f50;
      __cxa_guard_release(&DAT_05723fb0);
    }
    if (((DAT_05723fc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723fc8), iVar1 != 0)) {
      DAT_05723fb8 = 0x300000002;
      DAT_05723fc0 = &DAT_05723f50;
      __cxa_guard_release(&DAT_05723fc8);
    }
    if (((DAT_05723ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723ff0), iVar1 != 0)) {
      DAT_05723fd0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05723fd8 = "@T_EventTitle_00";
      DAT_05723fe8 = "@T_Limited_00";
      DAT_05723fe0 = DAT_05723fd0;
      __cxa_guard_release(&DAT_05723ff0);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04b13068;
      puStack_30 = &DAT_05723fb8;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

