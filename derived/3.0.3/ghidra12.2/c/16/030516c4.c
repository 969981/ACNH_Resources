
void FUN_030516c4(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_056dcdb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcdb8), iVar1 != 0)) {
        DAT_056dcd98 = PTR_DAT_04bb2020 + 0x10;
        DAT_056dcda0 = "IconType";
        DAT_056dcdb0 = &DAT_0407ebb1;
        DAT_056dcda8 = DAT_056dcd98;
        __cxa_guard_release(&DAT_056dcdb8);
      }
      if (((DAT_056dcdd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcdd0), iVar1 != 0)) {
        DAT_056dcdc0 = 0x100000002;
        DAT_056dcdc8 = &DAT_056dcd98;
        __cxa_guard_release(&DAT_056dcdd0);
      }
      if (((DAT_056dce18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dce18), iVar1 != 0)) {
        DAT_056dcdd8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056dcde0 = "@T_UseName_00";
        DAT_056dce10 = "@T_NotSpecified_00";
        DAT_056dcdf0 = "@T_UseTypePro_00";
        DAT_056dce00 = "@T_UseType_00";
        DAT_056dcde8 = DAT_056dcdd8;
        DAT_056dcdf8 = DAT_056dcdd8;
        DAT_056dce08 = DAT_056dcdd8;
        __cxa_guard_release(&DAT_056dce18);
      }
      local_48 = &DAT_04af6d50;
      puStack_40 = &DAT_056dcdc0;
      lVar4 = puVar7[2];
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = lVar4 + 0x2c8;
      goto LAB_03051794;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056dcd60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcd60), iVar1 != 0)) {
    DAT_056dcd40 = PTR_DAT_04bb2020 + 0x10;
    DAT_056dcd48 = "Change";
    DAT_056dcd58 = &DAT_0407ebb1;
    DAT_056dcd50 = DAT_056dcd40;
    __cxa_guard_release(&DAT_056dcd60);
  }
  if (((DAT_056dcd78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcd78), iVar1 != 0)) {
    DAT_056dcd68 = 0x100000002;
    DAT_056dcd70 = &DAT_056dcd40;
    __cxa_guard_release(&DAT_056dcd78);
  }
  if (((DAT_056dcd90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dcd90), iVar1 != 0)) {
    DAT_056dcd80 = PTR_DAT_04bb2020 + 0x10;
    DAT_056dcd88 = "@T_Header_00";
    __cxa_guard_release(&DAT_056dcd90);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04af6d40;
  puStack_40 = &DAT_056dcd68;
  uStack_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_03051794:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

