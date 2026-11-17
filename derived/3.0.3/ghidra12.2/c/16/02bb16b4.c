
void FUN_02bb16b4(undefined8 param_1,undefined8 *param_2)

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
        *(undefined ***)PTR_DAT_04bc4e38 = &PTR_LAB_04aa7298;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_05643058 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643058), iVar1 != 0)) {
        DAT_05643018 = PTR_DAT_04bb2020 + 0x10;
        DAT_05643020 = "IconType";
        DAT_05643030 = &DAT_0407ebb1;
        DAT_05643050 = &DAT_0407ebb1;
        DAT_05643040 = "BtnListRandom";
        DAT_05643028 = DAT_05643018;
        DAT_05643038 = DAT_05643018;
        DAT_05643048 = DAT_05643018;
        __cxa_guard_release(&DAT_05643058);
      }
      if (((DAT_05643070 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643070), iVar1 != 0)) {
        DAT_05643060 = 0x200000002;
        DAT_05643068 = &DAT_05643018;
        __cxa_guard_release(&DAT_05643070);
      }
      if (((DAT_05643088 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643088), iVar1 != 0)) {
        DAT_05643078 = PTR_DAT_04bb2020 + 0x10;
        DAT_05643080 = "@T_Name_00";
        __cxa_guard_release(&DAT_05643088);
      }
      if (((DAT_056430a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056430a0), iVar1 != 0)) {
        DAT_05643090 = PTR_DAT_04bb2020 + 0x10;
        DAT_05643098 = "P_Icon_00";
        __cxa_guard_release(&DAT_056430a0);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04aa71b0;
      puStack_40 = &DAT_05643060;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04aa71c0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02bb175c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05643010 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05643010), iVar1 != 0)) {
    DAT_05643000 = PTR_DAT_04bb2020 + 0x10;
    DAT_05643008 = "@T_Header_00";
    __cxa_guard_release(&DAT_05643010);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04aa71a0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = 0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_50 = (undefined *)0x0;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02bb175c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

