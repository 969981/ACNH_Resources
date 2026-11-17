
void FUN_02c372c4(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05659f80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05659f80), iVar1 != 0)) {
      DAT_05659f60 = PTR_DAT_04bb2020 + 0x10;
      DAT_05659f68 = "Change";
      DAT_05659f78 = &DAT_0407ebb1;
      DAT_05659f70 = DAT_05659f60;
      __cxa_guard_release(&DAT_05659f80);
    }
    if (((DAT_05659f98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05659f98), iVar1 != 0)) {
      DAT_05659f88 = 0x100000002;
      DAT_05659f90 = &DAT_05659f60;
      __cxa_guard_release(&DAT_05659f98);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_05659f88;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

