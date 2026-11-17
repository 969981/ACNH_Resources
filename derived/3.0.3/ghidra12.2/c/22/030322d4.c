
void FUN_030322d4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
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
      if (((DAT_056dac78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dac78), iVar1 != 0)) {
        DAT_056dac48 = PTR_DAT_04bb2020 + 0x10;
        DAT_056dac50 = "@T_Name_00";
        DAT_056dac70 = "@T_PlayerID_00";
        DAT_056dac60 = "@T_Village_00";
        DAT_056dac58 = DAT_056dac48;
        DAT_056dac68 = DAT_056dac48;
        __cxa_guard_release(&DAT_056dac78);
      }
      local_38 = &DAT_04af50d0;
      puStack_30 = (undefined8 *)0x0;
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_030323a0;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056dac10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dac10), iVar1 != 0)) {
    DAT_056dabf0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056dabf8 = "Empty";
    DAT_056dac08 = &DAT_0407ebb1;
    DAT_056dac00 = DAT_056dabf0;
    __cxa_guard_release(&DAT_056dac10);
  }
  if (((DAT_056dac28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dac28), iVar1 != 0)) {
    DAT_056dac18 = 0x100000002;
    DAT_056dac20 = &DAT_056dabf0;
    __cxa_guard_release(&DAT_056dac28);
  }
  if (((DAT_056dac40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dac40), iVar1 != 0)) {
    DAT_056dac30 = PTR_DAT_04bb2020 + 0x10;
    DAT_056dac38 = "@T_Empty_00";
    __cxa_guard_release(&DAT_056dac40);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = &DAT_04af50c0;
  puStack_30 = &DAT_056dac18;
  uStack_48 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_030323a0:
  local_28 = 0;
  local_40 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

