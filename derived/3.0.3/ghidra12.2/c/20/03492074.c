
void FUN_03492074(undefined8 param_1,undefined8 *param_2)

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
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
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
      if (pcVar5[6] != 'L') {
        return;
      }
      if (pcVar5[7] != 'i') {
        return;
      }
      if (pcVar5[8] != 's') {
        return;
      }
      if (pcVar5[9] != 't') {
        return;
      }
      if (pcVar5[10] != '_') {
        return;
      }
      if (pcVar5[0xb] != '0') {
        return;
      }
      if (pcVar5[0xc] != '0') {
        return;
      }
      if (pcVar5[0xd] != '/') {
        return;
      }
      if (pcVar5[0xe] != 'L') {
        return;
      }
      if (pcVar5[0xf] != '_') {
        return;
      }
      if (pcVar5[0x10] != 'B') {
        return;
      }
      if (pcVar5[0x11] != 't') {
        return;
      }
      if (pcVar5[0x12] != 'n') {
        return;
      }
      if (pcVar5[0x13] != '_') {
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
      if (((DAT_0575f7c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575f7c0), iVar1 != 0)) {
        DAT_0575f740 = PTR_DAT_04bb2020 + 0x10;
        DAT_0575f748 = &DAT_040fe5ab;
        DAT_0575f758 = &DAT_0407ebb1;
        DAT_0575f778 = &DAT_0407ebb1;
        DAT_0575f798 = &DAT_0407ebb1;
        DAT_0575f768 = "Photo";
        DAT_0575f788 = "Constructing";
        DAT_0575f7a8 = "Office";
        DAT_0575f7b8 = &DAT_0407ebb1;
        DAT_0575f750 = DAT_0575f740;
        DAT_0575f760 = DAT_0575f740;
        DAT_0575f770 = DAT_0575f740;
        DAT_0575f780 = DAT_0575f740;
        DAT_0575f790 = DAT_0575f740;
        DAT_0575f7a0 = DAT_0575f740;
        DAT_0575f7b0 = DAT_0575f740;
        __cxa_guard_release(&DAT_0575f7c0);
      }
      if (((DAT_0575f7d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575f7d8), iVar1 != 0)) {
        DAT_0575f7c8 = 0x400000002;
        DAT_0575f7d0 = &DAT_0575f740;
        __cxa_guard_release(&DAT_0575f7d8);
      }
      if (((DAT_0575f810 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575f810), iVar1 != 0)) {
        DAT_0575f7e0 = PTR_DAT_04bb2020 + 0x10;
        DAT_0575f7e8 = "@T_Title_00";
        DAT_0575f808 = "@T_Constructing_00";
        DAT_0575f7f8 = "@T_Title_03";
        DAT_0575f7f0 = DAT_0575f7e0;
        DAT_0575f800 = DAT_0575f7e0;
        __cxa_guard_release(&DAT_0575f810);
      }
      if (((DAT_0575f848 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575f848), iVar1 != 0)) {
        DAT_0575f818 = PTR_DAT_04bb2020 + 0x10;
        DAT_0575f820 = "P_NPCIcon_00";
        DAT_0575f840 = "P_Image_00";
        DAT_0575f830 = "P_NPCIcon_01";
        DAT_0575f828 = DAT_0575f818;
        DAT_0575f838 = DAT_0575f818;
        __cxa_guard_release(&DAT_0575f848);
      }
      local_58 = *param_2;
      local_38 = 3;
      local_48 = &DAT_04b2df30;
      puStack_40 = &DAT_0575f7c8;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_50 = &DAT_04b2df40;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_03492160;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_0575f680 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575f680), iVar1 != 0)) {
    DAT_0575f560 = PTR_DAT_04bb2020 + 0x10;
    DAT_0575f568 = "Empty";
    DAT_0575f578 = &DAT_0407ebb1;
    DAT_0575f598 = &DAT_0407ebb1;
    DAT_0575f5b8 = &DAT_0407ebb1;
    DAT_0575f588 = "WherearenInspect";
    DAT_0575f5a8 = "IslandType";
    DAT_0575f5c8 = "MapActive";
    DAT_0575f5e8 = "ListActive";
    DAT_0575f608 = "HouseSelection";
    DAT_0575f628 = "PhotoOut";
    DAT_0575f648 = "PhotoIn";
    DAT_0575f5d8 = &DAT_0407ebb1;
    DAT_0575f5f8 = &DAT_0407ebb1;
    DAT_0575f618 = &DAT_0407ebb1;
    DAT_0575f638 = &DAT_0407ebb1;
    DAT_0575f658 = &DAT_0407ebb1;
    DAT_0575f668 = "CaptureType";
    DAT_0575f678 = &DAT_0407ebb1;
    DAT_0575f570 = DAT_0575f560;
    DAT_0575f580 = DAT_0575f560;
    DAT_0575f590 = DAT_0575f560;
    DAT_0575f5a0 = DAT_0575f560;
    DAT_0575f5b0 = DAT_0575f560;
    DAT_0575f5c0 = DAT_0575f560;
    DAT_0575f5d0 = DAT_0575f560;
    DAT_0575f5e0 = DAT_0575f560;
    DAT_0575f5f0 = DAT_0575f560;
    DAT_0575f600 = DAT_0575f560;
    DAT_0575f610 = DAT_0575f560;
    DAT_0575f620 = DAT_0575f560;
    DAT_0575f630 = DAT_0575f560;
    DAT_0575f640 = DAT_0575f560;
    DAT_0575f650 = DAT_0575f560;
    DAT_0575f660 = DAT_0575f560;
    DAT_0575f670 = DAT_0575f560;
    __cxa_guard_release(&DAT_0575f680);
  }
  if (((DAT_0575f698 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575f698), iVar1 != 0)) {
    DAT_0575f688 = 0x900000002;
    DAT_0575f690 = &DAT_0575f560;
    __cxa_guard_release(&DAT_0575f698);
  }
  if (((DAT_0575f700 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575f700), iVar1 != 0)) {
    DAT_0575f6a0 = PTR_DAT_04bb2020 + 0x10;
    DAT_0575f6a8 = "@T_Area_03";
    DAT_0575f6c8 = "@T_Area_01";
    DAT_0575f6b8 = "@T_Area_02";
    DAT_0575f6d8 = "@T_Icon_00";
    DAT_0575f6e8 = "@T_Text_01";
    DAT_0575f6f8 = "@T_Text_03";
    DAT_0575f6b0 = DAT_0575f6a0;
    DAT_0575f6c0 = DAT_0575f6a0;
    DAT_0575f6d0 = DAT_0575f6a0;
    DAT_0575f6e0 = DAT_0575f6a0;
    DAT_0575f6f0 = DAT_0575f6a0;
    __cxa_guard_release(&DAT_0575f700);
  }
  if (((DAT_0575f738 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575f738), iVar1 != 0)) {
    DAT_0575f708 = PTR_DAT_04bb2020 + 0x10;
    DAT_0575f710 = "N_Capture_03";
    DAT_0575f730 = "P_Photo_00";
    DAT_0575f720 = "N_Capture_04";
    DAT_0575f718 = DAT_0575f708;
    DAT_0575f728 = DAT_0575f708;
    __cxa_guard_release(&DAT_0575f738);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_58 = *param_2;
  local_48 = &DAT_04b2df10;
  puStack_40 = &DAT_0575f688;
  local_38 = 1;
  puStack_50 = &DAT_04b2df20;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_03492160:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

