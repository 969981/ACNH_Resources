
void FUN_02dc02f4(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_0568ab70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568ab70), iVar1 != 0)) {
        DAT_0568aa70 = PTR_DAT_04bb2020 + 0x10;
        DAT_0568aa78 = "State";
        DAT_0568aa88 = &DAT_0407ebb1;
        DAT_0568aaa8 = &DAT_0407ebb1;
        DAT_0568aac8 = &DAT_0407ebb1;
        DAT_0568aa98 = "BtnListRandom";
        DAT_0568aab8 = &DAT_040734ad;
        DAT_0568aad8 = "Remake";
        DAT_0568aaf8 = "CanMake";
        DAT_0568ab18 = "BoardColor";
        DAT_0568ab38 = "PocketNum";
        DAT_0568aae8 = &DAT_0407ebb1;
        DAT_0568ab08 = &DAT_0407ebb1;
        DAT_0568ab28 = &DAT_0407ebb1;
        DAT_0568ab48 = &DAT_0407ebb1;
        DAT_0568ab58 = "StorageNum";
        DAT_0568ab68 = &DAT_0407ebb1;
        DAT_0568aa80 = DAT_0568aa70;
        DAT_0568aa90 = DAT_0568aa70;
        DAT_0568aaa0 = DAT_0568aa70;
        DAT_0568aab0 = DAT_0568aa70;
        DAT_0568aac0 = DAT_0568aa70;
        DAT_0568aad0 = DAT_0568aa70;
        DAT_0568aae0 = DAT_0568aa70;
        DAT_0568aaf0 = DAT_0568aa70;
        DAT_0568ab00 = DAT_0568aa70;
        DAT_0568ab10 = DAT_0568aa70;
        DAT_0568ab20 = DAT_0568aa70;
        DAT_0568ab30 = DAT_0568aa70;
        DAT_0568ab40 = DAT_0568aa70;
        DAT_0568ab50 = DAT_0568aa70;
        DAT_0568ab60 = DAT_0568aa70;
        __cxa_guard_release(&DAT_0568ab70);
      }
      if (((DAT_0568ab88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568ab88), iVar1 != 0)) {
        DAT_0568ab78 = 0x800000002;
        DAT_0568ab80 = &DAT_0568aa70;
        __cxa_guard_release(&DAT_0568ab88);
      }
      if (((DAT_0568abb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568abb0), iVar1 != 0)) {
        DAT_0568ab90 = PTR_DAT_04bb2020 + 0x10;
        DAT_0568ab98 = "@T_New_00";
        DAT_0568aba8 = "@T_CanMake_00";
        DAT_0568aba0 = DAT_0568ab90;
        __cxa_guard_release(&DAT_0568abb0);
      }
      if (((DAT_0568abe8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568abe8), iVar1 != 0)) {
        DAT_0568abb8 = PTR_DAT_04bb2020 + 0x10;
        DAT_0568abc0 = "N_Align_01";
        DAT_0568abe0 = "P_Icon_01";
        DAT_0568abd0 = "P_Icon_00";
        DAT_0568abc8 = DAT_0568abb8;
        DAT_0568abd8 = DAT_0568abb8;
        __cxa_guard_release(&DAT_0568abe8);
      }
      local_58 = *param_2;
      local_38 = 2;
      local_48 = &DAT_04ac91c0;
      puStack_40 = &DAT_0568ab78;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04ac91d0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02dc03c4;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_0568aa18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568aa18), iVar1 != 0)) {
    DAT_0568a998 = PTR_DAT_04bb2020 + 0x10;
    DAT_0568a9a0 = "Change";
    DAT_0568a9b0 = &DAT_0407ebb1;
    DAT_0568a9d0 = &DAT_0407ebb1;
    DAT_0568a9f0 = &DAT_0407ebb1;
    DAT_0568a9c0 = "Empty";
    DAT_0568a9e0 = "Share";
    DAT_0568aa00 = "CategoryNum";
    DAT_0568aa10 = &DAT_0407ebb1;
    DAT_0568a9a8 = DAT_0568a998;
    DAT_0568a9b8 = DAT_0568a998;
    DAT_0568a9c8 = DAT_0568a998;
    DAT_0568a9d8 = DAT_0568a998;
    DAT_0568a9e8 = DAT_0568a998;
    DAT_0568a9f8 = DAT_0568a998;
    DAT_0568aa08 = DAT_0568a998;
    __cxa_guard_release(&DAT_0568aa18);
  }
  if (((DAT_0568aa30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568aa30), iVar1 != 0)) {
    DAT_0568aa20 = 0x400000002;
    DAT_0568aa28 = &DAT_0568a998;
    __cxa_guard_release(&DAT_0568aa30);
  }
  if (((DAT_0568aa68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0568aa68), iVar1 != 0)) {
    DAT_0568aa38 = PTR_DAT_04bb2020 + 0x10;
    DAT_0568aa40 = "@T_L_00";
    DAT_0568aa60 = "@T_Empty_00";
    DAT_0568aa50 = "@T_R_00";
    DAT_0568aa48 = DAT_0568aa38;
    DAT_0568aa58 = DAT_0568aa38;
    __cxa_guard_release(&DAT_0568aa68);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = 0;
  local_48 = &DAT_04ac91b0;
  puStack_40 = &DAT_0568aa20;
  local_50 = (undefined *)0x0;
  local_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02dc03c4:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

