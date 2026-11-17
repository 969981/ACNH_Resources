
void FUN_02e9bbe4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_056a2760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a2760), iVar1 != 0)) {
      DAT_056a2750 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a2758 = "@T_Text_00";
      __cxa_guard_release(&DAT_056a2760);
    }
    if (param_2[1] != 0) {
      local_38 = &DAT_04adac08;
      uStack_30 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

