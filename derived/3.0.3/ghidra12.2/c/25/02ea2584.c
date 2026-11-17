
void FUN_02ea2584(undefined8 param_1,undefined8 *param_2)

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
  undefined8 local_30;
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
      if (pcVar5[3] != 'H') {
        return;
      }
      if (pcVar5[4] != 'o') {
        return;
      }
      if (pcVar5[5] != 't') {
        return;
      }
      if (pcVar5[6] != 'e') {
        return;
      }
      if (pcVar5[7] != 'l') {
        return;
      }
      if (pcVar5[8] != 'T') {
        return;
      }
      if (pcVar5[9] != 'i') {
        return;
      }
      if (pcVar5[10] != 'c') {
        return;
      }
      if (pcVar5[0xb] != 'k') {
        return;
      }
      if (pcVar5[0xc] != 'e') {
        return;
      }
      if (pcVar5[0xd] != 't') {
        return;
      }
      if (pcVar5[0xe] != '_') {
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc5288 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5288), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc5280 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc5288);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5280);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_056a3530 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3530), iVar1 != 0)) {
        DAT_056a3520 = PTR_DAT_04bb2020 + 0x10;
        DAT_056a3528 = "@T_Unit_00";
        __cxa_guard_release(&DAT_056a3530);
      }
      local_38 = &DAT_04adb790;
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_02ea2610;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = (undefined *)0x0;
  uStack_48 = *param_2;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02ea2610:
  local_28 = 0;
  local_30 = 0;
  local_40 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

