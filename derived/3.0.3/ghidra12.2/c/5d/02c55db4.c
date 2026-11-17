
void FUN_02c55db4(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_0565dab0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565dab0), iVar1 != 0)) {
        DAT_0565da50 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565da58 = "BtnListRandom";
        DAT_0565da68 = &DAT_0407ebb1;
        DAT_0565da88 = &DAT_0407ebb1;
        DAT_0565daa8 = &DAT_0407ebb1;
        DAT_0565da78 = "FacilityIconOnOff";
        DAT_0565da98 = &DAT_040fe5ab;
        DAT_0565da60 = DAT_0565da50;
        DAT_0565da70 = DAT_0565da50;
        DAT_0565da80 = DAT_0565da50;
        DAT_0565da90 = DAT_0565da50;
        DAT_0565daa0 = DAT_0565da50;
        __cxa_guard_release(&DAT_0565dab0);
      }
      if (((DAT_0565dac8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565dac8), iVar1 != 0)) {
        DAT_0565dab8 = 0x300000002;
        DAT_0565dac0 = &DAT_0565da50;
        __cxa_guard_release(&DAT_0565dac8);
      }
      if (((DAT_0565dae0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565dae0), iVar1 != 0)) {
        DAT_0565dad0 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565dad8 = "@T_Name_00";
        __cxa_guard_release(&DAT_0565dae0);
      }
      if (((DAT_0565daf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565daf8), iVar1 != 0)) {
        DAT_0565dae8 = PTR_DAT_04bb2020 + 0x10;
        DAT_0565daf0 = "P_Icon_00";
        __cxa_guard_release(&DAT_0565daf8);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04ab1b90;
      local_40 = &DAT_0565dab8;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04ab1ba0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02c55e44;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = (undefined8 *)0x0;
  local_50 = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_38 = 0;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_02c55e44:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

