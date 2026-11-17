
void FUN_02c4b0b4(undefined8 param_1,undefined8 *param_2)

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
  undefined *puStack_50;
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
      if (pcVar5[3] != 'I') {
        return;
      }
      if (pcVar5[4] != 't') {
        return;
      }
      if (pcVar5[5] != 'e') {
        return;
      }
      if (pcVar5[6] != 'm') {
        return;
      }
      if (pcVar5[7] != 'B') {
        return;
      }
      if (pcVar5[8] != 'a') {
        return;
      }
      if (pcVar5[9] != 'l') {
        return;
      }
      if (pcVar5[10] != 'l') {
        return;
      }
      if (pcVar5[0xb] != 'o') {
        return;
      }
      if (pcVar5[0xc] != 'o') {
        return;
      }
      if (pcVar5[0xd] != 'n') {
        return;
      }
      if (pcVar5[0xe] != '_') {
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4fe0);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fd8);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_0565c198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565c198), iVar1 != 0)) {
        DAT_0565c158 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565c160 = "Guide";
        DAT_0565c170 = &DAT_0407ebb1;
        DAT_0565c190 = &DAT_0407ebb1;
        DAT_0565c180 = "NumRotate";
        DAT_0565c168 = DAT_0565c158;
        DAT_0565c178 = DAT_0565c158;
        DAT_0565c188 = DAT_0565c158;
        __cxa_guard_release(&DAT_0565c198);
      }
      if (((DAT_0565c1b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565c1b0), iVar1 != 0)) {
        DAT_0565c1a0 = 0x200000002;
        DAT_0565c1a8 = &DAT_0565c158;
        __cxa_guard_release(&DAT_0565c1b0);
      }
      if (((DAT_0565c1d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565c1d8), iVar1 != 0)) {
        DAT_0565c1b8 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565c1c0 = "@T_Guide_00";
        DAT_0565c1d0 = "@T_Icon_00";
        DAT_0565c1c8 = DAT_0565c1b8;
        __cxa_guard_release(&DAT_0565c1d8);
      }
      if (((DAT_0565c1f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565c1f0), iVar1 != 0)) {
        DAT_0565c1e0 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565c1e8 = "P_TextSize_00";
        __cxa_guard_release(&DAT_0565c1f0);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04ab0e68;
      puStack_40 = &DAT_0565c1a0;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_50 = &DAT_04ab0e78;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_02c4b1a0;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_0565c0d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565c0d8), iVar1 != 0)) {
    DAT_0565c018 = PTR_DAT_04bb2020 + 0x10;
    DAT_0565c020 = "MatchingModeIn";
    DAT_0565c030 = &DAT_0407ebb1;
    DAT_0565c050 = &DAT_0407ebb1;
    DAT_0565c070 = &DAT_0407ebb1;
    DAT_0565c040 = "MatchingModeOut";
    DAT_0565c060 = &DAT_040fe5ab;
    DAT_0565c080 = "NPCIconType";
    DAT_0565c0a0 = "ColorType";
    DAT_0565c090 = &DAT_0407ebb1;
    DAT_0565c0b0 = &DAT_0407ebb1;
    DAT_0565c0c0 = "Cover";
    DAT_0565c0d0 = &DAT_0407ebb1;
    DAT_0565c028 = DAT_0565c018;
    DAT_0565c038 = DAT_0565c018;
    DAT_0565c048 = DAT_0565c018;
    DAT_0565c058 = DAT_0565c018;
    DAT_0565c068 = DAT_0565c018;
    DAT_0565c078 = DAT_0565c018;
    DAT_0565c088 = DAT_0565c018;
    DAT_0565c098 = DAT_0565c018;
    DAT_0565c0a8 = DAT_0565c018;
    DAT_0565c0b8 = DAT_0565c018;
    DAT_0565c0c8 = DAT_0565c018;
    __cxa_guard_release(&DAT_0565c0d8);
  }
  if (((DAT_0565c0f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565c0f0), iVar1 != 0)) {
    DAT_0565c0e0 = 0x600000002;
    DAT_0565c0e8 = &DAT_0565c018;
    __cxa_guard_release(&DAT_0565c0f0);
  }
  if (((DAT_0565c128 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565c128), iVar1 != 0)) {
    DAT_0565c0f8 = PTR_DAT_04bb2020 + 0x10;
    DAT_0565c100 = "@T_Title_00";
    DAT_0565c120 = "@T_Title_01";
    DAT_0565c110 = "@T_MatchingTitle_00";
    DAT_0565c108 = DAT_0565c0f8;
    DAT_0565c118 = DAT_0565c0f8;
    __cxa_guard_release(&DAT_0565c128);
  }
  if (((DAT_0565c150 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565c150), iVar1 != 0)) {
    DAT_0565c130 = PTR_DAT_04bb2020 + 0x10;
    DAT_0565c138 = "P_NPCIcon_00";
    DAT_0565c148 = "P_NPCIcon_01";
    DAT_0565c140 = DAT_0565c130;
    __cxa_guard_release(&DAT_0565c150);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_58 = *param_2;
  local_48 = &DAT_04ab0e48;
  puStack_40 = &DAT_0565c0e0;
  local_38 = 2;
  puStack_50 = &DAT_04ab0e58;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02c4b1a0:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

