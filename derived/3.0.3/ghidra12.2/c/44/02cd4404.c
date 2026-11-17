
void FUN_02cd4404(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_0566a318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566a318), iVar1 != 0)) {
      DAT_0566a2f8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0566a300 = &DAT_040fe5ab;
      DAT_0566a310 = &DAT_0407ebb1;
      DAT_0566a308 = DAT_0566a2f8;
      __cxa_guard_release(&DAT_0566a318);
    }
    if (((DAT_0566a330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0566a330), iVar1 != 0)) {
      DAT_0566a320 = 0x100000002;
      DAT_0566a328 = &DAT_0566a2f8;
      __cxa_guard_release(&DAT_0566a330);
    }
    if (param_2[1] != 0) {
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0;
      uStack_48 = *param_2;
      local_30 = &DAT_0566a320;
      lVar2 = *(long *)(param_2[1] + 0x10);
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

