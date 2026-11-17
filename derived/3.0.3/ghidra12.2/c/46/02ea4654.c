
void FUN_02ea4654(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_056a3638 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3638), iVar1 != 0)) {
        DAT_056a35f8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056a3600 = "IconType";
        DAT_056a3610 = &DAT_0407ebb1;
        DAT_056a3630 = &DAT_0407ebb1;
        DAT_056a3620 = "BtnListRandom";
        DAT_056a3608 = DAT_056a35f8;
        DAT_056a3618 = DAT_056a35f8;
        DAT_056a3628 = DAT_056a35f8;
        __cxa_guard_release(&DAT_056a3638);
      }
      if (((DAT_056a3650 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3650), iVar1 != 0)) {
        DAT_056a3640 = 0x200000002;
        DAT_056a3648 = &DAT_056a35f8;
        __cxa_guard_release(&DAT_056a3650);
      }
      if (((DAT_056a3668 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3668), iVar1 != 0)) {
        DAT_056a3658 = PTR_DAT_04bb2020 + 0x10;
        DAT_056a3660 = "@T_Name_00";
        __cxa_guard_release(&DAT_056a3668);
      }
      if (((DAT_056a3680 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3680), iVar1 != 0)) {
        DAT_056a3670 = PTR_DAT_04bb2020 + 0x10;
        DAT_056a3678 = "P_Icon_00";
        __cxa_guard_release(&DAT_056a3680);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04adbc78;
      puStack_40 = &DAT_056a3640;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04adbc88;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02ea46fc;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056a35f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a35f0), iVar1 != 0)) {
    DAT_056a35e0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056a35e8 = "@T_Header_00";
    __cxa_guard_release(&DAT_056a35f0);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04adbc68;
  puStack_40 = (undefined8 *)0x0;
  local_38 = 0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_50 = (undefined *)0x0;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02ea46fc:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

