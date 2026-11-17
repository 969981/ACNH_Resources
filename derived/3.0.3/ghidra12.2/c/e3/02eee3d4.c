
void FUN_02eee3d4(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_056b4c08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b4c08), iVar1 != 0)) {
        DAT_056b4be8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b4bf0 = &DAT_040a0741;
        DAT_056b4c00 = &DAT_0407ebb1;
        DAT_056b4bf8 = DAT_056b4be8;
        __cxa_guard_release(&DAT_056b4c08);
      }
      if (((DAT_056b4c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b4c20), iVar1 != 0)) {
        DAT_056b4c10 = 0x100000002;
        DAT_056b4c18 = &DAT_056b4be8;
        __cxa_guard_release(&DAT_056b4c20);
      }
      if (((DAT_056b4c38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b4c38), iVar1 != 0)) {
        DAT_056b4c28 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b4c30 = "@T_Num_00";
        __cxa_guard_release(&DAT_056b4c38);
      }
      if (((DAT_056b4c50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b4c50), iVar1 != 0)) {
        DAT_056b4c40 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b4c48 = "P_Icon_00";
        __cxa_guard_release(&DAT_056b4c50);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04adf7f8;
      puStack_40 = &DAT_056b4c10;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04adf808;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02eee47c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056b4be0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b4be0), iVar1 != 0)) {
    DAT_056b4bd0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056b4bd8 = "@T_Header_00";
    __cxa_guard_release(&DAT_056b4be0);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04adf7e8;
  puStack_40 = (undefined8 *)0x0;
  local_38 = 0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_50 = (undefined *)0x0;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02eee47c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

