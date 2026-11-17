
void FUN_02db4524(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05689e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05689e60), iVar1 != 0)) {
      DAT_05689e40 = PTR_DAT_04bb2020 + 0x10;
      DAT_05689e48 = &DAT_040fe5ab;
      DAT_05689e58 = &DAT_0407ebb1;
      DAT_05689e50 = DAT_05689e40;
      __cxa_guard_release(&DAT_05689e60);
    }
    if (((DAT_05689e78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05689e78), iVar1 != 0)) {
      DAT_05689e68 = 0x100000002;
      DAT_05689e70 = &DAT_05689e40;
      __cxa_guard_release(&DAT_05689e78);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_05689e68;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

