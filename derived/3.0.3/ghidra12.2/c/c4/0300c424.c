
void FUN_0300c424(undefined8 param_1,undefined8 *param_2)

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
      if (pcVar5[3] != 'B') {
        return;
      }
      if (pcVar5[4] != 't') {
        return;
      }
      if (pcVar5[5] != 'n') {
        return;
      }
      if (pcVar5[6] != 'C') {
        return;
      }
      if (pcVar5[7] != 'a') {
        return;
      }
      if (pcVar5[8] != 'n') {
        return;
      }
      if (pcVar5[9] != 'v') {
        return;
      }
      if (pcVar5[10] != 'a') {
        return;
      }
      if (pcVar5[0xb] != 's') {
        return;
      }
      if (pcVar5[0xc] != '_') {
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
      if (((DAT_056d6e38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6e38), iVar1 != 0)) {
        DAT_056d6dd8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056d6de0 = "Check";
        DAT_056d6df0 = &DAT_0407ebb1;
        DAT_056d6e10 = &DAT_0407ebb1;
        DAT_056d6e00 = &DAT_040fe5ab;
        DAT_056d6e20 = &DAT_0407c03e;
        DAT_056d6e30 = &DAT_0407ebb1;
        DAT_056d6de8 = DAT_056d6dd8;
        DAT_056d6df8 = DAT_056d6dd8;
        DAT_056d6e08 = DAT_056d6dd8;
        DAT_056d6e18 = DAT_056d6dd8;
        DAT_056d6e28 = DAT_056d6dd8;
        __cxa_guard_release(&DAT_056d6e38);
      }
      if (((DAT_056d6e50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6e50), iVar1 != 0)) {
        DAT_056d6e40 = 0x300000002;
        DAT_056d6e48 = &DAT_056d6dd8;
        __cxa_guard_release(&DAT_056d6e50);
      }
      local_48 = (undefined *)0x0;
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_056d6e40;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_0300c4f4;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056d6da0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6da0), iVar1 != 0)) {
    DAT_056d6d80 = PTR_DAT_04bb2020 + 0x10;
    DAT_056d6d88 = &DAT_040a0741;
    DAT_056d6d98 = &DAT_0407ebb1;
    DAT_056d6d90 = DAT_056d6d80;
    __cxa_guard_release(&DAT_056d6da0);
  }
  if (((DAT_056d6db8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6db8), iVar1 != 0)) {
    DAT_056d6da8 = 0x100000002;
    DAT_056d6db0 = &DAT_056d6d80;
    __cxa_guard_release(&DAT_056d6db8);
  }
  if (((DAT_056d6dd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056d6dd0), iVar1 != 0)) {
    DAT_056d6dc0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056d6dc8 = "@T_Text_00";
    __cxa_guard_release(&DAT_056d6dd0);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04af25e0;
  local_40 = &DAT_056d6da8;
  uStack_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_0300c4f4:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

