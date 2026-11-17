
void FUN_02d88bd4(undefined8 param_1,undefined8 *param_2)

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
  undefined *puStack_40;
  undefined *local_38;
  undefined8 uStack_30;
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
      if (((DAT_05685e80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05685e80), iVar1 != 0)) {
        DAT_05685e70 = PTR_DAT_04bb2020 + 0x10;
        DAT_05685e78 = "@T_Name_00";
        __cxa_guard_release(&DAT_05685e80);
      }
      if (((DAT_05685e98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05685e98), iVar1 != 0)) {
        DAT_05685e88 = PTR_DAT_04bb2020 + 0x10;
        DAT_05685e90 = "P_Icon_00";
        __cxa_guard_release(&DAT_05685e98);
      }
      local_48 = *param_2;
      local_28 = 1;
      local_38 = &DAT_04ac28f0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_40 = &DAT_04ac2900;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02d88c90;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05685e50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05685e50), iVar1 != 0)) {
    DAT_05685e40 = PTR_DAT_04bb2020 + 0x10;
    DAT_05685e48 = "@T_Title_00";
    __cxa_guard_release(&DAT_05685e50);
  }
  if (((DAT_05685e68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05685e68), iVar1 != 0)) {
    DAT_05685e58 = PTR_DAT_04bb2020 + 0x10;
    DAT_05685e60 = "N_3D_00";
    __cxa_guard_release(&DAT_05685e68);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = *param_2;
  local_38 = &DAT_04ac28d0;
  local_28 = 0;
  puStack_40 = &DAT_04ac28e0;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02d88c90:
  uStack_30 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

