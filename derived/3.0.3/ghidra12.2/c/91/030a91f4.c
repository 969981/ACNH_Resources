
void FUN_030a91f4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *puStack_40;
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
      if (pcVar5[3] != 'L') {
        return;
      }
      if (pcVar5[4] != 'o') {
        return;
      }
      if (pcVar5[5] != 'a') {
        return;
      }
      if (pcVar5[6] != 'd') {
        return;
      }
      if (pcVar5[7] != 'G') {
        return;
      }
      if (pcVar5[8] != 'a') {
        return;
      }
      if (pcVar5[9] != 'u') {
        return;
      }
      if (pcVar5[10] != 'g') {
        return;
      }
      if (pcVar5[0xb] != 'e') {
        return;
      }
      if (pcVar5[0xc] != '_') {
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
      if (((DAT_056e7d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e7d80), iVar1 != 0)) {
        DAT_056e7d40 = PTR_DAT_04bb2020 + 0x10;
        DAT_056e7d48 = "GaugeSize";
        DAT_056e7d58 = &DAT_0407ebb1;
        DAT_056e7d78 = &DAT_0407ebb1;
        DAT_056e7d68 = "Blink";
        DAT_056e7d50 = DAT_056e7d40;
        DAT_056e7d60 = DAT_056e7d40;
        DAT_056e7d70 = DAT_056e7d40;
        __cxa_guard_release(&DAT_056e7d80);
      }
      if (((DAT_056e7d98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e7d98), iVar1 != 0)) {
        DAT_056e7d88 = 0x200000002;
        DAT_056e7d90 = &DAT_056e7d40;
        __cxa_guard_release(&DAT_056e7d98);
      }
      if (((DAT_056e7db0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e7db0), iVar1 != 0)) {
        DAT_056e7da0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056e7da8 = "@T_Text_00";
        __cxa_guard_release(&DAT_056e7db0);
      }
      if (((DAT_056e7e58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e7e58), iVar1 != 0)) {
        DAT_056e7db8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056e7dc0 = "N_Progress_01";
        DAT_056e7df0 = "N_Progress_04";
        DAT_056e7dd0 = "N_Progress_02";
        DAT_056e7de0 = "N_Progress_03";
        DAT_056e7e00 = "N_Progress_00";
        DAT_056e7e10 = "N_Loop_00";
        DAT_056e7e20 = "N_Loop_01";
        DAT_056e7e30 = "N_Loop_02";
        DAT_056e7e40 = "N_Loop_03";
        DAT_056e7e50 = "N_Loop_04";
        DAT_056e7dc8 = DAT_056e7db8;
        DAT_056e7dd8 = DAT_056e7db8;
        DAT_056e7de8 = DAT_056e7db8;
        DAT_056e7df8 = DAT_056e7db8;
        DAT_056e7e08 = DAT_056e7db8;
        DAT_056e7e18 = DAT_056e7db8;
        DAT_056e7e28 = DAT_056e7db8;
        DAT_056e7e38 = DAT_056e7db8;
        DAT_056e7e48 = DAT_056e7db8;
        __cxa_guard_release(&DAT_056e7e58);
      }
      local_58 = *param_2;
      local_48 = &DAT_04afb6b8;
      puStack_40 = &DAT_056e7d88;
      local_50 = &DAT_04afb6c8;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_030a929c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056e7d38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e7d38), iVar1 != 0)) {
    DAT_056e7cc8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056e7cd0 = "@T_HeadName_00";
    DAT_056e7d00 = "@T_Title_00";
    DAT_056e7ce0 = "@T_HeadFlight_00";
    DAT_056e7cf0 = "@T_Name_00";
    DAT_056e7d10 = "@T_From_00";
    DAT_056e7d20 = "@T_HeadFrom_00";
    DAT_056e7d30 = "@T_TitleName_00";
    DAT_056e7cd8 = DAT_056e7cc8;
    DAT_056e7ce8 = DAT_056e7cc8;
    DAT_056e7cf8 = DAT_056e7cc8;
    DAT_056e7d08 = DAT_056e7cc8;
    DAT_056e7d18 = DAT_056e7cc8;
    DAT_056e7d28 = DAT_056e7cc8;
    __cxa_guard_release(&DAT_056e7d38);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04afb6a8;
  puStack_40 = (undefined8 *)0x0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_50 = (undefined *)0x0;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_030a929c:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

