
void FUN_02f50f5c(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02f50fbc:
    if (((DAT_056c56d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c56d0), iVar1 != 0)) {
      DAT_056c5670 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c5678 = "BtnListIn";
      DAT_056c5688 = &DAT_0407ebb1;
      DAT_056c56a8 = &DAT_0407ebb1;
      DAT_056c56c8 = &DAT_0407ebb1;
      DAT_056c5698 = "BtnListOut";
      DAT_056c56b8 = "Empty";
      DAT_056c5680 = DAT_056c5670;
      DAT_056c5690 = DAT_056c5670;
      DAT_056c56a0 = DAT_056c5670;
      DAT_056c56b0 = DAT_056c5670;
      DAT_056c56c0 = DAT_056c5670;
      __cxa_guard_release(&DAT_056c56d0);
    }
    if (((DAT_056c56e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c56e8), iVar1 != 0)) {
      DAT_056c56d8 = 0x300000002;
      DAT_056c56e0 = &DAT_056c5670;
      __cxa_guard_release(&DAT_056c56e8);
    }
    if (((DAT_056c5700 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c5700), iVar1 != 0)) {
      DAT_056c56f0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c56f8 = "@T_Empty_00";
      __cxa_guard_release(&DAT_056c5700);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_48 = &DAT_04ae47e0;
    puStack_40 = &DAT_056c56d8;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
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
          if (((DAT_056c57a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c57a8), iVar1 != 0))
          {
            DAT_056c5708 = PTR_DAT_04bb2020 + 0x10;
            DAT_056c5710 = "Color";
            DAT_056c5720 = &DAT_0407ebb1;
            DAT_056c5740 = &DAT_0407ebb1;
            DAT_056c5760 = &DAT_0407ebb1;
            DAT_056c5730 = &DAT_040fe5ab;
            DAT_056c5750 = "State";
            DAT_056c5770 = &DAT_040f4153;
            DAT_056c5780 = &DAT_0407ebb1;
            DAT_056c5790 = "AddressNameOff";
            DAT_056c57a0 = &DAT_0407ebb1;
            DAT_056c5718 = DAT_056c5708;
            DAT_056c5728 = DAT_056c5708;
            DAT_056c5738 = DAT_056c5708;
            DAT_056c5748 = DAT_056c5708;
            DAT_056c5758 = DAT_056c5708;
            DAT_056c5768 = DAT_056c5708;
            DAT_056c5778 = DAT_056c5708;
            DAT_056c5788 = DAT_056c5708;
            DAT_056c5798 = DAT_056c5708;
            __cxa_guard_release(&DAT_056c57a8);
          }
          if (((DAT_056c57c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c57c0), iVar1 != 0))
          {
            DAT_056c57b0 = 0x500000002;
            DAT_056c57b8 = &DAT_056c5708;
            __cxa_guard_release(&DAT_056c57c0);
          }
          if (((DAT_056c5818 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c5818), iVar1 != 0))
          {
            DAT_056c57c8 = PTR_DAT_04bb2020 + 0x10;
            DAT_056c57d0 = "@T_Msg_00";
            DAT_056c57e0 = "@T_Name_00";
            DAT_056c57f0 = "@T_Village_00";
            DAT_056c5800 = "@T_Address_00";
            DAT_056c5810 = "@T_AddressAll_00";
            DAT_056c57d8 = DAT_056c57c8;
            DAT_056c57e8 = DAT_056c57c8;
            DAT_056c57f8 = DAT_056c57c8;
            DAT_056c5808 = DAT_056c57c8;
            __cxa_guard_release(&DAT_056c5818);
          }
          if (((DAT_056c58b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c58b0), iVar1 != 0))
          {
            DAT_056c5820 = PTR_DAT_04bb2020 + 0x10;
            DAT_056c5828 = "N_AlignL_00";
            DAT_056c5848 = "N_Align_01";
            DAT_056c5838 = "N_AlignL_01";
            DAT_056c5858 = "N_Align_00";
            DAT_056c5868 = "N_Align_02";
            DAT_056c5878 = "N_Align_03";
            DAT_056c5888 = "N_AlignL_03";
            DAT_056c5898 = "N_AlignR_00";
            DAT_056c58a8 = "N_Align_04";
            DAT_056c5830 = DAT_056c5820;
            DAT_056c5840 = DAT_056c5820;
            DAT_056c5850 = DAT_056c5820;
            DAT_056c5860 = DAT_056c5820;
            DAT_056c5870 = DAT_056c5820;
            DAT_056c5880 = DAT_056c5820;
            DAT_056c5890 = DAT_056c5820;
            DAT_056c58a0 = DAT_056c5820;
            __cxa_guard_release(&DAT_056c58b0);
          }
          local_58 = *param_2;
          local_48 = &DAT_04ae47f0;
          puStack_40 = &DAT_056c57b0;
          local_50 = &DAT_04ae4800;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02f5102c;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02f50fbc;
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
    if (pcVar5[3] != 'N') {
      return;
    }
    if (pcVar5[4] != 'o') {
      return;
    }
    if (pcVar5[5] != 't') {
      return;
    }
    if (pcVar5[6] != 'i') {
      return;
    }
    if (pcVar5[7] != 'c') {
      return;
    }
    if (pcVar5[8] != 'e') {
      return;
    }
    if (pcVar5[9] != '_') {
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
    if (((DAT_056c58e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c58e8), iVar1 != 0)) {
      DAT_056c58b8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c58c0 = "@T_Text_00";
      DAT_056c58e0 = "@T_Guide_00";
      DAT_056c58d0 = "@T_Icon_00";
      DAT_056c58c8 = DAT_056c58b8;
      DAT_056c58d8 = DAT_056c58b8;
      __cxa_guard_release(&DAT_056c58e8);
    }
    local_48 = &DAT_04ae4810;
    puStack_40 = (undefined8 *)0x0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = (undefined *)0x0;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_02f5102c:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

