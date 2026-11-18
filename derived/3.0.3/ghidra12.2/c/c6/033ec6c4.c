
void FUN_033ec6c4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
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
      if (pcVar5[6] != 'P') {
        return;
      }
      if (pcVar5[7] != 'r') {
        return;
      }
      if (pcVar5[8] != 'e') {
        return;
      }
      if (pcVar5[9] != 's') {
        return;
      }
      if (pcVar5[10] != 's') {
        return;
      }
      if (pcVar5[0xb] != 'A') {
        return;
      }
      if (pcVar5[0xc] != '_') {
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
      if (((DAT_0574ad80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574ad80), iVar1 != 0)) {
        DAT_0574ad60 = PTR_DAT_04bb2020 + 0x10;
        DAT_0574ad68 = "Visible";
        DAT_0574ad78 = &DAT_0407ebb1;
        DAT_0574ad70 = DAT_0574ad60;
        __cxa_guard_release(&DAT_0574ad80);
      }
      if (((DAT_0574ad98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574ad98), iVar1 != 0)) {
        DAT_0574ad88 = 0x100000002;
        DAT_0574ad90 = &DAT_0574ad60;
        __cxa_guard_release(&DAT_0574ad98);
      }
      if (((DAT_0574adb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574adb0), iVar1 != 0)) {
        DAT_0574ada0 = PTR_DAT_04bb2020 + 0x10;
        DAT_0574ada8 = "@T_PressA_00";
        __cxa_guard_release(&DAT_0574adb0);
      }
      local_48 = &DAT_04b28a78;
      puStack_40 = &DAT_0574ad88;
      lVar4 = puVar7[2];
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = lVar4 + 0x2c8;
      goto LAB_033ec794;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_0574ad08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574ad08), iVar1 != 0)) {
    DAT_0574acc8 = PTR_DAT_04bb2020 + 0x10;
    DAT_0574acd0 = "InPressA";
    DAT_0574ace0 = &DAT_0407ebb1;
    DAT_0574ad00 = &DAT_0407ebb1;
    DAT_0574acf0 = "InSaveDataSetting";
    DAT_0574acd8 = DAT_0574acc8;
    DAT_0574ace8 = DAT_0574acc8;
    DAT_0574acf8 = DAT_0574acc8;
    __cxa_guard_release(&DAT_0574ad08);
  }
  if (((DAT_0574ad20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574ad20), iVar1 != 0)) {
    DAT_0574ad10 = 0x200000002;
    DAT_0574ad18 = &DAT_0574acc8;
    __cxa_guard_release(&DAT_0574ad20);
  }
  if (((DAT_0574ad58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0574ad58), iVar1 != 0)) {
    DAT_0574ad28 = PTR_DAT_04bb2020 + 0x10;
    DAT_0574ad30 = "@T_Icon_00";
    DAT_0574ad50 = "@T_Text_02";
    DAT_0574ad40 = "@T_Text_00";
    DAT_0574ad38 = DAT_0574ad28;
    DAT_0574ad48 = DAT_0574ad28;
    __cxa_guard_release(&DAT_0574ad58);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04b28a68;
  puStack_40 = &DAT_0574ad10;
  uStack_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_033ec794:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

