
void FUN_02e72284(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if (pcVar5[3] != 'P') {
        return;
      }
      if (pcVar5[4] != 'h') {
        return;
      }
      if (pcVar5[5] != 'o') {
        return;
      }
      if (pcVar5[6] != 't') {
        return;
      }
      if (pcVar5[7] != 'o') {
        return;
      }
      if (pcVar5[8] != 'B') {
        return;
      }
      if (pcVar5[9] != 't') {
        return;
      }
      if (pcVar5[10] != 'n') {
        return;
      }
      if (pcVar5[0xb] != '_') {
        return;
      }
      puVar6 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e38);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_0569f030 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569f030), iVar1 != 0)) {
        DAT_0569ef70 = PTR_DAT_04bb2020 + 0x10;
        DAT_0569ef78 = "Photo";
        DAT_0569ef88 = &DAT_0407ebb1;
        DAT_0569efa8 = &DAT_0407ebb1;
        DAT_0569efc8 = &DAT_0407ebb1;
        DAT_0569ef98 = "Entry";
        DAT_0569efb8 = "PhotoOnOff";
        DAT_0569efd8 = "TypeRoom";
        DAT_0569eff8 = "State";
        DAT_0569efe8 = &DAT_0407ebb1;
        DAT_0569f008 = &DAT_0407ebb1;
        DAT_0569f018 = "TypeNPCIcon";
        DAT_0569f028 = &DAT_0407ebb1;
        DAT_0569ef80 = DAT_0569ef70;
        DAT_0569ef90 = DAT_0569ef70;
        DAT_0569efa0 = DAT_0569ef70;
        DAT_0569efb0 = DAT_0569ef70;
        DAT_0569efc0 = DAT_0569ef70;
        DAT_0569efd0 = DAT_0569ef70;
        DAT_0569efe0 = DAT_0569ef70;
        DAT_0569eff0 = DAT_0569ef70;
        DAT_0569f000 = DAT_0569ef70;
        DAT_0569f010 = DAT_0569ef70;
        DAT_0569f020 = DAT_0569ef70;
        __cxa_guard_release(&DAT_0569f030);
      }
      if (((DAT_0569f048 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569f048), iVar1 != 0)) {
        DAT_0569f038 = 0x600000002;
        DAT_0569f040 = &DAT_0569ef70;
        __cxa_guard_release(&DAT_0569f048);
      }
      if (((DAT_0569f070 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569f070), iVar1 != 0)) {
        DAT_0569f050 = PTR_DAT_04bb2020 + 0x10;
        DAT_0569f058 = "@T_NumRoom_00";
        DAT_0569f068 = "@T_VIP_00";
        DAT_0569f060 = DAT_0569f050;
        __cxa_guard_release(&DAT_0569f070);
      }
      if (((DAT_0569f098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569f098), iVar1 != 0)) {
        DAT_0569f078 = PTR_DAT_04bb2020 + 0x10;
        DAT_0569f080 = "P_NPCIcon_00";
        DAT_0569f090 = "P_Image_00";
        DAT_0569f088 = DAT_0569f078;
        __cxa_guard_release(&DAT_0569f098);
      }
      local_48 = *param_2;
      local_28 = 2;
      local_38 = &DAT_04ad9318;
      puStack_30 = &DAT_0569f038;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_04ad9328;
      lVar4 = puVar6[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02e72350;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_0569ef28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569ef28), iVar1 != 0)) {
    DAT_0569eec8 = PTR_DAT_04bb2020 + 0x10;
    DAT_0569eed0 = "State";
    DAT_0569eee0 = &DAT_0407ebb1;
    DAT_0569ef00 = &DAT_0407ebb1;
    DAT_0569ef20 = &DAT_0407ebb1;
    DAT_0569eef0 = "EntryL";
    DAT_0569ef10 = "EntryR";
    DAT_0569eed8 = DAT_0569eec8;
    DAT_0569eee8 = DAT_0569eec8;
    DAT_0569eef8 = DAT_0569eec8;
    DAT_0569ef08 = DAT_0569eec8;
    DAT_0569ef18 = DAT_0569eec8;
    __cxa_guard_release(&DAT_0569ef28);
  }
  if (((DAT_0569ef40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569ef40), iVar1 != 0)) {
    DAT_0569ef30 = 0x300000002;
    DAT_0569ef38 = &DAT_0569eec8;
    __cxa_guard_release(&DAT_0569ef40);
  }
  if (((DAT_0569ef68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0569ef68), iVar1 != 0)) {
    DAT_0569ef48 = PTR_DAT_04bb2020 + 0x10;
    DAT_0569ef50 = "@T_Text_00";
    DAT_0569ef60 = "@T_ZL_00";
    DAT_0569ef58 = DAT_0569ef48;
    __cxa_guard_release(&DAT_0569ef68);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_28 = 0;
  local_38 = &DAT_04ad9308;
  puStack_30 = &DAT_0569ef30;
  local_40 = (undefined *)0x0;
  local_48 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02e72350:
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

