
void FUN_02fd4d14(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_056d1d10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d1d10), iVar1 != 0)) {
        DAT_056d1cf0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056d1cf8 = &DAT_040f4153;
        DAT_056d1d08 = &DAT_0407ebb1;
        DAT_056d1d00 = DAT_056d1cf0;
        __cxa_guard_release(&DAT_056d1d10);
      }
      if (((DAT_056d1d28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d1d28), iVar1 != 0)) {
        DAT_056d1d18 = 0x100000002;
        DAT_056d1d20 = &DAT_056d1cf0;
        __cxa_guard_release(&DAT_056d1d28);
      }
      if (((DAT_056d1d40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d1d40), iVar1 != 0)) {
        DAT_056d1d30 = PTR_DAT_04bb2020 + 0x10;
        DAT_056d1d38 = "@T_Text_00";
        __cxa_guard_release(&DAT_056d1d40);
      }
      if (((DAT_056d1d58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d1d58), iVar1 != 0)) {
        DAT_056d1d48 = PTR_DAT_04bb2020 + 0x10;
        DAT_056d1d50 = "P_Icon_00";
        __cxa_guard_release(&DAT_056d1d58);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04aee5d0;
      puStack_40 = &DAT_056d1d18;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04aee5e0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02fd4de4;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056d1ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d1ca8), iVar1 != 0)) {
    DAT_056d1c48 = PTR_DAT_04bb2020 + 0x10;
    DAT_056d1c50 = "MusicOnOff";
    DAT_056d1c60 = &DAT_0407ebb1;
    DAT_056d1c80 = &DAT_0407ebb1;
    DAT_056d1ca0 = &DAT_0407ebb1;
    DAT_056d1c70 = "TitleLoop";
    DAT_056d1c90 = "Empty";
    DAT_056d1c58 = DAT_056d1c48;
    DAT_056d1c68 = DAT_056d1c48;
    DAT_056d1c78 = DAT_056d1c48;
    DAT_056d1c88 = DAT_056d1c48;
    DAT_056d1c98 = DAT_056d1c48;
    __cxa_guard_release(&DAT_056d1ca8);
  }
  if (((DAT_056d1cc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d1cc0), iVar1 != 0)) {
    DAT_056d1cb0 = 0x300000002;
    DAT_056d1cb8 = &DAT_056d1c48;
    __cxa_guard_release(&DAT_056d1cc0);
  }
  if (((DAT_056d1ce8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d1ce8), iVar1 != 0)) {
    DAT_056d1cc8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056d1cd0 = "@T_Name_01";
    DAT_056d1ce0 = "@T_Empty_00";
    DAT_056d1cd8 = DAT_056d1cc8;
    __cxa_guard_release(&DAT_056d1ce8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = 0;
  local_48 = &DAT_04aee5c0;
  puStack_40 = &DAT_056d1cb0;
  local_50 = (undefined *)0x0;
  local_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02fd4de4:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

