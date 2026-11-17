
void FUN_02e32c14(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05696140 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05696140), iVar1 != 0)) {
      DAT_05696100 = PTR_DAT_04bb2020 + 0x10;
      DAT_05696108 = "TextIn";
      DAT_05696118 = &DAT_0407ebb1;
      DAT_05696138 = &DAT_0407ebb1;
      DAT_05696128 = "TextOut";
      DAT_05696110 = DAT_05696100;
      DAT_05696120 = DAT_05696100;
      DAT_05696130 = DAT_05696100;
      __cxa_guard_release(&DAT_05696140);
    }
    if (((DAT_05696158 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05696158), iVar1 != 0)) {
      DAT_05696148 = 0x200000002;
      DAT_05696150 = &DAT_05696100;
      __cxa_guard_release(&DAT_05696158);
    }
    if (((DAT_05696170 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05696170), iVar1 != 0)) {
      DAT_05696160 = PTR_DAT_04bb2020 + 0x10;
      DAT_05696168 = "@T_Title_00";
      __cxa_guard_release(&DAT_05696170);
    }
    if (param_2[1] != 0) {
      local_28 = 0;
      local_38 = &DAT_04ad4070;
      puStack_30 = &DAT_05696148;
      local_40 = 0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}

