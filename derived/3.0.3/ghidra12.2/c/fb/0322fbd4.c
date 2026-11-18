
void FUN_0322fbd4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
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
      if (pcVar5[3] != 'C') {
        return;
      }
      if (pcVar5[4] != 'o') {
        return;
      }
      if (pcVar5[5] != 'u') {
        return;
      }
      if (pcVar5[6] != 'n') {
        return;
      }
      if (pcVar5[7] != 't') {
        return;
      }
      if (pcVar5[8] != 'e') {
        return;
      }
      if (pcVar5[9] != 'r') {
        return;
      }
      if (pcVar5[10] != '_') {
        return;
      }
      puVar6 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc5288 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5288), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc5280 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc5288);
      }
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc5280);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_05723928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723928), iVar1 != 0)) {
        DAT_05723918 = PTR_DAT_04bb2020 + 0x10;
        DAT_05723920 = "@T_Unit_00";
        __cxa_guard_release(&DAT_05723928);
      }
      local_38 = &DAT_04b11ed0;
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar6[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_0322fc60;
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
LAB_0322fc60:
  local_28 = 0;
  local_30 = 0;
  local_40 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

