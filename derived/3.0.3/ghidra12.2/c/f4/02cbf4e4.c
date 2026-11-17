
void FUN_02cbf4e4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if (pcVar5[3] != 'P') {
        return;
      }
      if (pcVar5[4] != 'h') {
        return;
      }
      if (pcVar5[5] != 'o') {
        return;
      }
      if (pcVar5[6] != 't') {
        return;
      }
      if (pcVar5[7] != 'o') {
        return;
      }
      if (pcVar5[8] != 'B') {
        return;
      }
      if (pcVar5[9] != 't') {
        return;
      }
      if (pcVar5[10] != 'n') {
        return;
      }
      if (pcVar5[0xb] != '_') {
        return;
      }
      puVar6 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e38);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_05668028 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05668028), iVar1 != 0)) {
        DAT_05667f68 = PTR_DAT_04bb2020 + 0x10;
        DAT_05667f70 = &DAT_040fe5ab;
        DAT_05667f80 = &DAT_0407ebb1;
        DAT_05667fa0 = &DAT_0407ebb1;
        DAT_05667fc0 = &DAT_0407ebb1;
        DAT_05667f90 = "State";
        DAT_05667fb0 = "Photo";
        DAT_05667fd0 = "Entry";
        DAT_05667ff0 = "IconOnOff";
        DAT_05667fe0 = &DAT_0407ebb1;
        DAT_05668000 = &DAT_0407ebb1;
        DAT_05668010 = "TextOnOff";
        DAT_05668020 = &DAT_0407ebb1;
        DAT_05667f78 = DAT_05667f68;
        DAT_05667f88 = DAT_05667f68;
        DAT_05667f98 = DAT_05667f68;
        DAT_05667fa8 = DAT_05667f68;
        DAT_05667fb8 = DAT_05667f68;
        DAT_05667fc8 = DAT_05667f68;
        DAT_05667fd8 = DAT_05667f68;
        DAT_05667fe8 = DAT_05667f68;
        DAT_05667ff8 = DAT_05667f68;
        DAT_05668008 = DAT_05667f68;
        DAT_05668018 = DAT_05667f68;
        __cxa_guard_release(&DAT_05668028);
      }
      if (((DAT_05668040 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05668040), iVar1 != 0)) {
        DAT_05668030 = 0x600000002;
        DAT_05668038 = &DAT_05667f68;
        __cxa_guard_release(&DAT_05668040);
      }
      if (((DAT_05668068 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05668068), iVar1 != 0)) {
        DAT_05668048 = PTR_DAT_04bb2020 + 0x10;
        DAT_05668050 = "@T_Title_00";
        DAT_05668060 = "@T_Title_02";
        DAT_05668058 = DAT_05668048;
        __cxa_guard_release(&DAT_05668068);
      }
      if (((DAT_056680a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056680a0), iVar1 != 0)) {
        DAT_05668070 = PTR_DAT_04bb2020 + 0x10;
        DAT_05668078 = "P_NPCIcon_00";
        DAT_05668098 = "P_Image_00";
        DAT_05668088 = "P_NPCIcon_01";
        DAT_05668080 = DAT_05668070;
        DAT_05668090 = DAT_05668070;
        __cxa_guard_release(&DAT_056680a0);
      }
      local_48 = *param_2;
      local_28 = 3;
      local_38 = &DAT_04ab6e38;
      puStack_30 = &DAT_05668030;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_04ab6e48;
      lVar4 = puVar6[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02cbf5b0;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05667f20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05667f20), iVar1 != 0)) {
    DAT_05667ec0 = PTR_DAT_04bb2020 + 0x10;
    DAT_05667ec8 = "State";
    DAT_05667ed8 = &DAT_0407ebb1;
    DAT_05667ef8 = &DAT_0407ebb1;
    DAT_05667f18 = &DAT_0407ebb1;
    DAT_05667ee8 = "EntryL";
    DAT_05667f08 = "EntryR";
    DAT_05667ed0 = DAT_05667ec0;
    DAT_05667ee0 = DAT_05667ec0;
    DAT_05667ef0 = DAT_05667ec0;
    DAT_05667f00 = DAT_05667ec0;
    DAT_05667f10 = DAT_05667ec0;
    __cxa_guard_release(&DAT_05667f20);
  }
  if (((DAT_05667f38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05667f38), iVar1 != 0)) {
    DAT_05667f28 = 0x300000002;
    DAT_05667f30 = &DAT_05667ec0;
    __cxa_guard_release(&DAT_05667f38);
  }
  if (((DAT_05667f60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05667f60), iVar1 != 0)) {
    DAT_05667f40 = PTR_DAT_04bb2020 + 0x10;
    DAT_05667f48 = "@T_Text_00";
    DAT_05667f58 = "@T_ZL_00";
    DAT_05667f50 = DAT_05667f40;
    __cxa_guard_release(&DAT_05667f60);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_28 = 0;
  local_38 = &DAT_04ab6e28;
  puStack_30 = &DAT_05667f28;
  local_40 = (undefined *)0x0;
  local_48 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02cbf5b0:
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

