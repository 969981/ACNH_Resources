
void FUN_03471004(undefined8 param_1,undefined8 *param_2)

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
      if (pcVar5[3] != 'G') {
        return;
      }
      if (pcVar5[4] != 'u') {
        return;
      }
      if (pcVar5[5] != 'i') {
        return;
      }
      if (pcVar5[6] != 'd') {
        return;
      }
      if (pcVar5[7] != 'e') {
        return;
      }
      if (pcVar5[8] != '_') {
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
      if (((DAT_0575c778 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575c778), iVar1 != 0)) {
        DAT_0575c758 = PTR_DAT_04bb2020 + 0x10;
        DAT_0575c760 = "State";
        DAT_0575c770 = &DAT_0407ebb1;
        DAT_0575c768 = DAT_0575c758;
        __cxa_guard_release(&DAT_0575c778);
      }
      if (((DAT_0575c790 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575c790), iVar1 != 0)) {
        DAT_0575c780 = 0x100000002;
        DAT_0575c788 = &DAT_0575c758;
        __cxa_guard_release(&DAT_0575c790);
      }
      if (((DAT_0575c808 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575c808), iVar1 != 0)) {
        DAT_0575c798 = PTR_DAT_04bb2020 + 0x10;
        DAT_0575c7a0 = "@T_IconL_00";
        DAT_0575c7d0 = "@T_Text_00";
        DAT_0575c7b0 = "@T_Text_01";
        DAT_0575c7c0 = "@T_IconR_00";
        DAT_0575c7e0 = "@T_Icon_00";
        DAT_0575c7f0 = "@T_Plus_00";
        DAT_0575c800 = "@T_Hold_00";
        DAT_0575c7a8 = DAT_0575c798;
        DAT_0575c7b8 = DAT_0575c798;
        DAT_0575c7c8 = DAT_0575c798;
        DAT_0575c7d8 = DAT_0575c798;
        DAT_0575c7e8 = DAT_0575c798;
        DAT_0575c7f8 = DAT_0575c798;
        __cxa_guard_release(&DAT_0575c808);
      }
      local_48 = &DAT_04b2c8f8;
      local_40 = &DAT_0575c780;
      lVar4 = puVar7[2];
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = lVar4 + 0x208;
      goto LAB_03471094;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = (undefined8 *)0x0;
  local_48 = (undefined *)0x0;
  uStack_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_03471094:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

