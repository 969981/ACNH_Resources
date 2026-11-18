
void FUN_03574454(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_0576fa80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576fa80), iVar1 != 0)) {
        DAT_0576f980 = PTR_DAT_04bb2020 + 0x10;
        DAT_0576f988 = "State";
        DAT_0576f998 = &DAT_0407ebb1;
        DAT_0576f9b8 = &DAT_0407ebb1;
        DAT_0576f9d8 = &DAT_0407ebb1;
        DAT_0576f9a8 = "BtnListRandom";
        DAT_0576f9c8 = &DAT_040734ad;
        DAT_0576f9e8 = "Remake";
        DAT_0576fa08 = "CanMake";
        DAT_0576fa28 = "BoardColor";
        DAT_0576fa48 = "PocketNum";
        DAT_0576f9f8 = &DAT_0407ebb1;
        DAT_0576fa18 = &DAT_0407ebb1;
        DAT_0576fa38 = &DAT_0407ebb1;
        DAT_0576fa58 = &DAT_0407ebb1;
        DAT_0576fa68 = "StorageNum";
        DAT_0576fa78 = &DAT_0407ebb1;
        DAT_0576f990 = DAT_0576f980;
        DAT_0576f9a0 = DAT_0576f980;
        DAT_0576f9b0 = DAT_0576f980;
        DAT_0576f9c0 = DAT_0576f980;
        DAT_0576f9d0 = DAT_0576f980;
        DAT_0576f9e0 = DAT_0576f980;
        DAT_0576f9f0 = DAT_0576f980;
        DAT_0576fa00 = DAT_0576f980;
        DAT_0576fa10 = DAT_0576f980;
        DAT_0576fa20 = DAT_0576f980;
        DAT_0576fa30 = DAT_0576f980;
        DAT_0576fa40 = DAT_0576f980;
        DAT_0576fa50 = DAT_0576f980;
        DAT_0576fa60 = DAT_0576f980;
        DAT_0576fa70 = DAT_0576f980;
        __cxa_guard_release(&DAT_0576fa80);
      }
      if (((DAT_0576fa98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576fa98), iVar1 != 0)) {
        DAT_0576fa88 = 0x800000002;
        DAT_0576fa90 = &DAT_0576f980;
        __cxa_guard_release(&DAT_0576fa98);
      }
      if (((DAT_0576fac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576fac0), iVar1 != 0)) {
        DAT_0576faa0 = PTR_DAT_04bb2020 + 0x10;
        DAT_0576faa8 = "@T_New_00";
        DAT_0576fab8 = "@T_CanMake_00";
        DAT_0576fab0 = DAT_0576faa0;
        __cxa_guard_release(&DAT_0576fac0);
      }
      if (((DAT_0576faf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576faf8), iVar1 != 0)) {
        DAT_0576fac8 = PTR_DAT_04bb2020 + 0x10;
        DAT_0576fad0 = "N_Align_01";
        DAT_0576faf0 = "P_Icon_01";
        DAT_0576fae0 = "P_Icon_00";
        DAT_0576fad8 = DAT_0576fac8;
        DAT_0576fae8 = DAT_0576fac8;
        __cxa_guard_release(&DAT_0576faf8);
      }
      local_58 = *param_2;
      local_38 = 2;
      local_48 = &DAT_04b3bcd0;
      puStack_40 = &DAT_0576fa88;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04b3bce0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_03574524;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_0576f928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576f928), iVar1 != 0)) {
    DAT_0576f8a8 = PTR_DAT_04bb2020 + 0x10;
    DAT_0576f8b0 = "Change";
    DAT_0576f8c0 = &DAT_0407ebb1;
    DAT_0576f8e0 = &DAT_0407ebb1;
    DAT_0576f900 = &DAT_0407ebb1;
    DAT_0576f8d0 = "Empty";
    DAT_0576f8f0 = "Share";
    DAT_0576f910 = "CategoryNum";
    DAT_0576f920 = &DAT_0407ebb1;
    DAT_0576f8b8 = DAT_0576f8a8;
    DAT_0576f8c8 = DAT_0576f8a8;
    DAT_0576f8d8 = DAT_0576f8a8;
    DAT_0576f8e8 = DAT_0576f8a8;
    DAT_0576f8f8 = DAT_0576f8a8;
    DAT_0576f908 = DAT_0576f8a8;
    DAT_0576f918 = DAT_0576f8a8;
    __cxa_guard_release(&DAT_0576f928);
  }
  if (((DAT_0576f940 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576f940), iVar1 != 0)) {
    DAT_0576f930 = 0x400000002;
    DAT_0576f938 = &DAT_0576f8a8;
    __cxa_guard_release(&DAT_0576f940);
  }
  if (((DAT_0576f978 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576f978), iVar1 != 0)) {
    DAT_0576f948 = PTR_DAT_04bb2020 + 0x10;
    DAT_0576f950 = "@T_L_00";
    DAT_0576f970 = "@T_Empty_00";
    DAT_0576f960 = "@T_R_00";
    DAT_0576f958 = DAT_0576f948;
    DAT_0576f968 = DAT_0576f948;
    __cxa_guard_release(&DAT_0576f978);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = 0;
  local_48 = &DAT_04b3bcc0;
  puStack_40 = &DAT_0576f930;
  local_50 = (undefined *)0x0;
  local_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_03574524:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

