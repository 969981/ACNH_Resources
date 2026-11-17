
void FUN_02bbaec4(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_05643f00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643f00), iVar1 != 0)) {
        DAT_05643ee0 = PTR_DAT_04bb2020 + 0x10;
        DAT_05643ee8 = &DAT_040fe5ab;
        DAT_05643ef8 = &DAT_0407ebb1;
        DAT_05643ef0 = DAT_05643ee0;
        __cxa_guard_release(&DAT_05643f00);
      }
      if (((DAT_05643f18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643f18), iVar1 != 0)) {
        DAT_05643f08 = 0x100000002;
        DAT_05643f10 = &DAT_05643ee0;
        __cxa_guard_release(&DAT_05643f18);
      }
      if (((DAT_05643f40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643f40), iVar1 != 0)) {
        DAT_05643f20 = PTR_DAT_04bb2020 + 0x10;
        DAT_05643f28 = "@T_Village_00";
        DAT_05643f38 = "@T_Name_00";
        DAT_05643f30 = DAT_05643f20;
        __cxa_guard_release(&DAT_05643f40);
      }
      local_48 = &DAT_04aa7b60;
      puStack_40 = &DAT_05643f08;
      lVar4 = puVar7[2];
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02bbaf94;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05643e78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643e78), iVar1 != 0)) {
    DAT_05643e38 = PTR_DAT_04bb2020 + 0x10;
    DAT_05643e40 = "Empty";
    DAT_05643e50 = &DAT_0407ebb1;
    DAT_05643e70 = &DAT_0407ebb1;
    DAT_05643e60 = "Share";
    DAT_05643e48 = DAT_05643e38;
    DAT_05643e58 = DAT_05643e38;
    DAT_05643e68 = DAT_05643e38;
    __cxa_guard_release(&DAT_05643e78);
  }
  if (((DAT_05643e90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643e90), iVar1 != 0)) {
    DAT_05643e80 = 0x200000002;
    DAT_05643e88 = &DAT_05643e38;
    __cxa_guard_release(&DAT_05643e90);
  }
  if (((DAT_05643ed8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643ed8), iVar1 != 0)) {
    DAT_05643e98 = PTR_DAT_04bb2020 + 0x10;
    DAT_05643ea0 = "@T_Text_00";
    DAT_05643ed0 = "@T_Empty_00";
    DAT_05643eb0 = "@T_R_00";
    DAT_05643ec0 = "@T_L_00";
    DAT_05643ea8 = DAT_05643e98;
    DAT_05643eb8 = DAT_05643e98;
    DAT_05643ec8 = DAT_05643e98;
    __cxa_guard_release(&DAT_05643ed8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04aa7b50;
  puStack_40 = &DAT_05643e80;
  uStack_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02bbaf94:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

