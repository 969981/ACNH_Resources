
void FUN_0353d864(undefined8 param_1,undefined8 *param_2)

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
  if (pcVar5 == "") {
LAB_0353d8c4:
    if (((DAT_0576b558 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b558), iVar1 != 0)) {
      DAT_0576b438 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576b440 = "Share";
      DAT_0576b450 = &DAT_0407ebb1;
      DAT_0576b470 = &DAT_0407ebb1;
      DAT_0576b490 = &DAT_0407ebb1;
      DAT_0576b460 = "CategoryOnOff";
      DAT_0576b480 = "CategoryNum";
      DAT_0576b4a0 = "CategorySOnOff";
      DAT_0576b4c0 = "CategoryNumS";
      DAT_0576b4e0 = "ChangeScrollType";
      DAT_0576b500 = "WindowType";
      DAT_0576b520 = "ThemeType";
      DAT_0576b4b0 = &DAT_0407ebb1;
      DAT_0576b4d0 = &DAT_0407ebb1;
      DAT_0576b4f0 = &DAT_0407ebb1;
      DAT_0576b510 = &DAT_0407ebb1;
      DAT_0576b530 = &DAT_0407ebb1;
      DAT_0576b540 = "ThemeOnOff";
      DAT_0576b550 = &DAT_0407ebb1;
      DAT_0576b448 = DAT_0576b438;
      DAT_0576b458 = DAT_0576b438;
      DAT_0576b468 = DAT_0576b438;
      DAT_0576b478 = DAT_0576b438;
      DAT_0576b488 = DAT_0576b438;
      DAT_0576b498 = DAT_0576b438;
      DAT_0576b4a8 = DAT_0576b438;
      DAT_0576b4b8 = DAT_0576b438;
      DAT_0576b4c8 = DAT_0576b438;
      DAT_0576b4d8 = DAT_0576b438;
      DAT_0576b4e8 = DAT_0576b438;
      DAT_0576b4f8 = DAT_0576b438;
      DAT_0576b508 = DAT_0576b438;
      DAT_0576b518 = DAT_0576b438;
      DAT_0576b528 = DAT_0576b438;
      DAT_0576b538 = DAT_0576b438;
      DAT_0576b548 = DAT_0576b438;
      __cxa_guard_release(&DAT_0576b558);
    }
    if (((DAT_0576b570 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b570), iVar1 != 0)) {
      DAT_0576b560 = 0x900000002;
      DAT_0576b568 = &DAT_0576b438;
      __cxa_guard_release(&DAT_0576b570);
    }
    if (((DAT_0576b5c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b5c8), iVar1 != 0)) {
      DAT_0576b578 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576b580 = "@T_L_00";
      DAT_0576b590 = "@T_R_00";
      DAT_0576b5a0 = "@T_Icon_00";
      DAT_0576b5b0 = "@T_Text_00";
      DAT_0576b5c0 = "@T_Room_00";
      DAT_0576b588 = DAT_0576b578;
      DAT_0576b598 = DAT_0576b578;
      DAT_0576b5a8 = DAT_0576b578;
      DAT_0576b5b8 = DAT_0576b578;
      __cxa_guard_release(&DAT_0576b5c8);
    }
    if (((DAT_0576b5f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b5f0), iVar1 != 0)) {
      DAT_0576b5d0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576b5d8 = "N_Pos_00";
      DAT_0576b5e8 = "P_Icon_00";
      DAT_0576b5e0 = DAT_0576b5d0;
      __cxa_guard_release(&DAT_0576b5f0);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04b37c78;
    puStack_40 = &DAT_0576b560;
    puStack_50 = &DAT_04b37c88;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
            ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) &&
           (((pcVar5[6] == 'L' && ((pcVar5[7] == 'i' && (pcVar5[8] == 's')))) && (pcVar5[9] == 't'))
           )) && ((((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '0')) &&
                  (((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')) &&
                   ((pcVar5[0xf] == '_' && ((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't'))))))))))
         && ((pcVar5[0x12] == 'n' && (pcVar5[0x13] == '_')))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_0576b7b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b7b8), iVar1 != 0))
          {
            DAT_0576b5f8 = PTR_DAT_04bb2020 + 0x10;
            DAT_0576b600 = "BtnListRandom";
            DAT_0576b610 = &DAT_0407ebb1;
            DAT_0576b630 = &DAT_0407ebb1;
            DAT_0576b650 = &DAT_0407ebb1;
            DAT_0576b620 = "Remake";
            DAT_0576b640 = "IconOff";
            DAT_0576b660 = "IconType";
            DAT_0576b680 = "EditType";
            DAT_0576b6a0 = &DAT_0410025b;
            DAT_0576b6c0 = "State";
            DAT_0576b6e0 = "WallType";
            DAT_0576b700 = "BtnType";
            DAT_0576b720 = "FacilityState";
            DAT_0576b740 = "FacilityNumType";
            DAT_0576b760 = "FacilityIconType";
            DAT_0576b780 = "CheckType";
            DAT_0576b670 = &DAT_0407ebb1;
            DAT_0576b690 = &DAT_0407ebb1;
            DAT_0576b6b0 = &DAT_0407ebb1;
            DAT_0576b6d0 = &DAT_0407ebb1;
            DAT_0576b6f0 = &DAT_0407ebb1;
            DAT_0576b710 = &DAT_0407ebb1;
            DAT_0576b730 = &DAT_0407ebb1;
            DAT_0576b750 = &DAT_0407ebb1;
            DAT_0576b770 = &DAT_0407ebb1;
            DAT_0576b790 = &DAT_0407ebb1;
            DAT_0576b7a0 = "RemakePos";
            DAT_0576b7b0 = &DAT_0407ebb1;
            DAT_0576b608 = DAT_0576b5f8;
            DAT_0576b618 = DAT_0576b5f8;
            DAT_0576b628 = DAT_0576b5f8;
            DAT_0576b638 = DAT_0576b5f8;
            DAT_0576b648 = DAT_0576b5f8;
            DAT_0576b658 = DAT_0576b5f8;
            DAT_0576b668 = DAT_0576b5f8;
            DAT_0576b678 = DAT_0576b5f8;
            DAT_0576b688 = DAT_0576b5f8;
            DAT_0576b698 = DAT_0576b5f8;
            DAT_0576b6a8 = DAT_0576b5f8;
            DAT_0576b6b8 = DAT_0576b5f8;
            DAT_0576b6c8 = DAT_0576b5f8;
            DAT_0576b6d8 = DAT_0576b5f8;
            DAT_0576b6e8 = DAT_0576b5f8;
            DAT_0576b6f8 = DAT_0576b5f8;
            DAT_0576b708 = DAT_0576b5f8;
            DAT_0576b718 = DAT_0576b5f8;
            DAT_0576b728 = DAT_0576b5f8;
            DAT_0576b738 = DAT_0576b5f8;
            DAT_0576b748 = DAT_0576b5f8;
            DAT_0576b758 = DAT_0576b5f8;
            DAT_0576b768 = DAT_0576b5f8;
            DAT_0576b778 = DAT_0576b5f8;
            DAT_0576b788 = DAT_0576b5f8;
            DAT_0576b798 = DAT_0576b5f8;
            DAT_0576b7a8 = DAT_0576b5f8;
            __cxa_guard_release(&DAT_0576b7b8);
          }
          if (((DAT_0576b7d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b7d0), iVar1 != 0))
          {
            DAT_0576b7c0 = 0xe00000002;
            DAT_0576b7c8 = &DAT_0576b5f8;
            __cxa_guard_release(&DAT_0576b7d0);
          }
          if (((DAT_0576b858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b858), iVar1 != 0))
          {
            DAT_0576b7d8 = PTR_DAT_04bb2020 + 0x10;
            DAT_0576b7e0 = "@T_SizeNumL_00";
            DAT_0576b7f0 = "@T_SizeNumR_00";
            DAT_0576b800 = "@T_SizeMultiply_00";
            DAT_0576b810 = "@T_Num_00";
            DAT_0576b820 = "@T_Unit_00";
            DAT_0576b830 = "@T_Num_01";
            DAT_0576b840 = "@T_NumUnit_00";
            DAT_0576b850 = "@T_Num_02";
            DAT_0576b7e8 = DAT_0576b7d8;
            DAT_0576b7f8 = DAT_0576b7d8;
            DAT_0576b808 = DAT_0576b7d8;
            DAT_0576b818 = DAT_0576b7d8;
            DAT_0576b828 = DAT_0576b7d8;
            DAT_0576b838 = DAT_0576b7d8;
            DAT_0576b848 = DAT_0576b7d8;
            __cxa_guard_release(&DAT_0576b858);
          }
          if (((DAT_0576b870 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b870), iVar1 != 0))
          {
            DAT_0576b860 = PTR_DAT_04bb2020 + 0x10;
            DAT_0576b868 = "P_Icon_00";
            __cxa_guard_release(&DAT_0576b870);
          }
          local_58 = *param_2;
          local_48 = &DAT_04b37c98;
          puStack_40 = &DAT_0576b7c0;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          puStack_50 = &DAT_04b37ca8;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_0353d950;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_0353d8c4;
    pcVar5 = (char *)param_2[5];
    if (*pcVar5 != '/') {
      return;
    }
    if (pcVar5[1] != 'L') {
      return;
    }
    if (pcVar5[2] != '_') {
      return;
    }
    if (pcVar5[3] != 'G') {
      return;
    }
    if (pcVar5[4] != 'e') {
      return;
    }
    if (pcVar5[5] != 'n') {
      return;
    }
    if (pcVar5[6] != 'r') {
      return;
    }
    if (pcVar5[7] != 'e') {
      return;
    }
    if (pcVar5[8] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_0576b898 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b898), iVar1 != 0)) {
      DAT_0576b878 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576b880 = "Select";
      DAT_0576b890 = &DAT_0407ebb1;
      DAT_0576b888 = DAT_0576b878;
      __cxa_guard_release(&DAT_0576b898);
    }
    if (((DAT_0576b8b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b8b0), iVar1 != 0)) {
      DAT_0576b8a0 = 0x100000002;
      DAT_0576b8a8 = &DAT_0576b878;
      __cxa_guard_release(&DAT_0576b8b0);
    }
    if (((DAT_0576b8c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b8c8), iVar1 != 0)) {
      DAT_0576b8b8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576b8c0 = "@T_Key_00";
      __cxa_guard_release(&DAT_0576b8c8);
    }
    if (((DAT_0576b8e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576b8e0), iVar1 != 0)) {
      DAT_0576b8d0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576b8d8 = "P_Icon_00";
      __cxa_guard_release(&DAT_0576b8e0);
    }
    local_58 = *param_2;
    local_48 = &DAT_04b37cb8;
    puStack_40 = &DAT_0576b8a0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04b37cc8;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_0353d950:
  local_38 = 1;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

