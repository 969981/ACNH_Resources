
void FUN_03520ad4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 local_48;
  undefined8 *local_40;
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
      if (((((pcVar5[3] != 'P') || (pcVar5[4] != 'h')) || (pcVar5[5] != 'o')) ||
          ((pcVar5[6] != 't' || (pcVar5[7] != 'o')))) || (pcVar5[8] != '_')) {
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
        if (pcVar5[8] != 'N') {
          return;
        }
        if (pcVar5[9] != 'e') {
          return;
        }
        if (pcVar5[10] != 'x') {
          return;
        }
        if (pcVar5[0xb] != 't') {
          return;
        }
        if (pcVar5[0xc] != '_') {
          return;
        }
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_05767ee8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05767ee8), iVar1 != 0)) {
        DAT_05767ea8 = PTR_DAT_04bb2020 + 0x10;
        DAT_05767eb0 = "InArrow";
        DAT_05767ec0 = &DAT_0407ebb1;
        DAT_05767ee0 = &DAT_0407ebb1;
        DAT_05767ed0 = "Photo";
        DAT_05767eb8 = DAT_05767ea8;
        DAT_05767ec8 = DAT_05767ea8;
        DAT_05767ed8 = DAT_05767ea8;
        __cxa_guard_release(&DAT_05767ee8);
      }
      if (((DAT_05767f00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05767f00), iVar1 != 0)) {
        DAT_05767ef0 = 0x200000002;
        DAT_05767ef8 = &DAT_05767ea8;
        __cxa_guard_release(&DAT_05767f00);
      }
      if (((DAT_05767f28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05767f28), iVar1 != 0)) {
        DAT_05767f08 = PTR_DAT_04bb2020 + 0x10;
        DAT_05767f10 = "N_Pos_00";
        DAT_05767f20 = "P_Image_00";
        DAT_05767f18 = DAT_05767f08;
        __cxa_guard_release(&DAT_05767f28);
      }
      local_58 = *param_2;
      local_40 = &DAT_05767ef0;
      local_38 = 1;
      local_50 = &DAT_04b353f8;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_03520b90;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05767e88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05767e88), iVar1 != 0)) {
    DAT_05767e68 = PTR_DAT_04bb2020 + 0x10;
    DAT_05767e70 = "Change";
    DAT_05767e80 = &DAT_0407ebb1;
    DAT_05767e78 = DAT_05767e68;
    __cxa_guard_release(&DAT_05767e88);
  }
  if (((DAT_05767ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05767ea0), iVar1 != 0)) {
    DAT_05767e90 = 0x100000002;
    DAT_05767e98 = &DAT_05767e68;
    __cxa_guard_release(&DAT_05767ea0);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = &DAT_05767e90;
  local_50 = (undefined *)0x0;
  local_58 = *param_2;
  local_38 = 2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_03520b90:
  local_48 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

