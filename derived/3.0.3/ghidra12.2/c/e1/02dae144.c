
void FUN_02dae144(undefined8 param_1,undefined8 *param_2)

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
  undefined8 local_38;
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
      if (pcVar5[3] != 'W') {
        return;
      }
      if (pcVar5[4] != 'i') {
        return;
      }
      if (pcVar5[5] != 'p') {
        return;
      }
      if (pcVar5[6] != 'e') {
        return;
      }
      if (pcVar5[7] != '_') {
        return;
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
      if (((DAT_05689b88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05689b88), iVar1 != 0)) {
        DAT_05689b78 = PTR_DAT_04bb2020 + 0x10;
        DAT_05689b80 = "N_Capture_00";
        __cxa_guard_release(&DAT_05689b88);
      }
      local_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_04ac65b8;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_02dae1d0;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = (undefined *)0x0;
  local_48 = *param_2;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02dae1d0:
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

