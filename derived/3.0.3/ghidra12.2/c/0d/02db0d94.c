
void FUN_02db0d94(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 *puStack_30;
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
      if (pcVar5[3] != 'S') {
        return;
      }
      if (pcVar5[4] != 'e') {
        return;
      }
      if (pcVar5[5] != 'l') {
        return;
      }
      if (pcVar5[6] != 'B') {
        return;
      }
      if (pcVar5[7] != 't') {
        return;
      }
      if (pcVar5[8] != 'n') {
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
      if (((DAT_05689d88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05689d88), iVar1 != 0)) {
        DAT_05689d78 = PTR_DAT_04bb2020 + 0x10;
        DAT_05689d80 = "@T_Text_00";
        __cxa_guard_release(&DAT_05689d88);
      }
      local_38 = &DAT_04ac6fc8;
      puStack_30 = (undefined8 *)0x0;
      local_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = (undefined *)0x0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02db0e60;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05689d30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05689d30), iVar1 != 0)) {
    DAT_05689cd0 = PTR_DAT_04bb2020 + 0x10;
    DAT_05689cd8 = "BtnNum";
    DAT_05689ce8 = &DAT_0407ebb1;
    DAT_05689d08 = &DAT_0407ebb1;
    DAT_05689d28 = &DAT_0407ebb1;
    DAT_05689cf8 = &DAT_040fe5ab;
    DAT_05689d18 = "TypeH";
    DAT_05689ce0 = DAT_05689cd0;
    DAT_05689cf0 = DAT_05689cd0;
    DAT_05689d00 = DAT_05689cd0;
    DAT_05689d10 = DAT_05689cd0;
    DAT_05689d20 = DAT_05689cd0;
    __cxa_guard_release(&DAT_05689d30);
  }
  if (((DAT_05689d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05689d48), iVar1 != 0)) {
    DAT_05689d38 = 0x300000002;
    DAT_05689d40 = &DAT_05689cd0;
    __cxa_guard_release(&DAT_05689d48);
  }
  if (((DAT_05689d70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05689d70), iVar1 != 0)) {
    DAT_05689d50 = PTR_DAT_04bb2020 + 0x10;
    DAT_05689d58 = "N_Size_00";
    DAT_05689d68 = "N_InOut_00";
    DAT_05689d60 = DAT_05689d50;
    __cxa_guard_release(&DAT_05689d70);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = *param_2;
  local_38 = (undefined *)0x0;
  puStack_30 = &DAT_05689d38;
  local_40 = &DAT_04ac6fb8;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02db0e60:
  local_28 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

