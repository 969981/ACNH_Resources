
void FUN_034d3564(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
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
      if (((DAT_05762e88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762e88), iVar1 != 0)) {
        DAT_05762e68 = PTR_DAT_04bb2020 + 0x10;
        DAT_05762e70 = "@T_Name_00";
        DAT_05762e80 = "@T_PlannerID_00";
        DAT_05762e78 = DAT_05762e68;
        __cxa_guard_release(&DAT_05762e88);
      }
      if (((DAT_05762ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762ea0), iVar1 != 0)) {
        DAT_05762e90 = PTR_DAT_04bb2020 + 0x10;
        DAT_05762e98 = "P_PlayerBase_00";
        __cxa_guard_release(&DAT_05762ea0);
      }
      local_48 = *param_2;
      local_28 = 1;
      local_38 = &DAT_04b318d8;
      puStack_30 = (undefined8 *)0x0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_04b318e8;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_034d3630;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05762e20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762e20), iVar1 != 0)) {
    DAT_05762e00 = PTR_DAT_04bb2020 + 0x10;
    DAT_05762e08 = "Empty";
    DAT_05762e18 = &DAT_0407ebb1;
    DAT_05762e10 = DAT_05762e00;
    __cxa_guard_release(&DAT_05762e20);
  }
  if (((DAT_05762e38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762e38), iVar1 != 0)) {
    DAT_05762e28 = 0x100000002;
    DAT_05762e30 = &DAT_05762e00;
    __cxa_guard_release(&DAT_05762e38);
  }
  if (((DAT_05762e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762e60), iVar1 != 0)) {
    DAT_05762e40 = PTR_DAT_04bb2020 + 0x10;
    DAT_05762e48 = "@T_Text_00";
    DAT_05762e58 = "@T_Empty_00";
    DAT_05762e50 = DAT_05762e40;
    __cxa_guard_release(&DAT_05762e60);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_28 = 0;
  local_38 = &DAT_04b318c8;
  puStack_30 = &DAT_05762e28;
  local_40 = (undefined *)0x0;
  local_48 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_034d3630:
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

