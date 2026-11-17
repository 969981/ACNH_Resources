
void FUN_02e580d4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if (pcVar5[3] != 'B') {
        return;
      }
      if (pcVar5[4] != 't') {
        return;
      }
      if (pcVar5[5] != 'n') {
        return;
      }
      if (pcVar5[6] != '_') {
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_0569aa48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569aa48), iVar1 != 0)) {
        DAT_0569a868 = PTR_DAT_04bb2020 + 0x10;
        DAT_0569a870 = "Check";
        DAT_0569a880 = &DAT_0407ebb1;
        DAT_0569a8a0 = &DAT_0407ebb1;
        DAT_0569a8c0 = &DAT_0407ebb1;
        DAT_0569a890 = "IconOff";
        DAT_0569a8b0 = &DAT_040a0741;
        DAT_0569a8d0 = "DragCursor";
        DAT_0569a8f0 = "PresentRedOpen";
        DAT_0569a910 = "PresentGreenOpen";
        DAT_0569a930 = "WrappingOpen";
        DAT_0569a950 = "BoxOpen";
        DAT_0569a970 = "PresentOut";
        DAT_0569a990 = "FavoriteIn";
        DAT_0569a9b0 = "FavoriteOut";
        DAT_0569a9d0 = "Remake";
        DAT_0569a9f0 = "WrappingType";
        DAT_0569aa10 = "EditType";
        DAT_0569a8e0 = &DAT_0407ebb1;
        DAT_0569a900 = &DAT_0407ebb1;
        DAT_0569a920 = &DAT_0407ebb1;
        DAT_0569a940 = &DAT_0407ebb1;
        DAT_0569a960 = &DAT_0407ebb1;
        DAT_0569a980 = &DAT_0407ebb1;
        DAT_0569a9a0 = &DAT_0407ebb1;
        DAT_0569a9c0 = &DAT_0407ebb1;
        DAT_0569a9e0 = &DAT_0407ebb1;
        DAT_0569aa00 = &DAT_0407ebb1;
        DAT_0569aa20 = &DAT_0407ebb1;
        DAT_0569aa30 = "EfInvalid";
        DAT_0569aa40 = &DAT_0407ebb1;
        DAT_0569a878 = DAT_0569a868;
        DAT_0569a888 = DAT_0569a868;
        DAT_0569a898 = DAT_0569a868;
        DAT_0569a8a8 = DAT_0569a868;
        DAT_0569a8b8 = DAT_0569a868;
        DAT_0569a8c8 = DAT_0569a868;
        DAT_0569a8d8 = DAT_0569a868;
        DAT_0569a8e8 = DAT_0569a868;
        DAT_0569a8f8 = DAT_0569a868;
        DAT_0569a908 = DAT_0569a868;
        DAT_0569a918 = DAT_0569a868;
        DAT_0569a928 = DAT_0569a868;
        DAT_0569a938 = DAT_0569a868;
        DAT_0569a948 = DAT_0569a868;
        DAT_0569a958 = DAT_0569a868;
        DAT_0569a968 = DAT_0569a868;
        DAT_0569a978 = DAT_0569a868;
        DAT_0569a988 = DAT_0569a868;
        DAT_0569a998 = DAT_0569a868;
        DAT_0569a9a8 = DAT_0569a868;
        DAT_0569a9b8 = DAT_0569a868;
        DAT_0569a9c8 = DAT_0569a868;
        DAT_0569a9d8 = DAT_0569a868;
        DAT_0569a9e8 = DAT_0569a868;
        DAT_0569a9f8 = DAT_0569a868;
        DAT_0569aa08 = DAT_0569a868;
        DAT_0569aa18 = DAT_0569a868;
        DAT_0569aa28 = DAT_0569a868;
        DAT_0569aa38 = DAT_0569a868;
        __cxa_guard_release(&DAT_0569aa48);
      }
      if (((DAT_0569aa60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569aa60), iVar1 != 0)) {
        DAT_0569aa50 = 0xf00000002;
        DAT_0569aa58 = &DAT_0569a868;
        __cxa_guard_release(&DAT_0569aa60);
      }
      if (((DAT_0569aa78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569aa78), iVar1 != 0)) {
        DAT_0569aa68 = PTR_DAT_04bb2020 + 0x10;
        DAT_0569aa70 = "@T_Num_00";
        __cxa_guard_release(&DAT_0569aa78);
      }
      if (((DAT_0569aaa0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569aaa0), iVar1 != 0)) {
        DAT_0569aa80 = PTR_DAT_04bb2020 + 0x10;
        DAT_0569aa88 = "B_Drag_00";
        DAT_0569aa98 = "P_Icon_00";
        DAT_0569aa90 = DAT_0569aa80;
        __cxa_guard_release(&DAT_0569aaa0);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04ad67a8;
      local_40 = &DAT_0569aa50;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04ad67b8;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02e58164;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = (undefined8 *)0x0;
  local_50 = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_38 = 0;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02e58164:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

